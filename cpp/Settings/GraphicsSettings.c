// Type: Settings.GraphicsSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/GraphicsSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/GraphicsSettings.cs  [CHANGED since prior version]
// --------------------------------

// Settings.GraphicsSettings$$get_FileName
// il2cpp: System_String_o* Settings_GraphicsSettings__get_FileName (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x3d91ab0

System_String_o *
Settings_GraphicsSettings__get_FileName(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  if (DAT_0570272e == '\0') {
    il2cpp_init_method_metadata(&"Graphics.json");
    DAT_0570272e = '\x01';
  }
  return "Graphics.json";
}


// Settings.GraphicsSettings$$Apply
// il2cpp: void Settings_GraphicsSettings__Apply (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x3d91ae0

void Settings_GraphicsSettings__Apply(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_IntSetting_o *pSVar3;
  Cameras_InGameCamera_o *__this_00;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  Settings_IntSetting_o *pSVar8;
  Settings_IntSetting_o *pSVar9;
  Settings_IntSetting_o *pSVar10;
  UnityEngine_Object_o *x;
  int32_t iVar11;
  bool_conflict bVar12;
  Settings_BoolSetting_o *pSVar13;
  PostProcessingManager_o *__this_01;
  UI_InGameMenu_o *__this_02;
  
  if (DAT_0570272f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_Convert);
    il2cpp_init_method_metadata(&TypeInfo_FullscreenHandler);
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&MethodInfo_PostProcessingManager_FindFirstObjectByType_Post);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata();
    DAT_0570272f = '\x01';
  }
  pSVar3 = (__this->fields).ShadowQuality;
  if (pSVar3 == (Settings_IntSetting_o *)0x0) goto LAB_03d91fde;
  switch((pSVar3->fields)._value) {
  case 0:
    UnityEngine_QualitySettings__set_shadows(0,(MethodInfo *)0x0);
    pSVar13 = (__this->fields).VSync;
    if (pSVar13 == (Settings_BoolSetting_o *)0x0) goto LAB_03d91fde;
    goto LAB_03d91c3b;
  case 1:
    UnityEngine_QualitySettings__set_shadows(1,(MethodInfo *)0x0);
    UnityEngine_QualitySettings__set_shadowResolution(1,(MethodInfo *)0x0);
    iVar11 = 0;
    break;
  case 2:
    UnityEngine_QualitySettings__set_shadows(2,(MethodInfo *)0x0);
    UnityEngine_QualitySettings__set_shadowResolution(2,(MethodInfo *)0x0);
    iVar11 = 2;
    break;
  case 3:
    UnityEngine_QualitySettings__set_shadows(2,(MethodInfo *)0x0);
    UnityEngine_QualitySettings__set_shadowResolution(3,(MethodInfo *)0x0);
    iVar11 = 4;
    break;
  default:
    goto switchD_03d91bb6_default;
  }
  UnityEngine_QualitySettings__set_shadowCascades(iVar11,(MethodInfo *)0x0);
