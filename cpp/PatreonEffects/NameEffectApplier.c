// Type: PatreonEffects.NameEffectApplier
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PatreonEffects/NameEffectApplier.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.NameEffectApplier$$Awake
// il2cpp: void PatreonEffects_NameEffectApplier__Awake (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x1820c43c0

void PatreonEffects_NameEffectApplier__Awake(PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *value;
  
  if (Il2CppMethodInitialized_184346945 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    Il2CppMethodInitialized_184346945 = '\x01';
  }
  value = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)__this,
                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
  (__this->fields)._legacyText = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._legacyText,value);
  return;
}


// PatreonEffects.NameEffectApplier$$ApplyForPlayer
// il2cpp: void PatreonEffects_NameEffectApplier__ApplyForPlayer (PatreonEffects_NameEffectApplier_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x1820c3fb0

void PatreonEffects_NameEffectApplier__ApplyForPlayer
               (PatreonEffects_NameEffectApplier_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method
               )

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_UI_Text_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  bool bVar4;
  bool bVar5;
  TMPro_TMP_FontAsset_o *value;
  TMPro_TMP_FontAsset_o *y;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar6;
  PatreonEffects_NameEffectController_o *pPVar7;
  PatreonEffects_NameEffectSettings_o *settings;
  PatreonEffects_ResolvedNameEffect_Fields local_b8;
  UnityEngine_Color_Fields local_68 [6];
  
  if (Il2CppMethodInitialized_184346946 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_184346946 = '\x01';
  }
  local_b8.ColorD.fields.b = 0.0;
  local_b8.ColorD.fields.a = 0.0;
  local_b8.Enabled = false;
  local_b8._1_3_ = 0;
  local_b8.Type = 0;
  local_b8.ColorA.fields.r = 0.0;
  local_b8.ColorA.fields.g = 0.0;
  local_b8.ColorA.fields.b = 0.0;
  local_b8.ColorA.fields.a = 0.0;
  local_b8.ColorB.fields.r = 0.0;
  local_b8.ColorB.fields.g = 0.0;
  local_b8.ColorB.fields.b = 0.0;
  local_b8.ColorB.fields.a = 0.0;
  local_b8.ColorC.fields.r = 0.0;
  local_b8.ColorC.fields.g = 0.0;
  local_b8.ColorC.fields.b = 0.0;
  local_b8.ColorC.fields.a = 0.0;
  local_b8.ColorD.fields.r = 0.0;
  local_b8.ColorD.fields.g = 0.0;
  if ((player == (Photon_Realtime_Player_o *)0x0) ||
     (bVar4 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player,(MethodInfo *)0x0), !bVar4)) {
label_1820c4388:
    PatreonEffects_NameEffectApplier__ClearEffect(__this,(MethodInfo *)0x0);
    return;
  }
  bVar4 = PatreonEffects_NameEffectHelpers__TryGetNameEffect
                    (player,(PatreonEffects_ResolvedNameEffect_o *)&local_b8,(MethodInfo *)0x0);
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  value = PatreonEffects_NameFontCatalog__FontForPlayer(player,false,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    y = PatreonEffects_NameFontCatalog__Load("Normal",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  }
  else {
    bVar5 = false;
  }
  if ((!bVar4) && (bVar5 == false)) goto label_1820c4388;
  PatreonEffects_NameEffectApplier__EnsureOverlay(__this,(MethodInfo *)0x0);
  PatreonEffects_NameEffectApplier__SyncLegacyTextStyle(__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pTVar1 = (__this->fields)._tmpText;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1820c43ab;
    TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
  }
  if (Il2CppMethodInitialized_184346947 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346947 = '\x01';
  }
  pTVar1 = (__this->fields)._tmpText;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pUVar2 = (__this->fields)._legacyText;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar2 = (__this->fields)._legacyText;
      if (pUVar2 == (UnityEngine_UI_Text_o *)0x0) goto label_1820c43ab;
      pTVar1 = (__this->fields)._tmpText;
      GVar6 = (*(pUVar2->klass->vtable)._74_get_text.methodPtr)
                        (pUVar2,(pUVar2->klass->vtable)._74_get_text.method);
      if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1820c43ab;
      (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
                (pTVar1,(System_String_o *)GVar6.fields,(pTVar1->klass->vtable)._66_set_text.method);
    }
  }
  if (bVar4) {
    if (Il2CppMethodInitialized_18434694a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_18434694a = '\x01';
    }
    pPVar7 = (__this->fields)._controller;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pPVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar3 = (__this->fields)._tmpOverlay;
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_1820c43ab;
      pPVar7 = UnityEngine_GameObject__AddComponent_object_
                         (pUVar3,(MethodInfo_6F4D60 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
      (__this->fields)._controller = pPVar7;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._controller,pPVar7);
      pPVar7 = (__this->fields)._controller;
      if (pPVar7 == (PatreonEffects_NameEffectController_o *)0x0) goto label_1820c43ab;
      bVar4 = PatreonEffects_NameEffectController__FindText(pPVar7,(MethodInfo *)0x0);
      if (bVar4) {
        (pPVar7->fields).cleared = false;
        bVar4 = PatreonEffects_NameEffectController__RefreshOriginalMaterial(pPVar7,(MethodInfo *)0x0);
        if (bVar4) {
          (pPVar7->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
          Il2CppCodeGenWriteBarrier(&(pPVar7->fields).runtimeMat,(void *)0x0);
          (pPVar7->fields).initialized = false;
        }
      }
    }
    settings = PatreonEffects_NameEffectPresets__GetPreset(local_b8.Type,(MethodInfo *)0x0);
    if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_1820c43ab;
    (settings->fields).gradientA.fields.r = local_b8.ColorA.fields.r;
    (settings->fields).gradientA.fields.g = local_b8.ColorA.fields.g;
    (settings->fields).gradientA.fields.b = local_b8.ColorA.fields.b;
    (settings->fields).gradientA.fields.a = local_b8.ColorA.fields.a;
    (settings->fields).gradientB.fields.r = local_b8.ColorB.fields.r;
    (settings->fields).gradientB.fields.g = local_b8.ColorB.fields.g;
    (settings->fields).gradientB.fields.b = local_b8.ColorB.fields.b;
    (settings->fields).gradientB.fields.a = local_b8.ColorB.fields.a;
    (settings->fields).gradientC.fields.r = local_b8.ColorC.fields.r;
    (settings->fields).gradientC.fields.g = local_b8.ColorC.fields.g;
    (settings->fields).gradientC.fields.b = local_b8.ColorC.fields.b;
    (settings->fields).gradientC.fields.a = local_b8.ColorC.fields.a;
    (settings->fields).gradientD.fields.r = local_b8.ColorD.fields.r;
    (settings->fields).gradientD.fields.g = local_b8.ColorD.fields.g;
    (settings->fields).gradientD.fields.b = local_b8.ColorD.fields.b;
    (settings->fields).gradientD.fields.a = local_b8.ColorD.fields.a;
    pTVar1 = (__this->fields)._tmpText;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1820c43ab;
    local_68[0].r = 1.0;
    local_68[0].g = 1.0;
    local_68[0].b = 1.0;
    local_68[0].a = 1.0;
    (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
              (pTVar1,(UnityEngine_Color_o *)local_68,(pTVar1->klass->vtable)._23_set_color.method);
    pPVar7 = (__this->fields)._controller;
    if (pPVar7 == (PatreonEffects_NameEffectController_o *)0x0) goto label_1820c43ab;
    PatreonEffects_NameEffectController__Apply(pPVar7,settings,(MethodInfo *)0x0);
  }
  else {
    PatreonEffects_NameEffectApplier__ClearController(__this,(MethodInfo *)0x0);
  }
  pUVar3 = (__this->fields)._tmpOverlay;
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._legacyText;
    if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,false,(MethodInfo *)0x0);
      (__this->fields)._styleActive = true;
      return;
    }
  }
