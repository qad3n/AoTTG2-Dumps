// Type: PatreonEffects.NameEffectController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/PatreonEffects/NameEffectController.cs
// Prior source: NEW in this update
// --------------------------------

// PatreonEffects.NameEffectController$$Awake
// il2cpp: void PatreonEffects_NameEffectController__Awake (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4033cd0

void PatreonEffects_NameEffectController__Awake
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController__AutoConfigure(__this,method);
  return;
}


// PatreonEffects.NameEffectController$$AutoConfigure
// il2cpp: void PatreonEffects_NameEffectController__AutoConfigure (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4033ce0

void PatreonEffects_NameEffectController__AutoConfigure
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  TMPro_TMP_Text_o *pTVar2;
  bool_conflict bVar3;
  UnityEngine_Material_o *pUVar4;
  UnityEngine_Object_o *pUVar5;
  
  if (DAT_05704373 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_Material_Instantiate_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Could not find shader: TextMeshPro/NameFX_Master");
    il2cpp_init_method_metadata(&"TextMeshPro/NameFX_Master");
    DAT_05704373 = '\x01';
  }
  if ((char)(__this->fields).initialized != '\0') {
    return;
  }
  bVar3 = PatreonEffects_NameEffectController__FindText(__this,method);
  if ((char)bVar3 == '\0') {
    return;
  }
  *(undefined1 *)&(__this->fields).outlineActive = 0;
  pUVar5 = (UnityEngine_Object_o *)(__this->fields).originalFontMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields).originalFontMaterial;
  bVar3 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pTVar2 = (__this->fields).text;
    if (pTVar2 == (TMPro_TMP_Text_o *)0x0) goto LAB_04033e82;
    pUVar4 = (UnityEngine_Material_o *)
             (*(pTVar2->klass->vtable)._67_get_fontSharedMaterial.methodPtr)
                       (pTVar2,(pTVar2->klass->vtable)._67_get_fontSharedMaterial.method);
    *ppUVar1 = pUVar4;
    il2cpp_runtime_glue(ppUVar1,pUVar4);
  }
  pUVar4 = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar4 = (UnityEngine_Material_o *)
           UnityEngine_Object__Instantiate<object>((Il2CppObject *)pUVar4,MethodInfo_Material_Instantiate_Material);
  ppUVar1 = &(__this->fields).runtimeMat;
  (__this->fields).runtimeMat = pUVar4;
  il2cpp_runtime_glue(ppUVar1);
  pUVar5 = (UnityEngine_Object_o *)UnityEngine_Shader__Find("TextMeshPro/NameFX_Master",(MethodInfo *)0x0);
  bVar3 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__LogError("Could not find shader: TextMeshPro/NameFX_Master",(MethodInfo *)0x0);
    return;
  }
  pUVar4 = *ppUVar1;
  if (pUVar4 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__set_shader(pUVar4,(UnityEngine_Shader_o *)pUVar5,(MethodInfo *)0x0);
    pTVar2 = (__this->fields).text;
    if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
      (*(pTVar2->klass->vtable)._68_set_fontSharedMaterial.methodPtr)
                (pTVar2,(__this->fields).runtimeMat,
                 (pTVar2->klass->vtable)._68_set_fontSharedMaterial.method);
      *(undefined1 *)&(__this->fields).initialized = 1;
      return;
    }
  }
LAB_04033e82:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectController$$Apply
// il2cpp: void PatreonEffects_NameEffectController__Apply (PatreonEffects_NameEffectController_o* __this, PatreonEffects_NameEffectSettings_o* settings, const MethodInfo* method);
// 0x4033fc0

