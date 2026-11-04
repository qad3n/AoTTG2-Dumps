// Type: Weather.WeatherManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Weather/WeatherManager.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherManager.cs
// --------------------------------

// Weather.WeatherManager.<UpdateReflectionTexture>d__31$$.ctor
// il2cpp: void Weather_WeatherManager__UpdateReflectionTexture_d__31___ctor (Weather_WeatherManager__UpdateReflectionTexture_d__31_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Weather_WeatherManager__UpdateReflectionTexture_d__31___ctor(Weather_WeatherManager__UpdateReflectionTexture_d__31_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Weather.WeatherManager.<UpdateReflectionTexture>d__31$$System.IDisposable.Dispose
// il2cpp: void Weather_WeatherManager__UpdateReflectionTexture_d__31__System_IDisposable_Dispose (Weather_WeatherManager__UpdateReflectionTexture_d__31_o* __this, const MethodInfo* method);
// 0x180547020

void
Weather_WeatherManager__UpdateReflectionTexture_d__31__System_IDisposable_Dispose(Weather_WeatherManager__UpdateReflectionTexture_d__31_o* __this, MethodInfo* method)

{
  return;
}


// Weather.WeatherManager.<UpdateReflectionTexture>d__31$$MoveNext
// il2cpp: bool Weather_WeatherManager__UpdateReflectionTexture_d__31__MoveNext (Weather_WeatherManager__UpdateReflectionTexture_d__31_o* __this, const MethodInfo* method);
// 0x181dd0680

bool Weather_WeatherManager__UpdateReflectionTexture_d__31__MoveNext
               (Weather_WeatherManager__UpdateReflectionTexture_d__31_o *__this,MethodInfo *method)

{
  int iVar1;
  Weather_WeatherManager_o *pWVar2;
  UnityEngine_ReflectionProbe_o *__this_00;
  Il2CppObject *__this_01;
  UnityEngine_Texture_o *value;
  
  if (Il2CppMethodInitialized_18434494c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_18434494c = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_01 = (Il2CppObject *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_01,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    pWVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((pWVar2 == (Weather_WeatherManager_o *)0x0) ||
       (__this_00 = (pWVar2->fields)._baker, __this_00 == (UnityEngine_ReflectionProbe_o *)0x0)) {
      ThrowNullReferenceException();
    }
    value = UnityEngine_ReflectionProbe__get_texture(__this_00,(MethodInfo *)0x0);
    UnityEngine_RenderSettings__set_customReflectionTexture(value,(MethodInfo *)0x0);
  }
  return false;
}


// Weather.WeatherManager.<UpdateReflectionTexture>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__UpdateReflectionTexture_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current (Weather_WeatherManager__UpdateReflectionTexture_d__31_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Weather_WeatherManager__UpdateReflectionTexture_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current(Weather_WeatherManager__UpdateReflectionTexture_d__31_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager.<UpdateReflectionTexture>d__31$$System.Collections.IEnumerator.Reset
// il2cpp: void Weather_WeatherManager__UpdateReflectionTexture_d__31__System_Collections_IEnumerator_Reset (Weather_WeatherManager__UpdateReflectionTexture_d__31_o* __this, const MethodInfo* method);
// 0x181dd0740

void Weather_WeatherManager__UpdateReflectionTexture_d__31__System_Collections_IEnumerator_Reset
               (Weather_WeatherManager__UpdateReflectionTexture_d__31_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Weather_WeatherManager_UpdateReflectionTexture_d__31_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Weather.WeatherManager.<UpdateReflectionTexture>d__31$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__UpdateReflectionTexture_d__31__System_Collections_IEnumerator_get_Current (Weather_WeatherManager__UpdateReflectionTexture_d__31_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Weather_WeatherManager__UpdateReflectionTexture_d__31__System_Collections_IEnumerator_get_Current(Weather_WeatherManager__UpdateReflectionTexture_d__31_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__52$$.ctor
// il2cpp: void Weather_WeatherManager__WaitAndApplySkybox_d__52___ctor (Weather_WeatherManager__WaitAndApplySkybox_d__52_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Weather_WeatherManager__WaitAndApplySkybox_d__52___ctor(Weather_WeatherManager__WaitAndApplySkybox_d__52_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__52$$System.IDisposable.Dispose
// il2cpp: void Weather_WeatherManager__WaitAndApplySkybox_d__52__System_IDisposable_Dispose (Weather_WeatherManager__WaitAndApplySkybox_d__52_o* __this, const MethodInfo* method);
// 0x180547020

void
Weather_WeatherManager__WaitAndApplySkybox_d__52__System_IDisposable_Dispose(Weather_WeatherManager__WaitAndApplySkybox_d__52_o* __this, MethodInfo* method)

{
  return;
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__52$$MoveNext
// il2cpp: bool Weather_WeatherManager__WaitAndApplySkybox_d__52__MoveNext (Weather_WeatherManager__WaitAndApplySkybox_d__52_o* __this, const MethodInfo* method);
// 0x181dd0780
// eh: try 0x181dd0bc0..0x181dd0c60 -> pad 0x183317f30 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dd0bbe: nop 
// asm:   0x181dd0c20: mov rdx, qword ptr [rip + 0x22a7589]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Camera_Dispose
// asm:   0x181dd0c27: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181dd0c2c: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181dd0c31: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181dd0c36: test rcx, rcx
// asm:   0x181dd0c39: jne 0x181dd0c60
// asm:   0x181dd0c60: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool Weather_WeatherManager__WaitAndApplySkybox_d__52__MoveNext
               (Weather_WeatherManager__WaitAndApplySkybox_d__52_o *__this,MethodInfo *method)

{
  int iVar1;
  Weather_WeatherManager_o *__this_00;
  Weather_WeatherManager_o *pWVar2;
  Settings_WeatherSet_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Cameras_BaseCamera_o *pCVar6;
  Settings_ColorSetting_o *pSVar7;
  Utility_Color255_o *__this_02;
  Weather_WeatherManager_StaticFields *pWVar8;
  System_Collections_Generic_List_Camera__o *__this_03;
  System_String_o *name;
  bool bVar9;
  Il2CppObject *__this_04;
  UnityEngine_Material_o *__this_05;
  UnityEngine_Material_o *pUVar10;
  UnityEngine_Color_o *pUVar11;
  UnityEngine_GameObject_o *__this_06;
  UnityEngine_Skybox_o *pUVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_48 [8];
  undefined8 uStack_40;
  UnityEngine_Component_o *local_38;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_18434494d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Camera_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Camera_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Camera_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Skybox);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Camera_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_SkyboxCustomSkinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    il2cpp_codegen_initialize_runtime_metadata(&"CaveMap1");
    il2cpp_codegen_initialize_runtime_metadata(&"Day1");
    il2cpp_codegen_initialize_runtime_metadata(&"_Tint");
    Il2CppMethodInitialized_18434494d = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_04 = (Il2CppObject *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_04,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_04;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_04);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 != 1) {
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
  }
  pWVar2 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
  if (pWVar2 != (Weather_WeatherManager_o *)0x0) {
    if ((pWVar2->fields)._isCaveMap == false) {
      if (__this_00 == (Weather_WeatherManager_o *)0x0) goto label_181dd0c66;
      bVar9 = Weather_WeatherManager__IsWeatherEnabled(__this_00,(MethodInfo *)0x0);
      if (bVar9) {
        pSVar3 = (__this_00->fields)._currentWeather;
        if ((((pSVar3 == (Settings_WeatherSet_o *)0x0) ||
             (pSVar4 = (pSVar3->fields).Skybox, pSVar4 == (Settings_StringSetting_o *)0x0)) ||
            (pSVar3 = (__this_00->fields)._targetWeather, pSVar3 == (Settings_WeatherSet_o *)0x0)) ||
           (pSVar5 = (pSVar3->fields).Skybox, pSVar5 == (Settings_StringSetting_o *)0x0)) goto label_181dd0c66;
        __this_05 = Weather_WeatherManager__GetBlendedSkybox
                              (__this_00,(pSVar4->fields)._value,(pSVar5->fields)._value,(MethodInfo *)0x0);
      }
      else {
        __this_05 = Weather_WeatherManager__GetBlendedSkybox
                              (__this_00,"Day1","Day1",(MethodInfo *)0x0);
      }
    }
    else {
      if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      }
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                  TypeInfo_Weather_WeatherManager->static_fields->SkyboxMaterials;
      if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181dd0c66;
      __this_05 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_01,(Il2CppObject *)"CaveMap1",
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    }
    pCVar6 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if (pCVar6 != (Cameras_BaseCamera_o *)0x0) {
      pUVar12 = (pCVar6->fields).Skybox;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_05,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar9) {
        if (pUVar12 == (UnityEngine_Skybox_o *)0x0) goto label_181dd0c66;
        pUVar10 = UnityEngine_Skybox__get_material(pUVar12,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)__this_05,(MethodInfo *)0x0
                          );
        if (bVar9) {
          pUVar10 = TypeInfo_CustomSkins_SkyboxCustomSkinLoader->static_fields->SkyboxMaterial;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar9 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar9) {
            if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
            }
            pWVar2 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
            if ((pWVar2 != (Weather_WeatherManager_o *)0x0) && (__this_00 != (Weather_WeatherManager_o *)0x0))
            {
              if ((pWVar2->fields)._isCaveMap == false) {
                bVar9 = Weather_WeatherManager__IsWeatherEnabled(__this_00,(MethodInfo *)0x0);
                name = "_Tint";
                if (bVar9) {
                  pSVar3 = (__this_00->fields)._currentWeather;
                  if (((pSVar3 == (Settings_WeatherSet_o *)0x0) ||
                      (pSVar7 = (pSVar3->fields).SkyboxColor, pSVar7 == (Settings_ColorSetting_o *)0x0)) ||
                     (__this_02 = (pSVar7->fields)._value, __this_02 == (Utility_Color255_o *)0x0))
                  goto label_181dd0c66;
                  pUVar11 = Utility_Color255__ToColor
                                      ((UnityEngine_Color_o *)local_48,__this_02,(MethodInfo *)0x0);
                  fVar13 = (pUVar11->fields).r;
                  fVar14 = (pUVar11->fields).g;
                  fVar15 = (pUVar11->fields).b;
                  fVar16 = (pUVar11->fields).a;
                }
                else {
                  if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
                  }
                  pWVar8 = TypeInfo_Weather_WeatherManager->static_fields;
                  fVar13 = (pWVar8->DefaultSkyboxTint).fields.r;
                  fVar14 = (pWVar8->DefaultSkyboxTint).fields.g;
                  fVar15 = (pWVar8->DefaultSkyboxTint).fields.b;
                  fVar16 = (pWVar8->DefaultSkyboxTint).fields.a;
                }
                if (__this_05 == (UnityEngine_Material_o *)0x0) goto label_181dd0c66;
                local_48._4_4_ = fVar14;
                local_48._0_4_ = fVar13;
                uStack_40._4_4_ = (int32_t)fVar16;
                uStack_40._0_4_ = (int32_t)fVar15;
                UnityEngine_Material__SetVector
                          (__this_05,name,(UnityEngine_Vector4_o *)local_48,(MethodInfo *)0x0);
              }
              __this_03 = (__this_00->fields)._skyboxCameras;
              if (__this_03 != (System_Collections_Generic_List_Camera__o *)0x0) {
                System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                           (System_Collections_Generic_List_T__o *)__this_03,
                           (MethodInfo_91F180 *)
                           MethodInfo_System_Collections_Generic_List_Camera_GetEnumerator);
                local_28.fields._list = (System_Collections_Generic_List_T__o *)local_48;
                local_28.fields._index = (int32_t)uStack_40;
                local_28.fields._version = uStack_40._4_4_;
                local_28.fields._current = (Il2CppObject *)local_38;
                local_48 = (undefined1  [8])0x0;
                uStack_40 = &local_28;
                while( true ) {
                  bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    (&local_28,
                                     (MethodInfo_153A2A0 *)
                                     MethodInfo_System_Collections_Generic_List_Enumerator_Camera_MoveNext);
                  if (!bVar9) {
                    System_Collections_Generic_List_Enumerator_object___Dispose
                              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                               MethodInfo_System_Collections_Generic_List_Enumerator_Camera_Dispose);
                    return false;
                  }
                  if ((UnityEngine_Component_o *)local_28.fields._current == (UnityEngine_Component_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  __this_06 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)local_28.fields._current,(MethodInfo *)0x0
                                        );
                  if (__this_06 == (UnityEngine_GameObject_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar12 = UnityEngine_GameObject__GetComponentInChildren_object_
                                      (__this_06,
                                       (MethodInfo_6F5040 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Skybox);
                  if (pUVar12 == (UnityEngine_Skybox_o *)0x0) break;
                  UnityEngine_Skybox__set_material(pUVar12,__this_05,(MethodInfo *)0x0);
                }
                ThrowNullReferenceException();
              }
            }
            goto label_181dd0c66;
          }
        }
      }
      return false;
    }
  }