label_1820c43ab:
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectApplier$$SyncText
// il2cpp: void PatreonEffects_NameEffectApplier__SyncText (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x1820c4cd0

void PatreonEffects_NameEffectApplier__SyncText(PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_UI_Text_o *pUVar2;
  bool bVar3;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar4;
  
  if (Il2CppMethodInitialized_184346947 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346947 = '\x01';
  }
  pTVar1 = (__this->fields)._tmpText;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._legacyText;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar2 = (__this->fields)._legacyText;
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        pTVar1 = (__this->fields)._tmpText;
        GVar4 = (*(pUVar2->klass->vtable)._74_get_text.methodPtr)
                          (pUVar2,(pUVar2->klass->vtable)._74_get_text.method);
        if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
          (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
                    (pTVar1,(System_String_o *)GVar4.fields,(pTVar1->klass->vtable)._66_set_text.method);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// PatreonEffects.NameEffectApplier$$ClearEffect
// il2cpp: void PatreonEffects_NameEffectApplier__ClearEffect (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x1820c4560

void PatreonEffects_NameEffectApplier__ClearEffect
               (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346948 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346948 = '\x01';
  }
  PatreonEffects_NameEffectApplier__ClearController(__this,(MethodInfo *)0x0);
  x = (UnityEngine_Object_o *)(__this->fields)._tmpOverlay;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = (__this->fields)._tmpOverlay;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_1820c461c;
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._legacyText;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._legacyText;
    if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) {
label_1820c461c:
      ThrowNullReferenceException();
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,true,(MethodInfo *)0x0);
  }
  (__this->fields)._styleActive = false;
  return;
}


