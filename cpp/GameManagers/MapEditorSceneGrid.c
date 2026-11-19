// Type: GameManagers.MapEditorSceneGrid
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/MapEditorSceneGrid.cs
// Prior real C# source: none
// --------------------------------

// GameManagers.MapEditorSceneGrid.<>c$$.cctor
// il2cpp: void GameManagers_MapEditorSceneGrid___c___cctor (const MethodInfo* method);
// 0x5956c30

void GameManagers_MapEditorSceneGrid___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075458af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorSceneGrid_c);
    Il2CppMethodInitialized_075458af = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameManagers_MapEditorSceneGrid_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_GameManagers_MapEditorSceneGrid_c->static_fields->__9 =
       (GameManagers_MapEditorSceneGrid___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_MapEditorSceneGrid_c->static_fields->__9);
  return;
}


// GameManagers.MapEditorSceneGrid.<>c$$.ctor
// il2cpp: void GameManagers_MapEditorSceneGrid___c___ctor (GameManagers_MapEditorSceneGrid___c_o* __this, const MethodInfo* method);
// 0x5956ca0

void GameManagers_MapEditorSceneGrid___c___ctor
               (GameManagers_MapEditorSceneGrid___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.MapEditorSceneGrid.<>c$$<RefreshIfNeeded>b__10_0
// il2cpp: bool GameManagers_MapEditorSceneGrid___c___RefreshIfNeeded_b__10_0 (GameManagers_MapEditorSceneGrid___c_o* __this, bool enabled, const MethodInfo* method);
// 0x5956cb0

bool GameManagers_MapEditorSceneGrid___c___RefreshIfNeeded_b__10_0
               (GameManagers_MapEditorSceneGrid___c_o *__this,bool enabled,MethodInfo *method)

{
  return enabled;
}


// GameManagers.MapEditorSceneGrid$$Awake
// il2cpp: void GameManagers_MapEditorSceneGrid__Awake (GameManagers_MapEditorSceneGrid_o* __this, const MethodInfo* method);
// 0x59554b0

void GameManagers_MapEditorSceneGrid__Awake(GameManagers_MapEditorSceneGrid_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  
  color.fields.b = 0.5;
  color.fields.a = 0.5;
  color.fields.r = 0.5;
  color.fields.g = 0.5;
  GameManagers_MapEditorSceneGrid__CreatePlane(__this,0,color,in_RDX);
  color_00.fields.b = 0.5;
  color_00.fields.a = 0.5;
  color_00.fields.r = 0.5;
  color_00.fields.g = 0.5;
  GameManagers_MapEditorSceneGrid__CreatePlane(__this,1,color_00,method_00);
  color_01.fields.b = 0.5;
  color_01.fields.a = 0.5;
  color_01.fields.r = 0.5;
  color_01.fields.g = 0.5;
  GameManagers_MapEditorSceneGrid__CreatePlane(__this,2,color_01,method_01);
  return;
}


// GameManagers.MapEditorSceneGrid$$SetAxes
// il2cpp: void GameManagers_MapEditorSceneGrid__SetAxes (GameManagers_MapEditorSceneGrid_o* __this, System_Collections_Generic_HashSet_int__o* axes, const MethodInfo* method);
// 0x5953960

void GameManagers_MapEditorSceneGrid__SetAxes
               (GameManagers_MapEditorSceneGrid_o *__this,System_Collections_Generic_HashSet_int__o *axes,
               MethodInfo *method)

{
  System_Boolean_array *pSVar1;
  UnityEngine_GameObject_array *pUVar2;
  bool bVar3;
  MethodInfo *method_00;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_075458a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    Il2CppMethodInitialized_075458a8 = '\x01';
  }
  pSVar1 = (__this->fields)._enabledAxes;
  if (axes == (System_Collections_Generic_HashSet_int__o *)0x0) {
    if (pSVar1 != (System_Boolean_array *)0x0) {
      if ((int)pSVar1->max_length == 0) goto label_05953bcf;
      pSVar1->m_Items[0] = false;
      pUVar2 = (__this->fields)._planes;
      if (pUVar2 != (UnityEngine_GameObject_array *)0x0) {
        if ((int)pUVar2->max_length == 0) goto label_05953bcf;
        if (pUVar2->m_Items[0] != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar2->m_Items[0],false,(MethodInfo *)0x0);
          pSVar1 = (__this->fields)._enabledAxes;
          if (pSVar1 != (System_Boolean_array *)0x0) {
            if ((pSVar1->max_length & 0xfffffffe) == 0) goto label_05953bcf;
            pSVar1->m_Items[1] = false;
            pUVar2 = (__this->fields)._planes;
            if (pUVar2 != (UnityEngine_GameObject_array *)0x0) {
              if ((pUVar2->max_length & 0xfffffffe) == 0) goto label_05953bcf;
              if (pUVar2->m_Items[1] != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(pUVar2->m_Items[1],false,(MethodInfo *)0x0);
                pSVar1 = (__this->fields)._enabledAxes;
                if (pSVar1 != (System_Boolean_array *)0x0) {
                  if ((uint)pSVar1->max_length < 3) goto label_05953bcf;
                  pSVar1->m_Items[2] = false;
                  pUVar2 = (__this->fields)._planes;
                  if (pUVar2 != (UnityEngine_GameObject_array *)0x0) {
                    if ((uint)pUVar2->max_length < 3) goto label_05953bcf;
                    __this_00 = pUVar2->m_Items[2];
                    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                      bVar3 = false;
label_05953bab:
                      UnityEngine_GameObject__SetActive(__this_00,bVar3,(MethodInfo *)0x0);
                      GameManagers_MapEditorSceneGrid__RefreshIfNeeded(__this,true,method_00);
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
  else {
    bVar3 = System_Collections_Generic_HashSet_int___Contains
                      (axes,0,(MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains
                      );
    if (pSVar1 != (System_Boolean_array *)0x0) {
      if ((int)pSVar1->max_length == 0) {
label_05953bcf:
        ThrowIndexOutOfRangeException();
      }
      pSVar1->m_Items[0] = bVar3;
      pUVar2 = (__this->fields)._planes;
      if (pUVar2 != (UnityEngine_GameObject_array *)0x0) {
        if ((int)pUVar2->max_length == 0) goto label_05953bcf;
        pSVar1 = (__this->fields)._enabledAxes;
        if (pSVar1 != (System_Boolean_array *)0x0) {
          if ((int)pSVar1->max_length == 0) goto label_05953bcf;
          if (pUVar2->m_Items[0] != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar2->m_Items[0],pSVar1->m_Items[0],(MethodInfo *)0x0);
            pSVar1 = (__this->fields)._enabledAxes;
            bVar3 = System_Collections_Generic_HashSet_int___Contains
                              (axes,1,(MethodInfo_4FA7E00 *)
                                      MethodInfo_System_Collections_Generic_HashSet_int_Contains);
            if (pSVar1 != (System_Boolean_array *)0x0) {
              if ((pSVar1->max_length & 0xfffffffe) == 0) goto label_05953bcf;
              pSVar1->m_Items[1] = bVar3;
              pUVar2 = (__this->fields)._planes;
              if (pUVar2 != (UnityEngine_GameObject_array *)0x0) {
                if ((pUVar2->max_length & 0xfffffffe) == 0) goto label_05953bcf;
                pSVar1 = (__this->fields)._enabledAxes;
                if (pSVar1 != (System_Boolean_array *)0x0) {
                  if ((pSVar1->max_length & 0xfffffffe) == 0) goto label_05953bcf;
                  if (pUVar2->m_Items[1] != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(pUVar2->m_Items[1],pSVar1->m_Items[1],(MethodInfo *)0x0)
                    ;
                    pSVar1 = (__this->fields)._enabledAxes;
                    bVar3 = System_Collections_Generic_HashSet_int___Contains
                                      (axes,2,(MethodInfo_4FA7E00 *)
                                              MethodInfo_System_Collections_Generic_HashSet_int_Contains);
                    if (pSVar1 != (System_Boolean_array *)0x0) {
                      if ((uint)pSVar1->max_length < 3) goto label_05953bcf;
                      pSVar1->m_Items[2] = bVar3;
                      pUVar2 = (__this->fields)._planes;
                      if (pUVar2 != (UnityEngine_GameObject_array *)0x0) {
                        if ((uint)pUVar2->max_length < 3) goto label_05953bcf;
                        pSVar1 = (__this->fields)._enabledAxes;
                        if (pSVar1 != (System_Boolean_array *)0x0) {
                          if ((uint)pSVar1->max_length < 3) goto label_05953bcf;
                          __this_00 = pUVar2->m_Items[2];
                          if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                            bVar3 = pSVar1->m_Items[2];
                            goto label_05953bab;
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


// GameManagers.MapEditorSceneGrid$$Update
// il2cpp: void GameManagers_MapEditorSceneGrid__Update (GameManagers_MapEditorSceneGrid_o* __this, const MethodInfo* method);
// 0x5955e40

void GameManagers_MapEditorSceneGrid__Update(GameManagers_MapEditorSceneGrid_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  GameManagers_MapEditorSceneGrid__RefreshIfNeeded(__this,false,in_RDX);
  return;
}


// GameManagers.MapEditorSceneGrid$$RefreshIfNeeded
// il2cpp: void GameManagers_MapEditorSceneGrid__RefreshIfNeeded (GameManagers_MapEditorSceneGrid_o* __this, bool force, const MethodInfo* method);
// 0x5955930
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59559de: jmp 0x59559f9
// asm:   0x5955c3b: movaps xmmword ptr [rsp + 0x10], xmm1
// asm:   0x5955dda: nop word ptr [rax + rax]

void GameManagers_MapEditorSceneGrid__RefreshIfNeeded
               (GameManagers_MapEditorSceneGrid_o *__this,bool force,MethodInfo *method)

{
  System_Boolean_array *pSVar1;
  Il2CppObject *object;
  Cameras_BaseCamera_o *pCVar2;
  UnityEngine_Camera_o *x;
  Settings_MapEditorSettings_o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  CustomLogic_CustomLogicMathBuiltin_o *__this_00;
  System_Single_array *pSVar5;
  UnityEngine_Vector2_array *pUVar6;
  UnityEngine_Mesh_array *pUVar7;
  undefined1 auVar8 [16];
  UnityEngine_Vector2_o UVar9;
  bool bVar10;
  GameManagers_MapEditorSceneGrid___c_StaticFields *pGVar11;
  System_Func_bool__bool__o *__this_01;
  UnityEngine_Transform_o *__this_02;
  MethodInfo *pMVar12;
  MethodInfo *pMVar13;
  CustomLogic_CustomLogicMathBuiltin_o *__this_03;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar18;
  UnityEngine_Vector2_o center;
  float fVar20;
  undefined1 auVar19 [16];
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  UnityEngine_Vector3_o UVar25;
  float fStack_b8;
  float fStack_98;
  float fStack_44;
  
  if (Il2CppMethodInitialized_075458a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_bool_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameManagers_MapEditorSceneGrid_c_RefreshIfNeeded_b__10_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorSceneGrid_c);
    Il2CppMethodInitialized_075458a9 = '\x01';
  }
  pSVar1 = (__this->fields)._enabledAxes;
  if ((TypeInfo_GameManagers_MapEditorSceneGrid_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorSceneGrid_c);
    pGVar11 = TypeInfo_GameManagers_MapEditorSceneGrid_c->static_fields;
    __this_01 = pGVar11->__9__10_0;
  }
  else {
    pGVar11 = TypeInfo_GameManagers_MapEditorSceneGrid_c->static_fields;
    __this_01 = pGVar11->__9__10_0;
  }
  if (__this_01 == (System_Func_bool__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_GameManagers_MapEditorSceneGrid_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MapEditorSceneGrid_c);
      pGVar11 = TypeInfo_GameManagers_MapEditorSceneGrid_c->static_fields;
    }
    object = (Il2CppObject *)pGVar11->__9;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_bool_bool);
    System_Func_bool__bool____ctor
              (__this_01,object,(intptr_t)MethodInfo_GameManagers_MapEditorSceneGrid_c_RefreshIfNeeded_b__10_0
               ,(MethodInfo_4F11700 *)0x0);
    pGVar11 = TypeInfo_GameManagers_MapEditorSceneGrid_c->static_fields;
    pGVar11->__9__10_0 = __this_01;
    Il2CppCodeGenWriteBarrier(&pGVar11->__9__10_0);
  }
  bVar10 = System_Linq_Enumerable__Any_bool_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                      (System_Func_TSource__bool__o *)__this_01,
                      (MethodInfo_34DF9B0 *)MethodInfo_System_Linq_Enumerable_Any_bool);
  if (bVar10) {
    pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar10) {
      pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
        x = (pCVar2->fields).Camera;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar10 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar10) {
          return;
        }
        pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
        if ((((pSVar3 != (Settings_MapEditorSettings_o *)0x0) &&
             (pSVar4 = (pSVar3->fields).SnapMove, pSVar4 != (Settings_FloatSetting_o *)0x0)) &&
            (pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera,
            pCVar2 != (Cameras_BaseCamera_o *)0x0)) &&
           (__this_00 = (CustomLogic_CustomLogicMathBuiltin_o *)(pCVar2->fields).Camera,
           __this_00 != (CustomLogic_CustomLogicMathBuiltin_o *)0x0)) {
          fVar15 = (pSVar4->fields)._value;
          fVar14 = 0.01;
          if (0.01 <= fVar15) {
            fVar14 = fVar15;
          }
          __this_02 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if (__this_02 != (UnityEngine_Transform_o *)0x0) {
            pMVar13 = (MethodInfo *)0x0;
            UVar25 = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
            auVar8._8_4_ = extraout_XMM0_Dc;
            auVar8._0_8_ = UVar25.fields._0_8_;
            auVar8._12_4_ = extraout_XMM0_Dd;
            auVar19._0_8_ = UVar25.fields._4_8_;
            auVar19._8_4_ = extraout_XMM0_Dc;
            auVar19._12_4_ = extraout_XMM0_Dd;
            while (pSVar1 = (__this->fields)._enabledAxes, pSVar1 != (System_Boolean_array *)0x0) {
              if ((MethodInfo *)(ulong)(uint)pSVar1->max_length <= pMVar13) goto label_05955e27;
              if (pSVar1->m_Items[(long)pMVar13] != false) {
                fVar15 = UVar25.fields.y;
                if (pMVar13 != (MethodInfo *)0x1) {
                  fVar15 = UVar25.fields.z;
                }
                fStack_98 = UVar25.fields.x;
                if (pMVar13 != (MethodInfo *)0x0) {
                  fStack_98 = fVar15;
                }
                fStack_b8 = ABS(fStack_98);
                pMVar12 = (MethodInfo *)0x0;
                __this_03 = __this_00;
                bVar10 = UnityEngine_Camera__get_orthographic
                                   ((UnityEngine_Camera_o *)__this_00,(MethodInfo *)0x0);
                if (bVar10) {
                  pMVar12 = (MethodInfo *)0x0;
                  __this_03 = __this_00;
                  fVar15 = UnityEngine_Camera__get_orthographicSize
                                     ((UnityEngine_Camera_o *)__this_00,(MethodInfo *)0x0);
                  if (fStack_b8 <= fVar15) {
                    fStack_b8 = fVar15;
                  }
                }
                fVar15 = fVar14;
                if (fVar14 <= fStack_b8 / 20.0) {
                  fVar15 = fStack_b8 / 20.0;
                }
                fVar15 = log10f(fVar15 / fVar14);
                fVar16 = ceilf(fVar15);
                fVar15 = 0.0;
                if (0.0 <= fVar16) {
                  fVar15 = fVar16;
                }
                fVar15 = powf(__this_03,10.0,fVar15,pMVar12);
                fVar15 = fVar15 * fVar14;
                auVar22._0_4_ = (int)((uint)(pMVar13 == (MethodInfo *)0x0) << 0x1f) >> 0x1f;
                auVar22._4_4_ = (int)((uint)(pMVar13 < (MethodInfo *)0x2) << 0x1f) >> 0x1f;
                auVar22._8_8_ = 0;
                auVar23._4_4_ = fVar15;
                auVar23._0_4_ = fVar15;
                auVar23._8_4_ = fVar15;
                auVar23._12_4_ = fVar15;
                auVar23 = divps(~auVar22 & auVar8 | auVar19 & auVar22,auVar23);
                fVar16 = floorf(auVar23._0_4_);
                fStack_44 = auVar23._4_4_;
                fVar17 = floorf(fStack_44);
                fVar16 = fVar16 * fVar15;
                fVar17 = fVar17 * fVar15;
                if (!force) {
                  pSVar5 = (__this->fields)._lastSpacing;
                  if (pSVar5 == (System_Single_array *)0x0) break;
                  if ((MethodInfo *)(ulong)(uint)pSVar5->max_length <= pMVar13) goto label_05955e27;
                  fVar18 = pSVar5->m_Items[(long)pMVar13];
                  if (Il2CppMethodInitialized_0753e7b4 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
                    Il2CppMethodInitialized_0753e7b4 = '\x01';
                  }
                  fVar24 = ABS(fVar18);
                  fVar20 = ABS(fVar15);
                  if (ABS(fVar15) <= fVar24) {
                    fVar20 = fVar24;
                  }
                  fVar21 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
                  fVar24 = fVar20 * 1e-06;
                  if (fVar20 * 1e-06 <= fVar21) {
                    fVar24 = fVar21;
                  }
                  if (ABS(fVar18 - fVar15) < fVar24) {
                    pUVar6 = (__this->fields)._lastCenters;
                    if (pUVar6 == (UnityEngine_Vector2_array *)0x0) break;
                    if ((MethodInfo *)(ulong)(uint)pUVar6->max_length <= pMVar13) goto label_05955e27;
                    fVar18 = fVar16 - pUVar6->m_Items[(long)pMVar13].fields.x;
                    fVar20 = fVar17 - pUVar6->m_Items[(long)pMVar13].fields.y;
                    if (fVar20 * fVar20 + fVar18 * fVar18 < 9.9999994e-11) goto label_05955bc4;
                  }
                }
                pSVar5 = (__this->fields)._lastSpacing;
                if (pSVar5 == (System_Single_array *)0x0) break;
                if ((MethodInfo *)(ulong)(uint)pSVar5->max_length <= pMVar13) {
label_05955e27:
                  ThrowIndexOutOfRangeException();
                }
                pSVar5->m_Items[(long)pMVar13] = fVar15;
                pUVar6 = (__this->fields)._lastCenters;
                if (pUVar6 == (UnityEngine_Vector2_array *)0x0) break;
                if ((MethodInfo *)(ulong)(uint)pUVar6->max_length <= pMVar13) goto label_05955e27;
                UVar9.fields.y = fVar17;
                UVar9.fields.x = fVar16;
                pUVar6->m_Items[(long)pMVar13].fields = UVar9.fields;
                pUVar7 = (__this->fields)._meshes;
                if (pUVar7 == (UnityEngine_Mesh_array *)0x0) break;
                pMVar12 = (MethodInfo *)(ulong)(uint)pUVar7->max_length;
                if (pMVar12 <= pMVar13) goto label_05955e27;
                center.fields.y = fVar17;
                center.fields.x = fVar16;
                GameManagers_MapEditorSceneGrid__BuildPlane
                          (pUVar7->m_Items[(long)pMVar13],(int32_t)pMVar13,0x32,fVar15,center,pMVar12);
              }
label_05955bc4:
              pMVar13 = (MethodInfo *)((long)&pMVar13->methodPointer + 1);
              if (pMVar13 == (MethodInfo *)0x3) {
                return;
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


// GameManagers.MapEditorSceneGrid$$GetAdaptiveSpacing
// il2cpp: float GameManagers_MapEditorSceneGrid__GetAdaptiveSpacing (float snap, float cameraDistance, const MethodInfo* method);
// 0x5955e50

float GameManagers_MapEditorSceneGrid__GetAdaptiveSpacing(float snap,float cameraDistance,MethodInfo *method)

{
  MethodInfo *in_RSI;
  float fVar1;
  float fVar2;
  
  fVar1 = snap;
  if (snap <= cameraDistance / 20.0) {
    fVar1 = cameraDistance / 20.0;
  }
  fVar1 = log10f(fVar1 / snap);
  fVar2 = ceilf(fVar1);
  fVar1 = 0.0;
  if (0.0 <= fVar2) {
    fVar1 = fVar2;
  }
  fVar1 = powf((CustomLogic_CustomLogicMathBuiltin_o *)method,10.0,fVar1,in_RSI);
  return fVar1 * snap;
}


// GameManagers.MapEditorSceneGrid$$CreatePlane
// il2cpp: void GameManagers_MapEditorSceneGrid__CreatePlane (GameManagers_MapEditorSceneGrid_o* __this, int32_t axis, UnityEngine_Color_o color, const MethodInfo* method);
// 0x5955500

void GameManagers_MapEditorSceneGrid__CreatePlane
               (GameManagers_MapEditorSceneGrid_o *__this,int32_t axis,UnityEngine_Color_o color,
               MethodInfo *method)

{
  UnityEngine_Mesh_array *pUVar1;
  UnityEngine_Material_array *pUVar2;
  UnityEngine_GameObject_array *pUVar3;
  bool bVar4;
  System_String_o **ppSVar5;
  UnityEngine_Object_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_MeshFilter_o *__this_02;
  UnityEngine_MeshRenderer_o *__this_03;
  UnityEngine_Object_o *pUVar6;
  System_String_o *pSVar7;
  UnityEngine_Material_o *__this_04;
  Il2CppObject *pIVar8;
  
  if (Il2CppMethodInitialized_075458aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"_Cull");
    il2cpp_codegen_initialize_runtime_metadata(&"GridX");
    il2cpp_codegen_initialize_runtime_metadata(&"_SrcBlend");
    il2cpp_codegen_initialize_runtime_metadata(&"_ZTest");
    il2cpp_codegen_initialize_runtime_metadata(&"Hidden/Internal-Colored");
    il2cpp_codegen_initialize_runtime_metadata(&"Mesh");
    il2cpp_codegen_initialize_runtime_metadata(&"_DstBlend");
    il2cpp_codegen_initialize_runtime_metadata(&"Sprites/Default");
    il2cpp_codegen_initialize_runtime_metadata(&"_ZWrite");
    il2cpp_codegen_initialize_runtime_metadata(&"GridZ");
    il2cpp_codegen_initialize_runtime_metadata(&"GridY");
    Il2CppMethodInitialized_075458aa = '\x01';
  }
  if (axis == 1) {
    ppSVar5 = &"GridY";
  }
  else {
    ppSVar5 = &"GridZ";
    if (axis == 0) {
      ppSVar5 = &"GridX";
    }
  }
  pSVar7 = *ppSVar5;
  __this_00 = (UnityEngine_Object_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)__this_00,pSVar7,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    __this_01 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0)
    ;
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent_692d510(__this_01,parent,false,(MethodInfo *)0x0);
      __this_02 = UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)__this_00,
                             (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter);
      __this_03 = UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)__this_00,
                             (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer
                            );
      if (__this_03 != (UnityEngine_MeshRenderer_o *)0x0) {
        UnityEngine_Renderer__set_shadowCastingMode((UnityEngine_Renderer_o *)__this_03,0,(MethodInfo *)0x0);
        UnityEngine_Renderer__set_receiveShadows((UnityEngine_Renderer_o *)__this_03,false,(MethodInfo *)0x0);
        pUVar6 = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
        UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)pUVar6,(MethodInfo *)0x0);
        pSVar7 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        pSVar7 = System_String__Concat_52f0320(pSVar7,"Mesh",(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_Object_o *)0x0) {
          UnityEngine_Object__set_name(pUVar6,pSVar7,(MethodInfo *)0x0);
          UnityEngine_Mesh__MarkDynamic((UnityEngine_Mesh_o *)pUVar6,(MethodInfo *)0x0);
          if (__this_02 != (UnityEngine_MeshFilter_o *)0x0) {
            UnityEngine_MeshFilter__set_sharedMesh(__this_02,(UnityEngine_Mesh_o *)pUVar6,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._meshes;
            if (pUVar1 != (UnityEngine_Mesh_array *)0x0) {
              if ((uint)pUVar1->max_length <= (uint)axis) goto label_05955912;
              pUVar1->m_Items[axis] = (UnityEngine_Mesh_o *)pUVar6;
              Il2CppCodeGenWriteBarrier(pUVar1->m_Items + axis);
              pUVar6 = (UnityEngine_Object_o *)
                       UnityEngine_Shader__Find("Hidden/Internal-Colored",(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar4 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar4) {
                pUVar6 = (UnityEngine_Object_o *)
                         UnityEngine_Shader__Find("Sprites/Default",(MethodInfo *)0x0);
              }
              __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
              UnityEngine_Material___ctor(__this_04,(UnityEngine_Shader_o *)pUVar6,(MethodInfo *)0x0);
              if (__this_04 != (UnityEngine_Material_o *)0x0) {
                UnityEngine_Material__set_color(__this_04,color,(MethodInfo *)0x0);
                UnityEngine_Material__set_renderQueue(__this_04,3000,(MethodInfo *)0x0);
                UnityEngine_Material__SetInt(__this_04,"_SrcBlend",5,(MethodInfo *)0x0);
                UnityEngine_Material__SetInt(__this_04,"_DstBlend",10,(MethodInfo *)0x0);
                UnityEngine_Material__SetInt(__this_04,"_Cull",0,(MethodInfo *)0x0);
                UnityEngine_Material__SetInt(__this_04,"_ZWrite",0,(MethodInfo *)0x0);
                UnityEngine_Material__SetInt(__this_04,"_ZTest",4,(MethodInfo *)0x0);
                UnityEngine_Renderer__set_sharedMaterial
                          ((UnityEngine_Renderer_o *)__this_03,__this_04,(MethodInfo *)0x0);
                pUVar2 = (__this->fields)._materials;
                if (pUVar2 != (UnityEngine_Material_array *)0x0) {
                  pIVar8 = il2cpp_vm_Object_IsInst
                                     ((Il2CppObject *)__this_04,(((pUVar2->obj).klass)->_1).element_class);
                  if (pIVar8 == (Il2CppObject *)0x0) {
                    pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
                  }
                  if ((uint)axis < (uint)pUVar2->max_length) {
                    pUVar2->m_Items[axis] = __this_04;
                    Il2CppCodeGenWriteBarrier(pUVar2->m_Items + axis);
                    pUVar3 = (__this->fields)._planes;
                    if (pUVar3 == (UnityEngine_GameObject_array *)0x0) goto label_0595590d;
                    if ((uint)axis < (uint)pUVar3->max_length) {
                      pUVar3->m_Items[axis] = (UnityEngine_GameObject_o *)__this_00;
                      Il2CppCodeGenWriteBarrier(pUVar3->m_Items + axis);
                      UnityEngine_GameObject__SetActive
                                ((UnityEngine_GameObject_o *)__this_00,false,(MethodInfo *)0x0);
                      return;
                    }
                  }
label_05955912:
                  ThrowIndexOutOfRangeException();
                }
              }
            }
          }
        }
      }
    }
  }
label_0595590d:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorSceneGrid$$BuildPlane
// il2cpp: void GameManagers_MapEditorSceneGrid__BuildPlane (UnityEngine_Mesh_o* mesh, int32_t axis, int32_t halfLines, float spacing, UnityEngine_Vector2_o center, const MethodInfo* method);
// 0x5955e90
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5956206: jmp 0x5955f3e
// asm:   0x595622f: nop 
// asm:   0x5956258: nop dword ptr [rax + rax]
// asm:   0x59564e6: jmp 0x5955f3e
// asm:   0x59564f4: lea r12, [rip + 0x194107d]  ; MethodInfo_System_Collections_Generic_List_Vector3_Add
// asm:   0x59564fb: jmp 0x5956528
// asm:   0x59566df: jmp 0x5955f3e

void GameManagers_MapEditorSceneGrid__BuildPlane
               (UnityEngine_Mesh_o *mesh,int32_t axis,int32_t halfLines,float spacing,
               UnityEngine_Vector2_o center,MethodInfo *method)

{
  int32_t *piVar1;
  ulong uVar2;
  UnityEngine_Vector3_array *pUVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  MethodInfo *pMVar8;
  uint uVar9;
  System_Collections_Generic_List_Vector3__o *__this;
  System_Int32_array *indices;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  float fVar13;
  int iVar14;
  float fVar17;
  int iVar15;
  int iVar16;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_o item;
  UnityEngine_Vector3_o item_00;
  UnityEngine_Vector3_o item_01;
  UnityEngine_Vector3_o item_02;
  UnityEngine_Vector3_o item_03;
  UnityEngine_Vector3_o item_04;
  UnityEngine_Vector3_o item_05;
  UnityEngine_Vector3_o item_06;
  UnityEngine_Vector3_o item_07;
  long local_98;
  ulong local_88;
  long local_78;
  float local_48;
  float fStack_44;
  
  if (Il2CppMethodInitialized_075458ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Vector3_ctor_7197570);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    Il2CppMethodInitialized_075458ab = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor_39ff040
            (__this,halfLines * 8 + 4,
             (MethodInfo_39FF040 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor_7197570);
  iVar11 = -halfLines;
  if (halfLines < iVar11) {
    if (__this == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_059566e4;
  }
  else {
    fVar19 = (float)halfLines * spacing;
    local_48 = center.fields.x;
    fStack_44 = center.fields.y;
    fVar18 = fVar19 + fStack_44;
    item.fields.z = fStack_44 - fVar19;
    fVar17 = local_48 - fVar19;
    fVar19 = fVar19 + local_48;
    if (axis == 1) {
      if (__this == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_059566e4;
      do {
        while( true ) {
          pMVar8 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (__this->fields)._items;
          if (pUVar3 == (UnityEngine_Vector3_array *)0x0) goto label_059566e4;
          fVar13 = local_48 + (float)iVar11 * spacing;
          uVar9 = (__this->fields)._size;
          if (uVar9 < (uint)pUVar3->max_length) {
            (__this->fields)._size = uVar9 + 1;
            pUVar3->m_Items[(int)uVar9].fields.x = fVar13;
            pUVar3->m_Items[(int)uVar9].fields.y = (float)(int)(CONCAT44(0.0,fVar13) >> 0x20);
            pUVar3->m_Items[(int)uVar9].fields.z = item.fields.z;
          }
          else {
            item_00.fields.z = item.fields.z;
            item_00.fields.x = fVar13;
            item_00.fields.y = 0.0;
            System_Collections_Generic_List_Vector3___AddWithResize
                      (__this,item_00,(MethodInfo_39FF950 *)pMVar8->klass->rgctx_data[0xe].method);
          }
          pMVar8 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (__this->fields)._items;
          if (pUVar3 == (UnityEngine_Vector3_array *)0x0) goto label_059566e4;
          uVar9 = (__this->fields)._size;
          if (uVar9 < (uint)pUVar3->max_length) {
            (__this->fields)._size = uVar9 + 1;
            pUVar3->m_Items[(int)uVar9].fields.x = fVar13;
            pUVar3->m_Items[(int)uVar9].fields.y = (float)(int)(CONCAT44(0.0,fVar13) >> 0x20);
            pUVar3->m_Items[(int)uVar9].fields.z = fVar18;
          }
          else {
            item_01.fields.z = fVar18;
            item_01.fields.x = fVar13;
            item_01.fields.y = 0.0;
            System_Collections_Generic_List_Vector3___AddWithResize
                      (__this,item_01,(MethodInfo_39FF950 *)pMVar8->klass->rgctx_data[0xe].method);
          }
          pMVar8 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (__this->fields)._items;
          if (pUVar3 == (UnityEngine_Vector3_array *)0x0) goto label_059566e4;
          item_02.fields.z = (float)iVar11 * spacing + fStack_44;
          uVar9 = (__this->fields)._size;
          if (uVar9 < (uint)pUVar3->max_length) {
            (__this->fields)._size = uVar9 + 1;
            pUVar3->m_Items[(int)uVar9].fields.x = fVar17;
            pUVar3->m_Items[(int)uVar9].fields.y = (float)(int)(CONCAT44(0.0,fVar17) >> 0x20);
            pUVar3->m_Items[(int)uVar9].fields.z = item_02.fields.z;
          }
          else {
            item_02.fields.x = fVar17;
            item_02.fields.y = 0.0;
            System_Collections_Generic_List_Vector3___AddWithResize
                      (__this,item_02,(MethodInfo_39FF950 *)pMVar8->klass->rgctx_data[0xe].method);
          }
          pMVar8 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (__this->fields)._items;
          if (pUVar3 == (UnityEngine_Vector3_array *)0x0) goto label_059566e4;
          uVar9 = (__this->fields)._size;
          if (uVar9 < (uint)pUVar3->max_length) break;
          item_03.fields.z = item_02.fields.z;
          item_03.fields.x = fVar19;
          item_03.fields.y = 0.0;
          System_Collections_Generic_List_Vector3___AddWithResize
                    (__this,item_03,(MethodInfo_39FF950 *)pMVar8->klass->rgctx_data[0xe].method);
          iVar11 = iVar11 + 1;
          if (halfLines < iVar11) goto label_05955f3e;
        }
        (__this->fields)._size = uVar9 + 1;
        pUVar3->m_Items[(int)uVar9].fields.x = fVar19;
        pUVar3->m_Items[(int)uVar9].fields.y = 0.0;
        pUVar3->m_Items[(int)uVar9].fields.z = item_02.fields.z;
        iVar11 = iVar11 + 1;
      } while (iVar11 <= halfLines);
    }
    else if (axis == 0) {
      if (__this == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_059566e4;
      local_98 = (ulong)(uint)fVar17 << 0x20;
      local_78 = (ulong)(uint)fVar19 << 0x20;
      do {
        while( true ) {
          pMVar8 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (__this->fields)._items;
          if (pUVar3 == (UnityEngine_Vector3_array *)0x0) goto label_059566e4;
          fVar13 = local_48 + (float)iVar11 * spacing;
          uVar9 = (__this->fields)._size;
          if (uVar9 < (uint)pUVar3->max_length) {
            (__this->fields)._size = uVar9 + 1;
            pUVar3->m_Items[(int)uVar9].fields.x = (float)(int)((ulong)(uint)fVar13 << 0x20);
            pUVar3->m_Items[(int)uVar9].fields.y = (float)(int)(((ulong)(uint)fVar13 << 0x20) >> 0x20);
            pUVar3->m_Items[(int)uVar9].fields.z = item.fields.z;
          }
          else {
            auVar4._4_8_ = 0;
            auVar4._0_4_ = fVar13;
            item.fields._0_8_ = SUB128(auVar4 << 0x20,0);
            System_Collections_Generic_List_Vector3___AddWithResize
                      (__this,item,(MethodInfo_39FF950 *)pMVar8->klass->rgctx_data[0xe].method);
          }
          pMVar8 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (__this->fields)._items;
          if (pUVar3 == (UnityEngine_Vector3_array *)0x0) goto label_059566e4;
          uVar9 = (__this->fields)._size;
          if (uVar9 < (uint)pUVar3->max_length) {
            (__this->fields)._size = uVar9 + 1;
            pUVar3->m_Items[(int)uVar9].fields.x = (float)(int)((ulong)(uint)fVar13 << 0x20);
            pUVar3->m_Items[(int)uVar9].fields.y = (float)(int)(((ulong)(uint)fVar13 << 0x20) >> 0x20);
            pUVar3->m_Items[(int)uVar9].fields.z = fVar18;
          }
          else {
            auVar7._4_4_ = fVar18;
            auVar7._0_4_ = fVar13;
            auVar7._8_4_ = 0;
            System_Collections_Generic_List_Vector3___AddWithResize
                      (__this,(UnityEngine_Vector3_o)(auVar7 << 0x20),
                       (MethodInfo_39FF950 *)pMVar8->klass->rgctx_data[0xe].method);
          }
          pMVar8 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (__this->fields)._items;
          if (pUVar3 == (UnityEngine_Vector3_array *)0x0) goto label_059566e4;
          fVar13 = (float)iVar11 * spacing + fStack_44;
          uVar9 = (__this->fields)._size;
          if (uVar9 < (uint)pUVar3->max_length) {
            (__this->fields)._size = uVar9 + 1;
            pUVar3->m_Items[(int)uVar9].fields.x = (float)(undefined4)local_98;
            pUVar3->m_Items[(int)uVar9].fields.y = (float)local_98._4_4_;
            pUVar3->m_Items[(int)uVar9].fields.z = fVar13;
          }
          else {
            auVar5._4_4_ = fVar13;
            auVar5._0_4_ = fVar17;
            auVar5._8_4_ = 0;
            System_Collections_Generic_List_Vector3___AddWithResize
                      (__this,(UnityEngine_Vector3_o)(auVar5 << 0x20),
                       (MethodInfo_39FF950 *)pMVar8->klass->rgctx_data[0xe].method);
          }
          pMVar8 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (__this->fields)._items;
          if (pUVar3 == (UnityEngine_Vector3_array *)0x0) goto label_059566e4;
          uVar9 = (__this->fields)._size;
          if (uVar9 < (uint)pUVar3->max_length) break;
          auVar6._4_4_ = fVar13;
          auVar6._0_4_ = fVar19;
          auVar6._8_4_ = 0;
          System_Collections_Generic_List_Vector3___AddWithResize
                    (__this,(UnityEngine_Vector3_o)(auVar6 << 0x20),
                     (MethodInfo_39FF950 *)pMVar8->klass->rgctx_data[0xe].method);
          iVar11 = iVar11 + 1;
          if (halfLines < iVar11) goto label_05955f3e;
        }
        (__this->fields)._size = uVar9 + 1;
        pUVar3->m_Items[(int)uVar9].fields.x = (float)(undefined4)local_78;
        pUVar3->m_Items[(int)uVar9].fields.y = (float)local_78._4_4_;
        pUVar3->m_Items[(int)uVar9].fields.z = fVar13;
        iVar11 = iVar11 + 1;
      } while (iVar11 <= halfLines);
    }
    else {
      if (__this == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_059566e4;
      do {
        while( true ) {
          pMVar8 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (__this->fields)._items;
          if (pUVar3 == (UnityEngine_Vector3_array *)0x0) goto label_059566e4;
          fVar13 = local_48 + (float)iVar11 * spacing;
          item_05.fields.y = item.fields.z;
          item_05.fields.x = fVar13;
          uVar9 = (__this->fields)._size;
          if (uVar9 < (uint)pUVar3->max_length) {
            (__this->fields)._size = uVar9 + 1;
            pUVar3->m_Items[(int)uVar9].fields.x = fVar13;
            pUVar3->m_Items[(int)uVar9].fields.y = item.fields.z;
            pUVar3->m_Items[(int)uVar9].fields.z = 0.0;
          }
          else {
            item_05.fields.z = 0.0;
            System_Collections_Generic_List_Vector3___AddWithResize
                      (__this,item_05,(MethodInfo_39FF950 *)pMVar8->klass->rgctx_data[0xe].method);
          }
          pMVar8 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (__this->fields)._items;
          if (pUVar3 == (UnityEngine_Vector3_array *)0x0) goto label_059566e4;
          item_06.fields.y = fVar18;
          item_06.fields.x = fVar13;
          uVar9 = (__this->fields)._size;
          if (uVar9 < (uint)pUVar3->max_length) {
            (__this->fields)._size = uVar9 + 1;
            pUVar3->m_Items[(int)uVar9].fields.x = fVar13;
            pUVar3->m_Items[(int)uVar9].fields.y = fVar18;
            pUVar3->m_Items[(int)uVar9].fields.z = 0.0;
          }
          else {
            item_06.fields.z = 0.0;
            System_Collections_Generic_List_Vector3___AddWithResize
                      (__this,item_06,(MethodInfo_39FF950 *)pMVar8->klass->rgctx_data[0xe].method);
          }
          pMVar8 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (__this->fields)._items;
          if (pUVar3 == (UnityEngine_Vector3_array *)0x0) goto label_059566e4;
          fVar13 = (float)iVar11 * spacing + fStack_44;
          item_07.fields.y = fVar13;
          item_07.fields.x = fVar17;
          uVar9 = (__this->fields)._size;
          if (uVar9 < (uint)pUVar3->max_length) {
            (__this->fields)._size = uVar9 + 1;
            pUVar3->m_Items[(int)uVar9].fields.x = fVar17;
            pUVar3->m_Items[(int)uVar9].fields.y = fVar13;
            pUVar3->m_Items[(int)uVar9].fields.z = 0.0;
          }
          else {
            item_07.fields.z = 0.0;
            System_Collections_Generic_List_Vector3___AddWithResize
                      (__this,item_07,(MethodInfo_39FF950 *)pMVar8->klass->rgctx_data[0xe].method);
          }
          pMVar8 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (__this->fields)._items;
          if (pUVar3 == (UnityEngine_Vector3_array *)0x0) goto label_059566e4;
          uVar9 = (__this->fields)._size;
          if ((uint)pUVar3->max_length <= uVar9) break;
          (__this->fields)._size = uVar9 + 1;
          pUVar3->m_Items[(int)uVar9].fields.x = fVar19;
          pUVar3->m_Items[(int)uVar9].fields.y = fVar13;
          pUVar3->m_Items[(int)uVar9].fields.z = 0.0;
          iVar11 = iVar11 + 1;
          if (halfLines < iVar11) goto label_05955f3e;
        }
        item_04.fields.z = 0.0;
        item_04.fields.x = fVar19;
        item_04.fields.y = fVar13;
        System_Collections_Generic_List_Vector3___AddWithResize
                  (__this,item_04,(MethodInfo_39FF950 *)pMVar8->klass->rgctx_data[0xe].method);
        iVar11 = iVar11 + 1;
      } while (iVar11 <= halfLines);
    }
  }
label_05955f3e:
  indices = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,(__this->fields)._size);
  if (indices == (System_Int32_array *)0x0) goto label_059566e4;
  uVar2 = indices->max_length;
  uVar9 = (uint)uVar2;
  if (0 < (int)uVar9) {
    if (uVar9 < 8) {
      uVar10 = 0;
    }
    else {
      uVar10 = (ulong)(uVar9 & 0xfffffff8);
      iVar11 = 0;
      iVar14 = 1;
      iVar15 = 2;
      iVar16 = 3;
      uVar12 = 0;
      do {
        piVar1 = indices->m_Items + uVar12;
        *piVar1 = iVar11;
        piVar1[1] = iVar14;
        piVar1[2] = iVar15;
        piVar1[3] = iVar16;
        piVar1 = indices->m_Items + uVar12 + 4;
        *piVar1 = iVar11 + 4;
        piVar1[1] = iVar14 + 4;
        piVar1[2] = iVar15 + 4;
        piVar1[3] = iVar16 + 4;
        uVar12 = uVar12 + 8;
        iVar11 = iVar11 + 8;
        iVar14 = iVar14 + 8;
        iVar15 = iVar15 + 8;
        iVar16 = iVar16 + 8;
      } while (uVar10 != uVar12);
      if ((uVar2 & 7) == 0) goto label_0595626d;
    }
    do {
      indices->m_Items[uVar10] = (int32_t)uVar10;
      uVar10 = uVar10 + 1;
    } while ((uVar2 & 0xffffffff) != uVar10);
  }
label_0595626d:
  if (mesh != (UnityEngine_Mesh_o *)0x0) {
    UnityEngine_Mesh__Clear(mesh,(MethodInfo *)0x0);
    UnityEngine_Mesh__SetVertices(mesh,__this,(MethodInfo *)0x0);
    UnityEngine_Mesh__SetIndices(mesh,indices,3,0,(MethodInfo *)0x0);
    UnityEngine_Mesh__RecalculateBounds(mesh,(MethodInfo *)0x0);
    return;
  }
label_059566e4:
  ThrowNullReferenceException();
}


// GameManagers.MapEditorSceneGrid$$OnDestroy
// il2cpp: void GameManagers_MapEditorSceneGrid__OnDestroy (GameManagers_MapEditorSceneGrid_o* __this, const MethodInfo* method);
// 0x59566f0

void GameManagers_MapEditorSceneGrid__OnDestroy(GameManagers_MapEditorSceneGrid_o *__this,MethodInfo *method)

{
  UnityEngine_Mesh_array *pUVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Material_array *pUVar3;
  UnityEngine_Material_o *pUVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_075458ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075458ac = '\x01';
  }
  pUVar1 = (__this->fields)._meshes;
  if (pUVar1 == (UnityEngine_Mesh_array *)0x0) {
label_059569ce:
    ThrowNullReferenceException();
  }
  if ((int)pUVar1->max_length != 0) {
    pUVar2 = (UnityEngine_Object_o *)pUVar1->m_Items[0];
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar1 = (__this->fields)._meshes;
      if (pUVar1 == (UnityEngine_Mesh_array *)0x0) goto label_059569ce;
      if ((int)pUVar1->max_length == 0) goto label_059569d3;
      pUVar2 = (UnityEngine_Object_o *)pUVar1->m_Items[0];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
    }
    pUVar3 = (__this->fields)._materials;
    if (pUVar3 == (UnityEngine_Material_array *)0x0) goto label_059569ce;
    if ((int)pUVar3->max_length != 0) {
      pUVar4 = pUVar3->m_Items[0];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        pUVar3 = (__this->fields)._materials;
        if (pUVar3 == (UnityEngine_Material_array *)0x0) goto label_059569ce;
        if ((int)pUVar3->max_length == 0) goto label_059569d3;
        pUVar4 = pUVar3->m_Items[0];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
      }
      pUVar1 = (__this->fields)._meshes;
      if (pUVar1 == (UnityEngine_Mesh_array *)0x0) goto label_059569ce;
      if ((pUVar1->max_length & 0xfffffffe) != 0) {
        pUVar2 = (UnityEngine_Object_o *)pUVar1->m_Items[1];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          pUVar1 = (__this->fields)._meshes;
          if (pUVar1 == (UnityEngine_Mesh_array *)0x0) goto label_059569ce;
          if ((pUVar1->max_length & 0xfffffffe) == 0) goto label_059569d3;
          pUVar2 = (UnityEngine_Object_o *)pUVar1->m_Items[1];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
        }
        pUVar3 = (__this->fields)._materials;
        if (pUVar3 == (UnityEngine_Material_array *)0x0) goto label_059569ce;
        if ((pUVar3->max_length & 0xfffffffe) != 0) {
          pUVar4 = pUVar3->m_Items[1];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar5) {
            pUVar3 = (__this->fields)._materials;
            if (pUVar3 == (UnityEngine_Material_array *)0x0) goto label_059569ce;
            if ((pUVar3->max_length & 0xfffffffe) == 0) goto label_059569d3;
            pUVar4 = pUVar3->m_Items[1];
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
          }
          pUVar1 = (__this->fields)._meshes;
          if (pUVar1 == (UnityEngine_Mesh_array *)0x0) goto label_059569ce;
          if (2 < (uint)pUVar1->max_length) {
            pUVar2 = (UnityEngine_Object_o *)pUVar1->m_Items[2];
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar5) {
              pUVar1 = (__this->fields)._meshes;
              if (pUVar1 == (UnityEngine_Mesh_array *)0x0) goto label_059569ce;
              if ((uint)pUVar1->max_length < 3) goto label_059569d3;
              pUVar2 = (UnityEngine_Object_o *)pUVar1->m_Items[2];
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
            }
            pUVar3 = (__this->fields)._materials;
            if (pUVar3 == (UnityEngine_Material_array *)0x0) goto label_059569ce;
            if (2 < (uint)pUVar3->max_length) {
              pUVar4 = pUVar3->m_Items[2];
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar5 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if (!bVar5) {
                return;
              }
              pUVar3 = (__this->fields)._materials;
              if (pUVar3 == (UnityEngine_Material_array *)0x0) goto label_059569ce;
              if (2 < (uint)pUVar3->max_length) {
                pUVar4 = pUVar3->m_Items[2];
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_059569d3:
  ThrowIndexOutOfRangeException();
}


// GameManagers.MapEditorSceneGrid$$.ctor
// il2cpp: void GameManagers_MapEditorSceneGrid___ctor (GameManagers_MapEditorSceneGrid_o* __this, const MethodInfo* method);
// 0x59569e0

void GameManagers_MapEditorSceneGrid___ctor(GameManagers_MapEditorSceneGrid_o *__this,MethodInfo *method)

{
  UnityEngine_Mesh_array *pUVar1;
  UnityEngine_GameObject_array *pUVar2;
  UnityEngine_Material_array *pUVar3;
  System_Boolean_array *pSVar4;
  System_Single_array *array;
  UnityEngine_Vector2_array *pUVar5;
  
  if (Il2CppMethodInitialized_075458ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_bool_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_F48AF7DD3F3ADB7DCC618687A0A2A61B8DF98065CA0C180875E8AE65A88E28E4
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2_array);
    Il2CppMethodInitialized_075458ad = '\x01';
  }
  pUVar1 = (UnityEngine_Mesh_array *)SZArrayNew(TypeInfo_UnityEngine_Mesh_array,3);
  (__this->fields)._meshes = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._meshes);
  pUVar2 = (UnityEngine_GameObject_array *)SZArrayNew(TypeInfo_UnityEngine_GameObject_array,3);
  (__this->fields)._planes = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._planes);
  pUVar3 = (UnityEngine_Material_array *)SZArrayNew(TypeInfo_UnityEngine_Material_array,3);
  (__this->fields)._materials = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._materials);
  pSVar4 = (System_Boolean_array *)SZArrayNew(TypeInfo_bool_array,3);
  (__this->fields)._enabledAxes = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._enabledAxes);
  array = (System_Single_array *)SZArrayNew(TypeInfo_float_array,3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
            ((System_Array_o *)array,
             FieldRva_PrivateImplementationDetails_F48AF7DD3F3ADB7DCC618687A0A2A61B8DF98065CA0C180875E8AE65A88E28E4
             ,(MethodInfo *)0x0);
  (__this->fields)._lastSpacing = array;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lastSpacing);
  pUVar5 = (UnityEngine_Vector2_array *)SZArrayNew(TypeInfo_UnityEngine_Vector2_array,3);
  (__this->fields)._lastCenters = pUVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lastCenters);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


