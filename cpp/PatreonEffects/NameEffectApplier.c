// Type: PatreonEffects.NameEffectApplier
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PatreonEffects/NameEffectApplier.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.NameEffectApplier$$Awake
// il2cpp: void PatreonEffects_NameEffectApplier__Awake (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x59c0c80

void PatreonEffects_NameEffectApplier__Awake(PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  
  if (Il2CppMethodInitialized_07545bd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    Il2CppMethodInitialized_07545bd9 = '\x01';
  }
  pUVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
  (__this->fields)._legacyText = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._legacyText);
  return;
}


// PatreonEffects.NameEffectApplier$$ApplyForPlayer
// il2cpp: void PatreonEffects_NameEffectApplier__ApplyForPlayer (PatreonEffects_NameEffectApplier_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x59c0cd0

void PatreonEffects_NameEffectApplier__ApplyForPlayer
               (PatreonEffects_NameEffectApplier_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method
               )

{
  TMPro_TextMeshProUGUI_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Text_o *__this_02;
  PatreonEffects_ResolvedNameEffect_o effect;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  TMPro_TMP_FontAsset_o *value;
  TMPro_TMP_FontAsset_o *pTVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  PatreonEffects_ResolvedNameEffect_Fields local_78;
  
  pTVar4 = (TMPro_TMP_FontAsset_o *)player;
  if (Il2CppMethodInitialized_07545bda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_07545bda = '\x01';
  }
  local_78.ColorC.fields.b = 0.0;
  local_78.ColorC.fields.a = 0.0;
  local_78.ColorD.fields.r = 0.0;
  local_78.ColorD.fields.g = 0.0;
  local_78.ColorB.fields.b = 0.0;
  local_78.ColorB.fields.a = 0.0;
  local_78.ColorC.fields.r = 0.0;
  local_78.ColorC.fields.g = 0.0;
  local_78.ColorA.fields.b = 0.0;
  local_78.ColorA.fields.a = 0.0;
  local_78.ColorB.fields.r = 0.0;
  local_78.ColorB.fields.g = 0.0;
  local_78.Enabled = false;
  local_78._1_3_ = 0;
  local_78.Type = 0;
  local_78.ColorA.fields.r = 0.0;
  local_78.ColorA.fields.g = 0.0;
  local_78.ColorD.fields.b = 0.0;
  local_78.ColorD.fields.a = 0.0;
  if (player == (Photon_Realtime_Player_o *)0x0) {
label_059c0ea0:
    PatreonEffects_NameEffectApplier__ClearEffect(__this,(MethodInfo *)pTVar4);
    return;
  }
  bVar1 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player,(MethodInfo *)pTVar4);
  if (!bVar1) goto label_059c0ea0;
  bVar1 = PatreonEffects_NameEffectHelpers__TryGetNameEffect
                    (player,(PatreonEffects_ResolvedNameEffect_o *)&local_78,method_00);
  method_01 = extraout_RDX;
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    method_01 = extraout_RDX_00;
  }
  value = PatreonEffects_NameFontCatalog__FontForPlayer(player,false,method_01);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = false;
  pTVar4 = (TMPro_TMP_FontAsset_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    pTVar4 = PatreonEffects_NameFontCatalog__Load("Normal",(MethodInfo *)pTVar4);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)pTVar4,(MethodInfo *)0x0);
  }
  if (bVar3 == false && !bVar1) goto label_059c0ea0;
  PatreonEffects_NameEffectApplier__EnsureOverlay(__this,(MethodInfo *)pTVar4);
  PatreonEffects_NameEffectApplier__SyncLegacyTextStyle(__this,(MethodInfo *)pTVar4);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pTVar4 = (TMPro_TMP_FontAsset_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = (__this->fields)._tmpText;
    if (__this_00 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_059c0efe;
    TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)__this_00,value,(MethodInfo *)0x0);
    pTVar4 = value;
  }
  PatreonEffects_NameEffectApplier__SyncText(__this,(MethodInfo *)pTVar4);
  if (bVar1) {
    effect.fields.ColorA.fields.r = local_78.ColorA.fields.r;
    effect.fields.ColorA.fields.g = local_78.ColorA.fields.g;
    effect.fields.Enabled = local_78.Enabled;
    effect.fields._1_3_ = local_78._1_3_;
    effect.fields.Type = local_78.Type;
    effect.fields.ColorA.fields.b = local_78.ColorA.fields.b;
    effect.fields.ColorA.fields.a = local_78.ColorA.fields.a;
    effect.fields.ColorB.fields.r = local_78.ColorB.fields.r;
    effect.fields.ColorB.fields.g = local_78.ColorB.fields.g;
    effect.fields.ColorB.fields.b = local_78.ColorB.fields.b;
    effect.fields.ColorB.fields.a = local_78.ColorB.fields.a;
    effect.fields.ColorC.fields.r = local_78.ColorC.fields.r;
    effect.fields.ColorC.fields.g = local_78.ColorC.fields.g;
    effect.fields.ColorC.fields.b = local_78.ColorC.fields.b;
    effect.fields.ColorC.fields.a = local_78.ColorC.fields.a;
    effect.fields.ColorD.fields.r = local_78.ColorD.fields.r;
    effect.fields.ColorD.fields.g = local_78.ColorD.fields.g;
    effect.fields.ColorD.fields.b = local_78.ColorD.fields.b;
    effect.fields.ColorD.fields.a = local_78.ColorD.fields.a;
    PatreonEffects_NameEffectApplier__ApplyEffect(__this,effect,(MethodInfo *)pTVar4);
  }
  else {
    PatreonEffects_NameEffectApplier__ClearController(__this,(MethodInfo *)pTVar4);
  }
  __this_01 = (__this->fields)._tmpOverlay;
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
    __this_02 = (__this->fields)._legacyText;
    if (__this_02 != (UnityEngine_UI_Text_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_02,false,(MethodInfo *)0x0);
      (__this->fields)._styleActive = true;
      return;
    }
  }