label_181dd0c66:
  ThrowNullReferenceException();
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__52$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__WaitAndApplySkybox_d__52__System_Collections_Generic_IEnumerator_System_Object__get_Current (Weather_WeatherManager__WaitAndApplySkybox_d__52_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Weather_WeatherManager__WaitAndApplySkybox_d__52__System_Collections_Generic_IEnumerator_System_Object__get_Current(Weather_WeatherManager__WaitAndApplySkybox_d__52_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__52$$System.Collections.IEnumerator.Reset
// il2cpp: void Weather_WeatherManager__WaitAndApplySkybox_d__52__System_Collections_IEnumerator_Reset (Weather_WeatherManager__WaitAndApplySkybox_d__52_o* __this, const MethodInfo* method);
// 0x181dd0c70

void Weather_WeatherManager__WaitAndApplySkybox_d__52__System_Collections_IEnumerator_Reset
               (Weather_WeatherManager__WaitAndApplySkybox_d__52_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Weather_WeatherManager_WaitAndApplySkybox_d__52_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__52$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__WaitAndApplySkybox_d__52__System_Collections_IEnumerator_get_Current (Weather_WeatherManager__WaitAndApplySkybox_d__52_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Weather_WeatherManager__WaitAndApplySkybox_d__52__System_Collections_IEnumerator_get_Current(Weather_WeatherManager__WaitAndApplySkybox_d__52_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__55$$.ctor
// il2cpp: void Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55___ctor (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55___ctor(Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__55$$System.IDisposable.Dispose
// il2cpp: void Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55__System_IDisposable_Dispose (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55_o* __this, const MethodInfo* method);
// 0x180547020

void
Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55__System_IDisposable_Dispose(Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55_o* __this, MethodInfo* method)

{
  return;
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__55$$MoveNext
// il2cpp: bool Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55__MoveNext (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55_o* __this, const MethodInfo* method);
// 0x181dd0cb0

bool Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55__MoveNext
               (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55_o *__this,MethodInfo *method)

{
  Weather_WeatherManager_o *__this_00;
  Settings_WeatherSet_o *pSVar1;
  Utility_Algorithms_CompressionAlgorithm_o *pUVar2;
  System_Collections_Generic_Dictionary_int__float__o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_18434494e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    Il2CppMethodInitialized_18434494e = '\x01';
  }
  if ((uint)(__this->fields).__1__state < 2) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 != (Weather_WeatherManager_o *)0x0) {
      if ((__this_00->fields)._finishedLoading == false) {
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
        (__this->fields).__1__state = 1;
        return true;
      }
      pSVar1 = (__this_00->fields)._currentWeather;
      if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
      }
      pUVar2 = (Utility_Algorithms_CompressionAlgorithm_o *)
               TypeInfo_Utility_DataCompressors->static_fields->Brotli;
      if (pUVar2 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
        pSVar4 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                           (pUVar2,(__this->fields).currentWeatherJson,0x1000,0xa00000,(MethodInfo *)0x0);
        if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
          (*(pSVar1->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                    (pSVar1,pSVar4,(pSVar1->klass->vtable)._9_DeserializeFromJsonString.method);
          pUVar2 = (Utility_Algorithms_CompressionAlgorithm_o *)
                   TypeInfo_Utility_DataCompressors->static_fields->Brotli;
          if (pUVar2 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
            pSVar1 = (__this_00->fields)._startWeather;
            pSVar4 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                               (pUVar2,(__this->fields).startWeatherJson,0x1000,0xa00000,(MethodInfo *)0x0);
            if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
              (*(pSVar1->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                        (pSVar1,pSVar4,(pSVar1->klass->vtable)._9_DeserializeFromJsonString.method);
              pUVar2 = (Utility_Algorithms_CompressionAlgorithm_o *)
                       TypeInfo_Utility_DataCompressors->static_fields->Brotli;
              if (pUVar2 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
                pSVar1 = (__this_00->fields)._targetWeather;
                pSVar4 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                                   (pUVar2,(__this->fields).targetWeatherJson,0x1000,0xa00000,
                                    (MethodInfo *)0x0);
                if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
                  (*(pSVar1->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                            (pSVar1,pSVar4,(pSVar1->klass->vtable)._9_DeserializeFromJsonString.method);
                  pSVar3 = (__this->fields).targetWeatherStartTimes;
                  (__this_00->fields)._targetWeatherStartTimes = pSVar3;
                  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._targetWeatherStartTimes,pSVar3);
                  pSVar3 = (__this->fields).targetWeatherEndTimes;
                  (__this_00->fields)._targetWeatherEndTimes = pSVar3;
                  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._targetWeatherEndTimes,pSVar3);
                  (__this_00->fields)._currentTime = (__this->fields).currentTime;
                  Weather_WeatherManager__LerpCurrentWeatherToTarget(__this_00,(MethodInfo *)0x0);
                  Weather_WeatherManager__ApplyCurrentWeather(__this_00,false,true,(MethodInfo *)0x0);
                  return false;
                }
              }
            }
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  return false;
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__55$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55__System_Collections_Generic_IEnumerator_System_Object__get_Current (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55__System_Collections_Generic_IEnumerator_System_Object__get_Current(Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__55$$System.Collections.IEnumerator.Reset
// il2cpp: void Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55__System_Collections_IEnumerator_Reset (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55_o* __this, const MethodInfo* method);
// 0x181dd0ec0

void Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55__System_Collections_IEnumerator_Reset
               (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Weather_WeatherManager_WaitAndFinishOnSetWeather_d__55_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__55$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55__System_Collections_IEnumerator_get_Current (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55__System_Collections_IEnumerator_get_Current(Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager$$Init
// il2cpp: void Weather_WeatherManager__Init (const MethodInfo* method);
// 0x181db5930

void Weather_WeatherManager__Init(MethodInfo *method)

{
  Weather_WeatherManager_o *value;
  Events_OnPreLoadScene_o *value_00;
  
  if (Il2CppMethodInitialized_18434492b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_WeatherManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_ThunderWeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Weather_WeatherManager_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_18434492b = '\x01';
  }
  if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
  }
  value = Utility_SingletonFactory__CreateSingleton_object_
                    ((Il2CppObject *)TypeInfo_Weather_WeatherManager->static_fields->_instance,
                     (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_WeatherManager);
  TypeInfo_Weather_WeatherManager->static_fields->_instance = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Weather_WeatherManager->static_fields->_instance,value);
  if ((TypeInfo_Weather_ThunderWeatherEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_ThunderWeatherEffect);
  }
  Weather_ThunderWeatherEffect__OnFinishInit((MethodInfo *)0x0);
  Weather_WeatherManager__LoadSkyboxes((MethodInfo *)0x0);
  value_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnPreLoadScene);
  Events_OnPreLoadScene___ctor
            ((UnityEngine_AudioClip_PCMSetPositionCallback_o *)value_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Weather_WeatherManager_OnPreLoadScene,(MethodInfo *)0x0);
  Events_EventManager__add_OnPreLoadScene(value_00,(MethodInfo *)0x0);
  return;
}


// Weather.WeatherManager$$OnPreLoadScene
// il2cpp: void Weather_WeatherManager__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x181db6ec0
// eh: try 0x181db7014..0x181db7201 -> pad 0x183318130 (+4 call sites) catch Il2CppExceptionWrapper
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181db70c0: mov rdx, qword ptr [rip + 0x22d36e1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_LightningParticle_Dispose
// asm:   0x181db70c7: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181db70cc: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181db70d1: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181db70d6: test rcx, rcx
// asm:   0x181db70d9: jne 0x181db71f6
// asm:   0x181db70df: xor edi, edi
// asm:   0x181db70e1: jmp 0x181db7014
// asm:   0x181db70f9: mov rdx, qword ptr [rip + 0x22b92b8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_List_LightningParticle_Dispose
// asm:   0x181db7100: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181db7105: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181db710a: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181db710f: test rcx, rcx
// asm:   0x181db7112: jne 0x181db7201
// asm:   0x181db71f6: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181db7201: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318130: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318135: push rbp
// asm:   0x183318136: sub rsp, 0x20
// asm:   0x18331813a: mov rbp, rdx
// asm:   0x18331813d: mov rax, qword ptr [rbp + 0x80]
// asm:   0x183318144: mov rcx, qword ptr [rax]
// asm:   0x183318147: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18331814b: movabs rax, 0
// asm:   0x183318155: add rsp, 0x20
// asm:   0x183318159: pop rbp
// asm:   0x18331815a: ret 
// asm:   0x1833398d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833398d5: push rbp
// asm:   0x1833398d6: sub rsp, 0x20
// asm:   0x1833398da: mov rbp, rdx
// asm:   0x1833398dd: mov rax, qword ptr [rbp + 0x78]
// asm:   0x1833398e1: mov rcx, qword ptr [rax]
// asm:   0x1833398e4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x1833398e8: movabs rax, 0
// asm:   0x1833398f2: add rsp, 0x20
// asm:   0x1833398f6: pop rbp
// asm:   0x1833398f7: ret 

void Weather_WeatherManager__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  System_Collections_Generic_List_List_LightningParticle___o *__this;
  Weather_WeatherManager_o *pWVar1;
  bool bVar2;
  undefined1 local_78 [16];
  System_Collections_Generic_List_T__o *local_68;
  undefined1 local_60 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_58;
  System_Collections_Generic_List_T__o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  System_Collections_Generic_List_Enumerator_T__o local_20;
  
  if (Il2CppMethodInitialized_18434492c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_LightningParticle_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_List_LightningParticle_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_LightningParticle_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_List_LightningParticle_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_LightningParticle_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_List_LightningParticle_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_LightningParticle_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_LightningParticle_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_ThunderWeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WindWeatherEffect);
    Il2CppMethodInitialized_18434492c = '\x01';
  }
  local_60 = (undefined1  [8])0x0;
  pSStack_58 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_50 = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Weather_WindWeatherEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WindWeatherEffect);
  }
  TypeInfo_Weather_WindWeatherEffect->static_fields->WindEnabled = false;
  if ((TypeInfo_Weather_ThunderWeatherEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_ThunderWeatherEffect);
  }
  __this = TypeInfo_Weather_ThunderWeatherEffect->static_fields->LightningPool;
  if (__this != (System_Collections_Generic_List_List_LightningParticle___o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_78,
               (System_Collections_Generic_List_T__o *)__this,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_List_LightningParticle_GetEnumerator);
    local_60 = (undefined1  [8])local_78._0_8_;
    pSStack_58 = (System_Collections_Generic_List_Enumerator_object__o *)local_78._8_8_;
    local_50 = local_68;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_60,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_List_LightningParticle_MoveNext
                        );
      if (!bVar2) break;
      if (local_50 == (System_Collections_Generic_List_T__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                (&local_20,local_50,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_LightningParticle_GetEnumerator);
      local_48.fields._list = local_20.fields._list;
      local_48.fields._index = local_20.fields._index;
      local_48.fields._version = local_20.fields._version;
      local_48.fields._current = local_20.fields._current;
      local_78._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_78._8_8_ = &local_48;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_48,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_LightningParticle_MoveNext);
        if (!bVar2) break;
        if ((Weather_LightningParticle_o *)local_48.fields._current == (Weather_LightningParticle_o *)0x0) {
          ThrowNullReferenceException();
        }
        Weather_LightningParticle__Disable
                  ((Weather_LightningParticle_o *)local_48.fields._current,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                 MethodInfo_System_Collections_Generic_List_Enumerator_LightningParticle_Dispose);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60,
               MethodInfo_System_Collections_Generic_List_Enumerator_List_LightningParticle_Dispose);
    if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
    }
    pWVar1 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
    if (pWVar1 != (Weather_WeatherManager_o *)0x0) {
      (pWVar1->fields)._finishedLoading = false;
      if (Il2CppMethodInitialized_18434492f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
        Il2CppMethodInitialized_18434492f = '\x01';
      }
      if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      }
      pWVar1 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
      if (pWVar1 != (Weather_WeatherManager_o *)0x0) {
        (pWVar1->fields)._isCaveMap = false;
        UnityEngine_RenderSettings__set_skybox((UnityEngine_Material_o *)0x0,(MethodInfo *)0x0);
        UnityEngine_RenderSettings__set_defaultReflectionMode(0,(MethodInfo *)0x0);
        UnityEngine_RenderSettings__set_ambientMode(3,(MethodInfo *)0x0);
        UnityEngine_RenderSettings__set_ambientIntensity(1.0,(MethodInfo *)0x0);
        UnityEngine_RenderSettings__set_reflectionIntensity(0.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$EnableCaveMap
// il2cpp: void Weather_WeatherManager__EnableCaveMap (const MethodInfo* method);
// 0x181db4a90

void Weather_WeatherManager__EnableCaveMap(MethodInfo *method)

{
  Weather_WeatherManager_o *pWVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Material_o *value;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_ReflectionProbe_o *pUVar2;
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_01;
  
  if (Il2CppMethodInitialized_18434492d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ReflectionProbe);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    il2cpp_codegen_initialize_runtime_metadata(&"CaveMap1");
    Il2CppMethodInitialized_18434492d = '\x01';
  }
  if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
  }
  pWVar1 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
  if (pWVar1 != (Weather_WeatherManager_o *)0x0) {
    if ((pWVar1->fields)._isCaveMap != false) {
      return;
    }
    if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
    }
    pWVar1 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
    if (pWVar1 != (Weather_WeatherManager_o *)0x0) {
      (pWVar1->fields)._isCaveMap = true;
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Weather_WeatherManager->static_fields->SkyboxMaterials;
      if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        value = System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this,(Il2CppObject *)"CaveMap1",
                           (MethodInfo_147A5B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
        UnityEngine_RenderSettings__set_skybox(value,(MethodInfo *)0x0);
        UnityEngine_RenderSettings__set_defaultReflectionMode(1,(MethodInfo *)0x0);
        UnityEngine_RenderSettings__set_ambientMode(0,(MethodInfo *)0x0);
        UnityEngine_RenderSettings__set_ambientIntensity(1.0,(MethodInfo *)0x0);
        UnityEngine_RenderSettings__set_reflectionIntensity(1.0,(MethodInfo *)0x0);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_2f1ad20(__this_00,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          pWVar1 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
          pUVar2 = UnityEngine_GameObject__AddComponent_object_
                             (__this_00,
                              (MethodInfo_6F4D60 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_ReflectionProbe);
          if (pWVar1 != (Weather_WeatherManager_o *)0x0) {
            (pWVar1->fields)._baker = pUVar2;
            Il2CppCodeGenWriteBarrier(&(pWVar1->fields)._baker,pUVar2);
            pWVar1 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
            if ((pWVar1 != (Weather_WeatherManager_o *)0x0) &&
               (pUVar2 = (pWVar1->fields)._baker, pUVar2 != (UnityEngine_ReflectionProbe_o *)0x0)) {
              UnityEngine_ReflectionProbe__set_cullingMask(pUVar2,0,(MethodInfo *)0x0);
              pWVar1 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
              if ((pWVar1 != (Weather_WeatherManager_o *)0x0) &&
                 (pUVar2 = (pWVar1->fields)._baker, pUVar2 != (UnityEngine_ReflectionProbe_o *)0x0)) {
                UnityEngine_ReflectionProbe__set_refreshMode(pUVar2,2,(MethodInfo *)0x0);
                pWVar1 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
                if ((pWVar1 != (Weather_WeatherManager_o *)0x0) &&
                   (pUVar2 = (pWVar1->fields)._baker, pUVar2 != (UnityEngine_ReflectionProbe_o *)0x0)) {
                  UnityEngine_ReflectionProbe__set_mode(pUVar2,1,(MethodInfo *)0x0);
                  pWVar1 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
                  if ((pWVar1 != (Weather_WeatherManager_o *)0x0) &&
                     (pUVar2 = (pWVar1->fields)._baker, pUVar2 != (UnityEngine_ReflectionProbe_o *)0x0)) {
                    UnityEngine_ReflectionProbe__set_timeSlicingMode(pUVar2,2,(MethodInfo *)0x0);
                    UnityEngine_DynamicGI__UpdateEnvironment((MethodInfo *)0x0);
                    pWVar1 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
                    if ((pWVar1 != (Weather_WeatherManager_o *)0x0) &&
                       (pUVar2 = (pWVar1->fields)._baker, pUVar2 != (UnityEngine_ReflectionProbe_o *)0x0)) {
                      UnityEngine_ReflectionProbe__RenderProbe(pUVar2,(MethodInfo *)0x0);
                      pWVar1 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
                      if (pWVar1 != (Weather_WeatherManager_o *)0x0) {
                        if (Il2CppMethodInitialized_18434492e == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata
                                    (&TypeInfo_Weather_WeatherManager_UpdateReflectionTexture_d__31);
                          Il2CppMethodInitialized_18434492e = '\x01';
                        }
                        __this_01 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
                                    il2cpp_codegen_object_new
                                              ((Il2CppClass *)
                                               TypeInfo_Weather_WeatherManager_UpdateReflectionTexture_d__31);
                        Weather_WeatherManager__UpdateReflectionTexture_d__31___ctor
                                  (__this_01,0,(MethodInfo *)0x0);
                        if (__this_01 != (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)0x0) {
                          (__this_01->fields).__4__this = (Photon_Pun_UtilityScripts_OnClickRpc_o *)pWVar1;
                          Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this,pWVar1);
                          UnityEngine_MonoBehaviour__StartCoroutine_Auto
                                    ((UnityEngine_MonoBehaviour_o *)pWVar1,
                                     (System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$UpdateReflectionTexture
// il2cpp: System_Collections_IEnumerator_o* Weather_WeatherManager__UpdateReflectionTexture (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x181db8810

System_Collections_IEnumerator_o *
Weather_WeatherManager__UpdateReflectionTexture(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_18434492e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager_UpdateReflectionTexture_d__31)
    ;
    Il2CppMethodInitialized_18434492e = '\x01';
  }
  __this_00 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Weather_WeatherManager_UpdateReflectionTexture_d__31);
  Weather_WeatherManager__UpdateReflectionTexture_d__31___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)0x0) {
    (__this_00->fields).__4__this = (Photon_Pun_UtilityScripts_OnClickRpc_o *)__this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$DisableCaveMap
// il2cpp: void Weather_WeatherManager__DisableCaveMap (const MethodInfo* method);
// 0x181db49f0

void Weather_WeatherManager__DisableCaveMap(MethodInfo *method)

{
  Weather_WeatherManager_o *pWVar1;
  
  if (Il2CppMethodInitialized_18434492f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_18434492f = '\x01';
  }
  if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
  }
  pWVar1 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
  if (pWVar1 != (Weather_WeatherManager_o *)0x0) {
    (pWVar1->fields)._isCaveMap = false;
    UnityEngine_RenderSettings__set_skybox((UnityEngine_Material_o *)0x0,(MethodInfo *)0x0);
    UnityEngine_RenderSettings__set_defaultReflectionMode(0,(MethodInfo *)0x0);
    UnityEngine_RenderSettings__set_ambientMode(3,(MethodInfo *)0x0);
    UnityEngine_RenderSettings__set_ambientIntensity(1.0,(MethodInfo *)0x0);
    UnityEngine_RenderSettings__set_reflectionIntensity(0.0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$OnFinishLoading
// il2cpp: void Weather_WeatherManager__OnFinishLoading (const MethodInfo* method);
// 0x181db6a80

void Weather_WeatherManager__OnFinishLoading(MethodInfo *method)

{
  Weather_WeatherManager_o *__this;
  
  if (Il2CppMethodInitialized_184344930 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_184344930 = '\x01';
  }
  if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
  }
  __this = TypeInfo_Weather_WeatherManager->static_fields->_instance;
  if (__this != (Weather_WeatherManager_o *)0x0) {
    Weather_WeatherManager__RestartWeather(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$LoadSkyboxes
// il2cpp: void Weather_WeatherManager__LoadSkyboxes (const MethodInfo* method);
// 0x181db6600
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181db677e: nop 

void Weather_WeatherManager__LoadSkyboxes(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_String_o *path;
  UnityEngine_Shader_o *value;
  System_String_array *pSVar3;
  System_String_array *values;
  System_String_o *pSVar4;
  UnityEngine_Material_o *pUVar5;
  System_Collections_Generic_Dictionary_string__Material__o *__this;
  uint uVar6;
  
  if (Il2CppMethodInitialized_184344931 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Material);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumToStringArray_WeatherSkybox);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Skybox/Blended");
    il2cpp_codegen_initialize_runtime_metadata(&"Skyboxes/");
    il2cpp_codegen_initialize_runtime_metadata(&"CaveMap1");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"Skybox");
    il2cpp_codegen_initialize_runtime_metadata(&"Skyboxes/CaveMap1/CaveMap1Skybox");
    Il2CppMethodInitialized_184344931 = '\x01';
  }
  value = UnityEngine_Shader__Find("Skybox/Blended",(MethodInfo *)0x0);
  if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
  }
  TypeInfo_Weather_WeatherManager->static_fields->_blendedShader = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Weather_WeatherManager->static_fields->_blendedShader,value);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pSVar3 = Utility_Util__EnumToStringArray___Il2CppFullySharedGenericType_
                     ((MethodInfo_869FD0 *)MethodInfo_Utility_Util_EnumToStringArray_WeatherSkybox);
  if (pSVar3 != (System_String_array *)0x0) {
    for (uVar6 = 0; (int)uVar6 < (int)pSVar3->max_length; uVar6 = uVar6 + 1) {
      if ((uint)pSVar3->max_length <= uVar6) goto label_181db6a79;
      pSVar1 = pSVar3->m_Items[(int)uVar6];
      if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Weather_WeatherManager->static_fields->SkyboxMaterials;
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      path = TypeInfo_Utility_ResourcePaths->static_fields->Weather;
      values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
      pSVar4 = "Skyboxes/";
      if (values == (System_String_array *)0x0) goto label_181db6a73;
      if ((int)values->max_length == 0) goto label_181db6a79;
      values->m_Items[0] = "Skyboxes/";
      Il2CppCodeGenWriteBarrier(values->m_Items,pSVar4);
      if (pSVar1 == (System_String_o *)0x0) goto label_181db6a73;
      pSVar4 = (System_String_o *)
               (*((Il2CppClass *)pSVar1->klass)->vtable[3].methodPtr)
                         (pSVar1,((Il2CppClass *)pSVar1->klass)->vtable[3].method);
      if ((uint)values->max_length < 2) goto label_181db6a79;
      values->m_Items[1] = pSVar4;
      Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar4);
      pSVar4 = "/";
      if ((uint)values->max_length < 3) goto label_181db6a79;
      values->m_Items[2] = "/";
      Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar4);
      pSVar4 = (System_String_o *)
               (*((Il2CppClass *)pSVar1->klass)->vtable[3].methodPtr)
                         (pSVar1,((Il2CppClass *)pSVar1->klass)->vtable[3].method);
      if ((uint)values->max_length < 4) goto label_181db6a79;
      values->m_Items[3] = pSVar4;
      Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar4);
      pSVar4 = "Skybox";
      if ((uint)values->max_length < 5) goto label_181db6a79;
      values->m_Items[4] = "Skybox";
      Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar4);
      pSVar4 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar5 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                         (path,pSVar4,false,
                          (MethodInfo_795F00 *)
                          MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181db6a73;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar2,(Il2CppObject *)pSVar1,(Il2CppObject *)pUVar5,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_Add);
    }
    for (uVar6 = 0; (int)uVar6 < (int)pSVar3->max_length; uVar6 = uVar6 + 1) {
      if ((uint)pSVar3->max_length <= uVar6) {
label_181db6a79:
        ThrowIndexOutOfRangeException();
      }
      pSVar1 = pSVar3->m_Items[(int)uVar6];
      if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Weather_WeatherManager->static_fields->SkyboxBlendedMaterials;
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Material);
      System_Collections_Generic_Dictionary_object__object____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                 (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181db6a73;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar2,(Il2CppObject *)pSVar1,(Il2CppObject *)__this,
                 (MethodInfo_146B4B0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_Add);
    }
    if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Weather_WeatherManager->static_fields->SkyboxMaterials;
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->Weather;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar5 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (pSVar1,"Skyboxes/CaveMap1/CaveMap1Skybox",false,
                        (MethodInfo_795F00 *)
                        MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar2,(Il2CppObject *)"CaveMap1",(Il2CppObject *)pUVar5,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_Add);
      return;
    }
  }
label_181db6a73:
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$TakeFlashlight
// il2cpp: void Weather_WeatherManager__TakeFlashlight (UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x181db8670

void Weather_WeatherManager__TakeFlashlight(UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Weather_WeatherManager_o *pWVar1;
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *pSVar2;
  bool bVar3;
  Weather_BaseWeatherEffect_o *pWVar4;
  
  if (Il2CppMethodInitialized_184344932 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_184344932 = '\x01';
  }
  if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
  }
  pWVar1 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
  if ((pWVar1 != (Weather_WeatherManager_o *)0x0) &&
     (pSVar2 = (pWVar1->fields)._effects,
     pSVar2 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,7,
                       (MethodInfo_1443DB0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_ContainsKey
                      );
    if (!bVar3) {
      return;
    }
    if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
    }
    pWVar1 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
    if ((pWVar1 != (Weather_WeatherManager_o *)0x0) &&
       (pSVar2 = (pWVar1->fields)._effects,
       pSVar2 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)) {
      pWVar4 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,7,
                          (MethodInfo_1454ED0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                         );
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pWVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      }
      pWVar1 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
      if (((pWVar1 != (Weather_WeatherManager_o *)0x0) &&
          (pSVar2 = (pWVar1->fields)._effects,
          pSVar2 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)) &&
         (pWVar4 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,7,
                              (MethodInfo_1454ED0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                             ), pWVar4 != (Weather_BaseWeatherEffect_o *)0x0)) {
        (*(pWVar4->klass->vtable)._9_SetParent.methodPtr)
                  (pWVar4,(System_Type_o *)parent,(pWVar4->klass->vtable)._9_SetParent.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$CreateBlendedSkybox
// il2cpp: UnityEngine_Material_o* Weather_WeatherManager__CreateBlendedSkybox (UnityEngine_Shader_o* shader, System_String_array* parts, System_String_o* skybox1, System_String_o* skybox2, const MethodInfo* method);
// 0x181db3d90

UnityEngine_Material_o *
Weather_WeatherManager__CreateBlendedSkybox
          (UnityEngine_Shader_o *shader,System_String_array *parts,System_String_o *skybox1,
          System_String_o *skybox2,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  UnityEngine_Material_o *__this;
  System_String_o *name;
  UnityEngine_Material_o *pUVar2;
  UnityEngine_Texture_o *pUVar3;
  System_String_o *name_00;
  uint uVar4;
  UnityEngine_Vector4_Fields local_28;
  
  if (Il2CppMethodInitialized_184344933 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    il2cpp_codegen_initialize_runtime_metadata(&"2");
    il2cpp_codegen_initialize_runtime_metadata(&"_");
    il2cpp_codegen_initialize_runtime_metadata(&"Tex");
    il2cpp_codegen_initialize_runtime_metadata(&"_Tint");
    Il2CppMethodInitialized_184344933 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
  UnityEngine_Material___ctor(__this,shader,(MethodInfo *)0x0);
  if (parts != (System_String_array *)0x0) {
    for (uVar4 = 0; (int)uVar4 < (int)parts->max_length; uVar4 = uVar4 + 1) {
      if ((uint)parts->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      name = System_String__Concat_1969b70
                       ("_",parts->m_Items[(int)uVar4],"Tex",
                        (MethodInfo *)0x0);
      if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Weather_WeatherManager->static_fields->SkyboxMaterials;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181db3fee;
      pUVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)skybox1,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
      if (pUVar2 == (UnityEngine_Material_o *)0x0) goto label_181db3fee;
      pUVar3 = UnityEngine_Material__GetTexture(pUVar2,name,(MethodInfo *)0x0);
      if (__this == (UnityEngine_Material_o *)0x0) goto label_181db3fee;
      UnityEngine_Material__SetTexture(__this,name,pUVar3,(MethodInfo *)0x0);
      name_00 = System_String__Concat_1969e50(name,"2",(MethodInfo *)0x0);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Weather_WeatherManager->static_fields->SkyboxMaterials;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181db3fee;
      pUVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)skybox2,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
      if (pUVar2 == (UnityEngine_Material_o *)0x0) goto label_181db3fee;
      pUVar3 = UnityEngine_Material__GetTexture(pUVar2,name,(MethodInfo *)0x0);
      UnityEngine_Material__SetTexture(__this,name_00,pUVar3,(MethodInfo *)0x0);
    }
    if (__this != (UnityEngine_Material_o *)0x0) {
      local_28.x = 0.5;
      local_28.y = 0.5;
      local_28.z = 0.5;
      local_28.w = 1.0;
      UnityEngine_Material__SetVector
                (__this,"_Tint",(UnityEngine_Vector4_o *)&local_28,(MethodInfo *)0x0);
      if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      }
      if (Il2CppMethodInitialized_184344934 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"_Blend");
        Il2CppMethodInitialized_184344934 = '\x01';
      }
      UnityEngine_Material__SetFloat(__this,"_Blend",0.0,(MethodInfo *)0x0);
      return __this;
    }
  }
label_181db3fee:
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$SetSkyboxBlend
// il2cpp: void Weather_WeatherManager__SetSkyboxBlend (UnityEngine_Material_o* skybox, float blend, const MethodInfo* method);
// 0x181db8230

void Weather_WeatherManager__SetSkyboxBlend(UnityEngine_Material_o *skybox,float blend,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344934 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"_Blend");
    Il2CppMethodInitialized_184344934 = '\x01';
  }
  if (skybox != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat(skybox,"_Blend",blend,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$ResetCameras
// il2cpp: void Weather_WeatherManager__ResetCameras (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x181db73f0

void Weather_WeatherManager__ResetCameras(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint uVar2;
  System_Collections_Generic_List_Camera__o *pSVar3;
  Weather_WeatherManager_o *pWVar4;
  Cameras_BaseCamera_o *pCVar5;
  UnityEngine_Camera_o *item;
  UnityEngine_Camera_array *pUVar6;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_184344935 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Camera_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Camera_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_184344935 = '\x01';
  }
  pSVar3 = (__this->fields)._skyboxCameras;
  if (pSVar3 != (System_Collections_Generic_List_Camera__o *)0x0) {
    length = (pSVar3->fields)._size;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar3->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
    }
    pMVar7 = MethodInfo_System_Collections_Generic_List_Camera_Add;
    pWVar4 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
    if (((pWVar4 != (Weather_WeatherManager_o *)0x0) &&
        (pCVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera,
        pCVar5 != (Cameras_BaseCamera_o *)0x0)) &&
       (pSVar3 = (pWVar4->fields)._skyboxCameras, pSVar3 != (System_Collections_Generic_List_Camera__o *)0x0))
    {
      item = (pCVar5->fields).Camera;
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar6 = (pSVar3->fields)._items;
      if (pUVar6 != (UnityEngine_Camera_array *)0x0) {
        uVar2 = (pSVar3->fields)._size;
        if ((uint)pUVar6->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,
                     (MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
          return;
        }
        (pSVar3->fields)._size = uVar2 + 1;
        if (uVar2 < (uint)pUVar6->max_length) {
          pUVar6->m_Items[(int)uVar2] = item;
          Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar2,item);
          return;
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$ResetSkyboxColors
// il2cpp: void Weather_WeatherManager__ResetSkyboxColors (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x181db75c0
// eh: try 0x181db7734..0x181db7948 -> pad 0x1833245a0 (+4 call sites) catch Il2CppExceptionWrapper
// asm: 40 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181db773c: nop dword ptr [rax]
// asm:   0x181db77fd: nop dword ptr [rax]
// asm:   0x181db78bc: mov rdx, qword ptr [rip + 0x230577d]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Material_Dispose
// asm:   0x181db78c3: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181db78c8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181db78cd: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181db78d2: test rcx, rcx
// asm:   0x181db78d5: jne 0x181db7933
// asm:   0x181db78d7: xor r14d, r14d
// asm:   0x181db78da: jmp 0x181db7734
// asm:   0x181db78f2: mov rdx, qword ptr [rip + 0x22ff0e7]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_Material
// asm:   0x181db78f9: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181db78fe: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181db7903: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181db7908: test rcx, rcx
// asm:   0x181db790b: jne 0x181db7948
// asm:   0x181db7933: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181db7948: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833245a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833245a5: push rbp
// asm:   0x1833245a6: sub rsp, 0x20
// asm:   0x1833245aa: mov rbp, rdx
// asm:   0x1833245ad: mov rax, qword ptr [rbp + 0x98]
// asm:   0x1833245b4: mov rcx, qword ptr [rax]
// asm:   0x1833245b7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x1833245bb: movabs rax, 0
// asm:   0x1833245c5: add rsp, 0x20
// asm:   0x1833245c9: pop rbp
// asm:   0x1833245ca: ret 
// asm:   0x183325880: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183325885: push rbp
// asm:   0x183325886: sub rsp, 0x20
// asm:   0x18332588a: mov rbp, rdx
// asm:   0x18332588d: mov rax, qword ptr [rbp + 0x90]
// asm:   0x183325894: mov rcx, qword ptr [rax]
// asm:   0x183325897: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18332589b: movabs rax, 0
// asm:   0x1833258a5: add rsp, 0x20
// asm:   0x1833258a9: pop rbp
// asm:   0x1833258aa: ret 

void Weather_WeatherManager__ResetSkyboxColors(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Dictionary_string__Material___o *__this_00;
  Il2CppObject *key;
  Il2CppObject *key_00;
  bool bVar1;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  UnityEngine_Material_o *__this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_a8;
  undefined8 local_88;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *local_80;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_78;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_60 [2];
  
  if (Il2CppMethodInitialized_184344936 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Material_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_Material
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Material_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_Material_40b6ac0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_Material_40b6ba0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Material_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Material_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Dictionary_string_Material_GetEnumera
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    il2cpp_codegen_initialize_runtime_metadata(&"_Tint");
    Il2CppMethodInitialized_184344936 = '\x01';
  }
  local_78.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._currentKey = (Il2CppObject *)0x0;
  local_60[0].fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60[0].fields._index = 0;
  local_60[0].fields._version = 0;
  local_60[0].fields._currentKey = (Il2CppObject *)0x0;
  if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
  }
  __this_00 = TypeInfo_Weather_WeatherManager->static_fields->SkyboxBlendedMaterials;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__Dictionary_string__Material___o *)0x0) {
    pSVar2 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
             System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                        (MethodInfo_13C6500 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_get_Keys
                       );
    if (pSVar2 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                (&local_a8,pSVar2,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Dictionary_string_Material_GetEnumera
                );
      local_78.fields._dictionary = local_a8.fields._dictionary;
      local_78.fields._index = local_a8.fields._index;
      local_78.fields._version = local_a8.fields._version;
      local_78.fields._currentKey = local_a8.fields._currentValue;
      while( true ) {
        bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                          (&local_78,
                           (MethodInfo_156BDD0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_Material_40b6ac0
                          );
        key = local_78.fields._currentKey;
        if (!bVar1) {
          System_Configuration_ConfigurationCollectionAttribute___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_78,
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_Material
                    );
          return;
        }
        if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
        }
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Weather_WeatherManager->static_fields->SkyboxBlendedMaterials;
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_01 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar3,key,
                               (MethodInfo_147A5B0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_get_Item
                              );
        if (__this_01 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar2 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                 System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                           (__this_01,
                            (MethodInfo_13C6500 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Keys);
        if (pSVar2 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) break;
        System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                  (&local_a8,pSVar2,
                   (MethodInfo_F1E4D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Material_GetEnumerator
                  );
        local_60[0].fields._dictionary = local_a8.fields._dictionary;
        local_60[0].fields._index = local_a8.fields._index;
        local_60[0].fields._version = local_a8.fields._version;
        local_60[0].fields._currentKey = local_a8.fields._currentValue;
        local_88 = 0;
        local_80 = local_60;
        while( true ) {
          bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                            (local_60,(MethodInfo_156BDD0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Material_MoveNext
                            );
          key_00 = local_60[0].fields._currentKey;
          if (!bVar1) break;
          if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
          }
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_Weather_WeatherManager->static_fields->SkyboxBlendedMaterials;
          if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar3,key,
                              (MethodInfo_147A5B0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_get_Item
                             );
          if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          __this_02 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar3,key_00,
                                 (MethodInfo_147A5B0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
          if (__this_02 == (UnityEngine_Material_o *)0x0) {
            ThrowNullReferenceException();
          }
          local_a8.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x3f0000003f000000;
          local_a8.fields._index = 0x3f000000;
          local_a8.fields._version = 0x3f800000;
          UnityEngine_Material__SetVector
                    (__this_02,"_Tint",(UnityEngine_Vector4_o *)&local_a8,(MethodInfo *)0x0);
        }
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60,
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Material_Dispose
                  );
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$ResetPhysics
// il2cpp: void Weather_WeatherManager__ResetPhysics (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x181db7520

void Weather_WeatherManager__ResetPhysics(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  Weather_WeatherManager_o *pWVar1;
  
  if (Il2CppMethodInitialized_184344937 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_184344937 = '\x01';
  }
  if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
  }
  pWVar1 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
  if (pWVar1 != (Weather_WeatherManager_o *)0x0) {
    (pWVar1->fields)._currentWindForce = 0.0;
    pWVar1 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
    if (pWVar1 != (Weather_WeatherManager_o *)0x0) {
      (pWVar1->fields)._currentRainForce = 0.0;
      pWVar1 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
      if (pWVar1 != (Weather_WeatherManager_o *)0x0) {
        (pWVar1->fields)._currentSnowForce = 0.0;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$GetWeatherForce
// il2cpp: UnityEngine_Vector3_o Weather_WeatherManager__GetWeatherForce (const MethodInfo* method);
// 0x181db54a0

UnityEngine_Vector3_o *
Weather_WeatherManager__GetWeatherForce(UnityEngine_Vector3_o *__return_storage_ptr__,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint32_t uVar14;
  float fVar15;
  UnityEngine_Vector3_StaticFields *pUVar16;
  Weather_WeatherManager_o *pWVar17;
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *pSVar18;
  Weather_WindWeatherEffect_StaticFields *pWVar19;
  Weather_BaseWeatherEffect_o *pWVar20;
  Il2CppClass *klass;
  bool bVar21;
  
  if (Il2CppMethodInitialized_184344938 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WindWeatherEffect);
    Il2CppMethodInitialized_184344938 = '\x01';
  }
  bVar21 = g_data_18433dbea == '\0';
  (__return_storage_ptr__->fields).x = 0.0;
  (__return_storage_ptr__->fields).y = 0.0;
  (__return_storage_ptr__->fields).z = 0.0;
  if (bVar21) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    g_data_18433dbea = '\x01';
  }
  klass = (Il2CppClass *)TypeInfo_Weather_WeatherManager;
  pUVar16 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar14 = (TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor;
  fVar1 = (pUVar16->zeroVector).fields.y;
  fVar15 = (pUVar16->zeroVector).fields.z;
  (__return_storage_ptr__->fields).x = (pUVar16->zeroVector).fields.x;
  (__return_storage_ptr__->fields).y = fVar1;
  (__return_storage_ptr__->fields).z = fVar15;
  if (uVar14 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    klass = (Il2CppClass *)TypeInfo_Weather_WeatherManager;
  }
  if (*(longlong *)klass->static_fields != 0) {
    if (0.0 < *(float *)(*(longlong *)klass->static_fields + 0x94)) {
      if ((klass->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(klass);
        klass = (Il2CppClass *)TypeInfo_Weather_WeatherManager;
      }
      pWVar17 = klass->static_fields->_instance;
      if (((pWVar17 == (Weather_WeatherManager_o *)0x0) ||
          (pSVar18 = (pWVar17->fields)._effects,
          pSVar18 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)) ||
         (pWVar20 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar18,10,
                               (MethodInfo_1454ED0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                              ), pWVar20 == (Weather_BaseWeatherEffect_o *)0x0)) goto label_181db5921;
      klass = (Il2CppClass *)TypeInfo_Weather_WeatherManager;
      if (0.0 < (pWVar20->fields)._level) {
        fVar15 = (__return_storage_ptr__->fields).x;
        uVar2 = (__return_storage_ptr__->fields).y;
        uVar8 = (__return_storage_ptr__->fields).z;
        if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
        }
        pWVar17 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
        if (pWVar17 == (Weather_WeatherManager_o *)0x0) goto label_181db5921;
        fVar1 = (pWVar17->fields)._currentRainForce;
        if (Il2CppMethodInitialized_18434494b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18434494b = '\x01';
        }
        klass = (Il2CppClass *)TypeInfo_Weather_WeatherManager;
        pUVar16 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar3 = (pUVar16->downVector).fields.y;
        uVar9 = (pUVar16->downVector).fields.z;
        (__return_storage_ptr__->fields).x = fVar1 * (pUVar16->downVector).fields.x + fVar15;
        (__return_storage_ptr__->fields).y = (float)uVar3 * fVar1 + (float)uVar2;
        (__return_storage_ptr__->fields).z = (float)uVar9 * fVar1 + (float)uVar8;
      }
    }
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
      klass = (Il2CppClass *)TypeInfo_Weather_WeatherManager;
    }
    if (*(longlong *)klass->static_fields != 0) {
      if (0.0 < *(float *)(*(longlong *)klass->static_fields + 0x98)) {
        if ((klass->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(klass);
          klass = (Il2CppClass *)TypeInfo_Weather_WeatherManager;
        }
        pWVar17 = klass->static_fields->_instance;
        if (((pWVar17 == (Weather_WeatherManager_o *)0x0) ||
            (pSVar18 = (pWVar17->fields)._effects,
            pSVar18 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)) ||
           (pWVar20 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar18,0xc,
                                 (MethodInfo_1454ED0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                                ), pWVar20 == (Weather_BaseWeatherEffect_o *)0x0)) goto label_181db5921;
        klass = (Il2CppClass *)TypeInfo_Weather_WeatherManager;
        if (0.0 < (pWVar20->fields)._level) {
          fVar15 = (__return_storage_ptr__->fields).x;
          uVar4 = (__return_storage_ptr__->fields).y;
          uVar10 = (__return_storage_ptr__->fields).z;
          if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
          }
          pWVar17 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
          if (pWVar17 == (Weather_WeatherManager_o *)0x0) goto label_181db5921;
          fVar1 = (pWVar17->fields)._currentSnowForce;
          if (Il2CppMethodInitialized_18434494b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18434494b = '\x01';
          }
          klass = (Il2CppClass *)TypeInfo_Weather_WeatherManager;
          pUVar16 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar5 = (pUVar16->downVector).fields.y;
          uVar11 = (pUVar16->downVector).fields.z;
          (__return_storage_ptr__->fields).x = fVar1 * (pUVar16->downVector).fields.x + fVar15;
          (__return_storage_ptr__->fields).y = (float)uVar5 * fVar1 + (float)uVar4;
          (__return_storage_ptr__->fields).z = (float)uVar11 * fVar1 + (float)uVar10;
        }
      }
      if ((klass->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(klass);
        klass = (Il2CppClass *)TypeInfo_Weather_WeatherManager;
      }
      if (*(longlong *)klass->static_fields != 0) {
        if (*(float *)(*(longlong *)klass->static_fields + 0x9c) <= 0.0) {
          return __return_storage_ptr__;
        }
        if ((klass->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(klass);
          klass = (Il2CppClass *)TypeInfo_Weather_WeatherManager;
        }
        pWVar17 = klass->static_fields->_instance;
        if (((pWVar17 != (Weather_WeatherManager_o *)0x0) &&
            (pSVar18 = (pWVar17->fields)._effects,
            pSVar18 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)) &&
           (pWVar20 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar18,0xd,
                                 (MethodInfo_1454ED0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                                ), pWVar20 != (Weather_BaseWeatherEffect_o *)0x0)) {
          if (0.0 < (pWVar20->fields)._level) {
            fVar15 = (__return_storage_ptr__->fields).x;
            uVar6 = (__return_storage_ptr__->fields).y;
            uVar12 = (__return_storage_ptr__->fields).z;
            if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
            }
            pWVar17 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
            if (pWVar17 == (Weather_WeatherManager_o *)0x0) goto label_181db5921;
            fVar1 = (pWVar17->fields)._currentWindForce;
            if ((TypeInfo_Weather_WindWeatherEffect->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WindWeatherEffect);
            }
            pWVar19 = TypeInfo_Weather_WindWeatherEffect->static_fields;
            uVar7 = (pWVar19->WindDirection).fields.y;
            uVar13 = (pWVar19->WindDirection).fields.z;
            (__return_storage_ptr__->fields).x = fVar1 * (pWVar19->WindDirection).fields.x + fVar15;
            (__return_storage_ptr__->fields).y = (float)uVar7 * fVar1 + (float)uVar6;
            (__return_storage_ptr__->fields).z = (float)uVar13 * fVar1 + (float)uVar12;
          }
          return __return_storage_ptr__;
        }
      }
    }
  }
label_181db5921:
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$RestartWeather
// il2cpp: void Weather_WeatherManager__RestartWeather (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x181db7960
// eh: try 0x181db8090..0x181db8142 -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181db7ea6: mov rbx, r14
// asm:   0x181db7ea9: jmp 0x181db7ede
// asm:   0x181db80da: mov rdx, qword ptr [rip + 0x22e6907]  ; MethodInfo_System_Collections_Generic_List_Enumerator_WeatherScheduleRunner_Dispose
// asm:   0x181db80e1: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181db80e6: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181db80eb: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181db80f0: test rcx, rcx
// asm:   0x181db80f3: jne 0x181db8142
// asm:   0x181db80f5: mov rdi, qword ptr [rsp + 0xa0]
// asm:   0x181db8142: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

void Weather_WeatherManager__RestartWeather(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t iVar3;
  uint uVar4;
  System_Collections_Generic_List_Camera__o *pSVar5;
  Weather_WeatherManager_o *pWVar6;
  Cameras_BaseCamera_o *pCVar7;
  UnityEngine_Camera_o *item;
  UnityEngine_Camera_array *pUVar8;
  System_Collections_Generic_List_WeatherScheduleRunner__o *pSVar9;
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *__this_00;
  System_Collections_Generic_Dictionary_int__float__o *pSVar10;
  System_Collections_Generic_List_WeatherEffect__o *pSVar11;
  System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *__this_01;
  Settings_ColorSetting_o *__this_02;
  Settings_WeatherSettings_o *pSVar12;
  Settings_SetSettingsContainer_WeatherSet__o *pSVar13;
  Settings_InGameSet_o *pSVar14;
  Settings_IntSetting_o *pSVar15;
  Settings_ListSetting_T__o *__this_03;
  Settings_StringSetting_o *pSVar16;
  Settings_BoolSetting_o *pSVar17;
  MethodInfo *pMVar18;
  Weather_WeatherScheduleRunner_o *__this_04;
  bool bVar19;
  Utility_Color255_o *__this_05;
  Settings_WeatherSet_o *pSVar20;
  Settings_WeatherSet_c *pSVar21;
  Settings_WeatherSet_o *pSVar22;
  undefined1 local_60 [16];
  Weather_WeatherScheduleRunner_o *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Weather_WeatherScheduleRunner_o *local_38;
  
  if (Il2CppMethodInitialized_184344939 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_WeatherScheduleRunner_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_WeatherScheduleRunner_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_WeatherScheduleRunner_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_WeatherSet_GetItemAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_WeatherEffect_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_WeatherScheduleRunner_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_WeatherScheduleRunner_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_WeatherSet);
    il2cpp_codegen_initialize_runtime_metadata(&"Map Default*");
    Il2CppMethodInitialized_184344939 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Weather_WeatherScheduleRunner_o *)0x0;
  if (Il2CppMethodInitialized_184344935 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Camera_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Camera_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_184344935 = '\x01';
  }
  pSVar5 = (__this->fields)._skyboxCameras;
  if (pSVar5 == (System_Collections_Generic_List_Camera__o *)0x0) goto label_181db8130;
  piVar1 = &(pSVar5->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar3 = (pSVar5->fields)._size;
  pSVar22 = (Settings_WeatherSet_o *)0x0;
  (pSVar5->fields)._size = 0;
  if (0 < iVar3) {
    System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar3,(MethodInfo *)0x0);
  }
  if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
  }
  pMVar18 = MethodInfo_System_Collections_Generic_List_Camera_Add;
  pWVar6 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
  if (((pWVar6 == (Weather_WeatherManager_o *)0x0) ||
      (pCVar7 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera,
      pCVar7 == (Cameras_BaseCamera_o *)0x0)) ||
     (pSVar5 = (pWVar6->fields)._skyboxCameras, pSVar5 == (System_Collections_Generic_List_Camera__o *)0x0))
  goto label_181db8130;
  item = (pCVar7->fields).Camera;
  piVar1 = &(pSVar5->fields)._version;
  *piVar1 = *piVar1 + 1;
  pUVar8 = (pSVar5->fields)._items;
  if (pUVar8 == (UnityEngine_Camera_array *)0x0) goto label_181db8130;
  uVar4 = (pSVar5->fields)._size;
  if (uVar4 < (uint)pUVar8->max_length) {
    (pSVar5->fields)._size = uVar4 + 1;
    if ((uint)pUVar8->max_length <= uVar4) {
      ThrowIndexOutOfRangeException();
    }
    pUVar8->m_Items[(int)uVar4] = item;
    Il2CppCodeGenWriteBarrier(pUVar8->m_Items + (int)uVar4,item);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)item,
               (MethodInfo_93DD50 *)pMVar18->klass->rgctx_data[0xe].method);
  }
  Weather_WeatherManager__ResetSkyboxColors(__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184344937 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_184344937 = '\x01';
  }
  if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
  }
  pWVar6 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
  if (pWVar6 == (Weather_WeatherManager_o *)0x0) goto label_181db8130;
  (pWVar6->fields)._currentWindForce = 0.0;
  pWVar6 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
  if (pWVar6 == (Weather_WeatherManager_o *)0x0) goto label_181db8130;
  (pWVar6->fields)._currentRainForce = 0.0;
  pWVar6 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
  if (pWVar6 == (Weather_WeatherManager_o *)0x0) goto label_181db8130;
  (pWVar6->fields)._currentSnowForce = 0.0;
  pSVar9 = (__this->fields)._scheduleRunners;
  if (pSVar9 == (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) goto label_181db8130;
  piVar1 = &(pSVar9->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar3 = (pSVar9->fields)._size;
  (pSVar9->fields)._size = 0;
  if (0 < iVar3) {
    System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar3,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields)._effects;
  if (__this_00 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)
  goto label_181db8130;
  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_13BF1C0 *)
             MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_Clear);
  pSVar20 = (__this->fields)._currentWeather;
  if (pSVar20 == (Settings_WeatherSet_o *)0x0) goto label_181db8130;
  (*(pSVar20->klass->vtable)._4_SetDefault.methodPtr)(pSVar20,(pSVar20->klass->vtable)._4_SetDefault.method);
  pSVar20 = (__this->fields)._startWeather;
  if (pSVar20 == (Settings_WeatherSet_o *)0x0) goto label_181db8130;
  (*(pSVar20->klass->vtable)._4_SetDefault.methodPtr)(pSVar20,(pSVar20->klass->vtable)._4_SetDefault.method);
  pSVar20 = (__this->fields)._targetWeather;
  if (pSVar20 == (Settings_WeatherSet_o *)0x0) goto label_181db8130;
  (*(pSVar20->klass->vtable)._4_SetDefault.methodPtr)(pSVar20,(pSVar20->klass->vtable)._4_SetDefault.method);
  pSVar10 = (__this->fields)._targetWeatherStartTimes;
  if (pSVar10 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_181db8130;
  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,
             (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_Clear);
  pSVar10 = (__this->fields)._targetWeatherEndTimes;
  if (pSVar10 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_181db8130;
  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,
             (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_Clear);
  pSVar11 = (__this->fields)._needApply;
  if (pSVar11 == (System_Collections_Generic_List_WeatherEffect__o *)0x0) goto label_181db8130;
  piVar1 = &(pSVar11->fields)._version;
  *piVar1 = *piVar1 + 1;
  (pSVar11->fields)._size = 0;
  (__this->fields)._currentTime = 0.0;
  __this_01 = (__this->fields)._currentScheduleWait;
  if (__this_01 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0)
  goto label_181db8130;
  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_13BF1C0 *)
             MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_Clear);
  Weather_WeatherManager__CreateEffects(__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18434493a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_18434493a = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 4) ||
     (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 3)) {
    pSVar20 = (__this->fields)._currentWeather;
    if (pSVar20 == (Settings_WeatherSet_o *)0x0) goto label_181db8130;
    __this_02 = (pSVar20->fields).AmbientLight;
    __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    Utility_Color255___ctor
              ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)__this_05,0xff,0xff,0xff,0xff,
               (MethodInfo *)0x0);
    if (__this_02 == (Settings_ColorSetting_o *)0x0) goto label_181db8130;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_02,(Il2CppObject *)__this_05,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  }
  Weather_WeatherManager__ApplyCurrentWeather(__this,true,true,(MethodInfo *)0x0);
  if (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName != 2) goto label_181db8115;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar19 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar19) goto label_181db8115;
  pSVar12 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
  if (((pSVar12 == (Settings_WeatherSettings_o *)0x0) ||
      (pSVar13 = (pSVar12->fields).WeatherSets, pSVar13 == (Settings_SetSettingsContainer_WeatherSet__o *)0x0)
      ) || ((pSVar14 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,
            pSVar14 == (Settings_InGameSet_o *)0x0 ||
            ((pSVar15 = (pSVar14->fields).WeatherIndex, pSVar15 == (Settings_IntSetting_o *)0x0 ||
             (__this_03 = (pSVar13->fields).Sets, __this_03 == (Settings_ListSetting_T__o *)0x0))))))
  goto label_181db8130;
  pSVar20 = (Settings_WeatherSet_o *)
            Settings_ListSetting_object___GetItemAt
                      (__this_03,(pSVar15->fields)._value,
                       (MethodInfo_182B120 *)MethodInfo_Settings_ListSetting_WeatherSet_GetItemAt);
  if (pSVar20 != (Settings_WeatherSet_o *)0x0) {
    bVar2 = (TypeInfo_Settings_WeatherSet->_2).typeHierarchyDepth;
    if (((pSVar20->klass->_2).typeHierarchyDepth < bVar2) ||
       (pSVar22 = pSVar20,
       (pSVar20->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_WeatherSet
       )) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar20);
    }
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  if (TypeInfo_Map_MapLoader->static_fields->HasWeather == false) {
label_181db7fa2:
    pSVar20 = (__this->fields)._currentWeather;
    if (pSVar20 == (Settings_WeatherSet_o *)0x0) goto label_181db8130;
    pSVar21 = pSVar20->klass;
  }
  else {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    if (TypeInfo_Map_MapLoader->static_fields->Weather == (Settings_WeatherSet_o *)0x0) goto label_181db7fa2;
    if ((pSVar22 == (Settings_WeatherSet_o *)0x0) ||
       (pSVar16 = (pSVar22->fields).Name, pSVar16 == (Settings_StringSetting_o *)0x0)) goto label_181db8130;
    bVar19 = System_String__op_Equality((pSVar16->fields)._value,"Map Default*",(MethodInfo *)0x0);
    if (!bVar19) goto label_181db7fa2;
    pSVar20 = (__this->fields)._currentWeather;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    if (pSVar20 == (Settings_WeatherSet_o *)0x0) goto label_181db8130;
    pSVar21 = pSVar20->klass;
    pSVar22 = TypeInfo_Map_MapLoader->static_fields->Weather;
  }
  (*(pSVar21->vtable)._10_Copy.methodPtr)
            (pSVar20,(Settings_BaseSetting_o *)pSVar22,(pSVar21->vtable)._10_Copy.method);
  pSVar22 = (__this->fields)._currentWeather;
  if ((pSVar22 != (Settings_WeatherSet_o *)0x0) &&
     (pSVar16 = (pSVar22->fields).Schedule, pSVar16 != (Settings_StringSetting_o *)0x0)) {
    Weather_WeatherManager__CreateScheduleRunners(__this,(pSVar16->fields)._value,(MethodInfo *)0x0);
    pSVar22 = (__this->fields)._currentWeather;
    if ((pSVar22 != (Settings_WeatherSet_o *)0x0) &&
       (pSVar16 = (pSVar22->fields).Schedule, pSVar16 != (Settings_StringSetting_o *)0x0)) {
      (*(pSVar16->klass->vtable)._4_SetDefault.methodPtr)();
      pSVar22 = (__this->fields)._currentWeather;
      if ((pSVar22 != (Settings_WeatherSet_o *)0x0) &&
         (pSVar17 = (pSVar22->fields).UseSchedule, pSVar17 != (Settings_BoolSetting_o *)0x0)) {
        if ((pSVar17->fields)._value != false) {
          pSVar9 = (__this->fields)._scheduleRunners;
          if (pSVar9 == (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) goto label_181db8130;
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                     (System_Collections_Generic_List_T__o *)pSVar9,
                     (MethodInfo_91F180 *)
                     MethodInfo_System_Collections_Generic_List_WeatherScheduleRunner_GetEnumerator);
          local_48 = (undefined1  [8])local_60._0_8_;
          pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
          local_38 = local_50;
          local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
          while (bVar19 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                                     (MethodInfo_153A2A0 *)
                                     MethodInfo_System_Collections_Generic_List_Enumerator_WeatherScheduleRunner_MoveNext
                                    ), __this_04 = local_38, bVar19) {
            if (local_38 == (Weather_WeatherScheduleRunner_o *)0x0) {
              ThrowNullReferenceException();
            }
            Weather_WeatherScheduleRunner__ProcessSchedule(local_38,(MethodInfo *)0x0);
            Weather_WeatherScheduleRunner__ConsumeSchedule(__this_04,(MethodInfo *)0x0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
                     MethodInfo_System_Collections_Generic_List_Enumerator_WeatherScheduleRunner_Dispose);
        }
        Weather_WeatherManager__SyncWeather(__this,(MethodInfo *)0x0);
        (__this->fields)._currentSyncWait = 5.0;
        (__this->fields)._needSync = false;
label_181db8115:
        (__this->fields)._currentLerpWait = 0.05;
        (__this->fields)._finishedLoading = true;
        return;
      }
    }
  }
label_181db8130:
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$SetSceneWeather
// il2cpp: void Weather_WeatherManager__SetSceneWeather (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x181db8160

void Weather_WeatherManager__SetSceneWeather(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  Settings_WeatherSet_o *pSVar1;
  Settings_ColorSetting_o *__this_00;
  Utility_Color255_o *__this_01;
  
  if (Il2CppMethodInitialized_18434493a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_18434493a = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName != 4) &&
     (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName != 3)) {
    return;
  }
  pSVar1 = (__this->fields)._currentWeather;
  if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
    __this_00 = (pSVar1->fields).AmbientLight;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    Utility_Color255___ctor
              ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)__this_01,0xff,0xff,0xff,0xff,
               (MethodInfo *)0x0);
    if (__this_00 != (Settings_ColorSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)__this_01,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$CreateScheduleRunners
// il2cpp: void Weather_WeatherManager__CreateScheduleRunners (Weather_WeatherManager_o* __this, System_String_o* schedule, const MethodInfo* method);
// 0x181db47a0
// eh: try 0x181db48d0..0x181db49d5 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181db4990: mov rdx, qword ptr [rip + 0x22e9db1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEvent_Dispose
// asm:   0x181db4997: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181db499c: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181db49a1: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181db49a6: test rcx, rcx
// asm:   0x181db49a9: jne 0x181db49d5
// asm:   0x181db49d5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Weather_WeatherManager__CreateScheduleRunners
               (Weather_WeatherManager_o *__this,System_String_o *schedule,MethodInfo *method)

{
  System_Collections_Generic_List_WeatherEvent__o *pSVar1;
  System_Collections_Generic_List_WeatherScheduleRunner__o *pSVar2;
  System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *__this_00;
  Il2CppObject *pIVar3;
  bool bVar4;
  Weather_WeatherScheduleRunner_o *__this_01;
  Weather_WeatherSchedule_o *pWVar5;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_18434493b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEvent_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEvent_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEvent_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_WeatherScheduleRunner_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherEvent_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_WeatherEvent_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherScheduleRunner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherSchedule);
    Il2CppMethodInitialized_18434493b = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Weather_WeatherScheduleRunner);
  Weather_WeatherScheduleRunner___ctor(__this_01,__this,(MethodInfo *)0x0);
  pWVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Weather_WeatherSchedule);
  Weather_WeatherSchedule___ctor_1dd5250(pWVar5,schedule,(MethodInfo *)0x0);
  if ((pWVar5 == (Weather_WeatherSchedule_o *)0x0) ||
     (pSVar1 = (pWVar5->fields).Events, pSVar1 == (System_Collections_Generic_List_WeatherEvent__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
             (System_Collections_Generic_List_T__o *)pSVar1,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_WeatherEvent_GetEnumerator);
  local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
  local_48.fields._index = local_60._8_4_;
  local_48.fields._version = local_60._12_4_;
  local_48.fields._current = local_50;
  local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_60._8_8_ = &local_48;
  while( true ) {
    bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_48,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEvent_MoveNext);
    pIVar3 = local_48.fields._current;
    if (!bVar4) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                 MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEvent_Dispose);
      return;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if (*(int *)&local_48.fields._current[1].klass == 0) {
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Weather_WeatherScheduleRunner);
      Weather_WeatherScheduleRunner___ctor(__this_01,__this,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._scheduleRunners;
      if (pSVar2 == (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) {
        ThrowNullReferenceException();
      }
      il2cpp_runtime_helper_180012890(pSVar2,__this_01,MethodInfo_System_Collections_Generic_List_WeatherScheduleRunner_Add);
      __this_00 = (__this->fields)._currentScheduleWait;
      if (__this_00 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__float___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)__this_01,
                 0.0,(MethodInfo_147AAD0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_Add);
    }
    if (__this_01 == (Weather_WeatherScheduleRunner_o *)0x0) {
      ThrowNullReferenceException();
    }
    pWVar5 = (__this_01->fields).Schedule;
    if (pWVar5 == (Weather_WeatherSchedule_o *)0x0) break;
    pSVar1 = (pWVar5->fields).Events;
    if (pSVar1 == (System_Collections_Generic_List_WeatherEvent__o *)0x0) {
      ThrowNullReferenceException();
    }
    il2cpp_runtime_helper_180012890(pSVar1,pIVar3);
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$CreateEffects
// il2cpp: void Weather_WeatherManager__CreateEffects (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x181db4000
// eh: try 0x181db4331..0x181db4425 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181db43d1: mov rdx, qword ptr [rip + 0x230f028]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_WeatherEffect_BaseWeatherEffect
// asm:   0x181db43d8: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181db43dd: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181db43e2: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181db43e7: test rcx, rcx
// asm:   0x181db43ea: jne 0x181db4425
// asm:   0x181db43ec: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x181db4425: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Weather_WeatherManager__CreateEffects(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *pSVar1;
  System_String_o *path;
  Cameras_BaseCamera_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  UnityEngine_GameObject_o *pUVar6;
  Weather_RainWeatherEffect_o *value;
  Weather_SnowWeatherEffect_o *value_00;
  Weather_WindWeatherEffect_o *value_01;
  Weather_ThunderWeatherEffect_o *value_02;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_28;
  
  if (Il2CppMethodInitialized_18434493c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_WeatherEffect_BaseWeatherEffect
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_WeatherEffect_BaseWeatherEffect_40c34e0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_WeatherEffect_BaseWeatherEffect_40c35c0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_RainWeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_SnowWeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ThunderWeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_WindWeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_WeatherEffect_BaseWeatherEffect_GetEnumera
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/ThunderEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/SnowEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/RainEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/WindEffect");
    Il2CppMethodInitialized_18434493c = '\x01';
  }
  local_28.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._currentValue = (Il2CppObject *)0x0;
  pSVar1 = (__this->fields)._effects;
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Weather;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar6 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (path,"Prefabs/RainEffect",false,
                      (MethodInfo_795F00 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
    value = UnityEngine_GameObject__AddComponent_object_
                      (pUVar6,(MethodInfo_6F4D60 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_RainWeatherEffect);
    if (pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,10,(Il2CppObject *)value,
                 (MethodInfo_1443C70 *)
                 MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_Add);
      pSVar1 = (__this->fields)._effects;
      pUVar6 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                         (TypeInfo_Utility_ResourcePaths->static_fields->Weather,"Prefabs/SnowEffect",false,
                          (MethodInfo_795F00 *)
                          MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        value_00 = UnityEngine_GameObject__AddComponent_object_
                             (pUVar6,(MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_SnowWeatherEffect);
        if (pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,0xc,
                     (Il2CppObject *)value_00,
                     (MethodInfo_1443C70 *)
                     MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_Add);
          pSVar1 = (__this->fields)._effects;
          pUVar6 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                             (TypeInfo_Utility_ResourcePaths->static_fields->Weather,"Prefabs/WindEffect",
                              false,(MethodInfo_795F00 *)
                                    MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject
                             );
          if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
            value_01 = UnityEngine_GameObject__AddComponent_object_
                                 (pUVar6,(MethodInfo_6F4D60 *)
                                         MethodInfo_UnityEngine_GameObject_AddComponent_WindWeatherEffect);
            if (pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
              System_Collections_Generic_Dictionary_Int32Enum__object___Add
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,0xd,
                         (Il2CppObject *)value_01,
                         (MethodInfo_1443C70 *)
                         MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_Add)
              ;
              pSVar1 = (__this->fields)._effects;
              pUVar6 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                 (TypeInfo_Utility_ResourcePaths->static_fields->Weather,"Prefabs/ThunderEffect"
                                  ,false,(MethodInfo_795F00 *)
                                         MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject
                                 );
              if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                value_02 = UnityEngine_GameObject__AddComponent_object_
                                     (pUVar6,(MethodInfo_6F4D60 *)
                                             MethodInfo_UnityEngine_GameObject_AddComponent_ThunderWeatherEffect
                                     );
                if (pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0
                   ) {
                  System_Collections_Generic_Dictionary_Int32Enum__object___Add
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,0xb,
                             (Il2CppObject *)value_02,
                             (MethodInfo_1443C70 *)
                             MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_Add
                            );
                  pSVar1 = (__this->fields)._effects;
                  if (pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)
                                0x0) {
                    __this_00 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                                           (MethodInfo_13C65A0 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Values
                                          );
                    if (__this_00 !=
                        (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
                      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                  *)local_40,__this_00,
                                 (MethodInfo_F1E4D0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_WeatherEffect_BaseWeatherEffect_GetEnumera
                                );
                      local_28.fields._dictionary =
                           (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_40._0_8_;
                      local_28.fields._index = local_40._8_4_;
                      local_28.fields._version = local_40._12_4_;
                      local_28.fields._currentValue = local_30;
                      local_40._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                      local_40._8_8_ = &local_28;
                      while( true ) {
                        bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                                          (&local_28,
                                           (MethodInfo_155CFB0 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_WeatherEffect_BaseWeatherEffect_40c34e0
                                          );
                        pIVar4 = local_28.fields._currentValue;
                        if (!bVar5) {
                          System_Configuration_ConfigurationCollectionAttribute___ctor
                                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_WeatherEffect_BaseWeatherEffect
                                    );
                          Weather_WeatherManager__CreateFlashlight(__this,(MethodInfo *)0x0);
                          return;
                        }
                        pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
                        if (pCVar2 == (Cameras_BaseCamera_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        pUVar3 = (pCVar2->fields).Cache;
                        if (pUVar3 == (Utility_BaseComponentCache_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        if (local_28.fields._currentValue == (Il2CppObject *)0x0) break;
                        (*(local_28.fields._currentValue)->klass->vtable[0xb].methodPtr)
                                  (local_28.fields._currentValue,(pUVar3->fields).Transform,
                                   (local_28.fields._currentValue)->klass->vtable[0xb].method);
                        (*pIVar4->klass->vtable[8].methodPtr)(pIVar4,pIVar4->klass->vtable[8].method);
                        (*pIVar4->klass->vtable[6].methodPtr)(pIVar4,0,pIVar4->klass->vtable[6].method);
                      }
                      ThrowNullReferenceException();
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


// Weather.WeatherManager$$CreateFlashlight
// il2cpp: void Weather_WeatherManager__CreateFlashlight (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x181db4430

void Weather_WeatherManager__CreateFlashlight(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *pSVar1;
  System_String_o *path;
  Cameras_BaseCamera_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  System_Type_o *pSVar4;
  Weather_WeatherManager_o *pWVar5;
  bool bVar6;
  UnityEngine_GameObject_o *__this_00;
  Weather_FlashlightWeatherEffect_o *value;
  Weather_BaseWeatherEffect_o *pWVar7;
  
  if (Il2CppMethodInitialized_18434493d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_FlashlightWeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/FlashlightEffect");
    Il2CppMethodInitialized_18434493d = '\x01';
  }
  pSVar1 = (__this->fields)._effects;
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Weather;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this_00 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        (path,"Prefabs/FlashlightEffect",false,
                         (MethodInfo_795F00 *)
                         MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (value = UnityEngine_GameObject__AddComponent_object_
                        (__this_00,
                         (MethodInfo_6F4D60 *)
                         MethodInfo_UnityEngine_GameObject_AddComponent_FlashlightWeatherEffect),
     pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)) {
    System_Collections_Generic_Dictionary_Int32Enum__object___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,7,(Il2CppObject *)value,
               (MethodInfo_1443C70 *)
               MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_Add);
    pSVar1 = (__this->fields)._effects;
    if ((pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) &&
       (pWVar7 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,7,
                            (MethodInfo_1454ED0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                           ), pWVar7 != (Weather_BaseWeatherEffect_o *)0x0)) {
      (*(pWVar7->klass->vtable)._11_Setup.methodPtr)
                (pWVar7,(UnityEngine_Transform_o *)0x0,(pWVar7->klass->vtable)._11_Setup.method);
      pSVar1 = (__this->fields)._effects;
      if ((pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) &&
         (pWVar7 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,7,
                              (MethodInfo_1454ED0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                             ), pWVar7 != (Weather_BaseWeatherEffect_o *)0x0)) {
        (*(pWVar7->klass->vtable)._6_Disable.methodPtr)
                  (pWVar7,false,(pWVar7->klass->vtable)._6_Disable.method);
        pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
        if ((pCVar2 != (Cameras_BaseCamera_o *)0x0) &&
           (pUVar3 = (pCVar2->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) {
          pSVar4 = (System_Type_o *)(pUVar3->fields).Transform;
          if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
          }
          if (Il2CppMethodInitialized_184344932 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_ContainsKey
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                      );
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
            Il2CppMethodInitialized_184344932 = '\x01';
          }
          if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
          }
          pWVar5 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
          if ((pWVar5 != (Weather_WeatherManager_o *)0x0) &&
             (pSVar1 = (pWVar5->fields)._effects,
             pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)) {
            bVar6 = System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,7,
                               (MethodInfo_1443DB0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_ContainsKey
                              );
            if (!bVar6) {
              return;
            }
            if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
            }
            pWVar5 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
            if ((pWVar5 != (Weather_WeatherManager_o *)0x0) &&
               (pSVar1 = (pWVar5->fields)._effects,
               pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)) {
              pWVar7 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                                 ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,7,
                                  (MethodInfo_1454ED0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                                 );
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar6 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pWVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if (!bVar6) {
                return;
              }
              if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
              }
              pWVar5 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
              if (((pWVar5 != (Weather_WeatherManager_o *)0x0) &&
                  (pSVar1 = (pWVar5->fields)._effects,
                  pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0))
                 && (pWVar7 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,7,
                                         (MethodInfo_1454ED0 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                                        ), pWVar7 != (Weather_BaseWeatherEffect_o *)0x0)) {
                (*(pWVar7->klass->vtable)._9_SetParent.methodPtr)
                          (pWVar7,pSVar4,(pWVar7->klass->vtable)._9_SetParent.method);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$FixedUpdate
// il2cpp: void Weather_WeatherManager__FixedUpdate (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x181db4dd0
// eh: try 0x181db5030..0x181db5184 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181db4f54: xorps xmm7, xmm7
// asm:   0x181db50e4: mov rdx, qword ptr [rip + 0x22e98fd]  ; MethodInfo_System_Collections_Generic_List_Enumerator_WeatherScheduleRunner_Dispose
// asm:   0x181db50eb: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181db50f0: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181db50f5: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181db50fa: test rcx, rcx
// asm:   0x181db50fd: jne 0x181db5184
// asm:   0x181db5103: mov rdi, qword ptr [rsp + 0xb0]
// asm:   0x181db510b: xorps xmm7, xmm7
// asm:   0x181db5184: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Weather_WeatherManager__FixedUpdate(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__float__o *__this_00;
  Settings_WeatherSet_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *pSVar3;
  Il2CppObject *__this_01;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_IEnumerable_TKey__o *collection;
  System_Collections_Generic_List_WeatherScheduleRunner__o *__this_02;
  float fVar6;
  float fVar7;
  undefined1 local_80 [16];
  Weather_WeatherScheduleRunner_o *local_70;
  System_Collections_Generic_List_Enumerator_object__o local_68 [3];
  
  if (Il2CppMethodInitialized_18434493e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_WeatherScheduleRunner_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_WeatherScheduleRunner_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_WeatherScheduleRunner_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_WeatherScheduleRunner_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_WeatherScheduleRunner_ctor_40f61c8);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_WeatherScheduleRunner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_18434493e = '\x01';
  }
  local_68[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68[0].fields._index = 0;
  local_68[0].fields._version = 0;
  local_68[0].fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName != 2) ||
     ((__this->fields)._finishedLoading == false)) {
    return;
  }
  fVar7 = (__this->fields)._currentTime;
  fVar6 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  (__this->fields)._currentTime = fVar6 + fVar7;
  __this_00 = (__this->fields)._targetWeatherStartTimes;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
    iVar5 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (MethodInfo_13CDEB0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_float_get_Count);
    if (0 < iVar5) {
      fVar7 = (__this->fields)._currentLerpWait;
      fVar6 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      (__this->fields)._currentLerpWait = fVar7 - fVar6;
      if (fVar7 - fVar6 <= 0.0) {
        Weather_WeatherManager__LerpCurrentWeatherToTarget(__this,(MethodInfo *)0x0);
        Weather_WeatherManager__ApplyCurrentWeather(__this,false,false,(MethodInfo *)0x0);
        (__this->fields)._currentLerpWait = 0.05;
      }
    }
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (!bVar4) {
      return;
    }
    pSVar1 = (__this->fields)._currentWeather;
    if ((pSVar1 != (Settings_WeatherSet_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).UseSchedule, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
      if ((pSVar2->fields)._value == false) {
        return;
      }
      pSVar3 = (__this->fields)._currentScheduleWait;
      if (pSVar3 != (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0) {
        collection = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                                (MethodInfo_13C6500 *)
                                MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_get_Keys
                               );
        __this_02 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_WeatherScheduleRunner);
        System_Collections_Generic_List_object____ctor_94fb10
                  ((System_Collections_Generic_List_object__o *)__this_02,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,
                   (MethodInfo_94FB10 *)
                   MethodInfo_System_Collections_Generic_List_WeatherScheduleRunner_ctor_40f61c8);
        if (__this_02 != (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) {
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                     (System_Collections_Generic_List_T__o *)__this_02,
                     (MethodInfo_91F180 *)
                     MethodInfo_System_Collections_Generic_List_WeatherScheduleRunner_GetEnumerator);
          local_68[0].fields._list = (System_Collections_Generic_List_T__o *)local_80._0_8_;
          local_68[0].fields._index = local_80._8_4_;
          local_68[0].fields._version = local_80._12_4_;
          local_68[0].fields._current = (Il2CppObject *)local_70;
          local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_80._8_8_ = local_68;
          while (bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   (local_68,(MethodInfo_153A2A0 *)
                                             MethodInfo_System_Collections_Generic_List_Enumerator_WeatherScheduleRunner_MoveNext
                                   ), __this_01 = local_68[0].fields._current, bVar4) {
            pSVar3 = (__this->fields)._currentScheduleWait;
            if (pSVar3 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar7 = System_Collections_Generic_Dictionary_object__float___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                               local_68[0].fields._current,
                               (MethodInfo_1488BA0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_get_Item
                              );
            fVar6 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,__this_01,fVar7 - fVar6
                       ,(MethodInfo_1488DA0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_set_Item)
            ;
            pSVar3 = (__this->fields)._currentScheduleWait;
            if (pSVar3 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar7 = System_Collections_Generic_Dictionary_object__float___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,__this_01,
                               (MethodInfo_1488BA0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_get_Item
                              );
            if (fVar7 <= 0.0) {
              if ((Weather_WeatherScheduleRunner_o *)__this_01 == (Weather_WeatherScheduleRunner_o *)0x0) {
                ThrowNullReferenceException();
              }
              Weather_WeatherScheduleRunner__ConsumeSchedule
                        ((Weather_WeatherScheduleRunner_o *)__this_01,(MethodInfo *)0x0);
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68,
                     MethodInfo_System_Collections_Generic_List_Enumerator_WeatherScheduleRunner_Dispose);
          fVar7 = (__this->fields)._currentSyncWait;
          fVar6 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
          fVar7 = fVar7 - fVar6;
          (__this->fields)._currentSyncWait = fVar7;
          if (0.0 < fVar7) {
            return;
          }
          if ((__this->fields)._needSync == false) {
            return;
          }
          Weather_WeatherManager__LerpCurrentWeatherToTarget(__this,(MethodInfo *)0x0);
          Weather_WeatherManager__SyncWeather(__this,(MethodInfo *)0x0);
          (__this->fields)._needSync = false;
          (__this->fields)._currentSyncWait = 5.0;
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$SyncWeather
// il2cpp: void Weather_WeatherManager__SyncWeather (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x181db8290

void Weather_WeatherManager__SyncWeather(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  Settings_WeatherSet_o *pSVar1;
  Utility_Algorithms_CompressionAlgorithm_o *pUVar2;
  System_Collections_Generic_Dictionary_int__float__o *pSVar3;
  bool bVar4;
  System_Object_array *parameters;
  System_String_o *pSVar5;
  System_Byte_array *pSVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *pIVar8;
  float local_res18 [2];
  
  if (Il2CppMethodInitialized_18434493f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SetWeatherRPC");
    Il2CppMethodInitialized_18434493f = '\x01';
  }
  Weather_WeatherManager__ApplyCurrentWeather(__this,false,true,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,6);
  if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
  }
  pSVar1 = (__this->fields)._currentWeather;
  if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
    pUVar2 = (Utility_Algorithms_CompressionAlgorithm_o *)
             TypeInfo_Utility_DataCompressors->static_fields->Brotli;
    pSVar5 = (*(pSVar1->klass->vtable)._8_SerializeToJsonString.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._8_SerializeToJsonString.method);
    if ((pUVar2 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) &&
       (pSVar6 = Utility_Algorithms_CompressionAlgorithm__CompressString(pUVar2,pSVar5,1,(MethodInfo *)0x0),
       parameters != (System_Object_array *)0x0)) {
      if ((pSVar6 != (System_Byte_array *)0x0) &&
         (pIVar7 = il2cpp_vm_Object_IsInst(&pSVar6->obj,(((parameters->obj).klass)->_1).element_class),
         pIVar7 == (Il2CppObject *)0x0)) {
        pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length == 0) goto label_181db866a;
      parameters->m_Items[0] = &pSVar6->obj;
      Il2CppCodeGenWriteBarrier(parameters->m_Items,pSVar6);
      pSVar1 = (__this->fields)._startWeather;
      if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
        pUVar2 = (Utility_Algorithms_CompressionAlgorithm_o *)
                 TypeInfo_Utility_DataCompressors->static_fields->Brotli;
        pSVar5 = (*(pSVar1->klass->vtable)._8_SerializeToJsonString.methodPtr)
                           (pSVar1,(pSVar1->klass->vtable)._8_SerializeToJsonString.method);
        if (pUVar2 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
          pSVar6 = Utility_Algorithms_CompressionAlgorithm__CompressString(pUVar2,pSVar5,1,(MethodInfo *)0x0);
          if ((pSVar6 != (System_Byte_array *)0x0) &&
             (pIVar7 = il2cpp_vm_Object_IsInst(&pSVar6->obj,(((parameters->obj).klass)->_1).element_class),
             pIVar7 == (Il2CppObject *)0x0)) {
            pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
          }
          if ((uint)parameters->max_length < 2) {
label_181db866a:
            ThrowIndexOutOfRangeException();
          }
          parameters->m_Items[1] = &pSVar6->obj;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pSVar6);
          pSVar1 = (__this->fields)._targetWeather;
          if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
            pUVar2 = (Utility_Algorithms_CompressionAlgorithm_o *)
                     TypeInfo_Utility_DataCompressors->static_fields->Brotli;
            pSVar5 = (*(pSVar1->klass->vtable)._8_SerializeToJsonString.methodPtr)
                               (pSVar1,(pSVar1->klass->vtable)._8_SerializeToJsonString.method);
            if (pUVar2 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
              pSVar6 = Utility_Algorithms_CompressionAlgorithm__CompressString
                                 (pUVar2,pSVar5,1,(MethodInfo *)0x0);
              if ((pSVar6 != (System_Byte_array *)0x0) &&
                 (pIVar7 = il2cpp_vm_Object_IsInst(&pSVar6->obj,(((parameters->obj).klass)->_1).element_class)
                 , pIVar7 == (Il2CppObject *)0x0)) {
                pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
              }
              if (2 < (uint)parameters->max_length) {
                parameters->m_Items[2] = &pSVar6->obj;
                Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,pSVar6);
                pSVar3 = (__this->fields)._targetWeatherStartTimes;
                if ((pSVar3 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) &&
                   (pIVar7 = il2cpp_vm_Object_IsInst
                                       ((Il2CppObject *)pSVar3,(((parameters->obj).klass)->_1).element_class),
                   pIVar7 == (Il2CppObject *)0x0)) {
                  pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
                }
                if (3 < (uint)parameters->max_length) {
                  parameters->m_Items[3] = (Il2CppObject *)pSVar3;
                  Il2CppCodeGenWriteBarrier(parameters->m_Items + 3,pSVar3);
                  pSVar3 = (__this->fields)._targetWeatherEndTimes;
                  if ((pSVar3 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) &&
                     (pIVar7 = il2cpp_vm_Object_IsInst
                                         ((Il2CppObject *)pSVar3,(((parameters->obj).klass)->_1).element_class
                                         ), pIVar7 == (Il2CppObject *)0x0)) {
                    pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
                  }
                  if (4 < (uint)parameters->max_length) {
                    parameters->m_Items[4] = (Il2CppObject *)pSVar3;
                    Il2CppCodeGenWriteBarrier(parameters->m_Items + 4,pSVar3);
                    local_res18[0] = (__this->fields)._currentTime;
                    pIVar7 = il2cpp_value_box(g_data_184354e38,local_res18);
                    if ((pIVar7 != (Il2CppObject *)0x0) &&
                       (pIVar8 = il2cpp_vm_Object_IsInst(pIVar7,(((parameters->obj).klass)->_1).element_class)
                       , pIVar8 == (Il2CppObject *)0x0)) {
                      pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
                      il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
                    }
                    if (5 < (uint)parameters->max_length) {
                      parameters->m_Items[5] = pIVar7;
                      Il2CppCodeGenWriteBarrier(parameters->m_Items + 5,pIVar7);
                      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
                        Photon_Pun_PhotonView__RPC
                                  (__this_00,"SetWeatherRPC",1,parameters,(MethodInfo *)0x0);
                        return;
                      }
                      goto label_181db8604;
                    }
                  }
                }
              }
              goto label_181db866a;
            }
          }
        }
      }
    }
  }
label_181db8604:
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$OnPlayerEnteredRoom
// il2cpp: void Weather_WeatherManager__OnPlayerEnteredRoom (Weather_WeatherManager_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x181db6ae0

void Weather_WeatherManager__OnPlayerEnteredRoom
               (Weather_WeatherManager_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  Settings_WeatherSet_o *pSVar1;
  Utility_Algorithms_CompressionAlgorithm_o *pUVar2;
  System_Collections_Generic_Dictionary_int__float__o *pSVar3;
  bool bVar4;
  System_Object_array *parameters;
  System_String_o *pSVar5;
  System_Byte_array *pSVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *pIVar8;
  float local_res20 [2];
  
  if (Il2CppMethodInitialized_184344940 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SetWeatherRPC");
    Il2CppMethodInitialized_184344940 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,6);
  if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
  }
  pSVar1 = (__this->fields)._currentWeather;
  if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
    pUVar2 = (Utility_Algorithms_CompressionAlgorithm_o *)
             TypeInfo_Utility_DataCompressors->static_fields->Brotli;
    pSVar5 = (*(pSVar1->klass->vtable)._8_SerializeToJsonString.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._8_SerializeToJsonString.method);
    if ((pUVar2 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) &&
       (pSVar6 = Utility_Algorithms_CompressionAlgorithm__CompressString(pUVar2,pSVar5,1,(MethodInfo *)0x0),
       parameters != (System_Object_array *)0x0)) {
      if ((pSVar6 != (System_Byte_array *)0x0) &&
         (pIVar7 = il2cpp_vm_Object_IsInst(&pSVar6->obj,(((parameters->obj).klass)->_1).element_class),
         pIVar7 == (Il2CppObject *)0x0)) {
        pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length == 0) goto label_181db6eae;
      parameters->m_Items[0] = &pSVar6->obj;
      Il2CppCodeGenWriteBarrier(parameters->m_Items,pSVar6);
      pSVar1 = (__this->fields)._startWeather;
      if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
        pUVar2 = (Utility_Algorithms_CompressionAlgorithm_o *)
                 TypeInfo_Utility_DataCompressors->static_fields->Brotli;
        pSVar5 = (*(pSVar1->klass->vtable)._8_SerializeToJsonString.methodPtr)
                           (pSVar1,(pSVar1->klass->vtable)._8_SerializeToJsonString.method);
        if (pUVar2 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
          pSVar6 = Utility_Algorithms_CompressionAlgorithm__CompressString(pUVar2,pSVar5,1,(MethodInfo *)0x0);
          if ((pSVar6 != (System_Byte_array *)0x0) &&
             (pIVar7 = il2cpp_vm_Object_IsInst(&pSVar6->obj,(((parameters->obj).klass)->_1).element_class),
             pIVar7 == (Il2CppObject *)0x0)) {
            pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
          }
          if ((uint)parameters->max_length < 2) {
label_181db6eae:
            ThrowIndexOutOfRangeException();
          }
          parameters->m_Items[1] = &pSVar6->obj;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pSVar6);
          pSVar1 = (__this->fields)._targetWeather;
          if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
            pUVar2 = (Utility_Algorithms_CompressionAlgorithm_o *)
                     TypeInfo_Utility_DataCompressors->static_fields->Brotli;
            pSVar5 = (*(pSVar1->klass->vtable)._8_SerializeToJsonString.methodPtr)
                               (pSVar1,(pSVar1->klass->vtable)._8_SerializeToJsonString.method);
            if (pUVar2 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
              pSVar6 = Utility_Algorithms_CompressionAlgorithm__CompressString
                                 (pUVar2,pSVar5,1,(MethodInfo *)0x0);
              if ((pSVar6 != (System_Byte_array *)0x0) &&
                 (pIVar7 = il2cpp_vm_Object_IsInst(&pSVar6->obj,(((parameters->obj).klass)->_1).element_class)
                 , pIVar7 == (Il2CppObject *)0x0)) {
                pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
              }
              if (2 < (uint)parameters->max_length) {
                parameters->m_Items[2] = &pSVar6->obj;
                Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,pSVar6);
                pSVar3 = (__this->fields)._targetWeatherStartTimes;
                if ((pSVar3 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) &&
                   (pIVar7 = il2cpp_vm_Object_IsInst
                                       ((Il2CppObject *)pSVar3,(((parameters->obj).klass)->_1).element_class),
                   pIVar7 == (Il2CppObject *)0x0)) {
                  pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
                }
                if (3 < (uint)parameters->max_length) {
                  parameters->m_Items[3] = (Il2CppObject *)pSVar3;
                  Il2CppCodeGenWriteBarrier(parameters->m_Items + 3,pSVar3);
                  pSVar3 = (__this->fields)._targetWeatherEndTimes;
                  if ((pSVar3 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) &&
                     (pIVar7 = il2cpp_vm_Object_IsInst
                                         ((Il2CppObject *)pSVar3,(((parameters->obj).klass)->_1).element_class
                                         ), pIVar7 == (Il2CppObject *)0x0)) {
                    pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
                  }
                  if (4 < (uint)parameters->max_length) {
                    parameters->m_Items[4] = (Il2CppObject *)pSVar3;
                    Il2CppCodeGenWriteBarrier(parameters->m_Items + 4,pSVar3);
                    local_res20[0] = (__this->fields)._currentTime;
                    pIVar7 = il2cpp_value_box(g_data_184354e38,local_res20);
                    if ((pIVar7 != (Il2CppObject *)0x0) &&
                       (pIVar8 = il2cpp_vm_Object_IsInst(pIVar7,(((parameters->obj).klass)->_1).element_class)
                       , pIVar8 == (Il2CppObject *)0x0)) {
                      pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
                      il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
                    }
                    if (5 < (uint)parameters->max_length) {
                      parameters->m_Items[5] = pIVar7;
                      Il2CppCodeGenWriteBarrier(parameters->m_Items + 5,pIVar7);
                      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
                        Photon_Pun_PhotonView__RPC_1d4d8d0
                                  (__this_00,"SetWeatherRPC",player,parameters,(MethodInfo *)0x0);
                        return;
                      }
                      goto label_181db6e48;
                    }
                  }
                }
              }
              goto label_181db6eae;
            }
          }
        }
      }
    }
  }
label_181db6e48:
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$LerpCurrentWeatherToTarget
// il2cpp: void Weather_WeatherManager__LerpCurrentWeatherToTarget (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x181db5aa0
// eh: try 0x181db5cef..0x181db5f0c -> pad 0x1833245a0 catch Il2CppExceptionWrapper
// eh: try 0x181db5f0c..0x181db5f50 -> pad 0x1801ac6d0 cleanup
// eh: try 0x181db5f50..0x181db65a2 -> pad 0x1833245a0 (+3 call sites) catch Il2CppExceptionWrapper
// eh: try 0x181db65b0..0x181db65f4 -> pad 0x1801ac6d0 cleanup
// asm: 40 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181db5cfc: nop dword ptr [rax]
// asm:   0x181db5d80: jmp 0x181db5da1
// asm:   0x181db637b: mov rdx, qword ptr [rip + 0x22faee6]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_float_Dispose
// asm:   0x181db6382: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181db6387: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181db638c: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181db6391: test rcx, rcx
// asm:   0x181db6394: jne 0x181db6591
// asm:   0x181db639a: mov r13, qword ptr [rsp + 0x130]
// asm:   0x181db63a2: mov r12, qword ptr [rsp + 0x148]
// asm:   0x181db6452: mov rdx, qword ptr [rip + 0x22d1e8f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x181db6459: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181db645e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181db6463: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181db6468: test rcx, rcx
// asm:   0x181db646b: jne 0x181db65a2
// asm:   0x181db6591: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181db65a2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833245a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833245a5: push rbp
// asm:   0x1833245a6: sub rsp, 0x20
// asm:   0x1833245aa: mov rbp, rdx
// asm:   0x1833245ad: mov rax, qword ptr [rbp + 0x98]
// asm:   0x1833245b4: mov rcx, qword ptr [rax]
// asm:   0x1833245b7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x1833245bb: movabs rax, 0
// asm:   0x1833245c5: add rsp, 0x20
// asm:   0x1833245c9: pop rbp
// asm:   0x1833245ca: ret 
// asm:   0x18333bd70: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333bd75: push rbp
// asm:   0x18333bd76: sub rsp, 0x20
// asm:   0x18333bd7a: mov rbp, rdx
// asm:   0x18333bd7d: mov rax, qword ptr [rbp + 0xa0]
// asm:   0x18333bd84: mov rcx, qword ptr [rax]
// asm:   0x18333bd87: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18333bd8b: movabs rax, 0
// asm:   0x18333bd95: add rsp, 0x20
// asm:   0x18333bd99: pop rbp
// asm:   0x18333bd9a: ret 

void Weather_WeatherManager__LerpCurrentWeatherToTarget(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  System_Collections_Generic_Dictionary_uint__int__o *__this_00;
  System_Collections_Generic_Dictionary_int__float__o *pSVar3;
  Settings_WeatherSet_o *pSVar4;
  System_Collections_Specialized_OrderedDictionary_o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  System_Collections_Generic_List_WeatherEffect__o *pSVar8;
  Il2CppObject *pIVar9;
  bool bVar10;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_01;
  System_String_o *key;
  Il2CppObject *pIVar11;
  Settings_TypedSetting_Vector3__o *__this_02;
  Il2CppObject *pIVar12;
  UnityEngine_Material_o *__this_03;
  Utility_Color255_o *value;
  int32_t iVar13;
  float fVar14;
  float fStackX_1c;
  UnityEngine_Vector3_o local_f8;
  undefined1 local_e8 [16];
  int32_t local_d8;
  undefined4 uStack_d4;
  Il2CppObject *pIStack_d0;
  undefined1 local_c8 [8];
  uint64_t uStack_c0;
  Il2CppObject *local_b8;
  undefined1 local_b0 [8];
  undefined1 *puStack_a8;
  Il2CppObject *local_a0;
  Il2CppObject *pIStack_98;
  
  if (Il2CppMethodInitialized_184344941 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_float_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_float_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_float_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_float_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherEffect_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_Vector3Setting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_184344941 = '\x01';
  }
  local_b0 = (undefined1  [8])0x0;
  puStack_a8 = (undefined1 *)0x0;
  local_a0 = (Il2CppObject *)0x0;
  pIStack_98 = (Il2CppObject *)0x0;
  local_c8 = (undefined1  [8])0x0;
  uStack_c0 = 0;
  local_b8 = (Il2CppObject *)0x0;
  __this_01 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  __this_00 = (System_Collections_Generic_Dictionary_uint__int__o *)(__this->fields)._targetWeatherEndTimes;
  if (__this_00 != (System_Collections_Generic_Dictionary_uint__int__o *)0x0) {
    System_Collections_Generic_Dictionary_uint__int___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_e8,__this_00,
               (MethodInfo_13E5010 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_GetEnumerator)
    ;
    local_b0 = (undefined1  [8])local_e8._0_8_;
    puStack_a8 = (undefined1 *)local_e8._8_8_;
    local_a0 = (Il2CppObject *)CONCAT44(uStack_d4,local_d8);
    pIStack_98 = pIStack_d0;
    while (bVar10 = System_Collections_Generic_Dictionary_Enumerator_Int32Enum__float___MoveNext
                              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_b0,
                               (MethodInfo_1564AA0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_float_MoveNext)
          , pIVar9 = local_a0, bVar10) {
      fStackX_1c = (float)((ulonglong)local_a0 >> 0x20);
      iVar13 = (int32_t)local_a0;
      if (fStackX_1c <= (__this->fields)._currentTime) {
        if (__this_01 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180026690(__this_01);
label_181db5da1:
        fStackX_1c = 1.0;
      }
      else {
        pSVar3 = (__this->fields)._targetWeatherStartTimes;
        if (pSVar3 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar14 = System_Collections_Generic_Dictionary_int__float___get_Item
                           (pSVar3,iVar13,
                            (MethodInfo_1423460 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_float_get_Item);
        fStackX_1c = fStackX_1c - fVar14;
        if (fStackX_1c <= 1.0) {
          fStackX_1c = 1.0;
        }
        fStackX_1c = ((__this->fields)._currentTime - fVar14) / fStackX_1c;
        if (fStackX_1c < 0.0) {
          fStackX_1c = 0.0;
        }
        else if (1.0 < fStackX_1c) goto label_181db5da1;
      }
      local_e8._0_8_ = TypeInfo_Weather_WeatherEffect;
      local_e8._8_8_ = &g_data_ffffffffffffffff;
      local_d8 = iVar13;
      key = System_Enum__ToString((System_Enum_o *)local_e8,(MethodInfo *)0x0);
      pSVar4 = (__this->fields)._startWeather;
      if (pSVar4 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar5 = (pSVar4->fields).Settings;
      if (pSVar5 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar11 = System_Collections_Specialized_OrderedDictionary__get_Item
                          (pSVar5,(Il2CppObject *)key,(MethodInfo *)0x0);
      if (pIVar11 != (Il2CppObject *)0x0) {
        bVar2 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
        if (((pIVar11->klass->_2).typeHierarchyDepth < bVar2) ||
           ((pIVar11->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar11);
        }
      }
      pSVar4 = (__this->fields)._currentWeather;
      if (pSVar4 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar5 = (pSVar4->fields).Settings;
      if (pSVar5 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_02 = (Settings_TypedSetting_Vector3__o *)
                  System_Collections_Specialized_OrderedDictionary__get_Item
                            (pSVar5,(Il2CppObject *)key,(MethodInfo *)0x0);
      if (__this_02 != (Settings_TypedSetting_Vector3__o *)0x0) {
        bVar2 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
        if (((__this_02->klass->_2).typeHierarchyDepth < bVar2) ||
           ((__this_02->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_02);
        }
      }
      pSVar4 = (__this->fields)._targetWeather;
      if (pSVar4 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar5 = (pSVar4->fields).Settings;
      if (pSVar5 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar12 = System_Collections_Specialized_OrderedDictionary__get_Item
                          (pSVar5,(Il2CppObject *)key,(MethodInfo *)0x0);
      if (pIVar12 != (Il2CppObject *)0x0) {
        bVar2 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
        if (((pIVar12->klass->_2).typeHierarchyDepth < bVar2) ||
           ((pIVar12->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar12);
        }
      }
      switch(iVar13) {
      case 1:
      case 4:
      case 6:
      case 7:
      case 9:
        if (pIVar11 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        bVar2 = (TypeInfo_Settings_ColorSetting->_2).typeHierarchyDepth;
        if (((pIVar11->klass->_2).typeHierarchyDepth < bVar2) ||
           ((pIVar11->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_ColorSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar11,TypeInfo_Settings_ColorSetting);
        }
        if (pIVar12 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        bVar2 = (TypeInfo_Settings_ColorSetting->_2).typeHierarchyDepth;
        if (((pIVar12->klass->_2).typeHierarchyDepth < bVar2) ||
           ((pIVar12->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_ColorSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar12,TypeInfo_Settings_ColorSetting);
        }
        value = Utility_Color255__Lerp
                          ((Utility_Color255_o *)pIVar11[2].klass,(Utility_Color255_o *)pIVar12[2].klass,
                           fStackX_1c,(MethodInfo *)0x0);
        if (__this_02 == (Settings_TypedSetting_Vector3__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar2 = (TypeInfo_Settings_ColorSetting->_2).typeHierarchyDepth;
        if (((__this_02->klass->_2).typeHierarchyDepth < bVar2) ||
           ((__this_02->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_ColorSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_02);
        }
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_02,(Il2CppObject *)value,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
        break;
      case 2:
      case 8:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xf:
      case 0x10:
      case 0x11:
        if (pIVar11 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        if (((pIVar11->klass->_2).typeHierarchyDepth < bVar2) ||
           ((pIVar11->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar11);
        }
        if (pIVar12 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        if (((pIVar12->klass->_2).typeHierarchyDepth < bVar2) ||
           ((pIVar12->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar12);
        }
        fVar14 = *(float *)((longlong)&pIVar11[1].monitor + 4);
        if (fStackX_1c < 0.0) {
          fStackX_1c = 0.0;
        }
        else if (1.0 < fStackX_1c) {
          fStackX_1c = 1.0;
        }
        if (__this_02 == (Settings_TypedSetting_Vector3__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        if (((__this_02->klass->_2).typeHierarchyDepth < bVar2) ||
           ((__this_02->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_02);
        }
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)__this_02,
                   fVar14 + (*(float *)((longlong)&pIVar12[1].monitor + 4) - fVar14) * fStackX_1c,
                   (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
        break;
      case 3:
      case 0xe:
        if (pIVar11 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        bVar2 = (TypeInfo_Settings_Vector3Setting->_2).typeHierarchyDepth;
        if (((pIVar11->klass->_2).typeHierarchyDepth < bVar2) ||
           ((pIVar11->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_Vector3Setting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar11);
        }
        if (pIVar12 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        bVar2 = (TypeInfo_Settings_Vector3Setting->_2).typeHierarchyDepth;
        if (((pIVar12->klass->_2).typeHierarchyDepth < bVar2) ||
           ((pIVar12->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_Vector3Setting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar12);
        }
        fVar14 = *(float *)((longlong)&pIVar11[2].klass + 4);
        fVar1 = *(float *)((longlong)&pIVar11[2].monitor + 4);
        if (fStackX_1c < 0.0) {
          fStackX_1c = 0.0;
        }
        else if (1.0 < fStackX_1c) {
          fStackX_1c = 1.0;
        }
        if (__this_02 == (Settings_TypedSetting_Vector3__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar2 = (TypeInfo_Settings_Vector3Setting->_2).typeHierarchyDepth;
        if (((__this_02->klass->_2).typeHierarchyDepth < bVar2) ||
           ((__this_02->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_Vector3Setting)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_02);
        }
        local_f8.fields.x = (*(float *)((longlong)&pIVar12[2].klass + 4) - fVar14) * fStackX_1c + fVar14;
        local_f8.fields.y =
             (*(float *)&pIVar12[2].monitor - *(float *)&pIVar11[2].monitor) * fStackX_1c +
             *(float *)&pIVar11[2].monitor;
        local_f8.fields.z = (*(float *)((longlong)&pIVar12[2].monitor + 4) - fVar1) * fStackX_1c + fVar1;
        Settings_TypedSetting_Vector3___set_Value
                  (__this_02,&local_f8,(MethodInfo_E8F4F0 *)MethodInfo_Settings_TypedSetting_Vector3_set_Value
                  );
        break;
      case 5:
        pSVar4 = (__this->fields)._currentWeather;
        if (pSVar4 == (Settings_WeatherSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar6 = (pSVar4->fields).Skybox;
        if (pSVar6 == (Settings_StringSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar4 = (__this->fields)._targetWeather;
        if (pSVar4 == (Settings_WeatherSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar7 = (pSVar4->fields).Skybox;
        if (pSVar7 == (Settings_StringSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_03 = Weather_WeatherManager__GetBlendedSkybox
                              (__this,(pSVar6->fields)._value,(pSVar7->fields)._value,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar10 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar10) {
          if (1.0 <= fStackX_1c) {
            if (pIVar12 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
            if (((pIVar12->klass->_2).typeHierarchyDepth < bVar2) ||
               ((pIVar12->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar12);
            }
            if (__this_02 == (Settings_TypedSetting_Vector3__o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
            if (((__this_02->klass->_2).typeHierarchyDepth < bVar2) ||
               ((__this_02->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
              il2cpp_codegen_raise_invalid_cast_exception(__this_02);
            }
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)__this_02,(Il2CppObject *)pIVar12[2].klass,
                       (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          }
          if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
          }
          if (Il2CppMethodInitialized_184344934 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"_Blend");
            Il2CppMethodInitialized_184344934 = '\x01';
          }
          if (__this_03 == (UnityEngine_Material_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_Material__SetFloat(__this_03,"_Blend",fStackX_1c,(MethodInfo *)0x0);
        }
      }
      pSVar8 = (__this->fields)._needApply;
      if (pSVar8 == (System_Collections_Generic_List_WeatherEffect__o *)0x0) {
        ThrowNullReferenceException();
      }
      il2cpp_runtime_helper_180039440(pSVar8,(ulonglong)pIVar9 & 0xffffffff,
                    MethodInfo_System_Collections_Generic_List_WeatherEffect_Add);
    }
    System_Collections_Generic_Dictionary_Enumerator_int__float___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_b0,
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_float_Dispose);
    if (__this_01 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
      System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_e8,__this_01,
                 (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
      local_c8 = (undefined1  [8])local_e8._0_8_;
      uStack_c0 = local_e8._8_8_;
      local_b8 = (Il2CppObject *)CONCAT44(uStack_d4,local_d8);
      while( true ) {
        bVar10 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                           ((System_Collections_Generic_List_Enumerator_T__o *)local_c8,
                            (MethodInfo_1530180 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
        if (!bVar10) {
          System_Collections_Generic_List_Enumerator_int___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_c8,
                     MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
          return;
        }
        pSVar3 = (__this->fields)._targetWeatherStartTimes;
        if (pSVar3 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) break;
        iVar13 = (int32_t)local_b8;
        System_Collections_Generic_Dictionary_int__float___Remove
                  (pSVar3,(int32_t)local_b8,
                   (MethodInfo_140B8F0 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_Remove);
        pSVar3 = (__this->fields)._targetWeatherEndTimes;
        if (pSVar3 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Dictionary_int__float___Remove
                  (pSVar3,iVar13,
                   (MethodInfo_140B8F0 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_Remove);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$ApplyCurrentWeather
// il2cpp: void Weather_WeatherManager__ApplyCurrentWeather (Weather_WeatherManager_o* __this, bool firstStart, bool applyAll, const MethodInfo* method);
// 0x181db2b50
// eh: try 0x181db2e3b..0x181db2eec -> pad 0x18333bd10 catch Il2CppExceptionWrapper
// eh: try 0x181db2eec..0x181db2f01 -> pad 0x1803531b0 cleanup
// eh: try 0x181db2f01..0x181db3d45 -> pad 0x18333bd10 (+13 call sites) catch Il2CppExceptionWrapper
// asm: 233 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181db2fe9: mov rdx, qword ptr [rip + 0x22d7518]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Light_Dispose
// asm:   0x181db2ff0: mov rcx, qword ptr [rsp + 0x98]
// asm:   0x181db2ff8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181db2ffd: mov rcx, qword ptr [rsp + 0x90]
// asm:   0x181db3005: test rcx, rcx
// asm:   0x181db3008: jne 0x181db3bcd
// asm:   0x181db300e: lea r14, [rip - 0x1db3015]
// asm:   0x181db3015: mov rsi, qword ptr [rsp + 0x210]
// asm:   0x181db301d: movss xmm7, dword ptr [rip + 0x15a5bdb]
// asm:   0x181db3025: xorps xmm8, xmm8
// asm:   0x181db3029: movss xmm11, dword ptr [rip + 0x15a5bd6]
// asm:   0x181db3032: movss xmm12, dword ptr [rip + 0x15a5b45]
// asm:   0x181db303b: movss xmm10, dword ptr [rip + 0x168cbd8]
// asm:   0x181db3044: movss xmm9, dword ptr [rip + 0x15a5bab]
// asm:   0x181db304d: mov rax, qword ptr [rip + 0x230d094]  ; TypeInfo_Map_MapLoader
// asm:   0x181db3054: cmp dword ptr [rax + 0xe4], 0
// asm:   0x181db305b: jne 0x181db306c
// asm:   0x181db305d: mov rcx, rax
// asm:   0x181db3060: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x181db3065: mov rax, qword ptr [rip + 0x230d07c]  ; TypeInfo_Map_MapLoader
// asm:   0x181db306c: mov rax, qword ptr [rax + 0xb8]
// asm:   0x181db3073: mov rdx, qword ptr [rax + 0x30]
// asm:   0x181db3077: test rdx, rdx
// asm:   0x181db307a: je 0x181db3bed
// asm:   0x181db3080: mov r8, qword ptr [rip + 0x2306801]  ; MethodInfo_System_Collections_Generic_List_Light_GetEnumerator
// asm:   0x181db3087: lea rcx, [rsp + 0x20]
// asm:   0x181db308c: call 0x18091f180  ; System_Collections_Generic_List_Nullable_int____GetEnumerator()
// asm:   0x181db3091: movups xmm0, xmmword ptr [rsp + 0x20]
// asm:   0x181db3096: movups xmmword ptr [rsp + 0x40], xmm0
// asm:   0x181db309b: movsd xmm1, qword ptr [rsp + 0x30]
// asm:   0x181db30a1: movsd qword ptr [rsp + 0x50], xmm1
// asm:   0x181db30a7: mov qword ptr [rsp + 0xa0], 0
// asm:   0x181db30b3: lea rbx, [rsp + 0x40]
// asm:   0x181db30b8: mov qword ptr [rsp + 0xa8], rbx
// asm:   0x181db30c0: mov rdx, qword ptr [rip + 0x22d7521]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Light_MoveNext
// asm:   0x181db30c7: lea rcx, [rsp + 0x40]
// asm:   0x181db30cc: call 0x18153a2a0  ; System_Collections_Generic_List_Enumerator_object___MoveNext()
// asm:   0x181db30d1: test al, al
// asm:   0x181db30d3: je 0x181db310c
// asm:   0x181db30d5: mov rax, qword ptr [rsi + 0x48]
// asm:   0x181db30d9: test rax, rax
// asm:   0x181db30dc: je 0x181db3be2
// asm:   0x181db30e2: mov rdx, qword ptr [rax + 0x60]
// asm:   0x181db30e6: test rdx, rdx
// asm:   0x181db30e9: je 0x181db3bdd
// asm:   0x181db30ef: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181db30f4: test rcx, rcx
// asm:   0x181db30f7: je 0x181db3bd8
// asm:   0x181db30fd: xor r8d, r8d
// asm:   0x181db3100: movss xmm1, dword ptr [rdx + 0x1c]
// asm:   0x181db3105: call 0x182edcf80  ; UnityEngine_Light__set_intensity()
// asm:   0x181db310a: jmp 0x181db30c0
// asm:   0x181db310c: mov rdx, qword ptr [rip + 0x22d73f5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Light_Dispose
// asm:   0x181db3113: mov rcx, rbx
// asm:   0x181db3116: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181db311b: jmp 0x181db32c2
// asm:   0x181db3120: mov rdx, qword ptr [rip + 0x22d73e1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Light_Dispose
// asm:   0x181db3127: mov rcx, qword ptr [rsp + 0xa8]
// asm:   0x181db312f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181db3134: mov rcx, qword ptr [rsp + 0xa0]
// asm:   0x181db313c: test rcx, rcx
// asm:   0x181db313f: jne 0x181db3be8
// asm:   0x181db3145: lea r14, [rip - 0x1db314c]
// asm:   0x181db314c: mov rsi, qword ptr [rsp + 0x210]
// asm:   0x181db3154: movss xmm7, dword ptr [rip + 0x15a5aa4]
// asm:   0x181db315c: xorps xmm8, xmm8
// asm:   0x181db3160: movss xmm11, dword ptr [rip + 0x15a5a9f]
// asm:   0x181db3169: movss xmm12, dword ptr [rip + 0x15a5a0e]
// asm:   0x181db3172: movss xmm10, dword ptr [rip + 0x168caa1]
// asm:   0x181db317b: movss xmm9, dword ptr [rip + 0x15a5a74]
// asm:   0x181db3184: mov rax, qword ptr [rip + 0x230cf5d]  ; TypeInfo_Map_MapLoader
// asm:   0x181db318b: cmp dword ptr [rax + 0xe4], 0
// asm:   0x181db3192: jne 0x181db31a3
// asm:   0x181db3194: mov rcx, rax
// asm:   0x181db3197: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x181db319c: mov rax, qword ptr [rip + 0x230cf45]  ; TypeInfo_Map_MapLoader
// asm:   0x181db31a3: mov rax, qword ptr [rax + 0xb8]
// asm:   0x181db31aa: mov rdx, qword ptr [rax + 0x30]
// asm:   0x181db31ae: test rdx, rdx
// asm:   0x181db31b1: je 0x181db3c0d
// asm:   0x181db31b7: mov r8, qword ptr [rip + 0x23066ca]  ; MethodInfo_System_Collections_Generic_List_Light_GetEnumerator
// asm:   0x181db31be: lea rcx, [rsp + 0x20]
// asm:   0x181db31c3: call 0x18091f180  ; System_Collections_Generic_List_Nullable_int____GetEnumerator()
// asm:   0x181db31c8: movups xmm0, xmmword ptr [rsp + 0x20]
// asm:   0x181db31cd: movups xmmword ptr [rsp + 0x40], xmm0
// asm:   0x181db31d2: movsd xmm1, qword ptr [rsp + 0x30]
// asm:   0x181db31d8: movsd qword ptr [rsp + 0x50], xmm1
// asm:   0x181db31de: mov qword ptr [rsp + 0xb0], 0
// asm:   0x181db31ea: lea rbx, [rsp + 0x40]
// asm:   0x181db31ef: mov qword ptr [rsp + 0xb8], rbx
// asm:   0x181db31f7: nop word ptr [rax + rax]
// asm:   0x181db3200: mov rdx, qword ptr [rip + 0x22d73e1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Light_MoveNext
// asm:   0x181db3207: lea rcx, [rsp + 0x40]
// asm:   0x181db320c: call 0x18153a2a0  ; System_Collections_Generic_List_Enumerator_object___MoveNext()
// asm:   0x181db3211: test al, al
// asm:   0x181db3213: je 0x181db32b3
// asm:   0x181db3219: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181db321e: test rcx, rcx
// asm:   0x181db3221: je 0x181db3c02
// asm:   0x181db3227: xor edx, edx
// asm:   0x181db3229: call 0x182f14a90  ; UnityEngine_Component__get_transform()
// asm:   0x181db322e: mov rdi, rax
// asm:   0x181db3231: mov rcx, qword ptr [rsi + 0x48]
// asm:   0x181db3235: test rcx, rcx
// asm:   0x181db3238: je 0x181db3bfd
// asm:   0x181db323e: mov rcx, qword ptr [rcx + 0x68]
// asm:   0x181db3242: test rcx, rcx
// asm:   0x181db3245: je 0x181db3bf8
// asm:   0x181db324b: movss xmm0, dword ptr [rcx + 0x24]
// asm:   0x181db3250: mulss xmm0, xmm7
// asm:   0x181db3254: movss dword ptr [rsp + 0x70], xmm0
// asm:   0x181db325a: movss xmm1, dword ptr [rcx + 0x28]
// asm:   0x181db325f: mulss xmm1, xmm7
// asm:   0x181db3263: movss dword ptr [rsp + 0x74], xmm1
// asm:   0x181db3269: movss xmm0, dword ptr [rcx + 0x2c]
// asm:   0x181db326e: mulss xmm0, xmm7
// asm:   0x181db3272: movss dword ptr [rsp + 0x78], xmm0
// asm:   0x181db3278: xor r8d, r8d
// asm:   0x181db327b: lea rdx, [rsp + 0x70]
// asm:   0x181db3280: lea rcx, [rsp + 0x128]
// asm:   0x181db3288: call 0x182f079f0  ; UnityEngine_Quaternion__Internal_FromEulerRad()
// asm:   0x181db328d: test rdi, rdi
// asm:   0x181db3290: je 0x181db3bf3
// asm:   0x181db3296: movups xmm0, xmmword ptr [rax]
// asm:   0x181db3299: movaps xmmword ptr [rsp + 0x20], xmm0
// asm:   0x181db329e: xor r8d, r8d
// asm:   0x181db32a1: lea rdx, [rsp + 0x20]
// asm:   0x181db32a6: mov rcx, rdi
// asm:   0x181db32a9: call 0x182f5c560  ; UnityEngine_Transform__set_rotation()
// asm:   0x181db32ae: jmp 0x181db3200
// asm:   0x181db32b3: mov rdx, qword ptr [rip + 0x22d724e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Light_Dispose
// asm:   0x181db32ba: mov rcx, rbx
// asm:   0x181db32bd: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181db32c2: jmp 0x181db2e80
// asm:   0x181db32c7: mov rdx, qword ptr [rip + 0x22d723a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Light_Dispose
// asm:   0x181db32ce: mov rcx, qword ptr [rsp + 0xb8]
// asm:   0x181db32d6: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181db32db: mov rcx, qword ptr [rsp + 0xb0]
// asm:   0x181db32e3: test rcx, rcx
// asm:   0x181db32e6: jne 0x181db3c08
// asm:   0x181db32ec: lea r14, [rip - 0x1db32f3]
// asm:   0x181db32f3: mov rsi, qword ptr [rsp + 0x210]
// asm:   0x181db32fb: movss xmm7, dword ptr [rip + 0x15a58fd]
// asm:   0x181db3303: xorps xmm8, xmm8
// asm:   0x181db3307: movss xmm11, dword ptr [rip + 0x15a58f8]
// asm:   0x181db3310: movss xmm12, dword ptr [rip + 0x15a5867]
// asm:   0x181db3319: movss xmm10, dword ptr [rip + 0x168c8fa]
// asm:   0x181db3322: movss xmm9, dword ptr [rip + 0x15a58cd]
// asm:   0x181db332b: mov rax, qword ptr [rsi + 0x48]
// asm:   0x181db332f: test rax, rax
// asm:   0x181db3332: je 0x181db3c1c
// asm:   0x181db3338: mov rcx, qword ptr [rax + 0x70]
// asm:   0x181db333c: test rcx, rcx
// asm:   0x181db333f: je 0x181db3c17
// asm:   0x181db3345: mov rdx, qword ptr [rcx + 0x20]
// asm:   0x181db3349: test rdx, rdx
// asm:   0x181db334c: je 0x181db3c12
// asm:   0x181db3352: xor r8d, r8d
// asm:   0x181db3355: lea rcx, [rsp + 0x138]
// asm:   0x181db335d: call 0x1823326d0  ; Utility_Color255__ToColor()
// asm:   0x181db3362: movups xmm0, xmmword ptr [rax]
// asm:   0x181db3365: movaps xmmword ptr [rsp + 0x20], xmm0
// asm:   0x181db336a: xor edx, edx
// asm:   0x181db336c: lea rcx, [rsp + 0x20]
// asm:   0x181db3371: call 0x182eef9e0  ; UnityEngine_RenderSettings__set_ambientLight()
// asm:   0x181db3376: jmp 0x181db2e80
// asm:   0x181db3b3b: mov rdx, qword ptr [rip + 0x22ea966]  ; MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEffect_Dispose
// asm:   0x181db3b42: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x181db3b47: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181db3b4c: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x181db3b51: test rcx, rcx
// asm:   0x181db3b54: jne 0x181db3d45
// asm:   0x181db3b5a: mov rsi, qword ptr [rsp + 0x210]
// asm:   0x181db3bcd: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181db3bd8: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x181db3bdd: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x181db3be2: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x181db3be8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181db3bed: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x181db3bf3: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x181db3bf8: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x181db3bfd: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x181db3c02: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x181db3c08: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181db3c0d: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x181db3c12: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x181db3c17: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x181db3c1c: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x181db3d45: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333bc80: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333bc85: push rbp
// asm:   0x18333bc86: sub rsp, 0x20
// asm:   0x18333bc8a: mov rbp, rdx
// asm:   0x18333bc8d: mov rax, qword ptr [rbp + 0xf8]
// asm:   0x18333bc94: mov rcx, qword ptr [rax]
// asm:   0x18333bc97: mov qword ptr [rbp + 0x90], rcx
// asm:   0x18333bc9e: movabs rax, 0
// asm:   0x18333bca8: add rsp, 0x20
// asm:   0x18333bcac: pop rbp
// asm:   0x18333bcad: ret 
// asm:   0x18333bcb0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333bcb5: push rbp
// asm:   0x18333bcb6: sub rsp, 0x20
// asm:   0x18333bcba: mov rbp, rdx
// asm:   0x18333bcbd: mov rax, qword ptr [rbp + 0x100]
// asm:   0x18333bcc4: mov rcx, qword ptr [rax]
// asm:   0x18333bcc7: mov qword ptr [rbp + 0xa0], rcx
// asm:   0x18333bcce: movabs rax, 0
// asm:   0x18333bcd8: add rsp, 0x20
// asm:   0x18333bcdc: pop rbp
// asm:   0x18333bcdd: ret 
// asm:   0x18333bce0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333bce5: push rbp
// asm:   0x18333bce6: sub rsp, 0x20
// asm:   0x18333bcea: mov rbp, rdx
// asm:   0x18333bced: mov rax, qword ptr [rbp + 0x108]
// asm:   0x18333bcf4: mov rcx, qword ptr [rax]
// asm:   0x18333bcf7: mov qword ptr [rbp + 0xb0], rcx
// asm:   0x18333bcfe: movabs rax, 0
// asm:   0x18333bd08: add rsp, 0x20
// asm:   0x18333bd0c: pop rbp
// asm:   0x18333bd0d: ret 
// asm:   0x18333bd10: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333bd15: push rbp
// asm:   0x18333bd16: sub rsp, 0x20
// asm:   0x18333bd1a: mov rbp, rdx
// asm:   0x18333bd1d: mov rax, qword ptr [rbp + 0x110]
// asm:   0x18333bd24: mov rcx, qword ptr [rax]
// asm:   0x18333bd27: mov qword ptr [rbp + 0x60], rcx
// asm:   0x18333bd2b: movabs rax, 0
// asm:   0x18333bd35: add rsp, 0x20
// asm:   0x18333bd39: pop rbp
// asm:   0x18333bd3a: ret 

void Weather_WeatherManager__ApplyCurrentWeather
               (Weather_WeatherManager_o *__this,bool firstStart,bool applyAll,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  byte bVar5;
  Settings_GraphicsSettings_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_00;
  System_Collections_Generic_HashSet_WeatherEffect__o *__this_01;
  System_Collections_Generic_List_Light__o *pSVar8;
  Settings_StringSetting_o *pSVar9;
  Settings_StringSetting_o *pSVar10;
  Settings_ColorSetting_o *pSVar11;
  Utility_Color255_o *pUVar12;
  System_Collections_Specialized_OrderedDictionary_o *__this_02;
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *pSVar13;
  Weather_BaseWeatherEffect_c *pWVar14;
  Settings_Vector3Setting_o *pSVar15;
  UnityEngine_Vector3_StaticFields *pUVar16;
  Weather_WindWeatherEffect_StaticFields *pWVar17;
  Settings_WeatherSet_o *pSVar18;
  Settings_FloatSetting_o *pSVar19;
  Weather_WeatherManager_o *pWVar20;
  System_Collections_Generic_List_WeatherEffect__o *pSVar21;
  UnityEngine_Light_o *__this_03;
  int32_t key;
  bool bVar22;
  System_Collections_Generic_List_T__o *value;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_Quaternion_o *pUVar23;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Material_o *__this_05;
  UnityEngine_Color_o *pUVar24;
  System_String_o *key_00;
  Il2CppObject *pIVar25;
  Weather_BaseWeatherEffect_o *pWVar26;
  UnityEngine_GameObject_o *pUVar27;
  float fVar28;
  float fVar29;
  undefined1 local_1e8 [16];
  int32_t local_1d8;
  undefined4 uStack_1d4;
  undefined1 local_1c8 [8];
  undefined1 *puStack_1c0;
  UnityEngine_Light_o *local_1b8;
  int32_t local_1b0;
  undefined8 local_1a8;
  System_Collections_Generic_List_Enumerator_T__o *local_1a0;
  UnityEngine_Vector3_o local_198;
  undefined8 local_188;
  float local_180;
  undefined8 local_178;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *local_170;
  undefined8 local_168;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *local_160;
  undefined8 local_158;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *local_150;
  System_Collections_Generic_List_Enumerator_T__o local_148;
  Weather_WeatherManager_o *local_130;
  System_Collections_Generic_List_Enumerator_T__o local_128 [2];
  UnityEngine_Color_o local_f0;
  UnityEngine_Quaternion_o local_e0;
  UnityEngine_Color_o local_d0;
  UnityEngine_Color_o local_c0;
  UnityEngine_Color_o local_b0;
  UnityEngine_Color_o local_a0 [8];
  
  if (Il2CppMethodInitialized_184344942 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEffect_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Light_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEffect_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Light_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Light_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEffect_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_FlashlightWeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_WeatherEffect_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_WeatherEffect_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_WeatherEffect_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Light_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumToList_WeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WindWeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata(&"_Tint");
    Il2CppMethodInitialized_184344942 = '\x01';
  }
  local_148.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_148.fields._index = 0;
  local_148.fields._version = 0;
  local_148.fields._current = (Il2CppObject *)0x0;
  local_1c8 = (undefined1  [8])0x0;
  puStack_1c0 = (undefined1 *)0x0;
  local_1b8 = (UnityEngine_Light_o *)0x0;
  if (!firstStart) {
    if (Il2CppMethodInitialized_184344947 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
      Il2CppMethodInitialized_184344947 = '\x01';
    }
    pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
    if ((pSVar6 == (Settings_GraphicsSettings_o *)0x0) ||
       (pSVar7 = (pSVar6->fields).WeatherEffects, pSVar7 == (Settings_IntSetting_o *)0x0)) goto label_181db3bac;
    if ((pSVar7->fields)._value == 0) {
      return;
    }
  }
  if (applyAll) {
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    value = Utility_Util__EnumToList_Int32Enum_
                      ((MethodInfo_869C70 *)MethodInfo_Utility_Util_EnumToList_WeatherEffect);
    (__this->fields)._needApply = (System_Collections_Generic_List_WeatherEffect__o *)value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._needApply,value);
  }
  pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if (((pSVar6 != (Settings_GraphicsSettings_o *)0x0) &&
      (pSVar7 = (pSVar6->fields).WeatherEffects, pSVar7 != (Settings_IntSetting_o *)0x0)) &&
     (__this_00 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._needApply
     , __this_00 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0)) {
    local_1b0 = (pSVar7->fields)._value;
    local_130 = __this;
    System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
              (local_128,__this_00,
               (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_WeatherEffect_GetEnumerator);
    local_148.fields._list = local_128[0].fields._list;
    local_148.fields._index = local_128[0].fields._index;
    local_148.fields._version = local_128[0].fields._version;
    local_148.fields._current = local_128[0].fields._current;
    local_1a8 = 0;
    local_1a0 = &local_148;
switchD_181db2eec_default:
    bVar22 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                       (&local_148,
                        (MethodInfo_1530180 *)
                        MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEffect_MoveNext);
    if (bVar22) {
      key = (int32_t)local_148.fields._current;
      if ((!firstStart) && (local_1b0 == 1)) goto code_r0x000181db2eb4;
      goto label_181db2ed3;
    }
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_1a0,
               MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEffect_Dispose);
    pSVar21 = (__this->fields)._needApply;
    if (pSVar21 != (System_Collections_Generic_List_WeatherEffect__o *)0x0) {
      piVar1 = &(pSVar21->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar21->fields)._size = 0;
      return;
    }
  }
label_181db3bac:
  ThrowNullReferenceException();
code_r0x000181db2eb4:
  __this_01 = (__this->fields).LowEffects;
  if (__this_01 == (System_Collections_Generic_HashSet_WeatherEffect__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar22 = System_Collections_Generic_HashSet_Int32Enum___Contains
                     ((System_Collections_Generic_HashSet_T__o *)__this_01,(int32_t)local_148.fields._current,
                      (MethodInfo_1759C90 *)
                      MethodInfo_System_Collections_Generic_HashSet_WeatherEffect_Contains);
  if (bVar22) {
label_181db2ed3:
    switch(key) {
    case 1:
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar8 = TypeInfo_Map_MapLoader->static_fields->Daylight;
      if (pSVar8 == (System_Collections_Generic_List_Light__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_1e8,
                 (System_Collections_Generic_List_T__o *)pSVar8,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Light_GetEnumerator);
      local_1c8 = (undefined1  [8])local_1e8._0_8_;
      puStack_1c0 = (undefined1 *)local_1e8._8_8_;
      local_1b8 = (UnityEngine_Light_o *)CONCAT44(uStack_1d4,local_1d8);
      local_178 = 0;
      local_170 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_1c8;
      while (bVar22 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_1c8,
                                 (MethodInfo_153A2A0 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_Light_MoveNext),
            __this_03 = local_1b8, bVar22) {
        pSVar18 = (__this->fields)._currentWeather;
        if (pSVar18 == (Settings_WeatherSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar11 = (pSVar18->fields).Daylight;
        if (pSVar11 == (Settings_ColorSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar12 = (pSVar11->fields)._value;
        if (pUVar12 == (Utility_Color255_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar24 = Utility_Color255__ToColor(&local_f0,pUVar12,(MethodInfo *)0x0);
        if (__this_03 == (UnityEngine_Light_o *)0x0) {
          ThrowNullReferenceException();
        }
        local_1e8._0_8_ = *(undefined8 *)&pUVar24->fields;
        local_1e8._8_8_ = *(undefined8 *)&(pUVar24->fields).b;
        UnityEngine_Light__set_color(__this_03,(UnityEngine_Color_o *)local_1e8,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_1c8,
                 MethodInfo_System_Collections_Generic_List_Enumerator_Light_Dispose);
      break;
    case 2:
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar8 = TypeInfo_Map_MapLoader->static_fields->Daylight;
      if (pSVar8 == (System_Collections_Generic_List_Light__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_1e8,
                 (System_Collections_Generic_List_T__o *)pSVar8,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Light_GetEnumerator);
      local_1c8 = (undefined1  [8])local_1e8._0_8_;
      puStack_1c0 = (undefined1 *)local_1e8._8_8_;
      local_1b8 = (UnityEngine_Light_o *)CONCAT44(uStack_1d4,local_1d8);
      local_168 = 0;
      local_160 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_1c8;
      while (bVar22 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_1c8,
                                 (MethodInfo_153A2A0 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_Light_MoveNext), bVar22
            ) {
        pSVar18 = (__this->fields)._currentWeather;
        if (pSVar18 == (Settings_WeatherSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar19 = (pSVar18->fields).DaylightIntensity;
        if (pSVar19 == (Settings_FloatSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (local_1b8 == (UnityEngine_Light_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_Light__set_intensity(local_1b8,(pSVar19->fields)._value,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_1c8,
                 MethodInfo_System_Collections_Generic_List_Enumerator_Light_Dispose);
      break;
    case 3:
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar8 = TypeInfo_Map_MapLoader->static_fields->Daylight;
      if (pSVar8 == (System_Collections_Generic_List_Light__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_1e8,
                 (System_Collections_Generic_List_T__o *)pSVar8,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Light_GetEnumerator);
      local_1c8 = (undefined1  [8])local_1e8._0_8_;
      puStack_1c0 = (undefined1 *)local_1e8._8_8_;
      local_1b8 = (UnityEngine_Light_o *)CONCAT44(uStack_1d4,local_1d8);
      local_158 = 0;
      local_150 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_1c8;
      while (bVar22 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_1c8,
                                 (MethodInfo_153A2A0 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_Light_MoveNext), bVar22
            ) {
        if (local_1b8 == (UnityEngine_Light_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_04 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)local_1b8,(MethodInfo *)0x0);
        pSVar18 = (__this->fields)._currentWeather;
        if (pSVar18 == (Settings_WeatherSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar15 = (pSVar18->fields).DaylightDirection;
        if (pSVar15 == (Settings_Vector3Setting_o *)0x0) {
          ThrowNullReferenceException();
        }
        local_198.fields.x = (pSVar15->fields)._value.fields.x * 0.017453292;
        local_198.fields.y = (pSVar15->fields)._value.fields.y * 0.017453292;
        local_198.fields.z = (pSVar15->fields)._value.fields.z * 0.017453292;
        pUVar23 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_e0,&local_198,(MethodInfo *)0x0);
        if (__this_04 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        local_1e8._0_8_ = *(undefined8 *)&pUVar23->fields;
        local_1e8._8_8_ = *(undefined8 *)&(pUVar23->fields).z;
        UnityEngine_Transform__set_rotation(__this_04,(UnityEngine_Quaternion_o *)local_1e8,(MethodInfo *)0x0)
        ;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_1c8,
                 MethodInfo_System_Collections_Generic_List_Enumerator_Light_Dispose);
      break;
    case 4:
      pSVar18 = (__this->fields)._currentWeather;
      if (pSVar18 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar11 = (pSVar18->fields).AmbientLight;
      if (pSVar11 == (Settings_ColorSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar12 = (pSVar11->fields)._value;
      if (pUVar12 == (Utility_Color255_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar24 = Utility_Color255__ToColor(&local_d0,pUVar12,(MethodInfo *)0x0);
      local_1e8._0_8_ = *(undefined8 *)&pUVar24->fields;
      local_1e8._8_8_ = *(undefined8 *)&(pUVar24->fields).b;
      UnityEngine_RenderSettings__set_ambientLight((UnityEngine_Color_o *)local_1e8,(MethodInfo *)0x0);
      break;
    case 5:
      routine = Weather_WeatherManager__WaitAndApplySkybox(__this,(MethodInfo *)0x0);
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      break;
    case 6:
      pSVar18 = (__this->fields)._currentWeather;
      if (pSVar18 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar9 = (pSVar18->fields).Skybox;
      if (pSVar9 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar18 = (__this->fields)._targetWeather;
      if (pSVar18 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar10 = (pSVar18->fields).Skybox;
      if (pSVar10 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_05 = Weather_WeatherManager__GetBlendedSkybox
                            (__this,(pSVar9->fields)._value,(pSVar10->fields)._value,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar22 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)__this_05,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar22) {
        pSVar18 = (__this->fields)._currentWeather;
        if (pSVar18 == (Settings_WeatherSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar11 = (pSVar18->fields).SkyboxColor;
        if (pSVar11 == (Settings_ColorSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar12 = (pSVar11->fields)._value;
        if (pUVar12 == (Utility_Color255_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar24 = Utility_Color255__ToColor(&local_c0,pUVar12,(MethodInfo *)0x0);
        if (__this_05 == (UnityEngine_Material_o *)0x0) {
          ThrowNullReferenceException();
        }
        local_1e8._0_8_ = *(undefined8 *)&pUVar24->fields;
        local_1e8._8_8_ = *(undefined8 *)&(pUVar24->fields).b;
        UnityEngine_Material__SetVector
                  (__this_05,"_Tint",(UnityEngine_Vector4_o *)local_1e8,(MethodInfo *)0x0);
      }
      break;
    case 7:
      pSVar13 = (__this->fields)._effects;
      if (pSVar13 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
        ThrowNullReferenceException();
      }
      pWVar26 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13,7,
                           (MethodInfo_1454ED0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                          );
      pSVar18 = (__this->fields)._currentWeather;
      if (pSVar18 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar11 = (pSVar18->fields).Flashlight;
      if (pSVar11 == (Settings_ColorSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar12 = (pSVar11->fields)._value;
      if (pUVar12 == (Utility_Color255_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar24 = Utility_Color255__ToColor(&local_b0,pUVar12,(MethodInfo *)0x0);
      if (pWVar26 == (Weather_BaseWeatherEffect_o *)0x0) {
        ThrowNullReferenceException();
      }
      pWVar14 = pWVar26->klass;
      bVar5 = (TypeInfo_Weather_FlashlightWeatherEffect->_2).typeHierarchyDepth;
      if (((pWVar14->_2).typeHierarchyDepth < bVar5) ||
         ((pWVar14->_2).typeHierarchy[(ulonglong)bVar5 - 1] !=
          (Il2CppClass *)TypeInfo_Weather_FlashlightWeatherEffect)) {
        il2cpp_codegen_raise_invalid_cast_exception(pWVar26);
      }
      local_1e8._0_8_ = *(undefined8 *)&pUVar24->fields;
      local_1e8._8_8_ = *(undefined8 *)&(pUVar24->fields).b;
      (*((Il2CppClass *)pWVar14)->vtable[22].methodPtr)(pWVar26,local_1e8);
      pSVar18 = (__this->fields)._currentWeather;
      if (pSVar18 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar11 = (pSVar18->fields).Flashlight;
      if (pSVar11 == (Settings_ColorSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar12 = (pSVar11->fields)._value;
      if (pUVar12 == (Utility_Color255_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (((pUVar12->fields).A < 1) ||
         (pUVar24 = Utility_Color255__ToColor
                              (local_a0,(((((__this->fields)._currentWeather)->fields).Flashlight)->fields).
                                        _value,(MethodInfo *)0x0), fVar4 = (pUVar24->fields).r - 0.0,
         fVar28 = (pUVar24->fields).g - 0.0, fVar2 = (pUVar24->fields).b - 0.0,
         fVar29 = (pUVar24->fields).a - 1.0,
         fVar29 * fVar29 + fVar2 * fVar2 + fVar28 * fVar28 + fVar4 * fVar4 < 9.9999994e-11)) {
        pSVar13 = (__this->fields)._effects;
        if (pSVar13 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
          ThrowNullReferenceException();
        }
        pWVar26 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13,7,
                             (MethodInfo_1454ED0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                            );
        if (pWVar26 == (Weather_BaseWeatherEffect_o *)0x0) {
          ThrowNullReferenceException();
        }
        (*(pWVar26->klass->vtable)._6_Disable.methodPtr)
                  (pWVar26,false,(pWVar26->klass->vtable)._6_Disable.method);
      }
      else {
        pSVar13 = (__this->fields)._effects;
        if (pSVar13 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
          ThrowNullReferenceException();
        }
        pWVar26 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13,7,
                             (MethodInfo_1454ED0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                            );
        if (pWVar26 == (Weather_BaseWeatherEffect_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pWVar26,(MethodInfo *)0x0);
        if (pUVar27 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar22 = UnityEngine_GameObject__get_activeSelf(pUVar27,(MethodInfo *)0x0);
        if (!bVar22) {
          pSVar13 = (__this->fields)._effects;
          if (pSVar13 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
            ThrowNullReferenceException();
          }
          pWVar26 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13,7,
                               (MethodInfo_1454ED0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                              );
          if (pWVar26 == (Weather_BaseWeatherEffect_o *)0x0) {
            ThrowNullReferenceException();
          }
          (*(pWVar26->klass->vtable)._7_Enable.methodPtr)(pWVar26,(pWVar26->klass->vtable)._7_Enable.method);
        }
      }
      break;
    case 8:
      pSVar18 = (__this->fields)._currentWeather;
      if (pSVar18 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar19 = (pSVar18->fields).FogDensity;
      if (pSVar19 == (Settings_FloatSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (0.0 < (pSVar19->fields)._value) {
        UnityEngine_RenderSettings__set_fog(true,(MethodInfo *)0x0);
        UnityEngine_RenderSettings__set_fogMode(2,(MethodInfo *)0x0);
        pSVar18 = (__this->fields)._currentWeather;
        if (pSVar18 == (Settings_WeatherSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar19 = (pSVar18->fields).FogDensity;
        if (pSVar19 == (Settings_FloatSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_RenderSettings__set_fogDensity((pSVar19->fields)._value * 0.02,(MethodInfo *)0x0);
      }
      else {
        UnityEngine_RenderSettings__set_fog(false,(MethodInfo *)0x0);
      }
      break;
    case 9:
      pSVar18 = (__this->fields)._currentWeather;
      if (pSVar18 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar11 = (pSVar18->fields).FogColor;
      if (pSVar11 == (Settings_ColorSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar12 = (pSVar11->fields)._value;
      if (pUVar12 == (Utility_Color255_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar24 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_128,pUVar12,(MethodInfo *)0x0);
      local_1e8._0_8_ = *(undefined8 *)&pUVar24->fields;
      local_1e8._8_8_ = *(undefined8 *)&(pUVar24->fields).b;
      UnityEngine_RenderSettings__set_fogColor((UnityEngine_Color_o *)local_1e8,(MethodInfo *)0x0);
      break;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      pSVar18 = (__this->fields)._currentWeather;
      if (pSVar18 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_02 = (pSVar18->fields).Settings;
      local_1e8._0_8_ = TypeInfo_Weather_WeatherEffect;
      local_1e8._8_8_ = &g_data_ffffffffffffffff;
      local_1d8 = key;
      key_00 = System_Enum__ToString((System_Enum_o *)local_1e8,(MethodInfo *)0x0);
      if (__this_02 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar25 = System_Collections_Specialized_OrderedDictionary__get_Item
                          (__this_02,(Il2CppObject *)key_00,(MethodInfo *)0x0);
      if (pIVar25 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      bVar5 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if (((pIVar25->klass->_2).typeHierarchyDepth < bVar5) ||
         ((pIVar25->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar25);
      }
      pSVar13 = (__this->fields)._effects;
      if (pSVar13 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
        ThrowNullReferenceException();
      }
      fVar29 = *(float *)((longlong)&pIVar25[1].monitor + 4);
      pWVar26 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13,key,
                           (MethodInfo_1454ED0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                          );
      if (pWVar26 == (Weather_BaseWeatherEffect_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pWVar26->klass->vtable)._10_SetLevel.methodPtr)
                (pWVar26,fVar29,(pWVar26->klass->vtable)._10_SetLevel.method);
      pSVar13 = (local_130->fields)._effects;
      if (0.0 < fVar29) {
        if (pSVar13 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
          ThrowNullReferenceException();
        }
        pWVar26 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13,key,
                             (MethodInfo_1454ED0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                            );
        if (pWVar26 == (Weather_BaseWeatherEffect_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pWVar26,(MethodInfo *)0x0);
        if (pUVar27 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar22 = UnityEngine_GameObject__get_activeSelf(pUVar27,(MethodInfo *)0x0);
        if (!bVar22) {
          pSVar13 = (__this->fields)._effects;
          if (pSVar13 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
            ThrowNullReferenceException();
          }
          pWVar26 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13,key,
                               (MethodInfo_1454ED0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                              );
          if (pWVar26 == (Weather_BaseWeatherEffect_o *)0x0) {
            ThrowNullReferenceException();
          }
          pWVar14 = pWVar26->klass;
          (*(pWVar14->vtable)._8_Randomize.methodPtr)
                    (pWVar26,(System_Type_o *)(pWVar14->vtable)._8_Randomize.method,(MethodInfo *)pWVar14);
          pSVar13 = (__this->fields)._effects;
          if (pSVar13 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
            ThrowNullReferenceException();
          }
          pWVar26 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13,key,
                               (MethodInfo_1454ED0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                              );
          if (pWVar26 == (Weather_BaseWeatherEffect_o *)0x0) {
            ThrowNullReferenceException();
          }
          (*(pWVar26->klass->vtable)._7_Enable.methodPtr)(pWVar26,(pWVar26->klass->vtable)._7_Enable.method);
        }
      }
      else {
        if (pSVar13 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
          ThrowNullReferenceException();
        }
        pWVar26 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13,key,
                             (MethodInfo_1454ED0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                            );
        if (pWVar26 == (Weather_BaseWeatherEffect_o *)0x0) {
          ThrowNullReferenceException();
        }
        (*(pWVar26->klass->vtable)._6_Disable.methodPtr)
                  (pWVar26,true,(pWVar26->klass->vtable)._6_Disable.method);
      }
      break;
    case 0xe:
      pSVar18 = (__this->fields)._currentWeather;
      if (pSVar18 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar15 = (pSVar18->fields).WindDirection;
      if (pSVar15 == (Settings_Vector3Setting_o *)0x0) {
        ThrowNullReferenceException();
      }
      uVar3._0_4_ = (pSVar15->fields)._value.fields.x;
      uVar3._4_4_ = (pSVar15->fields)._value.fields.y;
      fVar29 = (pSVar15->fields)._value.fields.z;
      local_188 = uVar3;
      local_180 = fVar29;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      local_1e8._0_8_ = (System_Enum_c *)0x0;
      local_1e8._8_8_ = local_1e8._8_8_ & 0xffffffff00000000;
      fVar28 = (float)il2cpp_runtime_helper_180546a40(&local_188,0);
      if (fVar28 <= 1e-05) {
        pUVar16 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar2 = (pUVar16->zeroVector).fields.x;
        fVar4 = (pUVar16->zeroVector).fields.y;
        fVar29 = (pUVar16->zeroVector).fields.z;
      }
      else {
        fVar2 = (float)(undefined4)uVar3 / fVar28;
        fVar4 = local_188._4_4_ / fVar28;
        fVar29 = fVar29 / fVar28;
      }
      if ((TypeInfo_Weather_WindWeatherEffect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WindWeatherEffect);
      }
      pWVar17 = TypeInfo_Weather_WindWeatherEffect->static_fields;
      (pWVar17->WindDirection).fields.x = fVar2;
      (pWVar17->WindDirection).fields.y = fVar4;
      (pWVar17->WindDirection).fields.z = fVar29;
      break;
    case 0xf:
      if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      }
      pSVar18 = (__this->fields)._currentWeather;
      if (pSVar18 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar19 = (pSVar18->fields).RainForce;
      if (pSVar19 == (Settings_FloatSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pWVar20 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
      if (pWVar20 == (Weather_WeatherManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      (pWVar20->fields)._currentRainForce = (pSVar19->fields)._value;
      break;
    case 0x10:
      if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      }
      pSVar18 = (__this->fields)._currentWeather;
      if (pSVar18 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar19 = (pSVar18->fields).SnowForce;
      if (pSVar19 == (Settings_FloatSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pWVar20 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
      if (pWVar20 == (Weather_WeatherManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      (pWVar20->fields)._currentSnowForce = (pSVar19->fields)._value;
      break;
    case 0x11:
      if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      }
      pSVar18 = (__this->fields)._currentWeather;
      if (pSVar18 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar19 = (pSVar18->fields).WindForce;
      if (pSVar19 == (Settings_FloatSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pWVar20 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
      if (pWVar20 == (Weather_WeatherManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      (pWVar20->fields)._currentWindForce = (pSVar19->fields)._value;
    }
  }
  goto switchD_181db2eec_default;
}


// Weather.WeatherManager$$WaitAndApplySkybox
// il2cpp: System_Collections_IEnumerator_o* Weather_WeatherManager__WaitAndApplySkybox (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x181db8880

System_Collections_IEnumerator_o *
Weather_WeatherManager__WaitAndApplySkybox(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_184344943 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager_WaitAndApplySkybox_d__52);
    Il2CppMethodInitialized_184344943 = '\x01';
  }
  __this_00 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Weather_WeatherManager_WaitAndApplySkybox_d__52);
  Weather_WeatherManager__WaitAndApplySkybox_d__52___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)0x0) {
    (__this_00->fields).__4__this = (Photon_Pun_UtilityScripts_OnClickRpc_o *)__this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$GetBlendedSkybox
// il2cpp: UnityEngine_Material_o* Weather_WeatherManager__GetBlendedSkybox (Weather_WeatherManager_o* __this, System_String_o* skybox1, System_String_o* skybox2, const MethodInfo* method);
// 0x181db5190

UnityEngine_Material_o *
Weather_WeatherManager__GetBlendedSkybox
          (Weather_WeatherManager_o *__this,System_String_o *skybox1,System_String_o *skybox2,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Dictionary_string__Material___o *__this_00;
  bool bVar1;
  uint16_t uVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_01;
  System_String_array *parts;
  UnityEngine_Material_o *pUVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  
  if (Il2CppMethodInitialized_184344944 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_Util_EnumToStringArray_SkyboxCustomSkinPartId);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    Il2CppMethodInitialized_184344944 = '\x01';
  }
  if (skybox1 != (System_String_o *)0x0) {
    uVar2 = System_String__get_Chars(skybox1,(skybox1->fields)._stringLength + -1,(MethodInfo *)0x0);
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    bVar1 = System_Char__IsDigit(uVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      skybox1 = System_String__Concat_1969e50(skybox1,"1",(MethodInfo *)0x0);
    }
    if (skybox2 != (System_String_o *)0x0) {
      uVar2 = System_String__get_Chars(skybox2,(skybox2->fields)._stringLength + -1,(MethodInfo *)0x0);
      if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e48);
      }
      bVar1 = System_Char__IsDigit(uVar2,(MethodInfo *)0x0);
      if (!bVar1) {
        skybox2 = System_String__Concat_1969e50(skybox2,"1",(MethodInfo *)0x0);
      }
      if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      }
      __this_00 = TypeInfo_Weather_WeatherManager->static_fields->SkyboxBlendedMaterials;
      if (__this_00 != (System_Collections_Generic_Dictionary_string__Dictionary_string__Material___o *)0x0) {
        bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           (Il2CppObject *)skybox1,
                           (MethodInfo_1455450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_ContainsKey
                          );
        if (!bVar1) {
          return (UnityEngine_Material_o *)0x0;
        }
        if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
        }
        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Weather_WeatherManager->static_fields->SkyboxBlendedMaterials;
        if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          __this_01 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                      System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar4,(Il2CppObject *)skybox1,
                                 (MethodInfo_147A5B0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_get_Item
                                );
          if (__this_01 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
            bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                              (__this_01,(Il2CppObject *)skybox2,
                               (MethodInfo_1455450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
            if (!bVar1) {
              if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
              }
              parts = Utility_Util__EnumToStringArray___Il2CppFullySharedGenericType_
                                ((MethodInfo_869FD0 *)
                                 MethodInfo_Utility_Util_EnumToStringArray_SkyboxCustomSkinPartId);
              if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
              }
              pUVar3 = Weather_WeatherManager__CreateBlendedSkybox
                                 (TypeInfo_Weather_WeatherManager->static_fields->_blendedShader,parts,skybox1
                                  ,skybox2,(MethodInfo *)0x0);
              pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_Weather_WeatherManager->static_fields->SkyboxBlendedMaterials;
              if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_181db5493;
              pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                       System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar4,(Il2CppObject *)skybox1,
                                  (MethodInfo_147A5B0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_get_Item
                                 );
              if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_181db5493;
              System_Collections_Generic_Dictionary_object__object___Add
                        (pSVar4,(Il2CppObject *)skybox2,(Il2CppObject *)pUVar3,
                         (MethodInfo_146B4B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_Material_Add);
            }
            if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
            }
            pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                     TypeInfo_Weather_WeatherManager->static_fields->SkyboxBlendedMaterials;
            if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                       System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar4,(Il2CppObject *)skybox1,
                                  (MethodInfo_147A5B0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_get_Item
                                 );
              if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                pUVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                                   (pSVar4,(Il2CppObject *)skybox2,
                                    (MethodInfo_147A5B0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item)
                ;
                return pUVar3;
              }
            }
          }
        }
      }
    }
  }
label_181db5493:
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$OnSetWeatherRPC
// il2cpp: void Weather_WeatherManager__OnSetWeatherRPC (System_Byte_array* currentWeatherJson, System_Byte_array* startWeatherJson, System_Byte_array* targetWeatherJson, System_Collections_Generic_Dictionary_int__float__o* targetWeatherStartTimes, System_Collections_Generic_Dictionary_int__float__o* targetWeatherEndTimes, float currentTime, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181db7210

void Weather_WeatherManager__OnSetWeatherRPC
               (System_Byte_array *currentWeatherJson,System_Byte_array *startWeatherJson,
               System_Byte_array *targetWeatherJson,
               System_Collections_Generic_Dictionary_int__float__o *targetWeatherStartTimes,
               System_Collections_Generic_Dictionary_int__float__o *targetWeatherEndTimes,float currentTime,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Settings_GraphicsSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Weather_WeatherManager_o *__this;
  Photon_Realtime_Player_o *pPVar3;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55_o *__this_00;
  
  if (Il2CppMethodInitialized_184344945 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_184344945 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar3 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  if ((info->fields).Sender == pPVar3) {
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
    if ((pSVar1 != (Settings_GraphicsSettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).WeatherEffects, pSVar2 != (Settings_IntSetting_o *)0x0)) {
      if ((pSVar2->fields)._value == 0) {
        return;
      }
      if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      }
      __this = TypeInfo_Weather_WeatherManager->static_fields->_instance;
      if (__this != (Weather_WeatherManager_o *)0x0) {
        if (Il2CppMethodInitialized_184344946 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Weather_WeatherManager_WaitAndFinishOnSetWeather_d__55);
          Il2CppMethodInitialized_184344946 = '\x01';
        }
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Weather_WeatherManager_WaitAndFinishOnSetWeather_d__55)
        ;
        Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8___ctor
                  ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
        if (__this_00 != (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55_o *)0x0) {
          (__this_00->fields).__4__this = __this;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
          (__this_00->fields).currentWeatherJson = currentWeatherJson;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).currentWeatherJson,currentWeatherJson);
          (__this_00->fields).startWeatherJson = startWeatherJson;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).startWeatherJson,startWeatherJson);
          (__this_00->fields).targetWeatherJson = targetWeatherJson;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).targetWeatherJson,targetWeatherJson);
          (__this_00->fields).targetWeatherStartTimes = targetWeatherStartTimes;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).targetWeatherStartTimes,targetWeatherStartTimes);
          (__this_00->fields).targetWeatherEndTimes = targetWeatherEndTimes;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).targetWeatherEndTimes,targetWeatherEndTimes);
          (__this_00->fields).currentTime = currentTime;
          UnityEngine_MonoBehaviour__StartCoroutine_Auto
                    ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Weather.WeatherManager$$WaitAndFinishOnSetWeather
// il2cpp: System_Collections_IEnumerator_o* Weather_WeatherManager__WaitAndFinishOnSetWeather (Weather_WeatherManager_o* __this, System_Byte_array* currentWeatherJson, System_Byte_array* startWeatherJson, System_Byte_array* targetWeatherJson, System_Collections_Generic_Dictionary_int__float__o* targetWeatherStartTimes, System_Collections_Generic_Dictionary_int__float__o* targetWeatherEndTimes, float currentTime, const MethodInfo* method);
// 0x181db88f0

System_Collections_IEnumerator_o *
Weather_WeatherManager__WaitAndFinishOnSetWeather
          (Weather_WeatherManager_o *__this,System_Byte_array *currentWeatherJson,
          System_Byte_array *startWeatherJson,System_Byte_array *targetWeatherJson,
          System_Collections_Generic_Dictionary_int__float__o *targetWeatherStartTimes,
          System_Collections_Generic_Dictionary_int__float__o *targetWeatherEndTimes,float currentTime,
          MethodInfo *method)

{
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55_o *__this_00;
  
  if (Il2CppMethodInitialized_184344946 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Weather_WeatherManager_WaitAndFinishOnSetWeather_d__55);
    Il2CppMethodInitialized_184344946 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Weather_WeatherManager_WaitAndFinishOnSetWeather_d__55);
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__55_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).currentWeatherJson = currentWeatherJson;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).currentWeatherJson,currentWeatherJson);
    (__this_00->fields).startWeatherJson = startWeatherJson;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).startWeatherJson,startWeatherJson);
    (__this_00->fields).targetWeatherJson = targetWeatherJson;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).targetWeatherJson,targetWeatherJson);
    (__this_00->fields).targetWeatherStartTimes = targetWeatherStartTimes;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).targetWeatherStartTimes,targetWeatherStartTimes);
    (__this_00->fields).targetWeatherEndTimes = targetWeatherEndTimes;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).targetWeatherEndTimes,targetWeatherEndTimes);
    (__this_00->fields).currentTime = currentTime;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$IsWeatherEnabled
// il2cpp: bool Weather_WeatherManager__IsWeatherEnabled (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x181db5a30

bool Weather_WeatherManager__IsWeatherEnabled(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  Settings_GraphicsSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344947 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184344947 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if ((pSVar1 != (Settings_GraphicsSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).WeatherEffects, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    return (pSVar2->fields)._value != 0;
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$.ctor
// il2cpp: void Weather_WeatherManager___ctor (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x181db8b40

void Weather_WeatherManager___ctor(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_WeatherEffect__o *__this_00;
  System_Collections_Generic_List_WeatherScheduleRunner__o *__this_01;
  System_Collections_Generic_List_Camera__o *__this_02;
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *__this_03;
  Settings_WeatherSet_o *pSVar1;
  System_Collections_Generic_Dictionary_int__float__o *pSVar2;
  System_Collections_Generic_List_WeatherEffect__o *__this_04;
  System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *__this_05;
  
  if (Il2CppMethodInitialized_184344948 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_WeatherEffect_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_WeatherEffect_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_WeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_WeatherScheduleRunner_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Camera_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherEffect_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_WeatherScheduleRunner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_WeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Camera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_WeatherSet);
    Il2CppMethodInitialized_184344948 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_WeatherEffect);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             (MethodInfo_176DB60 *)MethodInfo_System_Collections_Generic_HashSet_WeatherEffect_ctor);
  if (__this_00 != (System_Collections_Generic_HashSet_WeatherEffect__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,1,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_WeatherEffect_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,4,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_WeatherEffect_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,7,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_WeatherEffect_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,5,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_WeatherEffect_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,2,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_WeatherEffect_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,3,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_WeatherEffect_Add);
    (__this->fields).LowEffects = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).LowEffects,__this_00);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_WeatherScheduleRunner);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_WeatherScheduleRunner_ctor);
    (__this->fields)._scheduleRunners = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._scheduleRunners,__this_01);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Camera);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Camera_ctor);
    (__this->fields)._skyboxCameras = __this_02;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._skyboxCameras,__this_02);
    __this_03 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect);
    System_Collections_Generic_Dictionary_Int32Enum__float____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
               (MethodInfo_14421B0 *)
               MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_ctor);
    (__this->fields)._effects = __this_03;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._effects,__this_03);
    pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_WeatherSet);
    Settings_WeatherSet___ctor(pSVar1,(MethodInfo *)0x0);
    (__this->fields)._currentWeather = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentWeather,pSVar1);
    pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_WeatherSet);
    Settings_WeatherSet___ctor(pSVar1,(MethodInfo *)0x0);
    (__this->fields)._targetWeather = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._targetWeather,pSVar1);
    pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_WeatherSet);
    Settings_WeatherSet___ctor(pSVar1,(MethodInfo *)0x0);
    (__this->fields)._startWeather = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._startWeather,pSVar1);
    pSVar2 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_float);
    System_Collections_Generic_Dictionary_int__float____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
               (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_ctor);
    (__this->fields)._targetWeatherStartTimes = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._targetWeatherStartTimes,pSVar2);
    pSVar2 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_float);
    System_Collections_Generic_Dictionary_int__float____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
               (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_ctor);
    (__this->fields)._targetWeatherEndTimes = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._targetWeatherEndTimes,pSVar2);
    __this_04 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_WeatherEffect);
    System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_04,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_WeatherEffect_ctor);
    (__this->fields)._needApply = __this_04;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._needApply,__this_04);
    __this_05 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float);
    System_Collections_Generic_Dictionary_object__float____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_05,
               (MethodInfo_1454140 *)
               MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_ctor);
    (__this->fields)._currentScheduleWait = __this_05;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentScheduleWait,__this_05);
    Photon_Pun_MonoBehaviourPunCallbacks___ctor((GetParentPosition_o *)__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$.cctor
// il2cpp: void Weather_WeatherManager___cctor (const MethodInfo* method);
// 0x181db89d0

void Weather_WeatherManager___cctor(MethodInfo *method)

{
  Settings_ColorSetting_o *pSVar1;
  Utility_Color255_o *__this;
  Weather_WeatherManager_StaticFields *pWVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  Settings_WeatherSet_o *__this_00;
  UnityEngine_Color_o *pUVar6;
  System_Collections_Generic_Dictionary_string__Material__o *__this_01;
  System_Collections_Generic_Dictionary_string__Dictionary_string__Material___o *__this_02;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_184344949 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Material);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_WeatherSet);
    Il2CppMethodInitialized_184344949 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_WeatherSet);
  Settings_WeatherSet___ctor(__this_00,(MethodInfo *)0x0);
  if (((__this_00 != (Settings_WeatherSet_o *)0x0) &&
      (pSVar1 = (__this_00->fields).SkyboxColor, pSVar1 != (Settings_ColorSetting_o *)0x0)) &&
     (__this = (pSVar1->fields)._value, __this != (Utility_Color255_o *)0x0)) {
    pUVar6 = Utility_Color255__ToColor(&local_18,__this,(MethodInfo *)0x0);
    fVar3 = (pUVar6->fields).g;
    fVar4 = (pUVar6->fields).b;
    fVar5 = (pUVar6->fields).a;
    pWVar2 = TypeInfo_Weather_WeatherManager->static_fields;
    (pWVar2->DefaultSkyboxTint).fields.r = (pUVar6->fields).r;
    (pWVar2->DefaultSkyboxTint).fields.g = fVar3;
    (pWVar2->DefaultSkyboxTint).fields.b = fVar4;
    (pWVar2->DefaultSkyboxTint).fields.a = fVar5;
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Material);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
               (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
    TypeInfo_Weather_WeatherManager->static_fields->SkyboxMaterials = __this_01;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Weather_WeatherManager->static_fields->SkyboxMaterials,__this_01);
    __this_02 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
               (MethodInfo_1454140 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_ctor);
    TypeInfo_Weather_WeatherManager->static_fields->SkyboxBlendedMaterials = __this_02;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Weather_WeatherManager->static_fields->SkyboxBlendedMaterials,__this_02);
    return;
  }
  ThrowNullReferenceException();
}