switchD_03d91bb6_default:
  pSVar13 = (__this->fields).VSync;
  if (pSVar13 != (Settings_BoolSetting_o *)0x0) {
LAB_03d91c3b:
    bVar1 = *(byte *)((long)&(pSVar13->fields).DefaultValue + 1);
    if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar11 = System_Convert__ToInt32((uint)bVar1,(MethodInfo *)0x0);
    UnityEngine_QualitySettings__set_vSyncCount(iVar11,(MethodInfo *)0x0);
    if ((*(uint *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) & 0xfffffffe) == 2) {
      pSVar3 = (__this->fields).FPSCap;
    }
    else {
      pSVar3 = (__this->fields).MenuFPSCap;
    }
    if (pSVar3 != (Settings_IntSetting_o *)0x0) {
      iVar2 = (pSVar3->fields)._value;
      iVar11 = -1;
      if (0 < iVar2) {
        iVar11 = iVar2;
      }
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Application__set_targetFrameRate(iVar11,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).TextureQuality;
      if (pSVar3 != (Settings_IntSetting_o *)0x0) {
        UnityEngine_QualitySettings__set_globalTextureMipmapLimit
                  (3 - (pSVar3->fields)._value,(MethodInfo *)0x0);
        pSVar3 = (__this->fields).AnisotropicFiltering;
        if (pSVar3 != (Settings_IntSetting_o *)0x0) {
          UnityEngine_QualitySettings__set_anisotropicFiltering
                    ((pSVar3->fields)._value,(MethodInfo *)0x0);
          UnityEngine_QualitySettings__set_antiAliasing(0,(MethodInfo *)0x0);
          pSVar3 = (__this->fields).ShadowDistance;
          if (pSVar3 != (Settings_IntSetting_o *)0x0) {
            UnityEngine_QualitySettings__set_shadowDistance
                      ((float)(pSVar3->fields)._value,(MethodInfo *)0x0);
            __this_00 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
            if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
              bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
              if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
                 ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
                Cameras_InGameCamera__ApplyGraphicsSettings(__this_00,(MethodInfo *)0x0);
              }
            }
            pSVar3 = (__this->fields).ScreenResolution;
            if (pSVar3 != (Settings_IntSetting_o *)0x0) {
              iVar11 = (pSVar3->fields)._value;
              if (*(int *)(TypeInfo_FullscreenHandler + 0xe4) == 0) {
                il2cpp_init_class();
              }
              iVar11 = ApplicationManagers_FullscreenHandler__SanitizeResolutionSetting
                                 (iVar11,(MethodInfo *)0x0);
              Settings_TypedSetting<int>__set_Value
                        ((Settings_TypedSetting_int__o *)pSVar3,iVar11,MethodInfo_Void_set_Value);
              pSVar3 = (__this->fields).ScreenResolution;
              if ((pSVar3 != (Settings_IntSetting_o *)0x0) &&
                 (pSVar4 = (__this->fields).FullScreenMode, pSVar4 != (Settings_IntSetting_o *)0x0))
              {
                ApplicationManagers_FullscreenHandler__Apply
                          ((pSVar3->fields)._value,(pSVar4->fields)._value,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                __this_01 = (PostProcessingManager_o *)
                            UnityEngine_Object__FindFirstObjectByType<object>(MethodInfo_PostProcessingManager_FindFirstObjectByType_Post);
                bVar12 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar12 != '\0') {
                  pSVar3 = (__this->fields).AmbientOcclusion;
                  if ((((((pSVar3 == (Settings_IntSetting_o *)0x0) ||
                         (pSVar4 = (__this->fields).Bloom, pSVar4 == (Settings_IntSetting_o *)0x0))
                        || (pSVar5 = (__this->fields).ChromaticAberrationFX,
                           pSVar5 == (Settings_IntSetting_o *)0x0)) ||
                       ((pSVar6 = (__this->fields).ColorGrading,
                        pSVar6 == (Settings_IntSetting_o *)0x0 ||
                        (pSVar7 = (__this->fields).AutoExposure,
                        pSVar7 == (Settings_IntSetting_o *)0x0)))) ||
                      ((pSVar8 = (__this->fields).DepthOfField,
                       pSVar8 == (Settings_IntSetting_o *)0x0 ||
                       ((pSVar9 = (__this->fields).MotionBlur,
                        pSVar9 == (Settings_IntSetting_o *)0x0 ||
                        (pSVar10 = (__this->fields).WaterFX, pSVar10 == (Settings_IntSetting_o *)0x0
                        )))))) || (__this_01 == (PostProcessingManager_o *)0x0)) goto LAB_03d91fde;
                  PostProcessingManager__ApplySettings
                            (__this_01,(pSVar3->fields)._value,(pSVar4->fields)._value,
                             (pSVar5->fields)._value,(pSVar6->fields)._value,(pSVar7->fields)._value
                             ,(pSVar8->fields)._value,(pSVar9->fields)._value,
                             (pSVar10->fields)._value,(MethodInfo *)0x0);
                }
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar12 = UnityEngine_Object__op_Inequality
                                   (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar12 != '\0') {
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_init_class(TypeInfo_UIManager);
                    __this_02 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                  }
                  else {
                    __this_02 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                  }
                  if (__this_02 != (UI_InGameMenu_o *)0x0) {
                    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
                    if ((bVar1 <= (__this_02->klass->_2).naturalAligment) &&
                       ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_init_class(TypeInfo_UIManager);
                        __this_02 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                        if (__this_02 == (UI_InGameMenu_o *)0x0) goto LAB_03d91fde;
                      }
                      bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
                      if ((bVar1 <= (__this_02->klass->_2).naturalAligment) &&
                         ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
                        UI_InGameMenu__ApplyUISettings(__this_02,(MethodInfo *)0x0);
                        return;
                      }
                    /* WARNING: Subroutine does not return */
                      il2cpp_unwind_resume();
                    }
                  }
                }
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_03d91fde:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.GraphicsSettings$$OnSelectPreset
// il2cpp: void Settings_GraphicsSettings__OnSelectPreset (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x3d91ff0

void Settings_GraphicsSettings__OnSelectPreset
               (Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  int32_t value;
  Settings_IntSetting_o *pSVar2;
  
  if (DAT_05702730 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05702730 = '\x01';
  }
  pSVar2 = (__this->fields).PresetQuality;
  if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
  switch((pSVar2->fields)._value) {
  case 0:
    pSVar2 = (__this->fields).TextureQuality;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ShadowQuality;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AntiAliasing;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AnisotropicFiltering;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).WeatherEffects;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ShadowDistance;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,500,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).LightDistance;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).Bloom;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).MotionBlur;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ColorGrading;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).DepthOfField;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ChromaticAberrationFX;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AmbientOcclusion;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).WaterFX;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AutoExposure;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar1 = (__this->fields).HDR;
    if (pSVar1 == (Settings_BoolSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<bool>__set_Value((Settings_TypedSetting_bool__o *)pSVar1,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).RenderDistance;
    value = 1000;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    goto LAB_03d92866;
  case 1:
    pSVar2 = (__this->fields).TextureQuality;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,3,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ShadowQuality;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AntiAliasing;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AnisotropicFiltering;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).WeatherEffects;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ShadowDistance;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,500,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).LightDistance;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,100,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).Bloom;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).MotionBlur;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ColorGrading;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).DepthOfField;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ChromaticAberrationFX;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AmbientOcclusion;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).WaterFX;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AutoExposure;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
    pSVar1 = (__this->fields).HDR;
    if (pSVar1 == (Settings_BoolSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<bool>__set_Value((Settings_TypedSetting_bool__o *)pSVar1,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).RenderDistance;
    value = 2000;
    break;
  case 2:
    pSVar2 = (__this->fields).TextureQuality;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,3,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ShadowQuality;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AntiAliasing;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AnisotropicFiltering;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).WeatherEffects;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,2,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ShadowDistance;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,500,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).LightDistance;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0xfa,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).Bloom;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).MotionBlur;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ColorGrading;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).DepthOfField;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ChromaticAberrationFX;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AmbientOcclusion;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).WaterFX;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,2,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AutoExposure;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
    pSVar1 = (__this->fields).HDR;
    if (pSVar1 == (Settings_BoolSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<bool>__set_Value((Settings_TypedSetting_bool__o *)pSVar1,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).RenderDistance;
    value = 5000;
    break;
  case 3:
    pSVar2 = (__this->fields).TextureQuality;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,3,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ShadowQuality;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,2,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AntiAliasing;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AnisotropicFiltering;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,2,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).WeatherEffects;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,3,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ShadowDistance;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,1000,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).LightDistance;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,500,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).Bloom;
    goto joined_r0x03d922ea;
  case 4:
    pSVar2 = (__this->fields).TextureQuality;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,3,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ShadowQuality;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,3,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AntiAliasing;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AnisotropicFiltering;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,2,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).WeatherEffects;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,3,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ShadowDistance;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,1000,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).LightDistance;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,1000,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).Bloom;