label_059c0efe:
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectApplier$$SyncText
// il2cpp: void PatreonEffects_NameEffectApplier__SyncText (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x59c1b00

void PatreonEffects_NameEffectApplier__SyncText(PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_UI_Text_o *pUVar2;
  bool bVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07545bdb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545bdb = '\x01';
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
        pSVar4 = (*(pUVar2->klass->vtable)._74_get_text.methodPtr)
                           (pUVar2,(pUVar2->klass->vtable)._74_get_text.method);
        if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
          (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
                    (pTVar1,pSVar4,(pTVar1->klass->vtable)._66_set_text.method);
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
// 0x59c0fd0

void PatreonEffects_NameEffectApplier__ClearEffect
               (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07545bdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545bdc = '\x01';
  }
  PatreonEffects_NameEffectApplier__ClearController(__this,method);
  x = (UnityEngine_Object_o *)(__this->fields)._tmpOverlay;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = (__this->fields)._tmpOverlay;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_059c108a;
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
label_059c108a:
      ThrowNullReferenceException();
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,true,(MethodInfo *)0x0);
  }
  (__this->fields)._styleActive = false;
  return;
}


// PatreonEffects.NameEffectApplier$$get_IsEffectActive
// il2cpp: bool PatreonEffects_NameEffectApplier__get_IsEffectActive (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x59c1f20

bool PatreonEffects_NameEffectApplier__get_IsEffectActive
               (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  return (__this->fields)._styleActive;
}


// PatreonEffects.NameEffectApplier$$EnsureOverlay
// il2cpp: void PatreonEffects_NameEffectApplier__EnsureOverlay (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x59c15c0