void PatreonEffects_NameEffectController__Apply
               (PatreonEffects_NameEffectController_o *__this,
               PatreonEffects_NameEffectSettings_o *settings,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  uint nameID;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *pUVar3;
  TMPro_TMP_Text_o *pTVar4;
  bool_conflict bVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PatreonEffects_NameEffectSettings_o *method_02;
  UnityEngine_Color_o value;
  
  method_02 = settings;
  if (DAT_05704374 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameEffectController);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704374 = '\x01';
  }
  if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
    iVar2 = (settings->fields).effectMode;
    if (iVar2 == 6) {
      PatreonEffects_NameEffectController__ClearEffectVertexData(__this,(MethodInfo *)method_02);
      if (DAT_0570437e == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_NameEffectController);
        DAT_0570437e = '\x01';
      }
      *(undefined1 *)&(__this->fields).popActive = 0;
      PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)method_02);
      if (*(int *)(TypeInfo_NameEffectController + 0xe4) == 0) {
        il2cpp_init_class();
      }
      PatreonEffects_NameEffectController__DestroyPopLayer
                (&(__this->fields).popShadowText,(MethodInfo *)method_02);
      PatreonEffects_NameEffectController__DestroyPopLayer
                (&(__this->fields).popExtrusionText,(MethodInfo *)method_02);
      PatreonEffects_NameEffectController__ApplyOutline(__this,settings,method_00);
      return;
    }
    if (iVar2 == 1) {
      PatreonEffects_NameEffectController__ClearEffectVertexData(__this,(MethodInfo *)method_02);
      cVar1 = *(char *)((long)&(__this->fields).popActive + 1);
      *(undefined1 *)((long)&(__this->fields).popActive + 1) = 0;
      PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)method_02);
      pMVar6 = extraout_RDX;
      if (cVar1 != '\0') {
        PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)method_02);
        pMVar6 = extraout_RDX_00;
      }
      PatreonEffects_NameEffectController__ApplyPop(__this,settings,pMVar6);
      return;
    }
    if (DAT_0570437e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_NameEffectController);
      DAT_0570437e = '\x01';
    }
    *(undefined1 *)&(__this->fields).popActive = 0;
    PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)method_02);
    if (*(int *)(TypeInfo_NameEffectController + 0xe4) == 0) {
      il2cpp_init_class();
    }
    PatreonEffects_NameEffectController__DestroyPopLayer
              (&(__this->fields).popShadowText,(MethodInfo *)method_02);
    PatreonEffects_NameEffectController__DestroyPopLayer
              (&(__this->fields).popExtrusionText,(MethodInfo *)method_02);
    cVar1 = *(char *)((long)&(__this->fields).popActive + 1);
    *(undefined1 *)((long)&(__this->fields).popActive + 1) = 0;
    PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)method_02);
    if (cVar1 != '\0') {
      PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)method_02);
    }
    PatreonEffects_NameEffectController__AutoConfigure(__this,(MethodInfo *)method_02);
    if ((char)(__this->fields).initialized != '\0') {
      x = (UnityEngine_Object_o *)(__this->fields).runtimeMat;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        pUVar3 = (__this->fields).runtimeMat;
        if (*(int *)(TypeInfo_NameEffectController + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (pUVar3 != (UnityEngine_Material_o *)0x0) {
          value.fields.b = 1.0;
          value.fields.a = 1.0;
          value.fields.r = 1.0;
          value.fields.g = 1.0;
          UnityEngine_Material__SetColor
                    (pUVar3,**(int32_t **)(TypeInfo_NameEffectController + 0xb8),value,(MethodInfo *)0x0);
          pUVar3 = (__this->fields).runtimeMat;
          if (pUVar3 != (UnityEngine_Material_o *)0x0) {
            UnityEngine_Material__SetColor
                      (pUVar3,*(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 4),
                       (UnityEngine_Color_o)(settings->fields).gradientA.fields,(MethodInfo *)0x0);
            pUVar3 = (__this->fields).runtimeMat;
            if (pUVar3 != (UnityEngine_Material_o *)0x0) {
              UnityEngine_Material__SetColor
                        (pUVar3,*(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 8),
                         (UnityEngine_Color_o)(settings->fields).gradientB.fields,(MethodInfo *)0x0)
              ;
              pUVar3 = (__this->fields).runtimeMat;
              if (pUVar3 != (UnityEngine_Material_o *)0x0) {
                UnityEngine_Material__SetColor
                          (pUVar3,*(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0xc),
                           (UnityEngine_Color_o)(settings->fields).gradientC.fields,
                           (MethodInfo *)0x0);
                pUVar3 = (__this->fields).runtimeMat;
                if (pUVar3 != (UnityEngine_Material_o *)0x0) {
                  UnityEngine_Material__SetColor
                            (pUVar3,*(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x10),
                             (UnityEngine_Color_o)(settings->fields).gradientD.fields,
                             (MethodInfo *)0x0);
                  pUVar3 = (__this->fields).runtimeMat;
                  if (pUVar3 != (UnityEngine_Material_o *)0x0) {
                    UnityEngine_Material__SetFloat
                              (pUVar3,*(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x14),
                               (settings->fields).gradientScale,(MethodInfo *)0x0);
                    pUVar3 = (__this->fields).runtimeMat;
                    if (pUVar3 != (UnityEngine_Material_o *)0x0) {
                      UnityEngine_Material__SetFloat
                                (pUVar3,*(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x18),
                                 (settings->fields).gradientSpeed,(MethodInfo *)0x0);
                      pUVar3 = (__this->fields).runtimeMat;
                      if (pUVar3 != (UnityEngine_Material_o *)0x0) {
                        UnityEngine_Material__SetFloat
                                  (pUVar3,*(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x1c),
                                   (float)(settings->fields).effectMode,(MethodInfo *)0x0);
                        pUVar3 = (__this->fields).runtimeMat;
                        if (pUVar3 != (UnityEngine_Material_o *)0x0) {
                          UnityEngine_Material__SetFloat
                                    (pUVar3,*(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x20),
                                     (settings->fields).glow,(MethodInfo *)0x0);
                          pUVar3 = (__this->fields).runtimeMat;
                          if (pUVar3 != (UnityEngine_Material_o *)0x0) {
                            UnityEngine_Material__SetFloat
                                      (pUVar3,*(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x24),
                                       (settings->fields).scanlineStrength,(MethodInfo *)0x0);
                            pUVar3 = (__this->fields).runtimeMat;
                            if (pUVar3 != (UnityEngine_Material_o *)0x0) {
                              UnityEngine_Material__SetFloat
                                        (pUVar3,*(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x28),
                                         (settings->fields).scanlineDensity,(MethodInfo *)0x0);
                              pUVar3 = (__this->fields).runtimeMat;
                              if (pUVar3 != (UnityEngine_Material_o *)0x0) {
                                UnityEngine_Material__SetFloat
                                          (pUVar3,*(int32_t *)
                                                   (*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x2c),
                                           (settings->fields).scanlineSpeed,(MethodInfo *)0x0);
                                pUVar3 = (__this->fields).runtimeMat;
                                if (pUVar3 != (UnityEngine_Material_o *)0x0) {
                                  UnityEngine_Material__SetFloat
                                            (pUVar3,*(int32_t *)
                                                     (*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x30),
                                             (settings->fields).flickerStrength,(MethodInfo *)0x0);
                                  pUVar3 = (__this->fields).runtimeMat;
                                  if (pUVar3 != (UnityEngine_Material_o *)0x0) {
                                    UnityEngine_Material__SetFloat
                                              (pUVar3,*(int32_t *)
                                                       (*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x34),
                                               (settings->fields).flickerSpeed,(MethodInfo *)0x0);
                                    pUVar3 = (__this->fields).runtimeMat;
                                    if (pUVar3 != (UnityEngine_Material_o *)0x0) {
                                      nameID = *(uint *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x38);
                                      pMVar6 = (MethodInfo *)(ulong)nameID;
                                      UnityEngine_Material__SetFloat
                                                (pUVar3,nameID,(settings->fields).softness,
                                                 (MethodInfo *)0x0);
                                      PatreonEffects_NameEffectController__HookEffectVertexData
                                                (__this,pMVar6);
                                      pTVar4 = (__this->fields).text;
                                      if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
                                        (*(pTVar4->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                                                  (pTVar4,0,0,
                                                   (pTVar4->klass->vtable)._106_ForceMeshUpdate.
                                                   method);
                                        pTVar4 = (__this->fields).text;
                                        if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
                                          PatreonEffects_NameEffectController__UpdateEffectVertexData
                                                    (__this,*(TMPro_TMP_TextInfo_o **)
                                                             &(pTVar4->fields).m_ignoreCulling,
                                                     method_01);
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
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$Clear
// il2cpp: void PatreonEffects_NameEffectController__Clear (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4035050

void PatreonEffects_NameEffectController__Clear
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  char cVar1;
  TMPro_TMP_Text_o *x;
  bool_conflict bVar2;
  TMPro_TMP_Text_o *method_00;
  
  if (DAT_05704375 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TMP_Text_GetComponent_TMP_Text);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704375 = '\x01';
    cVar1 = (char)(__this->fields).outlineActive;
  }
  else {
    cVar1 = (char)(__this->fields).outlineActive;
  }
  if (cVar1 != '\0') {
    return;
  }
  *(undefined1 *)&(__this->fields).outlineActive = 1;
  x = (__this->fields).text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (TMPro_TMP_Text_o *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    method_00 = (TMPro_TMP_Text_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this,MethodInfo_TMP_Text_GetComponent_TMP_Text);
    (__this->fields).text = method_00;
    il2cpp_runtime_glue(&(__this->fields).text);
  }
  if (DAT_0570437e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameEffectController);
    DAT_0570437e = '\x01';
  }
  *(undefined1 *)&(__this->fields).popActive = 0;
  PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)method_00);
  if (*(int *)(TypeInfo_NameEffectController + 0xe4) == 0) {
    il2cpp_init_class();
  }
  PatreonEffects_NameEffectController__DestroyPopLayer
            (&(__this->fields).popShadowText,(MethodInfo *)method_00);
  PatreonEffects_NameEffectController__DestroyPopLayer
            (&(__this->fields).popExtrusionText,(MethodInfo *)method_00);
  cVar1 = *(char *)((long)&(__this->fields).popActive + 1);
  *(undefined1 *)((long)&(__this->fields).popActive + 1) = 0;
  PatreonEffects_NameEffectController__ClearPopGradient(__this,(MethodInfo *)method_00);
  if (cVar1 != '\0') {
    PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)method_00);
  }
  PatreonEffects_NameEffectController__ClearEffectVertexData(__this,(MethodInfo *)method_00);
  PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)method_00);
  *(undefined1 *)&(__this->fields).initialized = 0;
  return;
}


// PatreonEffects.NameEffectController$$OnDestroy
// il2cpp: void PatreonEffects_NameEffectController__OnDestroy (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x40352f0

void PatreonEffects_NameEffectController__OnDestroy
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController__Clear(__this,method);
  return;
}


// PatreonEffects.NameEffectController$$ApplyHolographic
// il2cpp: void PatreonEffects_NameEffectController__ApplyHolographic (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4035300

void PatreonEffects_NameEffectController__ApplyHolographic
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectSettings_o *settings;
  MethodInfo *method_00;
  
  if (DAT_0570438a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameEffectSettings);
    DAT_0570438a = '\x01';
  }
  settings = (PatreonEffects_NameEffectSettings_o *)il2cpp_runtime_glue(TypeInfo_NameEffectSettings);
  (settings->fields).gradientA.fields.r = 0.78;
  (settings->fields).gradientA.fields.g = 1.0;
  (settings->fields).gradientA.fields.b = 0.9;
  (settings->fields).gradientA.fields.a = 1.0;
  (settings->fields).gradientB.fields.r = 0.64;
  (settings->fields).gradientB.fields.g = 0.95;
  (settings->fields).gradientB.fields.b = 1.0;
  (settings->fields).gradientB.fields.a = 1.0;
  (settings->fields).gradientC.fields.r = 0.86;
  (settings->fields).gradientC.fields.g = 0.76;
  (settings->fields).gradientC.fields.b = 1.0;
  (settings->fields).gradientC.fields.a = 1.0;
  (settings->fields).gradientD.fields.r = 1.0;
  (settings->fields).gradientD.fields.g = 0.96;
  (settings->fields).gradientD.fields.b = 0.82;
  (settings->fields).gradientD.fields.a = 1.0;
  (settings->fields).gradientScale = 2.8;
  (settings->fields).gradientSpeed = 0.16;
  (settings->fields).glow = 1.35;
  (settings->fields).scanlineStrength = 0.12;
  (settings->fields).scanlineDensity = 180.0;
  (settings->fields).scanlineSpeed = 0.18;
  (settings->fields).flickerStrength = 0.05;
  (settings->fields).flickerSpeed = 18.0;
  (settings->fields).softness = 1.0;
  (settings->fields).popShadowOffset.fields = (UnityEngine_Vector2_Fields)0xbfc0000000000000;
  (settings->fields).popExtrusionOffset.fields = (UnityEngine_Vector2_Fields)0xc0c0000000000000;
  System_Object___ctor((Il2CppObject *)settings,(MethodInfo *)0x0);
  PatreonEffects_NameEffectController__Apply(__this,settings,method_00);
  return;
}


// PatreonEffects.NameEffectController$$FindText
// il2cpp: bool PatreonEffects_NameEffectController__FindText (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4033e90

bool_conflict
PatreonEffects_NameEffectController__FindText
          (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o **ppTVar1;
  bool_conflict bVar2;
  TMPro_TMP_Text_o *pTVar3;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar4;
  bool_conflict bVar5;
  
  if (DAT_05704376 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TMP_Text_GetComponent_TMP_Text);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"[NameEffectController] No TMP_Text found on ");
    DAT_05704376 = '\x01';
  }
  pTVar3 = (__this->fields).text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppTVar1 = &(__this->fields).text;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar3 = (TMPro_TMP_Text_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_TMP_Text_GetComponent_TMP_Text);
    (__this->fields).text = pTVar3;
    il2cpp_runtime_glue(ppTVar1);
  }
  pTVar3 = *ppTVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar5 = (bool_conflict)CONCAT71((int7)((ulong)pTVar3 >> 8),1);
  if ((char)bVar2 == '\0') {
    __this_00 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar4 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat("[NameEffectController] No TMP_Text found on ",pSVar4,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = 0;
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  }
  return bVar5;
}


// PatreonEffects.NameEffectController$$ApplyPop
// il2cpp: void PatreonEffects_NameEffectController__ApplyPop (PatreonEffects_NameEffectController_o* __this, PatreonEffects_NameEffectSettings_o* settings, const MethodInfo* method);
// 0x4034550

void PatreonEffects_NameEffectController__ApplyPop
               (PatreonEffects_NameEffectController_o *__this,
               PatreonEffects_NameEffectSettings_o *settings,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  UnityEngine_Vector2_Fields UVar4;
  TMPro_TMP_Text_o *pTVar5;
  Il2CppMethodPointer vtable_dispatch;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  float fVar6;
  bool_conflict bVar7;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PatreonEffects_NameEffectSettings_o *method_02;
  MethodInfo *method_03;
  float fVar8;
  float fVar9;
  
  method_02 = settings;
  if (DAT_05704377 == '\0') {
    il2cpp_init_method_metadata(&"PopExtrusion");
    il2cpp_init_method_metadata(&"PopShadow");
    DAT_05704377 = '\x01';
  }
  bVar7 = PatreonEffects_NameEffectController__FindText(__this,(MethodInfo *)method_02);
  if ((char)bVar7 == '\0') {
    return;
  }
  *(undefined1 *)&(__this->fields).outlineActive = 0;
  PatreonEffects_NameEffectController__ClearShaderMaterial(__this,(MethodInfo *)method_02);
  if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
    PatreonEffects_NameEffectController__EnsurePopLayer
              (__this,&(__this->fields).popExtrusionText,"PopExtrusion",
               (UnityEngine_Color_o)(settings->fields).gradientD.fields,in_RCX);
    method_03 = (MethodInfo *)&(__this->fields).popShadowText;
    PatreonEffects_NameEffectController__EnsurePopLayer
              (__this,(TMPro_TMP_Text_o **)method_03,"PopShadow",
               (UnityEngine_Color_o)(settings->fields).gradientC.fields,in_RCX);
    fVar9 = (settings->fields).gradientA.fields.g;
    fVar8 = (settings->fields).gradientA.fields.b;
    fVar6 = (settings->fields).gradientA.fields.a;
    (__this->fields).popGradientHooked = (bool_conflict)(settings->fields).gradientA.fields.r;
    (__this->fields).effectVertexDataHooked = (bool_conflict)fVar9;
    (__this->fields).cleared = (bool_conflict)fVar8;
    (__this->fields).popFaceA.fields.r = fVar6;
    fVar9 = (settings->fields).gradientB.fields.g;
    uVar2 = *(undefined8 *)&(settings->fields).gradientB.fields.b;
    (__this->fields).popFaceA.fields.g = (settings->fields).gradientB.fields.r;
    (__this->fields).popFaceA.fields.b = fVar9;
    *(undefined8 *)&(__this->fields).popFaceA.fields.a = uVar2;
    fVar9 = (settings->fields).gradientB.fields.g;
    uVar2 = *(undefined8 *)&(settings->fields).gradientB.fields.b;
    (__this->fields).popFaceB.fields.g = (settings->fields).gradientB.fields.r;
    (__this->fields).popFaceB.fields.b = fVar9;
    *(undefined8 *)&(__this->fields).popFaceB.fields.a = uVar2;
    fVar9 = (settings->fields).gradientC.fields.g;
    uVar2 = *(undefined8 *)&(settings->fields).gradientC.fields.b;
    (__this->fields).popFaceC.fields.g = (settings->fields).gradientC.fields.r;
    (__this->fields).popFaceC.fields.b = fVar9;
    *(undefined8 *)&(__this->fields).popFaceC.fields.a = uVar2;
    fVar9 = (settings->fields).gradientD.fields.g;
    uVar2 = *(undefined8 *)&(settings->fields).gradientD.fields.b;
    (__this->fields).popShadowColor.fields.g = (settings->fields).gradientD.fields.r;
    (__this->fields).popShadowColor.fields.b = fVar9;
    *(undefined8 *)&(__this->fields).popShadowColor.fields.a = uVar2;
    UVar4 = (settings->fields).popShadowOffset.fields;
    (__this->fields).popExtrusionColor.fields.g = UVar4.x;
    (__this->fields).popExtrusionColor.fields.b = UVar4.y;
    *(UnityEngine_Vector2_Fields *)&(__this->fields).popExtrusionColor.fields.a =
         (settings->fields).popExtrusionOffset.fields;
    *(undefined1 *)&(__this->fields).popActive = 1;
    PatreonEffects_NameEffectController__HookPopGradient(__this,method_03);
    if (DAT_05704379 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_05704379 = '\x01';
    }
    pTVar5 = (__this->fields).text;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar7 == '\0') {
      pTVar5 = (__this->fields).text;
      if (pTVar5 == (TMPro_TMP_Text_o *)0x0) goto LAB_0403476c;
      fVar8 = *(float *)&(pTVar5->fields).m_spriteColor.fields.r / 48.0;
      fVar9 = 0.35;
      if (0.35 <= fVar8) {
        fVar9 = fVar8;
      }
      uVar2 = *(undefined8 *)&(__this->fields).popExtrusionColor.fields.a;
      offset.fields.y = (float)((ulong)uVar2 >> 0x20) * fVar9;
      offset.fields.x = (float)uVar2 * fVar9;
      PatreonEffects_NameEffectController__SyncPopLayer
                (__this,(__this->fields).popExtrusionText,offset,
                 (UnityEngine_Color_o)
                 *(UnityEngine_Color_Fields *)&(__this->fields).popShadowColor.fields.g,method_00);
      uVar1 = (__this->fields).popExtrusionColor.fields.g;
      uVar3 = (__this->fields).popExtrusionColor.fields.b;
      offset_00.fields.y = (float)uVar3 * fVar9;
      offset_00.fields.x = (float)uVar1 * fVar9;
      PatreonEffects_NameEffectController__SyncPopLayer
                (__this,(__this->fields).popShadowText,offset_00,
                 (UnityEngine_Color_o)
                 *(UnityEngine_Color_Fields *)&(__this->fields).popFaceC.fields.g,method_01);
    }
    pTVar5 = (__this->fields).text;
    if (pTVar5 != (TMPro_TMP_Text_o *)0x0) {
      (*(pTVar5->klass->vtable)._23_set_color.methodPtr)
                (0x3f800000,0x3f800000,pTVar5,(pTVar5->klass->vtable)._23_set_color.method);
      pTVar5 = (__this->fields).text;
      if (pTVar5 != (TMPro_TMP_Text_o *)0x0) {
        vtable_dispatch = (pTVar5->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        (*vtable_dispatch)
                  (pTVar5,0,0,(pTVar5->klass->vtable)._106_ForceMeshUpdate.method,
                   vtable_dispatch);
        return;
      }
    }
  }
LAB_0403476c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectController$$LateUpdate
// il2cpp: void PatreonEffects_NameEffectController__LateUpdate (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4035a40

void PatreonEffects_NameEffectController__LateUpdate
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  TMPro_TMP_Text_o *pTVar4;
  bool_conflict bVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar6;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  float fVar7;
  
  if ((char)(__this->fields).popActive != '\0') {
    if (DAT_05704379 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_05704379 = '\x01';
    }
    pTVar4 = (__this->fields).text;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar5 == '\0') {
      pTVar4 = (__this->fields).text;
      if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
        fVar6 = *(float *)&(pTVar4->fields).m_spriteColor.fields.r / 48.0;
        fVar7 = 0.35;
        if (0.35 <= fVar6) {
          fVar7 = fVar6;
        }
        uVar2 = *(undefined8 *)&(__this->fields).popExtrusionColor.fields.a;
        offset.fields.x = (float)uVar2 * fVar7;
        offset.fields.y = (float)((ulong)uVar2 >> 0x20) * fVar7;
        PatreonEffects_NameEffectController__SyncPopLayer
                  (__this,(__this->fields).popExtrusionText,offset,
                   (UnityEngine_Color_o)
                   *(UnityEngine_Color_Fields *)&(__this->fields).popShadowColor.fields.g,method_00)
        ;
        uVar1 = (__this->fields).popExtrusionColor.fields.g;
        uVar3 = (__this->fields).popExtrusionColor.fields.b;
        offset_00.fields.x = (float)uVar1 * fVar7;
        offset_00.fields.y = (float)uVar3 * fVar7;
        PatreonEffects_NameEffectController__SyncPopLayer
                  (__this,(__this->fields).popShadowText,offset_00,
                   (UnityEngine_Color_o)
                   *(UnityEngine_Color_Fields *)&(__this->fields).popFaceC.fields.g,method_01);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$EnsurePopLayer
// il2cpp: void PatreonEffects_NameEffectController__EnsurePopLayer (PatreonEffects_NameEffectController_o* __this, TMPro_TMP_Text_o** layer, System_String_o* layerName, UnityEngine_Color_o color, const MethodInfo* method);
// 0x4035450

void PatreonEffects_NameEffectController__EnsurePopLayer
               (PatreonEffects_NameEffectController_o *__this,TMPro_TMP_Text_o **layer,
               System_String_o *layerName,UnityEngine_Color_o color,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  int32_t index;
  UnityEngine_Transform_o *pUVar2;
  System_Type_array *components;
  System_Type_o *pSVar3;
  long lVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  Il2CppObject *pIVar6;
  TMPro_TMP_Text_o *pTVar7;
  undefined8 uVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float local_58;
  float local_48;
  
  if (DAT_05704378 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_CanvasRenderer);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeRef_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    DAT_05704378 = '\x01';
  }
  pTVar7 = *layer;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  pTVar7 = (__this->fields).text;
  if ((pTVar7 != (TMPro_TMP_Text_o *)0x0) &&
     (pUVar2 = TMPro_TMP_Text__get_transform(pTVar7,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 != '\0') {
      return;
    }
    components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
    handle = TypeRef_RectTransform;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (components != (System_Type_array *)0x0) {
      if ((pSVar3 != (System_Type_o *)0x0) &&
         (lVar4 = il2cpp_runtime_glue(pSVar3,(((components->obj).klass)->_1).element_class),
         lVar4 == 0)) {
LAB_0403586e:
        uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar8,0);
      }
      if ((int)components->max_length != 0) {
        components->m_Items[0] = pSVar3;
        il2cpp_runtime_glue(components->m_Items);
        pSVar3 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if ((pSVar3 != (System_Type_o *)0x0) &&
           (lVar4 = il2cpp_runtime_glue(pSVar3,(((components->obj).klass)->_1).element_class),
           lVar4 == 0)) goto LAB_0403586e;
        if (1 < (uint)components->max_length) {
          components->m_Items[1] = pSVar3;
          il2cpp_runtime_glue(components->m_Items + 1);
          pSVar3 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
          if ((pSVar3 != (System_Type_o *)0x0) &&
             (lVar4 = il2cpp_runtime_glue(pSVar3,(((components->obj).klass)->_1).element_class),
             lVar4 == 0)) goto LAB_0403586e;
          if (2 < (uint)components->max_length) {
            components->m_Items[2] = pSVar3;
            il2cpp_runtime_glue(components->m_Items + 2);
            pSVar3 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
            if ((pSVar3 != (System_Type_o *)0x0) &&
               (lVar4 = il2cpp_runtime_glue(pSVar3,(((components->obj).klass)->_1).element_class),
               lVar4 == 0)) goto LAB_0403586e;
            if (3 < (uint)components->max_length) {
              components->m_Items[3] = pSVar3;
              il2cpp_runtime_glue(components->m_Items + 3,pSVar3);
              __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
              UnityEngine_GameObject___ctor(__this_00,layerName,components,(MethodInfo *)0x0);
              if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
                 (pUVar5 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
                 pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetParent(pUVar5,pUVar2,0,(MethodInfo *)0x0);
                pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                pTVar7 = (__this->fields).text;
                if ((pTVar7 != (TMPro_TMP_Text_o *)0x0) &&
                   ((pUVar5 = TMPro_TMP_Text__get_transform(pTVar7,(MethodInfo *)0x0),
                    pUVar5 != (UnityEngine_Transform_o *)0x0 &&
                    (index = UnityEngine_Transform__GetSiblingIndex(pUVar5,(MethodInfo *)0x0),
                    pUVar2 != (UnityEngine_Transform_o *)0x0)))) {
                  UnityEngine_Transform__SetSiblingIndex(pUVar2,index,(MethodInfo *)0x0);
                  pIVar6 = UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                  if (pIVar6 != (Il2CppObject *)0x0) {
                    (*pIVar6->klass->vtable[0x1c].methodPtr)
                              (pIVar6,1,pIVar6->klass->vtable[0x1c].method);
                    pTVar7 = (TMPro_TMP_Text_o *)
                             UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                    *layer = pTVar7;
                    il2cpp_runtime_glue(layer,pTVar7);
                    pTVar7 = *layer;
                    if (pTVar7 != (TMPro_TMP_Text_o *)0x0) {
                      (*(pTVar7->klass->vtable)._25_set_raycastTarget.methodPtr)
                                (pTVar7,0,(pTVar7->klass->vtable)._25_set_raycastTarget.method);
                      pTVar7 = *layer;
                      if (pTVar7 != (TMPro_TMP_Text_o *)0x0) {
                        local_58 = color.fields.r;
                        local_48 = color.fields.b;
                        (*(pTVar7->klass->vtable)._23_set_color.methodPtr)
                                  (local_58,local_48,pTVar7,
                                   (pTVar7->klass->vtable)._23_set_color.method);
                        pTVar7 = *layer;
                        method_00 = extraout_RDX;
                        if (DAT_056fe093 == '\0') {
                          il2cpp_init_method_metadata(&TypeInfo_Vector2);
                          DAT_056fe093 = '\x01';
                          method_00 = extraout_RDX_00;
                        }
                        PatreonEffects_NameEffectController__SyncPopLayer
                                  (__this,pTVar7,
                                   (UnityEngine_Vector2_o)
                                   **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),color,
                                   method_00);
                        return;
                      }
                    }
                  }
                }
              }
              goto LAB_04035864;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_04035864:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectController$$SyncPopLayers
// il2cpp: void PatreonEffects_NameEffectController__SyncPopLayers (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4035950

void PatreonEffects_NameEffectController__SyncPopLayers
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  TMPro_TMP_Text_o *pTVar4;
  bool_conflict bVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar6;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  float fVar7;
  
  if (DAT_05704379 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704379 = '\x01';
  }
  pTVar4 = (__this->fields).text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  pTVar4 = (__this->fields).text;
  if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
    fVar6 = *(float *)&(pTVar4->fields).m_spriteColor.fields.r / 48.0;
    fVar7 = 0.35;
    if (0.35 <= fVar6) {
      fVar7 = fVar6;
    }
    uVar2 = *(undefined8 *)&(__this->fields).popExtrusionColor.fields.a;
    offset.fields.x = (float)uVar2 * fVar7;
    offset.fields.y = (float)((ulong)uVar2 >> 0x20) * fVar7;
    PatreonEffects_NameEffectController__SyncPopLayer
              (__this,(__this->fields).popExtrusionText,offset,
               (UnityEngine_Color_o)
               *(UnityEngine_Color_Fields *)&(__this->fields).popShadowColor.fields.g,method_00);
    uVar1 = (__this->fields).popExtrusionColor.fields.g;
    uVar3 = (__this->fields).popExtrusionColor.fields.b;
    offset_00.fields.x = (float)uVar1 * fVar7;
    offset_00.fields.y = (float)uVar3 * fVar7;
    PatreonEffects_NameEffectController__SyncPopLayer
              (__this,(__this->fields).popShadowText,offset_00,
               (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)&(__this->fields).popFaceC.fields.g
               ,method_01);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectController$$ApplyOutline
// il2cpp: void PatreonEffects_NameEffectController__ApplyOutline (PatreonEffects_NameEffectController_o* __this, PatreonEffects_NameEffectSettings_o* settings, const MethodInfo* method);
// 0x40347f0

void PatreonEffects_NameEffectController__ApplyOutline
               (PatreonEffects_NameEffectController_o *__this,
               PatreonEffects_NameEffectSettings_o *settings,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  UnityEngine_Object_o *pUVar2;
  TMPro_TMP_Text_o *pTVar3;
  TMPro_TMP_Text_c *pTVar4;
  Il2CppMethodPointer vtable_dispatch;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  bool_conflict bVar9;
  UnityEngine_Material_o *pUVar10;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar11;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar12;
  PatreonEffects_NameEffectSettings_o *method_00;
  
  method_00 = settings;
  if (DAT_0570437a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_NameEffectController);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&" Outline Runtime");
    DAT_0570437a = '\x01';
  }
  bVar9 = PatreonEffects_NameEffectController__FindText(__this,(MethodInfo *)method_00);
  if ((char)bVar9 != '\0') {
    *(undefined1 *)&(__this->fields).outlineActive = 0;
    pUVar2 = (UnityEngine_Object_o *)(__this->fields).originalFontMaterial;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ppUVar1 = &(__this->fields).originalFontMaterial;
    bVar9 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      pTVar3 = (__this->fields).text;
      if (pTVar3 == (TMPro_TMP_Text_o *)0x0) goto LAB_04034a2f;
      pUVar10 = (UnityEngine_Material_o *)
                (*(pTVar3->klass->vtable)._67_get_fontSharedMaterial.methodPtr)
                          (pTVar3,(pTVar3->klass->vtable)._67_get_fontSharedMaterial.method);
      *ppUVar1 = pUVar10;
      il2cpp_runtime_glue(ppUVar1);
    }
    pUVar2 = (UnityEngine_Object_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar12 = (MethodInfo *)0x0;
    bVar9 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      PatreonEffects_NameEffectController__ClearShaderMaterial(__this,pMVar12);
      if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
        fVar5 = (settings->fields).gradientA.fields.g;
        fVar6 = (settings->fields).gradientA.fields.b;
        fVar7 = (settings->fields).gradientA.fields.a;
        (__this->fields).popGradientHooked = (bool_conflict)(settings->fields).gradientA.fields.r;
        (__this->fields).effectVertexDataHooked = (bool_conflict)fVar5;
        (__this->fields).cleared = (bool_conflict)fVar6;
        (__this->fields).popFaceA.fields.r = fVar7;
        fVar5 = (settings->fields).gradientB.fields.g;
        uVar8 = *(undefined8 *)&(settings->fields).gradientB.fields.b;
        (__this->fields).popFaceA.fields.g = (settings->fields).gradientB.fields.r;
        (__this->fields).popFaceA.fields.b = fVar5;
        *(undefined8 *)&(__this->fields).popFaceA.fields.a = uVar8;
        fVar5 = (settings->fields).gradientC.fields.g;
        fVar6 = (settings->fields).gradientC.fields.b;
        fVar7 = (settings->fields).gradientC.fields.a;
        (__this->fields).popFaceB.fields.g = (settings->fields).gradientC.fields.r;
        (__this->fields).popFaceB.fields.b = fVar5;
        (__this->fields).popFaceB.fields.a = fVar6;
        (__this->fields).popFaceC.fields.r = fVar7;
        *(undefined1 *)((long)&(__this->fields).popActive + 1) = 1;
        pUVar10 = (__this->fields).originalFontMaterial;
        __this_00 = (UnityEngine_Object_o *)il2cpp_runtime_glue(TypeInfo_Material);
        UnityEngine_Material___ctor((UnityEngine_Material_o *)__this_00,pUVar10,(MethodInfo *)0x0);
        pUVar2 = (UnityEngine_Object_o *)(__this->fields).originalFontMaterial;
        if (pUVar2 != (UnityEngine_Object_o *)0x0) {
          pSVar11 = UnityEngine_Object__get_name(pUVar2,(MethodInfo *)0x0);
          pSVar11 = System_String__Concat(pSVar11," Outline Runtime",(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Object_o *)0x0) {
            UnityEngine_Object__set_name(__this_00,pSVar11,(MethodInfo *)0x0);
            (__this->fields).runtimeMat = (UnityEngine_Material_o *)__this_00;
            il2cpp_runtime_glue(&(__this->fields).runtimeMat,__this_00);
            pUVar10 = (__this->fields).runtimeMat;
            pMVar12 = extraout_RDX;
            if (*(int *)(TypeInfo_NameEffectController + 0xe4) == 0) {
              il2cpp_init_class();
              pMVar12 = extraout_RDX_00;
            }
            PatreonEffects_NameEffectController__ApplyTmpOutlineMaterial(pUVar10,settings,pMVar12);
            pTVar3 = (__this->fields).text;
            if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
              TMPro_TMP_Text__set_fontMaterial(pTVar3,(__this->fields).runtimeMat,(MethodInfo *)0x0)
              ;
              pTVar3 = (__this->fields).text;
              if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
                pTVar4 = pTVar3->klass;
                pMVar12 = (pTVar4->vtable)._111_UpdateMeshPadding.method;
                (*(pTVar4->vtable)._111_UpdateMeshPadding.methodPtr)();
                *(undefined1 *)&(__this->fields).initialized = 1;
                PatreonEffects_NameEffectController__HookPopGradient(__this,pMVar12);
                pTVar3 = (__this->fields).text;
                if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
                  (*(pTVar3->klass->vtable)._23_set_color.methodPtr)
                            (0x3f800000,0x3f800000,pTVar3,
                             (pTVar3->klass->vtable)._23_set_color.method);
                  pTVar3 = (__this->fields).text;
                  if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
                    vtable_dispatch = (pTVar3->klass->vtable)._106_ForceMeshUpdate.methodPtr;
                    (*vtable_dispatch)
                              (pTVar3,0,0,(pTVar3->klass->vtable)._106_ForceMeshUpdate.method,
                               vtable_dispatch);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LAB_04034a2f:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$ApplyTmpOutlineMaterial
// il2cpp: void PatreonEffects_NameEffectController__ApplyTmpOutlineMaterial (UnityEngine_Material_o* material, PatreonEffects_NameEffectSettings_o* settings, const MethodInfo* method);
// 0x4035ed0

void PatreonEffects_NameEffectController__ApplyTmpOutlineMaterial
               (UnityEngine_Material_o *material,PatreonEffects_NameEffectSettings_o *settings,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int32_t iVar4;
  UnityEngine_Color_Fields value;
  bool_conflict bVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  undefined4 local_58;
  
  if (DAT_0570437b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameEffectController);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_ShaderUtilities);
    DAT_0570437b = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar5 != '\0') {
    return;
  }
  if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
    uVar1 = (settings->fields).gradientD.fields.r;
    uVar3 = (settings->fields).gradientD.fields.g;
    value_01.fields.g = (float)uVar3;
    value_01.fields.r = (float)uVar1;
    uVar2 = (settings->fields).gradientD.fields.b;
    fVar7 = (settings->fields).glow;
    if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (material != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__EnableKeyword
                (material,*(System_String_o **)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x110),
                 (MethodInfo *)0x0);
      bVar5 = UnityEngine_Material__HasProperty
                        (material,*(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x74),
                         (MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Material__EnableKeyword
                  (material,*(System_String_o **)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0xe0),
                   (MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
        il2cpp_init_class();
      }
      iVar4 = *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 8);
      if (*(int *)(TypeInfo_NameEffectController + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Material__HasProperty(material,iVar4,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        value_00.fields.b = 1.0;
        value_00.fields.a = 1.0;
        value_00.fields.r = 1.0;
        value_00.fields.g = 1.0;
        UnityEngine_Material__SetColor(material,iVar4,value_00,(MethodInfo *)0x0);
      }
      iVar4 = *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x44);
      value = (settings->fields).gradientD.fields;
      bVar5 = UnityEngine_Material__HasProperty(material,iVar4,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        UnityEngine_Material__SetColor(material,iVar4,(UnityEngine_Color_o)value,(MethodInfo *)0x0);
      }
      iVar4 = *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x3c);
      bVar5 = UnityEngine_Material__HasProperty(material,iVar4,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        UnityEngine_Material__SetFloat(material,iVar4,0.16,(MethodInfo *)0x0);
      }
      iVar4 = *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x40);
      bVar5 = UnityEngine_Material__HasProperty(material,iVar4,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        UnityEngine_Material__SetFloat(material,iVar4,0.0,(MethodInfo *)0x0);
      }
      iVar4 = *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0xc);
      bVar5 = UnityEngine_Material__HasProperty(material,iVar4,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        UnityEngine_Material__SetFloat(material,iVar4,0.02,(MethodInfo *)0x0);
      }
      iVar4 = *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x74);
      bVar5 = UnityEngine_Material__HasProperty(material,iVar4,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        fVar7 = fVar7 * 0.45;
        fVar6 = 1.0;
        if (fVar7 <= 1.0) {
          fVar6 = fVar7;
        }
        value_01.fields.a = (float)(-(uint)(0.0 <= fVar7) & (uint)fVar6);
        value_01.fields.b = (float)uVar2;
        UnityEngine_Material__SetColor(material,iVar4,value_01,(MethodInfo *)0x0);
      }
      iVar4 = *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x78);
      bVar5 = UnityEngine_Material__HasProperty(material,iVar4,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        UnityEngine_Material__SetFloat(material,iVar4,0.0,(MethodInfo *)0x0);
      }
      iVar4 = *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x84);
      bVar5 = UnityEngine_Material__HasProperty(material,iVar4,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        UnityEngine_Material__SetFloat(material,iVar4,0.05,(MethodInfo *)0x0);
      }
      iVar4 = *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x80);
      bVar5 = UnityEngine_Material__HasProperty(material,iVar4,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        UnityEngine_Material__SetFloat(material,iVar4,0.08,(MethodInfo *)0x0);
      }
      iVar4 = *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x7c);
      bVar5 = UnityEngine_Material__HasProperty(material,iVar4,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        UnityEngine_Material__SetFloat(material,iVar4,0.72,(MethodInfo *)0x0);
      }
      TMPro_ShaderUtilities__UpdateShaderRatios(material,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectController$$SetColorIfPresent
// il2cpp: void PatreonEffects_NameEffectController__SetColorIfPresent (UnityEngine_Material_o* material, int32_t propertyId, UnityEngine_Color_o value, const MethodInfo* method);
// 0x4036270

void PatreonEffects_NameEffectController__SetColorIfPresent
               (UnityEngine_Material_o *material,int32_t propertyId,UnityEngine_Color_o value,
               MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (material == (UnityEngine_Material_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = UnityEngine_Material__HasProperty(material,propertyId,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    UnityEngine_Material__SetColor(material,propertyId,value,(MethodInfo *)0x0);
    return;
  }
  return;
}


// PatreonEffects.NameEffectController$$SetFloatIfPresent
// il2cpp: void PatreonEffects_NameEffectController__SetFloatIfPresent (UnityEngine_Material_o* material, int32_t propertyId, float value, const MethodInfo* method);
// 0x40362c0

void PatreonEffects_NameEffectController__SetFloatIfPresent
               (UnityEngine_Material_o *material,int32_t propertyId,float value,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (material == (UnityEngine_Material_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = UnityEngine_Material__HasProperty(material,propertyId,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    UnityEngine_Material__SetFloat(material,propertyId,value,(MethodInfo *)0x0);
    return;
  }
  return;
}


// PatreonEffects.NameEffectController$$PopOffsetScale
// il2cpp: float PatreonEffects_NameEffectController__PopOffsetScale (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4035ea0

float PatreonEffects_NameEffectController__PopOffsetScale
                (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  float fVar2;
  float fVar3;
  
  pTVar1 = (__this->fields).text;
  if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
    fVar3 = *(float *)&(pTVar1->fields).m_spriteColor.fields.r / 48.0;
    fVar2 = 0.35;
    if (0.35 <= fVar3) {
      fVar2 = fVar3;
    }
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectController$$SyncPopLayer
// il2cpp: void PatreonEffects_NameEffectController__SyncPopLayer (PatreonEffects_NameEffectController_o* __this, TMPro_TMP_Text_o* layer, UnityEngine_Vector2_o offset, UnityEngine_Color_o color, const MethodInfo* method);
// 0x4035b30

void PatreonEffects_NameEffectController__SyncPopLayer
               (PatreonEffects_NameEffectController_o *__this,TMPro_TMP_Text_o *layer,
               UnityEngine_Vector2_o offset,UnityEngine_Color_o color,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Vector2_o UVar2;
  bool_conflict bVar3;
  int32_t value;
  undefined8 uVar4;
  UnityEngine_Material_o *pUVar5;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Quaternion_o value_01;
  float local_58;
  float local_48;
  float local_38;
  float fStack_34;
  
  if (DAT_0570437c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570437c = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)layer,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pTVar1 = (__this->fields).text;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      pTVar1 = (__this->fields).text;
      if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
        uVar4 = (*(pTVar1->klass->vtable)._65_get_text.methodPtr)
                          (pTVar1,(pTVar1->klass->vtable)._65_get_text.method);
        if (layer != (TMPro_TMP_Text_o *)0x0) {
          (*(layer->klass->vtable)._66_set_text.methodPtr)
                    (layer,uVar4,(layer->klass->vtable)._66_set_text.method);
          pTVar1 = (__this->fields).text;
          if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
            TMPro_TMP_Text__set_font
                      (layer,(TMPro_TMP_FontAsset_o *)(pTVar1->fields).m_TextPreprocessor,
                       (MethodInfo *)0x0);
            x = (UnityEngine_Object_o *)(__this->fields).originalFontMaterial;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar3 = UnityEngine_Object__op_Inequality
                              (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') {
              pTVar1 = (__this->fields).text;
              if (pTVar1 == (TMPro_TMP_Text_o *)0x0) goto LAB_04035e94;
              pUVar5 = (UnityEngine_Material_o *)
                       (*(pTVar1->klass->vtable)._67_get_fontSharedMaterial.methodPtr)
                                 (pTVar1,(pTVar1->klass->vtable)._67_get_fontSharedMaterial.method);
            }
            else {
              pUVar5 = (__this->fields).originalFontMaterial;
            }
            (*(layer->klass->vtable)._68_set_fontSharedMaterial.methodPtr)
                      (layer,pUVar5,(layer->klass->vtable)._68_set_fontSharedMaterial.method);
            pTVar1 = (__this->fields).text;
            if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
              TMPro_TMP_Text__set_fontSize
                        (layer,*(float *)&(pTVar1->fields).m_spriteColor.fields.r,(MethodInfo *)0x0)
              ;
              pTVar1 = (__this->fields).text;
              if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                TMPro_TMP_Text__set_fontStyle
                          (layer,(pTVar1->fields).m_FontWeightStack.fields.m_Capacity,
                           (MethodInfo *)0x0);
                pTVar1 = (__this->fields).text;
                if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                  value = TMPro_TMP_Text__get_alignment(pTVar1,(MethodInfo *)0x0);
                  TMPro_TMP_Text__set_alignment(layer,value,(MethodInfo *)0x0);
                  pTVar1 = (__this->fields).text;
                  if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                    TMPro_TMP_Text__set_richText
                              (layer,(uint)*(byte *)((long)&(pTVar1->fields).m_charWidthMaxAdj + 2),
                               (MethodInfo *)0x0);
                    pTVar1 = (__this->fields).text;
                    if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                      TMPro_TMP_Text__set_enableWordWrapping
                                (layer,(uint)*(byte *)&(pTVar1->fields).m_characterSpacing,
                                 (MethodInfo *)0x0);
                      TMPro_TMP_Text__set_overflowMode(layer,0,(MethodInfo *)0x0);
                      pTVar1 = (__this->fields).text;
                      if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                        TMPro_TMP_Text__set_characterSpacing
                                  (layer,(float)(pTVar1->fields).m_textAlignment,(MethodInfo *)0x0);
                        pTVar1 = (__this->fields).text;
                        if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                          TMPro_TMP_Text__set_wordSpacing
                                    (layer,*(float *)((long)&(pTVar1->fields).
                                                             m_lineJustificationStack.fields.
                                                             itemStack + 4),(MethodInfo *)0x0);
                          pTVar1 = (__this->fields).text;
                          if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                            TMPro_TMP_Text__set_lineSpacing
                                      (layer,(float)(pTVar1->fields).m_lineJustificationStack.fields
                                                    .index,(MethodInfo *)0x0);
                            pTVar1 = (__this->fields).text;
                            if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                              TMPro_TMP_Text__set_paragraphSpacing
                                        (layer,*(float *)&(pTVar1->fields).m_lineJustificationStack.
                                                          fields.field_0x1c,(MethodInfo *)0x0);
                              local_58 = color.fields.r;
                              local_48 = color.fields.b;
                              (*(layer->klass->vtable)._23_set_color.methodPtr)
                                        (local_58,local_48,layer);
                              pTVar1 = (__this->fields).text;
                              if (pTVar1 != (TMPro_TMP_Text_o *)0x0) {
                                __this_00 = TMPro_TMP_Text__get_rectTransform
                                                      (pTVar1,(MethodInfo *)0x0);
                                __this_01 = TMPro_TMP_Text__get_rectTransform
                                                      (layer,(MethodInfo *)0x0);
                                if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
                                  UVar2 = UnityEngine_RectTransform__get_anchorMin
                                                    (__this_00,(MethodInfo *)0x0);
                                  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
                                    UnityEngine_RectTransform__set_anchorMin
                                              (__this_01,UVar2,(MethodInfo *)0x0);
                                    UVar2 = UnityEngine_RectTransform__get_anchorMax
                                                      (__this_00,(MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_anchorMax
                                              (__this_01,UVar2,(MethodInfo *)0x0);
                                    UVar2 = UnityEngine_RectTransform__get_pivot
                                                      (__this_00,(MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_pivot
                                              (__this_01,UVar2,(MethodInfo *)0x0);
                                    UVar2 = UnityEngine_RectTransform__get_sizeDelta
                                                      (__this_00,(MethodInfo *)0x0);
                                    UnityEngine_RectTransform__set_sizeDelta
                                              (__this_01,UVar2,(MethodInfo *)0x0);
                                    UVar6 = UnityEngine_RectTransform__get_anchoredPosition3D
                                                      (__this_00,(MethodInfo *)0x0);
                                    local_38 = offset.fields.x;
                                    fStack_34 = offset.fields.y;
                                    value_00.fields.x = UVar6.fields.x + local_38;
                                    value_00.fields.y = UVar6.fields.y + fStack_34;
                                    value_00.fields.z = UVar6.fields.z + 0.0;
                                    UnityEngine_RectTransform__set_anchoredPosition3D
                                              (__this_01,value_00,(MethodInfo *)0x0);
                                    UVar6 = UnityEngine_Transform__get_localScale
                                                      ((UnityEngine_Transform_o *)__this_00,
                                                       (MethodInfo *)0x0);
                                    UnityEngine_Transform__set_localScale
                                              ((UnityEngine_Transform_o *)__this_01,UVar6,
                                               (MethodInfo *)0x0);
                                    value_01 = UnityEngine_Transform__get_localRotation
                                                         ((UnityEngine_Transform_o *)__this_00,
                                                          (MethodInfo *)0x0);
                                    UnityEngine_Transform__set_localRotation
                                              ((UnityEngine_Transform_o *)__this_01,value_01,
                                               (MethodInfo *)0x0);
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
LAB_04035e94:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$HookPopGradient
// il2cpp: void PatreonEffects_NameEffectController__HookPopGradient (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4035880

void PatreonEffects_NameEffectController__HookPopGradient
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  bool_conflict bVar2;
  undefined8 uVar3;
  
  if (DAT_0570437d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_init_method_metadata(&MethodInfo_Void_ApplyPopFaceGradient);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570437d = '\x01';
  }
  if (*(char *)((long)&(__this->fields).popActive + 2) == '\0') {
    pTVar1 = (__this->fields).text;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      pTVar1 = (__this->fields).text;
      uVar3 = il2cpp_runtime_glue(TypeInfo_Action_TMP_TextInfo);
      System_Action<object>___ctor();
      if (pTVar1 == (TMPro_TMP_Text_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (*(pTVar1->klass->vtable)._78_add_OnPreRenderText.methodPtr)
                (pTVar1,uVar3,(pTVar1->klass->vtable)._78_add_OnPreRenderText.method);
      *(undefined1 *)((long)&(__this->fields).popActive + 2) = 1;
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$ClearPop
// il2cpp: void PatreonEffects_NameEffectController__ClearPop (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4034780

void PatreonEffects_NameEffectController__ClearPop
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  if (DAT_0570437e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameEffectController);
    DAT_0570437e = '\x01';
  }
  *(undefined1 *)&(__this->fields).popActive = 0;
  PatreonEffects_NameEffectController__ClearPopGradient(__this,method);
  if (*(int *)(TypeInfo_NameEffectController + 0xe4) == 0) {
    il2cpp_init_class();
  }
  PatreonEffects_NameEffectController__DestroyPopLayer(&(__this->fields).popShadowText,method);
  PatreonEffects_NameEffectController__DestroyPopLayer(&(__this->fields).popExtrusionText,method);
  return;
}


// PatreonEffects.NameEffectController$$ClearOutline
// il2cpp: void PatreonEffects_NameEffectController__ClearOutline (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4034520

void PatreonEffects_NameEffectController__ClearOutline
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  char cVar1;
  
  cVar1 = *(char *)((long)&(__this->fields).popActive + 1);
  *(undefined1 *)((long)&(__this->fields).popActive + 1) = 0;
  PatreonEffects_NameEffectController__ClearPopGradient(__this,method);
  if (cVar1 != '\0') {
    PatreonEffects_NameEffectController__ClearShaderMaterial(__this,method);
    return;
  }
  return;
}


// PatreonEffects.NameEffectController$$ClearPopGradient
// il2cpp: void PatreonEffects_NameEffectController__ClearPopGradient (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4036310

void PatreonEffects_NameEffectController__ClearPopGradient
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  bool_conflict bVar2;
  undefined8 uVar3;
  
  if (DAT_0570437f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_init_method_metadata(&MethodInfo_Void_ApplyPopFaceGradient);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570437f = '\x01';
  }
  if (*(char *)((long)&(__this->fields).popActive + 2) != '\0') {
    pTVar1 = (__this->fields).text;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pTVar1 = (__this->fields).text;
      uVar3 = il2cpp_runtime_glue(TypeInfo_Action_TMP_TextInfo);
      System_Action<object>___ctor();
      if (pTVar1 == (TMPro_TMP_Text_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (*(pTVar1->klass->vtable)._79_remove_OnPreRenderText.methodPtr)
                (pTVar1,uVar3,(pTVar1->klass->vtable)._79_remove_OnPreRenderText.method);
    }
  }
  *(undefined1 *)((long)&(__this->fields).popActive + 2) = 0;
  return;
}


// PatreonEffects.NameEffectController$$HookEffectVertexData
// il2cpp: void PatreonEffects_NameEffectController__HookEffectVertexData (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4034a40

void PatreonEffects_NameEffectController__HookEffectVertexData
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  bool_conflict bVar2;
  undefined8 uVar3;
  
  if (DAT_05704380 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_init_method_metadata(&MethodInfo_Void_UpdateEffectVertexData);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704380 = '\x01';
  }
  if (*(char *)((long)&(__this->fields).popActive + 3) == '\0') {
    pTVar1 = (__this->fields).text;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      pTVar1 = (__this->fields).text;
      uVar3 = il2cpp_runtime_glue(TypeInfo_Action_TMP_TextInfo);
      System_Action<object>___ctor();
      if (pTVar1 == (TMPro_TMP_Text_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (*(pTVar1->klass->vtable)._78_add_OnPreRenderText.methodPtr)
                (pTVar1,uVar3,(pTVar1->klass->vtable)._78_add_OnPreRenderText.method);
      *(undefined1 *)((long)&(__this->fields).popActive + 3) = 1;
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$ClearEffectVertexData
// il2cpp: void PatreonEffects_NameEffectController__ClearEffectVertexData (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4034450

void PatreonEffects_NameEffectController__ClearEffectVertexData
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  bool_conflict bVar2;
  undefined8 uVar3;
  
  if (DAT_05704381 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_init_method_metadata(&MethodInfo_Void_UpdateEffectVertexData);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704381 = '\x01';
  }
  if (*(char *)((long)&(__this->fields).popActive + 3) != '\0') {
    pTVar1 = (__this->fields).text;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pTVar1 = (__this->fields).text;
      uVar3 = il2cpp_runtime_glue(TypeInfo_Action_TMP_TextInfo);
      System_Action<object>___ctor();
      if (pTVar1 == (TMPro_TMP_Text_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (*(pTVar1->klass->vtable)._79_remove_OnPreRenderText.methodPtr)
                (pTVar1,uVar3,(pTVar1->klass->vtable)._79_remove_OnPreRenderText.method);
    }
  }
  *(undefined1 *)((long)&(__this->fields).popActive + 3) = 0;
  return;
}


// PatreonEffects.NameEffectController$$DestroyPopLayer
// il2cpp: void PatreonEffects_NameEffectController__DestroyPopLayer (TMPro_TMP_Text_o** layer, const MethodInfo* method);
// 0x40363e0

void PatreonEffects_NameEffectController__DestroyPopLayer
               (TMPro_TMP_Text_o **layer,MethodInfo *method)

{
  TMPro_TMP_Text_o *x;
  bool_conflict bVar1;
  UnityEngine_Object_o *obj;
  
  if (DAT_05704382 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704382 = '\x01';
  }
  x = *layer;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (*layer == (TMPro_TMP_Text_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  obj = (UnityEngine_Object_o *)
        UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*layer,(MethodInfo *)0x0);
  *layer = (TMPro_TMP_Text_o *)0x0;
  il2cpp_runtime_glue(layer);
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((char)bVar1 != '\0') {
    UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__DestroyImmediate(obj,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.NameEffectController$$ClearShaderMaterial
// il2cpp: void PatreonEffects_NameEffectController__ClearShaderMaterial (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4035170

void PatreonEffects_NameEffectController__ClearShaderMaterial
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  TMPro_TMP_Text_o *pTVar2;
  UnityEngine_Object_o *pUVar3;
  bool_conflict bVar4;
  
  if (DAT_05704383 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704383 = '\x01';
  }
  pTVar2 = (__this->fields).text;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar3 = (UnityEngine_Object_o *)(__this->fields).originalFontMaterial;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pTVar2 = (__this->fields).text;
      if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
        (*(pTVar2->klass->vtable)._68_set_fontSharedMaterial.methodPtr)
                  (pTVar2,(__this->fields).originalFontMaterial,
                   (pTVar2->klass->vtable)._68_set_fontSharedMaterial.method);
        pTVar2 = (__this->fields).text;
        if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
          (*(pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                    (pTVar2,0,0,(pTVar2->klass->vtable)._106_ForceMeshUpdate.method);
          goto LAB_0403523e;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_0403523e:
  pUVar3 = (UnityEngine_Object_o *)(__this->fields).runtimeMat;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields).runtimeMat;
  bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    pUVar3 = (UnityEngine_Object_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((char)bVar4 == '\0') {
      UnityEngine_Object__DestroyImmediate(pUVar3,(MethodInfo *)0x0);
    }
    else {
      UnityEngine_Object__Destroy(pUVar3,(MethodInfo *)0x0);
    }
  }
  (__this->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
  il2cpp_runtime_glue(ppUVar1,0);
  *(undefined1 *)&(__this->fields).initialized = 0;
  return;
}


// PatreonEffects.NameEffectController$$UpdateEffectVertexData
// il2cpp: void PatreonEffects_NameEffectController__UpdateEffectVertexData (PatreonEffects_NameEffectController_o* __this, TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
// 0x4034b10

/* WARNING: Type propagation algorithm not settling */

void PatreonEffects_NameEffectController__UpdateEffectVertexData
               (PatreonEffects_NameEffectController_o *__this,TMPro_TMP_TextInfo_o *textInfo,
               MethodInfo *method)

{
  ulong uVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  UnityEngine_Object_o *x;
  TMPro_TMP_CharacterInfo_array *pTVar5;
  TMPro_TMP_MeshInfo_array *pTVar6;
  UnityEngine_Vector3_array *pUVar7;
  UnityEngine_Color32_array *pUVar8;
  float fVar9;
  float fVar10;
  byte bVar11;
  byte bVar12;
  bool_conflict bVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  MethodInfo *pMVar18;
  MethodInfo *in_R9;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  TMPro_TMP_TextInfo_o *local_38;
  
  if (DAT_05704384 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameEffectController);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704384 = '\x01';
  }
  local_3c = 0.0;
  local_40 = 0.0;
  local_44 = 0.0;
  local_48 = 0.0;
  x = (UnityEngine_Object_o *)(__this->fields).runtimeMat;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar13 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((textInfo != (TMPro_TMP_TextInfo_o *)0x0) && ((char)bVar13 == '\0')) {
    if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    bVar13 = PatreonEffects_NameEffectController__TryLocalBounds
                       (textInfo,&local_3c,&local_40,&local_44,&local_48,in_R9);
    fVar10 = local_3c;
    fVar9 = local_44;
    if (((char)bVar13 != '\0') && (iVar14 = (textInfo->fields).characterCount, 0 < iVar14)) {
      fVar20 = local_40 - local_3c;
      if (fVar20 <= 0.001) {
        fVar20 = 0.001;
      }
      fVar21 = local_48 - local_44;
      if (fVar21 <= 0.001) {
        fVar21 = 0.001;
      }
      lVar16 = 0x58;
      uVar17 = 0;
      pTVar5 = (textInfo->fields).characterInfo;
      local_38 = textInfo;
      pMVar18 = TypeInfo_NameEffectController;
      while (TypeInfo_NameEffectController = pMVar18, pTVar5 != (TMPro_TMP_CharacterInfo_array *)0x0) {
        if ((uint)pTVar5->max_length <= uVar17) goto LAB_04035036;
        if ((*(byte *)((long)&pTVar5->m_Items[0].fields.topRight.fields.y + lVar16) & 1) != 0) {
          pTVar6 = (textInfo->fields).meshInfo;
          if (pTVar6 == (TMPro_TMP_MeshInfo_array *)0x0) break;
          uVar4 = *(uint *)((long)pTVar5->m_Items + lVar16 + -0x20);
          if ((uint)pTVar6->max_length <= uVar4) goto LAB_04035036;
          pUVar7 = pTVar6->m_Items[(int)uVar4].fields.vertices;
          if ((pUVar7 != (UnityEngine_Vector3_array *)0x0) &&
             (pUVar8 = pTVar6->m_Items[(int)uVar4].fields.colors32,
             pUVar8 != (UnityEngine_Color32_array *)0x0)) {
            uVar4 = *(uint *)((long)pTVar5->m_Items + lVar16 + -0xc);
            uVar19 = (ulong)uVar4;
            if (((int)(uVar4 + 3) < (int)pUVar8->max_length) &&
               ((int)(uVar4 + 3) < (int)pUVar7->max_length)) {
              if (((pUVar8->max_length & 0xffffffff) <= uVar19) ||
                 ((pUVar7->max_length & 0xffffffff) <= uVar19)) {
LAB_04035036:
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              lVar15 = (long)(int)uVar4;
              bVar3 = *(byte *)((long)&pUVar8->m_Items[0].fields.rgba + lVar15 * 4 + 3);
              fVar2 = pUVar7->m_Items[lVar15].fields.x;
              if (*(int *)((long)&pMVar18[2].parameters + 4) == 0) {
                il2cpp_init_class();
              }
              bVar11 = PatreonEffects_NameEffectController__ToByte
                                 ((fVar2 - fVar10) / fVar20,pMVar18);
              if (((uint)pUVar7->max_length <= uVar19) ||
                 (bVar12 = PatreonEffects_NameEffectController__ToByte
                                     ((pUVar7->m_Items[lVar15].fields.y - fVar9) / fVar21,pMVar18),
                 (uint)pUVar8->max_length <= uVar19)) goto LAB_04035036;
              (&pUVar8->m_Items[0].fields.rgba)[lVar15] =
                   (uint)bVar11 | (uint)bVar3 << 0x18 | (uint)bVar12 << 8 | 0xff0000;
              uVar1 = uVar19 + 1;
              if (((uint)pUVar8->max_length <= uVar1) || ((uint)pUVar7->max_length <= uVar1))
              goto LAB_04035036;
              lVar15 = (long)(int)uVar1;
              bVar3 = *(byte *)((long)&pUVar8->m_Items[0].fields.rgba + lVar15 * 4 + 3);
              fVar2 = pUVar7->m_Items[lVar15].fields.x;
              pMVar18 = TypeInfo_NameEffectController;
              if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
                il2cpp_init_class();
              }
              bVar11 = PatreonEffects_NameEffectController__ToByte
                                 ((fVar2 - fVar10) / fVar20,pMVar18);
              if (((uint)pUVar7->max_length <= uVar1) ||
                 (bVar12 = PatreonEffects_NameEffectController__ToByte
                                     ((pUVar7->m_Items[lVar15].fields.y - fVar9) / fVar21,pMVar18),
                 (uint)pUVar8->max_length <= uVar1)) goto LAB_04035036;
              (&pUVar8->m_Items[0].fields.rgba)[lVar15] =
                   (uint)bVar11 | (uint)bVar3 << 0x18 | (uint)bVar12 << 8 | 0xff0000;
              uVar1 = uVar19 + 2;
              if (((uint)pUVar8->max_length <= uVar1) || ((uint)pUVar7->max_length <= uVar1))
              goto LAB_04035036;
              lVar15 = (long)(int)uVar1;
              bVar3 = *(byte *)((long)&pUVar8->m_Items[0].fields.rgba + lVar15 * 4 + 3);
              fVar2 = pUVar7->m_Items[lVar15].fields.x;
              pMVar18 = TypeInfo_NameEffectController;
              if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
                il2cpp_init_class();
              }
              bVar11 = PatreonEffects_NameEffectController__ToByte
                                 ((fVar2 - fVar10) / fVar20,pMVar18);
              if (((uint)pUVar7->max_length <= uVar1) ||
                 (bVar12 = PatreonEffects_NameEffectController__ToByte
                                     ((pUVar7->m_Items[lVar15].fields.y - fVar9) / fVar21,pMVar18),
                 (uint)pUVar8->max_length <= uVar1)) goto LAB_04035036;
              (&pUVar8->m_Items[0].fields.rgba)[lVar15] =
                   (uint)bVar11 | (uint)bVar3 << 0x18 | (uint)bVar12 << 8 | 0xff0000;
              uVar19 = uVar19 + 3;
              if (((uint)pUVar8->max_length <= uVar19) || ((uint)pUVar7->max_length <= uVar19))
              goto LAB_04035036;
              lVar15 = (long)(int)uVar19;
              bVar3 = *(byte *)((long)&pUVar8->m_Items[0].fields.rgba + lVar15 * 4 + 3);
              fVar2 = pUVar7->m_Items[lVar15].fields.x;
              pMVar18 = TypeInfo_NameEffectController;
              if (*(int *)((long)&TypeInfo_NameEffectController[2].parameters + 4) == 0) {
                il2cpp_init_class();
              }
              bVar11 = PatreonEffects_NameEffectController__ToByte
                                 ((fVar2 - fVar10) / fVar20,pMVar18);
              if (((uint)pUVar7->max_length <= uVar19) ||
                 (bVar12 = PatreonEffects_NameEffectController__ToByte
                                     ((pUVar7->m_Items[lVar15].fields.y - fVar9) / fVar21,pMVar18),
                 (uint)pUVar8->max_length <= uVar19)) goto LAB_04035036;
              (&pUVar8->m_Items[0].fields.rgba)[lVar15] =
                   (uint)bVar11 | (uint)bVar3 << 0x18 | (uint)bVar12 << 8 | 0xff0000;
              iVar14 = (local_38->fields).characterCount;
              textInfo = local_38;
            }
          }
        }
        uVar17 = uVar17 + 1;
        lVar16 = lVar16 + 0x178;
        if ((long)iVar14 <= (long)uVar17) {
          return;
        }
        pMVar18 = TypeInfo_NameEffectController;
        pTVar5 = (textInfo->fields).characterInfo;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// PatreonEffects.NameEffectController$$ToByte
// il2cpp: uint8_t PatreonEffects_NameEffectController__ToByte (float value, const MethodInfo* method);
// 0x4036710

uint8_t PatreonEffects_NameEffectController__ToByte(float value,MethodInfo *method)

{
  int iVar1;
  double dVar2;
  double dVar3;
  MethodInfo *in_RSI;
  MethodInfo *method_00;
  float fVar4;
  undefined1 local_20 [8];
  undefined1 local_18 [16];
  
  fVar4 = 1.0;
  if (value <= 1.0) {
    fVar4 = value;
  }
  local_18 = ZEXT416(-(uint)(0.0 <= value) & (uint)(fVar4 * 255.0));
  if (DAT_056ff244 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056ff244 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  dVar2 = (double)(float)local_18._0_4_;
  method_00 = (MethodInfo *)local_20;
  dVar3 = modf(dVar2,(double *)method_00,in_RSI);
  if (0.0 <= (float)local_18._0_4_) {
    if ((dVar3 != 0.5) || (NAN(dVar3))) {
      dVar2 = floor(dVar2 + 0.5,method_00);
      return (uint8_t)(int)dVar2;
    }
    if (((long)(double)local_20 & 1U) != 0) {
      local_20 = (undefined1  [8])((double)local_20 + 1.0);
    }
  }
  else {
    if ((dVar3 != -0.5) || (NAN(dVar3))) {
      dVar2 = ceil(dVar2 + -0.5,method_00);
      return (uint8_t)(int)dVar2;
    }
    if (((long)(double)local_20 & 1U) != 0) {
      return (uint8_t)(int)((double)local_20 + -1.0);
    }
  }
  return (uint8_t)(int)(double)local_20;
}


// PatreonEffects.NameEffectController$$TryLocalBounds
// il2cpp: bool PatreonEffects_NameEffectController__TryLocalBounds (TMPro_TMP_TextInfo_o* textInfo, float* minX, float* maxX, float* minY, float* maxY, const MethodInfo* method);
// 0x40364d0

bool_conflict
PatreonEffects_NameEffectController__TryLocalBounds
          (TMPro_TMP_TextInfo_o *textInfo,float *minX,float *maxX,float *minY,float *maxY,
          MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  TMPro_TMP_CharacterInfo_array *pTVar10;
  TMPro_TMP_MeshInfo_array *pTVar11;
  UnityEngine_Vector3_array *pUVar12;
  ulong in_RAX;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  
  *minX = INFINITY;
  *maxX = -INFINITY;
  *minY = INFINITY;
  *maxY = -INFINITY;
  if (textInfo != (TMPro_TMP_TextInfo_o *)0x0) {
    lVar15 = (long)(textInfo->fields).characterCount;
    fVar19 = -INFINITY;
    if (lVar15 < 1) {
LAB_040366e4:
      if (*minX <= *maxX && *maxX != *minX) {
        return (bool_conflict)CONCAT71((int7)(in_RAX >> 8),*minY <= fVar19 && fVar19 != *minY);
      }
      return 0;
    }
    lVar16 = 0x58;
    uVar18 = 0;
    pTVar10 = (textInfo->fields).characterInfo;
    while (pTVar10 != (TMPro_TMP_CharacterInfo_array *)0x0) {
      in_RAX = (ulong)(uint)pTVar10->max_length;
      if (in_RAX <= uVar18) goto LAB_04036701;
      if ((*(byte *)((long)&pTVar10->m_Items[0].fields.topRight.fields.y + lVar16) & 1) != 0) {
        pTVar11 = (textInfo->fields).meshInfo;
        if (pTVar11 == (TMPro_TMP_MeshInfo_array *)0x0) break;
        uVar9 = *(uint *)((long)pTVar10->m_Items + lVar16 + -0x20);
        if ((uint)pTVar11->max_length <= uVar9) {
LAB_04036701:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar12 = pTVar11->m_Items[(int)uVar9].fields.vertices;
        if (pUVar12 == (UnityEngine_Vector3_array *)0x0) break;
        uVar9 = *(uint *)((long)pTVar10->m_Items + lVar16 + -0xc);
        uVar14 = (ulong)uVar9;
        uVar17 = (ulong)(uint)pUVar12->max_length;
        if (uVar17 <= uVar14) goto LAB_04036701;
        uVar1 = pUVar12->m_Items[(int)uVar9].fields.x;
        uVar5 = pUVar12->m_Items[(int)uVar9].fields.y;
        fVar19 = *minX;
        if ((float)uVar1 <= *minX) {
          fVar19 = (float)uVar1;
        }
        *minX = fVar19;
        fVar19 = *maxX;
        if (*maxX <= (float)uVar1) {
          fVar19 = (float)uVar1;
        }
        *maxX = fVar19;
        fVar19 = *minY;
        if ((float)uVar5 <= *minY) {
          fVar19 = (float)uVar5;
        }
        *minY = fVar19;
        fVar19 = *maxY;
        if (*maxY <= (float)uVar5) {
          fVar19 = (float)uVar5;
        }
        *maxY = fVar19;
        if (uVar17 <= uVar14 + 1) goto LAB_04036701;
        uVar2 = pUVar12->m_Items[(int)(uVar14 + 1)].fields.x;
        uVar6 = pUVar12->m_Items[(int)(uVar14 + 1)].fields.y;
        fVar19 = *minX;
        if ((float)uVar2 <= *minX) {
          fVar19 = (float)uVar2;
        }
        *minX = fVar19;
        fVar19 = *maxX;
        if (*maxX <= (float)uVar2) {
          fVar19 = (float)uVar2;
        }
        *maxX = fVar19;
        fVar19 = *minY;
        if ((float)uVar6 <= *minY) {
          fVar19 = (float)uVar6;
        }
        *minY = fVar19;
        fVar19 = *maxY;
        if (*maxY <= (float)uVar6) {
          fVar19 = (float)uVar6;
        }
        *maxY = fVar19;
        if (uVar17 <= uVar14 + 2) goto LAB_04036701;
        uVar3 = pUVar12->m_Items[(int)(uVar14 + 2)].fields.x;
        uVar7 = pUVar12->m_Items[(int)(uVar14 + 2)].fields.y;
        fVar19 = *minX;
        if ((float)uVar3 <= *minX) {
          fVar19 = (float)uVar3;
        }
        *minX = fVar19;
        fVar19 = *maxX;
        if (*maxX <= (float)uVar3) {
          fVar19 = (float)uVar3;
        }
        *maxX = fVar19;
        fVar19 = *minY;
        if ((float)uVar7 <= *minY) {
          fVar19 = (float)uVar7;
        }
        *minY = fVar19;
        fVar19 = *maxY;
        if (*maxY <= (float)uVar7) {
          fVar19 = (float)uVar7;
        }
        *maxY = fVar19;
        if (uVar17 <= uVar14 + 3) goto LAB_04036701;
        lVar13 = (long)(int)(uVar14 + 3);
        in_RAX = lVar13 * 3;
        uVar4 = pUVar12->m_Items[lVar13].fields.x;
        uVar8 = pUVar12->m_Items[lVar13].fields.y;
        fVar19 = *minX;
        if ((float)uVar4 <= *minX) {
          fVar19 = (float)uVar4;
        }
        *minX = fVar19;
        fVar19 = *maxX;
        if (*maxX <= (float)uVar4) {
          fVar19 = (float)uVar4;
        }
        *maxX = fVar19;
        fVar19 = *minY;
        if ((float)uVar8 <= *minY) {
          fVar19 = (float)uVar8;
        }
        *minY = fVar19;
        fVar19 = *maxY;
        if (*maxY <= (float)uVar8) {
          fVar19 = (float)uVar8;
        }
        *maxY = fVar19;
      }
      uVar18 = uVar18 + 1;
      lVar16 = lVar16 + 0x178;
      if (lVar15 <= (long)uVar18) goto LAB_040366e4;
      pTVar10 = (textInfo->fields).characterInfo;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectController$$ApplyPopFaceGradient
// il2cpp: void PatreonEffects_NameEffectController__ApplyPopFaceGradient (PatreonEffects_NameEffectController_o* __this, TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
// 0x4036840

/* WARNING: Type propagation algorithm not settling */

void PatreonEffects_NameEffectController__ApplyPopFaceGradient
               (PatreonEffects_NameEffectController_o *__this,TMPro_TMP_TextInfo_o *textInfo,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  TMPro_TMP_CharacterInfo_array *pTVar4;
  TMPro_TMP_MeshInfo_array *pTVar5;
  UnityEngine_Vector3_array *pUVar6;
  UnityEngine_Color32_array *pUVar7;
  TMPro_TMP_Text_o *__this_00;
  UnityEngine_Vector2_o UVar8;
  undefined1 auVar9 [16];
  bool_conflict bVar10;
  int32_t iVar11;
  UnityEngine_Transform_o *__this_01;
  float *pfVar12;
  float *pfVar13;
  ulong uVar14;
  float *pfVar15;
  long lVar16;
  float *pfVar17;
  MethodInfo *in_R9;
  long lVar18;
  long lVar19;
  float fVar20;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar21;
  float fVar22;
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Vector3_o worldPoint;
  float fStack_a8;
  float fStack_a4;
  float *pfStack_a0;
  float *pfStack_98;
  float fStack_90;
  float fStack_8c;
  TMPro_TMP_TextInfo_o *pTStack_88;
  float *pfStack_80;
  float *pfStack_78;
  PatreonEffects_NameEffectController_o *pPStack_70;
  undefined1 auStack_68 [16];
  ulong uStack_58;
  float *pfStack_50;
  float *pfStack_48;
  UnityEngine_Camera_o *pUStack_40;
  ulong uStack_38;
  
  fStack_a4 = 0.0;
  fStack_a8 = 0.0;
  pUStack_40 = PatreonEffects_NameEffectController__PopCamera(__this,(MethodInfo *)textInfo);
  pPStack_70 = __this;
  bVar10 = PatreonEffects_NameEffectController__TryPopFaceBounds
                     (__this,textInfo,pUStack_40,&fStack_a4,&fStack_a8,in_R9);
  if ((char)bVar10 == '\0') {
    return;
  }
  if (textInfo != (TMPro_TMP_TextInfo_o *)0x0) {
    if ((textInfo->fields).characterCount < 1) {
      return;
    }
    fStack_8c = fStack_a8 - fStack_a4;
    if (fStack_8c <= 0.001) {
      fStack_8c = 0.001;
    }
    pfStack_78 = (float *)&(pPStack_70->fields).popGradientHooked;
    pfStack_80 = (float *)&(pPStack_70->fields).cleared;
    pfStack_98 = &(pPStack_70->fields).popFaceA.fields.g;
    pfStack_a0 = &(pPStack_70->fields).popFaceA.fields.a;
    pfStack_48 = &(pPStack_70->fields).popFaceB.fields.g;
    pfStack_50 = &(pPStack_70->fields).popFaceB.fields.a;
    uVar14 = 0;
    pTVar4 = (textInfo->fields).characterInfo;
    pTStack_88 = textInfo;
    fStack_90 = fStack_a4;
    while (pTVar4 != (TMPro_TMP_CharacterInfo_array *)0x0) {
      if ((uint)pTVar4->max_length <= uVar14) {
LAB_04036b9f:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uStack_58 = uVar14;
      if (((&pTVar4->m_Items[0].fields.highlightColor)[uVar14 * 0x2f].fields.rgba & 1) != 0) {
        pTVar5 = (pTStack_88->fields).meshInfo;
        if (pTVar5 == (TMPro_TMP_MeshInfo_array *)0x0) break;
        uVar3 = (&pTVar4->m_Items[0].fields.materialReferenceIndex)[uVar14 * 0x5e];
        if ((uint)pTVar5->max_length <= uVar3) goto LAB_04036b9f;
        pUVar6 = pTVar5->m_Items[(int)uVar3].fields.vertices;
        if (pUVar6 == (UnityEngine_Vector3_array *)0x0) break;
        uStack_38 = (ulong)(uint)(&pTVar4->m_Items[0].fields.vertexIndex)[uVar14 * 0x5e];
        pUVar7 = pTVar5->m_Items[(int)uVar3].fields.colors32;
        lVar18 = uStack_38 << 0x20;
        lVar19 = 0;
        do {
          uVar14 = uStack_38 + lVar19;
          if ((uint)pUVar6->max_length <= uVar14) goto LAB_04036b9f;
          lVar16 = lVar18 >> 0x20;
          uVar1 = pUVar6->m_Items[lVar16].fields.x;
          uVar2 = pUVar6->m_Items[lVar16].fields.y;
          auStack_68._4_4_ = uVar2;
          auStack_68._0_4_ = uVar1;
          auStack_68._8_8_ = 0;
          fVar21 = pUVar6->m_Items[lVar16].fields.z;
          if (DAT_05704386 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
            DAT_05704386 = '\x01';
          }
          __this_00 = (pPStack_70->fields).text;
          if ((__this_00 == (TMPro_TMP_Text_o *)0x0) ||
             (__this_01 = TMPro_TMP_Text__get_transform(__this_00,(MethodInfo *)0x0),
             auVar9 = auStack_68, __this_01 == (UnityEngine_Transform_o *)0x0)) goto LAB_04036b9a;
          UVar23.fields.z = fVar21;
          UVar23.fields.x = (float)auStack_68._0_4_;
          UVar23.fields.y = (float)auStack_68._4_4_;
          auStack_68 = auVar9;
          UVar23 = UnityEngine_Transform__TransformPoint(__this_01,UVar23,(MethodInfo *)0x0);
          worldPoint.fields.z = UVar23.fields.z;
          fVar21 = UVar23.fields.x;
          fVar20 = UVar23.fields.y;
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            auStack_68._8_4_ = extraout_XMM0_Dc;
            auStack_68._0_8_ = UVar23.fields._0_8_;
            auStack_68._12_4_ = extraout_XMM0_Dd;
            il2cpp_init_class();
            fVar21 = (float)auStack_68._0_4_;
            fVar20 = (float)auStack_68._4_4_;
          }
          worldPoint.fields.y = fVar20;
          worldPoint.fields.x = fVar21;
          UVar8 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                            (pUStack_40,worldPoint,(MethodInfo *)0x0);
          fVar20 = (UVar8.fields.x - fStack_90) / fStack_8c;
          pfVar12 = pfStack_78;
          pfVar13 = pfStack_98;
          pfVar15 = pfStack_80;
          pfVar17 = pfStack_a0;
          fVar21 = 0.0;
          if ((0.0 <= fVar20) && ((fVar21 = 1.0, 1.0 < fVar20 || (fVar21 = fVar20, 0.5 <= fVar20))))
          {
            pfVar12 = pfStack_98;
            pfVar13 = pfStack_48;
            pfVar15 = pfStack_a0;
            pfVar17 = pfStack_50;
            fVar21 = fVar21 + -0.5;
          }
          fVar21 = fVar21 + fVar21;
          fVar20 = 1.0;
          if (fVar21 <= 1.0) {
            fVar20 = fVar21;
          }
          fVar20 = (float)(-(uint)(0.0 <= fVar21) & (uint)fVar20);
          fVar21 = (float)*(undefined8 *)pfVar15;
          fVar22 = (float)((ulong)*(undefined8 *)pfVar15 >> 0x20);
          iVar11 = il2cpp_glue_03ad8d60(((float)*(undefined8 *)pfVar13 - (float)*(undefined8 *)pfVar12) *
                                fVar20 + (float)*(undefined8 *)pfVar12,
                                CONCAT44(((float)((ulong)*(undefined8 *)pfVar17 >> 0x20) - fVar22) *
                                         fVar20 + fVar22,
                                         ((float)*(undefined8 *)pfVar17 - fVar21) * fVar20 + fVar21)
                                ,0);
          if (pUVar7 == (UnityEngine_Color32_array *)0x0) goto LAB_04036b9a;
          if ((uint)pUVar7->max_length <= uVar14) goto LAB_04036b9f;
          (&pUVar7->m_Items[0].fields.rgba)[lVar16] = iVar11;
          lVar19 = lVar19 + 1;
          lVar18 = lVar18 + 0x100000000;
        } while (lVar19 != 4);
      }
      uVar14 = uStack_58 + 1;
      if ((long)(pTStack_88->fields).characterCount <= (long)uVar14) {
        return;
      }
      pTVar4 = (pTStack_88->fields).characterInfo;
    }
  }
LAB_04036b9a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectController$$SampleFaceGradient
// il2cpp: UnityEngine_Color_o PatreonEffects_NameEffectController__SampleFaceGradient (PatreonEffects_NameEffectController_o* __this, float t, const MethodInfo* method);
// 0x4037190

UnityEngine_Color_o
PatreonEffects_NameEffectController__SampleFaceGradient
          (PatreonEffects_NameEffectController_o *__this,float t,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  UnityEngine_Color_o *pUVar4;
  UnityEngine_Color_o *pUVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Color_o UVar11;
  
  fVar8 = 0.0;
  if (0.0 <= t) {
    fVar8 = 1.0;
    if (t <= 1.0) {
      fVar8 = t;
    }
    if (0.5 <= fVar8) {
      pfVar7 = &(__this->fields).popFaceA.fields.a;
      pUVar4 = &(__this->fields).popFaceB;
      pfVar6 = &(__this->fields).popFaceA.fields.g;
      pUVar5 = &(__this->fields).popFaceB;
      fVar8 = fVar8 + -0.5;
      goto LAB_040371e1;
    }
  }
  pfVar6 = (float *)&(__this->fields).popGradientHooked;
  pfVar7 = (float *)&(__this->fields).cleared;
  pUVar4 = &(__this->fields).popFaceA;
  pUVar5 = &(__this->fields).popFaceA;
LAB_040371e1:
  uVar2 = *(undefined8 *)&(pUVar5->fields).a;
  uVar1 = (pUVar4->fields).g;
  uVar3 = (pUVar4->fields).b;
  fVar8 = fVar8 + fVar8;
  fVar9 = 1.0;
  if (fVar8 <= 1.0) {
    fVar9 = fVar8;
  }
  fVar9 = (float)(-(uint)(0.0 <= fVar8) & (uint)fVar9);
  fVar8 = (float)*(undefined8 *)pfVar6;
  fVar10 = (float)((ulong)*(undefined8 *)pfVar6 >> 0x20);
  UVar11.fields.r = ((float)uVar1 - fVar8) * fVar9 + fVar8;
  UVar11.fields.g = ((float)uVar3 - fVar10) * fVar9 + fVar10;
  fVar8 = (float)*(undefined8 *)pfVar7;
  fVar10 = (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
  UVar11.fields.b = ((float)uVar2 - fVar8) * fVar9 + fVar8;
  UVar11.fields.a = ((float)((ulong)uVar2 >> 0x20) - fVar10) * fVar9 + fVar10;
  return (UnityEngine_Color_o)UVar11.fields;
}


// PatreonEffects.NameEffectController$$TryPopFaceBounds
// il2cpp: bool PatreonEffects_NameEffectController__TryPopFaceBounds (PatreonEffects_NameEffectController_o* __this, TMPro_TMP_TextInfo_o* textInfo, UnityEngine_Camera_o* camera, float* minX, float* maxX, const MethodInfo* method);
// 0x4036c90

bool_conflict
PatreonEffects_NameEffectController__TryPopFaceBounds
          (PatreonEffects_NameEffectController_o *__this,TMPro_TMP_TextInfo_o *textInfo,
          UnityEngine_Camera_o *camera,float *minX,float *maxX,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  TMPro_TMP_CharacterInfo_array *pTVar9;
  TMPro_TMP_MeshInfo_array *pTVar10;
  UnityEngine_Vector3_array *pUVar11;
  TMPro_TMP_Text_o *pTVar12;
  UnityEngine_Vector2_o UVar13;
  uint uVar14;
  long in_RAX;
  UnityEngine_Transform_o *pUVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  
  *minX = INFINITY;
  *maxX = -INFINITY;
  if (textInfo != (TMPro_TMP_TextInfo_o *)0x0) {
    if ((textInfo->fields).characterCount < 1) {
      fVar20 = -INFINITY;
LAB_040370cb:
      return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),*minX <= fVar20 && fVar20 != *minX);
    }
    fVar20 = -INFINITY;
    lVar16 = 0x58;
    uVar18 = 0;
    pTVar9 = (textInfo->fields).characterInfo;
    while (pTVar9 != (TMPro_TMP_CharacterInfo_array *)0x0) {
      if ((uint)pTVar9->max_length <= uVar18) goto LAB_040370e6;
      if ((*(byte *)((long)&pTVar9->m_Items[0].fields.topRight.fields.y + lVar16) & 1) != 0) {
        pTVar10 = (textInfo->fields).meshInfo;
        if (pTVar10 == (TMPro_TMP_MeshInfo_array *)0x0) break;
        uVar17 = *(uint *)((long)pTVar9->m_Items + lVar16 + -0x20);
        if ((uint)pTVar10->max_length <= uVar17) {
LAB_040370e6:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar11 = pTVar10->m_Items[(int)uVar17].fields.vertices;
        if (pUVar11 == (UnityEngine_Vector3_array *)0x0) break;
        uVar17 = *(uint *)((long)pTVar9->m_Items + lVar16 + -0xc);
        if ((uint)pUVar11->max_length <= uVar17) goto LAB_040370e6;
        uVar1 = pUVar11->m_Items[(int)uVar17].fields.x;
        uVar5 = pUVar11->m_Items[(int)uVar17].fields.y;
        UVar21.fields.y = (float)uVar5;
        UVar21.fields.x = (float)uVar1;
        fVar20 = pUVar11->m_Items[(int)uVar17].fields.z;
        if (DAT_05704386 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
          DAT_05704386 = '\x01';
        }
        pTVar12 = (__this->fields).text;
        if ((pTVar12 == (TMPro_TMP_Text_o *)0x0) ||
           (pUVar15 = TMPro_TMP_Text__get_transform(pTVar12,(MethodInfo *)0x0),
           pUVar15 == (UnityEngine_Transform_o *)0x0)) break;
        UVar21.fields.z = fVar20;
        UVar21 = UnityEngine_Transform__TransformPoint(pUVar15,UVar21,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UVar13 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                           (camera,UVar21,(MethodInfo *)0x0);
        fVar19 = UVar13.fields.x;
        fVar20 = *minX;
        if (fVar19 <= *minX) {
          fVar20 = fVar19;
        }
        *minX = fVar20;
        fVar20 = *maxX;
        if (*maxX <= fVar19) {
          fVar20 = fVar19;
        }
        *maxX = fVar20;
        uVar14 = uVar17 + 1;
        if ((uint)pUVar11->max_length <= uVar14) goto LAB_040370e6;
        uVar2 = pUVar11->m_Items[(int)uVar14].fields.x;
        uVar6 = pUVar11->m_Items[(int)uVar14].fields.y;
        position.fields.y = (float)uVar6;
        position.fields.x = (float)uVar2;
        fVar20 = pUVar11->m_Items[(int)uVar14].fields.z;
        if (DAT_05704386 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
          DAT_05704386 = '\x01';
        }
        pTVar12 = (__this->fields).text;
        if ((pTVar12 == (TMPro_TMP_Text_o *)0x0) ||
           (pUVar15 = TMPro_TMP_Text__get_transform(pTVar12,(MethodInfo *)0x0),
           pUVar15 == (UnityEngine_Transform_o *)0x0)) break;
        position.fields.z = fVar20;
        UVar21 = UnityEngine_Transform__TransformPoint(pUVar15,position,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UVar13 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                           (camera,UVar21,(MethodInfo *)0x0);
        fVar19 = UVar13.fields.x;
        fVar20 = *minX;
        if (fVar19 <= *minX) {
          fVar20 = fVar19;
        }
        *minX = fVar20;
        fVar20 = *maxX;
        if (*maxX <= fVar19) {
          fVar20 = fVar19;
        }
        *maxX = fVar20;
        uVar14 = uVar17 + 2;
        if ((uint)pUVar11->max_length <= uVar14) goto LAB_040370e6;
        uVar3 = pUVar11->m_Items[(int)uVar14].fields.x;
        uVar7 = pUVar11->m_Items[(int)uVar14].fields.y;
        position_00.fields.y = (float)uVar7;
        position_00.fields.x = (float)uVar3;
        fVar20 = pUVar11->m_Items[(int)uVar14].fields.z;
        if (DAT_05704386 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
          DAT_05704386 = '\x01';
        }
        pTVar12 = (__this->fields).text;
        if ((pTVar12 == (TMPro_TMP_Text_o *)0x0) ||
           (pUVar15 = TMPro_TMP_Text__get_transform(pTVar12,(MethodInfo *)0x0),
           pUVar15 == (UnityEngine_Transform_o *)0x0)) break;
        position_00.fields.z = fVar20;
        UVar21 = UnityEngine_Transform__TransformPoint(pUVar15,position_00,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UVar13 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                           (camera,UVar21,(MethodInfo *)0x0);
        fVar19 = UVar13.fields.x;
        fVar20 = *minX;
        if (fVar19 <= *minX) {
          fVar20 = fVar19;
        }
        *minX = fVar20;
        fVar20 = *maxX;
        if (*maxX <= fVar19) {
          fVar20 = fVar19;
        }
        *maxX = fVar20;
        uVar17 = uVar17 + 3;
        if ((uint)pUVar11->max_length <= uVar17) goto LAB_040370e6;
        uVar4 = pUVar11->m_Items[(int)uVar17].fields.x;
        uVar8 = pUVar11->m_Items[(int)uVar17].fields.y;
        position_01.fields.y = (float)uVar8;
        position_01.fields.x = (float)uVar4;
        fVar20 = pUVar11->m_Items[(int)uVar17].fields.z;
        if (DAT_05704386 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
          DAT_05704386 = '\x01';
        }
        pTVar12 = (__this->fields).text;
        if ((pTVar12 == (TMPro_TMP_Text_o *)0x0) ||
           (pUVar15 = TMPro_TMP_Text__get_transform(pTVar12,(MethodInfo *)0x0),
           pUVar15 == (UnityEngine_Transform_o *)0x0)) break;
        position_01.fields.z = fVar20;
        UVar21 = UnityEngine_Transform__TransformPoint(pUVar15,position_01,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UVar13 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                           (camera,UVar21,(MethodInfo *)0x0);
        fVar19 = UVar13.fields.x;
        fVar20 = *minX;
        if (fVar19 <= *minX) {
          fVar20 = fVar19;
        }
        *minX = fVar20;
        fVar20 = *maxX;
        if (*maxX <= fVar19) {
          fVar20 = fVar19;
        }
        *maxX = fVar20;
      }
      uVar18 = uVar18 + 1;
      in_RAX = (long)(textInfo->fields).characterCount;
      lVar16 = lVar16 + 0x178;
      if (in_RAX <= (long)uVar18) goto LAB_040370cb;
      pTVar9 = (textInfo->fields).characterInfo;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectController$$PopCamera
// il2cpp: UnityEngine_Camera_o* PatreonEffects_NameEffectController__PopCamera (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4036bb0

UnityEngine_Camera_o *
PatreonEffects_NameEffectController__PopCamera
          (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o *__this_00;
  bool_conflict bVar1;
  int32_t iVar2;
  UnityEngine_Canvas_o *__this_01;
  UnityEngine_Camera_o *pUVar3;
  
  if (DAT_05704385 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Canvas_GetComponentInParent_Canvas);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704385 = '\x01';
  }
  __this_00 = (__this->fields).text;
  if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
    __this_01 = (UnityEngine_Canvas_o *)
                UnityEngine_Component__GetComponentInParent<object>
                          ((UnityEngine_Component_o *)__this_00,MethodInfo_Canvas_GetComponentInParent_Canvas);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (__this_01 == (UnityEngine_Canvas_o *)0x0) goto LAB_04036c8b;
      iVar2 = UnityEngine_Canvas__get_renderMode(__this_01,(MethodInfo *)0x0);
      if (iVar2 != 0) {
        pUVar3 = UnityEngine_Canvas__get_worldCamera(__this_01,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          pUVar3 = UnityEngine_Canvas__get_worldCamera(__this_01,(MethodInfo *)0x0);
          return pUVar3;
        }
        pUVar3 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
        return pUVar3;
      }
    }
    return (UnityEngine_Camera_o *)0x0;
  }
LAB_04036c8b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectController$$ScreenX
// il2cpp: float PatreonEffects_NameEffectController__ScreenX (PatreonEffects_NameEffectController_o* __this, UnityEngine_Vector3_o localVertex, UnityEngine_Camera_o* camera, const MethodInfo* method);
// 0x40370f0

float PatreonEffects_NameEffectController__ScreenX
                (PatreonEffects_NameEffectController_o *__this,UnityEngine_Vector3_o localVertex,
                UnityEngine_Camera_o *camera,MethodInfo *method)

{
  TMPro_TMP_Text_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o worldPoint;
  
  if (DAT_05704386 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
    DAT_05704386 = '\x01';
  }
  __this_00 = (__this->fields).text;
  if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
    __this_01 = TMPro_TMP_Text__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      worldPoint = UnityEngine_Transform__TransformPoint(__this_01,localVertex,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UVar1 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                        (camera,worldPoint,(MethodInfo *)0x0);
      return UVar1.fields.x;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameEffectController$$.ctor
// il2cpp: void PatreonEffects_NameEffectController___ctor (PatreonEffects_NameEffectController_o* __this, const MethodInfo* method);
// 0x4037230

void PatreonEffects_NameEffectController___ctor
               (PatreonEffects_NameEffectController_o *__this,MethodInfo *method)

{
  (__this->fields).effect = 1;
  (__this->fields).popGradientHooked = 0x3f800000;
  (__this->fields).effectVertexDataHooked = 0x3f800000;
  (__this->fields).cleared = 0x3f800000;
  (__this->fields).popFaceA.fields.r = 1.0;
  (__this->fields).popFaceA.fields.g = 1.0;
  (__this->fields).popFaceA.fields.b = 1.0;
  (__this->fields).popFaceA.fields.a = 1.0;
  (__this->fields).popFaceB.fields.r = 1.0;
  (__this->fields).popFaceB.fields.g = 1.0;
  (__this->fields).popFaceB.fields.b = 1.0;
  (__this->fields).popFaceB.fields.a = 1.0;
  (__this->fields).popFaceC.fields.r = 1.0;
  (__this->fields).popFaceC.fields.g = 0.0;
  (__this->fields).popFaceC.fields.b = 0.0;
  (__this->fields).popFaceC.fields.a = 0.0;
  (__this->fields).popShadowColor.fields.r = 1.0;
  (__this->fields).popShadowColor.fields.g = 1.0;
  (__this->fields).popShadowColor.fields.b = 0.0;
  (__this->fields).popShadowColor.fields.a = 1.0;
  (__this->fields).popExtrusionColor.fields.r = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.NameEffectController$$.cctor
// il2cpp: void PatreonEffects_NameEffectController___cctor (const MethodInfo* method);
// 0x4037280

void PatreonEffects_NameEffectController___cctor(MethodInfo *method)

{
  int32_t iVar1;
  
  if (DAT_05704387 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameEffectController);
    il2cpp_init_method_metadata(&"_GradientA");
    il2cpp_init_method_metadata(&"_FaceColor");
    il2cpp_init_method_metadata(&"_GradientB");
    il2cpp_init_method_metadata(&"_GradientC");
    il2cpp_init_method_metadata(&"_GradientScale");
    il2cpp_init_method_metadata(&"_EffectMode");
    il2cpp_init_method_metadata(&"_ScanlineDensity");
    il2cpp_init_method_metadata(&"_GradientD");
    il2cpp_init_method_metadata(&"_ScanlineStrength");
    il2cpp_init_method_metadata(&"_Softness");
    il2cpp_init_method_metadata(&"_FlickerSpeed");
    il2cpp_init_method_metadata(&"_GradientSpeed");
    il2cpp_init_method_metadata(&"_FlickerStrength");
    il2cpp_init_method_metadata(&"_ScanlineSpeed");
    il2cpp_init_method_metadata(&"_Glow");
    DAT_05704387 = '\x01';
  }
  iVar1 = UnityEngine_Shader__PropertyToID("_FaceColor",(MethodInfo *)0x0);
  **(int32_t **)(TypeInfo_NameEffectController + 0xb8) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_GradientA",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 4) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_GradientB",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 8) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_GradientC",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0xc) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_GradientD",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x10) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_GradientScale",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x14) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_GradientSpeed",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x18) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_EffectMode",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x1c) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_Glow",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x20) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_ScanlineStrength",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x24) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_ScanlineDensity",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x28) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_ScanlineSpeed",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x2c) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_FlickerStrength",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x30) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_FlickerSpeed",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x34) = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_Softness",(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_NameEffectController + 0xb8) + 0x38) = iVar1;
  return;
}