joined_r0x03d922ea:
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).MotionBlur;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ColorGrading;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).DepthOfField;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).ChromaticAberrationFX;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AmbientOcclusion;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).WaterFX;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,3,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).AutoExposure;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,1,MethodInfo_Void_set_Value);
    pSVar1 = (__this->fields).HDR;
    if (pSVar1 == (Settings_BoolSetting_o *)0x0) goto LAB_03d9287c;
    Settings_TypedSetting<bool>__set_Value((Settings_TypedSetting_bool__o *)pSVar1,0,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields).RenderDistance;
    value = 10000;
    break;
  default:
    return;
  }
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
LAB_03d92866:
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar2,value,MethodInfo_Void_set_Value)
    ;
    return;
  }
LAB_03d9287c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.GraphicsSettings$$.ctor
// il2cpp: void Settings_GraphicsSettings___ctor (Settings_GraphicsSettings_o* __this, const MethodInfo* method);
// 0x3d92890

void Settings_GraphicsSettings___ctor(Settings_GraphicsSettings_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  
  if (DAT_05702731 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_Int32_EnumMaxValue_AmbientOcclusionLevel);
    il2cpp_init_method_metadata(&MethodInfo_Int32_EnumMaxValue_AntiAliasingLevel);
    il2cpp_init_method_metadata(&MethodInfo_Int32_EnumMaxValue_AutoExposureLevel);
    il2cpp_init_method_metadata(&MethodInfo_Int32_EnumMaxValue_BloomLevel);
    il2cpp_init_method_metadata(&MethodInfo_Int32_EnumMaxValue_ChromaticAberrationLevel);
    il2cpp_init_method_metadata(&MethodInfo_Int32_EnumMaxValue_ColorGradingLevel);
    il2cpp_init_method_metadata(&MethodInfo_Int32_EnumMaxValue_DepthOfFieldLevel);
    il2cpp_init_method_metadata(&MethodInfo_Int32_EnumMaxValue_MotionBlurLevel);
    il2cpp_init_method_metadata(&MethodInfo_Int32_EnumMaxValue_WaterFXLevel);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05702731 = '\x01';
  }
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,4,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).PresetQuality = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).PresetQuality,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,1,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).FullScreenMode = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).FullScreenMode);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ScreenResolution = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).ScreenResolution,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,0x90,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).FPSCap = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).FPSCap,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,0x3c,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).MenuFPSCap = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).MenuFPSCap);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar3,0,(MethodInfo *)0x0);
  (__this->fields).VSync = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).VSync,pSVar3);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar3,1,(MethodInfo *)0x0);
  (__this->fields).InterpolationEnabled = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).InterpolationEnabled);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar3,0,(MethodInfo *)0x0);
  (__this->fields).ShowFPS = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).ShowFPS,pSVar3);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,10000,10,1000000,(MethodInfo *)0x0);
  (__this->fields).RenderDistance = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).RenderDistance,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,3,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TextureQuality = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).TextureQuality,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,3,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ShadowQuality = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).ShadowQuality,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,1000,0,3000,(MethodInfo *)0x0);
  (__this->fields).ShadowDistance = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).ShadowDistance,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,1000,0,3000,(MethodInfo *)0x0);
  (__this->fields).LightDistance = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).LightDistance,pSVar2);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar1 = Utility_Util__EnumMaxValue<Int32Enum>(MethodInfo_Int32_EnumMaxValue_AntiAliasingLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,1,0,iVar1,(MethodInfo *)0x0);
  (__this->fields).AntiAliasing = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).AntiAliasing,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,1,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).AnisotropicFiltering = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).AnisotropicFiltering,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,3,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).WeatherEffects = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).WeatherEffects,pSVar2);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,2,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).WeaponTrail = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).WeaponTrail);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar3,0,(MethodInfo *)0x0);
  (__this->fields).WeaponTrailHold = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).WeaponTrailHold,pSVar3);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar3,1,(MethodInfo *)0x0);
  (__this->fields).WeaponFireEffect = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).WeaponFireEffect,pSVar3);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar3,1,(MethodInfo *)0x0);
  (__this->fields).WindEffectEnabled = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).WindEffectEnabled,pSVar3);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar3,1,(MethodInfo *)0x0);
  (__this->fields).BloodSplatterEnabled = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).BloodSplatterEnabled,pSVar3);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar3,1,(MethodInfo *)0x0);
  (__this->fields).NapeBloodEnabled = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).NapeBloodEnabled,pSVar3);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar3,1,(MethodInfo *)0x0);
  (__this->fields).MipmapEnabled = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).MipmapEnabled);
  iVar1 = Utility_Util__EnumMaxValue<Int32Enum>(MethodInfo_Int32_EnumMaxValue_AmbientOcclusionLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,0,0,iVar1,(MethodInfo *)0x0);
  (__this->fields).AmbientOcclusion = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).AmbientOcclusion,pSVar2);
  iVar1 = Utility_Util__EnumMaxValue<Int32Enum>(MethodInfo_Int32_EnumMaxValue_BloomLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,1,0,iVar1,(MethodInfo *)0x0);
  (__this->fields).Bloom = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Bloom);
  iVar1 = Utility_Util__EnumMaxValue<Int32Enum>(MethodInfo_Int32_EnumMaxValue_ChromaticAberrationLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,0,0,iVar1,(MethodInfo *)0x0);
  (__this->fields).ChromaticAberrationFX = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).ChromaticAberrationFX);
  iVar1 = Utility_Util__EnumMaxValue<Int32Enum>(MethodInfo_Int32_EnumMaxValue_ColorGradingLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,0,0,iVar1,(MethodInfo *)0x0);
  (__this->fields).ColorGrading = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).ColorGrading,pSVar2);
  iVar1 = Utility_Util__EnumMaxValue<Int32Enum>(MethodInfo_Int32_EnumMaxValue_AutoExposureLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,1,0,iVar1,(MethodInfo *)0x0);
  (__this->fields).AutoExposure = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).AutoExposure);
  iVar1 = Utility_Util__EnumMaxValue<Int32Enum>(MethodInfo_Int32_EnumMaxValue_DepthOfFieldLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,0,0,iVar1,(MethodInfo *)0x0);
  (__this->fields).DepthOfField = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).DepthOfField);
  iVar1 = Utility_Util__EnumMaxValue<Int32Enum>(MethodInfo_Int32_EnumMaxValue_MotionBlurLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,0,0,iVar1,(MethodInfo *)0x0);
  (__this->fields).MotionBlur = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).MotionBlur,pSVar2);
  iVar1 = Utility_Util__EnumMaxValue<Int32Enum>(MethodInfo_Int32_EnumMaxValue_WaterFXLevel);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar2,3,0,iVar1,(MethodInfo *)0x0);
  (__this->fields).WaterFX = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).WaterFX);
  pSVar3 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar3,0,(MethodInfo *)0x0);
  (__this->fields).HDR = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).HDR);
  Settings_SaveableSettingsContainer___ctor
            ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