void PatreonEffects_NameEffectApplier__EnsureOverlay
               (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  TMPro_TextMeshProUGUI_o **targetAddress_00;
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
  TMPro_TextMeshProUGUI_o *pTVar6;
  MethodInfo *method_00;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07545bdd == '\0') {
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
    Il2CppMethodInitialized_07545bdd = '\x01';
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
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_059c1993:
    ThrowNullReferenceException();
  }
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_059c199d;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) goto label_059c199d;
    }
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      pSVar2 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
      if (pSVar2 != (System_Type_o *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar3 == (Il2CppObject *)0x0) {
label_059c199d:
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)components->max_length) {
        targetAddress = &(__this->fields)._tmpOverlay;
        components->m_Items[2] = pSVar2;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2);
        pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_691aa60(pUVar4,"NameEffectOverlay",components,(MethodInfo *)0x0);
        *targetAddress = pUVar4;
        Il2CppCodeGenWriteBarrier(targetAddress);
        if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
          __this_00 = UnityEngine_GameObject__get_transform(*targetAddress,(MethodInfo *)0x0);
          pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
            pUVar5 = UnityEngine_Transform__get_parent(pUVar5,(MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_692d510(__this_00,pUVar5,false,(MethodInfo *)0x0);
              __this_01 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)__this,
                                     (MethodInfo_34B0830 *)
                                     MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
              pUVar4 = (__this->fields)._tmpOverlay;
              if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                __this_02 = UnityEngine_GameObject__GetComponent_object_
                                      (pUVar4,(MethodInfo_353B730 *)
                                              MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
                  UVar7 = UnityEngine_RectTransform__get_anchorMin(__this_01,(MethodInfo *)0x0);
                  if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_anchorMin(__this_02,UVar7,(MethodInfo *)0x0);
                    UVar7 = UnityEngine_RectTransform__get_anchorMax(__this_01,(MethodInfo *)0x0);
                    UnityEngine_RectTransform__set_anchorMax(__this_02,UVar7,(MethodInfo *)0x0);
                    UVar7 = UnityEngine_RectTransform__get_pivot(__this_01,(MethodInfo *)0x0);
                    UnityEngine_RectTransform__set_pivot(__this_02,UVar7,(MethodInfo *)0x0);
                    UVar7 = UnityEngine_RectTransform__get_anchoredPosition(__this_01,(MethodInfo *)0x0);
                    UnityEngine_RectTransform__set_anchoredPosition(__this_02,UVar7,(MethodInfo *)0x0);
                    UVar7 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
                    UnityEngine_RectTransform__set_sizeDelta(__this_02,UVar7,(MethodInfo *)0x0);
                    value = UnityEngine_Transform__get_localScale
                                      ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
                    UnityEngine_Transform__set_localScale
                              ((UnityEngine_Transform_o *)__this_02,value,(MethodInfo *)0x0);
                    if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
                      pTVar6 = UnityEngine_GameObject__GetComponent_object_
                                         (*targetAddress,
                                          (MethodInfo_353B730 *)
                                          MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
                      targetAddress_00 = &(__this->fields)._tmpText;
                      (__this->fields)._tmpText = pTVar6;
                      Il2CppCodeGenWriteBarrier(targetAddress_00);
                      pTVar6 = (__this->fields)._tmpText;
                      if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
                        (*(pTVar6->klass->vtable)._25_set_raycastTarget.methodPtr)
                                  (pTVar6,false,(pTVar6->klass->vtable)._25_set_raycastTarget.method);
                        if (*targetAddress_00 != (TMPro_TextMeshProUGUI_o *)0x0) {
                          TMPro_TMP_Text__set_enableWordWrapping
                                    ((TMPro_TMP_Text_o *)*targetAddress_00,false,(MethodInfo *)0x0);
                          if (*targetAddress_00 != (TMPro_TextMeshProUGUI_o *)0x0) {
                            method_00 = (MethodInfo *)0x0;
                            TMPro_TMP_Text__set_overflowMode
                                      ((TMPro_TMP_Text_o *)*targetAddress_00,0,(MethodInfo *)0x0);
                            PatreonEffects_NameEffectApplier__SyncLegacyTextStyle(__this,method_00);
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
            }
          }
        }
        goto label_059c1993;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// PatreonEffects.NameEffectApplier$$ApplyEffect
// il2cpp: void PatreonEffects_NameEffectApplier__ApplyEffect (PatreonEffects_NameEffectApplier_o* __this, PatreonEffects_ResolvedNameEffect_o effect, const MethodInfo* method);
// 0x59c1bd0

void PatreonEffects_NameEffectApplier__ApplyEffect
               (PatreonEffects_NameEffectApplier_o *__this,PatreonEffects_ResolvedNameEffect_o effect,
               MethodInfo *method)

{
  PatreonEffects_NameEffectController_o **targetAddress;
  PatreonEffects_NameEffectController_o *x;
  UnityEngine_GameObject_o *__this_00;
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  PatreonEffects_NameEffectController_o *method_00;
  PatreonEffects_NameEffectSettings_o *settings;
  MethodInfo *method_01;
  UnityEngine_Color_o UVar3;
  
  if (Il2CppMethodInitialized_07545bde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545bde = '\x01';
  }
  x = (__this->fields)._controller;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._controller;
  method_00 = (PatreonEffects_NameEffectController_o *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = (__this->fields)._tmpOverlay;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_059c1dce;
    method_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this_00,
                           (MethodInfo_353B6A0 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    *targetAddress = method_00;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  settings = PatreonEffects_NameEffectPresets__GetPreset(effect.fields.Type,(MethodInfo *)method_00);
  if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
    (settings->fields).gradientA.fields.r = effect.fields.ColorA.fields.r;
    (settings->fields).gradientA.fields.g = effect.fields.ColorA.fields.g;
    (settings->fields).gradientA.fields.b = effect.fields.ColorA.fields.b;
    (settings->fields).gradientA.fields.a = effect.fields.ColorA.fields.a;
    (settings->fields).gradientB.fields.r = effect.fields.ColorB.fields.r;
    (settings->fields).gradientB.fields.g = effect.fields.ColorB.fields.g;
    (settings->fields).gradientB.fields.b = effect.fields.ColorB.fields.b;
    (settings->fields).gradientB.fields.a = effect.fields.ColorB.fields.a;
    (settings->fields).gradientC.fields.r = effect.fields.ColorC.fields.r;
    (settings->fields).gradientC.fields.g = effect.fields.ColorC.fields.g;
    (settings->fields).gradientC.fields.b = effect.fields.ColorC.fields.b;
    (settings->fields).gradientC.fields.a = effect.fields.ColorC.fields.a;
    (settings->fields).gradientD.fields.r = effect.fields.ColorD.fields.r;
    (settings->fields).gradientD.fields.g = effect.fields.ColorD.fields.g;
    (settings->fields).gradientD.fields.b = effect.fields.ColorD.fields.b;
    (settings->fields).gradientD.fields.a = effect.fields.ColorD.fields.a;
    pTVar1 = (__this->fields)._tmpText;
    if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
      UVar3.fields.b = 1.0;
      UVar3.fields.a = 1.0;
      UVar3.fields.r = 1.0;
      UVar3.fields.g = 1.0;
      (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
                (pTVar1,UVar3,(pTVar1->klass->vtable)._23_set_color.method);
      if (*targetAddress != (PatreonEffects_NameEffectController_o *)0x0) {
        PatreonEffects_NameEffectController__Apply(*targetAddress,settings,method_01);
        return;
      }
    }
  }
label_059c1dce:
  ThrowNullReferenceException();
}


// PatreonEffects.NameEffectApplier$$ClearController
// il2cpp: void PatreonEffects_NameEffectApplier__ClearController (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x59c1de0

void PatreonEffects_NameEffectApplier__ClearController
               (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o **targetAddress;
  PatreonEffects_NameEffectController_o *pPVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  UnityEngine_UI_Text_o *pUVar3;
  bool bVar4;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar5;
  
  if (Il2CppMethodInitialized_07545bdf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545bdf = '\x01';
  }
  pPVar1 = (__this->fields)._controller;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    targetAddress = &(__this->fields)._controller;
    if (*targetAddress == (PatreonEffects_NameEffectController_o *)0x0) goto label_059c1f14;
    PatreonEffects_NameEffectController__Clear(*targetAddress,method_00);
    pPVar1 = *targetAddress;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pPVar1,(MethodInfo *)0x0);
    *targetAddress = (PatreonEffects_NameEffectController_o *)0x0;
    Il2CppCodeGenWriteBarrier(targetAddress);
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
        UVar5 = (*(pUVar3->klass->vtable)._22_get_color.methodPtr)
                          (pUVar3,(pUVar3->klass->vtable)._22_get_color.method);
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          (*(pTVar2->klass->vtable)._23_set_color.methodPtr)
                    (pTVar2,UVar5,(pTVar2->klass->vtable)._23_set_color.method);
          return;
        }
      }
label_059c1f14:
      ThrowNullReferenceException();
    }
  }
  return;
}