// PatreonEffects.NameEffectApplier$$get_IsEffectActive
// il2cpp: bool PatreonEffects_NameEffectApplier__get_IsEffectActive (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x180a374e0

bool
PatreonEffects_NameEffectApplier__get_IsEffectActive(PatreonEffects_NameEffectApplier_o* __this, MethodInfo* method)

{
  return (__this->fields)._styleActive;
}


// PatreonEffects.NameEffectApplier$$EnsureOverlay
// il2cpp: void PatreonEffects_NameEffectApplier__EnsureOverlay (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x1820c4630

void PatreonEffects_NameEffectApplier__EnsureOverlay
               (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Il2CppType *handle;
  bool bVar1;
  System_Type_array *components;
  System_Type_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector3_o *pUVar7;
  TMPro_TextMeshProUGUI_o *pTVar8;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184346949 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_TMPro_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"NameEffectOverlay");
    Il2CppMethodInitialized_184346949 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._tmpOverlay;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_1820c4a07:
    ThrowNullReferenceException();
  }
  if ((pSVar2 != (System_Type_o *)0x0) &&
     (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class),
     pIVar3 == (Il2CppObject *)0x0)) {
    pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar2);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if ((pSVar2 != (System_Type_o *)0x0) &&
       (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class)
       , pIVar3 == (Il2CppObject *)0x0)) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar2);
      pSVar2 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
      if ((pSVar2 != (System_Type_o *)0x0) &&
         (pIVar3 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class),
         pIVar3 == (Il2CppObject *)0x0)) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar2;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2,pSVar2);
        pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_2f1abe0(pUVar4,"NameEffectOverlay",components,(MethodInfo *)0x0);
        (__this->fields)._tmpOverlay = pUVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._tmpOverlay,pUVar4);
        pUVar4 = (__this->fields)._tmpOverlay;
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          __this_00 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
          pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if ((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
             (pUVar5 = UnityEngine_Transform__GetParent(pUVar5,(MethodInfo *)0x0),
             __this_00 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetParent_2f5a7e0(__this_00,pUVar5,false,(MethodInfo *)0x0);
            __this_01 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)__this,
                                   (MethodInfo_6651A0 *)
                                   MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
            pUVar4 = (__this->fields)._tmpOverlay;
            if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
               ((__this_02 = UnityEngine_GameObject__GetComponent_object_
                                       (pUVar4,(MethodInfo_6F5650 *)
                                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform),
                __this_01 != (UnityEngine_RectTransform_o *)0x0 &&
                (UVar6 = UnityEngine_RectTransform__get_anchorMin(__this_01,(MethodInfo *)0x0),
                __this_02 != (UnityEngine_RectTransform_o *)0x0)))) {
              UnityEngine_RectTransform__set_anchorMin(__this_02,UVar6,(MethodInfo *)0x0);
              UVar6 = UnityEngine_RectTransform__get_anchorMax(__this_01,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_anchorMax(__this_02,UVar6,(MethodInfo *)0x0);
              UVar6 = UnityEngine_RectTransform__get_pivot(__this_01,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_pivot(__this_02,UVar6,(MethodInfo *)0x0);
              UVar6 = UnityEngine_RectTransform__get_anchoredPosition(__this_01,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_anchoredPosition(__this_02,UVar6,(MethodInfo *)0x0);
              UVar6 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_sizeDelta(__this_02,UVar6,(MethodInfo *)0x0);
              pUVar7 = UnityEngine_Transform__get_localScale
                                 (&local_18,(UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
              local_28.x = (pUVar7->fields).x;
              local_28.y = (pUVar7->fields).y;
              local_28.z = (pUVar7->fields).z;
              UnityEngine_Transform__set_localScale
                        ((UnityEngine_Transform_o *)__this_02,(UnityEngine_Vector3_o *)&local_28,
                         (MethodInfo *)0x0);
              pUVar4 = (__this->fields)._tmpOverlay;
              if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                pTVar8 = UnityEngine_GameObject__GetComponent_object_
                                   (pUVar4,(MethodInfo_6F5650 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
                (__this->fields)._tmpText = pTVar8;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._tmpText,pTVar8);
                pTVar8 = (__this->fields)._tmpText;
                if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
                  (*(pTVar8->klass->vtable)._25_set_raycastTarget.methodPtr)
                            (pTVar8,false,(pTVar8->klass->vtable)._25_set_raycastTarget.method);
                  pTVar8 = (__this->fields)._tmpText;
                  if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)pTVar8,false,(MethodInfo *)0x0)
                    ;
                    pTVar8 = (__this->fields)._tmpText;
                    if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
                      TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar8,0,(MethodInfo *)0x0);
                      PatreonEffects_NameEffectApplier__SyncLegacyTextStyle(__this,(MethodInfo *)0x0);
                      pUVar4 = (__this->fields)._tmpOverlay;
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
        goto label_1820c4a07;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// PatreonEffects.NameEffectApplier$$ApplyEffect
// il2cpp: void PatreonEffects_NameEffectApplier__ApplyEffect (PatreonEffects_NameEffectApplier_o* __this, PatreonEffects_ResolvedNameEffect_o effect, const MethodInfo* method);
// 0x1820c3db0

void PatreonEffects_NameEffectApplier__ApplyEffect
               (PatreonEffects_NameEffectApplier_o *__this,PatreonEffects_ResolvedNameEffect_o *effect,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  undefined4 type;
  TMPro_TextMeshProUGUI_o *pTVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  PatreonEffects_NameEffectController_o *pPVar6;
  PatreonEffects_NameEffectSettings_o *settings;
  UnityEngine_Color_Fields local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (Il2CppMethodInitialized_18434694a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434694a = '\x01';
  }
  pPVar6 = (__this->fields)._controller;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    __this_00 = (__this->fields)._tmpOverlay;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_1820c3f9b;
    pPVar6 = UnityEngine_GameObject__AddComponent_object_
                       (__this_00,
                        (MethodInfo_6F4D60 *)
                        MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    (__this->fields)._controller = pPVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._controller,pPVar6);
    pPVar6 = (__this->fields)._controller;
    if (pPVar6 == (PatreonEffects_NameEffectController_o *)0x0) goto label_1820c3f9b;
    bVar5 = PatreonEffects_NameEffectController__FindText(pPVar6,(MethodInfo *)0x0);
    if (bVar5) {
      (pPVar6->fields).cleared = false;
      bVar5 = PatreonEffects_NameEffectController__RefreshOriginalMaterial(pPVar6,(MethodInfo *)0x0);
      if (bVar5) {
        (pPVar6->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(pPVar6->fields).runtimeMat,(void *)0x0);
        (pPVar6->fields).initialized = false;
      }
    }
  }
  local_68._0_4_ = (effect->fields).ColorA.fields.b;
  local_68._4_4_ = (effect->fields).ColorA.fields.a;
  uStack_60._0_4_ = (effect->fields).ColorB.fields.r;
  uStack_60._4_4_ = (effect->fields).ColorB.fields.g;
  type = (effect->fields).Type;
  local_58._0_4_ = (effect->fields).ColorB.fields.b;
  local_58._4_4_ = (effect->fields).ColorB.fields.a;
  uStack_50._0_4_ = (effect->fields).ColorC.fields.r;
  uStack_50._4_4_ = (effect->fields).ColorC.fields.g;
  local_48._0_4_ = (effect->fields).ColorC.fields.b;
  local_48._4_4_ = (effect->fields).ColorC.fields.a;
  uStack_40._0_4_ = (effect->fields).ColorD.fields.r;
  uStack_40._4_4_ = (effect->fields).ColorD.fields.g;
  local_38._0_4_ = (effect->fields).ColorD.fields.b;
  local_38._4_4_ = (effect->fields).ColorD.fields.a;
  settings = PatreonEffects_NameEffectPresets__GetPreset(type,(MethodInfo *)0x0);
  local_78._0_1_ = (effect->fields).Enabled;
  local_78._1_3_ = *(undefined3 *)&(effect->fields).field_0x1;
  local_78._4_4_ = (effect->fields).Type;
  uStack_70._0_4_ = (effect->fields).ColorA.fields.r;
  uStack_70._4_4_ = (effect->fields).ColorA.fields.g;
  uVar2._0_4_ = (effect->fields).ColorA.fields.b;
  uVar2._4_4_ = (effect->fields).ColorA.fields.a;
  uStack_60._0_4_ = (effect->fields).ColorB.fields.r;
  uStack_60._4_4_ = (effect->fields).ColorB.fields.g;
  local_58._0_4_ = (effect->fields).ColorB.fields.b;
  local_58._4_4_ = (effect->fields).ColorB.fields.a;
  uStack_50._0_4_ = (effect->fields).ColorC.fields.r;
  uStack_50._4_4_ = (effect->fields).ColorC.fields.g;
  local_48._0_4_ = (effect->fields).ColorC.fields.b;
  local_48._4_4_ = (effect->fields).ColorC.fields.a;
  uStack_40._0_4_ = (effect->fields).ColorD.fields.r;
  uStack_40._4_4_ = (effect->fields).ColorD.fields.g;
  local_38._0_4_ = (effect->fields).ColorD.fields.b;
  local_38._4_4_ = (effect->fields).ColorD.fields.a;
  local_68 = uVar2;
  if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
    local_68._0_4_ = (effect->fields).ColorA.fields.b;
    local_68._4_4_ = (effect->fields).ColorA.fields.a;
    uStack_60._0_4_ = (effect->fields).ColorB.fields.r;
    uStack_60._4_4_ = (effect->fields).ColorB.fields.g;
    (settings->fields).gradientA.fields.r = (float)(undefined4)uStack_70;
    (settings->fields).gradientA.fields.g = (float)uStack_70._4_4_;
    (settings->fields).gradientA.fields.b = (float)(undefined4)uVar2;
    (settings->fields).gradientA.fields.a = (float)uVar2._4_4_;
    fVar3 = (effect->fields).ColorB.fields.b;
    fVar4 = (effect->fields).ColorB.fields.a;
    local_58._0_4_ = (effect->fields).ColorB.fields.b;
    local_58._4_4_ = (effect->fields).ColorB.fields.a;
    uStack_50._0_4_ = (effect->fields).ColorC.fields.r;
    uStack_50._4_4_ = (effect->fields).ColorC.fields.g;
    (settings->fields).gradientB.fields.r = (float)(undefined4)uStack_60;
    (settings->fields).gradientB.fields.g = (float)uStack_60._4_4_;
    (settings->fields).gradientB.fields.b = fVar3;
    (settings->fields).gradientB.fields.a = fVar4;
    fVar3 = (effect->fields).ColorC.fields.b;
    fVar4 = (effect->fields).ColorC.fields.a;
    local_38._0_4_ = (effect->fields).ColorD.fields.b;
    local_38._4_4_ = (effect->fields).ColorD.fields.a;
    (settings->fields).gradientC.fields.r = (float)(undefined4)uStack_50;
    (settings->fields).gradientC.fields.g = (float)uStack_50._4_4_;
    (settings->fields).gradientC.fields.b = fVar3;
    (settings->fields).gradientC.fields.a = fVar4;
    local_48._0_4_ = (effect->fields).ColorC.fields.b;
    local_48._4_4_ = (effect->fields).ColorC.fields.a;
    uStack_40._0_4_ = (effect->fields).ColorD.fields.r;
    uStack_40._4_4_ = (effect->fields).ColorD.fields.g;
    (settings->fields).gradientD.fields.r = (float)(undefined4)uStack_40;
    (settings->fields).gradientD.fields.g = (float)uStack_40._4_4_;
    (settings->fields).gradientD.fields.b = (float)(undefined4)local_38;
    (settings->fields).gradientD.fields.a = (float)local_38._4_4_;
    pTVar1 = (__this->fields)._tmpText;
    if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
      local_88.r = 1.0;
      local_88.g = 1.0;
      local_88.b = 1.0;
      local_88.a = 1.0;
      (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
                (pTVar1,(UnityEngine_Color_o *)&local_88,(pTVar1->klass->vtable)._23_set_color.method);
      pPVar6 = (__this->fields)._controller;
      if (pPVar6 != (PatreonEffects_NameEffectController_o *)0x0) {
        PatreonEffects_NameEffectController__Apply(pPVar6,settings,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_1820c3f9b:
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectApplier$$ClearController
// il2cpp: void PatreonEffects_NameEffectApplier__ClearController (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x1820c4410

void PatreonEffects_NameEffectApplier__ClearController
               (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *pPVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  UnityEngine_UI_Text_o *pUVar3;
  bool bVar4;
  Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *pUVar5;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_18434694b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434694b = '\x01';
  }
  pPVar1 = (__this->fields)._controller;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pPVar1 = (__this->fields)._controller;
    if (pPVar1 == (PatreonEffects_NameEffectController_o *)0x0) goto label_1820c4554;
    PatreonEffects_NameEffectController__Clear(pPVar1,(MethodInfo *)0x0);
    pPVar1 = (__this->fields)._controller;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pPVar1,(MethodInfo *)0x0);
    (__this->fields)._controller = (PatreonEffects_NameEffectController_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._controller,(void *)0x0);
  }
  pTVar2 = (__this->fields)._tmpText;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar3 = (__this->fields)._legacyText;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar3 = (__this->fields)._legacyText;
      if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
        pTVar2 = (__this->fields)._tmpText;
        pUVar5 = (*(pUVar3->klass->vtable)._22_get_color.methodPtr)
                           ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)&local_18,pUVar3
                            ,(pUVar3->klass->vtable)._22_get_color.method);
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          local_18.fields.r = *(float *)&(pUVar5->fields).m_Ptr;
          local_18.fields.g = *(float *)((longlong)&(pUVar5->fields).m_Ptr + 4);
          local_18.fields.b = (float)(pUVar5->fields).m_Count;
          local_18.fields.a = *(float *)&(pUVar5->fields).field_0xc;
          (*(pTVar2->klass->vtable)._23_set_color.methodPtr)
                    (pTVar2,&local_18,(pTVar2->klass->vtable)._23_set_color.method);
          return;
        }
      }
label_1820c4554:
      ThrowNullReferenceException();
    }
  }
  return;
}