// PatreonEffects.NameEffectApplier$$SyncLegacyTextStyle
// il2cpp: void PatreonEffects_NameEffectApplier__SyncLegacyTextStyle (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x59c19b0

void PatreonEffects_NameEffectApplier__SyncLegacyTextStyle
               (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_UI_Text_o *pUVar2;
  bool bVar3;
  int32_t iVar4;
  uint uVar5;
  UnityEngine_Color_o UVar6;
  
  if (Il2CppMethodInitialized_07545be0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545be0 = '\x01';
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
            UVar6 = (*(pUVar2->klass->vtable)._22_get_color.methodPtr)
                              (pUVar2,(pUVar2->klass->vtable)._22_get_color.method);
            if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
              (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
                        (pTVar1,UVar6,(pTVar1->klass->vtable)._23_set_color.method);
              pUVar2 = (__this->fields)._legacyText;
              if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
                pTVar1 = (__this->fields)._tmpText;
                uVar5 = UnityEngine_UI_Text__get_alignment(pUVar2,(MethodInfo *)0x0);
                iVar4 = 0x1002;
                if (uVar5 < 9) {
                  iVar4 = *(int32_t *)(&g_data_010a5880 + (long)(int)uVar5 * 4);
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
// 0x59c2060

int32_t PatreonEffects_NameEffectApplier__ToTmpAlignment(int32_t alignment,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = 0x1002;
  if ((uint)alignment < 9) {
    iVar1 = *(int32_t *)(&g_data_010a5880 + (long)alignment * 4);
  }
  return iVar1;
}


// PatreonEffects.NameEffectApplier$$OnDestroy
// il2cpp: void PatreonEffects_NameEffectApplier__OnDestroy (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x59c2080

void PatreonEffects_NameEffectApplier__OnDestroy
               (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07545be1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545be1 = '\x01';
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
    UnityEngine_Object__Destroy_69214e0(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// PatreonEffects.NameEffectApplier$$.ctor
// il2cpp: void PatreonEffects_NameEffectApplier___ctor (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x59c2100

void PatreonEffects_NameEffectApplier___ctor(PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