// PatreonEffects.NameEffectApplier$$SyncLegacyTextStyle
// il2cpp: void PatreonEffects_NameEffectApplier__SyncLegacyTextStyle (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x1820c4ae0

void PatreonEffects_NameEffectApplier__SyncLegacyTextStyle
               (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_UI_Text_o *pUVar2;
  bool bVar3;
  int32_t iVar4;
  Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *pUVar5;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_18434694c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434694c = '\x01';
  }
  pTVar1 = (__this->fields)._tmpText;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pUVar2 = (__this->fields)._legacyText;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pUVar2 = (__this->fields)._legacyText;
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        pTVar1 = (__this->fields)._tmpText;
        iVar4 = UnityEngine_UI_Text__get_fontSize(pUVar2,(MethodInfo *)0x0);
        if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
          TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)pTVar1,(float)iVar4,(MethodInfo *)0x0);
          pUVar2 = (__this->fields)._legacyText;
          if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
            pTVar1 = (__this->fields)._tmpText;
            pUVar5 = (*(pUVar2->klass->vtable)._22_get_color.methodPtr)
                               ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)&local_18,
                                pUVar2,(pUVar2->klass->vtable)._22_get_color.method);
            if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
              local_18._0_8_ = (pUVar5->fields).m_Ptr;
              local_18.b = (float)(pUVar5->fields).m_Count;
              local_18.a = *(float *)&(pUVar5->fields).field_0xc;
              (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
                        (pTVar1,(UnityEngine_Color_o *)&local_18,(pTVar1->klass->vtable)._23_set_color.method)
              ;
              pUVar2 = (__this->fields)._legacyText;
              if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
                pTVar1 = (__this->fields)._tmpText;
                iVar4 = UnityEngine_UI_Text__get_alignment(pUVar2,(MethodInfo *)0x0);
                switch(iVar4) {
                case 0:
                  iVar4 = 0x101;
                  break;
                case 1:
                  iVar4 = 0x102;
                  break;
                case 2:
                  iVar4 = 0x104;
                  break;
                case 3:
                  iVar4 = 0x1001;
                  break;
                default:
                  iVar4 = 0x1002;
                  break;
                case 5:
                  iVar4 = 0x1004;
                  break;
                case 6:
                  iVar4 = 0x401;
                  break;
                case 7:
                  iVar4 = 0x402;
                  break;
                case 8:
                  iVar4 = 0x404;
                }
                if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
                  TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar1,iVar4,(MethodInfo *)0x0);
                  pUVar2 = (__this->fields)._legacyText;
                  if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
                    pTVar1 = (__this->fields)._tmpText;
                    bVar3 = UnityEngine_UI_Text__get_supportRichText(pUVar2,(MethodInfo *)0x0);
                    if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
                      TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)pTVar1,bVar3,(MethodInfo *)0x0);
                      return;
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
  }
  return;
}


// PatreonEffects.NameEffectApplier$$ToTmpAlignment
// il2cpp: int32_t PatreonEffects_NameEffectApplier__ToTmpAlignment (int32_t alignment, const MethodInfo* method);
// 0x1820c4da0

int32_t PatreonEffects_NameEffectApplier__ToTmpAlignment(int32_t alignment,MethodInfo *method)

{
  switch(alignment) {
  case 0:
    return 0x101;
  case 1:
    return 0x102;
  case 2:
    return 0x104;
  case 3:
    return 0x1001;
  default:
    return 0x1002;
  case 5:
    return 0x1004;
  case 6:
    return 0x401;
  case 7:
    return 0x402;
  case 8:
    return 0x404;
  }
}


// PatreonEffects.NameEffectApplier$$OnDestroy
// il2cpp: void PatreonEffects_NameEffectApplier__OnDestroy (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x1820c4a50

void PatreonEffects_NameEffectApplier__OnDestroy
               (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434694d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434694d = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._tmpOverlay;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._tmpOverlay;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
  }
  return;
}


// PatreonEffects.NameEffectApplier$$.ctor
// il2cpp: void PatreonEffects_NameEffectApplier___ctor (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x180528540

void
PatreonEffects_NameEffectApplier___ctor(PatreonEffects_NameEffectApplier_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


