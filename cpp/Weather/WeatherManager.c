// Type: Weather.WeatherManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/WeatherManager.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherManager.cs
// --------------------------------

// Weather.WeatherManager.<UpdateReflectionTexture>d__30$$.ctor
// il2cpp: void Weather_WeatherManager__UpdateReflectionTexture_d__30___ctor (Weather_WeatherManager__UpdateReflectionTexture_d__30_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x40751f0

void Weather_WeatherManager__UpdateReflectionTexture_d__30___ctor
               (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Weather.WeatherManager.<UpdateReflectionTexture>d__30$$System.IDisposable.Dispose
// il2cpp: void Weather_WeatherManager__UpdateReflectionTexture_d__30__System_IDisposable_Dispose (Weather_WeatherManager__UpdateReflectionTexture_d__30_o* __this, const MethodInfo* method);
// 0x4075210

void Weather_WeatherManager__UpdateReflectionTexture_d__30__System_IDisposable_Dispose
               (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *__this,MethodInfo *method)

{
  return;
}


// Weather.WeatherManager.<UpdateReflectionTexture>d__30$$MoveNext
// il2cpp: bool Weather_WeatherManager__UpdateReflectionTexture_d__30__MoveNext (Weather_WeatherManager__UpdateReflectionTexture_d__30_o* __this, const MethodInfo* method);
// 0x4075220

bool_conflict
Weather_WeatherManager__UpdateReflectionTexture_d__30__MoveNext
          (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *__this,MethodInfo *method)

{
  int iVar1;
  Weather_WeatherManager_o *pWVar2;
  UnityEngine_ReflectionProbe_o *__this_00;
  Il2CppObject *__this_01;
  UnityEngine_Texture_o *value;
  bool_conflict bVar3;
  Weather_WeatherManager__UpdateReflectionTexture_d__30_o *pWVar4;
  
  pWVar4 = __this;
  if (g_data_057ac31c == '\0') {
    pWVar4 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)&TypeInfo_WaitForEndOfFrame;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac31c = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    pWVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((pWVar2 == (Weather_WeatherManager_o *)0x0) ||
       (__this_00 = *(UnityEngine_ReflectionProbe_o **)&(pWVar2->fields)._currentWindForce,
       pWVar4 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)0x0,
       __this_00 == (UnityEngine_ReflectionProbe_o *)0x0)) {
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)(pWVar4->fields).__2__current;
    }
    bVar3 = 0;
    value = UnityEngine_ReflectionProbe__get_texture(__this_00,(MethodInfo *)0x0);
    UnityEngine_RenderSettings__set_customReflectionTexture(value,(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)__this_01,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_01;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 1;
    bVar3 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  else {
    bVar3 = 0;
  }
  return bVar3;
}


// Weather.WeatherManager.<UpdateReflectionTexture>d__30$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__UpdateReflectionTexture_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current (Weather_WeatherManager__UpdateReflectionTexture_d__30_o* __this, const MethodInfo* method);
// 0x40752d0

Il2CppObject *
Weather_WeatherManager__UpdateReflectionTexture_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager.<UpdateReflectionTexture>d__30$$System.Collections.IEnumerator.Reset
// il2cpp: void Weather_WeatherManager__UpdateReflectionTexture_d__30__System_Collections_IEnumerator_Reset (Weather_WeatherManager__UpdateReflectionTexture_d__30_o* __this, const MethodInfo* method);
// 0x40752e0

void Weather_WeatherManager__UpdateReflectionTexture_d__30__System_Collections_IEnumerator_Reset
               (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Weather.WeatherManager.<UpdateReflectionTexture>d__30$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__UpdateReflectionTexture_d__30__System_Collections_IEnumerator_get_Current (Weather_WeatherManager__UpdateReflectionTexture_d__30_o* __this, const MethodInfo* method);
// 0x4075320

Il2CppObject *
Weather_WeatherManager__UpdateReflectionTexture_d__30__System_Collections_IEnumerator_get_Current
          (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__51$$.ctor
// il2cpp: void Weather_WeatherManager__WaitAndApplySkybox_d__51___ctor (Weather_WeatherManager__WaitAndApplySkybox_d__51_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4075330

void Weather_WeatherManager__WaitAndApplySkybox_d__51___ctor
               (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__51$$System.IDisposable.Dispose
// il2cpp: void Weather_WeatherManager__WaitAndApplySkybox_d__51__System_IDisposable_Dispose (Weather_WeatherManager__WaitAndApplySkybox_d__51_o* __this, const MethodInfo* method);
// 0x4075350

void Weather_WeatherManager__WaitAndApplySkybox_d__51__System_IDisposable_Dispose
               (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *__this,MethodInfo *method)

{
  return;
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__51$$MoveNext
// il2cpp: bool Weather_WeatherManager__WaitAndApplySkybox_d__51__MoveNext (Weather_WeatherManager__WaitAndApplySkybox_d__51_o* __this, const MethodInfo* method);
// 0x4075360

bool_conflict
Weather_WeatherManager__WaitAndApplySkybox_d__51__MoveNext
          (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *__this,MethodInfo *method)

{
  int iVar1;
  Weather_WeatherManager_o *__this_00;
  Settings_StringSetting_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_WeatherSet_o *pSVar4;
  Settings_ColorSetting_o *pSVar5;
  Utility_Color255_o *__this_01;
  System_Collections_Generic_List_Camera__o *__this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar6;
  Il2CppObject *__this_07;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *pUVar7;
  UnityEngine_GameObject_o *__this_08;
  UnityEngine_Skybox_o *pUVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  System_String_o *skybox2;
  System_String_o *skybox1;
  UnityEngine_Color_o value;
  undefined1 auVar12 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar13;
  Il2CppType *pIVar14;
  UnityEngine_Component_o *__this_09;
  undefined1 auStack_48 [16];
  UnityEngine_Component_o *pUStack_38;
  
  if (g_data_057ac31d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Skybox_GetComponentInChildren_Skybox);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Camera_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SkyboxCustomSkinLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForEndOfFrame);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    il2cpp_runtime_helper_023445d0(&"CaveMap1");
    il2cpp_runtime_helper_023445d0(&"Day1");
    il2cpp_runtime_helper_023445d0(&"_Tint");
    g_data_057ac31d = '\x01';
  }
  pSVar13 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar14 = (Il2CppType *)0x0;
  __this_09 = (UnityEngine_Component_o *)0x0;
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    __this_07 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)__this_07,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_07;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_07);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)__this_07 >> 8),1);
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  plVar9 = *(long **)(TypeInfo_WeatherManager + 0xb8);
  if (*plVar9 != 0) {
    if (*(char *)(*plVar9 + 0x91) == '\0') {
      if (__this_00 != (Weather_WeatherManager_o *)0x0) {
        bVar6 = Weather_WeatherManager__IsWeatherEnabled(__this_00,(MethodInfo *)0x0);
        skybox2 = "Day1";
        skybox1 = "Day1";
        if ((char)bVar6 != '\0') {
          pSVar4 = (__this_00->fields)._currentWeather;
          if ((((pSVar4 == (Settings_WeatherSet_o *)0x0) ||
               (pSVar2 = (pSVar4->fields).Skybox, pSVar2 == (Settings_StringSetting_o *)0x0)) ||
              (pSVar4 = (__this_00->fields)._targetWeather, pSVar4 == (Settings_WeatherSet_o *)0x0)) ||
             (pSVar3 = (pSVar4->fields).Skybox, pSVar3 == (Settings_StringSetting_o *)0x0)) goto label_040757ba;
          skybox2 = (pSVar3->fields)._value;
          skybox1 = (pSVar2->fields)._value;
        }
        x = (UnityEngine_Object_o *)
            Weather_WeatherManager__GetBlendedSkybox(__this_00,skybox1,skybox2,(MethodInfo *)0x0);
        goto label_0407559e;
      }
    }
    else {
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        plVar9 = *(long **)(TypeInfo_WeatherManager + 0xb8);
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)plVar9[1] !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        x = (UnityEngine_Object_o *)
            System_Collections_Generic_Dictionary_object__object___get_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)plVar9[1],"CaveMap1",
                       MethodInfo_Material_get_Item);
label_0407559e:
        lVar11 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if (lVar11 != 0) {
          pUVar8 = *(UnityEngine_Skybox_o **)(lVar11 + 0x30);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            return 0;
          }
          if (pUVar8 != (UnityEngine_Skybox_o *)0x0) {
            pUVar7 = (UnityEngine_Object_o *)UnityEngine_Skybox__get_material(pUVar8,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar6 = UnityEngine_Object__op_Inequality(pUVar7,x,(MethodInfo *)0x0);
            if ((char)bVar6 == '\0') {
              return 0;
            }
            pUVar7 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_SkyboxCustomSkinLoader + 0xb8);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar6 = UnityEngine_Object__op_Equality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar6 == '\0') {
              return 0;
            }
            if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (**(long **)(TypeInfo_WeatherManager + 0xb8) != 0) {
              if (*(char *)(**(long **)(TypeInfo_WeatherManager + 0xb8) + 0x91) == '\0') {
                if (((__this_00 != (Weather_WeatherManager_o *)0x0) &&
                    (pSVar4 = (__this_00->fields)._currentWeather, pSVar4 != (Settings_WeatherSet_o *)0x0)) &&
                   ((pSVar5 = (pSVar4->fields).SkyboxColor, pSVar5 != (Settings_ColorSetting_o *)0x0 &&
                    ((__this_01 = (pSVar5->fields)._value, __this_01 != (Utility_Color255_o *)0x0 &&
                     (value = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0),
                     x != (UnityEngine_Object_o *)0x0)))))) {
                  UnityEngine_Material__SetColor
                            ((UnityEngine_Material_o *)x,"_Tint",value,(MethodInfo *)0x0);
                  goto label_040756fd;
                }
              }
              else if (__this_00 != (Weather_WeatherManager_o *)0x0) {
label_040756fd:
                __this_02 = (__this_00->fields)._skyboxCameras;
                if (__this_02 != (System_Collections_Generic_List_Camera__o *)0x0) {
                  System_Collections_Generic_List_object___GetEnumerator
                            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
                             (System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_T_Enumerator_UnityEngine_Camera_GetEnumerator);
                  pSVar13 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
                  pIVar14 = (Il2CppType *)auStack_48._8_8_;
                  __this_09 = pUStack_38;
                  while( true ) {
                    __this_03.fields._8_8_ = pIVar14;
                    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar13;
                    __this_03.fields._current = (Il2CppObject *)__this_09;
                    bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                      (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
                    if ((char)bVar6 == '\0') {
                      __this_04.fields._8_8_ = pIVar14;
                      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar13;
                      __this_04.fields._current = (Il2CppObject *)__this_09;
                      System_Collections_Generic_List_Enumerator_object___Dispose
                                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
                      return 0;
                    }
                    if (__this_09 == (UnityEngine_Component_o *)0x0) break;
                    __this_08 = UnityEngine_Component__get_gameObject(__this_09,(MethodInfo *)0x0);
                    if (__this_08 == (UnityEngine_GameObject_o *)0x0) goto label_040757c4;
                    pUVar8 = (UnityEngine_Skybox_o *)
                             UnityEngine_GameObject__GetComponentInChildren_object_(__this_08,MethodInfo_Skybox_GetComponentInChildren_Skybox);
                    if (pUVar8 == (UnityEngine_Skybox_o *)0x0) goto label_040757c9;
                    UnityEngine_Skybox__set_material(pUVar8,(UnityEngine_Material_o *)x,(MethodInfo *)0x0);
                  }
                  goto label_040757bf;
                }
              }
            }
          }
        }
      }
    }
  }
label_040757ba:
  il2cpp_runtime_helper_022b2c90();
label_040757bf:
  il2cpp_runtime_helper_022b2c90();
label_040757c4:
  il2cpp_runtime_helper_022b2c90();
label_040757c9:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  uVar10 = auVar12._0_8_;
  if (auVar12._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(uVar10);
    lVar11 = *plVar9;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar14;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar13;
    __this_05.fields._current = (Il2CppObject *)__this_09;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar11 == 0) {
      return 0;
    }
    uVar10 = il2cpp_runtime_helper_022fefe0(lVar11);
  }
  else {
    lVar11 = 0;
  }
  __this_06.fields._8_8_ = pIVar14;
  __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar13;
  __this_06.fields._current = (Il2CppObject *)__this_09;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  if (lVar11 != 0) {
    lVar11 = il2cpp_runtime_helper_022fefe0(lVar11);
    il2cpp_runtime_helper_01f66400();
    return (bool_conflict)*(undefined8 *)(lVar11 + 0x18);
  }
  _Unwind_Resume(uVar10);
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__51$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__WaitAndApplySkybox_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current (Weather_WeatherManager__WaitAndApplySkybox_d__51_o* __this, const MethodInfo* method);
// 0x4075880

Il2CppObject *
Weather_WeatherManager__WaitAndApplySkybox_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__51$$System.Collections.IEnumerator.Reset
// il2cpp: void Weather_WeatherManager__WaitAndApplySkybox_d__51__System_Collections_IEnumerator_Reset (Weather_WeatherManager__WaitAndApplySkybox_d__51_o* __this, const MethodInfo* method);
// 0x4075890

void Weather_WeatherManager__WaitAndApplySkybox_d__51__System_Collections_IEnumerator_Reset
               (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__51$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__WaitAndApplySkybox_d__51__System_Collections_IEnumerator_get_Current (Weather_WeatherManager__WaitAndApplySkybox_d__51_o* __this, const MethodInfo* method);
// 0x40758d0

Il2CppObject *
Weather_WeatherManager__WaitAndApplySkybox_d__51__System_Collections_IEnumerator_get_Current
          (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__54$$.ctor
// il2cpp: void Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54___ctor (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x40758e0

void Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54___ctor
               (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__54$$System.IDisposable.Dispose
// il2cpp: void Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54__System_IDisposable_Dispose (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o* __this, const MethodInfo* method);
// 0x4075900

void Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54__System_IDisposable_Dispose
               (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this,MethodInfo *method)

{
  return;
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__54$$MoveNext
// il2cpp: bool Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54__MoveNext (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o* __this, const MethodInfo* method);
// 0x4075910

bool_conflict
Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54__MoveNext
          (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this,MethodInfo *method)

{
  Weather_WeatherManager_o *__this_00;
  Settings_WeatherSet_o *pSVar1;
  System_String_o *pSVar2;
  long *__this_01;
  
  __this_01 = (long *)__this;
  if (g_data_057ac31e == '\0') {
    __this_01 = &TypeInfo_DataCompressors;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac31e = '\x01';
  }
  if (1 < (uint)(__this->fields).__1__state) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (__this_00 != (Weather_WeatherManager_o *)0x0) {
    if ((char)(__this_00->fields)._finishedLoading == '\0') {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
    }
    pSVar1 = (__this_00->fields)._currentWeather;
    if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = (long *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
    if (((Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *)__this_01 !=
         (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *)0x0) &&
       (pSVar2 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                           ((Utility_Algorithms_CompressionAlgorithm_o *)__this_01,
                            (__this->fields).currentWeatherJson,0x1000,0xa00000,(MethodInfo *)0x0),
       pSVar1 != (Settings_WeatherSet_o *)0x0)) {
      (*(pSVar1->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
                (pSVar1,pSVar2,(pSVar1->klass->vtable)._8_DeserializeFromJsonString.method);
      __this_01 = (long *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
      if ((Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *)__this_01 !=
          (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *)0x0) {
        pSVar1 = (__this_00->fields)._startWeather;
        pSVar2 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                           ((Utility_Algorithms_CompressionAlgorithm_o *)__this_01,
                            (__this->fields).startWeatherJson,0x1000,0xa00000,(MethodInfo *)0x0);
        if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
          (*(pSVar1->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
                    (pSVar1,pSVar2,(pSVar1->klass->vtable)._8_DeserializeFromJsonString.method);
          __this_01 = (long *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
          if ((Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *)__this_01 !=
              (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *)0x0) {
            pSVar1 = (__this_00->fields)._targetWeather;
            pSVar2 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                               ((Utility_Algorithms_CompressionAlgorithm_o *)__this_01,
                                (__this->fields).targetWeatherJson,0x1000,0xa00000,(MethodInfo *)0x0);
            if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
              (*(pSVar1->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
                        (pSVar1,pSVar2,(pSVar1->klass->vtable)._8_DeserializeFromJsonString.method);
              (__this_00->fields)._targetWeatherStartTimes = (__this->fields).targetWeatherStartTimes;
              il2cpp_runtime_helper_022b4080(&(__this_00->fields)._targetWeatherStartTimes);
              (__this_00->fields)._targetWeatherEndTimes = (__this->fields).targetWeatherEndTimes;
              il2cpp_runtime_helper_022b4080(&(__this_00->fields)._targetWeatherEndTimes);
              (__this_00->fields)._currentTime = (__this->fields).currentTime;
              Weather_WeatherManager__LerpCurrentWeatherToTarget(__this_00,(MethodInfo *)0x0);
              Weather_WeatherManager__ApplyCurrentWeather(__this_00,0,1,(MethodInfo *)0x0);
              return 0;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)
         (((Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *)__this_01)->fields).__2__current;
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__54$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o* __this, const MethodInfo* method);
// 0x4075af0

Il2CppObject *
Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__54$$System.Collections.IEnumerator.Reset
// il2cpp: void Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54__System_Collections_IEnumerator_Reset (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o* __this, const MethodInfo* method);
// 0x4075b00

void Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54__System_Collections_IEnumerator_Reset
               (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__54$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54__System_Collections_IEnumerator_get_Current (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o* __this, const MethodInfo* method);
// 0x4075b40

Il2CppObject *
Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54__System_Collections_IEnumerator_get_Current
          (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager$$Init
// il2cpp: void Weather_WeatherManager__Init (const MethodInfo* method);
// 0x406e530

void Weather_WeatherManager__Init(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Events_OnPreLoadScene_o *value;
  MethodInfo *method_00;
  
  if (g_data_057ac2fb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
    il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherManager_CreateSingleton_WeatherManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderWeatherEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac2fb = '\x01';
  }
  if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_WeatherManager + 0xb8),MethodInfo_WeatherManager_CreateSingleton_WeatherManager);
  **(undefined8 **)(TypeInfo_WeatherManager + 0xb8) = pIVar1;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_WeatherManager + 0xb8));
  method_00 = TypeInfo_ThunderWeatherEffect;
  if (*(int *)((long)&TypeInfo_ThunderWeatherEffect[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Weather_ThunderWeatherEffect__OnFinishInit(method_00);
  Weather_WeatherManager__LoadSkyboxes(method_00);
  value = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
  Events_OnPreLoadScene___ctor();
  Events_EventManager__add_OnPreLoadScene(value,(MethodInfo *)0x0);
  return;
}


// Weather.WeatherManager$$OnPreLoadScene
// il2cpp: void Weather_WeatherManager__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x406ead0

void Weather_WeatherManager__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar1;
  long *plVar2;
  undefined8 unaff_RBP;
  MethodInfo *pMVar3;
  long lVar4;
  undefined1 auVar5 [12];
  _union_249689 _Var6;
  Il2CppType *pIVar7;
  Weather_LightningParticle_o *__this_05;
  _union_249689 _Stack_68;
  Il2CppType *pIStack_60;
  Weather_LightningParticle_o *pWStack_58;
  _union_249689 _Stack_48;
  Il2CppType *pIStack_40;
  Weather_LightningParticle_o *pWStack_38;
  
  if (g_data_057ac2fc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LightningParticle_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_LightningParticle_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Weather_LightningParticle_GetEnumera);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_List_1_Weather_LightningParticle_Get);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderWeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WindWeatherEffect);
    g_data_057ac2fc = '\x01';
  }
  _Var6.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar7 = (Il2CppType *)0x0;
  __this_05 = (Weather_LightningParticle_o *)0x0;
  _Stack_68.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  pWStack_58 = (Weather_LightningParticle_o *)0x0;
  if (*(int *)(TypeInfo_WindWeatherEffect + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  **(undefined1 **)(TypeInfo_WindWeatherEffect + 0xb8) = 0;
  if (*(int *)(TypeInfo_ThunderWeatherEffect + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_ThunderWeatherEffect + 0xb8) !=
      (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_48,
               (System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_ThunderWeatherEffect + 0xb8),
               MethodInfo_List_1_T_Enumerator_List_1_Weather_LightningParticle_Get);
    _Var6 = _Stack_48;
    pIVar7 = pIStack_40;
    __this_05 = pWStack_38;
    while( true ) {
      __this.fields._8_8_ = pIVar7;
      __this.fields._list = _Var6.genericMethod;
      __this.fields._current = (Il2CppObject *)__this_05;
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
      if ((char)bVar1 == '\0') {
        __this_02.fields._8_8_ = pIVar7;
        __this_02.fields._list = _Var6.genericMethod;
        __this_02.fields._current = (Il2CppObject *)__this_05;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
        goto label_0406ed03;
      }
      if (__this_05 == (Weather_LightningParticle_o *)0x0) break;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_48,
                 (System_Collections_Generic_List_object__o *)__this_05,MethodInfo_List_1_T_Enumerator_Weather_LightningParticle_GetEnumera);
      pWStack_58 = pWStack_38;
      _Stack_68.genericMethod = _Stack_48.genericMethod;
      pIStack_60 = pIStack_40;
      while (__this_00.fields._8_8_ = pIVar7, __this_00.fields._list = _Var6.genericMethod,
            __this_00.fields._current = (Il2CppObject *)__this_05, pMVar3 = MethodInfo_Boolean_MoveNext,
            bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&_Stack_68), (char)bVar1 != '\0') {
        if (pWStack_58 == (Weather_LightningParticle_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0406ed77;
        }
        Weather_LightningParticle__Disable(pWStack_58,pMVar3);
      }
      unaff_RBP = 0;
      __this_01.fields._8_8_ = pIVar7;
      __this_01.fields._list = _Var6.genericMethod;
      __this_01.fields._current = (Il2CppObject *)__this_05;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_01,(MethodInfo_321A1C0 *)&_Stack_68);
    }
label_0406ed77:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(unaff_RBP);
  }
  do {
    auVar5 = il2cpp_runtime_helper_022b2c90();
    lVar4 = auVar5._0_8_;
    if (auVar5._8_4_ != 1) {
label_0406edd1:
      __this_04.fields._8_8_ = pIVar7;
      __this_04.fields._list = _Var6.genericMethod;
      __this_04.fields._current = (Il2CppObject *)__this_05;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
      _Unwind_Resume(lVar4);
    }
    plVar2 = (long *)__cxa_begin_catch();
    lVar4 = *plVar2;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar7;
    __this_03.fields._list = _Var6.genericMethod;
    __this_03.fields._current = (Il2CppObject *)__this_05;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
    if (lVar4 != 0) {
      il2cpp_runtime_helper_022fefe0();
      goto label_0406edd1;
    }
label_0406ed03:
    if (*(int *)((long)&TypeInfo_WeatherManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar3 = TypeInfo_WeatherManager;
    if (*(long *)TypeInfo_WeatherManager[2].virtualMethodPointer != 0) {
      *(undefined1 *)(*(long *)TypeInfo_WeatherManager[2].virtualMethodPointer + 0x90) = 0;
      Weather_WeatherManager__DisableCaveMap(pMVar3);
      return;
    }
  } while( true );
}


// Weather.WeatherManager$$EnableCaveMap
// il2cpp: void Weather_WeatherManager__EnableCaveMap (const MethodInfo* method);
// 0x406eec0

void Weather_WeatherManager__EnableCaveMap(MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t iVar3;
  UnityEngine_ReflectionProbe_o *__this;
  System_Collections_Generic_List_WeatherScheduleRunner__o *pSVar4;
  Weather_WeatherScheduleRunner_array *array;
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *__this_00;
  Il2CppMethodPointer pIVar5;
  System_Collections_Generic_Dictionary_int__float__o *pSVar6;
  System_Collections_Generic_List_WeatherEffect__o *pSVar7;
  System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *__this_01;
  long lVar8;
  Settings_ListSetting_T__o *__this_02;
  Photon_Pun_PhotonView_o *pPVar9;
  System_Threading_CancellationTokenSource_o *a;
  undefined8 uVar10;
  Settings_StringSetting_o *pSVar11;
  System_String_o *schedule;
  Settings_StringSetting_c *pSVar12;
  Settings_BoolSetting_o *pSVar13;
  Weather_WeatherScheduleRunner_o *__this_03;
  char cVar14;
  bool_conflict bVar15;
  UnityEngine_Material_o *value;
  Il2CppObject *pIVar16;
  Photon_Pun_PhotonView_o *pPVar17;
  Weather_WeatherManager__UpdateReflectionTexture_d__30_o *__this_04;
  Photon_Pun_PhotonView_o *__this_05;
  long lVar18;
  Settings_WeatherSet_o *pSVar19;
  long *plVar20;
  MethodInfo *pMVar21;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  long unaff_RBX;
  Weather_WeatherManager_o **ppWVar22;
  Weather_WeatherManager__UpdateReflectionTexture_d__30_o **ppWVar23;
  MethodInfo *pMVar24;
  Weather_WeatherManager_o *__this_06;
  Weather_WeatherManager_o *__this_07;
  undefined8 unaff_R12;
  Photon_Pun_PhotonView_o *unaff_R14;
  undefined1 auVar25 [12];
  Weather_WeatherManager__UpdateReflectionTexture_d__30_o *pWStack_38;
  undefined8 uStack_30;
  long lStack_28;
  Photon_Pun_PhotonView_o *pPStack_20;
  
  if (g_data_057ac2fd == '\0') {
    pPStack_20 = (Photon_Pun_PhotonView_o *)0x406ef0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    pPStack_20 = (Photon_Pun_PhotonView_o *)0x406ef1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ReflectionProbe_AddComponent_ReflectionProbe);
    pPStack_20 = (Photon_Pun_PhotonView_o *)0x406ef27;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pPStack_20 = (Photon_Pun_PhotonView_o *)0x406ef33;
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    pPStack_20 = (Photon_Pun_PhotonView_o *)0x406ef3f;
    il2cpp_runtime_helper_023445d0(&"CaveMap1");
    g_data_057ac2fd = '\x01';
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) != 0) goto label_0406eee1;
label_0406ef59:
    pPStack_20 = (Photon_Pun_PhotonView_o *)0x406ef5e;
    il2cpp_runtime_helper_02337ed0();
    plVar20 = TypeInfo_WeatherManager[1].monitor;
    lVar18 = *plVar20;
    if (lVar18 == 0) {
      pMVar21 = (MethodInfo *)0x0;
      __this_05 = (Photon_Pun_PhotonView_o *)TypeInfo_WeatherManager;
    }
    else {
label_0406eef4:
      if (*(char *)(lVar18 + 0x91) != '\0') {
        return;
      }
      __this_05 = (Photon_Pun_PhotonView_o *)TypeInfo_WeatherManager;
      if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) == 0) {
        pPStack_20 = (Photon_Pun_PhotonView_o *)0x406ef83;
        il2cpp_runtime_helper_02337ed0();
        plVar20 = TypeInfo_WeatherManager[1].monitor;
      }
      pMVar21 = (MethodInfo *)*plVar20;
      if (pMVar21 != (MethodInfo *)0x0) {
        *(undefined1 *)((long)&pMVar21[1].field7_0x38 + 1) = 1;
        __this_05 = (Photon_Pun_PhotonView_o *)0x0;
        if ((System_Collections_Generic_Dictionary_object__object__o *)plVar20[1] !=
            (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pPStack_20 = (Photon_Pun_PhotonView_o *)0x406efc6;
          value = (UnityEngine_Material_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)plVar20[1],
                             "CaveMap1",MethodInfo_Material_get_Item);
          pPStack_20 = (Photon_Pun_PhotonView_o *)0x406efd0;
          UnityEngine_RenderSettings__set_skybox(value,(MethodInfo *)0x0);
          pPStack_20 = (Photon_Pun_PhotonView_o *)0x406efdc;
          UnityEngine_RenderSettings__set_defaultReflectionMode(1,(MethodInfo *)0x0);
          pPStack_20 = (Photon_Pun_PhotonView_o *)0x406efe5;
          UnityEngine_RenderSettings__set_ambientMode(0,(MethodInfo *)0x0);
          pPStack_20 = (Photon_Pun_PhotonView_o *)0x406eff4;
          UnityEngine_RenderSettings__set_ambientIntensity(1.0,(MethodInfo *)0x0);
          pPStack_20 = (Photon_Pun_PhotonView_o *)0x406f003;
          UnityEngine_RenderSettings__set_reflectionIntensity(1.0,(MethodInfo *)0x0);
          pPStack_20 = (Photon_Pun_PhotonView_o *)0x406f012;
          unaff_R14 = (Photon_Pun_PhotonView_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          pPStack_20 = (Photon_Pun_PhotonView_o *)0x406f01f;
          __this_05 = unaff_R14;
          UnityEngine_GameObject___ctor_4dfc3c0((UnityEngine_GameObject_o *)unaff_R14,(MethodInfo *)0x0);
          if (unaff_R14 != (Photon_Pun_PhotonView_o *)0x0) {
            lVar18 = *(long *)TypeInfo_WeatherManager[1].monitor;
            pPStack_20 = (Photon_Pun_PhotonView_o *)0x406f047;
            __this_05 = unaff_R14;
            pIVar16 = UnityEngine_GameObject__AddComponent_object_
                                ((UnityEngine_GameObject_o *)unaff_R14,MethodInfo_ReflectionProbe_AddComponent_ReflectionProbe);
            unaff_RBX = 0;
            if (lVar18 != 0) {
              *(Il2CppObject **)(lVar18 + 0xa0) = pIVar16;
              unaff_RBX = lVar18 + 0xa0;
              pPStack_20 = (Photon_Pun_PhotonView_o *)0x406f069;
              __this_05 = (Photon_Pun_PhotonView_o *)unaff_RBX;
              il2cpp_runtime_helper_022b4080();
              if ((*(long *)TypeInfo_WeatherManager[1].monitor != 0) &&
                 (__this_05 = *(Photon_Pun_PhotonView_o **)(*(long *)TypeInfo_WeatherManager[1].monitor + 0xa0),
                 __this_05 != (Photon_Pun_PhotonView_o *)0x0)) {
                pPStack_20 = (Photon_Pun_PhotonView_o *)0x406f098;
                UnityEngine_ReflectionProbe__set_cullingMask
                          ((UnityEngine_ReflectionProbe_o *)__this_05,0,(MethodInfo *)0x0);
                if ((*(long *)TypeInfo_WeatherManager[1].monitor != 0) &&
                   (__this_05 = *(Photon_Pun_PhotonView_o **)(*(long *)TypeInfo_WeatherManager[1].monitor + 0xa0),
                   __this_05 != (Photon_Pun_PhotonView_o *)0x0)) {
                  pPStack_20 = (Photon_Pun_PhotonView_o *)0x406f0ca;
                  UnityEngine_ReflectionProbe__set_refreshMode
                            ((UnityEngine_ReflectionProbe_o *)__this_05,2,(MethodInfo *)0x0);
                  if ((*(long *)TypeInfo_WeatherManager[1].monitor != 0) &&
                     (__this_05 = *(Photon_Pun_PhotonView_o **)(*(long *)TypeInfo_WeatherManager[1].monitor + 0xa0),
                     __this_05 != (Photon_Pun_PhotonView_o *)0x0)) {
                    pPStack_20 = (Photon_Pun_PhotonView_o *)0x406f0fc;
                    UnityEngine_ReflectionProbe__set_mode
                              ((UnityEngine_ReflectionProbe_o *)__this_05,1,(MethodInfo *)0x0);
                    if (*(long *)TypeInfo_WeatherManager[1].monitor != 0) {
                      __this = *(UnityEngine_ReflectionProbe_o **)(*(long *)TypeInfo_WeatherManager[1].monitor + 0xa0);
                      __this_05 = (Photon_Pun_PhotonView_o *)0x0;
                      if (__this != (UnityEngine_ReflectionProbe_o *)0x0) {
                        pPStack_20 = (Photon_Pun_PhotonView_o *)0x406f12e;
                        UnityEngine_ReflectionProbe__set_timeSlicingMode(__this,2,(MethodInfo *)0x0);
                        __this_05 = (Photon_Pun_PhotonView_o *)0x0;
                        pPStack_20 = (Photon_Pun_PhotonView_o *)0x406f135;
                        UnityEngine_DynamicGI__UpdateEnvironment((MethodInfo *)0x0);
                        if ((*(long *)TypeInfo_WeatherManager[1].monitor != 0) &&
                           (__this_05 = *(Photon_Pun_PhotonView_o **)(*(long *)TypeInfo_WeatherManager[1].monitor + 0xa0)
                           , __this_05 != (Photon_Pun_PhotonView_o *)0x0)) {
                          pPStack_20 = (Photon_Pun_PhotonView_o *)0x406f15e;
                          UnityEngine_ReflectionProbe__RenderProbe
                                    ((UnityEngine_ReflectionProbe_o *)__this_05,(MethodInfo *)0x0);
                          unaff_R14 = *(Photon_Pun_PhotonView_o **)TypeInfo_WeatherManager[1].monitor;
                          if (unaff_R14 != (Photon_Pun_PhotonView_o *)0x0) {
                            if (g_data_057ac2fe == '\0') {
                              pPStack_20 = (Photon_Pun_PhotonView_o *)0x406f185;
                              il2cpp_runtime_helper_023445d0(&TypeInfo_UpdateReflectionTexture_d__30);
                              g_data_057ac2fe = '\x01';
                            }
                            pPStack_20 = (Photon_Pun_PhotonView_o *)0x406f19b;
                            pPVar17 = (Photon_Pun_PhotonView_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UpdateReflectionTexture_d__30);
                            pPStack_20 = (Photon_Pun_PhotonView_o *)0x406f1aa;
                            __this_05 = pPVar17;
                            Weather_WeatherManager__UpdateReflectionTexture_d__30___ctor
                                      ((Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)pPVar17,0,
                                       (MethodInfo *)0x0);
                            unaff_RBX = 0;
                            if (pPVar17 != (Photon_Pun_PhotonView_o *)0x0) {
                              *(Photon_Pun_PhotonView_o **)&(pPVar17->fields).Group = unaff_R14;
                              pPStack_20 = (Photon_Pun_PhotonView_o *)0x406f1c2;
                              il2cpp_runtime_helper_022b4080(&(pPVar17->fields).Group,unaff_R14);
                              UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                        ((UnityEngine_MonoBehaviour_o *)unaff_R14,
                                         (System_Collections_IEnumerator_o *)pPVar17,(MethodInfo *)0x0);
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
  else {
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) == 0) goto label_0406ef59;
label_0406eee1:
    plVar20 = TypeInfo_WeatherManager[1].monitor;
    lVar18 = *plVar20;
    pMVar21 = (MethodInfo *)0x0;
    __this_05 = (Photon_Pun_PhotonView_o *)TypeInfo_WeatherManager;
    if (lVar18 != 0) goto label_0406eef4;
  }
  pPStack_20 = (Photon_Pun_PhotonView_o *)0x406f1d9;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  lStack_28 = unaff_RBX;
  pPStack_20 = unaff_R14;
  if (g_data_057ac2fe == '\0') {
    pWStack_38 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)0x406f1fc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UpdateReflectionTexture_d__30);
    g_data_057ac2fe = '\x01';
  }
  pWStack_38 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)0x406f212;
  __this_04 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UpdateReflectionTexture_d__30);
  pMVar24 = (MethodInfo *)0x0;
  pWStack_38 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)0x406f221;
  Weather_WeatherManager__UpdateReflectionTexture_d__30___ctor(__this_04,0,(MethodInfo *)0x0);
  if (__this_04 != (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)0x0) {
    (__this_04->fields).__4__this = (Weather_WeatherManager_o *)__this_05;
    pWStack_38 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)0x406f239;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields).__4__this,__this_05);
    return;
  }
  pWStack_38 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)0x406f249;
  il2cpp_runtime_helper_022b2c90();
  ppWVar23 = &pWStack_38;
  pWStack_38 = __this_04;
  if (g_data_057ac300 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac300 = '\x01';
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) != 0) goto label_0406f26d;
label_0406f2a5:
    il2cpp_runtime_helper_02337ed0();
    __this_06 = *(Weather_WeatherManager_o **)TypeInfo_WeatherManager[1].monitor;
    if (__this_06 != (Weather_WeatherManager_o *)0x0) goto label_0406f27c;
label_0406f2bc:
    ppWVar22 = &TypeInfo_WeatherManager;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) == 0) goto label_0406f2a5;
label_0406f26d:
    __this_06 = *(Weather_WeatherManager_o **)TypeInfo_WeatherManager[1].monitor;
    if (__this_06 == (Weather_WeatherManager_o *)0x0) goto label_0406f2bc;
label_0406f27c:
    ppWVar23 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o **)&uStack_30;
    ppWVar22 = (Weather_WeatherManager_o **)pWStack_38;
  }
  *(Weather_WeatherManager_o ***)((long)ppWVar23 + -8) = &TypeInfo_WeatherManager;
  *(Photon_Pun_PhotonView_o **)((long)ppWVar23 + -0x10) = __this_05;
  *(undefined8 *)((long)ppWVar23 + -0x18) = unaff_R12;
  *(Weather_WeatherManager_o ***)((long)ppWVar23 + -0x20) = ppWVar22;
  pPVar17 = (Photon_Pun_PhotonView_o *)((long)ppWVar23 + -0x38);
  if (g_data_057ac309 == '\0') {
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f2f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f303;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f30f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f31b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f327;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f333;
    il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherScheduleRunner_get_Current);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f33f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_GetItemAt);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f34b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f357;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f363;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Weather_WeatherScheduleRunner_GetEnu);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f36f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f37b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f387;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f393;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f39f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f3ab;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f3b7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f3c3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f3cf;
    il2cpp_runtime_helper_023445d0(&"Map Default*");
    g_data_057ac309 = '\x01';
  }
  *(undefined8 *)((long)ppWVar23 + -0x38) = 0;
  *(undefined8 *)((long)ppWVar23 + -0x30) = 0;
  *(undefined8 *)((long)ppWVar23 + -0x28) = 0;
  *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f3ee;
  __this_07 = __this_06;
  Weather_WeatherManager__ResetCameras(__this_06,pMVar24);
  *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f3f3;
  Weather_WeatherManager__ResetSkyboxColors(__this_07,pMVar24);
  if (g_data_057ac307 == '\0') {
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f42f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac307 = '\x01';
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) != 0) goto label_0406f40f;
label_0406f449:
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f44e;
    il2cpp_runtime_helper_02337ed0();
    lVar18 = *(long *)TypeInfo_WeatherManager[1].monitor;
    if (lVar18 == 0) goto label_0406f8fc;
label_0406f464:
    *(undefined4 *)(lVar18 + 0x9c) = 0;
    *(undefined8 *)(lVar18 + 0x94) = 0;
    pSVar4 = (__this_06->fields)._scheduleRunners;
    if (pSVar4 == (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) goto label_0406f8fc;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar3 = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < iVar3) {
      array = (pSVar4->fields)._items;
      pMVar21 = (MethodInfo *)0x0;
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f4a6;
      System_Array__Clear((System_Array_o *)array,0,iVar3,(MethodInfo *)0x0);
    }
    __this_00 = (__this_06->fields)._effects;
    if (__this_00 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)
    goto label_0406f8fc;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f4c3;
    System_Collections_Generic_Dictionary_Int32Enum__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Void_Clear);
    pSVar19 = (__this_06->fields)._currentWeather;
    if (pSVar19 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
    pMVar24 = (pSVar19->klass->vtable)._4_SetDefault.method;
    pIVar5 = (pSVar19->klass->vtable)._4_SetDefault.methodPtr;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f4e1;
    (*pIVar5)(pSVar19,pMVar24);
    pSVar19 = (__this_06->fields)._startWeather;
    if (pSVar19 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
    pMVar24 = (pSVar19->klass->vtable)._4_SetDefault.method;
    pIVar5 = (pSVar19->klass->vtable)._4_SetDefault.methodPtr;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f4ff;
    (*pIVar5)(pSVar19,pMVar24);
    pSVar19 = (__this_06->fields)._targetWeather;
    if (pSVar19 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
    pMVar24 = (pSVar19->klass->vtable)._4_SetDefault.method;
    pIVar5 = (pSVar19->klass->vtable)._4_SetDefault.methodPtr;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f51d;
    (*pIVar5)(pSVar19,pMVar24);
    pSVar6 = (__this_06->fields)._targetWeatherStartTimes;
    if (pSVar6 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_0406f8fc;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f53a;
    System_Collections_Generic_Dictionary_int__float___Clear(pSVar6,MethodInfo_Void_Clear);
    pSVar6 = (__this_06->fields)._targetWeatherEndTimes;
    if (pSVar6 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_0406f8fc;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f550;
    System_Collections_Generic_Dictionary_int__float___Clear(pSVar6,MethodInfo_Void_Clear);
    pSVar7 = (__this_06->fields)._needApply;
    if (pSVar7 == (System_Collections_Generic_List_WeatherEffect__o *)0x0) goto label_0406f8fc;
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar7->fields)._size = 0;
    (__this_06->fields)._currentTime = 0.0;
    __this_01 = (__this_06->fields)._currentScheduleWait;
    if (__this_01 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0)
    goto label_0406f8fc;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f592;
    pMVar24 = MethodInfo_Void_Clear;
    System_Collections_Generic_Dictionary_object__float___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
               (MethodInfo_310C5C0 *)MethodInfo_Void_Clear);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f59a;
    Weather_WeatherManager__CreateEffects(__this_06,pMVar24);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f5a2;
    Weather_WeatherManager__SetSceneWeather(__this_06,pMVar24);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f5b4;
    Weather_WeatherManager__ApplyCurrentWeather(__this_06,1,1,pMVar21);
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) != 2) goto label_0406f8db;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f5f7;
      il2cpp_runtime_helper_02337ed0();
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f5fe;
      bVar15 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar14 = (char)bVar15;
    }
    else {
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f5e9;
      bVar15 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar14 = (char)bVar15;
    }
    if (cVar14 == '\0') goto label_0406f8db;
    lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
    if ((((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x20), lVar18 == 0)) ||
        (lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50), lVar8 == 0)) ||
       ((lVar8 = *(long *)(lVar8 + 0x60), lVar8 == 0 ||
        (__this_02 = *(Settings_ListSetting_T__o **)(lVar18 + 0x28),
        __this_02 == (Settings_ListSetting_T__o *)0x0)))) goto label_0406f8fc;
    iVar3 = *(int32_t *)(lVar8 + 0x14);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f66a;
    __this_05 = (Photon_Pun_PhotonView_o *)
                Settings_ListSetting_object___GetItemAt(__this_02,iVar3,MethodInfo_BaseSetting_GetItemAt);
    if (__this_05 != (Photon_Pun_PhotonView_o *)0x0) {
      bVar2 = (TypeInfo_WeatherSet->_2).naturalAligment;
      if ((bVar2 <= (((Weather_WeatherManager_c *)__this_05->klass)->_2).naturalAligment) &&
         ((((Weather_WeatherManager_c *)__this_05->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_WeatherSet
         )) goto label_0406f6a4;
      goto label_0406f906;
    }
label_0406f6a4:
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f774;
      il2cpp_runtime_helper_02337ed0();
      lVar18 = *(long *)(TypeInfo_MapLoader + 0xb8);
      if (*(char *)(lVar18 + 0x80) != '\0') goto label_0406f6cf;
label_0406f7aa:
      pSVar19 = (__this_06->fields)._currentWeather;
      if (pSVar19 != (Settings_WeatherSet_o *)0x0) {
        pMVar21 = (pSVar19->klass->vtable)._9_Copy.method;
        pIVar5 = (pSVar19->klass->vtable)._9_Copy.methodPtr;
        *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f7cb;
        (*pIVar5)(pSVar19,__this_05,pMVar21);
        pSVar19 = (__this_06->fields)._currentWeather;
        pMVar21 = extraout_RDX_00;
        if (pSVar19 != (Settings_WeatherSet_o *)0x0) goto label_0406f7d9;
      }
      goto label_0406f8fc;
    }
    lVar18 = *(long *)(TypeInfo_MapLoader + 0xb8);
    if (*(char *)(lVar18 + 0x80) == '\0') goto label_0406f7aa;
label_0406f6cf:
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f792;
      il2cpp_runtime_helper_02337ed0();
      if (*(long *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x88) != 0) goto label_0406f6ea;
      goto label_0406f7aa;
    }
    if (*(long *)(lVar18 + 0x88) == 0) goto label_0406f7aa;
label_0406f6ea:
    if ((__this_05 == (Photon_Pun_PhotonView_o *)0x0) ||
       (pPVar9 = *(Photon_Pun_PhotonView_o **)&(__this_05->fields).Group,
       pPVar9 == (Photon_Pun_PhotonView_o *)0x0)) goto label_0406f8fc;
    a = (pPVar9->fields).m_CancellationTokenSource;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f715;
    bVar15 = System_String__op_Equality((System_String_o *)a,"Map Default*",(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') goto label_0406f7aa;
    pSVar19 = (__this_06->fields)._currentWeather;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f733;
      il2cpp_runtime_helper_02337ed0();
    }
    if (pSVar19 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
    uVar10 = *(undefined8 *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x88);
    pMVar21 = (pSVar19->klass->vtable)._9_Copy.method;
    pIVar5 = (pSVar19->klass->vtable)._9_Copy.methodPtr;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f760;
    (*pIVar5)(pSVar19,uVar10,pMVar21);
    pSVar19 = (__this_06->fields)._currentWeather;
    pMVar21 = extraout_RDX;
    if (pSVar19 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
label_0406f7d9:
    pSVar11 = (pSVar19->fields).Schedule;
    if (pSVar11 == (Settings_StringSetting_o *)0x0) goto label_0406f8fc;
    schedule = (pSVar11->fields)._value;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f7f5;
    Weather_WeatherManager__CreateScheduleRunners(__this_06,schedule,pMVar21);
    pSVar19 = (__this_06->fields)._currentWeather;
    if ((pSVar19 == (Settings_WeatherSet_o *)0x0) ||
       (pSVar11 = (pSVar19->fields).Schedule, pSVar11 == (Settings_StringSetting_o *)0x0)) goto label_0406f8fc;
    pSVar12 = pSVar11->klass;
    pMVar21 = (pSVar12->vtable)._4_SetDefault.method;
    pIVar5 = (pSVar12->vtable)._4_SetDefault.methodPtr;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f823;
    (*pIVar5)();
    pSVar19 = (__this_06->fields)._currentWeather;
    if ((pSVar19 == (Settings_WeatherSet_o *)0x0) ||
       (pSVar13 = (pSVar19->fields).UseSchedule, pSVar13 == (Settings_BoolSetting_o *)0x0)) goto label_0406f8fc;
    if (*(char *)((long)&(pSVar13->fields).DefaultValue + 1) != '\0') {
      pSVar4 = (__this_06->fields)._scheduleRunners;
      if (pSVar4 == (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) goto label_0406f8fc;
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f86a;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)((long)ppWVar23 + -0x38),
                 (System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T_Enumerator_Weather_WeatherScheduleRunner_GetEnu);
      while( true ) {
        *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f88b;
        bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o)
                            *(System_Collections_Generic_List_Enumerator_object__Fields *)
                             ((long)ppWVar23 + -0x38),(MethodInfo_321A1D0 *)((long)ppWVar23 + -0x38));
        if ((char)bVar15 == '\0') break;
        __this_03 = *(Weather_WeatherScheduleRunner_o **)((long)ppWVar23 + -0x28);
        if (__this_03 == (Weather_WeatherScheduleRunner_o *)0x0) goto label_0406f901;
        *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f8a3;
        Weather_WeatherScheduleRunner__ProcessSchedule(__this_03,(MethodInfo *)0x0);
        *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f8ad;
        Weather_WeatherScheduleRunner__ConsumeSchedule(__this_03,(MethodInfo *)0x0);
      }
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f8c1;
      pMVar21 = MethodInfo_Void_Dispose;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o)
                 *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppWVar23 + -0x38),
                 (MethodInfo_321A1C0 *)((long)ppWVar23 + -0x38));
    }
  }
  else {
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) == 0) goto label_0406f449;
label_0406f40f:
    lVar18 = *(long *)TypeInfo_WeatherManager[1].monitor;
    if (lVar18 != 0) goto label_0406f464;
label_0406f8fc:
    pPVar17 = __this_05;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f901;
    il2cpp_runtime_helper_022b2c90();
label_0406f901:
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f906;
    il2cpp_runtime_helper_022b2c90();
    __this_05 = pPVar17;
label_0406f906:
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f90e;
    auVar25 = il2cpp_runtime_helper_022b2fd0(__this_05);
    if (auVar25._8_4_ != 1) {
label_0406f95d:
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f977;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o)
                 *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppWVar23 + -0x38),
                 (MethodInfo_321A1C0 *)((long)ppWVar23 + -0x38));
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f984;
      _Unwind_Resume(auVar25._0_8_);
    }
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f932;
    plVar20 = (long *)__cxa_begin_catch(auVar25._0_8_);
    lVar18 = *plVar20;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f93a;
    __cxa_end_catch();
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f94c;
    pMVar21 = MethodInfo_Void_Dispose;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o)
               *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppWVar23 + -0x38),
               (MethodInfo_321A1C0 *)((long)ppWVar23 + -0x38));
    if (lVar18 != 0) {
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f95d;
      il2cpp_runtime_helper_022fefe0(lVar18);
      goto label_0406f95d;
    }
  }
  *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f8c9;
  Weather_WeatherManager__SyncWeather(__this_06,pMVar21);
  (__this_06->fields)._currentSyncWait = 5.0;
  *(undefined1 *)&(__this_06->fields)._needSync = 0;
label_0406f8db:
  (__this_06->fields)._currentLerpWait = 0.05;
  *(undefined1 *)&(__this_06->fields)._finishedLoading = 1;
  return;
}


// Weather.WeatherManager$$UpdateReflectionTexture
// il2cpp: System_Collections_IEnumerator_o* Weather_WeatherManager__UpdateReflectionTexture (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x406f1e0

System_Collections_IEnumerator_o *
Weather_WeatherManager__UpdateReflectionTexture(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_WeatherScheduleRunner__o *pSVar4;
  Weather_WeatherScheduleRunner_array *array;
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *__this_00;
  Il2CppMethodPointer pIVar5;
  System_Collections_Generic_Dictionary_int__float__o *pSVar6;
  System_Collections_Generic_List_WeatherEffect__o *pSVar7;
  System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *__this_01;
  long lVar8;
  Settings_ListSetting_T__o *__this_02;
  Photon_Pun_PhotonView_o *pPVar9;
  System_Threading_CancellationTokenSource_o *a;
  undefined8 uVar10;
  Settings_StringSetting_o *pSVar11;
  System_String_o *schedule;
  Settings_StringSetting_c *pSVar12;
  Settings_BoolSetting_o *pSVar13;
  Weather_WeatherScheduleRunner_o *__this_03;
  char cVar14;
  bool_conflict bVar15;
  Weather_WeatherManager__UpdateReflectionTexture_d__30_o *__this_04;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  long lVar17;
  Settings_WeatherSet_o *pSVar18;
  System_Collections_IEnumerator_o *extraout_RAX;
  long *plVar19;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar20;
  Weather_WeatherManager__UpdateReflectionTexture_d__30_o **ppWVar21;
  Weather_WeatherManager_o *__this_05;
  Weather_WeatherManager_o *__this_06;
  undefined8 unaff_R12;
  Weather_WeatherManager_o *pWVar22;
  undefined8 unaff_R15;
  undefined1 auVar23 [12];
  Weather_WeatherManager__UpdateReflectionTexture_d__30_o *pWStack_20;
  undefined1 auStack_18 [8];
  System_Collections_IEnumerator_o *pSVar16;
  
  if (g_data_057ac2fe == '\0') {
    pWStack_20 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)0x406f1fc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UpdateReflectionTexture_d__30);
    g_data_057ac2fe = '\x01';
  }
  pWStack_20 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)0x406f212;
  __this_04 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UpdateReflectionTexture_d__30);
  pMVar20 = (MethodInfo *)0x0;
  pWStack_20 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)0x406f221;
  Weather_WeatherManager__UpdateReflectionTexture_d__30___ctor(__this_04,0,(MethodInfo *)0x0);
  if (__this_04 != (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)0x0) {
    (__this_04->fields).__4__this = __this;
    pWStack_20 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)0x406f239;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields).__4__this,__this);
    return (System_Collections_IEnumerator_o *)__this_04;
  }
  pWStack_20 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)0x406f249;
  il2cpp_runtime_helper_022b2c90();
  ppWVar21 = &pWStack_20;
  pWStack_20 = __this_04;
  if (g_data_057ac300 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac300 = '\x01';
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) != 0) goto label_0406f26d;
label_0406f2a5:
    il2cpp_runtime_helper_02337ed0();
    __this_05 = (Weather_WeatherManager_o *)**(long **)(TypeInfo_WeatherManager + 0xb8);
    if (__this_05 != (Weather_WeatherManager_o *)0x0) goto label_0406f27c;
label_0406f2bc:
    plVar19 = &TypeInfo_WeatherManager;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) goto label_0406f2a5;
label_0406f26d:
    __this_05 = (Weather_WeatherManager_o *)**(long **)(TypeInfo_WeatherManager + 0xb8);
    if (__this_05 == (Weather_WeatherManager_o *)0x0) goto label_0406f2bc;
label_0406f27c:
    ppWVar21 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o **)auStack_18;
    plVar19 = (long *)pWStack_20;
  }
  *(undefined8 *)((long)ppWVar21 + -8) = unaff_R15;
  *(Weather_WeatherManager_o **)((long)ppWVar21 + -0x10) = __this;
  *(undefined8 *)((long)ppWVar21 + -0x18) = unaff_R12;
  *(long **)((long)ppWVar21 + -0x20) = plVar19;
  pWVar22 = (Weather_WeatherManager_o *)((long)ppWVar21 + -0x38);
  if (g_data_057ac309 == '\0') {
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f2f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f303;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f30f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f31b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f327;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f333;
    il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherScheduleRunner_get_Current);
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f33f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_GetItemAt);
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f34b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f357;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f363;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Weather_WeatherScheduleRunner_GetEnu);
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f36f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f37b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f387;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f393;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f39f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f3ab;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f3b7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f3c3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f3cf;
    il2cpp_runtime_helper_023445d0(&"Map Default*");
    g_data_057ac309 = '\x01';
  }
  *(undefined8 *)((long)ppWVar21 + -0x38) = 0;
  *(undefined8 *)((long)ppWVar21 + -0x30) = 0;
  *(undefined8 *)((long)ppWVar21 + -0x28) = 0;
  *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f3ee;
  __this_06 = __this_05;
  Weather_WeatherManager__ResetCameras(__this_05,pMVar20);
  *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f3f3;
  Weather_WeatherManager__ResetSkyboxColors(__this_06,pMVar20);
  if (g_data_057ac307 == '\0') {
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f42f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac307 = '\x01';
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) != 0) goto label_0406f40f;
label_0406f449:
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f44e;
    il2cpp_runtime_helper_02337ed0();
    lVar17 = **(long **)(TypeInfo_WeatherManager + 0xb8);
    if (lVar17 == 0) goto label_0406f8fc;
label_0406f464:
    *(undefined4 *)(lVar17 + 0x9c) = 0;
    *(undefined8 *)(lVar17 + 0x94) = 0;
    pSVar4 = (__this_05->fields)._scheduleRunners;
    if (pSVar4 == (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) goto label_0406f8fc;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar3 = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < iVar3) {
      array = (pSVar4->fields)._items;
      in_RCX = (MethodInfo *)0x0;
      *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f4a6;
      System_Array__Clear((System_Array_o *)array,0,iVar3,(MethodInfo *)0x0);
    }
    __this_00 = (__this_05->fields)._effects;
    if (__this_00 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)
    goto label_0406f8fc;
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f4c3;
    System_Collections_Generic_Dictionary_Int32Enum__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Void_Clear);
    pSVar18 = (__this_05->fields)._currentWeather;
    if (pSVar18 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
    pMVar20 = (pSVar18->klass->vtable)._4_SetDefault.method;
    pIVar5 = (pSVar18->klass->vtable)._4_SetDefault.methodPtr;
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f4e1;
    (*pIVar5)(pSVar18,pMVar20);
    pSVar18 = (__this_05->fields)._startWeather;
    if (pSVar18 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
    pMVar20 = (pSVar18->klass->vtable)._4_SetDefault.method;
    pIVar5 = (pSVar18->klass->vtable)._4_SetDefault.methodPtr;
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f4ff;
    (*pIVar5)(pSVar18,pMVar20);
    pSVar18 = (__this_05->fields)._targetWeather;
    if (pSVar18 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
    pMVar20 = (pSVar18->klass->vtable)._4_SetDefault.method;
    pIVar5 = (pSVar18->klass->vtable)._4_SetDefault.methodPtr;
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f51d;
    (*pIVar5)(pSVar18,pMVar20);
    pSVar6 = (__this_05->fields)._targetWeatherStartTimes;
    if (pSVar6 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_0406f8fc;
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f53a;
    System_Collections_Generic_Dictionary_int__float___Clear(pSVar6,MethodInfo_Void_Clear);
    pSVar6 = (__this_05->fields)._targetWeatherEndTimes;
    if (pSVar6 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_0406f8fc;
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f550;
    System_Collections_Generic_Dictionary_int__float___Clear(pSVar6,MethodInfo_Void_Clear);
    pSVar7 = (__this_05->fields)._needApply;
    if (pSVar7 == (System_Collections_Generic_List_WeatherEffect__o *)0x0) goto label_0406f8fc;
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar7->fields)._size = 0;
    (__this_05->fields)._currentTime = 0.0;
    __this_01 = (__this_05->fields)._currentScheduleWait;
    if (__this_01 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0)
    goto label_0406f8fc;
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f592;
    pMVar20 = MethodInfo_Void_Clear;
    System_Collections_Generic_Dictionary_object__float___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
               (MethodInfo_310C5C0 *)MethodInfo_Void_Clear);
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f59a;
    Weather_WeatherManager__CreateEffects(__this_05,pMVar20);
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f5a2;
    Weather_WeatherManager__SetSceneWeather(__this_05,pMVar20);
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f5b4;
    Weather_WeatherManager__ApplyCurrentWeather(__this_05,1,1,in_RCX);
    pSVar16 = *(System_Collections_IEnumerator_o **)(TypeInfo_SceneLoader + 0xb8);
    if (*(int *)&pSVar16->monitor != 2) goto label_0406f8db;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f5f7;
      il2cpp_runtime_helper_02337ed0();
      *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f5fe;
      bVar15 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      pSVar16 = (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_00,bVar15);
      cVar14 = (char)bVar15;
    }
    else {
      *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f5e9;
      bVar15 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      pSVar16 = (System_Collections_IEnumerator_o *)CONCAT44(extraout_var,bVar15);
      cVar14 = (char)bVar15;
    }
    if (cVar14 == '\0') goto label_0406f8db;
    lVar17 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
    if ((((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x20), lVar17 == 0)) ||
        (lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50), lVar8 == 0)) ||
       ((lVar8 = *(long *)(lVar8 + 0x60), lVar8 == 0 ||
        (__this_02 = *(Settings_ListSetting_T__o **)(lVar17 + 0x28),
        __this_02 == (Settings_ListSetting_T__o *)0x0)))) goto label_0406f8fc;
    iVar3 = *(int32_t *)(lVar8 + 0x14);
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f66a;
    __this = (Weather_WeatherManager_o *)Settings_ListSetting_object___GetItemAt(__this_02,iVar3,MethodInfo_BaseSetting_GetItemAt)
    ;
    if (__this != (Weather_WeatherManager_o *)0x0) {
      bVar2 = (TypeInfo_WeatherSet->_2).naturalAligment;
      if ((bVar2 <= (__this->klass->_2).naturalAligment) &&
         ((__this->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_WeatherSet)) goto label_0406f6a4;
      goto label_0406f906;
    }
label_0406f6a4:
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f774;
      il2cpp_runtime_helper_02337ed0();
      lVar17 = *(long *)(TypeInfo_MapLoader + 0xb8);
      if (*(char *)(lVar17 + 0x80) != '\0') goto label_0406f6cf;
label_0406f7aa:
      pSVar18 = (__this_05->fields)._currentWeather;
      if (pSVar18 != (Settings_WeatherSet_o *)0x0) {
        pMVar20 = (pSVar18->klass->vtable)._9_Copy.method;
        pIVar5 = (pSVar18->klass->vtable)._9_Copy.methodPtr;
        *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f7cb;
        (*pIVar5)(pSVar18,__this,pMVar20);
        pSVar18 = (__this_05->fields)._currentWeather;
        pMVar20 = extraout_RDX_00;
        if (pSVar18 != (Settings_WeatherSet_o *)0x0) goto label_0406f7d9;
      }
      goto label_0406f8fc;
    }
    lVar17 = *(long *)(TypeInfo_MapLoader + 0xb8);
    if (*(char *)(lVar17 + 0x80) == '\0') goto label_0406f7aa;
label_0406f6cf:
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f792;
      il2cpp_runtime_helper_02337ed0();
      if (*(long *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x88) != 0) goto label_0406f6ea;
      goto label_0406f7aa;
    }
    if (*(long *)(lVar17 + 0x88) == 0) goto label_0406f7aa;
label_0406f6ea:
    if ((__this == (Weather_WeatherManager_o *)0x0) ||
       (pPVar9 = (__this->fields).pvCache, pPVar9 == (Photon_Pun_PhotonView_o *)0x0)) goto label_0406f8fc;
    a = (pPVar9->fields).m_CancellationTokenSource;
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f715;
    bVar15 = System_String__op_Equality((System_String_o *)a,"Map Default*",(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') goto label_0406f7aa;
    pSVar18 = (__this_05->fields)._currentWeather;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f733;
      il2cpp_runtime_helper_02337ed0();
    }
    if (pSVar18 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
    uVar10 = *(undefined8 *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x88);
    pMVar20 = (pSVar18->klass->vtable)._9_Copy.method;
    pIVar5 = (pSVar18->klass->vtable)._9_Copy.methodPtr;
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f760;
    (*pIVar5)(pSVar18,uVar10,pMVar20);
    pSVar18 = (__this_05->fields)._currentWeather;
    pMVar20 = extraout_RDX;
    if (pSVar18 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
label_0406f7d9:
    pSVar11 = (pSVar18->fields).Schedule;
    if (pSVar11 == (Settings_StringSetting_o *)0x0) goto label_0406f8fc;
    schedule = (pSVar11->fields)._value;
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f7f5;
    Weather_WeatherManager__CreateScheduleRunners(__this_05,schedule,pMVar20);
    pSVar18 = (__this_05->fields)._currentWeather;
    if ((pSVar18 == (Settings_WeatherSet_o *)0x0) ||
       (pSVar11 = (pSVar18->fields).Schedule, pSVar11 == (Settings_StringSetting_o *)0x0)) goto label_0406f8fc;
    pSVar12 = pSVar11->klass;
    pMVar20 = (pSVar12->vtable)._4_SetDefault.method;
    pIVar5 = (pSVar12->vtable)._4_SetDefault.methodPtr;
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f823;
    (*pIVar5)();
    pSVar18 = (__this_05->fields)._currentWeather;
    if ((pSVar18 == (Settings_WeatherSet_o *)0x0) ||
       (pSVar13 = (pSVar18->fields).UseSchedule, pSVar13 == (Settings_BoolSetting_o *)0x0)) goto label_0406f8fc;
    if (*(char *)((long)&(pSVar13->fields).DefaultValue + 1) != '\0') {
      pSVar4 = (__this_05->fields)._scheduleRunners;
      if (pSVar4 == (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) goto label_0406f8fc;
      *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f86a;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)((long)ppWVar21 + -0x38),
                 (System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T_Enumerator_Weather_WeatherScheduleRunner_GetEnu);
      while( true ) {
        *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f88b;
        bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o)
                            *(System_Collections_Generic_List_Enumerator_object__Fields *)
                             ((long)ppWVar21 + -0x38),(MethodInfo_321A1D0 *)((long)ppWVar21 + -0x38));
        if ((char)bVar15 == '\0') break;
        __this_03 = *(Weather_WeatherScheduleRunner_o **)((long)ppWVar21 + -0x28);
        if (__this_03 == (Weather_WeatherScheduleRunner_o *)0x0) goto label_0406f901;
        *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f8a3;
        Weather_WeatherScheduleRunner__ProcessSchedule(__this_03,(MethodInfo *)0x0);
        *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f8ad;
        Weather_WeatherScheduleRunner__ConsumeSchedule(__this_03,(MethodInfo *)0x0);
      }
      *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f8c1;
      pMVar20 = MethodInfo_Void_Dispose;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o)
                 *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppWVar21 + -0x38),
                 (MethodInfo_321A1C0 *)((long)ppWVar21 + -0x38));
    }
  }
  else {
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) goto label_0406f449;
label_0406f40f:
    lVar17 = **(long **)(TypeInfo_WeatherManager + 0xb8);
    if (lVar17 != 0) goto label_0406f464;
label_0406f8fc:
    pWVar22 = __this;
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f901;
    il2cpp_runtime_helper_022b2c90();
label_0406f901:
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f906;
    il2cpp_runtime_helper_022b2c90();
    __this = pWVar22;
label_0406f906:
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f90e;
    auVar23 = il2cpp_runtime_helper_022b2fd0(__this);
    if (auVar23._8_4_ != 1) {
label_0406f95d:
      *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f977;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o)
                 *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppWVar21 + -0x38),
                 (MethodInfo_321A1C0 *)((long)ppWVar21 + -0x38));
      *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f984;
      _Unwind_Resume(auVar23._0_8_);
    }
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f932;
    plVar19 = (long *)__cxa_begin_catch(auVar23._0_8_);
    lVar17 = *plVar19;
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f93a;
    __cxa_end_catch();
    *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f94c;
    pMVar20 = MethodInfo_Void_Dispose;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o)
               *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppWVar21 + -0x38),
               (MethodInfo_321A1C0 *)((long)ppWVar21 + -0x38));
    if (lVar17 != 0) {
      *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f95d;
      il2cpp_runtime_helper_022fefe0(lVar17);
      goto label_0406f95d;
    }
  }
  *(undefined8 *)((long)ppWVar21 + -0x40) = 0x406f8c9;
  Weather_WeatherManager__SyncWeather(__this_05,pMVar20);
  (__this_05->fields)._currentSyncWait = 5.0;
  *(undefined1 *)&(__this_05->fields)._needSync = 0;
  pSVar16 = extraout_RAX;
label_0406f8db:
  (__this_05->fields)._currentLerpWait = 0.05;
  *(undefined1 *)&(__this_05->fields)._finishedLoading = 1;
  return pSVar16;
}


// Weather.WeatherManager$$DisableCaveMap
// il2cpp: void Weather_WeatherManager__DisableCaveMap (const MethodInfo* method);
// 0x406ee10

void Weather_WeatherManager__DisableCaveMap(MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t iVar3;
  UnityEngine_ReflectionProbe_o *__this;
  System_Collections_Generic_List_WeatherScheduleRunner__o *pSVar4;
  Weather_WeatherScheduleRunner_array *array;
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *__this_00;
  Il2CppMethodPointer pIVar5;
  System_Collections_Generic_Dictionary_int__float__o *pSVar6;
  System_Collections_Generic_List_WeatherEffect__o *pSVar7;
  System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *__this_01;
  long lVar8;
  Settings_ListSetting_T__o *__this_02;
  Photon_Pun_PhotonView_o *pPVar9;
  System_Threading_CancellationTokenSource_o *a;
  undefined8 uVar10;
  Settings_StringSetting_o *pSVar11;
  System_String_o *schedule;
  Settings_StringSetting_c *pSVar12;
  Settings_BoolSetting_o *pSVar13;
  Weather_WeatherScheduleRunner_o *__this_03;
  char cVar14;
  bool_conflict bVar15;
  UnityEngine_Material_o *value;
  Il2CppObject *pIVar16;
  Photon_Pun_PhotonView_o *pPVar17;
  Weather_WeatherManager__UpdateReflectionTexture_d__30_o *__this_04;
  Photon_Pun_PhotonView_o *__this_05;
  long lVar18;
  Settings_WeatherSet_o *pSVar19;
  long *plVar20;
  MethodInfo *pMVar21;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  Weather_WeatherManager_o **ppWVar22;
  Weather_WeatherManager__UpdateReflectionTexture_d__30_o **ppWVar23;
  MethodInfo *pMVar24;
  Weather_WeatherManager_o *__this_06;
  Weather_WeatherManager_o *__this_07;
  undefined8 unaff_R12;
  Photon_Pun_PhotonView_o *unaff_R14;
  undefined1 auVar25 [12];
  Weather_WeatherManager__UpdateReflectionTexture_d__30_o *pWStack_40;
  undefined8 uStack_38;
  Weather_WeatherManager_o **ppWStack_30;
  Photon_Pun_PhotonView_o *pPStack_28;
  Weather_WeatherManager_o **ppWStack_20;
  
  if (g_data_057ac2ff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac2ff = '\x01';
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) == 0) goto label_0406eea1;
label_0406ee2d:
    lVar18 = *(long *)TypeInfo_WeatherManager[1].monitor;
  }
  else {
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) != 0) goto label_0406ee2d;
label_0406eea1:
    il2cpp_runtime_helper_02337ed0();
    lVar18 = *(long *)TypeInfo_WeatherManager[1].monitor;
  }
  if (lVar18 != 0) {
    *(undefined1 *)(lVar18 + 0x91) = 0;
    UnityEngine_RenderSettings__set_skybox((UnityEngine_Material_o *)0x0,(MethodInfo *)0x0);
    UnityEngine_RenderSettings__set_defaultReflectionMode(0,(MethodInfo *)0x0);
    UnityEngine_RenderSettings__set_ambientMode(3,(MethodInfo *)0x0);
    UnityEngine_RenderSettings__set_ambientIntensity(1.0,(MethodInfo *)0x0);
    UnityEngine_RenderSettings__set_reflectionIntensity(0.0,(MethodInfo *)0x0);
    return;
  }
  ppWVar22 = &TypeInfo_WeatherManager;
  il2cpp_runtime_helper_022b2c90();
  ppWStack_20 = &TypeInfo_WeatherManager;
  if (g_data_057ac2fd == '\0') {
    pPStack_28 = (Photon_Pun_PhotonView_o *)0x406ef0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    pPStack_28 = (Photon_Pun_PhotonView_o *)0x406ef1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ReflectionProbe_AddComponent_ReflectionProbe);
    pPStack_28 = (Photon_Pun_PhotonView_o *)0x406ef27;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pPStack_28 = (Photon_Pun_PhotonView_o *)0x406ef33;
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    pPStack_28 = (Photon_Pun_PhotonView_o *)0x406ef3f;
    il2cpp_runtime_helper_023445d0(&"CaveMap1");
    g_data_057ac2fd = '\x01';
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) == 0) goto label_0406ef59;
label_0406eee1:
    plVar20 = TypeInfo_WeatherManager[1].monitor;
    lVar18 = *plVar20;
    pMVar21 = (MethodInfo *)0x0;
    __this_05 = (Photon_Pun_PhotonView_o *)TypeInfo_WeatherManager;
    if (lVar18 != 0) {
label_0406eef4:
      if (*(char *)(lVar18 + 0x91) != '\0') {
        return;
      }
      __this_05 = (Photon_Pun_PhotonView_o *)TypeInfo_WeatherManager;
      if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) == 0) {
        pPStack_28 = (Photon_Pun_PhotonView_o *)0x406ef83;
        il2cpp_runtime_helper_02337ed0();
        plVar20 = TypeInfo_WeatherManager[1].monitor;
      }
      pMVar21 = (MethodInfo *)*plVar20;
      if (pMVar21 != (MethodInfo *)0x0) {
        *(undefined1 *)((long)&pMVar21[1].field7_0x38 + 1) = 1;
        __this_05 = (Photon_Pun_PhotonView_o *)0x0;
        if ((System_Collections_Generic_Dictionary_object__object__o *)plVar20[1] !=
            (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pPStack_28 = (Photon_Pun_PhotonView_o *)0x406efc6;
          value = (UnityEngine_Material_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)plVar20[1],
                             "CaveMap1",MethodInfo_Material_get_Item);
          pPStack_28 = (Photon_Pun_PhotonView_o *)0x406efd0;
          UnityEngine_RenderSettings__set_skybox(value,(MethodInfo *)0x0);
          pPStack_28 = (Photon_Pun_PhotonView_o *)0x406efdc;
          UnityEngine_RenderSettings__set_defaultReflectionMode(1,(MethodInfo *)0x0);
          pPStack_28 = (Photon_Pun_PhotonView_o *)0x406efe5;
          UnityEngine_RenderSettings__set_ambientMode(0,(MethodInfo *)0x0);
          pPStack_28 = (Photon_Pun_PhotonView_o *)0x406eff4;
          UnityEngine_RenderSettings__set_ambientIntensity(1.0,(MethodInfo *)0x0);
          pPStack_28 = (Photon_Pun_PhotonView_o *)0x406f003;
          UnityEngine_RenderSettings__set_reflectionIntensity(1.0,(MethodInfo *)0x0);
          pPStack_28 = (Photon_Pun_PhotonView_o *)0x406f012;
          unaff_R14 = (Photon_Pun_PhotonView_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          pPStack_28 = (Photon_Pun_PhotonView_o *)0x406f01f;
          __this_05 = unaff_R14;
          UnityEngine_GameObject___ctor_4dfc3c0((UnityEngine_GameObject_o *)unaff_R14,(MethodInfo *)0x0);
          if (unaff_R14 != (Photon_Pun_PhotonView_o *)0x0) {
            lVar18 = *(long *)TypeInfo_WeatherManager[1].monitor;
            pPStack_28 = (Photon_Pun_PhotonView_o *)0x406f047;
            __this_05 = unaff_R14;
            pIVar16 = UnityEngine_GameObject__AddComponent_object_
                                ((UnityEngine_GameObject_o *)unaff_R14,MethodInfo_ReflectionProbe_AddComponent_ReflectionProbe);
            ppWVar22 = (Weather_WeatherManager_o **)0x0;
            if (lVar18 != 0) {
              *(Il2CppObject **)(lVar18 + 0xa0) = pIVar16;
              ppWVar22 = (Weather_WeatherManager_o **)(lVar18 + 0xa0);
              pPStack_28 = (Photon_Pun_PhotonView_o *)0x406f069;
              __this_05 = (Photon_Pun_PhotonView_o *)ppWVar22;
              il2cpp_runtime_helper_022b4080();
              if ((*(long *)TypeInfo_WeatherManager[1].monitor != 0) &&
                 (__this_05 = *(Photon_Pun_PhotonView_o **)(*(long *)TypeInfo_WeatherManager[1].monitor + 0xa0),
                 __this_05 != (Photon_Pun_PhotonView_o *)0x0)) {
                pPStack_28 = (Photon_Pun_PhotonView_o *)0x406f098;
                UnityEngine_ReflectionProbe__set_cullingMask
                          ((UnityEngine_ReflectionProbe_o *)__this_05,0,(MethodInfo *)0x0);
                if ((*(long *)TypeInfo_WeatherManager[1].monitor != 0) &&
                   (__this_05 = *(Photon_Pun_PhotonView_o **)(*(long *)TypeInfo_WeatherManager[1].monitor + 0xa0),
                   __this_05 != (Photon_Pun_PhotonView_o *)0x0)) {
                  pPStack_28 = (Photon_Pun_PhotonView_o *)0x406f0ca;
                  UnityEngine_ReflectionProbe__set_refreshMode
                            ((UnityEngine_ReflectionProbe_o *)__this_05,2,(MethodInfo *)0x0);
                  if ((*(long *)TypeInfo_WeatherManager[1].monitor != 0) &&
                     (__this_05 = *(Photon_Pun_PhotonView_o **)(*(long *)TypeInfo_WeatherManager[1].monitor + 0xa0),
                     __this_05 != (Photon_Pun_PhotonView_o *)0x0)) {
                    pPStack_28 = (Photon_Pun_PhotonView_o *)0x406f0fc;
                    UnityEngine_ReflectionProbe__set_mode
                              ((UnityEngine_ReflectionProbe_o *)__this_05,1,(MethodInfo *)0x0);
                    if (*(long *)TypeInfo_WeatherManager[1].monitor != 0) {
                      __this = *(UnityEngine_ReflectionProbe_o **)(*(long *)TypeInfo_WeatherManager[1].monitor + 0xa0);
                      __this_05 = (Photon_Pun_PhotonView_o *)0x0;
                      if (__this != (UnityEngine_ReflectionProbe_o *)0x0) {
                        pPStack_28 = (Photon_Pun_PhotonView_o *)0x406f12e;
                        UnityEngine_ReflectionProbe__set_timeSlicingMode(__this,2,(MethodInfo *)0x0);
                        __this_05 = (Photon_Pun_PhotonView_o *)0x0;
                        pPStack_28 = (Photon_Pun_PhotonView_o *)0x406f135;
                        UnityEngine_DynamicGI__UpdateEnvironment((MethodInfo *)0x0);
                        if ((*(long *)TypeInfo_WeatherManager[1].monitor != 0) &&
                           (__this_05 = *(Photon_Pun_PhotonView_o **)(*(long *)TypeInfo_WeatherManager[1].monitor + 0xa0)
                           , __this_05 != (Photon_Pun_PhotonView_o *)0x0)) {
                          pPStack_28 = (Photon_Pun_PhotonView_o *)0x406f15e;
                          UnityEngine_ReflectionProbe__RenderProbe
                                    ((UnityEngine_ReflectionProbe_o *)__this_05,(MethodInfo *)0x0);
                          unaff_R14 = *(Photon_Pun_PhotonView_o **)TypeInfo_WeatherManager[1].monitor;
                          if (unaff_R14 != (Photon_Pun_PhotonView_o *)0x0) {
                            if (g_data_057ac2fe == '\0') {
                              pPStack_28 = (Photon_Pun_PhotonView_o *)0x406f185;
                              il2cpp_runtime_helper_023445d0(&TypeInfo_UpdateReflectionTexture_d__30);
                              g_data_057ac2fe = '\x01';
                            }
                            pPStack_28 = (Photon_Pun_PhotonView_o *)0x406f19b;
                            pPVar17 = (Photon_Pun_PhotonView_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UpdateReflectionTexture_d__30);
                            pPStack_28 = (Photon_Pun_PhotonView_o *)0x406f1aa;
                            __this_05 = pPVar17;
                            Weather_WeatherManager__UpdateReflectionTexture_d__30___ctor
                                      ((Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)pPVar17,0,
                                       (MethodInfo *)0x0);
                            ppWVar22 = (Weather_WeatherManager_o **)0x0;
                            if (pPVar17 != (Photon_Pun_PhotonView_o *)0x0) {
                              *(Photon_Pun_PhotonView_o **)&(pPVar17->fields).Group = unaff_R14;
                              pPStack_28 = (Photon_Pun_PhotonView_o *)0x406f1c2;
                              il2cpp_runtime_helper_022b4080(&(pPVar17->fields).Group,unaff_R14);
                              UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                        ((UnityEngine_MonoBehaviour_o *)unaff_R14,
                                         (System_Collections_IEnumerator_o *)pPVar17,(MethodInfo *)0x0);
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
  else {
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) != 0) goto label_0406eee1;
label_0406ef59:
    pPStack_28 = (Photon_Pun_PhotonView_o *)0x406ef5e;
    il2cpp_runtime_helper_02337ed0();
    plVar20 = TypeInfo_WeatherManager[1].monitor;
    lVar18 = *plVar20;
    if (lVar18 != 0) goto label_0406eef4;
    pMVar21 = (MethodInfo *)0x0;
    __this_05 = (Photon_Pun_PhotonView_o *)TypeInfo_WeatherManager;
  }
  pPStack_28 = (Photon_Pun_PhotonView_o *)0x406f1d9;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  ppWStack_30 = ppWVar22;
  pPStack_28 = unaff_R14;
  if (g_data_057ac2fe == '\0') {
    pWStack_40 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)0x406f1fc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UpdateReflectionTexture_d__30);
    g_data_057ac2fe = '\x01';
  }
  pWStack_40 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)0x406f212;
  __this_04 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UpdateReflectionTexture_d__30);
  pMVar24 = (MethodInfo *)0x0;
  pWStack_40 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)0x406f221;
  Weather_WeatherManager__UpdateReflectionTexture_d__30___ctor(__this_04,0,(MethodInfo *)0x0);
  if (__this_04 != (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)0x0) {
    (__this_04->fields).__4__this = (Weather_WeatherManager_o *)__this_05;
    pWStack_40 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)0x406f239;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields).__4__this,__this_05);
    return;
  }
  pWStack_40 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)0x406f249;
  il2cpp_runtime_helper_022b2c90();
  ppWVar23 = &pWStack_40;
  pWStack_40 = __this_04;
  if (g_data_057ac300 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac300 = '\x01';
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) == 0) goto label_0406f2a5;
label_0406f26d:
    __this_06 = *(Weather_WeatherManager_o **)TypeInfo_WeatherManager[1].monitor;
    if (__this_06 != (Weather_WeatherManager_o *)0x0) goto label_0406f27c;
label_0406f2bc:
    ppWVar22 = &TypeInfo_WeatherManager;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) != 0) goto label_0406f26d;
label_0406f2a5:
    il2cpp_runtime_helper_02337ed0();
    __this_06 = *(Weather_WeatherManager_o **)TypeInfo_WeatherManager[1].monitor;
    if (__this_06 == (Weather_WeatherManager_o *)0x0) goto label_0406f2bc;
label_0406f27c:
    ppWVar23 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o **)&uStack_38;
    ppWVar22 = (Weather_WeatherManager_o **)pWStack_40;
  }
  *(Weather_WeatherManager_o ***)((long)ppWVar23 + -8) = &TypeInfo_WeatherManager;
  *(Photon_Pun_PhotonView_o **)((long)ppWVar23 + -0x10) = __this_05;
  *(undefined8 *)((long)ppWVar23 + -0x18) = unaff_R12;
  *(Weather_WeatherManager_o ***)((long)ppWVar23 + -0x20) = ppWVar22;
  pPVar17 = (Photon_Pun_PhotonView_o *)((long)ppWVar23 + -0x38);
  if (g_data_057ac309 == '\0') {
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f2f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f303;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f30f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f31b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f327;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f333;
    il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherScheduleRunner_get_Current);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f33f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_GetItemAt);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f34b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f357;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f363;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Weather_WeatherScheduleRunner_GetEnu);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f36f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f37b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f387;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f393;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f39f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f3ab;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f3b7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f3c3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f3cf;
    il2cpp_runtime_helper_023445d0(&"Map Default*");
    g_data_057ac309 = '\x01';
  }
  *(undefined8 *)((long)ppWVar23 + -0x38) = 0;
  *(undefined8 *)((long)ppWVar23 + -0x30) = 0;
  *(undefined8 *)((long)ppWVar23 + -0x28) = 0;
  *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f3ee;
  __this_07 = __this_06;
  Weather_WeatherManager__ResetCameras(__this_06,pMVar24);
  *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f3f3;
  Weather_WeatherManager__ResetSkyboxColors(__this_07,pMVar24);
  if (g_data_057ac307 == '\0') {
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f42f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac307 = '\x01';
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) == 0) goto label_0406f449;
label_0406f40f:
    lVar18 = *(long *)TypeInfo_WeatherManager[1].monitor;
    if (lVar18 == 0) goto label_0406f8fc;
label_0406f464:
    *(undefined4 *)(lVar18 + 0x9c) = 0;
    *(undefined8 *)(lVar18 + 0x94) = 0;
    pSVar4 = (__this_06->fields)._scheduleRunners;
    if (pSVar4 == (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) goto label_0406f8fc;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar3 = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < iVar3) {
      array = (pSVar4->fields)._items;
      pMVar21 = (MethodInfo *)0x0;
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f4a6;
      System_Array__Clear((System_Array_o *)array,0,iVar3,(MethodInfo *)0x0);
    }
    __this_00 = (__this_06->fields)._effects;
    if (__this_00 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)
    goto label_0406f8fc;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f4c3;
    System_Collections_Generic_Dictionary_Int32Enum__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Void_Clear);
    pSVar19 = (__this_06->fields)._currentWeather;
    if (pSVar19 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
    pMVar24 = (pSVar19->klass->vtable)._4_SetDefault.method;
    pIVar5 = (pSVar19->klass->vtable)._4_SetDefault.methodPtr;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f4e1;
    (*pIVar5)(pSVar19,pMVar24);
    pSVar19 = (__this_06->fields)._startWeather;
    if (pSVar19 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
    pMVar24 = (pSVar19->klass->vtable)._4_SetDefault.method;
    pIVar5 = (pSVar19->klass->vtable)._4_SetDefault.methodPtr;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f4ff;
    (*pIVar5)(pSVar19,pMVar24);
    pSVar19 = (__this_06->fields)._targetWeather;
    if (pSVar19 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
    pMVar24 = (pSVar19->klass->vtable)._4_SetDefault.method;
    pIVar5 = (pSVar19->klass->vtable)._4_SetDefault.methodPtr;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f51d;
    (*pIVar5)(pSVar19,pMVar24);
    pSVar6 = (__this_06->fields)._targetWeatherStartTimes;
    if (pSVar6 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_0406f8fc;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f53a;
    System_Collections_Generic_Dictionary_int__float___Clear(pSVar6,MethodInfo_Void_Clear);
    pSVar6 = (__this_06->fields)._targetWeatherEndTimes;
    if (pSVar6 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_0406f8fc;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f550;
    System_Collections_Generic_Dictionary_int__float___Clear(pSVar6,MethodInfo_Void_Clear);
    pSVar7 = (__this_06->fields)._needApply;
    if (pSVar7 == (System_Collections_Generic_List_WeatherEffect__o *)0x0) goto label_0406f8fc;
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar7->fields)._size = 0;
    (__this_06->fields)._currentTime = 0.0;
    __this_01 = (__this_06->fields)._currentScheduleWait;
    if (__this_01 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0)
    goto label_0406f8fc;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f592;
    pMVar24 = MethodInfo_Void_Clear;
    System_Collections_Generic_Dictionary_object__float___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
               (MethodInfo_310C5C0 *)MethodInfo_Void_Clear);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f59a;
    Weather_WeatherManager__CreateEffects(__this_06,pMVar24);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f5a2;
    Weather_WeatherManager__SetSceneWeather(__this_06,pMVar24);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f5b4;
    Weather_WeatherManager__ApplyCurrentWeather(__this_06,1,1,pMVar21);
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) != 2) goto label_0406f8db;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f5f7;
      il2cpp_runtime_helper_02337ed0();
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f5fe;
      bVar15 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar14 = (char)bVar15;
    }
    else {
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f5e9;
      bVar15 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar14 = (char)bVar15;
    }
    if (cVar14 == '\0') goto label_0406f8db;
    lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
    if ((((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x20), lVar18 == 0)) ||
        (lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50), lVar8 == 0)) ||
       ((lVar8 = *(long *)(lVar8 + 0x60), lVar8 == 0 ||
        (__this_02 = *(Settings_ListSetting_T__o **)(lVar18 + 0x28),
        __this_02 == (Settings_ListSetting_T__o *)0x0)))) goto label_0406f8fc;
    iVar3 = *(int32_t *)(lVar8 + 0x14);
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f66a;
    __this_05 = (Photon_Pun_PhotonView_o *)
                Settings_ListSetting_object___GetItemAt(__this_02,iVar3,MethodInfo_BaseSetting_GetItemAt);
    if (__this_05 != (Photon_Pun_PhotonView_o *)0x0) {
      bVar2 = (TypeInfo_WeatherSet->_2).naturalAligment;
      if ((bVar2 <= (((Weather_WeatherManager_c *)__this_05->klass)->_2).naturalAligment) &&
         ((((Weather_WeatherManager_c *)__this_05->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_WeatherSet
         )) goto label_0406f6a4;
      goto label_0406f906;
    }
label_0406f6a4:
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f774;
      il2cpp_runtime_helper_02337ed0();
      lVar18 = *(long *)(TypeInfo_MapLoader + 0xb8);
      if (*(char *)(lVar18 + 0x80) != '\0') goto label_0406f6cf;
label_0406f7aa:
      pSVar19 = (__this_06->fields)._currentWeather;
      if (pSVar19 != (Settings_WeatherSet_o *)0x0) {
        pMVar21 = (pSVar19->klass->vtable)._9_Copy.method;
        pIVar5 = (pSVar19->klass->vtable)._9_Copy.methodPtr;
        *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f7cb;
        (*pIVar5)(pSVar19,__this_05,pMVar21);
        pSVar19 = (__this_06->fields)._currentWeather;
        pMVar21 = extraout_RDX_00;
        if (pSVar19 != (Settings_WeatherSet_o *)0x0) goto label_0406f7d9;
      }
      goto label_0406f8fc;
    }
    lVar18 = *(long *)(TypeInfo_MapLoader + 0xb8);
    if (*(char *)(lVar18 + 0x80) == '\0') goto label_0406f7aa;
label_0406f6cf:
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f792;
      il2cpp_runtime_helper_02337ed0();
      if (*(long *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x88) != 0) goto label_0406f6ea;
      goto label_0406f7aa;
    }
    if (*(long *)(lVar18 + 0x88) == 0) goto label_0406f7aa;
label_0406f6ea:
    if ((__this_05 == (Photon_Pun_PhotonView_o *)0x0) ||
       (pPVar9 = *(Photon_Pun_PhotonView_o **)&(__this_05->fields).Group,
       pPVar9 == (Photon_Pun_PhotonView_o *)0x0)) goto label_0406f8fc;
    a = (pPVar9->fields).m_CancellationTokenSource;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f715;
    bVar15 = System_String__op_Equality((System_String_o *)a,"Map Default*",(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') goto label_0406f7aa;
    pSVar19 = (__this_06->fields)._currentWeather;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f733;
      il2cpp_runtime_helper_02337ed0();
    }
    if (pSVar19 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
    uVar10 = *(undefined8 *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x88);
    pMVar21 = (pSVar19->klass->vtable)._9_Copy.method;
    pIVar5 = (pSVar19->klass->vtable)._9_Copy.methodPtr;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f760;
    (*pIVar5)(pSVar19,uVar10,pMVar21);
    pSVar19 = (__this_06->fields)._currentWeather;
    pMVar21 = extraout_RDX;
    if (pSVar19 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
label_0406f7d9:
    pSVar11 = (pSVar19->fields).Schedule;
    if (pSVar11 == (Settings_StringSetting_o *)0x0) goto label_0406f8fc;
    schedule = (pSVar11->fields)._value;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f7f5;
    Weather_WeatherManager__CreateScheduleRunners(__this_06,schedule,pMVar21);
    pSVar19 = (__this_06->fields)._currentWeather;
    if ((pSVar19 == (Settings_WeatherSet_o *)0x0) ||
       (pSVar11 = (pSVar19->fields).Schedule, pSVar11 == (Settings_StringSetting_o *)0x0)) goto label_0406f8fc;
    pSVar12 = pSVar11->klass;
    pMVar21 = (pSVar12->vtable)._4_SetDefault.method;
    pIVar5 = (pSVar12->vtable)._4_SetDefault.methodPtr;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f823;
    (*pIVar5)();
    pSVar19 = (__this_06->fields)._currentWeather;
    if ((pSVar19 == (Settings_WeatherSet_o *)0x0) ||
       (pSVar13 = (pSVar19->fields).UseSchedule, pSVar13 == (Settings_BoolSetting_o *)0x0)) goto label_0406f8fc;
    if (*(char *)((long)&(pSVar13->fields).DefaultValue + 1) != '\0') {
      pSVar4 = (__this_06->fields)._scheduleRunners;
      if (pSVar4 == (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) goto label_0406f8fc;
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f86a;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)((long)ppWVar23 + -0x38),
                 (System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T_Enumerator_Weather_WeatherScheduleRunner_GetEnu);
      while( true ) {
        *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f88b;
        bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o)
                            *(System_Collections_Generic_List_Enumerator_object__Fields *)
                             ((long)ppWVar23 + -0x38),(MethodInfo_321A1D0 *)((long)ppWVar23 + -0x38));
        if ((char)bVar15 == '\0') break;
        __this_03 = *(Weather_WeatherScheduleRunner_o **)((long)ppWVar23 + -0x28);
        if (__this_03 == (Weather_WeatherScheduleRunner_o *)0x0) goto label_0406f901;
        *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f8a3;
        Weather_WeatherScheduleRunner__ProcessSchedule(__this_03,(MethodInfo *)0x0);
        *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f8ad;
        Weather_WeatherScheduleRunner__ConsumeSchedule(__this_03,(MethodInfo *)0x0);
      }
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f8c1;
      pMVar21 = MethodInfo_Void_Dispose;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o)
                 *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppWVar23 + -0x38),
                 (MethodInfo_321A1C0 *)((long)ppWVar23 + -0x38));
    }
  }
  else {
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) != 0) goto label_0406f40f;
label_0406f449:
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f44e;
    il2cpp_runtime_helper_02337ed0();
    lVar18 = *(long *)TypeInfo_WeatherManager[1].monitor;
    if (lVar18 != 0) goto label_0406f464;
label_0406f8fc:
    pPVar17 = __this_05;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f901;
    il2cpp_runtime_helper_022b2c90();
label_0406f901:
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f906;
    il2cpp_runtime_helper_022b2c90();
    __this_05 = pPVar17;
label_0406f906:
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f90e;
    auVar25 = il2cpp_runtime_helper_022b2fd0(__this_05);
    if (auVar25._8_4_ != 1) {
label_0406f95d:
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f977;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o)
                 *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppWVar23 + -0x38),
                 (MethodInfo_321A1C0 *)((long)ppWVar23 + -0x38));
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f984;
      _Unwind_Resume(auVar25._0_8_);
    }
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f932;
    plVar20 = (long *)__cxa_begin_catch(auVar25._0_8_);
    lVar18 = *plVar20;
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f93a;
    __cxa_end_catch();
    *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f94c;
    pMVar21 = MethodInfo_Void_Dispose;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o)
               *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppWVar23 + -0x38),
               (MethodInfo_321A1C0 *)((long)ppWVar23 + -0x38));
    if (lVar18 != 0) {
      *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f95d;
      il2cpp_runtime_helper_022fefe0(lVar18);
      goto label_0406f95d;
    }
  }
  *(undefined8 *)((long)ppWVar23 + -0x40) = 0x406f8c9;
  Weather_WeatherManager__SyncWeather(__this_06,pMVar21);
  (__this_06->fields)._currentSyncWait = 5.0;
  *(undefined1 *)&(__this_06->fields)._needSync = 0;
label_0406f8db:
  (__this_06->fields)._currentLerpWait = 0.05;
  *(undefined1 *)&(__this_06->fields)._finishedLoading = 1;
  return;
}


// Weather.WeatherManager$$OnFinishLoading
// il2cpp: void Weather_WeatherManager__OnFinishLoading (const MethodInfo* method);
// 0x406f250

void Weather_WeatherManager__OnFinishLoading(MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_WeatherScheduleRunner__o *pSVar4;
  Weather_WeatherScheduleRunner_array *array;
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *__this;
  Il2CppMethodPointer pIVar5;
  System_Collections_Generic_Dictionary_int__float__o *pSVar6;
  System_Collections_Generic_List_WeatherEffect__o *pSVar7;
  System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *__this_00;
  long lVar8;
  Settings_ListSetting_T__o *__this_01;
  System_String_o *pSVar9;
  undefined8 uVar10;
  Settings_StringSetting_o *pSVar11;
  Settings_StringSetting_c *pSVar12;
  Settings_BoolSetting_o *pSVar13;
  Weather_WeatherScheduleRunner_o *__this_02;
  char cVar14;
  bool_conflict bVar15;
  long lVar16;
  Settings_WeatherSet_o *pSVar17;
  long *plVar18;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar19;
  long *unaff_RBX;
  MethodInfo *in_RSI;
  Weather_WeatherManager_o *__this_03;
  Weather_WeatherManager_o *__this_04;
  undefined8 unaff_R12;
  Settings_BaseSetting_o *unaff_R14;
  Settings_BaseSetting_o *pSVar20;
  undefined8 unaff_R15;
  undefined1 auVar21 [12];
  
  if (g_data_057ac300 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac300 = '\x01';
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) goto label_0406f2a5;
label_0406f26d:
    __this_03 = (Weather_WeatherManager_o *)**(long **)(TypeInfo_WeatherManager + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) != 0) goto label_0406f26d;
label_0406f2a5:
    il2cpp_runtime_helper_02337ed0();
    __this_03 = (Weather_WeatherManager_o *)**(long **)(TypeInfo_WeatherManager + 0xb8);
  }
  if (__this_03 == (Weather_WeatherManager_o *)0x0) {
    unaff_RBX = &TypeInfo_WeatherManager;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)&stack0xfffffffffffffff8;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(Settings_BaseSetting_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R12;
  *(long **)((long)register0x00000020 + -0x20) = unaff_RBX;
  pSVar20 = (Settings_BaseSetting_o *)((long)register0x00000020 + -0x38);
  if (g_data_057ac309 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f2f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f303;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f30f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f31b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f327;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f333;
    il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherScheduleRunner_get_Current);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f33f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_GetItemAt);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f34b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f357;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f363;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Weather_WeatherScheduleRunner_GetEnu);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f36f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f37b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f387;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f393;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f39f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f3ab;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f3b7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f3c3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f3cf;
    il2cpp_runtime_helper_023445d0(&"Map Default*");
    g_data_057ac309 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x38) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f3ee;
  __this_04 = __this_03;
  Weather_WeatherManager__ResetCameras(__this_03,in_RSI);
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f3f3;
  Weather_WeatherManager__ResetSkyboxColors(__this_04,in_RSI);
  if (g_data_057ac307 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f42f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac307 = '\x01';
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) goto label_0406f449;
label_0406f40f:
    lVar16 = **(long **)(TypeInfo_WeatherManager + 0xb8);
    if (lVar16 == 0) goto label_0406f8fc;
label_0406f464:
    *(undefined4 *)(lVar16 + 0x9c) = 0;
    *(undefined8 *)(lVar16 + 0x94) = 0;
    pSVar4 = (__this_03->fields)._scheduleRunners;
    if (pSVar4 == (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) goto label_0406f8fc;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar3 = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < iVar3) {
      array = (pSVar4->fields)._items;
      in_RCX = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f4a6;
      System_Array__Clear((System_Array_o *)array,0,iVar3,(MethodInfo *)0x0);
    }
    __this = (__this_03->fields)._effects;
    if (__this == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)
    goto label_0406f8fc;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f4c3;
    System_Collections_Generic_Dictionary_Int32Enum__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,MethodInfo_Void_Clear);
    pSVar17 = (__this_03->fields)._currentWeather;
    if (pSVar17 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
    pMVar19 = (pSVar17->klass->vtable)._4_SetDefault.method;
    pIVar5 = (pSVar17->klass->vtable)._4_SetDefault.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f4e1;
    (*pIVar5)(pSVar17,pMVar19);
    pSVar17 = (__this_03->fields)._startWeather;
    if (pSVar17 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
    pMVar19 = (pSVar17->klass->vtable)._4_SetDefault.method;
    pIVar5 = (pSVar17->klass->vtable)._4_SetDefault.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f4ff;
    (*pIVar5)(pSVar17,pMVar19);
    pSVar17 = (__this_03->fields)._targetWeather;
    if (pSVar17 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
    pMVar19 = (pSVar17->klass->vtable)._4_SetDefault.method;
    pIVar5 = (pSVar17->klass->vtable)._4_SetDefault.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f51d;
    (*pIVar5)(pSVar17,pMVar19);
    pSVar6 = (__this_03->fields)._targetWeatherStartTimes;
    if (pSVar6 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_0406f8fc;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f53a;
    System_Collections_Generic_Dictionary_int__float___Clear(pSVar6,MethodInfo_Void_Clear);
    pSVar6 = (__this_03->fields)._targetWeatherEndTimes;
    if (pSVar6 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_0406f8fc;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f550;
    System_Collections_Generic_Dictionary_int__float___Clear(pSVar6,MethodInfo_Void_Clear);
    pSVar7 = (__this_03->fields)._needApply;
    if (pSVar7 == (System_Collections_Generic_List_WeatherEffect__o *)0x0) goto label_0406f8fc;
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar7->fields)._size = 0;
    (__this_03->fields)._currentTime = 0.0;
    __this_00 = (__this_03->fields)._currentScheduleWait;
    if (__this_00 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0)
    goto label_0406f8fc;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f592;
    pMVar19 = MethodInfo_Void_Clear;
    System_Collections_Generic_Dictionary_object__float___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_310C5C0 *)MethodInfo_Void_Clear);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f59a;
    Weather_WeatherManager__CreateEffects(__this_03,pMVar19);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f5a2;
    Weather_WeatherManager__SetSceneWeather(__this_03,pMVar19);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f5b4;
    Weather_WeatherManager__ApplyCurrentWeather(__this_03,1,1,in_RCX);
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) != 2) goto label_0406f8db;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f5f7;
      il2cpp_runtime_helper_02337ed0();
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f5fe;
      bVar15 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar14 = (char)bVar15;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f5e9;
      bVar15 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar14 = (char)bVar15;
    }
    if (cVar14 == '\0') goto label_0406f8db;
    lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
    if ((((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x20), lVar16 == 0)) ||
        (lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50), lVar8 == 0)) ||
       ((lVar8 = *(long *)(lVar8 + 0x60), lVar8 == 0 ||
        (__this_01 = *(Settings_ListSetting_T__o **)(lVar16 + 0x28),
        __this_01 == (Settings_ListSetting_T__o *)0x0)))) goto label_0406f8fc;
    iVar3 = *(int32_t *)(lVar8 + 0x14);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f66a;
    unaff_R14 = Settings_ListSetting_object___GetItemAt(__this_01,iVar3,MethodInfo_BaseSetting_GetItemAt);
    if (unaff_R14 != (Settings_BaseSetting_o *)0x0) {
      bVar2 = (TypeInfo_WeatherSet->_2).naturalAligment;
      if ((bVar2 <= (unaff_R14->klass->_2).naturalAligment) &&
         ((unaff_R14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_WeatherSet)) goto label_0406f6a4;
      goto label_0406f906;
    }
label_0406f6a4:
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f774;
      il2cpp_runtime_helper_02337ed0();
      lVar16 = *(long *)(TypeInfo_MapLoader + 0xb8);
      if (*(char *)(lVar16 + 0x80) != '\0') goto label_0406f6cf;
label_0406f7aa:
      pSVar17 = (__this_03->fields)._currentWeather;
      if (pSVar17 != (Settings_WeatherSet_o *)0x0) {
        pMVar19 = (pSVar17->klass->vtable)._9_Copy.method;
        pIVar5 = (pSVar17->klass->vtable)._9_Copy.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f7cb;
        (*pIVar5)(pSVar17,unaff_R14,pMVar19);
        pSVar17 = (__this_03->fields)._currentWeather;
        pMVar19 = extraout_RDX_00;
        if (pSVar17 != (Settings_WeatherSet_o *)0x0) goto label_0406f7d9;
      }
      goto label_0406f8fc;
    }
    lVar16 = *(long *)(TypeInfo_MapLoader + 0xb8);
    if (*(char *)(lVar16 + 0x80) == '\0') goto label_0406f7aa;
label_0406f6cf:
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f792;
      il2cpp_runtime_helper_02337ed0();
      if (*(long *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x88) != 0) goto label_0406f6ea;
      goto label_0406f7aa;
    }
    if (*(long *)(lVar16 + 0x88) == 0) goto label_0406f7aa;
label_0406f6ea:
    if ((unaff_R14 == (Settings_BaseSetting_o *)0x0) || (unaff_R14[2].klass == (Settings_BaseSetting_c *)0x0))
    goto label_0406f8fc;
    pSVar9 = (System_String_o *)((unaff_R14[2].klass)->_1).namespaze;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f715;
    bVar15 = System_String__op_Equality(pSVar9,"Map Default*",(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') goto label_0406f7aa;
    pSVar17 = (__this_03->fields)._currentWeather;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f733;
      il2cpp_runtime_helper_02337ed0();
    }
    if (pSVar17 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
    uVar10 = *(undefined8 *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x88);
    pMVar19 = (pSVar17->klass->vtable)._9_Copy.method;
    pIVar5 = (pSVar17->klass->vtable)._9_Copy.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f760;
    (*pIVar5)(pSVar17,uVar10,pMVar19);
    pSVar17 = (__this_03->fields)._currentWeather;
    pMVar19 = extraout_RDX;
    if (pSVar17 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
label_0406f7d9:
    pSVar11 = (pSVar17->fields).Schedule;
    if (pSVar11 == (Settings_StringSetting_o *)0x0) goto label_0406f8fc;
    pSVar9 = (pSVar11->fields)._value;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f7f5;
    Weather_WeatherManager__CreateScheduleRunners(__this_03,pSVar9,pMVar19);
    pSVar17 = (__this_03->fields)._currentWeather;
    if ((pSVar17 == (Settings_WeatherSet_o *)0x0) ||
       (pSVar11 = (pSVar17->fields).Schedule, pSVar11 == (Settings_StringSetting_o *)0x0)) goto label_0406f8fc;
    pSVar12 = pSVar11->klass;
    pMVar19 = (pSVar12->vtable)._4_SetDefault.method;
    pIVar5 = (pSVar12->vtable)._4_SetDefault.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f823;
    (*pIVar5)();
    pSVar17 = (__this_03->fields)._currentWeather;
    if ((pSVar17 == (Settings_WeatherSet_o *)0x0) ||
       (pSVar13 = (pSVar17->fields).UseSchedule, pSVar13 == (Settings_BoolSetting_o *)0x0)) goto label_0406f8fc;
    if (*(char *)((long)&(pSVar13->fields).DefaultValue + 1) != '\0') {
      pSVar4 = (__this_03->fields)._scheduleRunners;
      if (pSVar4 == (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) goto label_0406f8fc;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f86a;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)((long)register0x00000020 + -0x38),
                 (System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T_Enumerator_Weather_WeatherScheduleRunner_GetEnu);
      while( true ) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f88b;
        bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o)
                            *(System_Collections_Generic_List_Enumerator_object__Fields *)
                             ((long)register0x00000020 + -0x38),
                            (MethodInfo_321A1D0 *)((long)register0x00000020 + -0x38));
        if ((char)bVar15 == '\0') break;
        __this_02 = *(Weather_WeatherScheduleRunner_o **)((long)register0x00000020 + -0x28);
        if (__this_02 == (Weather_WeatherScheduleRunner_o *)0x0) goto label_0406f901;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f8a3;
        Weather_WeatherScheduleRunner__ProcessSchedule(__this_02,(MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f8ad;
        Weather_WeatherScheduleRunner__ConsumeSchedule(__this_02,(MethodInfo *)0x0);
      }
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f8c1;
      pMVar19 = MethodInfo_Void_Dispose;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o)
                 *(System_Collections_Generic_List_Enumerator_object__Fields *)
                  ((long)register0x00000020 + -0x38),(MethodInfo_321A1C0 *)((long)register0x00000020 + -0x38))
      ;
    }
  }
  else {
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) != 0) goto label_0406f40f;
label_0406f449:
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f44e;
    il2cpp_runtime_helper_02337ed0();
    lVar16 = **(long **)(TypeInfo_WeatherManager + 0xb8);
    if (lVar16 != 0) goto label_0406f464;
label_0406f8fc:
    pSVar20 = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f901;
    il2cpp_runtime_helper_022b2c90();
label_0406f901:
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f906;
    il2cpp_runtime_helper_022b2c90();
    unaff_R14 = pSVar20;
label_0406f906:
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f90e;
    auVar21 = il2cpp_runtime_helper_022b2fd0(unaff_R14);
    if (auVar21._8_4_ != 1) {
label_0406f95d:
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f977;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o)
                 *(System_Collections_Generic_List_Enumerator_object__Fields *)
                  ((long)register0x00000020 + -0x38),(MethodInfo_321A1C0 *)((long)register0x00000020 + -0x38))
      ;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f984;
      _Unwind_Resume(auVar21._0_8_);
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f932;
    plVar18 = (long *)__cxa_begin_catch(auVar21._0_8_);
    lVar16 = *plVar18;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f93a;
    __cxa_end_catch();
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f94c;
    pMVar19 = MethodInfo_Void_Dispose;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o)
               *(System_Collections_Generic_List_Enumerator_object__Fields *)
                ((long)register0x00000020 + -0x38),(MethodInfo_321A1C0 *)((long)register0x00000020 + -0x38));
    if (lVar16 != 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f95d;
      il2cpp_runtime_helper_022fefe0(lVar16);
      goto label_0406f95d;
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x406f8c9;
  Weather_WeatherManager__SyncWeather(__this_03,pMVar19);
  (__this_03->fields)._currentSyncWait = 5.0;
  *(undefined1 *)&(__this_03->fields)._needSync = 0;
label_0406f8db:
  (__this_03->fields)._currentLerpWait = 0.05;
  *(undefined1 *)&(__this_03->fields)._finishedLoading = 1;
  return;
}


// Weather.WeatherManager$$LoadSkyboxes
// il2cpp: void Weather_WeatherManager__LoadSkyboxes (const MethodInfo* method);
// 0x406e630

void Weather_WeatherManager__LoadSkyboxes(MethodInfo *method)

{
  Il2CppMethodPointer pIVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar2;
  System_String_array *in_RAX;
  long *plVar3;
  System_String_array *pSVar4;
  System_String_o *pSVar5;
  MethodInfo **__this_06;
  Il2CppObject *pIVar6;
  il2cpp_array_size_t iVar7;
  UnityEngine_Shader_o *pUVar8;
  MethodInfo *pMVar9;
  long lVar10;
  System_Collections_Generic_Dictionary_object__object__o *unaff_R12;
  MethodInfo_3104E10 **unaff_R13;
  uint uVar11;
  undefined8 *unaff_R14;
  System_Collections_Generic_Dictionary_object__object__o *unaff_R15;
  undefined1 auVar12 [12];
  _union_249689 _Var13;
  Il2CppType *pIVar14;
  Weather_LightningParticle_o *__this_07;
  _union_249689 local_a0;
  Il2CppType *pIStack_98;
  Weather_LightningParticle_o *local_90;
  _union_249689 local_80;
  Il2CppType *pIStack_78;
  Weather_LightningParticle_o *local_70;
  System_String_array *pSStack_68;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_60;
  System_String_o *pSStack_58;
  undefined8 *puStack_50;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_48;
  UnityEngine_Shader_o *pUStack_40;
  System_String_array *local_38;
  
  local_38 = in_RAX;
  if (g_data_057ac301 == '\0') {
    pUStack_40 = (UnityEngine_Shader_o *)0x406e654;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pUStack_40 = (UnityEngine_Shader_o *)0x406e660;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pUStack_40 = (UnityEngine_Shader_o *)0x406e66c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
    pUStack_40 = (UnityEngine_Shader_o *)0x406e678;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Material);
    pUStack_40 = (UnityEngine_Shader_o *)0x406e684;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    pUStack_40 = (UnityEngine_Shader_o *)0x406e690;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pUStack_40 = (UnityEngine_Shader_o *)0x406e69c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pUStack_40 = (UnityEngine_Shader_o *)0x406e6a8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pUStack_40 = (UnityEngine_Shader_o *)0x406e6b4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_EnumToStringArray_WeatherSkybox);
    pUStack_40 = (UnityEngine_Shader_o *)0x406e6c0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    pUStack_40 = (UnityEngine_Shader_o *)0x406e6cc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    pUStack_40 = (UnityEngine_Shader_o *)0x406e6d8;
    il2cpp_runtime_helper_023445d0(&"Skybox/Blended");
    pUStack_40 = (UnityEngine_Shader_o *)0x406e6e4;
    il2cpp_runtime_helper_023445d0(&"Skyboxes/");
    pUStack_40 = (UnityEngine_Shader_o *)0x406e6f0;
    il2cpp_runtime_helper_023445d0(&"CaveMap1");
    pUStack_40 = (UnityEngine_Shader_o *)0x406e6fc;
    il2cpp_runtime_helper_023445d0(&"/");
    pUStack_40 = (UnityEngine_Shader_o *)0x406e708;
    il2cpp_runtime_helper_023445d0(&"Skybox");
    pUStack_40 = (UnityEngine_Shader_o *)0x406e714;
    il2cpp_runtime_helper_023445d0(&"Skyboxes/CaveMap1/CaveMap1Skybox");
    g_data_057ac301 = '\x01';
  }
  pUStack_40 = (UnityEngine_Shader_o *)0x406e72c;
  plVar3 = (long *)UnityEngine_Shader__Find("Skybox/Blended",(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_WeatherManager[2].parameters + 4) == 0) {
    pUStack_40 = (UnityEngine_Shader_o *)0x406e747;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar1 = TypeInfo_WeatherManager[2].virtualMethodPointer;
  *(long **)(pIVar1 + 0x18) = plVar3;
  pUStack_40 = (UnityEngine_Shader_o *)0x406e761;
  il2cpp_runtime_helper_022b4080(pIVar1 + 0x18,plVar3);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    pUStack_40 = (UnityEngine_Shader_o *)0x406e779;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_40 = (UnityEngine_Shader_o *)0x406e788;
  pSVar4 = Utility_Util__EnumToStringArray_Int32Enum_(MethodInfo_String_EnumToStringArray_WeatherSkybox);
  __this_06 = &TypeInfo_WeatherManager;
  if (pSVar4 != (System_String_array *)0x0) {
    iVar7 = pSVar4->max_length;
    local_38 = pSVar4;
    if (0 < (int)iVar7) {
      unaff_R14 = (undefined8 *)0x0;
      do {
        plVar3 = &TypeInfo_ResourcePaths;
        uVar11 = (uint)unaff_R14;
        __this_06 = &TypeInfo_WeatherManager;
        if ((uint)iVar7 <= uVar11) goto label_0406eac2;
        unaff_R13 = (MethodInfo_3104E10 **)local_38->m_Items[(int)uVar11];
        if (*(int *)((long)&TypeInfo_WeatherManager[2].parameters + 4) == 0) {
          pUStack_40 = (UnityEngine_Shader_o *)0x406e7d2;
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_R15 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     (TypeInfo_WeatherManager[2].virtualMethodPointer + 8);
        if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
          pUStack_40 = (UnityEngine_Shader_o *)0x406e7f2;
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_R12 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     (*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58);
        pUStack_40 = (UnityEngine_Shader_o *)0x406e815;
        pSVar4 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5);
        if (pSVar4 == (System_String_array *)0x0) goto label_0406eac7;
        __this_06 = (MethodInfo **)pSVar4;
        if ((int)pSVar4->max_length == 0) goto label_0406eac2;
        pSVar4->m_Items[0] = "Skyboxes/";
        pUStack_40 = (UnityEngine_Shader_o *)0x406e842;
        il2cpp_runtime_helper_022b4080(pSVar4->m_Items);
        if ((System_String_o *)unaff_R13 == (System_String_o *)0x0) goto label_0406eac7;
        pUStack_40 = (UnityEngine_Shader_o *)0x406e85f;
        pSVar5 = (System_String_o *)
                 (*((Il2CppClass *)((System_String_o *)unaff_R13)->klass)->vtable[3].methodPtr)
                           (unaff_R13,((Il2CppClass *)((System_String_o *)unaff_R13)->klass)->vtable[3].method
                           );
        if ((uint)pSVar4->max_length < 2) goto label_0406eac2;
        pSVar4->m_Items[1] = pSVar5;
        pUStack_40 = (UnityEngine_Shader_o *)0x406e879;
        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 1,pSVar5);
        if ((uint)pSVar4->max_length < 3) goto label_0406eac2;
        pSVar4->m_Items[2] = "/";
        pUStack_40 = (UnityEngine_Shader_o *)0x406e89a;
        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 2);
        pUStack_40 = (UnityEngine_Shader_o *)0x406e8ae;
        pSVar5 = (System_String_o *)
                 (*((Il2CppClass *)((System_String_o *)unaff_R13)->klass)->vtable[3].methodPtr)
                           (unaff_R13,((Il2CppClass *)((System_String_o *)unaff_R13)->klass)->vtable[3].method
                           );
        if ((uint)pSVar4->max_length < 4) goto label_0406eac2;
        pSVar4->m_Items[3] = pSVar5;
        pUStack_40 = (UnityEngine_Shader_o *)0x406e8c8;
        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 3,pSVar5);
        if ((uint)pSVar4->max_length < 5) goto label_0406eac2;
        pSVar4->m_Items[4] = "Skybox";
        pUStack_40 = (UnityEngine_Shader_o *)0x406e8ec;
        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 4);
        pUStack_40 = (UnityEngine_Shader_o *)0x406e8f6;
        __this_06 = (MethodInfo **)System_String__Concat_3af7570(pSVar4,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          pUStack_40 = (UnityEngine_Shader_o *)0x406e911;
          il2cpp_runtime_helper_02337ed0();
        }
        pUStack_40 = (UnityEngine_Shader_o *)0x406e928;
        pIVar6 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                           ((System_String_o *)unaff_R12,(System_String_o *)__this_06,0,MethodInfo_Material_InstantiateAsset_Material);
        if (unaff_R15 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0406eac7;
        pUStack_40 = (UnityEngine_Shader_o *)0x406e949;
        System_Collections_Generic_Dictionary_object__object___Add
                  (unaff_R15,(Il2CppObject *)unaff_R13,pIVar6,MethodInfo_Void_Add);
        unaff_R14 = (undefined8 *)(ulong)(uVar11 + 1);
        iVar7 = local_38->max_length;
        plVar3 = &TypeInfo_ResourcePaths;
      } while ((int)(uVar11 + 1) < (int)iVar7);
    }
    pUVar8 = (UnityEngine_Shader_o *)(iVar7 & 0xffffffff);
    if (0 < (int)iVar7) {
      plVar3 = (long *)0x0;
      unaff_R14 = &TypeInfo_Dictionary_string_Material;
      unaff_R13 = &MethodInfo_Void_Add;
      do {
        __this_06 = &TypeInfo_WeatherManager;
        if (pUVar8 <= plVar3) goto label_0406eac2;
        unaff_R15 = (System_Collections_Generic_Dictionary_object__object__o *)local_38->m_Items[(long)plVar3]
        ;
        if (*(int *)((long)&TypeInfo_WeatherManager[2].parameters + 4) == 0) {
          pUStack_40 = (UnityEngine_Shader_o *)0x406e9b1;
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_R12 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     (TypeInfo_WeatherManager[2].virtualMethodPointer + 0x10);
        pUStack_40 = (UnityEngine_Shader_o *)0x406e9c7;
        __this_06 = (MethodInfo **)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Material);
        pUStack_40 = (UnityEngine_Shader_o *)0x406e9dc;
        System_Collections_Generic_Dictionary_object__object____ctor
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_06,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
        if (unaff_R12 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0406eac7;
        pUStack_40 = (UnityEngine_Shader_o *)0x406e9f7;
        System_Collections_Generic_Dictionary_object__object___Add
                  (unaff_R12,(Il2CppObject *)unaff_R15,(Il2CppObject *)__this_06,MethodInfo_Void_Add);
        plVar3 = (long *)((long)&((UnityEngine_Shader_o *)plVar3)->klass + 1);
        uVar11 = (uint)local_38->max_length;
        pUVar8 = (UnityEngine_Shader_o *)(ulong)uVar11;
      } while ((long)plVar3 < (long)(int)uVar11);
    }
    if (*(int *)((long)&TypeInfo_WeatherManager[2].parameters + 4) == 0) {
      pUStack_40 = (UnityEngine_Shader_o *)0x406ea26;
      il2cpp_runtime_helper_02337ed0();
    }
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (TypeInfo_WeatherManager[2].virtualMethodPointer + 8);
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      pUStack_40 = (UnityEngine_Shader_o *)0x406ea4c;
      il2cpp_runtime_helper_02337ed0();
    }
    __this_06 = *(MethodInfo ***)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      pUStack_40 = (UnityEngine_Shader_o *)0x406ea72;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_40 = (UnityEngine_Shader_o *)0x406ea90;
    pIVar6 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       ((System_String_o *)__this_06,"Skyboxes/CaveMap1/CaveMap1Skybox",0,MethodInfo_Material_InstantiateAsset_Material);
    unaff_R14 = (undefined8 *)0x0;
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add(__this,"CaveMap1",pIVar6,MethodInfo_Void_Add);
      return;
    }
  }
label_0406eac7:
  pUStack_40 = (UnityEngine_Shader_o *)0x406eacc;
  il2cpp_runtime_helper_022b2c90();
  pSStack_68 = (System_String_array *)__this_06;
  pSStack_60 = unaff_R12;
  pSStack_58 = (System_String_o *)unaff_R13;
  puStack_50 = unaff_R14;
  pSStack_48 = unaff_R15;
  pUStack_40 = (UnityEngine_Shader_o *)plVar3;
  if (g_data_057ac2fc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LightningParticle_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_LightningParticle_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Weather_LightningParticle_GetEnumera);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_List_1_Weather_LightningParticle_Get);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderWeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WindWeatherEffect);
    g_data_057ac2fc = '\x01';
  }
  _Var13.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar14 = (Il2CppType *)0x0;
  __this_07 = (Weather_LightningParticle_o *)0x0;
  local_a0.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_98 = (Il2CppType *)0x0;
  local_90 = (Weather_LightningParticle_o *)0x0;
  if (*(int *)(TypeInfo_WindWeatherEffect + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  **(undefined1 **)(TypeInfo_WindWeatherEffect + 0xb8) = 0;
  if (*(int *)(TypeInfo_ThunderWeatherEffect + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_ThunderWeatherEffect + 0xb8) !=
      (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_80,
               (System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_ThunderWeatherEffect + 0xb8),
               MethodInfo_List_1_T_Enumerator_List_1_Weather_LightningParticle_Get);
    _Var13 = local_80;
    pIVar14 = pIStack_78;
    __this_07 = local_70;
    while( true ) {
      __this_00.fields._8_8_ = pIVar14;
      __this_00.fields._list = _Var13.genericMethod;
      __this_00.fields._current = (Il2CppObject *)__this_07;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff40);
      if ((char)bVar2 == '\0') {
        __this_03.fields._8_8_ = pIVar14;
        __this_03.fields._list = _Var13.genericMethod;
        __this_03.fields._current = (Il2CppObject *)__this_07;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff40);
        goto label_0406ed03;
      }
      if (__this_07 == (Weather_LightningParticle_o *)0x0) break;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&local_80,
                 (System_Collections_Generic_List_object__o *)__this_07,MethodInfo_List_1_T_Enumerator_Weather_LightningParticle_GetEnumera);
      local_90 = local_70;
      local_a0.genericMethod = local_80.genericMethod;
      pIStack_98 = pIStack_78;
      while (__this_01.fields._8_8_ = pIVar14, __this_01.fields._list = _Var13.genericMethod,
            __this_01.fields._current = (Il2CppObject *)__this_07, pMVar9 = MethodInfo_Boolean_MoveNext,
            bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_321A1D0 *)&local_a0), (char)bVar2 != '\0') {
        if (local_90 == (Weather_LightningParticle_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0406ed77;
        }
        Weather_LightningParticle__Disable(local_90,pMVar9);
      }
      plVar3 = (long *)0x0;
      __this_02.fields._8_8_ = pIVar14;
      __this_02.fields._list = _Var13.genericMethod;
      __this_02.fields._current = (Il2CppObject *)__this_07;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_02,(MethodInfo_321A1C0 *)&local_a0);
    }
label_0406ed77:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(plVar3);
  }
  do {
    auVar12 = il2cpp_runtime_helper_022b2c90();
    lVar10 = auVar12._0_8_;
    if (auVar12._8_4_ != 1) {
label_0406edd1:
      __this_05.fields._8_8_ = pIVar14;
      __this_05.fields._list = _Var13.genericMethod;
      __this_05.fields._current = (Il2CppObject *)__this_07;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff40);
      _Unwind_Resume(lVar10);
    }
    plVar3 = (long *)__cxa_begin_catch();
    lVar10 = *plVar3;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar14;
    __this_04.fields._list = _Var13.genericMethod;
    __this_04.fields._current = (Il2CppObject *)__this_07;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff40);
    if (lVar10 != 0) {
      il2cpp_runtime_helper_022fefe0();
      goto label_0406edd1;
    }
label_0406ed03:
    if (*(int *)((long)&TypeInfo_WeatherManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar9 = TypeInfo_WeatherManager;
    if (*(long *)TypeInfo_WeatherManager[2].virtualMethodPointer != 0) {
      *(undefined1 *)(*(long *)TypeInfo_WeatherManager[2].virtualMethodPointer + 0x90) = 0;
      Weather_WeatherManager__DisableCaveMap(pMVar9);
      return;
    }
  } while( true );
label_0406eac2:
  pUStack_40 = (UnityEngine_Shader_o *)0x406eac7;
  il2cpp_runtime_helper_022b2ca0();
  goto label_0406eac7;
}


// Weather.WeatherManager$$TakeFlashlight
// il2cpp: void Weather_WeatherManager__TakeFlashlight (UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x406f9a0

void Weather_WeatherManager__TakeFlashlight(UnityEngine_Transform_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  Il2CppMethodPointer vtableDispatch;
  void *pvVar3;
  long lVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_06;
  Il2CppObject *key;
  bool_conflict bVar6;
  int iVar7;
  Il2CppObject *pIVar8;
  UnityEngine_Material_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  Il2CppClass *pIVar11;
  UnityEngine_Material_o *pUVar12;
  UnityEngine_Texture_o *pUVar13;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar14;
  System_Collections_Generic_Dictionary_object__object__o *pSVar15;
  long *plVar16;
  Il2CppObject *in_RCX;
  Il2CppObject *extraout_RDX;
  UnityEngine_Object_o *unaff_RBX;
  Il2CppClass **ppIVar17;
  Il2CppClass **unaff_RBP;
  System_String_o **ppSVar18;
  long lVar19;
  MethodInfo_30D43D0 **unaff_R12;
  float value;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  undefined1 auVar20 [12];
  _union_233249 _Var21;
  Il2CppType *pIVar22;
  Il2CppObject *key_00;
  _union_233249 _Stack_f8;
  Il2CppType *pIStack_f0;
  Il2CppObject *pIStack_e8;
  _union_233249 _Stack_d8;
  Il2CppType *pIStack_d0;
  Il2CppObject *pIStack_c8;
  UnityEngine_Material_o *pUStack_c0;
  Il2CppClass **ppIStack_b8;
  UnityEngine_Material_o *pUStack_b0;
  UnityEngine_Transform_o *pUStack_a8;
  MethodInfo *pMStack_a0;
  System_String_o *pSStack_98;
  undefined8 uStack_90;
  float fStack_7c;
  Il2CppClass *pIStack_78;
  Il2CppObject *pIStack_68;
  Il2CppObject *pIStack_60;
  UnityEngine_Object_o *pUStack_58;
  Il2CppClass **ppIStack_50;
  
  if (g_data_057ac302 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseWeatherEffect_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac302 = '\x01';
    if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) goto label_0406fb49;
label_0406f9cf:
    lVar19 = *(long *)TypeInfo_WeatherManager->static_fields;
  }
  else {
    if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c != 0) goto label_0406f9cf;
label_0406fb49:
    il2cpp_runtime_helper_02337ed0();
    lVar19 = *(long *)TypeInfo_WeatherManager->static_fields;
  }
  pIVar11 = TypeInfo_WeatherManager;
  if (lVar19 != 0) {
    pIVar11 = (Il2CppClass *)0x0;
    if (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar19 + 0x40) !=
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
      method = (MethodInfo *)0x7;
      bVar6 = System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey
                        (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar19 + 0x40),7,
                         MethodInfo_Boolean_ContainsKey);
      if ((char)bVar6 == '\0') {
        return;
      }
      if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar11 = TypeInfo_WeatherManager;
      if (*(long *)TypeInfo_WeatherManager->static_fields != 0) {
        __this = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                  (*(long *)TypeInfo_WeatherManager->static_fields + 0x40);
        pIVar11 = (Il2CppClass *)0x0;
        if (__this != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
          unaff_R12 = &MethodInfo_BaseWeatherEffect_get_Item;
          unaff_RBX = (UnityEngine_Object_o *)
                      System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                                (__this,7,MethodInfo_BaseWeatherEffect_get_Item);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          method = (MethodInfo *)0x0;
          bVar6 = UnityEngine_Object__op_Inequality(unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            return;
          }
          if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar11 = TypeInfo_WeatherManager;
          if ((*(long *)TypeInfo_WeatherManager->static_fields != 0) &&
             (pIVar11 = *(Il2CppClass **)(*(long *)TypeInfo_WeatherManager->static_fields + 0x40),
             pIVar11 != (Il2CppClass *)0x0)) {
            method = (MethodInfo *)0x7;
            pIVar8 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar11,7,
                                MethodInfo_BaseWeatherEffect_get_Item);
            if (pIVar8 != (Il2CppObject *)0x0) {
              pIVar11 = pIVar8->klass;
              vtableDispatch = pIVar11->vtable[9].methodPtr;
              (*vtableDispatch)(pIVar8,parent,pIVar11->vtable[9].method,pIVar11,vtableDispatch);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_68 = extraout_RDX;
  pIStack_60 = in_RCX;
  pUStack_58 = unaff_RBX;
  ppIStack_50 = (Il2CppClass **)unaff_R12;
  if (g_data_057ac303 == '\0') {
    pIStack_78 = (Il2CppClass *)0x406fba3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    pIStack_78 = (Il2CppClass *)0x406fbaf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    pIStack_78 = (Il2CppClass *)0x406fbbb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    pIStack_78 = (Il2CppClass *)0x406fbc7;
    il2cpp_runtime_helper_023445d0(&"2");
    pIStack_78 = (Il2CppClass *)0x406fbd3;
    il2cpp_runtime_helper_023445d0(&"_");
    pIStack_78 = (Il2CppClass *)0x406fbdf;
    il2cpp_runtime_helper_023445d0(&"Tex");
    pIStack_78 = (Il2CppClass *)0x406fbeb;
    il2cpp_runtime_helper_023445d0(&"_Tint");
    g_data_057ac303 = '\x01';
  }
  pIStack_78 = (Il2CppClass *)0x406fc01;
  pUVar9 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
  pIStack_78 = (Il2CppClass *)0x406fc11;
  UnityEngine_Material___ctor(pUVar9,(UnityEngine_Shader_o *)pIVar11,(MethodInfo *)0x0);
  if (method != (MethodInfo *)0x0) {
    iVar7 = (int)method->name;
    if (pUVar9 == (UnityEngine_Material_o *)0x0) {
label_0406fde7:
      if (0 < iVar7) {
        pIStack_78 = (Il2CppClass *)0x406fe0a;
        pIVar11 = (Il2CppClass *)
                  System_String__Concat_3af7150
                            ("_",(System_String_o *)method->klass,"Tex",(MethodInfo *)0x0);
        unaff_RBP = &TypeInfo_WeatherManager;
        if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
          pIStack_78 = (Il2CppClass *)0x406fe26;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar15 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   ((long)TypeInfo_WeatherManager->static_fields + 8);
        if (pSVar15 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pIStack_78 = (Il2CppClass *)0x406fe4e;
          pUVar12 = (UnityEngine_Material_o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar15,pIStack_68,MethodInfo_Material_get_Item);
          if (pUVar12 != (UnityEngine_Material_o *)0x0) goto label_0406fe58;
        }
      }
    }
    else {
      if (0 < iVar7) {
        pUVar10 = (UnityEngine_Transform_o *)((ulong)method->name & 0xffffffff);
        parent = (UnityEngine_Transform_o *)0x0;
        do {
          unaff_R12 = (MethodInfo_30D43D0 **)&TypeInfo_WeatherManager;
          if (pUVar10 <= parent) {
            pIStack_78 = (Il2CppClass *)0x406fde7;
            iVar7 = il2cpp_runtime_helper_022b2ca0();
            goto label_0406fde7;
          }
          pIStack_78 = (Il2CppClass *)0x406fc6b;
          pIVar11 = (Il2CppClass *)
                    System_String__Concat_3af7150
                              ("_",(System_String_o *)(&method->klass)[(long)parent],"Tex",
                               (MethodInfo *)0x0);
          if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
            pIStack_78 = (Il2CppClass *)0x406fc80;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar15 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     ((long)TypeInfo_WeatherManager->static_fields + 8);
          if (pSVar15 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0406fe53;
          pIStack_78 = (Il2CppClass *)0x406fcac;
          pUVar12 = (UnityEngine_Material_o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar15,pIStack_68,MethodInfo_Material_get_Item);
          if (pUVar12 == (UnityEngine_Material_o *)0x0) goto label_0406fe53;
          pIStack_78 = (Il2CppClass *)0x406fcc2;
          pUVar13 = UnityEngine_Material__GetTexture(pUVar12,(System_String_o *)pIVar11,(MethodInfo *)0x0);
          pIStack_78 = (Il2CppClass *)0x406fcd2;
          UnityEngine_Material__SetTexture(pUVar9,(System_String_o *)pIVar11,pUVar13,(MethodInfo *)0x0);
          pIStack_78 = (Il2CppClass *)0x406fce6;
          unaff_RBP = (Il2CppClass **)
                      System_String__Concat_3ae5ba0((System_String_o *)pIVar11,"2",(MethodInfo *)0x0)
          ;
          pSVar15 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     ((long)TypeInfo_WeatherManager->static_fields + 8);
          if (pSVar15 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0406fe53;
          pIStack_78 = (Il2CppClass *)0x406fd15;
          pUVar12 = (UnityEngine_Material_o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar15,pIStack_60,MethodInfo_Material_get_Item);
          if (pUVar12 == (UnityEngine_Material_o *)0x0) goto label_0406fe53;
          pIStack_78 = (Il2CppClass *)0x406fd2b;
          pUVar13 = UnityEngine_Material__GetTexture(pUVar12,(System_String_o *)pIVar11,(MethodInfo *)0x0);
          pIStack_78 = (Il2CppClass *)0x406fd3b;
          UnityEngine_Material__SetTexture(pUVar9,(System_String_o *)unaff_RBP,pUVar13,(MethodInfo *)0x0);
          parent = (UnityEngine_Transform_o *)((long)&parent->klass + 1);
          pUVar10 = (UnityEngine_Transform_o *)(ulong)*(uint *)&method->name;
        } while ((long)parent < (long)(int)*(uint *)&method->name);
      }
      if (pUVar9 != (UnityEngine_Material_o *)0x0) {
        pIStack_78 = (Il2CppClass *)0x406fd7a;
        value_00.fields.b = 0.5;
        value_00.fields.a = 1.0;
        value_00.fields.r = 0.5;
        value_00.fields.g = 0.5;
        UnityEngine_Material__SetColor(pUVar9,"_Tint",value_00,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
          pIStack_78 = (Il2CppClass *)0x406fdd7;
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac304 == '\0') {
          pIStack_78 = (Il2CppClass *)0x406fda2;
          il2cpp_runtime_helper_023445d0(&"_Blend");
          g_data_057ac304 = '\x01';
        }
        pIStack_78 = (Il2CppClass *)0x406fdc0;
        UnityEngine_Material__SetFloat(pUVar9,"_Blend",0.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_0406fe53:
  pIStack_78 = (Il2CppClass *)0x406fe58;
  pUVar12 = (UnityEngine_Material_o *)il2cpp_runtime_helper_022b2c90();
label_0406fe58:
  pIStack_78 = (Il2CppClass *)0x406fe65;
  UnityEngine_Material__GetTexture(pUVar12,(System_String_o *)pIVar11,(MethodInfo *)0x0);
  pIStack_78 = (Il2CppClass *)0x406fe6a;
  value = (float)il2cpp_runtime_helper_022b2c90();
  ppIVar17 = (Il2CppClass **)pUVar12;
  pIStack_78 = pIVar11;
  if (g_data_057ac304 == '\0') {
    ppSVar18 = &"_Blend";
    uStack_90 = 0x406fe93;
    fStack_7c = value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac304 = '\x01';
    ppIVar17 = (Il2CppClass **)ppSVar18;
    value = fStack_7c;
  }
  if (pUVar12 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat(pUVar12,"_Blend",value,(MethodInfo *)0x0);
    return;
  }
  uStack_90 = 0x406fec3;
  il2cpp_runtime_helper_022b2c90();
  uStack_90 = 0;
  if (g_data_057ac305 == '\0') {
    pSStack_98 = (System_String_o *)0x406fee9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_98 = (System_String_o *)0x406fef5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    pSStack_98 = (System_String_o *)0x406ff01;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pSStack_98 = (System_String_o *)0x406ff0d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac305 = '\x01';
  }
  pvVar3 = ((UnityEngine_Material_o *)((long)ppIVar17 + 0x30))->monitor;
  if (pvVar3 != (void *)0x0) {
    *(int *)((long)pvVar3 + 0x1c) = *(int *)((long)pvVar3 + 0x1c) + 1;
    iVar7 = *(int *)((long)pvVar3 + 0x18);
    *(undefined4 *)((long)pvVar3 + 0x18) = 0;
    if (0 < iVar7) {
      pSStack_98 = (System_String_o *)0x406ff40;
      System_Array__Clear(*(System_Array_o **)((long)pvVar3 + 0x10),0,iVar7,(MethodInfo *)0x0);
    }
    ppIVar17 = &TypeInfo_WeatherManager;
    if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
      pSStack_98 = (System_String_o *)0x406ff58;
      il2cpp_runtime_helper_02337ed0();
    }
    lVar19 = MethodInfo_Void_Add;
    if (((*(long *)TypeInfo_WeatherManager->static_fields != 0) &&
        (lVar4 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18), lVar4 != 0)) &&
       (__this_00 = *(System_Collections_Generic_List_object__o **)
                     (*(long *)TypeInfo_WeatherManager->static_fields + 0x38),
       __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
      pIVar8 = *(Il2CppObject **)(lVar4 + 0x20);
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this_00->fields)._items;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar5->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar5->m_Items[(int)uVar2] = pIVar8;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2);
          return;
        }
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,pIVar8,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
  pSStack_98 = (System_String_o *)0x406ffe4;
  il2cpp_runtime_helper_022b2c90();
  pUStack_c0 = (UnityEngine_Material_o *)ppIVar17;
  ppIStack_b8 = (Il2CppClass **)unaff_R12;
  pUStack_b0 = pUVar9;
  pUStack_a8 = parent;
  pMStack_a0 = method;
  pSStack_98 = (System_String_o *)unaff_RBP;
  if (g_data_057ac306 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    il2cpp_runtime_helper_023445d0(&"_Tint");
    g_data_057ac306 = '\x01';
  }
  _Var21.genericMethod = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0
  ;
  pIVar22 = (Il2CppType *)0x0;
  pIVar8 = (Il2CppObject *)0x0;
  _Stack_f8.genericMethod =
       (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIStack_f0 = (Il2CppType *)0x0;
  pIStack_e8 = (Il2CppObject *)0x0;
  if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar15 = *(System_Collections_Generic_Dictionary_object__object__o **)
             ((long)TypeInfo_WeatherManager->static_fields + 0x10);
  if ((pSVar15 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (pSVar14 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar15,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic),
     pSVar14 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&_Stack_d8,
               pSVar14,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    _Var21 = _Stack_d8;
    pIVar22 = pIStack_d0;
    key_00 = pIStack_c8;
    while( true ) {
      __this_01.fields._8_8_ = pIVar22;
      __this_01.fields._dictionary = _Var21.genericMethod;
      __this_01.fields._currentKey = key_00;
      bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                        (__this_01,(MethodInfo_3251B20 *)&stack0xfffffffffffffee8);
      if ((char)bVar6 == '\0') {
        __this_04.fields._8_8_ = pIVar22;
        __this_04.fields._dictionary = _Var21.genericMethod;
        __this_04.fields._currentKey = key_00;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_04,(MethodInfo_3251B10 *)&stack0xfffffffffffffee8);
        return;
      }
      pIVar8 = key_00;
      if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 ((long)TypeInfo_WeatherManager->static_fields + 0x10);
      if (pSVar15 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      pSVar15 = (System_Collections_Generic_Dictionary_object__object__o *)
                System_Collections_Generic_Dictionary_object__object___get_Item(pSVar15,key_00,MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item);
      if (pSVar15 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04070392;
      pSVar14 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar15,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
      if (pSVar14 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
      goto label_04070397;
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&_Stack_d8,
                 pSVar14,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      pIStack_e8 = pIStack_c8;
      _Stack_f8 = _Stack_d8;
      pIStack_f0 = pIStack_d0;
      while (__this_02.fields._8_8_ = pIVar22, __this_02.fields._dictionary = _Var21.genericMethod,
            __this_02.fields._currentKey = pIVar8,
            bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                              (__this_02,(MethodInfo_3251B20 *)&_Stack_f8), key = pIStack_e8,
            (char)bVar6 != '\0') {
        if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar15 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   ((long)TypeInfo_WeatherManager->static_fields + 0x10);
        if (pSVar15 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0407038d;
        }
        pSVar15 = (System_Collections_Generic_Dictionary_object__object__o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item(pSVar15,key_00,MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item)
        ;
        if (pSVar15 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0407038d;
        }
        pUVar9 = (UnityEngine_Material_o *)
                 System_Collections_Generic_Dictionary_object__object___get_Item(pSVar15,key,MethodInfo_Material_get_Item);
        if (pUVar9 == (UnityEngine_Material_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0407038d;
        }
        value_01.fields.b = 0.5;
        value_01.fields.a = 1.0;
        value_01.fields.r = 0.5;
        value_01.fields.g = 0.5;
        UnityEngine_Material__SetColor(pUVar9,"_Tint",value_01,(MethodInfo *)0x0);
      }
      __this_03.fields._8_8_ = pIVar22;
      __this_03.fields._dictionary = _Var21.genericMethod;
      __this_03.fields._currentKey = pIVar8;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_03,(MethodInfo_3251B10 *)&_Stack_f8);
      key_00 = pIVar8;
    }
label_0407038d:
    il2cpp_runtime_helper_022b2c90();
label_04070392:
    il2cpp_runtime_helper_022b2c90();
label_04070397:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(key_00);
  }
  auVar20 = il2cpp_runtime_helper_022b2c90();
  lVar19 = auVar20._0_8_;
  if (auVar20._8_4_ == 1) {
    plVar16 = (long *)__cxa_begin_catch();
    lVar19 = *plVar16;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar22;
    __this_05.fields._dictionary = _Var21.genericMethod;
    __this_05.fields._currentKey = pIVar8;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_05,(MethodInfo_3251B10 *)&stack0xfffffffffffffee8);
    if (lVar19 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0();
  }
  __this_06.fields._8_8_ = pIVar22;
  __this_06.fields._dictionary = _Var21.genericMethod;
  __this_06.fields._currentKey = pIVar8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_06,(MethodInfo_3251B10 *)&stack0xfffffffffffffee8);
  _Unwind_Resume(lVar19);
}


// Weather.WeatherManager$$CreateBlendedSkybox
// il2cpp: UnityEngine_Material_o* Weather_WeatherManager__CreateBlendedSkybox (UnityEngine_Shader_o* shader, System_String_array* parts, System_String_o* skybox1, System_String_o* skybox2, const MethodInfo* method);
// 0x406fb70

UnityEngine_Material_o *
Weather_WeatherManager__CreateBlendedSkybox
          (UnityEngine_Shader_o *shader,System_String_array *parts,System_String_o *skybox1,
          System_String_o *skybox2,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  Il2CppObject *key;
  int iVar6;
  bool_conflict bVar7;
  UnityEngine_Material_o *pUVar8;
  ulong uVar9;
  UnityEngine_Material_o *pUVar10;
  UnityEngine_Texture_o *pUVar11;
  UnityEngine_Material_o *extraout_RAX;
  UnityEngine_Material_o *extraout_RAX_00;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar12;
  System_Collections_Generic_Dictionary_object__object__o *pSVar13;
  UnityEngine_Material_o *extraout_RAX_01;
  long *plVar14;
  UnityEngine_Material_o *extraout_RAX_02;
  System_String_o *unaff_RBP;
  UnityEngine_Material_o *pUVar15;
  long lVar16;
  undefined8 *unaff_R12;
  ulong unaff_R14;
  float value;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  undefined1 auVar17 [12];
  _union_233249 _Var18;
  Il2CppType *pIVar19;
  Il2CppObject *pIVar20;
  Il2CppObject *key_00;
  _union_233249 _Stack_d0;
  Il2CppType *pIStack_c8;
  Il2CppObject *pIStack_c0;
  _union_233249 _Stack_b0;
  Il2CppType *pIStack_a8;
  Il2CppObject *pIStack_a0;
  UnityEngine_Material_o *pUStack_98;
  undefined8 *puStack_90;
  UnityEngine_Material_o *pUStack_88;
  ulong uStack_80;
  System_String_array *pSStack_78;
  System_String_o *pSStack_70;
  undefined8 uStack_68;
  float fStack_54;
  System_String_o *pSStack_50;
  System_String_o *local_40;
  System_String_o *local_38;
  
  local_40 = skybox1;
  local_38 = skybox2;
  if (g_data_057ac303 == '\0') {
    pSStack_50 = (System_String_o *)0x406fba3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    pSStack_50 = (System_String_o *)0x406fbaf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    pSStack_50 = (System_String_o *)0x406fbbb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    pSStack_50 = (System_String_o *)0x406fbc7;
    il2cpp_runtime_helper_023445d0(&"2");
    pSStack_50 = (System_String_o *)0x406fbd3;
    il2cpp_runtime_helper_023445d0(&"_");
    pSStack_50 = (System_String_o *)0x406fbdf;
    il2cpp_runtime_helper_023445d0(&"Tex");
    pSStack_50 = (System_String_o *)0x406fbeb;
    il2cpp_runtime_helper_023445d0(&"_Tint");
    g_data_057ac303 = '\x01';
  }
  pSStack_50 = (System_String_o *)0x406fc01;
  pUVar8 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
  pSStack_50 = (System_String_o *)0x406fc11;
  UnityEngine_Material___ctor(pUVar8,shader,(MethodInfo *)0x0);
  if (parts != (System_String_array *)0x0) {
    iVar6 = (int)parts->max_length;
    if (pUVar8 == (UnityEngine_Material_o *)0x0) {
label_0406fde7:
      if (0 < iVar6) {
        pSStack_50 = (System_String_o *)0x406fe0a;
        shader = (UnityEngine_Shader_o *)
                 System_String__Concat_3af7150("_",parts->m_Items[0],"Tex",(MethodInfo *)0x0);
        unaff_RBP = (System_String_o *)&TypeInfo_WeatherManager;
        if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
          pSStack_50 = (System_String_o *)0x406fe26;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_WeatherManager + 0xb8) + 8);
        if (pSVar13 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pSStack_50 = (System_String_o *)0x406fe4e;
          pUVar10 = (UnityEngine_Material_o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar13,(Il2CppObject *)local_40,MethodInfo_Material_get_Item);
          if (pUVar10 != (UnityEngine_Material_o *)0x0) goto label_0406fe58;
        }
      }
    }
    else {
      if (0 < iVar6) {
        uVar9 = parts->max_length & 0xffffffff;
        unaff_R14 = 0;
        unaff_R12 = &TypeInfo_WeatherManager;
        do {
          if (uVar9 <= unaff_R14) {
            pSStack_50 = (System_String_o *)0x406fde7;
            iVar6 = il2cpp_runtime_helper_022b2ca0();
            goto label_0406fde7;
          }
          pSStack_50 = (System_String_o *)0x406fc6b;
          shader = (UnityEngine_Shader_o *)
                   System_String__Concat_3af7150
                             ("_",parts->m_Items[unaff_R14],"Tex",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
            pSStack_50 = (System_String_o *)0x406fc80;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     (*(long *)(TypeInfo_WeatherManager + 0xb8) + 8);
          if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0406fe53;
          pSStack_50 = (System_String_o *)0x406fcac;
          pUVar10 = (UnityEngine_Material_o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar13,(Il2CppObject *)local_40,MethodInfo_Material_get_Item);
          if (pUVar10 == (UnityEngine_Material_o *)0x0) goto label_0406fe53;
          pSStack_50 = (System_String_o *)0x406fcc2;
          pUVar11 = UnityEngine_Material__GetTexture(pUVar10,(System_String_o *)shader,(MethodInfo *)0x0);
          pSStack_50 = (System_String_o *)0x406fcd2;
          UnityEngine_Material__SetTexture(pUVar8,(System_String_o *)shader,pUVar11,(MethodInfo *)0x0);
          pSStack_50 = (System_String_o *)0x406fce6;
          unaff_RBP = System_String__Concat_3ae5ba0((System_String_o *)shader,"2",(MethodInfo *)0x0);
          pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     (*(long *)(TypeInfo_WeatherManager + 0xb8) + 8);
          if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0406fe53;
          pSStack_50 = (System_String_o *)0x406fd15;
          pUVar10 = (UnityEngine_Material_o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar13,(Il2CppObject *)local_38,MethodInfo_Material_get_Item);
          if (pUVar10 == (UnityEngine_Material_o *)0x0) goto label_0406fe53;
          pSStack_50 = (System_String_o *)0x406fd2b;
          pUVar11 = UnityEngine_Material__GetTexture(pUVar10,(System_String_o *)shader,(MethodInfo *)0x0);
          pSStack_50 = (System_String_o *)0x406fd3b;
          UnityEngine_Material__SetTexture(pUVar8,unaff_RBP,pUVar11,(MethodInfo *)0x0);
          unaff_R14 = unaff_R14 + 1;
          uVar2 = (uint)parts->max_length;
          uVar9 = (ulong)uVar2;
        } while ((long)unaff_R14 < (long)(int)uVar2);
      }
      if (pUVar8 != (UnityEngine_Material_o *)0x0) {
        pSStack_50 = (System_String_o *)0x406fd7a;
        value_00.fields.b = 0.5;
        value_00.fields.a = 1.0;
        value_00.fields.r = 0.5;
        value_00.fields.g = 0.5;
        UnityEngine_Material__SetColor(pUVar8,"_Tint",value_00,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
          pSStack_50 = (System_String_o *)0x406fdd7;
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac304 == '\0') {
          pSStack_50 = (System_String_o *)0x406fda2;
          il2cpp_runtime_helper_023445d0(&"_Blend");
          g_data_057ac304 = '\x01';
        }
        pSStack_50 = (System_String_o *)0x406fdc0;
        UnityEngine_Material__SetFloat(pUVar8,"_Blend",0.0,(MethodInfo *)0x0);
        return pUVar8;
      }
    }
  }
label_0406fe53:
  pSStack_50 = (System_String_o *)0x406fe58;
  pUVar10 = (UnityEngine_Material_o *)il2cpp_runtime_helper_022b2c90();
label_0406fe58:
  pSStack_50 = (System_String_o *)0x406fe65;
  UnityEngine_Material__GetTexture(pUVar10,(System_String_o *)shader,(MethodInfo *)0x0);
  pSStack_50 = (System_String_o *)0x406fe6a;
  value = (float)il2cpp_runtime_helper_022b2c90();
  pUVar15 = pUVar10;
  pSStack_50 = (System_String_o *)shader;
  if (g_data_057ac304 == '\0') {
    pUVar15 = (UnityEngine_Material_o *)&"_Blend";
    uStack_68 = 0x406fe93;
    fStack_54 = value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac304 = '\x01';
    value = fStack_54;
  }
  if (pUVar10 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat(pUVar10,"_Blend",value,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_68 = 0x406fec3;
  il2cpp_runtime_helper_022b2c90();
  uStack_68 = 0;
  if (g_data_057ac305 == '\0') {
    pSStack_70 = (System_String_o *)0x406fee9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_70 = (System_String_o *)0x406fef5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    pSStack_70 = (System_String_o *)0x406ff01;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pSStack_70 = (System_String_o *)0x406ff0d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac305 = '\x01';
  }
  pvVar3 = pUVar15[2].monitor;
  if (pvVar3 != (void *)0x0) {
    *(int *)((long)pvVar3 + 0x1c) = *(int *)((long)pvVar3 + 0x1c) + 1;
    iVar6 = *(int *)((long)pvVar3 + 0x18);
    *(undefined4 *)((long)pvVar3 + 0x18) = 0;
    if (0 < iVar6) {
      pSStack_70 = (System_String_o *)0x406ff40;
      System_Array__Clear(*(System_Array_o **)((long)pvVar3 + 0x10),0,iVar6,(MethodInfo *)0x0);
    }
    pUVar15 = (UnityEngine_Material_o *)&TypeInfo_WeatherManager;
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
      pSStack_70 = (System_String_o *)0x406ff58;
      il2cpp_runtime_helper_02337ed0();
    }
    lVar16 = MethodInfo_Void_Add;
    if (((**(long **)(TypeInfo_WeatherManager + 0xb8) != 0) &&
        (lVar4 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18), lVar4 != 0)) &&
       (__this = *(System_Collections_Generic_List_object__o **)(**(long **)(TypeInfo_WeatherManager + 0xb8) + 0x38),
       __this != (System_Collections_Generic_List_object__o *)0x0)) {
      pIVar20 = *(Il2CppObject **)(lVar4 + 0x20);
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this->fields)._items;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if ((uint)pSVar5->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    (__this,pIVar20,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          return extraout_RAX_00;
        }
        (__this->fields)._size = uVar2 + 1;
        pSVar5->m_Items[(int)uVar2] = pIVar20;
        pUVar8 = (UnityEngine_Material_o *)il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2);
        return pUVar8;
      }
    }
  }
  pSStack_70 = (System_String_o *)0x406ffe4;
  il2cpp_runtime_helper_022b2c90();
  pUStack_98 = pUVar15;
  puStack_90 = unaff_R12;
  pUStack_88 = pUVar8;
  uStack_80 = unaff_R14;
  pSStack_78 = parts;
  pSStack_70 = unaff_RBP;
  if (g_data_057ac306 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    il2cpp_runtime_helper_023445d0(&"_Tint");
    g_data_057ac306 = '\x01';
  }
  _Var18.genericMethod = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0
  ;
  pIVar19 = (Il2CppType *)0x0;
  pIVar20 = (Il2CppObject *)0x0;
  _Stack_d0.genericMethod =
       (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIStack_c8 = (Il2CppType *)0x0;
  pIStack_c0 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
             (*(long *)(TypeInfo_WeatherManager + 0xb8) + 0x10);
  if ((pSVar13 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (pSVar12 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar13,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic),
     pSVar12 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&_Stack_b0,
               pSVar12,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    _Var18 = _Stack_b0;
    pIVar19 = pIStack_a8;
    key_00 = pIStack_a0;
    while( true ) {
      __this_00.fields._8_8_ = pIVar19;
      __this_00.fields._dictionary = _Var18.genericMethod;
      __this_00.fields._currentKey = key_00;
      bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                        (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffff10);
      if ((char)bVar7 == '\0') {
        __this_03.fields._8_8_ = pIVar19;
        __this_03.fields._dictionary = _Var18.genericMethod;
        __this_03.fields._currentKey = key_00;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffff10);
        return extraout_RAX_01;
      }
      pIVar20 = key_00;
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_WeatherManager + 0xb8) + 0x10);
      if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      pSVar13 = (System_Collections_Generic_Dictionary_object__object__o *)
                System_Collections_Generic_Dictionary_object__object___get_Item(pSVar13,key_00,MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item);
      if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04070392;
      pSVar12 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar13,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
      if (pSVar12 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
      goto label_04070397;
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&_Stack_b0,
                 pSVar12,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      pIStack_c0 = pIStack_a0;
      _Stack_d0 = _Stack_b0;
      pIStack_c8 = pIStack_a8;
      while (__this_01.fields._8_8_ = pIVar19, __this_01.fields._dictionary = _Var18.genericMethod,
            __this_01.fields._currentKey = pIVar20,
            bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                              (__this_01,(MethodInfo_3251B20 *)&_Stack_d0), key = pIStack_c0,
            (char)bVar7 != '\0') {
        if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_WeatherManager + 0xb8) + 0x10);
        if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0407038d;
        }
        pSVar13 = (System_Collections_Generic_Dictionary_object__object__o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item(pSVar13,key_00,MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item)
        ;
        if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0407038d;
        }
        pUVar8 = (UnityEngine_Material_o *)
                 System_Collections_Generic_Dictionary_object__object___get_Item(pSVar13,key,MethodInfo_Material_get_Item);
        if (pUVar8 == (UnityEngine_Material_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0407038d;
        }
        value_01.fields.b = 0.5;
        value_01.fields.a = 1.0;
        value_01.fields.r = 0.5;
        value_01.fields.g = 0.5;
        UnityEngine_Material__SetColor(pUVar8,"_Tint",value_01,(MethodInfo *)0x0);
      }
      __this_02.fields._8_8_ = pIVar19;
      __this_02.fields._dictionary = _Var18.genericMethod;
      __this_02.fields._currentKey = pIVar20;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_02,(MethodInfo_3251B10 *)&_Stack_d0);
      key_00 = pIVar20;
    }
label_0407038d:
    il2cpp_runtime_helper_022b2c90();
label_04070392:
    il2cpp_runtime_helper_022b2c90();
label_04070397:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(key_00);
  }
  auVar17 = il2cpp_runtime_helper_022b2c90();
  lVar16 = auVar17._0_8_;
  if (auVar17._8_4_ == 1) {
    plVar14 = (long *)__cxa_begin_catch();
    lVar16 = *plVar14;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar19;
    __this_04.fields._dictionary = _Var18.genericMethod;
    __this_04.fields._currentKey = pIVar20;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_04,(MethodInfo_3251B10 *)&stack0xffffffffffffff10);
    if (lVar16 == 0) {
      return extraout_RAX_02;
    }
    il2cpp_runtime_helper_022fefe0();
  }
  __this_05.fields._8_8_ = pIVar19;
  __this_05.fields._dictionary = _Var18.genericMethod;
  __this_05.fields._currentKey = pIVar20;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_05,(MethodInfo_3251B10 *)&stack0xffffffffffffff10);
  _Unwind_Resume(lVar16);
}


// Weather.WeatherManager$$SetSkyboxBlend
// il2cpp: void Weather_WeatherManager__SetSkyboxBlend (UnityEngine_Material_o* skybox, float blend, const MethodInfo* method);
// 0x406fe70

void Weather_WeatherManager__SetSkyboxBlend(UnityEngine_Material_o *skybox,float blend,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  Il2CppObject *key;
  bool_conflict bVar6;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar7;
  System_Collections_Generic_Dictionary_object__object__o *pSVar8;
  long *plVar9;
  UnityEngine_Material_o *pUVar10;
  long lVar11;
  UnityEngine_Color_o value;
  undefined1 auVar12 [12];
  _union_233249 _Var13;
  Il2CppType *pIVar14;
  Il2CppObject *pIVar15;
  Il2CppObject *key_00;
  _union_233249 _Stack_88;
  Il2CppType *pIStack_80;
  Il2CppObject *pIStack_78;
  _union_233249 _Stack_68;
  Il2CppType *pIStack_60;
  Il2CppObject *pIStack_58;
  UnityEngine_Material_o *pUStack_50;
  
  pUVar10 = skybox;
  if (g_data_057ac304 == '\0') {
    pUVar10 = (UnityEngine_Material_o *)&"_Blend";
    il2cpp_runtime_helper_023445d0();
    g_data_057ac304 = '\x01';
  }
  if (skybox != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat(skybox,"_Blend",blend,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac305 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac305 = '\x01';
  }
  pvVar3 = pUVar10[2].monitor;
  if (pvVar3 != (void *)0x0) {
    *(int *)((long)pvVar3 + 0x1c) = *(int *)((long)pvVar3 + 0x1c) + 1;
    length = *(int *)((long)pvVar3 + 0x18);
    *(undefined4 *)((long)pvVar3 + 0x18) = 0;
    if (0 < length) {
      System_Array__Clear(*(System_Array_o **)((long)pvVar3 + 0x10),0,length,(MethodInfo *)0x0);
    }
    pUVar10 = (UnityEngine_Material_o *)&TypeInfo_WeatherManager;
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar11 = MethodInfo_Void_Add;
    if (((**(long **)(TypeInfo_WeatherManager + 0xb8) != 0) &&
        (lVar4 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18), lVar4 != 0)) &&
       (__this = *(System_Collections_Generic_List_object__o **)(**(long **)(TypeInfo_WeatherManager + 0xb8) + 0x38),
       __this != (System_Collections_Generic_List_object__o *)0x0)) {
      pIVar15 = *(Il2CppObject **)(lVar4 + 0x20);
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this->fields)._items;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar5->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar5->m_Items[(int)uVar2] = pIVar15;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2);
          return;
        }
        System_Collections_Generic_List_object___AddWithResize
                  (__this,pIVar15,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
        ;
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_50 = pUVar10;
  if (g_data_057ac306 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    il2cpp_runtime_helper_023445d0(&"_Tint");
    g_data_057ac306 = '\x01';
  }
  _Var13.genericMethod = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0
  ;
  pIVar14 = (Il2CppType *)0x0;
  pIVar15 = (Il2CppObject *)0x0;
  _Stack_88.genericMethod =
       (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIStack_80 = (Il2CppType *)0x0;
  pIStack_78 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_WeatherManager + 0xb8) + 0x10);
  if ((pSVar8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (pSVar7 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar8,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic),
     pSVar7 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&_Stack_68,
               pSVar7,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    _Var13 = _Stack_68;
    pIVar14 = pIStack_60;
    key_00 = pIStack_58;
    while( true ) {
      __this_00.fields._8_8_ = pIVar14;
      __this_00.fields._dictionary = _Var13.genericMethod;
      __this_00.fields._currentKey = key_00;
      bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                        (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffff58);
      if ((char)bVar6 == '\0') {
        __this_03.fields._8_8_ = pIVar14;
        __this_03.fields._dictionary = _Var13.genericMethod;
        __this_03.fields._currentKey = key_00;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffff58);
        return;
      }
      pIVar15 = key_00;
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_WeatherManager + 0xb8) + 0x10);
      if (pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)
               System_Collections_Generic_Dictionary_object__object___get_Item(pSVar8,key_00,MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item);
      if (pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04070392;
      pSVar7 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar8,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
      if (pSVar7 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
      goto label_04070397;
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&_Stack_68,
                 pSVar7,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      pIStack_78 = pIStack_58;
      _Stack_88 = _Stack_68;
      pIStack_80 = pIStack_60;
      while (__this_01.fields._8_8_ = pIVar14, __this_01.fields._dictionary = _Var13.genericMethod,
            __this_01.fields._currentKey = pIVar15,
            bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                              (__this_01,(MethodInfo_3251B20 *)&_Stack_88), key = pIStack_78,
            (char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_WeatherManager + 0xb8) + 0x10);
        if (pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0407038d;
        }
        pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)
                 System_Collections_Generic_Dictionary_object__object___get_Item(pSVar8,key_00,MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item);
        if (pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0407038d;
        }
        pUVar10 = (UnityEngine_Material_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item(pSVar8,key,MethodInfo_Material_get_Item);
        if (pUVar10 == (UnityEngine_Material_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0407038d;
        }
        value.fields.b = 0.5;
        value.fields.a = 1.0;
        value.fields.r = 0.5;
        value.fields.g = 0.5;
        UnityEngine_Material__SetColor(pUVar10,"_Tint",value,(MethodInfo *)0x0);
      }
      __this_02.fields._8_8_ = pIVar14;
      __this_02.fields._dictionary = _Var13.genericMethod;
      __this_02.fields._currentKey = pIVar15;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_02,(MethodInfo_3251B10 *)&_Stack_88);
      key_00 = pIVar15;
    }
label_0407038d:
    il2cpp_runtime_helper_022b2c90();
label_04070392:
    il2cpp_runtime_helper_022b2c90();
label_04070397:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(key_00);
  }
  auVar12 = il2cpp_runtime_helper_022b2c90();
  lVar11 = auVar12._0_8_;
  if (auVar12._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch();
    lVar11 = *plVar9;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar14;
    __this_04.fields._dictionary = _Var13.genericMethod;
    __this_04.fields._currentKey = pIVar15;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_04,(MethodInfo_3251B10 *)&stack0xffffffffffffff58);
    if (lVar11 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0();
  }
  __this_05.fields._8_8_ = pIVar14;
  __this_05.fields._dictionary = _Var13.genericMethod;
  __this_05.fields._currentKey = pIVar15;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_05,(MethodInfo_3251B10 *)&stack0xffffffffffffff58);
  _Unwind_Resume(lVar11);
}


// Weather.WeatherManager$$ResetCameras
// il2cpp: void Weather_WeatherManager__ResetCameras (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x406fed0

void Weather_WeatherManager__ResetCameras(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  uint uVar2;
  System_Collections_Generic_List_Camera__o *pSVar3;
  long lVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_06;
  Il2CppObject *key;
  bool_conflict bVar6;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar7;
  System_Collections_Generic_Dictionary_object__object__o *pSVar8;
  UnityEngine_Material_o *__this_07;
  long *plVar9;
  long lVar10;
  UnityEngine_Color_o value;
  undefined1 auVar11 [12];
  _union_233249 _Var12;
  Il2CppType *pIVar13;
  Il2CppObject *pIVar14;
  Il2CppObject *key_00;
  _union_233249 _Stack_70;
  Il2CppType *pIStack_68;
  Il2CppObject *pIStack_60;
  _union_233249 _Stack_50;
  Il2CppType *pIStack_48;
  Il2CppObject *pIStack_40;
  Weather_WeatherManager_o *pWStack_38;
  
  if (g_data_057ac305 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac305 = '\x01';
  }
  pSVar3 = (__this->fields)._skyboxCameras;
  if (pSVar3 != (System_Collections_Generic_List_Camera__o *)0x0) {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    __this = (Weather_WeatherManager_o *)&TypeInfo_WeatherManager;
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar10 = MethodInfo_Void_Add;
    if (((**(long **)(TypeInfo_WeatherManager + 0xb8) != 0) &&
        (lVar4 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18), lVar4 != 0)) &&
       (__this_00 = *(System_Collections_Generic_List_object__o **)(**(long **)(TypeInfo_WeatherManager + 0xb8) + 0x38),
       __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
      pIVar14 = *(Il2CppObject **)(lVar4 + 0x20);
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this_00->fields)._items;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar5->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar5->m_Items[(int)uVar2] = pIVar14;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2);
          return;
        }
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,pIVar14,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pWStack_38 = __this;
  if (g_data_057ac306 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    il2cpp_runtime_helper_023445d0(&"_Tint");
    g_data_057ac306 = '\x01';
  }
  _Var12.genericMethod = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0
  ;
  pIVar13 = (Il2CppType *)0x0;
  pIVar14 = (Il2CppObject *)0x0;
  _Stack_70.genericMethod =
       (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIStack_68 = (Il2CppType *)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_WeatherManager + 0xb8) + 0x10);
  if ((pSVar8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (pSVar7 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar8,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic),
     pSVar7 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&_Stack_50,
               pSVar7,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    _Var12 = _Stack_50;
    pIVar13 = pIStack_48;
    key_00 = pIStack_40;
    while( true ) {
      __this_01.fields._8_8_ = pIVar13;
      __this_01.fields._dictionary = _Var12.genericMethod;
      __this_01.fields._currentKey = key_00;
      bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                        (__this_01,(MethodInfo_3251B20 *)&stack0xffffffffffffff70);
      if ((char)bVar6 == '\0') {
        __this_04.fields._8_8_ = pIVar13;
        __this_04.fields._dictionary = _Var12.genericMethod;
        __this_04.fields._currentKey = key_00;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_04,(MethodInfo_3251B10 *)&stack0xffffffffffffff70);
        return;
      }
      pIVar14 = key_00;
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_WeatherManager + 0xb8) + 0x10);
      if (pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)
               System_Collections_Generic_Dictionary_object__object___get_Item(pSVar8,key_00,MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item);
      if (pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04070392;
      pSVar7 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar8,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
      if (pSVar7 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
      goto label_04070397;
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&_Stack_50,
                 pSVar7,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      pIStack_60 = pIStack_40;
      _Stack_70 = _Stack_50;
      pIStack_68 = pIStack_48;
      while (__this_02.fields._8_8_ = pIVar13, __this_02.fields._dictionary = _Var12.genericMethod,
            __this_02.fields._currentKey = pIVar14,
            bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                              (__this_02,(MethodInfo_3251B20 *)&_Stack_70), key = pIStack_60,
            (char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_WeatherManager + 0xb8) + 0x10);
        if (pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0407038d;
        }
        pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)
                 System_Collections_Generic_Dictionary_object__object___get_Item(pSVar8,key_00,MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item);
        if (pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0407038d;
        }
        __this_07 = (UnityEngine_Material_o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item(pSVar8,key,MethodInfo_Material_get_Item);
        if (__this_07 == (UnityEngine_Material_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0407038d;
        }
        value.fields.b = 0.5;
        value.fields.a = 1.0;
        value.fields.r = 0.5;
        value.fields.g = 0.5;
        UnityEngine_Material__SetColor(__this_07,"_Tint",value,(MethodInfo *)0x0);
      }
      __this_03.fields._8_8_ = pIVar13;
      __this_03.fields._dictionary = _Var12.genericMethod;
      __this_03.fields._currentKey = pIVar14;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_03,(MethodInfo_3251B10 *)&_Stack_70);
      key_00 = pIVar14;
    }
label_0407038d:
    il2cpp_runtime_helper_022b2c90();
label_04070392:
    il2cpp_runtime_helper_022b2c90();
label_04070397:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(key_00);
  }
  auVar11 = il2cpp_runtime_helper_022b2c90();
  lVar10 = auVar11._0_8_;
  if (auVar11._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch();
    lVar10 = *plVar9;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar13;
    __this_05.fields._dictionary = _Var12.genericMethod;
    __this_05.fields._currentKey = pIVar14;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_05,(MethodInfo_3251B10 *)&stack0xffffffffffffff70);
    if (lVar10 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0();
  }
  __this_06.fields._8_8_ = pIVar13;
  __this_06.fields._dictionary = _Var12.genericMethod;
  __this_06.fields._currentKey = pIVar14;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_06,(MethodInfo_3251B10 *)&stack0xffffffffffffff70);
  _Unwind_Resume(lVar10);
}


// Weather.WeatherManager$$ResetSkyboxColors
// il2cpp: void Weather_WeatherManager__ResetSkyboxColors (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x406fff0

void Weather_WeatherManager__ResetSkyboxColors(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  Il2CppObject *key;
  bool_conflict bVar1;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  UnityEngine_Material_o *__this_06;
  long *plVar4;
  long lVar5;
  UnityEngine_Color_o value;
  undefined1 auVar6 [12];
  _union_233249 _Var7;
  Il2CppType *pIVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *key_00;
  _union_233249 local_68;
  Il2CppType *pIStack_60;
  Il2CppObject *local_58;
  _union_233249 local_48;
  Il2CppType *pIStack_40;
  Il2CppObject *local_38;
  
  if (g_data_057ac306 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    il2cpp_runtime_helper_023445d0(&"_Tint");
    g_data_057ac306 = '\x01';
  }
  _Var7.genericMethod = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIVar8 = (Il2CppType *)0x0;
  pIVar9 = (Il2CppObject *)0x0;
  local_68.genericMethod =
       (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_WeatherManager + 0xb8) + 0x10);
  if ((pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (pSVar2 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar3,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic),
     pSVar2 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&local_48,
               pSVar2,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    _Var7 = local_48;
    pIVar8 = pIStack_40;
    key_00 = local_38;
    while( true ) {
      __this_00.fields._8_8_ = pIVar8;
      __this_00.fields._dictionary = _Var7.genericMethod;
      __this_00.fields._currentKey = key_00;
      bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                        (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffff78);
      if ((char)bVar1 == '\0') {
        __this_03.fields._8_8_ = pIVar8;
        __this_03.fields._dictionary = _Var7.genericMethod;
        __this_03.fields._currentKey = key_00;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffff78);
        return;
      }
      pIVar9 = key_00;
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_WeatherManager + 0xb8) + 0x10);
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               System_Collections_Generic_Dictionary_object__object___get_Item(pSVar3,key_00,MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item);
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04070392;
      pSVar2 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar3,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
      if (pSVar2 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
      goto label_04070397;
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&local_48,
                 pSVar2,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      local_58 = local_38;
      local_68 = local_48;
      pIStack_60 = pIStack_40;
      while (__this_01.fields._8_8_ = pIVar8, __this_01.fields._dictionary = _Var7.genericMethod,
            __this_01.fields._currentKey = pIVar9,
            bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                              (__this_01,(MethodInfo_3251B20 *)&local_68), key = local_58, (char)bVar1 != '\0'
            ) {
        if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_WeatherManager + 0xb8) + 0x10);
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0407038d;
        }
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 System_Collections_Generic_Dictionary_object__object___get_Item(pSVar3,key_00,MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item);
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0407038d;
        }
        __this_06 = (UnityEngine_Material_o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item(pSVar3,key,MethodInfo_Material_get_Item);
        if (__this_06 == (UnityEngine_Material_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0407038d;
        }
        value.fields.b = 0.5;
        value.fields.a = 1.0;
        value.fields.r = 0.5;
        value.fields.g = 0.5;
        UnityEngine_Material__SetColor(__this_06,"_Tint",value,(MethodInfo *)0x0);
      }
      __this_02.fields._8_8_ = pIVar8;
      __this_02.fields._dictionary = _Var7.genericMethod;
      __this_02.fields._currentKey = pIVar9;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_02,(MethodInfo_3251B10 *)&local_68);
      key_00 = pIVar9;
    }
label_0407038d:
    il2cpp_runtime_helper_022b2c90();
label_04070392:
    il2cpp_runtime_helper_022b2c90();
label_04070397:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(key_00);
  }
  auVar6 = il2cpp_runtime_helper_022b2c90();
  lVar5 = auVar6._0_8_;
  if (auVar6._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch();
    lVar5 = *plVar4;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar8;
    __this_04.fields._dictionary = _Var7.genericMethod;
    __this_04.fields._currentKey = pIVar9;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_04,(MethodInfo_3251B10 *)&stack0xffffffffffffff78);
    if (lVar5 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0();
  }
  __this_05.fields._8_8_ = pIVar8;
  __this_05.fields._dictionary = _Var7.genericMethod;
  __this_05.fields._currentKey = pIVar9;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_05,(MethodInfo_3251B10 *)&stack0xffffffffffffff78);
  _Unwind_Resume(lVar5);
}


// Weather.WeatherManager$$ResetPhysics
// il2cpp: void Weather_WeatherManager__ResetPhysics (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x4070440

void Weather_WeatherManager__ResetPhysics(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  System_String_o *path;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  UnityEngine_GameObject_o *pUVar5;
  Il2CppObject *pIVar6;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_04;
  long *plVar7;
  MethodInfo *method_00;
  Il2CppClass *__this_05;
  undefined1 auVar8 [12];
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar9;
  Il2CppType *pIVar10;
  undefined1 auStack_98 [16];
  Il2CppObject *pIStack_88;
  Il2CppClass **ppIStack_80;
  
  if (g_data_057ac307 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac307 = '\x01';
    if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) goto label_040704a9;
label_0407045d:
    lVar4 = *(long *)TypeInfo_WeatherManager->static_fields;
  }
  else {
    if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c != 0) goto label_0407045d;
label_040704a9:
    il2cpp_runtime_helper_02337ed0();
    lVar4 = *(long *)TypeInfo_WeatherManager->static_fields;
  }
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x9c) = 0;
    *(undefined8 *)(lVar4 + 0x94) = 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac308 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseWeatherEffect_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WindWeatherEffect);
    g_data_057ac308 = '\x01';
  }
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar4 = *(long *)TypeInfo_WeatherManager->static_fields;
  __this_05 = TypeInfo_WeatherManager;
  if (lVar4 != 0) {
    if (0.0 < *(float *)(lVar4 + 0x94)) {
      if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar4 = *(long *)TypeInfo_WeatherManager->static_fields;
        if (lVar4 == 0) goto label_040708dc;
      }
      __this_05 = *(Il2CppClass **)(lVar4 + 0x40);
      if ((__this_05 == (Il2CppClass *)0x0) ||
         (pIVar3 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_05,10,
                              MethodInfo_BaseWeatherEffect_get_Item), pIVar3 == (Il2CppObject *)0x0)) goto label_040708dc;
      if (0.0 < *(float *)&pIVar3[3].klass) {
        if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_05 = TypeInfo_WeatherManager;
        if (*(long *)TypeInfo_WeatherManager->static_fields == 0) goto label_040708dc;
        if (g_data_057ac31b == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057ac31b = '\x01';
        }
      }
    }
    if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar4 = *(long *)TypeInfo_WeatherManager->static_fields;
    __this_05 = TypeInfo_WeatherManager;
    if (lVar4 != 0) {
      if (0.0 < *(float *)(lVar4 + 0x98)) {
        if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
          lVar4 = *(long *)TypeInfo_WeatherManager->static_fields;
          if (lVar4 == 0) goto label_040708dc;
        }
        __this_05 = *(Il2CppClass **)(lVar4 + 0x40);
        if ((__this_05 == (Il2CppClass *)0x0) ||
           (pIVar3 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_05,0xc,
                                MethodInfo_BaseWeatherEffect_get_Item), pIVar3 == (Il2CppObject *)0x0)) goto label_040708dc;
        if (0.0 < *(float *)&pIVar3[3].klass) {
          if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_05 = TypeInfo_WeatherManager;
          if (*(long *)TypeInfo_WeatherManager->static_fields == 0) goto label_040708dc;
          if (g_data_057ac31b == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057ac31b = '\x01';
          }
        }
      }
      if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar4 = *(long *)TypeInfo_WeatherManager->static_fields;
      __this_05 = TypeInfo_WeatherManager;
      if (lVar4 != 0) {
        if (*(float *)(lVar4 + 0x9c) <= 0.0) {
          return;
        }
        if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
          lVar4 = *(long *)TypeInfo_WeatherManager->static_fields;
          if (lVar4 == 0) goto label_040708dc;
        }
        __this_05 = *(Il2CppClass **)(lVar4 + 0x40);
        if ((__this_05 != (Il2CppClass *)0x0) &&
           (pIVar3 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_05,0xd,
                                MethodInfo_BaseWeatherEffect_get_Item), pIVar3 != (Il2CppObject *)0x0)) {
          if (*(float *)&pIVar3[3].klass <= 0.0) {
            return;
          }
          if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_05 = TypeInfo_WeatherManager;
          if (*(long *)TypeInfo_WeatherManager->static_fields != 0) {
            if (*(int *)(TypeInfo_WindWeatherEffect + 0xe4) != 0) {
              return;
            }
            il2cpp_runtime_helper_02337ed0();
            return;
          }
        }
      }
    }
  }
label_040708dc:
  il2cpp_runtime_helper_022b2c90();
  ppIStack_80 = &TypeInfo_WeatherManager;
  if (g_data_057ac30c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_Weather_Weather);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseWeatherEffect_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RainWeatherEffect_AddComponent_RainWeatherEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SnowWeatherEffect_AddComponent_SnowWeatherEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ThunderWeatherEffect_AddComponent_ThunderWeatherEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_WindWeatherEffect_AddComponent_WindWeatherEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    il2cpp_runtime_helper_023445d0(&"Prefabs/ThunderEffect");
    il2cpp_runtime_helper_023445d0(&"Prefabs/SnowEffect");
    il2cpp_runtime_helper_023445d0(&"Prefabs/RainEffect");
    il2cpp_runtime_helper_023445d0(&"Prefabs/WindEffect");
    g_data_057ac30c = '\x01';
  }
  pSVar9 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
  pIVar10 = (Il2CppType *)0x0;
  pIVar3 = (Il2CppObject *)0x0;
  pIVar1 = (__this_05->_1).element_class;
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar5 = (UnityEngine_GameObject_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset_object_(path,"Prefabs/RainEffect",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
     (pIVar6 = UnityEngine_GameObject__AddComponent_object_(pUVar5,MethodInfo_RainWeatherEffect_AddComponent_RainWeatherEffect), pIVar1 != (Il2CppClass *)0x0
     )) {
    System_Collections_Generic_Dictionary_Int32Enum__object___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar1,10,pIVar6,MethodInfo_Void_Add);
    pIVar1 = (__this_05->_1).element_class;
    pUVar5 = (UnityEngine_GameObject_o *)
             ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58),"Prefabs/SnowEffect",0,
                        MethodInfo_GameObject_InstantiateAsset_GameObject);
    if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
       (pIVar6 = UnityEngine_GameObject__AddComponent_object_(pUVar5,MethodInfo_SnowWeatherEffect_AddComponent_SnowWeatherEffect),
       pIVar1 != (Il2CppClass *)0x0)) {
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar1,0xc,pIVar6,MethodInfo_Void_Add);
      pIVar1 = (__this_05->_1).element_class;
      pUVar5 = (UnityEngine_GameObject_o *)
               ApplicationManagers_ResourceManager__InstantiateAsset_object_
                         (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58),"Prefabs/WindEffect",0,
                          MethodInfo_GameObject_InstantiateAsset_GameObject);
      if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
         (pIVar6 = UnityEngine_GameObject__AddComponent_object_(pUVar5,MethodInfo_WindWeatherEffect_AddComponent_WindWeatherEffect),
         pIVar1 != (Il2CppClass *)0x0)) {
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar1,0xd,pIVar6,MethodInfo_Void_Add);
        pIVar1 = (__this_05->_1).element_class;
        pUVar5 = (UnityEngine_GameObject_o *)
                 ApplicationManagers_ResourceManager__InstantiateAsset_object_
                           (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58),"Prefabs/ThunderEffect",0,
                            MethodInfo_GameObject_InstantiateAsset_GameObject);
        if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
           (pIVar6 = UnityEngine_GameObject__AddComponent_object_(pUVar5,MethodInfo_ThunderWeatherEffect_AddComponent_ThunderWeatherEffect),
           pIVar1 != (Il2CppClass *)0x0)) {
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar1,0xb,pIVar6,MethodInfo_Void_Add);
          pIVar1 = (__this_05->_1).element_class;
          if ((pIVar1 != (Il2CppClass *)0x0) &&
             (__this_04 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Values
                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar1,
                                     MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_Weather_Weather),
             __this_04 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
            System_Collections_Generic_Dictionary_ValueCollection_Int32Enum__object___GetEnumerator
                      ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                       auStack_98,__this_04,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
            pSVar9 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
                     auStack_98._0_8_;
            pIVar10 = (Il2CppType *)auStack_98._8_8_;
            pIVar3 = pIStack_88;
            while (__this_00.fields._8_8_ = pIVar10,
                  __this_00.fields._dictionary =
                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9,
                  __this_00.fields._currentValue = pIVar3,
                  bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___MoveNext
                                    (__this_00,(MethodInfo_3249910 *)&stack0xffffffffffffff48),
                  (char)bVar2 != '\0') {
              lVar4 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
              if (lVar4 == 0) {
label_04070cca:
                il2cpp_runtime_helper_022b2c90();
label_04070ccf:
                il2cpp_runtime_helper_022b2c90();
                goto label_04070cd4;
              }
              lVar4 = *(long *)(lVar4 + 0x28);
              if (lVar4 == 0) goto label_04070ccf;
              if (pIVar3 == (Il2CppObject *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_04070cca;
              }
              pIVar6 = pIVar3;
              (*pIVar3->klass->vtable[0xb].methodPtr)
                        (pIVar3,*(undefined8 *)(lVar4 + 0x10),pIVar3->klass->vtable[0xb].method);
              (*pIVar3->klass->vtable[8].methodPtr)(pIVar3,pIVar3->klass->vtable[8].method);
              (*pIVar3->klass->vtable[6].methodPtr)(pIVar3,0,pIVar3->klass->vtable[6].method);
              pIVar3 = pIVar6;
            }
            __this_01.fields._8_8_ = pIVar10;
            __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9;
            __this_01.fields._currentValue = pIVar3;
            method_00 = MethodInfo_Void_Dispose;
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___Dispose
                      (__this_01,(MethodInfo_3249900 *)&stack0xffffffffffffff48);
            goto label_04070cae;
          }
        }
      }
    }
  }
label_04070cd4:
  auVar8 = il2cpp_runtime_helper_022b2c90();
  if (auVar8._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar4 = *plVar7;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar10;
    __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9;
    __this_02.fields._currentValue = pIVar3;
    method_00 = MethodInfo_Void_Dispose;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___Dispose
              (__this_02,(MethodInfo_3249900 *)&stack0xffffffffffffff48);
    if (lVar4 == 0) {
label_04070cae:
      Weather_WeatherManager__CreateFlashlight((Weather_WeatherManager_o *)__this_05,method_00);
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_03.fields._8_8_ = pIVar10;
  __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9;
  __this_03.fields._currentValue = pIVar3;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___Dispose
            (__this_03,(MethodInfo_3249900 *)&stack0xffffffffffffff48);
  _Unwind_Resume(auVar8._0_8_);
}


// Weather.WeatherManager$$GetWeatherForce
// il2cpp: UnityEngine_Vector3_o Weather_WeatherManager__GetWeatherForce (const MethodInfo* method);
// 0x40704d0

UnityEngine_Vector3_o Weather_WeatherManager__GetWeatherForce(MethodInfo *method)

{
  Il2CppClass *pIVar1;
  System_String_o *path;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  UnityEngine_GameObject_o *pUVar5;
  Il2CppObject *pIVar6;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  long *plVar7;
  MethodInfo *method_00;
  Il2CppClass *__this_04;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  float fVar8;
  float extraout_XMM1_Da;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 uVar9;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined1 auVar10 [12];
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar13;
  Il2CppType *pIVar14;
  undefined1 auStack_90 [16];
  Il2CppObject *pIStack_80;
  Il2CppClass **ppIStack_78;
  float local_3c;
  undefined8 local_38;
  
  if (g_data_057ac308 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseWeatherEffect_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WindWeatherEffect);
    g_data_057ac308 = '\x01';
  }
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  local_38 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  local_3c = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar4 = *(long *)TypeInfo_WeatherManager->static_fields;
  __this_04 = TypeInfo_WeatherManager;
  if (lVar4 != 0) {
    if (0.0 < *(float *)(lVar4 + 0x94)) {
      if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar4 = *(long *)TypeInfo_WeatherManager->static_fields;
        if (lVar4 == 0) goto label_040708dc;
      }
      __this_04 = *(Il2CppClass **)(lVar4 + 0x40);
      if ((__this_04 == (Il2CppClass *)0x0) ||
         (pIVar3 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04,10,
                              MethodInfo_BaseWeatherEffect_get_Item), pIVar3 == (Il2CppObject *)0x0)) goto label_040708dc;
      if (0.0 < *(float *)&pIVar3[3].klass) {
        if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_04 = TypeInfo_WeatherManager;
        if (*(long *)TypeInfo_WeatherManager->static_fields == 0) goto label_040708dc;
        fVar8 = *(float *)(*(long *)TypeInfo_WeatherManager->static_fields + 0x94);
        if (g_data_057ac31b == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057ac31b = '\x01';
        }
        uVar9 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
        local_38._4_4_ = (float)((ulong)local_38 >> 0x20);
        local_38 = CONCAT44(local_38._4_4_ + fVar8 * (float)((ulong)uVar9 >> 0x20),
                            (float)local_38 + fVar8 * (float)uVar9);
        local_3c = local_3c + fVar8 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
      }
    }
    if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar4 = *(long *)TypeInfo_WeatherManager->static_fields;
    __this_04 = TypeInfo_WeatherManager;
    if (lVar4 != 0) {
      if (0.0 < *(float *)(lVar4 + 0x98)) {
        if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
          lVar4 = *(long *)TypeInfo_WeatherManager->static_fields;
          if (lVar4 == 0) goto label_040708dc;
        }
        __this_04 = *(Il2CppClass **)(lVar4 + 0x40);
        if ((__this_04 == (Il2CppClass *)0x0) ||
           (pIVar3 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04,0xc,
                                MethodInfo_BaseWeatherEffect_get_Item), pIVar3 == (Il2CppObject *)0x0)) goto label_040708dc;
        if (0.0 < *(float *)&pIVar3[3].klass) {
          if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_04 = TypeInfo_WeatherManager;
          if (*(long *)TypeInfo_WeatherManager->static_fields == 0) goto label_040708dc;
          fVar8 = *(float *)(*(long *)TypeInfo_WeatherManager->static_fields + 0x98);
          if (g_data_057ac31b == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057ac31b = '\x01';
          }
          uVar9 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
          local_38 = CONCAT44(local_38._4_4_ + fVar8 * (float)((ulong)uVar9 >> 0x20),
                              (float)local_38 + fVar8 * (float)uVar9);
          local_3c = local_3c + fVar8 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
        }
      }
      if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar4 = *(long *)TypeInfo_WeatherManager->static_fields;
      __this_04 = TypeInfo_WeatherManager;
      if (lVar4 != 0) {
        if (*(float *)(lVar4 + 0x9c) <= 0.0) goto label_040708c9;
        if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
          lVar4 = *(long *)TypeInfo_WeatherManager->static_fields;
          if (lVar4 == 0) goto label_040708dc;
        }
        __this_04 = *(Il2CppClass **)(lVar4 + 0x40);
        if ((__this_04 != (Il2CppClass *)0x0) &&
           (pIVar3 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04,0xd,
                                MethodInfo_BaseWeatherEffect_get_Item), pIVar3 != (Il2CppObject *)0x0)) {
          if (*(float *)&pIVar3[3].klass <= 0.0) {
label_040708c9:
            UVar11.fields.z = local_3c;
            UVar11.fields.x = (float)local_38;
            UVar11.fields.y = local_38._4_4_;
            return (UnityEngine_Vector3_o)UVar11.fields;
          }
          if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_04 = TypeInfo_WeatherManager;
          if (*(long *)TypeInfo_WeatherManager->static_fields != 0) {
            fVar8 = *(float *)(*(long *)TypeInfo_WeatherManager->static_fields + 0x9c);
            if (*(int *)(TypeInfo_WindWeatherEffect + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            uVar9 = *(undefined8 *)(*(long *)(TypeInfo_WindWeatherEffect + 0xb8) + 4);
            local_38 = CONCAT44(local_38._4_4_ + fVar8 * (float)((ulong)uVar9 >> 0x20),
                                (float)local_38 + fVar8 * (float)uVar9);
            local_3c = local_3c + fVar8 * *(float *)(*(long *)(TypeInfo_WindWeatherEffect + 0xb8) + 0xc);
            goto label_040708c9;
          }
        }
      }
    }
  }
label_040708dc:
  il2cpp_runtime_helper_022b2c90();
  ppIStack_78 = &TypeInfo_WeatherManager;
  uVar9 = extraout_XMM1_Qa;
  if (g_data_057ac30c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_Weather_Weather);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseWeatherEffect_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RainWeatherEffect_AddComponent_RainWeatherEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SnowWeatherEffect_AddComponent_SnowWeatherEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ThunderWeatherEffect_AddComponent_ThunderWeatherEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_WindWeatherEffect_AddComponent_WindWeatherEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    il2cpp_runtime_helper_023445d0(&"Prefabs/ThunderEffect");
    il2cpp_runtime_helper_023445d0(&"Prefabs/SnowEffect");
    il2cpp_runtime_helper_023445d0(&"Prefabs/RainEffect");
    il2cpp_runtime_helper_023445d0(&"Prefabs/WindEffect");
    g_data_057ac30c = '\x01';
    uVar9 = extraout_XMM1_Qa_00;
  }
  pSVar13 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
  pIVar14 = (Il2CppType *)0x0;
  pIVar3 = (Il2CppObject *)0x0;
  pIVar1 = (__this_04->_1).element_class;
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar9 = extraout_XMM1_Qa_01;
  }
  path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar9 = extraout_XMM1_Qa_02;
  }
  pUVar5 = (UnityEngine_GameObject_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset_object_(path,"Prefabs/RainEffect",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
     (pIVar6 = UnityEngine_GameObject__AddComponent_object_(pUVar5,MethodInfo_RainWeatherEffect_AddComponent_RainWeatherEffect), pIVar1 != (Il2CppClass *)0x0
     )) {
    System_Collections_Generic_Dictionary_Int32Enum__object___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar1,10,pIVar6,MethodInfo_Void_Add);
    pIVar1 = (__this_04->_1).element_class;
    pUVar5 = (UnityEngine_GameObject_o *)
             ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58),"Prefabs/SnowEffect",0,
                        MethodInfo_GameObject_InstantiateAsset_GameObject);
    if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
       (pIVar6 = UnityEngine_GameObject__AddComponent_object_(pUVar5,MethodInfo_SnowWeatherEffect_AddComponent_SnowWeatherEffect),
       pIVar1 != (Il2CppClass *)0x0)) {
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar1,0xc,pIVar6,MethodInfo_Void_Add);
      pIVar1 = (__this_04->_1).element_class;
      pUVar5 = (UnityEngine_GameObject_o *)
               ApplicationManagers_ResourceManager__InstantiateAsset_object_
                         (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58),"Prefabs/WindEffect",0,
                          MethodInfo_GameObject_InstantiateAsset_GameObject);
      if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
         (pIVar6 = UnityEngine_GameObject__AddComponent_object_(pUVar5,MethodInfo_WindWeatherEffect_AddComponent_WindWeatherEffect),
         pIVar1 != (Il2CppClass *)0x0)) {
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar1,0xd,pIVar6,MethodInfo_Void_Add);
        pIVar1 = (__this_04->_1).element_class;
        pUVar5 = (UnityEngine_GameObject_o *)
                 ApplicationManagers_ResourceManager__InstantiateAsset_object_
                           (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58),"Prefabs/ThunderEffect",0,
                            MethodInfo_GameObject_InstantiateAsset_GameObject);
        if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
           (pIVar6 = UnityEngine_GameObject__AddComponent_object_(pUVar5,MethodInfo_ThunderWeatherEffect_AddComponent_ThunderWeatherEffect),
           pIVar1 != (Il2CppClass *)0x0)) {
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar1,0xb,pIVar6,MethodInfo_Void_Add);
          pIVar1 = (__this_04->_1).element_class;
          if ((pIVar1 != (Il2CppClass *)0x0) &&
             (__this_03 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Values
                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar1,
                                     MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_Weather_Weather),
             __this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
            System_Collections_Generic_Dictionary_ValueCollection_Int32Enum__object___GetEnumerator
                      ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                       auStack_90,__this_03,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
            pSVar13 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
                      auStack_90._0_8_;
            pIVar14 = (Il2CppType *)auStack_90._8_8_;
            pIVar3 = pIStack_80;
            while( true ) {
              fVar8 = (float)uVar9;
              __this.fields._8_8_ = pIVar14;
              __this.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13;
              __this.fields._currentValue = pIVar3;
              bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___MoveNext
                                (__this,(MethodInfo_3249910 *)&stack0xffffffffffffff50);
              if ((char)bVar2 == '\0') break;
              lVar4 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
              if (lVar4 == 0) {
label_04070cca:
                il2cpp_runtime_helper_022b2c90();
label_04070ccf:
                il2cpp_runtime_helper_022b2c90();
                goto label_04070cd4;
              }
              lVar4 = *(long *)(lVar4 + 0x28);
              if (lVar4 == 0) goto label_04070ccf;
              if (pIVar3 == (Il2CppObject *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_04070cca;
              }
              pIVar6 = pIVar3;
              (*pIVar3->klass->vtable[0xb].methodPtr)
                        (pIVar3,*(undefined8 *)(lVar4 + 0x10),pIVar3->klass->vtable[0xb].method);
              (*pIVar3->klass->vtable[8].methodPtr)(pIVar3,pIVar3->klass->vtable[8].method);
              (*pIVar3->klass->vtable[6].methodPtr)(pIVar3,0,pIVar3->klass->vtable[6].method);
              uVar9 = extraout_XMM1_Qa_03;
              pIVar3 = pIVar6;
            }
            __this_00.fields._8_8_ = pIVar14;
            __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13;
            __this_00.fields._currentValue = pIVar3;
            method_00 = MethodInfo_Void_Dispose;
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___Dispose
                      (__this_00,(MethodInfo_3249900 *)&stack0xffffffffffffff50);
            goto label_04070cae;
          }
        }
      }
    }
  }
label_04070cd4:
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar4 = *plVar7;
    __cxa_end_catch();
    __this_01.fields._8_8_ = pIVar14;
    __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13;
    __this_01.fields._currentValue = pIVar3;
    method_00 = MethodInfo_Void_Dispose;
    fVar8 = extraout_XMM1_Da;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___Dispose
              (__this_01,(MethodInfo_3249900 *)&stack0xffffffffffffff50);
    if (lVar4 == 0) {
label_04070cae:
      Weather_WeatherManager__CreateFlashlight((Weather_WeatherManager_o *)__this_04,method_00);
      UVar12.fields.y = (float)extraout_XMM0_Db;
      UVar12.fields.x = (float)extraout_XMM0_Da;
      UVar12.fields.z = fVar8;
      return (UnityEngine_Vector3_o)UVar12.fields;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_02.fields._8_8_ = pIVar14;
  __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13;
  __this_02.fields._currentValue = pIVar3;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___Dispose
            (__this_02,(MethodInfo_3249900 *)&stack0xffffffffffffff50);
  _Unwind_Resume(auVar10._0_8_);
}


// Weather.WeatherManager$$RestartWeather
// il2cpp: void Weather_WeatherManager__RestartWeather (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x406f2d0

void Weather_WeatherManager__RestartWeather(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t length;
  System_Collections_Generic_List_WeatherScheduleRunner__o *pSVar3;
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *__this_00;
  System_Collections_Generic_Dictionary_int__float__o *pSVar4;
  System_Collections_Generic_List_WeatherEffect__o *pSVar5;
  System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *__this_01;
  long lVar6;
  Settings_ListSetting_T__o *__this_02;
  Settings_StringSetting_o *pSVar7;
  Settings_StringSetting_c *pSVar8;
  Settings_BoolSetting_o *pSVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  char cVar10;
  bool_conflict bVar11;
  long lVar12;
  Settings_WeatherSet_o *pSVar13;
  long *plVar14;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar15;
  Weather_WeatherManager_o *__this_07;
  Settings_BaseSetting_o *unaff_R14;
  Settings_BaseSetting_o *pSVar16;
  undefined1 auVar17 [12];
  Settings_BaseSetting_c *pSVar18;
  Il2CppMethodPointer pIVar19;
  Weather_WeatherScheduleRunner_o *pWVar20;
  Weather_WeatherScheduleRunner_o *__this_08;
  
  pSVar16 = (Settings_BaseSetting_o *)&stack0xffffffffffffffc8;
  if (g_data_057ac309 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherScheduleRunner_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Weather_WeatherScheduleRunner_GetEnu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
    il2cpp_runtime_helper_023445d0(&"Map Default*");
    g_data_057ac309 = '\x01';
  }
  pSVar18 = (Settings_BaseSetting_c *)0x0;
  pIVar19 = (Il2CppMethodPointer)0x0;
  pWVar20 = (Weather_WeatherScheduleRunner_o *)0x0;
  __this_07 = __this;
  Weather_WeatherManager__ResetCameras(__this,method);
  Weather_WeatherManager__ResetSkyboxColors(__this_07,method);
  if (g_data_057ac307 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac307 = '\x01';
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) != 0) goto label_0406f40f;
label_0406f449:
    il2cpp_runtime_helper_02337ed0();
    lVar12 = **(long **)(TypeInfo_WeatherManager + 0xb8);
    if (lVar12 == 0) goto label_0406f8fc;
label_0406f464:
    *(undefined4 *)(lVar12 + 0x9c) = 0;
    *(undefined8 *)(lVar12 + 0x94) = 0;
    pSVar3 = (__this->fields)._scheduleRunners;
    if (pSVar3 == (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) goto label_0406f8fc;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    if (0 < length) {
      in_RCX = (MethodInfo *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields)._effects;
    if (__this_00 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)
    goto label_0406f8fc;
    System_Collections_Generic_Dictionary_Int32Enum__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Void_Clear);
    pSVar13 = (__this->fields)._currentWeather;
    if (pSVar13 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
    (*(pSVar13->klass->vtable)._4_SetDefault.methodPtr)(pSVar13,(pSVar13->klass->vtable)._4_SetDefault.method)
    ;
    pSVar13 = (__this->fields)._startWeather;
    if (pSVar13 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
    (*(pSVar13->klass->vtable)._4_SetDefault.methodPtr)(pSVar13,(pSVar13->klass->vtable)._4_SetDefault.method)
    ;
    pSVar13 = (__this->fields)._targetWeather;
    if (pSVar13 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
    (*(pSVar13->klass->vtable)._4_SetDefault.methodPtr)(pSVar13,(pSVar13->klass->vtable)._4_SetDefault.method)
    ;
    pSVar4 = (__this->fields)._targetWeatherStartTimes;
    if (pSVar4 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_0406f8fc;
    System_Collections_Generic_Dictionary_int__float___Clear(pSVar4,MethodInfo_Void_Clear);
    pSVar4 = (__this->fields)._targetWeatherEndTimes;
    if (pSVar4 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_0406f8fc;
    System_Collections_Generic_Dictionary_int__float___Clear(pSVar4,MethodInfo_Void_Clear);
    pSVar5 = (__this->fields)._needApply;
    if (pSVar5 == (System_Collections_Generic_List_WeatherEffect__o *)0x0) goto label_0406f8fc;
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar5->fields)._size = 0;
    (__this->fields)._currentTime = 0.0;
    __this_01 = (__this->fields)._currentScheduleWait;
    if (__this_01 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0)
    goto label_0406f8fc;
    pMVar15 = MethodInfo_Void_Clear;
    System_Collections_Generic_Dictionary_object__float___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
               (MethodInfo_310C5C0 *)MethodInfo_Void_Clear);
    Weather_WeatherManager__CreateEffects(__this,pMVar15);
    Weather_WeatherManager__SetSceneWeather(__this,pMVar15);
    Weather_WeatherManager__ApplyCurrentWeather(__this,1,1,in_RCX);
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) != 2) goto label_0406f8db;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      bVar11 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar10 = (char)bVar11;
    }
    else {
      bVar11 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar10 = (char)bVar11;
    }
    if (cVar10 == '\0') goto label_0406f8db;
    lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
    if ((((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x20), lVar12 == 0)) ||
        (lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50), lVar6 == 0)) ||
       ((lVar6 = *(long *)(lVar6 + 0x60), lVar6 == 0 ||
        (__this_02 = *(Settings_ListSetting_T__o **)(lVar12 + 0x28),
        __this_02 == (Settings_ListSetting_T__o *)0x0)))) goto label_0406f8fc;
    unaff_R14 = Settings_ListSetting_object___GetItemAt(__this_02,*(int32_t *)(lVar6 + 0x14),MethodInfo_BaseSetting_GetItemAt);
    if (unaff_R14 != (Settings_BaseSetting_o *)0x0) {
      bVar2 = (TypeInfo_WeatherSet->_2).naturalAligment;
      if ((bVar2 <= (unaff_R14->klass->_2).naturalAligment) &&
         ((unaff_R14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_WeatherSet)) goto label_0406f6a4;
      goto label_0406f906;
    }
label_0406f6a4:
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar12 = *(long *)(TypeInfo_MapLoader + 0xb8);
      if (*(char *)(lVar12 + 0x80) != '\0') goto label_0406f6cf;
label_0406f7aa:
      pSVar13 = (__this->fields)._currentWeather;
      if (pSVar13 != (Settings_WeatherSet_o *)0x0) {
        (*(pSVar13->klass->vtable)._9_Copy.methodPtr)
                  (pSVar13,unaff_R14,(pSVar13->klass->vtable)._9_Copy.method);
        pSVar13 = (__this->fields)._currentWeather;
        pMVar15 = extraout_RDX_00;
        if (pSVar13 != (Settings_WeatherSet_o *)0x0) goto label_0406f7d9;
      }
      goto label_0406f8fc;
    }
    lVar12 = *(long *)(TypeInfo_MapLoader + 0xb8);
    if (*(char *)(lVar12 + 0x80) == '\0') goto label_0406f7aa;
label_0406f6cf:
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (*(long *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x88) != 0) goto label_0406f6ea;
      goto label_0406f7aa;
    }
    if (*(long *)(lVar12 + 0x88) == 0) goto label_0406f7aa;
label_0406f6ea:
    if ((unaff_R14 == (Settings_BaseSetting_o *)0x0) || (unaff_R14[2].klass == (Settings_BaseSetting_c *)0x0))
    goto label_0406f8fc;
    bVar11 = System_String__op_Equality
                       ((System_String_o *)((unaff_R14[2].klass)->_1).namespaze,"Map Default*",(MethodInfo *)0x0
                       );
    if ((char)bVar11 == '\0') goto label_0406f7aa;
    pSVar13 = (__this->fields)._currentWeather;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pSVar13 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
    (*(pSVar13->klass->vtable)._9_Copy.methodPtr)
              (pSVar13,*(undefined8 *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x88),
               (pSVar13->klass->vtable)._9_Copy.method);
    pSVar13 = (__this->fields)._currentWeather;
    pMVar15 = extraout_RDX;
    if (pSVar13 == (Settings_WeatherSet_o *)0x0) goto label_0406f8fc;
label_0406f7d9:
    pSVar7 = (pSVar13->fields).Schedule;
    if (pSVar7 == (Settings_StringSetting_o *)0x0) goto label_0406f8fc;
    Weather_WeatherManager__CreateScheduleRunners(__this,(pSVar7->fields)._value,pMVar15);
    pSVar13 = (__this->fields)._currentWeather;
    if ((pSVar13 == (Settings_WeatherSet_o *)0x0) ||
       (pSVar7 = (pSVar13->fields).Schedule, pSVar7 == (Settings_StringSetting_o *)0x0)) goto label_0406f8fc;
    pSVar8 = pSVar7->klass;
    pMVar15 = (pSVar8->vtable)._4_SetDefault.method;
    (*(pSVar8->vtable)._4_SetDefault.methodPtr)();
    pSVar13 = (__this->fields)._currentWeather;
    if ((pSVar13 == (Settings_WeatherSet_o *)0x0) ||
       (pSVar9 = (pSVar13->fields).UseSchedule, pSVar9 == (Settings_BoolSetting_o *)0x0)) goto label_0406f8fc;
    if (*(char *)((long)&(pSVar9->fields).DefaultValue + 1) != '\0') {
      pSVar3 = (__this->fields)._scheduleRunners;
      if (pSVar3 == (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) goto label_0406f8fc;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T_Enumerator_Weather_WeatherScheduleRunner_GetEnu);
      __this_08 = pWVar20;
      while (__this_03.fields._8_8_ = pIVar19,
            __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar18,
            __this_03.fields._current = (Il2CppObject *)__this_08,
            bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8),
            (char)bVar11 != '\0') {
        pWVar20 = (Weather_WeatherScheduleRunner_o *)0x0;
        if (__this_08 == (Weather_WeatherScheduleRunner_o *)0x0) goto label_0406f901;
        pWVar20 = __this_08;
        Weather_WeatherScheduleRunner__ProcessSchedule(__this_08,(MethodInfo *)0x0);
        Weather_WeatherScheduleRunner__ConsumeSchedule(__this_08,(MethodInfo *)0x0);
        __this_08 = pWVar20;
      }
      __this_04.fields._8_8_ = pIVar19;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
      __this_04.fields._current = (Il2CppObject *)__this_08;
      pMVar15 = MethodInfo_Void_Dispose;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    }
  }
  else {
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) goto label_0406f449;
label_0406f40f:
    lVar12 = **(long **)(TypeInfo_WeatherManager + 0xb8);
    if (lVar12 != 0) goto label_0406f464;
label_0406f8fc:
    pSVar16 = unaff_R14;
    il2cpp_runtime_helper_022b2c90();
label_0406f901:
    il2cpp_runtime_helper_022b2c90();
    unaff_R14 = pSVar16;
label_0406f906:
    auVar17 = il2cpp_runtime_helper_022b2fd0(unaff_R14);
    if (auVar17._8_4_ != 1) {
label_0406f95d:
      __this_06.fields._8_8_ = pIVar19;
      __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
      __this_06.fields._current = (Il2CppObject *)pWVar20;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
      _Unwind_Resume(auVar17._0_8_);
    }
    plVar14 = (long *)__cxa_begin_catch(auVar17._0_8_);
    lVar12 = *plVar14;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar19;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
    __this_05.fields._current = (Il2CppObject *)pWVar20;
    pMVar15 = MethodInfo_Void_Dispose;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar12 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar12);
      goto label_0406f95d;
    }
  }
  Weather_WeatherManager__SyncWeather(__this,pMVar15);
  (__this->fields)._currentSyncWait = 5.0;
  *(undefined1 *)&(__this->fields)._needSync = 0;
label_0406f8db:
  (__this->fields)._currentLerpWait = 0.05;
  *(undefined1 *)&(__this->fields)._finishedLoading = 1;
  return;
}


// Weather.WeatherManager$$SetSceneWeather
// il2cpp: void Weather_WeatherManager__SetSceneWeather (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x4070d80

void Weather_WeatherManager__SetSceneWeather(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  Settings_WeatherSet_o *pSVar7;
  Settings_ColorSetting_o *pSVar8;
  long lVar9;
  Settings_FloatSetting_o *pSVar10;
  Settings_StringSetting_o *pSVar11;
  Weather_WeatherManager__WaitAndApplySkybox_d__51_c *pWVar12;
  Il2CppClass *pIVar13;
  Utility_Color255_o *pUVar14;
  Settings_Vector3Setting_o *pSVar15;
  System_Collections_Generic_List_object__o *pSVar16;
  undefined1 auVar17 [16];
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_T__o __this_07;
  System_Collections_Generic_List_Enumerator_T__o __this_08;
  System_Collections_Generic_List_Enumerator_T__o __this_09;
  Weather_WeatherManager__WaitAndApplySkybox_d__51_o *__this_10;
  int32_t key;
  bool_conflict bVar18;
  MethodInfo *pMVar19;
  System_String_o *key_00;
  UnityEngine_Component_o *pUVar20;
  UnityEngine_GameObject_o *pUVar21;
  Il2CppObject *pIVar22;
  long *plVar23;
  char extraout_DL;
  Weather_WeatherManager__WaitAndApplySkybox_d__51_o *unaff_RBP;
  byte bVar24;
  MethodInfo_2A24090 **__this_11;
  Weather_WeatherManager_o *__this_12;
  System_Collections_Specialized_OrderedDictionary_o *unaff_R13;
  float fVar25;
  undefined4 uVar26;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar27;
  undefined4 extraout_XMM0_Dd;
  undefined8 uVar28;
  undefined8 extraout_XMM1_Qa;
  undefined1 auVar29 [16];
  UnityEngine_Color_o UVar30;
  UnityEngine_Quaternion_o value;
  undefined1 auVar31 [12];
  UnityEngine_Vector3_o euler;
  float in_stack_ffffffffffffff50;
  undefined4 in_stack_ffffffffffffff54;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 in_stack_ffffffffffffff60;
  float in_stack_ffffffffffffff64;
  undefined1 auStack_98 [8];
  Il2CppType *pIStack_90;
  int32_t iStack_88;
  undefined4 uStack_84;
  Weather_WeatherManager_c *pWStack_80;
  Il2CppType *pIStack_78;
  Weather_WeatherManager__WaitAndApplySkybox_d__51_o *pWStack_70;
  Weather_WeatherManager_c *pWStack_60;
  Il2CppType *pIStack_58;
  int32_t iStack_50;
  Il2CppRGCTXData *pIStack_48;
  
  bVar24 = (byte)method;
  __this_11 = (MethodInfo_2A24090 **)__this;
  if (g_data_057ac30a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    __this_11 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac30a = '\x01';
  }
  if (1 < *(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) - 3U) {
    return;
  }
  pSVar7 = (__this->fields)._currentWeather;
  if (pSVar7 != (Settings_WeatherSet_o *)0x0) {
    pSVar8 = (pSVar7->fields).AmbientLight;
    __this = (Weather_WeatherManager_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    bVar24 = 0xff;
    __this_11 = (MethodInfo_2A24090 **)__this;
    Utility_Color255___ctor((Utility_Color255_o *)__this,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
    if (pSVar8 != (Settings_ColorSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar8,(Il2CppObject *)__this,MethodInfo_Void_set_Value);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_48 = (Il2CppRGCTXData *)__this;
  if (g_data_057ac312 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseWeatherEffect_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Light_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherEffect_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FlashlightWeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Weather_WeatherEffect_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Light_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherEffect_EnumToList_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WindWeatherEffect);
    il2cpp_runtime_helper_023445d0(&"_Tint");
    g_data_057ac312 = '\x01';
  }
  pWStack_60 = (Weather_WeatherManager_c *)0x0;
  pIStack_58 = (Il2CppType *)0x0;
  _iStack_50 = (Il2CppType **)0x0;
  pWStack_80 = (Weather_WeatherManager_c *)0x0;
  pIStack_78 = (Il2CppType *)0x0;
  pWStack_70 = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)0x0;
  if (bVar24 == 0) {
    if (g_data_057ac317 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      g_data_057ac317 = '\x01';
    }
    lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x98), lVar9 == 0)) goto label_04071fc9;
    if (*(int *)(lVar9 + 0x14) == 0) {
      return;
    }
  }
  if (extraout_DL != '\0') {
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar19 = (MethodInfo *)Utility_Util__EnumToList_Int32Enum_(MethodInfo_List_1_Weather_WeatherEffect_EnumToList_WeatherEffect);
    ((Il2CppRGCTXData *)(__this_11 + 0xe))->method = pMVar19;
    il2cpp_runtime_helper_022b4080((Il2CppRGCTXData *)(__this_11 + 0xe),pMVar19);
  }
  lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if (((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x98), lVar9 != 0)) &&
     (((Il2CppRGCTXData *)(__this_11 + 0xe))->method != (MethodInfo *)0x0)) {
    uVar5 = *(uint *)(lVar9 + 0x14);
    unaff_RBP = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)(ulong)uVar5;
    System_Collections_Generic_List_Int32Enum___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_98,
               (System_Collections_Generic_List_T__o *)((Il2CppRGCTXData *)(__this_11 + 0xe))->method,
               MethodInfo_List_1_T_Enumerator_Weather_WeatherEffect_GetEnumerator);
    _iStack_50 = (Il2CppType **)CONCAT44(uStack_84,iStack_88);
    pWStack_60 = (Weather_WeatherManager_c *)auStack_98;
    pIStack_58 = pIStack_90;
switchD_0407115d_default:
    __this_12 = (Weather_WeatherManager_o *)&stack0xffffffffffffffa0;
    __this_00.fields._list._4_4_ = in_stack_ffffffffffffff54;
    __this_00.fields._list._0_4_ = in_stack_ffffffffffffff50;
    __this_00.fields._index = (int)in_stack_ffffffffffffff58;
    __this_00.fields._version = (int)((ulong)in_stack_ffffffffffffff58 >> 0x20);
    __this_00.fields._current._0_4_ = in_stack_ffffffffffffff60;
    __this_00.fields._current._4_4_ = in_stack_ffffffffffffff64;
    bVar18 = System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext
                       (__this_00,(MethodInfo_3216100 *)__this_12);
    if ((char)bVar18 == '\0') {
      __this_07.fields._list._4_4_ = in_stack_ffffffffffffff54;
      __this_07.fields._list._0_4_ = in_stack_ffffffffffffff50;
      __this_07.fields._index = (int)in_stack_ffffffffffffff58;
      __this_07.fields._version = (int)((ulong)in_stack_ffffffffffffff58 >> 0x20);
      __this_07.fields._current._0_4_ = in_stack_ffffffffffffff60;
      __this_07.fields._current._4_4_ = in_stack_ffffffffffffff64;
      System_Collections_Generic_List_Enumerator_Int32Enum___Dispose
                (__this_07,(MethodInfo_32160F0 *)&stack0xffffffffffffffa0);
      goto label_04071f1d;
    }
    key = iStack_50;
    unaff_RBP = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)((ulong)_iStack_50 & 0xffffffff);
    if ((uVar5 == 1 & (bVar24 ^ 1)) == 0) goto label_04071147;
    __this_12 = (Weather_WeatherManager_o *)((Il2CppRGCTXData *)(__this_11 + 5))->method;
    if (__this_12 != (Weather_WeatherManager_o *)0x0) goto code_r0x04071132;
label_04071fbc:
    pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    goto label_04071fc1;
  }
label_04071fc9:
  do {
    il2cpp_runtime_helper_022b2c90();
label_04071fce:
    il2cpp_runtime_helper_022b2c90();
label_04071fd3:
    il2cpp_runtime_helper_022b2c90();
label_04071fd8:
    il2cpp_runtime_helper_022b2c90();
label_04071fdd:
    il2cpp_runtime_helper_022b2c90();
label_04071fe2:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04071fef:
    il2cpp_runtime_helper_022b2c90();
label_04071ff4:
    il2cpp_runtime_helper_022b2c90();
label_04071ff9:
    il2cpp_runtime_helper_022b2c90();
label_04071ffe:
    il2cpp_runtime_helper_022b2c90();
label_04072003:
    il2cpp_runtime_helper_022b2c90();
label_04072008:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04072015:
    il2cpp_runtime_helper_022b2c90();
label_0407201a:
    il2cpp_runtime_helper_022b2c90();
label_0407201f:
    il2cpp_runtime_helper_022b2c90();
label_04072024:
    il2cpp_runtime_helper_022b2c90();
label_04072029:
    il2cpp_runtime_helper_022b2c90();
label_0407202e:
    il2cpp_runtime_helper_022b2c90();
label_04072033:
    il2cpp_runtime_helper_022b2c90();
label_04072038:
    il2cpp_runtime_helper_022b2c90();
label_0407203d:
    il2cpp_runtime_helper_022b2c90();
label_04072042:
    il2cpp_runtime_helper_022b2c90();
label_04072047:
    il2cpp_runtime_helper_022b2c90();
label_0407204c:
    il2cpp_runtime_helper_022b2c90();
label_04072051:
    il2cpp_runtime_helper_022b2c90();
label_04072056:
    il2cpp_runtime_helper_022b2c90();
label_0407205b:
    il2cpp_runtime_helper_022b2c90();
label_04072060:
    il2cpp_runtime_helper_022b2c90();
label_04072065:
    il2cpp_runtime_helper_022b2c90();
label_0407206a:
    il2cpp_runtime_helper_022b2c90();
label_0407206f:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(unaff_R13);
label_0407207c:
    il2cpp_runtime_helper_022b2c90();
label_04072081:
    il2cpp_runtime_helper_022b2c90();
label_04072086:
    il2cpp_runtime_helper_022b2c90();
label_0407208b:
    il2cpp_runtime_helper_022b2c90();
label_04072090:
    il2cpp_runtime_helper_022b2c90();
label_04072095:
    il2cpp_runtime_helper_022b2c90();
label_0407209a:
    il2cpp_runtime_helper_022b2c90();
label_0407209f:
    il2cpp_runtime_helper_022b2c90();
label_040720a4:
    il2cpp_runtime_helper_022b2c90();
label_040720a9:
    il2cpp_runtime_helper_022b2c90();
label_040720ae:
    il2cpp_runtime_helper_022b2c90();
label_040720b3:
    il2cpp_runtime_helper_022b2c90();
label_040720b8:
    il2cpp_runtime_helper_022b2c90();
label_040720bd:
    il2cpp_runtime_helper_022b2c90();
label_040720c2:
    il2cpp_runtime_helper_022b2c90();
label_040720c7:
    il2cpp_runtime_helper_022b2c90();
label_040720cc:
    il2cpp_runtime_helper_022b2c90();
label_040720d1:
    il2cpp_runtime_helper_022b2c90();
label_040720d6:
    il2cpp_runtime_helper_022b2c90();
label_040720db:
    il2cpp_runtime_helper_022b2c90();
label_040720e0:
    il2cpp_runtime_helper_022b2c90();
label_040720e5:
    il2cpp_runtime_helper_022b2fd0(unaff_RBP);
label_040720ed:
    il2cpp_runtime_helper_022b2c90();
label_040720f2:
    il2cpp_runtime_helper_022b2c90();
label_040720f7:
    il2cpp_runtime_helper_022b2c90();
label_040720fc:
    fVar2 = (float)il2cpp_runtime_helper_022b2c90();
    uVar28 = extraout_XMM1_Qa;
label_04072101:
    il2cpp_runtime_helper_022b2fd0(fVar2,uVar28,unaff_RBP);
label_04072109:
    il2cpp_runtime_helper_022b2c90();
label_0407210e:
    il2cpp_runtime_helper_022b2c90();
label_04072113:
    il2cpp_runtime_helper_022b2c90();
label_04072118:
    il2cpp_runtime_helper_022b2c90();
label_0407211d:
    il2cpp_runtime_helper_022b2c90();
label_04072122:
    il2cpp_runtime_helper_022b2c90();
label_04072127:
    auVar31 = il2cpp_runtime_helper_022b2c90();
    uVar26 = auVar31._0_4_;
    uVar27 = auVar31._4_4_;
    if (auVar31._8_4_ != 1) {
label_04072468:
      __this_09.fields._list._4_4_ = uVar27;
      __this_09.fields._list._0_4_ = uVar26;
      __this_09.fields._index = (int)in_stack_ffffffffffffff58;
      __this_09.fields._version = (int)((ulong)in_stack_ffffffffffffff58 >> 0x20);
      __this_09.fields._current._0_4_ = in_stack_ffffffffffffff60;
      __this_09.fields._current._4_4_ = in_stack_ffffffffffffff64;
      System_Collections_Generic_List_Enumerator_Int32Enum___Dispose
                (__this_09,(MethodInfo_32160F0 *)&stack0xffffffffffffffa0);
      _Unwind_Resume(CONCAT44(uVar27,uVar26));
    }
    plVar23 = (long *)__cxa_begin_catch(auVar31._0_8_);
    lVar9 = *plVar23;
    __cxa_end_catch();
    __this_08.fields._list._4_4_ = uVar27;
    __this_08.fields._list._0_4_ = uVar26;
    __this_08.fields._index = (int)in_stack_ffffffffffffff58;
    __this_08.fields._version = (int)((ulong)in_stack_ffffffffffffff58 >> 0x20);
    __this_08.fields._current._0_4_ = in_stack_ffffffffffffff60;
    __this_08.fields._current._4_4_ = in_stack_ffffffffffffff64;
    System_Collections_Generic_List_Enumerator_Int32Enum___Dispose
              (__this_08,(MethodInfo_32160F0 *)&stack0xffffffffffffffa0);
    unaff_RBP = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)0x0;
    if (lVar9 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar9);
      goto label_04072468;
    }
label_04071f1d:
    pMVar19 = ((Il2CppRGCTXData *)(__this_11 + 0xe))->method;
    if (pMVar19 != (MethodInfo *)0x0) {
      piVar1 = (int *)((long)&pMVar19->name + 4);
      *piVar1 = *piVar1 + 1;
      *(undefined4 *)&pMVar19->name = 0;
      return;
    }
  } while( true );
code_r0x04071132:
  bVar18 = System_Collections_Generic_HashSet_Int32Enum___Contains
                     ((System_Collections_Generic_HashSet_T__o *)__this_12,iStack_50,MethodInfo_Boolean_Contains);
  if ((char)bVar18 != '\0') {
label_04071147:
    switch(key) {
    case 1:
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x28);
      if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) goto label_04072024;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_98,pSVar16,MethodInfo_List_1_T_Enumerator_UnityEngine_Light_GetEnumerator);
      pWStack_70 = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)CONCAT44(uStack_84,iStack_88);
      pWStack_80 = (Weather_WeatherManager_c *)auStack_98;
      pIStack_78 = pIStack_90;
      while (__this_01.fields._list._4_4_ = in_stack_ffffffffffffff54,
            __this_01.fields._list._0_4_ = in_stack_ffffffffffffff50,
            __this_01.fields._index = (int)in_stack_ffffffffffffff58,
            __this_01.fields._version = (int)((ulong)in_stack_ffffffffffffff58 >> 0x20),
            __this_01.fields._current._0_4_ = in_stack_ffffffffffffff60,
            __this_01.fields._current._4_4_ = in_stack_ffffffffffffff64,
            bVar18 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_01,(MethodInfo_321A1D0 *)&pWStack_80), __this_10 = pWStack_70,
            (char)bVar18 != '\0') {
        if (((Il2CppRGCTXData *)(__this_11 + 9))->klass == (Il2CppClass *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04071fbc;
        }
        pIVar13 = (((Il2CppRGCTXData *)(__this_11 + 9))->klass->_1).castClass;
        if (pIVar13 == (Il2CppClass *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04071fbc;
        }
        pUVar14 = (Utility_Color255_o *)(pIVar13->_1).namespaze;
        if (pUVar14 == (Utility_Color255_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04071fbc;
        }
        UVar30 = Utility_Color255__ToColor(pUVar14,(MethodInfo *)0x0);
        unaff_RBP = __this_10;
        if (__this_10 == (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04071fbc;
        }
        UnityEngine_Light__set_color((UnityEngine_Light_o *)__this_10,UVar30,(MethodInfo *)0x0);
      }
      unaff_RBP = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)&g_data_00000004;
      unaff_R13 = (System_Collections_Specialized_OrderedDictionary_o *)0x0;
      __this_02.fields._list._4_4_ = in_stack_ffffffffffffff54;
      __this_02.fields._list._0_4_ = in_stack_ffffffffffffff50;
      __this_02.fields._index = (int)in_stack_ffffffffffffff58;
      __this_02.fields._version = (int)((ulong)in_stack_ffffffffffffff58 >> 0x20);
      __this_02.fields._current._0_4_ = in_stack_ffffffffffffff60;
      __this_02.fields._current._4_4_ = in_stack_ffffffffffffff64;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_02,(MethodInfo_321A1C0 *)&pWStack_80)
      ;
      break;
    case 2:
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x28);
      if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) goto label_04071ff4;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_98,pSVar16,MethodInfo_List_1_T_Enumerator_UnityEngine_Light_GetEnumerator);
      pWStack_70 = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)CONCAT44(uStack_84,iStack_88);
      pWStack_80 = (Weather_WeatherManager_c *)auStack_98;
      pIStack_78 = pIStack_90;
      while (__this_03.fields._list._4_4_ = in_stack_ffffffffffffff54,
            __this_03.fields._list._0_4_ = in_stack_ffffffffffffff50,
            __this_03.fields._index = (int)in_stack_ffffffffffffff58,
            __this_03.fields._version = (int)((ulong)in_stack_ffffffffffffff58 >> 0x20),
            __this_03.fields._current._0_4_ = in_stack_ffffffffffffff60,
            __this_03.fields._current._4_4_ = in_stack_ffffffffffffff64,
            bVar18 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_03,(MethodInfo_321A1D0 *)&pWStack_80), (char)bVar18 != '\0') {
        if (((Il2CppRGCTXData *)(__this_11 + 9))->klass == (Il2CppClass *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04071fbc;
        }
        pIVar13 = (((Il2CppRGCTXData *)(__this_11 + 9))->klass->_1).declaringType;
        if (pIVar13 == (Il2CppClass *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04071fbc;
        }
        if (pWStack_70 == (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04071fbc;
        }
        UnityEngine_Light__set_intensity
                  ((UnityEngine_Light_o *)pWStack_70,
                   ((Settings_FloatSetting_Fields *)&(pIVar13->_1).name)->_value,(MethodInfo *)0x0);
      }
      unaff_RBP = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)&g_data_00000004;
      unaff_R13 = (System_Collections_Specialized_OrderedDictionary_o *)0x0;
      __this_04.fields._list._4_4_ = in_stack_ffffffffffffff54;
      __this_04.fields._list._0_4_ = in_stack_ffffffffffffff50;
      __this_04.fields._index = (int)in_stack_ffffffffffffff58;
      __this_04.fields._version = (int)((ulong)in_stack_ffffffffffffff58 >> 0x20);
      __this_04.fields._current._0_4_ = in_stack_ffffffffffffff60;
      __this_04.fields._current._4_4_ = in_stack_ffffffffffffff64;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&pWStack_80)
      ;
      break;
    case 3:
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x28);
      if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) goto label_0407210e;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_98,pSVar16,MethodInfo_List_1_T_Enumerator_UnityEngine_Light_GetEnumerator);
      pWStack_70 = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)CONCAT44(uStack_84,iStack_88);
      pWStack_80 = (Weather_WeatherManager_c *)auStack_98;
      pIStack_78 = pIStack_90;
      while (__this_05.fields._list._4_4_ = in_stack_ffffffffffffff54,
            __this_05.fields._list._0_4_ = in_stack_ffffffffffffff50,
            __this_05.fields._index = (int)in_stack_ffffffffffffff58,
            __this_05.fields._version = (int)((ulong)in_stack_ffffffffffffff58 >> 0x20),
            __this_05.fields._current._0_4_ = in_stack_ffffffffffffff60,
            __this_05.fields._current._4_4_ = in_stack_ffffffffffffff64,
            bVar18 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_05,(MethodInfo_321A1D0 *)&pWStack_80), (char)bVar18 != '\0') {
        if (pWStack_70 == (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04071fbc;
        }
        unaff_RBP = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)
                    UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pWStack_70,(MethodInfo *)0x0);
        if (((Il2CppRGCTXData *)(__this_11 + 9))->klass == (Il2CppClass *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04071fbc;
        }
        pIVar13 = (((Il2CppRGCTXData *)(__this_11 + 9))->klass->_1).parent;
        if (pIVar13 == (Il2CppClass *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04071fbc;
        }
        uVar28 = *(undefined8 *)((long)&(pIVar13->_1).namespaze + 4);
        euler.fields.x = (float)uVar28 * 0.017453292;
        euler.fields.z = *(float *)((long)&(pIVar13->_1).byval_arg.data + 4) * 0.017453292;
        euler.fields.y = (float)((ulong)uVar28 >> 0x20) * 0.017453292;
        value = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
        if (unaff_RBP == (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04071fbc;
        }
        UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)unaff_RBP,value,(MethodInfo *)0x0);
      }
      unaff_RBP = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)&g_data_00000004;
      unaff_R13 = (System_Collections_Specialized_OrderedDictionary_o *)0x0;
      __this_06.fields._list._4_4_ = in_stack_ffffffffffffff54;
      __this_06.fields._list._0_4_ = in_stack_ffffffffffffff50;
      __this_06.fields._index = (int)in_stack_ffffffffffffff58;
      __this_06.fields._version = (int)((ulong)in_stack_ffffffffffffff58 >> 0x20);
      __this_06.fields._current._0_4_ = in_stack_ffffffffffffff60;
      __this_06.fields._current._4_4_ = in_stack_ffffffffffffff64;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)&pWStack_80)
      ;
      break;
    case 4:
      if (((Il2CppRGCTXData *)(__this_11 + 9))->klass == (Il2CppClass *)0x0) goto label_040720db;
      pSVar8 = (((Il2CppRGCTXData *)(__this_11 + 9))->klass->_1).generic_class;
      if (pSVar8 == (Settings_ColorSetting_o *)0x0) goto label_040720d6;
      pUVar14 = (pSVar8->fields)._value;
      if (pUVar14 == (Utility_Color255_o *)0x0) goto label_040720ae;
      UVar30 = Utility_Color255__ToColor(pUVar14,(MethodInfo *)0x0);
      UnityEngine_RenderSettings__set_ambientLight(UVar30,(MethodInfo *)0x0);
      break;
    case 5:
      if (g_data_057ac313 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndApplySkybox_d__51);
        g_data_057ac313 = '\x01';
      }
      unaff_RBP = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndApplySkybox_d__51);
      Weather_WeatherManager__WaitAndApplySkybox_d__51___ctor(unaff_RBP,0,(MethodInfo *)0x0);
      if (unaff_RBP == (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)0x0) goto label_0407206a;
      (unaff_RBP->fields).__4__this = (Weather_WeatherManager_o *)__this_11;
      il2cpp_runtime_helper_022b4080(&(unaff_RBP->fields).__4__this,__this_11);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this_11,(System_Collections_IEnumerator_o *)unaff_RBP,
                 (MethodInfo *)0x0);
      break;
    case 6:
      if (((Il2CppRGCTXData *)(__this_11 + 9))->klass == (Il2CppClass *)0x0) goto label_04071fce;
      pSVar11 = *(Settings_StringSetting_o **)&(((Il2CppRGCTXData *)(__this_11 + 9))->klass->_1).this_arg.bits
      ;
      if (pSVar11 == (Settings_StringSetting_o *)0x0) goto label_040720e0;
      if (((Il2CppRGCTXData *)(__this_11 + 10))->klass == (Il2CppClass *)0x0) goto label_0407211d;
      pMVar19 = *(MethodInfo **)&(((Il2CppRGCTXData *)(__this_11 + 10))->klass->_1).this_arg.bits;
      if (pMVar19 == (MethodInfo *)0x0) goto label_040720bd;
      unaff_RBP = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)
                  Weather_WeatherManager__GetBlendedSkybox
                            (__this_12,(pSVar11->fields)._value,(System_String_o *)pMVar19->name,pMVar19);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar18 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar18 != '\0') {
        if (((Il2CppRGCTXData *)(__this_11 + 9))->klass == (Il2CppClass *)0x0) goto label_0407209f;
        pIVar13 = (((Il2CppRGCTXData *)(__this_11 + 9))->klass->_1).element_class;
        if (pIVar13 == (Il2CppClass *)0x0) goto label_0407206f;
        pUVar14 = (Utility_Color255_o *)(pIVar13->_1).namespaze;
        if (pUVar14 == (Utility_Color255_o *)0x0) goto label_04072042;
        UVar30 = Utility_Color255__ToColor(pUVar14,(MethodInfo *)0x0);
        if (unaff_RBP == (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)0x0) goto label_04072029;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)unaff_RBP,"_Tint",UVar30,(MethodInfo *)0x0);
      }
      break;
    case 7:
      if (((Il2CppRGCTXData *)(__this_11 + 8))->method == (MethodInfo *)0x0) goto label_0407205b;
      unaff_RBP = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)
                  System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                             ((Il2CppRGCTXData *)(__this_11 + 8))->method,7,MethodInfo_BaseWeatherEffect_get_Item);
      if (((Il2CppRGCTXData *)(__this_11 + 9))->klass == (Il2CppClass *)0x0) goto label_0407202e;
      pSVar8 = (((Il2CppRGCTXData *)(__this_11 + 9))->klass->_1).typeMetadataHandle;
      if (pSVar8 == (Settings_ColorSetting_o *)0x0) goto label_04072008;
      pUVar14 = (pSVar8->fields)._value;
      if (pUVar14 == (Utility_Color255_o *)0x0) goto label_04071fef;
      UVar30 = Utility_Color255__ToColor(pUVar14,(MethodInfo *)0x0);
      uVar28 = UVar30.fields._8_8_;
      fVar2 = UVar30.fields.r;
      if (unaff_RBP == (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)0x0) goto label_040720f7;
      bVar4 = (TypeInfo_FlashlightWeatherEffect->_2).naturalAligment;
      if ((unaff_RBP->klass->_2).naturalAligment < bVar4) goto label_04072101;
      if ((unaff_RBP->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_FlashlightWeatherEffect) goto label_04072101;
      pWVar12 = unaff_RBP->klass;
      bVar4 = (TypeInfo_FlashlightWeatherEffect->_2).naturalAligment;
      if ((pWVar12->_2).naturalAligment < bVar4) goto label_040720e5;
      if ((pWVar12->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_FlashlightWeatherEffect) goto label_040720e5;
      (*pWVar12[1]._2.unity_user_data)(fVar2,unaff_RBP);
      if (((Il2CppRGCTXData *)(__this_11 + 9))->klass == (Il2CppClass *)0x0) goto label_04072127;
      pSVar8 = (((Il2CppRGCTXData *)(__this_11 + 9))->klass->_1).typeMetadataHandle;
      if (pSVar8 == (Settings_ColorSetting_o *)0x0) goto label_040720c2;
      pUVar14 = (pSVar8->fields)._value;
      if (pUVar14 == (Utility_Color255_o *)0x0) goto label_04072086;
      if (((pUVar14->fields).A < 1) ||
         (UVar30 = Utility_Color255__ToColor(pUVar14,(MethodInfo *)0x0), fVar2 = UVar30.fields.a + -1.0,
         fVar2 * fVar2 +
         UVar30.fields.b * UVar30.fields.b +
         UVar30.fields.g * UVar30.fields.g + UVar30.fields.r * UVar30.fields.r < 9.9999994e-11)) {
        if (((Il2CppRGCTXData *)(__this_11 + 8))->method == (MethodInfo *)0x0) goto label_04072051;
        pIVar22 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                             ((Il2CppRGCTXData *)(__this_11 + 8))->method,7,MethodInfo_BaseWeatherEffect_get_Item);
        if (pIVar22 == (Il2CppObject *)0x0) goto label_04072033;
        (*pIVar22->klass->vtable[6].methodPtr)(pIVar22,0,pIVar22->klass->vtable[6].method);
      }
      else {
        if (((Il2CppRGCTXData *)(__this_11 + 8))->method == (MethodInfo *)0x0) goto label_04071fd3;
        pUVar20 = (UnityEngine_Component_o *)
                  System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                             ((Il2CppRGCTXData *)(__this_11 + 8))->method,7,MethodInfo_BaseWeatherEffect_get_Item);
        if (pUVar20 == (UnityEngine_Component_o *)0x0) goto label_040720f2;
        pUVar21 = UnityEngine_Component__get_gameObject(pUVar20,(MethodInfo *)0x0);
        if (pUVar21 == (UnityEngine_GameObject_o *)0x0) goto label_04072122;
        bVar18 = UnityEngine_GameObject__get_activeSelf(pUVar21,(MethodInfo *)0x0);
        if ((char)bVar18 == '\0') {
          if (((Il2CppRGCTXData *)(__this_11 + 8))->method == (MethodInfo *)0x0) goto label_040720c7;
          pIVar22 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                               ((Il2CppRGCTXData *)(__this_11 + 8))->method,7,MethodInfo_BaseWeatherEffect_get_Item);
          if (pIVar22 == (Il2CppObject *)0x0) goto label_040720a4;
          (*pIVar22->klass->vtable[7].methodPtr)(pIVar22,pIVar22->klass->vtable[7].method);
        }
      }
      break;
    case 8:
      if (((Il2CppRGCTXData *)(__this_11 + 9))->klass == (Il2CppClass *)0x0) goto label_04071ffe;
      pSVar10 = (((Il2CppRGCTXData *)(__this_11 + 9))->klass->_1).interopData;
      if (pSVar10 == (Settings_FloatSetting_o *)0x0) goto label_04071fdd;
      if ((pSVar10->fields)._value <= 0.0) {
        UnityEngine_RenderSettings__set_fog(0,(MethodInfo *)0x0);
      }
      else {
        UnityEngine_RenderSettings__set_fog(1,(MethodInfo *)0x0);
        UnityEngine_RenderSettings__set_fogMode(2,(MethodInfo *)0x0);
        if (((Il2CppRGCTXData *)(__this_11 + 9))->klass == (Il2CppClass *)0x0) goto label_04072113;
        pSVar10 = (((Il2CppRGCTXData *)(__this_11 + 9))->klass->_1).interopData;
        if (pSVar10 == (Settings_FloatSetting_o *)0x0) goto label_040720cc;
        UnityEngine_RenderSettings__set_fogDensity((pSVar10->fields)._value * 0.02,(MethodInfo *)0x0);
      }
      break;
    case 9:
      if (((Il2CppRGCTXData *)(__this_11 + 9))->klass == (Il2CppClass *)0x0) goto label_04072047;
      pIVar13 = (((Il2CppRGCTXData *)(__this_11 + 9))->klass->_1).klass;
      if (pIVar13 == (Il2CppClass *)0x0) goto label_04072015;
      pUVar14 = (Utility_Color255_o *)(pIVar13->_1).namespaze;
      if (pUVar14 == (Utility_Color255_o *)0x0) goto label_04071ff9;
      UVar30 = Utility_Color255__ToColor(pUVar14,(MethodInfo *)0x0);
      UnityEngine_RenderSettings__set_fogColor(UVar30,(MethodInfo *)0x0);
      break;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      if ((Settings_WeatherSet_o *)((Il2CppRGCTXData *)(__this_11 + 9))->method ==
          (Settings_WeatherSet_o *)0x0) goto label_040720d1;
      unaff_R13 = (((Settings_WeatherSet_o *)((Il2CppRGCTXData *)(__this_11 + 9))->method)->fields).Settings;
      auStack_98 = (undefined1  [8])TypeInfo_WeatherEffect;
      pIStack_90 = (Il2CppType *)0xffffffffffffffff;
      iStack_88 = key;
      key_00 = System_Enum__ToString((System_Enum_o *)auStack_98,(MethodInfo *)0x0);
      if (unaff_R13 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_040720b3;
      pIVar22 = System_Collections_Specialized_OrderedDictionary__get_Item
                          (unaff_R13,(Il2CppObject *)key_00,(MethodInfo *)0x0);
      if (pIVar22 == (Il2CppObject *)0x0) goto label_04072090;
      bVar4 = (TypeInfo_FloatSetting->_2).naturalAligment;
      if (((pIVar22->klass->_2).naturalAligment < bVar4) ||
         ((pIVar22->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_FloatSetting)) {
label_04071fc1:
        il2cpp_runtime_helper_022b2fd0(pIVar22);
        goto label_04071fc9;
      }
      if (((Il2CppRGCTXData *)(__this_11 + 8))->method == (MethodInfo *)0x0) goto label_04072038;
      in_stack_ffffffffffffff50 = *(float *)((long)&pIVar22[1].klass + 4);
      pIVar22 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                           ((Il2CppRGCTXData *)(__this_11 + 8))->method,key,MethodInfo_BaseWeatherEffect_get_Item);
      if (pIVar22 == (Il2CppObject *)0x0) goto label_0407201a;
      (*pIVar22->klass->vtable[10].methodPtr)
                (in_stack_ffffffffffffff50,pIVar22,pIVar22->klass->vtable[10].method);
      pMVar19 = ((Il2CppRGCTXData *)(__this_11 + 8))->method;
      if (in_stack_ffffffffffffff50 <= 0.0) {
        if (pMVar19 == (MethodInfo *)0x0) goto label_04072095;
        pIVar22 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar19,key,MethodInfo_BaseWeatherEffect_get_Item
                            );
        if (pIVar22 == (Il2CppObject *)0x0) goto label_04072060;
        (*pIVar22->klass->vtable[6].methodPtr)(pIVar22,1,pIVar22->klass->vtable[6].method);
      }
      else {
        if (pMVar19 == (MethodInfo *)0x0) goto label_04072003;
        pUVar20 = (UnityEngine_Component_o *)
                  System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar19,key,MethodInfo_BaseWeatherEffect_get_Item
                            );
        if (pUVar20 == (UnityEngine_Component_o *)0x0) goto label_04071fd8;
        pUVar21 = UnityEngine_Component__get_gameObject(pUVar20,(MethodInfo *)0x0);
        if (pUVar21 == (UnityEngine_GameObject_o *)0x0) goto label_04072118;
        bVar18 = UnityEngine_GameObject__get_activeSelf(pUVar21,(MethodInfo *)0x0);
        if ((char)bVar18 == '\0') {
          if (((Il2CppRGCTXData *)(__this_11 + 8))->method == (MethodInfo *)0x0) goto label_040720ed;
          pIVar22 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                               ((Il2CppRGCTXData *)(__this_11 + 8))->method,key,MethodInfo_BaseWeatherEffect_get_Item);
          if (pIVar22 == (Il2CppObject *)0x0) goto label_040720b8;
          (*pIVar22->klass->vtable[8].methodPtr)(pIVar22,pIVar22->klass->vtable[8].method);
          if (((Il2CppRGCTXData *)(__this_11 + 8))->method == (MethodInfo *)0x0) goto label_04072081;
          pIVar22 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                               ((Il2CppRGCTXData *)(__this_11 + 8))->method,key,MethodInfo_BaseWeatherEffect_get_Item);
          if (pIVar22 == (Il2CppObject *)0x0) goto label_04072056;
          (*pIVar22->klass->vtable[7].methodPtr)(pIVar22,pIVar22->klass->vtable[7].method);
        }
      }
      break;
    case 0xe:
      if (((Il2CppRGCTXData *)(__this_11 + 9))->klass == (Il2CppClass *)0x0) goto label_040720a9;
      pSVar15 = (Settings_Vector3Setting_o *)(((Il2CppRGCTXData *)(__this_11 + 9))->klass->_1).nestedTypes;
      if (pSVar15 == (Settings_Vector3Setting_o *)0x0) goto label_0407208b;
      fVar2 = (pSVar15->fields)._value.fields.x;
      fVar3 = (pSVar15->fields)._value.fields.y;
      uVar28 = 0;
      in_stack_ffffffffffffff64 = (pSVar15->fields)._value.fields.z;
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
        iVar6 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar6 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar6 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar26 = 0;
      uVar27 = 0;
      fVar25 = in_stack_ffffffffffffff64 * in_stack_ffffffffffffff64 + fVar3 * fVar3 + fVar2 * fVar2;
      if (fVar25 < 0.0) {
        fVar25 = sqrtf(fVar25);
        uVar26 = extraout_XMM0_Dc;
        uVar27 = extraout_XMM0_Dd;
      }
      else {
        fVar25 = SQRT(fVar25);
      }
      if (1e-05 < fVar25) {
        in_stack_ffffffffffffff64 = in_stack_ffffffffffffff64 / fVar25;
        auVar17._4_4_ = fVar3;
        auVar17._0_4_ = fVar2;
        auVar17._8_8_ = uVar28;
        auVar29._4_4_ = fVar25;
        auVar29._0_4_ = fVar25;
        auVar29._8_4_ = uVar26;
        auVar29._12_4_ = uVar27;
        auVar29 = divps(auVar17,auVar29);
        in_stack_ffffffffffffff50 = auVar29._0_4_;
        in_stack_ffffffffffffff54 = auVar29._4_4_;
        in_stack_ffffffffffffff58 = auVar29._8_8_;
        iVar6 = *(int *)(TypeInfo_WindWeatherEffect + 0xe4);
      }
      else {
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        uVar28 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        in_stack_ffffffffffffff50 = (float)uVar28;
        in_stack_ffffffffffffff54 = (undefined4)((ulong)uVar28 >> 0x20);
        in_stack_ffffffffffffff58 = 0;
        in_stack_ffffffffffffff64 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        iVar6 = *(int *)(TypeInfo_WindWeatherEffect + 0xe4);
      }
      if (iVar6 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar9 = *(long *)(TypeInfo_WindWeatherEffect + 0xb8);
      *(ulong *)(lVar9 + 4) = CONCAT44(in_stack_ffffffffffffff54,in_stack_ffffffffffffff50);
      *(float *)(lVar9 + 0xc) = in_stack_ffffffffffffff64;
      break;
    case 0xf:
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (((Il2CppRGCTXData *)(__this_11 + 9))->klass == (Il2CppClass *)0x0) goto label_0407209a;
      pSVar10 = (Settings_FloatSetting_o *)
                (((Il2CppRGCTXData *)(__this_11 + 9))->klass->_1).implementedInterfaces;
      if (pSVar10 == (Settings_FloatSetting_o *)0x0) goto label_0407207c;
      if (**(long **)(TypeInfo_WeatherManager + 0xb8) == 0) goto label_0407204c;
      *(float *)(**(long **)(TypeInfo_WeatherManager + 0xb8) + 0x94) = (pSVar10->fields)._value;
      break;
    case 0x10:
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (((Il2CppRGCTXData *)(__this_11 + 9))->klass == (Il2CppClass *)0x0) goto label_04071fe2;
      pSVar10 = (Settings_FloatSetting_o *)(((Il2CppRGCTXData *)(__this_11 + 9))->klass->_1).interfaceOffsets;
      if (pSVar10 == (Settings_FloatSetting_o *)0x0) goto label_04072109;
      if (**(long **)(TypeInfo_WeatherManager + 0xb8) == 0) goto label_040720fc;
      *(float *)(**(long **)(TypeInfo_WeatherManager + 0xb8) + 0x98) = (pSVar10->fields)._value;
      break;
    case 0x11:
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (((Il2CppRGCTXData *)(__this_11 + 9))->klass == (Il2CppClass *)0x0) goto label_04072065;
      pSVar10 = ((Il2CppRGCTXData *)(__this_11 + 9))->klass->static_fields;
      if (pSVar10 == (Settings_FloatSetting_o *)0x0) goto label_0407203d;
      if (**(long **)(TypeInfo_WeatherManager + 0xb8) == 0) goto label_0407201f;
      *(float *)(**(long **)(TypeInfo_WeatherManager + 0xb8) + 0x9c) = (pSVar10->fields)._value;
    }
  }
  goto switchD_0407115d_default;
}


// Weather.WeatherManager$$CreateScheduleRunners
// il2cpp: void Weather_WeatherManager__CreateScheduleRunners (Weather_WeatherManager_o* __this, System_String_o* schedule, const MethodInfo* method);
// 0x40724b0

void Weather_WeatherManager__CreateScheduleRunners
               (Weather_WeatherManager_o *__this,System_String_o *schedule,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_WeatherEvent__o *pSVar3;
  System_Collections_Generic_List_WeatherScheduleRunner__o *__this_00;
  Weather_WeatherScheduleRunner_array *pWVar4;
  System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *__this_01;
  Weather_WeatherEvent_array *pWVar5;
  long lVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar7;
  Weather_WeatherScheduleRunner_o *__this_06;
  Weather_WeatherSchedule_o *pWVar8;
  long *plVar9;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  Il2CppType *pIVar12;
  Weather_WeatherEvent_o *pWVar13;
  Weather_WeatherEvent_o *item;
  undefined1 local_48 [16];
  Weather_WeatherEvent_o *local_38;
  
  if (g_data_057ac30b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherEvent_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Weather_WeatherEvent_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherScheduleRunner);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSchedule);
    g_data_057ac30b = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar12 = (Il2CppType *)0x0;
  pWVar13 = (Weather_WeatherEvent_o *)0x0;
  __this_06 = (Weather_WeatherScheduleRunner_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherScheduleRunner);
  Weather_WeatherScheduleRunner___ctor(__this_06,__this,(MethodInfo *)0x0);
  pWVar8 = (Weather_WeatherSchedule_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSchedule);
  Weather_WeatherSchedule___ctor_3f75bd0(pWVar8,schedule,(MethodInfo *)0x0);
  if ((pWVar8 != (Weather_WeatherSchedule_o *)0x0) &&
     (pSVar3 = (pWVar8->fields).Events, pSVar3 != (System_Collections_Generic_List_WeatherEvent__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T_Enumerator_Weather_WeatherEvent_GetEnumerator);
    pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar12 = (Il2CppType *)local_48._8_8_;
    item = local_38;
    while( true ) {
      __this_02.fields._8_8_ = pIVar12;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
      __this_02.fields._current = (Il2CppObject *)item;
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      if ((char)bVar7 == '\0') {
        __this_03.fields._8_8_ = pIVar12;
        __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
        __this_03.fields._current = (Il2CppObject *)item;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        return;
      }
      pWVar13 = item;
      if (item == (Weather_WeatherEvent_o *)0x0) break;
      if ((item->fields).Action == 0) {
        __this_06 = (Weather_WeatherScheduleRunner_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherScheduleRunner);
        Weather_WeatherScheduleRunner___ctor(__this_06,__this,(MethodInfo *)0x0);
        lVar6 = MethodInfo_Void_Add;
        __this_00 = (__this->fields)._scheduleRunners;
        if (__this_00 == (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) goto label_0407275c;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pWVar4 = (__this_00->fields)._items;
        if (pWVar4 == (Weather_WeatherScheduleRunner_array *)0x0) goto label_04072761;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pWVar4->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pWVar4->m_Items[(int)uVar2] = __this_06;
          il2cpp_runtime_helper_022b4080(pWVar4->m_Items + (int)uVar2,__this_06);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_06,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        __this_01 = (__this->fields)._currentScheduleWait;
        if (__this_01 != (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0) {
          System_Collections_Generic_Dictionary_object__float___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                     (Il2CppObject *)__this_06,0.0,MethodInfo_Void_Add);
          goto label_040726cc;
        }
        goto label_04072766;
      }
label_040726cc:
      lVar6 = MethodInfo_Void_Add;
      if (__this_06 == (Weather_WeatherScheduleRunner_o *)0x0) goto label_0407274d;
      pWVar8 = (__this_06->fields).Schedule;
      if (pWVar8 == (Weather_WeatherSchedule_o *)0x0) goto label_04072752;
      pSVar3 = (pWVar8->fields).Events;
      if (pSVar3 == (System_Collections_Generic_List_WeatherEvent__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        break;
      }
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pWVar5 = (pSVar3->fields)._items;
      if (pWVar5 == (Weather_WeatherEvent_array *)0x0) goto label_04072757;
      uVar2 = (pSVar3->fields)._size;
      if (uVar2 < (uint)pWVar5->max_length) {
        (pSVar3->fields)._size = uVar2 + 1;
        pWVar5->m_Items[(int)uVar2] = item;
        il2cpp_runtime_helper_022b4080(pWVar5->m_Items + (int)uVar2,item);
        item = pWVar13;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        item = pWVar13;
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_0407274d:
    il2cpp_runtime_helper_022b2c90();
label_04072752:
    il2cpp_runtime_helper_022b2c90();
label_04072757:
    il2cpp_runtime_helper_022b2c90();
label_0407275c:
    il2cpp_runtime_helper_022b2c90();
label_04072761:
    il2cpp_runtime_helper_022b2c90();
label_04072766:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar6 = *plVar9;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar12;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
    __this_04.fields._current = (Il2CppObject *)pWVar13;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar6 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar6);
  }
  __this_05.fields._8_8_ = pIVar12;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
  __this_05.fields._current = (Il2CppObject *)pWVar13;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar10._0_8_);
}


// Weather.WeatherManager$$CreateEffects
// il2cpp: void Weather_WeatherManager__CreateEffects (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x40708f0

void Weather_WeatherManager__CreateEffects(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *pSVar1;
  System_String_o *path;
  long lVar2;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *pUVar4;
  Il2CppObject *pIVar5;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_04;
  long *plVar6;
  MethodInfo *method_00;
  undefined1 auVar7 [12];
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar8;
  Il2CppType *pIVar9;
  Il2CppObject *pIVar10;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (g_data_057ac30c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_Weather_Weather);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseWeatherEffect_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RainWeatherEffect_AddComponent_RainWeatherEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SnowWeatherEffect_AddComponent_SnowWeatherEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ThunderWeatherEffect_AddComponent_ThunderWeatherEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_WindWeatherEffect_AddComponent_WindWeatherEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    il2cpp_runtime_helper_023445d0(&"Prefabs/ThunderEffect");
    il2cpp_runtime_helper_023445d0(&"Prefabs/SnowEffect");
    il2cpp_runtime_helper_023445d0(&"Prefabs/RainEffect");
    il2cpp_runtime_helper_023445d0(&"Prefabs/WindEffect");
    g_data_057ac30c = '\x01';
  }
  pSVar8 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
  pIVar9 = (Il2CppType *)0x0;
  pIVar10 = (Il2CppObject *)0x0;
  pSVar1 = (__this->fields)._effects;
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar4 = (UnityEngine_GameObject_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset_object_(path,"Prefabs/RainEffect",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
     (pIVar5 = UnityEngine_GameObject__AddComponent_object_(pUVar4,MethodInfo_RainWeatherEffect_AddComponent_RainWeatherEffect),
     pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)) {
    System_Collections_Generic_Dictionary_Int32Enum__object___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,10,pIVar5,MethodInfo_Void_Add);
    pSVar1 = (__this->fields)._effects;
    pUVar4 = (UnityEngine_GameObject_o *)
             ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58),"Prefabs/SnowEffect",0,
                        MethodInfo_GameObject_InstantiateAsset_GameObject);
    if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
       (pIVar5 = UnityEngine_GameObject__AddComponent_object_(pUVar4,MethodInfo_SnowWeatherEffect_AddComponent_SnowWeatherEffect),
       pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)) {
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,0xc,pIVar5,MethodInfo_Void_Add);
      pSVar1 = (__this->fields)._effects;
      pUVar4 = (UnityEngine_GameObject_o *)
               ApplicationManagers_ResourceManager__InstantiateAsset_object_
                         (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58),"Prefabs/WindEffect",0,
                          MethodInfo_GameObject_InstantiateAsset_GameObject);
      if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
         (pIVar5 = UnityEngine_GameObject__AddComponent_object_(pUVar4,MethodInfo_WindWeatherEffect_AddComponent_WindWeatherEffect),
         pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)) {
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,0xd,pIVar5,MethodInfo_Void_Add);
        pSVar1 = (__this->fields)._effects;
        pUVar4 = (UnityEngine_GameObject_o *)
                 ApplicationManagers_ResourceManager__InstantiateAsset_object_
                           (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58),"Prefabs/ThunderEffect",0,
                            MethodInfo_GameObject_InstantiateAsset_GameObject);
        if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
           (pIVar5 = UnityEngine_GameObject__AddComponent_object_(pUVar4,MethodInfo_ThunderWeatherEffect_AddComponent_ThunderWeatherEffect),
           pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)) {
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,0xb,pIVar5,MethodInfo_Void_Add);
          pSVar1 = (__this->fields)._effects;
          if ((pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) &&
             (__this_04 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Values
                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                                     MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_Weather_Weather),
             __this_04 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
            System_Collections_Generic_Dictionary_ValueCollection_Int32Enum__object___GetEnumerator
                      ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                       local_48,__this_04,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
            pSVar8 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
                     local_48._0_8_;
            pIVar9 = (Il2CppType *)local_48._8_8_;
            pIVar10 = local_38;
            while (__this_00.fields._8_8_ = pIVar9,
                  __this_00.fields._dictionary =
                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
                  __this_00.fields._currentValue = pIVar10,
                  bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___MoveNext
                                    (__this_00,(MethodInfo_3249910 *)&stack0xffffffffffffff98),
                  (char)bVar3 != '\0') {
              lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
              if (lVar2 == 0) {
label_04070cca:
                il2cpp_runtime_helper_022b2c90();
label_04070ccf:
                il2cpp_runtime_helper_022b2c90();
                goto label_04070cd4;
              }
              lVar2 = *(long *)(lVar2 + 0x28);
              if (lVar2 == 0) goto label_04070ccf;
              if (pIVar10 == (Il2CppObject *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_04070cca;
              }
              pIVar5 = pIVar10;
              (*pIVar10->klass->vtable[0xb].methodPtr)
                        (pIVar10,*(undefined8 *)(lVar2 + 0x10),pIVar10->klass->vtable[0xb].method);
              (*pIVar10->klass->vtable[8].methodPtr)(pIVar10,pIVar10->klass->vtable[8].method);
              (*pIVar10->klass->vtable[6].methodPtr)(pIVar10,0,pIVar10->klass->vtable[6].method);
              pIVar10 = pIVar5;
            }
            __this_01.fields._8_8_ = pIVar9;
            __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
            __this_01.fields._currentValue = pIVar10;
            method_00 = MethodInfo_Void_Dispose;
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___Dispose
                      (__this_01,(MethodInfo_3249900 *)&stack0xffffffffffffff98);
            goto label_04070cae;
          }
        }
      }
    }
  }
label_04070cd4:
  auVar7 = il2cpp_runtime_helper_022b2c90();
  if (auVar7._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar2 = *plVar6;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar9;
    __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
    __this_02.fields._currentValue = pIVar10;
    method_00 = MethodInfo_Void_Dispose;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___Dispose
              (__this_02,(MethodInfo_3249900 *)&stack0xffffffffffffff98);
    if (lVar2 == 0) {
label_04070cae:
      Weather_WeatherManager__CreateFlashlight(__this,method_00);
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_03.fields._8_8_ = pIVar9;
  __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
  __this_03.fields._currentValue = pIVar10;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___Dispose
            (__this_03,(MethodInfo_3249900 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar7._0_8_);
}


// Weather.WeatherManager$$CreateFlashlight
// il2cpp: void Weather_WeatherManager__CreateFlashlight (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x4072bf0

void Weather_WeatherManager__CreateFlashlight(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  void *pvVar3;
  long lVar4;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *__this_01;
  System_Collections_Generic_Dictionary_int__float__o *__this_02;
  Settings_WeatherSet_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *pSVar8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_06;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_07;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_Collections_Generic_List_Enumerator_object__o __this_10;
  System_Collections_Generic_List_Enumerator_object__o __this_11;
  System_Collections_Generic_List_Enumerator_object__o __this_12;
  Il2CppObject *key;
  char cVar9;
  bool_conflict bVar10;
  int iVar11;
  int32_t iVar12;
  UnityEngine_Material_o *pUVar13;
  ulong uVar14;
  Il2CppClass *pIVar15;
  UnityEngine_Material_o *pUVar16;
  UnityEngine_Texture_o *pUVar17;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar18;
  System_Collections_Generic_Dictionary_object__object__o *pSVar19;
  long *plVar20;
  Weather_WeatherManager_o *pWVar21;
  Il2CppObject *pIVar22;
  System_Collections_Generic_List_object__o *pSVar23;
  MethodInfo_255A020 **method_00;
  Il2CppObject *key_00;
  Il2CppClass **ppIVar24;
  UnityEngine_Object_o *unaff_RBX;
  Il2CppClass **unaff_RBP;
  long lVar25;
  MethodInfo *pMVar26;
  System_String_o **ppSVar27;
  long lVar28;
  Weather_WeatherManager_o *__this_13;
  MethodInfo_30D43D0 **unaff_R12;
  ulong uVar29;
  float fVar30;
  float fVar31;
  UnityEngine_Color_o value;
  UnityEngine_Color_o value_00;
  undefined1 auVar32 [12];
  _union_233249 _Var33;
  Il2CppType *pIVar34;
  Il2CppObject *key_01;
  _union_233249 _Stack_f8;
  Il2CppType *pIStack_f0;
  Il2CppObject *pIStack_e8;
  _union_233249 _Stack_d8;
  Il2CppType *pIStack_d0;
  Il2CppObject *pIStack_c8;
  UnityEngine_Material_o *pUStack_c0;
  Il2CppObject *pIStack_b8;
  UnityEngine_Material_o *pUStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  System_String_o *pSStack_98;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 in_stack_ffffffffffffff78;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 local_60 [16];
  Weather_WeatherScheduleRunner_o *local_50;
  
  if (g_data_057ac30d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseWeatherEffect_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlashlightWeatherEffect_AddComponent_FlashlightWeatherEf);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    il2cpp_runtime_helper_023445d0(&"Prefabs/FlashlightEffect");
    g_data_057ac30d = '\x01';
  }
  __this_01 = (__this->fields)._effects;
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_13 = *(Weather_WeatherManager_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo_255A020 **)MethodInfo_GameObject_InstantiateAsset_GameObject;
  pWVar21 = (Weather_WeatherManager_o *)
            ApplicationManagers_ResourceManager__InstantiateAsset_object_
                      ((System_String_o *)__this_13,"Prefabs/FlashlightEffect",0,(MethodInfo_25BC8B0 *)MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (pWVar21 != (Weather_WeatherManager_o *)0x0) {
    method_00 = &MethodInfo_FlashlightWeatherEffect_AddComponent_FlashlightWeatherEf;
    pIVar22 = UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pWVar21,MethodInfo_FlashlightWeatherEffect_AddComponent_FlashlightWeatherEf);
    __this_13 = pWVar21;
    if (__this_01 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
      method_00 = (MethodInfo_255A020 **)MethodInfo_Void_Add;
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,7,pIVar22,
                 (MethodInfo_30D4480 *)MethodInfo_Void_Add);
      __this_13 = (Weather_WeatherManager_o *)(__this->fields)._effects;
      if ((__this_13 != (Weather_WeatherManager_o *)0x0) &&
         (pIVar22 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_13,7,
                               MethodInfo_BaseWeatherEffect_get_Item), pIVar22 != (Il2CppObject *)0x0)) {
        method_00 = (MethodInfo_255A020 **)pIVar22->klass;
        (*(((System_Collections_Generic_Dictionary_TKey__TValue__VTable *)((Il2CppClass *)method_00)->vtable)
          ->_11_unknown).methodPtr)
                  (pIVar22,0,
                   (((System_Collections_Generic_Dictionary_TKey__TValue__VTable *)
                    ((Il2CppClass *)method_00)->vtable)->_11_unknown).method);
        __this_13 = (Weather_WeatherManager_o *)(__this->fields)._effects;
        if ((__this_13 != (Weather_WeatherManager_o *)0x0) &&
           (pWVar21 = (Weather_WeatherManager_o *)
                      System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_13,7,
                                 MethodInfo_BaseWeatherEffect_get_Item), pWVar21 != (Weather_WeatherManager_o *)0x0)) {
          method_00 = (MethodInfo_255A020 **)pWVar21->klass;
          lVar25 = 0;
          (*(((System_Collections_Generic_Dictionary_TKey__TValue__VTable *)((Il2CppClass *)method_00)->vtable
             )->_6_System_Collections_Generic_IDictionary_TKey_TValue__get_Keys).methodPtr)
                    (pWVar21,0,
                     (((System_Collections_Generic_Dictionary_TKey__TValue__VTable *)
                      ((Il2CppClass *)method_00)->vtable)->
                     _6_System_Collections_Generic_IDictionary_TKey_TValue__get_Keys).method);
          lVar28 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
          __this_13 = pWVar21;
          if ((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x28), lVar28 != 0)) {
            uVar29 = *(ulong *)(lVar28 + 0x10);
            if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (g_data_057ac302 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
              il2cpp_runtime_helper_023445d0(&MethodInfo_BaseWeatherEffect_get_Item);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
              il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
              g_data_057ac302 = '\x01';
              if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) goto label_0406fb49;
label_0406f9cf:
              lVar28 = *(long *)TypeInfo_WeatherManager->static_fields;
            }
            else {
              if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c != 0) goto label_0406f9cf;
label_0406fb49:
              il2cpp_runtime_helper_02337ed0();
              lVar28 = *(long *)TypeInfo_WeatherManager->static_fields;
            }
            pIVar15 = TypeInfo_WeatherManager;
            if (lVar28 != 0) {
              pIVar15 = (Il2CppClass *)0x0;
              if (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar28 + 0x40) !=
                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                lVar25 = 7;
                bVar10 = System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey
                                   (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar28 + 0x40)
                                    ,7,MethodInfo_Boolean_ContainsKey);
                if ((char)bVar10 == '\0') {
                  return;
                }
                if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar15 = TypeInfo_WeatherManager;
                if (*(long *)TypeInfo_WeatherManager->static_fields != 0) {
                  __this_00 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                               (*(long *)TypeInfo_WeatherManager->static_fields + 0x40);
                  pIVar15 = (Il2CppClass *)0x0;
                  if (__this_00 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    unaff_R12 = &MethodInfo_BaseWeatherEffect_get_Item;
                    unaff_RBX = (UnityEngine_Object_o *)
                                System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                                          (__this_00,7,MethodInfo_BaseWeatherEffect_get_Item);
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    lVar25 = 0;
                    bVar10 = UnityEngine_Object__op_Inequality
                                       (unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    if ((char)bVar10 == '\0') {
                      return;
                    }
                    if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pIVar15 = TypeInfo_WeatherManager;
                    if ((*(long *)TypeInfo_WeatherManager->static_fields != 0) &&
                       (pIVar15 = *(Il2CppClass **)(*(long *)TypeInfo_WeatherManager->static_fields + 0x40),
                       pIVar15 != (Il2CppClass *)0x0)) {
                      lVar25 = 7;
                      pIVar22 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar15,7,
                                           MethodInfo_BaseWeatherEffect_get_Item);
                      if (pIVar22 != (Il2CppObject *)0x0) {
                        pIVar15 = pIVar22->klass;
                        vtableDispatch = pIVar15->vtable[9].methodPtr;
                        (*vtableDispatch)
                                  (pIVar22,uVar29,pIVar15->vtable[9].method,pIVar15,vtableDispatch);
                        return;
                      }
                    }
                  }
                }
              }
            }
            il2cpp_runtime_helper_022b2c90();
            local_60._0_8_ = method_00;
            local_60._8_8_ = unaff_RBX;
            local_50 = (Weather_WeatherScheduleRunner_o *)unaff_R12;
            if (g_data_057ac303 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
              il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
              il2cpp_runtime_helper_023445d0(&"2");
              il2cpp_runtime_helper_023445d0(&"_");
              il2cpp_runtime_helper_023445d0(&"Tex");
              il2cpp_runtime_helper_023445d0(&"_Tint");
              g_data_057ac303 = '\x01';
            }
            pUVar13 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
            UnityEngine_Material___ctor(pUVar13,(UnityEngine_Shader_o *)pIVar15,(MethodInfo *)0x0);
            if (lVar25 != 0) {
              iVar11 = (int)*(ulong *)(lVar25 + 0x18);
              if (pUVar13 == (UnityEngine_Material_o *)0x0) {
label_0406fde7:
                if (0 < iVar11) {
                  pIVar15 = (Il2CppClass *)
                            System_String__Concat_3af7150
                                      ("_",*(System_String_o **)(lVar25 + 0x20),"Tex",
                                       (MethodInfo *)0x0);
                  unaff_RBP = &TypeInfo_WeatherManager;
                  if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar19 = *(System_Collections_Generic_Dictionary_object__object__o **)
                             ((long)TypeInfo_WeatherManager->static_fields + 8);
                  if ((pSVar19 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
                     (pUVar16 = (UnityEngine_Material_o *)
                                System_Collections_Generic_Dictionary_object__object___get_Item
                                          (pSVar19,key_00,MethodInfo_Material_get_Item),
                     pUVar16 != (UnityEngine_Material_o *)0x0)) goto label_0406fe58;
                }
              }
              else {
                if (0 < iVar11) {
                  uVar14 = *(ulong *)(lVar25 + 0x18) & 0xffffffff;
                  uVar29 = 0;
                  do {
                    unaff_R12 = (MethodInfo_30D43D0 **)&TypeInfo_WeatherManager;
                    if (uVar14 <= uVar29) {
                      iVar11 = il2cpp_runtime_helper_022b2ca0();
                      goto label_0406fde7;
                    }
                    pIVar15 = (Il2CppClass *)
                              System_String__Concat_3af7150
                                        ("_",*(System_String_o **)(lVar25 + 0x20 + uVar29 * 8),
                                         "Tex",(MethodInfo *)0x0);
                    if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar19 = *(System_Collections_Generic_Dictionary_object__object__o **)
                               ((long)TypeInfo_WeatherManager->static_fields + 8);
                    if ((pSVar19 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
                       (pUVar16 = (UnityEngine_Material_o *)
                                  System_Collections_Generic_Dictionary_object__object___get_Item
                                            (pSVar19,key_00,MethodInfo_Material_get_Item),
                       pUVar16 == (UnityEngine_Material_o *)0x0)) goto label_0406fe53;
                    pUVar17 = UnityEngine_Material__GetTexture
                                        (pUVar16,(System_String_o *)pIVar15,(MethodInfo *)0x0);
                    UnityEngine_Material__SetTexture
                              (pUVar13,(System_String_o *)pIVar15,pUVar17,(MethodInfo *)0x0);
                    unaff_RBP = (Il2CppClass **)
                                System_String__Concat_3ae5ba0
                                          ((System_String_o *)pIVar15,"2",(MethodInfo *)0x0);
                    pSVar19 = *(System_Collections_Generic_Dictionary_object__object__o **)
                               ((long)TypeInfo_WeatherManager->static_fields + 8);
                    if ((pSVar19 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
                       (pUVar16 = (UnityEngine_Material_o *)
                                  System_Collections_Generic_Dictionary_object__object___get_Item
                                            (pSVar19,(Il2CppObject *)local_60._0_8_,MethodInfo_Material_get_Item),
                       pUVar16 == (UnityEngine_Material_o *)0x0)) goto label_0406fe53;
                    pUVar17 = UnityEngine_Material__GetTexture
                                        (pUVar16,(System_String_o *)pIVar15,(MethodInfo *)0x0);
                    UnityEngine_Material__SetTexture
                              (pUVar13,(System_String_o *)unaff_RBP,pUVar17,(MethodInfo *)0x0);
                    uVar29 = uVar29 + 1;
                    uVar14 = (ulong)*(uint *)(lVar25 + 0x18);
                  } while ((long)uVar29 < (long)(int)*(uint *)(lVar25 + 0x18));
                }
                if (pUVar13 != (UnityEngine_Material_o *)0x0) {
                  value.fields.b = 0.5;
                  value.fields.a = 1.0;
                  value.fields.r = 0.5;
                  value.fields.g = 0.5;
                  UnityEngine_Material__SetColor(pUVar13,"_Tint",value,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  if (g_data_057ac304 == '\0') {
                    il2cpp_runtime_helper_023445d0(&"_Blend");
                    g_data_057ac304 = '\x01';
                  }
                  UnityEngine_Material__SetFloat(pUVar13,"_Blend",0.0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
label_0406fe53:
            pUVar16 = (UnityEngine_Material_o *)il2cpp_runtime_helper_022b2c90();
label_0406fe58:
            UnityEngine_Material__GetTexture(pUVar16,(System_String_o *)pIVar15,(MethodInfo *)0x0);
            fVar30 = (float)il2cpp_runtime_helper_022b2c90();
            ppIVar24 = (Il2CppClass **)pUVar16;
            if (g_data_057ac304 == '\0') {
              ppSVar27 = &"_Blend";
              il2cpp_runtime_helper_023445d0();
              g_data_057ac304 = '\x01';
              ppIVar24 = (Il2CppClass **)ppSVar27;
            }
            if (pUVar16 != (UnityEngine_Material_o *)0x0) {
              UnityEngine_Material__SetFloat(pUVar16,"_Blend",fVar30,(MethodInfo *)0x0);
              return;
            }
            il2cpp_runtime_helper_022b2c90();
            if (g_data_057ac305 == '\0') {
              pSStack_98 = (System_String_o *)0x406fee9;
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
              pSStack_98 = (System_String_o *)0x406fef5;
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
              pSStack_98 = (System_String_o *)0x406ff01;
              il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
              pSStack_98 = (System_String_o *)0x406ff0d;
              il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
              g_data_057ac305 = '\x01';
            }
            pvVar3 = ((UnityEngine_Material_o *)((long)ppIVar24 + 0x30))->monitor;
            if (pvVar3 != (void *)0x0) {
              *(int *)((long)pvVar3 + 0x1c) = *(int *)((long)pvVar3 + 0x1c) + 1;
              iVar11 = *(int *)((long)pvVar3 + 0x18);
              *(undefined4 *)((long)pvVar3 + 0x18) = 0;
              if (0 < iVar11) {
                pSStack_98 = (System_String_o *)0x406ff40;
                System_Array__Clear(*(System_Array_o **)((long)pvVar3 + 0x10),0,iVar11,(MethodInfo *)0x0);
              }
              ppIVar24 = &TypeInfo_WeatherManager;
              if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
                pSStack_98 = (System_String_o *)0x406ff58;
                il2cpp_runtime_helper_02337ed0();
              }
              lVar28 = MethodInfo_Void_Add;
              if (((*(long *)TypeInfo_WeatherManager->static_fields != 0) &&
                  (lVar4 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18), lVar4 != 0)) &&
                 (pSVar23 = *(System_Collections_Generic_List_object__o **)
                             (*(long *)TypeInfo_WeatherManager->static_fields + 0x38),
                 pSVar23 != (System_Collections_Generic_List_object__o *)0x0)) {
                pIVar22 = *(Il2CppObject **)(lVar4 + 0x20);
                piVar1 = &(pSVar23->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar5 = (pSVar23->fields)._items;
                if (pSVar5 != (System_Object_array *)0x0) {
                  uVar2 = (pSVar23->fields)._size;
                  if (uVar2 < (uint)pSVar5->max_length) {
                    (pSVar23->fields)._size = uVar2 + 1;
                    pSVar5->m_Items[(int)uVar2] = pIVar22;
                    il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2);
                    return;
                  }
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar23,pIVar22,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
                  return;
                }
              }
            }
            pSStack_98 = (System_String_o *)0x406ffe4;
            il2cpp_runtime_helper_022b2c90();
            pUStack_c0 = (UnityEngine_Material_o *)ppIVar24;
            pIStack_b8 = (Il2CppObject *)unaff_R12;
            pUStack_b0 = pUVar13;
            uStack_a8 = uVar29;
            lStack_a0 = lVar25;
            pSStack_98 = (System_String_o *)unaff_RBP;
            if (g_data_057ac306 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
              il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
              il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
              il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
              il2cpp_runtime_helper_023445d0(&"_Tint");
              g_data_057ac306 = '\x01';
            }
            _Var33.genericMethod =
                 (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
            pIVar34 = (Il2CppType *)0x0;
            pIVar22 = (Il2CppObject *)0x0;
            _Stack_f8.genericMethod =
                 (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
            pIStack_f0 = (Il2CppType *)0x0;
            pIStack_e8 = (Il2CppObject *)0x0;
            if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar19 = *(System_Collections_Generic_Dictionary_object__object__o **)
                       ((long)TypeInfo_WeatherManager->static_fields + 0x10);
            if ((pSVar19 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
               (pSVar18 = System_Collections_Generic_Dictionary_object__object___get_Keys
                                    (pSVar19,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic),
               pSVar18 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
              System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                        ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                         &_Stack_d8,pSVar18,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
              _Var33 = _Stack_d8;
              pIVar34 = pIStack_d0;
              key_01 = pIStack_c8;
              while( true ) {
                __this_03.fields._8_8_ = pIVar34;
                __this_03.fields._dictionary = _Var33.genericMethod;
                __this_03.fields._currentKey = key_01;
                bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                   (__this_03,(MethodInfo_3251B20 *)&stack0xfffffffffffffee8);
                if ((char)bVar10 == '\0') {
                  __this_06.fields._8_8_ = pIVar34;
                  __this_06.fields._dictionary = _Var33.genericMethod;
                  __this_06.fields._currentKey = key_01;
                  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                            (__this_06,(MethodInfo_3251B10 *)&stack0xfffffffffffffee8);
                  return;
                }
                pIVar22 = key_01;
                if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar19 = *(System_Collections_Generic_Dictionary_object__object__o **)
                           ((long)TypeInfo_WeatherManager->static_fields + 0x10);
                if (pSVar19 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
                pSVar19 = (System_Collections_Generic_Dictionary_object__object__o *)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar19,key_01,MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item);
                if (pSVar19 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_04070392;
                pSVar18 = System_Collections_Generic_Dictionary_object__object___get_Keys
                                    (pSVar19,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
                if (pSVar18 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
                goto label_04070397;
                System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                          ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                           &_Stack_d8,pSVar18,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
                pIStack_e8 = pIStack_c8;
                _Stack_f8 = _Stack_d8;
                pIStack_f0 = pIStack_d0;
                while (__this_04.fields._8_8_ = pIVar34, __this_04.fields._dictionary = _Var33.genericMethod,
                      __this_04.fields._currentKey = pIVar22,
                      bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                         (__this_04,(MethodInfo_3251B20 *)&_Stack_f8), key = pIStack_e8,
                      (char)bVar10 != '\0') {
                  if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar19 = *(System_Collections_Generic_Dictionary_object__object__o **)
                             ((long)TypeInfo_WeatherManager->static_fields + 0x10);
                  if (pSVar19 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0407038d;
                  }
                  pSVar19 = (System_Collections_Generic_Dictionary_object__object__o *)
                            System_Collections_Generic_Dictionary_object__object___get_Item
                                      (pSVar19,key_01,MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item);
                  if (pSVar19 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0407038d;
                  }
                  pUVar13 = (UnityEngine_Material_o *)
                            System_Collections_Generic_Dictionary_object__object___get_Item
                                      (pSVar19,key,MethodInfo_Material_get_Item);
                  if (pUVar13 == (UnityEngine_Material_o *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0407038d;
                  }
                  value_00.fields.b = 0.5;
                  value_00.fields.a = 1.0;
                  value_00.fields.r = 0.5;
                  value_00.fields.g = 0.5;
                  UnityEngine_Material__SetColor(pUVar13,"_Tint",value_00,(MethodInfo *)0x0);
                }
                __this_05.fields._8_8_ = pIVar34;
                __this_05.fields._dictionary = _Var33.genericMethod;
                __this_05.fields._currentKey = pIVar22;
                System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                          (__this_05,(MethodInfo_3251B10 *)&_Stack_f8);
                key_01 = pIVar22;
              }
label_0407038d:
              il2cpp_runtime_helper_022b2c90();
label_04070392:
              il2cpp_runtime_helper_022b2c90();
label_04070397:
              il2cpp_runtime_helper_022b2c90();
              il2cpp_runtime_helper_022fefe0(key_01);
            }
            auVar32 = il2cpp_runtime_helper_022b2c90();
            lVar28 = auVar32._0_8_;
            if (auVar32._8_4_ == 1) {
              plVar20 = (long *)__cxa_begin_catch();
              lVar28 = *plVar20;
              __cxa_end_catch();
              __this_07.fields._8_8_ = pIVar34;
              __this_07.fields._dictionary = _Var33.genericMethod;
              __this_07.fields._currentKey = pIVar22;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                        (__this_07,(MethodInfo_3251B10 *)&stack0xfffffffffffffee8);
              if (lVar28 == 0) {
                return;
              }
              il2cpp_runtime_helper_022fefe0();
            }
            __this_08.fields._8_8_ = pIVar34;
            __this_08.fields._dictionary = _Var33.genericMethod;
            __this_08.fields._currentKey = pIVar22;
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                      (__this_08,(MethodInfo_3251B10 *)&stack0xfffffffffffffee8);
            _Unwind_Resume(lVar28);
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac30e == '\0') {
    pSStack_98 = (System_String_o *)0x4072e0a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pSStack_98 = (System_String_o *)0x4072e16;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    pSStack_98 = (System_String_o *)0x4072e22;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_Weather_WeatherSc);
    pSStack_98 = (System_String_o *)0x4072e2e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pSStack_98 = (System_String_o *)0x4072e3a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    pSStack_98 = (System_String_o *)0x4072e46;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    pSStack_98 = (System_String_o *)0x4072e52;
    il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherScheduleRunner_get_Current);
    pSStack_98 = (System_String_o *)0x4072e5e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Weather_WeatherScheduleRunner_GetEnu);
    pSStack_98 = (System_String_o *)0x4072e6a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherScheduleRunner);
    pSStack_98 = (System_String_o *)0x4072e76;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_WeatherScheduleRunner);
    pSStack_98 = (System_String_o *)0x4072e82;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    pSStack_98 = (System_String_o *)0x4072e8e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pSStack_98 = (System_String_o *)0x4072e9a;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac30e = '\x01';
  }
  uVar35 = 0;
  uVar36 = 0;
  if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) != 2) {
    return;
  }
  if ((char)(__this_13->fields)._finishedLoading == '\0') {
    return;
  }
  fVar30 = (__this_13->fields)._currentTime;
  pSStack_98 = (System_String_o *)0x4072eee;
  fVar31 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  (__this_13->fields)._currentTime = fVar31 + fVar30;
  __this_02 = (__this_13->fields)._targetWeatherStartTimes;
  if (__this_02 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
    pSStack_98 = (System_String_o *)0x4072f16;
    pMVar26 = MethodInfo_Int32_get_Count;
    iVar12 = System_Collections_Generic_Dictionary_int__float___get_Count
                       (__this_02,(MethodInfo_308DD70 *)MethodInfo_Int32_get_Count);
    if (0 < iVar12) {
      fVar30 = (__this_13->fields)._currentLerpWait;
      pSStack_98 = (System_String_o *)0x4072f30;
      fVar31 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      (__this_13->fields)._currentLerpWait = fVar30 - fVar31;
      if (fVar30 - fVar31 <= 0.0) {
        pSStack_98 = (System_String_o *)0x4072f53;
        Weather_WeatherManager__LerpCurrentWeatherToTarget(__this_13,pMVar26);
        pSStack_98 = (System_String_o *)0x4072f5f;
        Weather_WeatherManager__ApplyCurrentWeather(__this_13,0,0,(MethodInfo *)method_00);
        (__this_13->fields)._currentLerpWait = 0.05;
      }
    }
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      pSStack_98 = (System_String_o *)0x40730fc;
      il2cpp_runtime_helper_02337ed0();
      pSStack_98 = (System_String_o *)0x4073103;
      bVar10 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar9 = (char)bVar10;
    }
    else {
      pSStack_98 = (System_String_o *)0x4072f88;
      bVar10 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar9 = (char)bVar10;
    }
    if (cVar9 == '\0') {
      return;
    }
    pSVar6 = (__this_13->fields)._currentWeather;
    if ((pSVar6 != (Settings_WeatherSet_o *)0x0) &&
       (pSVar7 = (pSVar6->fields).UseSchedule, pSVar7 != (Settings_BoolSetting_o *)0x0)) {
      if (*(char *)((long)&(pSVar7->fields).DefaultValue + 1) == '\0') {
        return;
      }
      pSVar8 = (__this_13->fields)._currentScheduleWait;
      if (pSVar8 != (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0) {
        pSStack_98 = (System_String_o *)0x4072fd6;
        pSVar18 = System_Collections_Generic_Dictionary_object__float___get_Keys
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_Weather_WeatherSc);
        pSStack_98 = (System_String_o *)0x4072fe8;
        pSVar23 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_WeatherScheduleRunner);
        pSStack_98 = (System_String_o *)0x4073000;
        System_Collections_Generic_List_object____ctor_362ba10
                  (pSVar23,(System_Collections_Generic_IEnumerable_T__o *)pSVar18,MethodInfo_List_1_Weather_WeatherScheduleRunner);
        if (pSVar23 != (System_Collections_Generic_List_object__o *)0x0) {
          pSStack_98 = (System_String_o *)0x4073020;
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_60,pSVar23,MethodInfo_List_1_T_Enumerator_Weather_WeatherScheduleRunner_GetEnu);
          uVar35 = (undefined4)local_60._0_8_;
          uVar36 = SUB84(local_60._0_8_,4);
          while( true ) {
            pSStack_98 = (System_String_o *)0x4073062;
            __this_09.fields._index = in_stack_ffffffffffffff78;
            __this_09.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff70;
            __this_09.fields._version = (int32_t)fVar30;
            __this_09.fields._current._0_4_ = uVar35;
            __this_09.fields._current._4_4_ = uVar36;
            bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_09,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80);
            if ((char)bVar10 == '\0') break;
            pSVar8 = (__this_13->fields)._currentScheduleWait;
            if (pSVar8 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0) {
              pSStack_98 = (System_String_o *)0x407318d;
              il2cpp_runtime_helper_022b2c90();
label_0407318d:
              pSStack_98 = (System_String_o *)0x4073192;
              il2cpp_runtime_helper_022b2c90();
              goto label_04073192;
            }
            pSStack_98 = (System_String_o *)0x407308e;
            fVar30 = System_Collections_Generic_Dictionary_object__float___get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
                                (Il2CppObject *)local_50,MethodInfo_Single_get_Item);
            pSStack_98 = (System_String_o *)0x407309b;
            fVar31 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
            pSStack_98 = (System_String_o *)0x40730b7;
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
                       (Il2CppObject *)local_50,fVar30 - fVar31,MethodInfo_Void_set_Item);
            pSVar8 = (__this_13->fields)._currentScheduleWait;
            if (pSVar8 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0)
            goto label_0407318d;
            pSStack_98 = (System_String_o *)0x40730d3;
            fVar31 = System_Collections_Generic_Dictionary_object__float___get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
                                (Il2CppObject *)local_50,MethodInfo_Single_get_Item);
            if (fVar31 <= 0.0) {
              if (local_50 == (Weather_WeatherScheduleRunner_o *)0x0) {
label_04073192:
                pSStack_98 = (System_String_o *)0x4073197;
                il2cpp_runtime_helper_022b2c90();
                goto label_04073197;
              }
              pSStack_98 = (System_String_o *)0x40730f2;
              Weather_WeatherScheduleRunner__ConsumeSchedule(local_50,(MethodInfo *)0x0);
            }
          }
          pSStack_98 = (System_String_o *)0x4073121;
          __this_10.fields._index = in_stack_ffffffffffffff78;
          __this_10.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff70;
          __this_10.fields._version = (int32_t)fVar30;
          __this_10.fields._current._0_4_ = uVar35;
          __this_10.fields._current._4_4_ = uVar36;
          pMVar26 = MethodInfo_Void_Dispose;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_10,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
          goto label_04073121;
        }
      }
    }
  }
label_04073197:
  pSStack_98 = (System_String_o *)0x407319c;
  auVar32 = il2cpp_runtime_helper_022b2c90();
  if (auVar32._8_4_ == 1) {
    pSStack_98 = (System_String_o *)0x40731f2;
    plVar20 = (long *)__cxa_begin_catch(auVar32._0_8_);
    lVar28 = *plVar20;
    pSStack_98 = (System_String_o *)0x40731fa;
    __cxa_end_catch();
    pSStack_98 = (System_String_o *)0x407320e;
    __this_11.fields._index = in_stack_ffffffffffffff78;
    __this_11.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff70;
    __this_11.fields._version = (int32_t)fVar30;
    __this_11.fields._current._0_4_ = uVar35;
    __this_11.fields._current._4_4_ = uVar36;
    pMVar26 = MethodInfo_Void_Dispose;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_11,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
    if (lVar28 == 0) {
label_04073121:
      fVar30 = (__this_13->fields)._currentSyncWait;
      pSStack_98 = (System_String_o *)0x4073137;
      fVar31 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      (__this_13->fields)._currentSyncWait = fVar30 - fVar31;
      if ((fVar30 - fVar31 <= 0.0) && ((char)(__this_13->fields)._needSync != '\0')) {
        pSStack_98 = (System_String_o *)0x4073161;
        Weather_WeatherManager__LerpCurrentWeatherToTarget(__this_13,pMVar26);
        pSStack_98 = (System_String_o *)0x4073169;
        Weather_WeatherManager__SyncWeather(__this_13,pMVar26);
        *(undefined1 *)&(__this_13->fields)._needSync = 0;
        (__this_13->fields)._currentSyncWait = 5.0;
      }
      return;
    }
    pSStack_98 = (System_String_o *)0x407321f;
    il2cpp_runtime_helper_022fefe0(lVar28);
  }
  pSStack_98 = (System_String_o *)0x407323a;
  __this_12.fields._index = in_stack_ffffffffffffff78;
  __this_12.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff70;
  __this_12.fields._version = (int32_t)fVar30;
  __this_12.fields._current._0_4_ = uVar35;
  __this_12.fields._current._4_4_ = uVar36;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_12,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
  pSStack_98 = (System_String_o *)0x4073247;
  _Unwind_Resume(auVar32._0_8_);
}


// Weather.WeatherManager$$FixedUpdate
// il2cpp: void Weather_WeatherManager__FixedUpdate (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x4072de0

void Weather_WeatherManager__FixedUpdate(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__float__o *__this_00;
  Settings_WeatherSet_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *pSVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  char cVar5;
  int32_t iVar6;
  bool_conflict bVar7;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *collection;
  System_Collections_Generic_List_object__o *__this_05;
  long *plVar8;
  MethodInfo *in_RCX;
  MethodInfo *pMVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [12];
  undefined1 in_stack_ffffffffffffff88 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar13;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  
  if (g_data_057ac30e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_Weather_WeatherSc);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherScheduleRunner_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Weather_WeatherScheduleRunner_GetEnu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherScheduleRunner);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_WeatherScheduleRunner);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0();
    g_data_057ac30e = '\x01';
  }
  pSVar13 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) != 2) {
    return;
  }
  if ((char)(__this->fields)._finishedLoading == '\0') {
    return;
  }
  fVar11 = (__this->fields)._currentTime;
  fVar10 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  (__this->fields)._currentTime = fVar10 + fVar11;
  __this_00 = (__this->fields)._targetWeatherStartTimes;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
    pMVar9 = MethodInfo_Int32_get_Count;
    iVar6 = System_Collections_Generic_Dictionary_int__float___get_Count
                      (__this_00,(MethodInfo_308DD70 *)MethodInfo_Int32_get_Count);
    if (0 < iVar6) {
      fVar11 = (__this->fields)._currentLerpWait;
      fVar10 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      (__this->fields)._currentLerpWait = fVar11 - fVar10;
      if (fVar11 - fVar10 <= 0.0) {
        Weather_WeatherManager__LerpCurrentWeatherToTarget(__this,pMVar9);
        Weather_WeatherManager__ApplyCurrentWeather(__this,0,0,in_RCX);
        (__this->fields)._currentLerpWait = 0.05;
      }
    }
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar5 = (char)bVar7;
    }
    else {
      bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar5 = (char)bVar7;
    }
    if (cVar5 == '\0') {
      return;
    }
    pSVar1 = (__this->fields)._currentWeather;
    if ((pSVar1 != (Settings_WeatherSet_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).UseSchedule, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
      if (*(char *)((long)&(pSVar2->fields).DefaultValue + 1) == '\0') {
        return;
      }
      pSVar3 = (__this->fields)._currentScheduleWait;
      if (pSVar3 != (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0) {
        collection = System_Collections_Generic_Dictionary_object__float___get_Keys
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_Weather_WeatherSc);
        __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_WeatherScheduleRunner);
        System_Collections_Generic_List_object____ctor_362ba10
                  (__this_05,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_Weather_WeatherScheduleRunner);
        if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator(&SStack_48,__this_05,MethodInfo_List_1_T_Enumerator_Weather_WeatherScheduleRunner_GetEnu);
          pSVar13 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_48.fields._list;
          while (__this_01.fields._version = (int32_t)fVar11,
                __this_01.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_,
                __this_01.fields._index = in_stack_ffffffffffffff88._8_4_,
                __this_01.fields._current = (Il2CppObject *)pSVar13,
                bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
                (char)bVar7 != '\0') {
            pSVar3 = (__this->fields)._currentScheduleWait;
            if (pSVar3 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
label_0407318d:
              il2cpp_runtime_helper_022b2c90();
              goto label_04073192;
            }
            fVar11 = System_Collections_Generic_Dictionary_object__float___get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                                SStack_48.fields._current,MethodInfo_Single_get_Item);
            fVar10 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                       SStack_48.fields._current,fVar11 - fVar10,MethodInfo_Void_set_Item);
            pSVar3 = (__this->fields)._currentScheduleWait;
            if (pSVar3 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0)
            goto label_0407318d;
            fVar10 = System_Collections_Generic_Dictionary_object__float___get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                                SStack_48.fields._current,MethodInfo_Single_get_Item);
            if (fVar10 <= 0.0) {
              if ((Weather_WeatherScheduleRunner_o *)SStack_48.fields._current ==
                  (Weather_WeatherScheduleRunner_o *)0x0) {
label_04073192:
                il2cpp_runtime_helper_022b2c90();
                goto label_04073197;
              }
              Weather_WeatherScheduleRunner__ConsumeSchedule
                        ((Weather_WeatherScheduleRunner_o *)SStack_48.fields._current,(MethodInfo *)0x0);
            }
          }
          __this_02.fields._version = (int32_t)fVar11;
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
          __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
          __this_02.fields._current = (Il2CppObject *)pSVar13;
          pMVar9 = MethodInfo_Void_Dispose;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
          goto label_04073121;
        }
      }
    }
  }
label_04073197:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar4 = *plVar8;
    __cxa_end_catch();
    __this_03.fields._version = (int32_t)fVar11;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffff88._8_4_;
    __this_03.fields._current = (Il2CppObject *)pSVar13;
    pMVar9 = MethodInfo_Void_Dispose;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar4 == 0) {
label_04073121:
      fVar11 = (__this->fields)._currentSyncWait;
      fVar10 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      (__this->fields)._currentSyncWait = fVar11 - fVar10;
      if ((fVar11 - fVar10 <= 0.0) && ((char)(__this->fields)._needSync != '\0')) {
        Weather_WeatherManager__LerpCurrentWeatherToTarget(__this,pMVar9);
        Weather_WeatherManager__SyncWeather(__this,pMVar9);
        *(undefined1 *)&(__this->fields)._needSync = 0;
        (__this->fields)._currentSyncWait = 5.0;
      }
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_04.fields._version = (int32_t)fVar11;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
  __this_04.fields._index = in_stack_ffffffffffffff88._8_4_;
  __this_04.fields._current = (Il2CppObject *)pSVar13;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar12._0_8_);
}


// Weather.WeatherManager$$SyncWeather
// il2cpp: void Weather_WeatherManager__SyncWeather (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x4072850

void Weather_WeatherManager__SyncWeather(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppMethodPointer vtableDispatch;
  long lVar3;
  System_Object_array *pSVar4;
  Photon_Pun_PhotonView_o *__this_00;
  Settings_WeatherSet_o *pSVar5;
  Utility_Algorithms_CompressionAlgorithm_o *pUVar6;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar7;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_Collections_Generic_List_Enumerator_object__o __this_10;
  Il2CppObject *key;
  char cVar8;
  int iVar9;
  bool_conflict bVar10;
  int32_t iVar11;
  UnityEngine_Material_o *pUVar12;
  void *pvVar13;
  Il2CppClass *pIVar14;
  UnityEngine_Material_o *pUVar15;
  UnityEngine_Texture_o *pUVar16;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar17;
  System_Collections_Generic_Dictionary_object__object__o *pSVar18;
  long *plVar19;
  MethodInfo_30D43D0 **ppMVar20;
  System_String_o *pSVar21;
  System_Byte_array *x;
  long lVar22;
  Il2CppRGCTXData *pIVar23;
  Il2CppObject *pIVar24;
  System_Collections_Generic_List_object__o *pSVar25;
  MethodInfo *in_RCX;
  MethodInfo_255A020 **method_00;
  Il2CppObject *key_00;
  Il2CppClass **ppIVar26;
  System_Byte_array *unaff_RBX;
  MethodInfo_30D43D0 **path;
  Il2CppClass **unaff_RBP;
  long lVar27;
  MethodInfo *pMVar28;
  System_String_o **ppSVar29;
  Il2CppRGCTXData *__this_11;
  _union_249689 _Var30;
  float fVar31;
  float fVar32;
  UnityEngine_Color_o value;
  UnityEngine_Color_o value_00;
  undefined1 auVar33 [12];
  _union_233249 _Var34;
  Il2CppType *pIVar35;
  Il2CppObject *key_01;
  _union_233249 _Stack_130;
  Il2CppType *pIStack_128;
  Il2CppObject *pIStack_120;
  _union_233249 _Stack_110;
  Il2CppType *pIStack_108;
  Il2CppObject *pIStack_100;
  UnityEngine_Material_o *pUStack_f8;
  _union_249689 _Stack_f0;
  UnityEngine_Material_o *pUStack_e8;
  _union_249689 _Stack_e0;
  long lStack_d8;
  System_String_o *pSStack_d0;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 in_stack_ffffffffffffff40;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auStack_98 [16];
  _union_249689 _Stack_88;
  Il2CppRGCTXData *pIStack_80;
  _union_249689 _Stack_78;
  Il2CppClass **ppIStack_70;
  float local_2c;
  
  if (g_data_057ac30f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&"SetWeatherRPC");
    g_data_057ac30f = '\x01';
  }
  Weather_WeatherManager__ApplyCurrentWeather(__this,0,1,in_RCX);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    bVar10 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar8 = (char)bVar10;
  }
  else {
    bVar10 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar8 = (char)bVar10;
  }
  if (cVar8 == '\0') {
    return;
  }
  __this_00 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  ppMVar20 = (MethodInfo_30D43D0 **)il2cpp_runtime_helper_022b2a40(TypeInfo_object,6);
  if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = (__this->fields)._currentWeather;
  if (pSVar5 == (Settings_WeatherSet_o *)0x0) {
label_04072bd7:
    x = unaff_RBX;
    il2cpp_runtime_helper_022b2c90();
label_04072bdc:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    unaff_RBX = (System_Byte_array *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
    pSVar21 = (System_String_o *)
              (*(pSVar5->klass->vtable)._7_SerializeToJsonString.methodPtr)
                        (pSVar5,(pSVar5->klass->vtable)._7_SerializeToJsonString.method);
    if ((unaff_RBX == (System_Byte_array *)0x0) ||
       (x = Utility_Algorithms_CompressionAlgorithm__CompressString
                      ((Utility_Algorithms_CompressionAlgorithm_o *)unaff_RBX,pSVar21,1,(MethodInfo *)0x0),
       (System_Object_array *)ppMVar20 == (System_Object_array *)0x0)) goto label_04072bd7;
    if ((x != (System_Byte_array *)0x0) &&
       (lVar22 = il2cpp_runtime_helper_023051f0(x,*(undefined8 *)((long)*ppMVar20 + 0x40)), lVar22 == 0))
    goto label_04072be1;
    if (*(int *)((long)ppMVar20 + 0x18) == 0) goto label_04072bdc;
    *(System_Byte_array **)((long)ppMVar20 + 0x20) = x;
    il2cpp_runtime_helper_022b4080((Il2CppObject **)((long)ppMVar20 + 0x20),x);
    pSVar5 = (__this->fields)._startWeather;
    unaff_RBX = x;
    if (pSVar5 == (Settings_WeatherSet_o *)0x0) goto label_04072bd7;
    pUVar6 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
    pSVar21 = (System_String_o *)
              (*(pSVar5->klass->vtable)._7_SerializeToJsonString.methodPtr)
                        (pSVar5,(pSVar5->klass->vtable)._7_SerializeToJsonString.method);
    unaff_RBX = (System_Byte_array *)0x0;
    if (pUVar6 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) goto label_04072bd7;
    x = Utility_Algorithms_CompressionAlgorithm__CompressString(pUVar6,pSVar21,1,(MethodInfo *)0x0);
    if ((x != (System_Byte_array *)0x0) &&
       (lVar22 = il2cpp_runtime_helper_023051f0(x,*(undefined8 *)((long)*ppMVar20 + 0x40)), lVar22 == 0))
    goto label_04072be1;
    if (*(uint *)((long)ppMVar20 + 0x18) < 2) goto label_04072bdc;
    *(System_Byte_array **)((long)ppMVar20 + 0x28) = x;
    il2cpp_runtime_helper_022b4080((Il2CppObject **)((long)ppMVar20 + 0x28),x);
    pSVar5 = (__this->fields)._targetWeather;
    unaff_RBX = x;
    if (pSVar5 == (Settings_WeatherSet_o *)0x0) goto label_04072bd7;
    pUVar6 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
    pSVar21 = (System_String_o *)
              (*(pSVar5->klass->vtable)._7_SerializeToJsonString.methodPtr)
                        (pSVar5,(pSVar5->klass->vtable)._7_SerializeToJsonString.method);
    unaff_RBX = (System_Byte_array *)0x0;
    if (pUVar6 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) goto label_04072bd7;
    x = Utility_Algorithms_CompressionAlgorithm__CompressString(pUVar6,pSVar21,1,(MethodInfo *)0x0);
    if ((x == (System_Byte_array *)0x0) ||
       (lVar22 = il2cpp_runtime_helper_023051f0(x,*(undefined8 *)((long)*ppMVar20 + 0x40)), lVar22 != 0)) {
      if (2 < *(uint *)((long)ppMVar20 + 0x18)) {
        *(System_Byte_array **)((long)ppMVar20 + 0x30) = x;
        il2cpp_runtime_helper_022b4080((Il2CppObject **)((long)ppMVar20 + 0x30),x);
        x = (System_Byte_array *)(__this->fields)._targetWeatherStartTimes;
        if ((x != (System_Byte_array *)0x0) &&
           (lVar22 = il2cpp_runtime_helper_023051f0(x,*(undefined8 *)((long)*ppMVar20 + 0x40)), lVar22 == 0))
        goto label_04072be1;
        if (3 < *(uint *)((long)ppMVar20 + 0x18)) {
          *(System_Byte_array **)((long)ppMVar20 + 0x38) = x;
          il2cpp_runtime_helper_022b4080((Il2CppObject **)((long)ppMVar20 + 0x38),x);
          x = (System_Byte_array *)(__this->fields)._targetWeatherEndTimes;
          if ((x != (System_Byte_array *)0x0) &&
             (lVar22 = il2cpp_runtime_helper_023051f0(x,*(undefined8 *)((long)*ppMVar20 + 0x40)), lVar22 == 0))
          goto label_04072be1;
          if (4 < *(uint *)((long)ppMVar20 + 0x18)) {
            *(System_Byte_array **)((long)ppMVar20 + 0x40) = x;
            il2cpp_runtime_helper_022b4080((Il2CppObject **)((long)ppMVar20 + 0x40),x);
            local_2c = (__this->fields)._currentTime;
            x = (System_Byte_array *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&local_2c);
            if ((x != (System_Byte_array *)0x0) &&
               (lVar22 = il2cpp_runtime_helper_023051f0(x,*(undefined8 *)((long)*ppMVar20 + 0x40)), lVar22 == 0))
            goto label_04072be1;
            if (5 < *(uint *)((long)ppMVar20 + 0x18)) {
              *(System_Byte_array **)((long)ppMVar20 + 0x48) = x;
              il2cpp_runtime_helper_022b4080((Il2CppObject **)((long)ppMVar20 + 0x48),x);
              unaff_RBX = x;
              if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
                Photon_Pun_PhotonView__RPC
                          (__this_00,"SetWeatherRPC",1,(System_Object_array *)ppMVar20,(MethodInfo *)0x0);
                return;
              }
              goto label_04072bd7;
            }
          }
        }
      }
      goto label_04072bdc;
    }
  }
label_04072be1:
  lVar22 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(lVar22,0);
  if (g_data_057ac30d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseWeatherEffect_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlashlightWeatherEffect_AddComponent_FlashlightWeatherEf);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    il2cpp_runtime_helper_023445d0(&"Prefabs/FlashlightEffect");
    g_data_057ac30d = '\x01';
  }
  pSVar7 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar22 + 0x40);
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = *(MethodInfo_30D43D0 ***)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo_255A020 **)MethodInfo_GameObject_InstantiateAsset_GameObject;
  __this_11 = (Il2CppRGCTXData *)path;
  pIVar23 = (Il2CppRGCTXData *)
            ApplicationManagers_ResourceManager__InstantiateAsset_object_
                      ((System_String_o *)path,"Prefabs/FlashlightEffect",0,(MethodInfo_25BC8B0 *)MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (pIVar23 != (Il2CppRGCTXData *)0x0) {
    method_00 = &MethodInfo_FlashlightWeatherEffect_AddComponent_FlashlightWeatherEf;
    pIVar24 = UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pIVar23,MethodInfo_FlashlightWeatherEffect_AddComponent_FlashlightWeatherEf);
    __this_11 = pIVar23;
    if (pSVar7 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
      method_00 = (MethodInfo_255A020 **)MethodInfo_Void_Add;
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                (pSVar7,7,pIVar24,(MethodInfo_30D4480 *)MethodInfo_Void_Add);
      __this_11 = *(Il2CppRGCTXData **)(lVar22 + 0x40);
      if (__this_11 != (Il2CppRGCTXData *)0x0) {
        path = &MethodInfo_BaseWeatherEffect_get_Item;
        pIVar24 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_11,7,MethodInfo_BaseWeatherEffect_get_Item
                            );
        if (pIVar24 != (Il2CppObject *)0x0) {
          method_00 = (MethodInfo_255A020 **)pIVar24->klass;
          (*((Il2CppClass *)method_00)->vtable[0xb].methodPtr)
                    (pIVar24,0,((Il2CppClass *)method_00)->vtable[0xb].method);
          __this_11 = *(Il2CppRGCTXData **)(lVar22 + 0x40);
          if ((__this_11 != (Il2CppRGCTXData *)0x0) &&
             (pIVar23 = (Il2CppRGCTXData *)
                        System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_11,7,
                                   MethodInfo_BaseWeatherEffect_get_Item), pIVar23 != (Il2CppRGCTXData *)0x0)) {
            method_00 = (MethodInfo_255A020 **)pIVar23->klass;
            lVar27 = 0;
            (*((Il2CppClass *)method_00)->vtable[6].methodPtr)
                      (pIVar23,0,((Il2CppClass *)method_00)->vtable[6].method);
            lVar22 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
            __this_11 = pIVar23;
            if ((lVar22 != 0) && (lVar22 = *(long *)(lVar22 + 0x28), lVar22 != 0)) {
              _Var30 = (_union_249689)((_union_249689 *)(lVar22 + 0x10))->genericMethod;
              if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057ac302 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
                il2cpp_runtime_helper_023445d0(&MethodInfo_BaseWeatherEffect_get_Item);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
                g_data_057ac302 = '\x01';
                if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) goto label_0406fb49;
label_0406f9cf:
                lVar22 = *(long *)TypeInfo_WeatherManager->static_fields;
              }
              else {
                if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c != 0) goto label_0406f9cf;
label_0406fb49:
                il2cpp_runtime_helper_02337ed0();
                lVar22 = *(long *)TypeInfo_WeatherManager->static_fields;
              }
              pIVar14 = TypeInfo_WeatherManager;
              if (lVar22 != 0) {
                pIVar14 = (Il2CppClass *)0x0;
                if (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar22 + 0x40) !=
                    (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                  lVar27 = 7;
                  bVar10 = System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey
                                     (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                                       (lVar22 + 0x40),7,MethodInfo_Boolean_ContainsKey);
                  if ((char)bVar10 == '\0') {
                    return;
                  }
                  if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pIVar14 = TypeInfo_WeatherManager;
                  if (*(long *)TypeInfo_WeatherManager->static_fields != 0) {
                    pSVar7 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                              (*(long *)TypeInfo_WeatherManager->static_fields + 0x40);
                    pIVar14 = (Il2CppClass *)0x0;
                    if (pSVar7 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                      ppMVar20 = &MethodInfo_BaseWeatherEffect_get_Item;
                      x = (System_Byte_array *)
                          System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                                    (pSVar7,7,MethodInfo_BaseWeatherEffect_get_Item);
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      lVar27 = 0;
                      bVar10 = UnityEngine_Object__op_Inequality
                                         ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,
                                          (MethodInfo *)0x0);
                      if ((char)bVar10 == '\0') {
                        return;
                      }
                      if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pIVar14 = TypeInfo_WeatherManager;
                      if ((*(long *)TypeInfo_WeatherManager->static_fields != 0) &&
                         (pIVar14 = *(Il2CppClass **)(*(long *)TypeInfo_WeatherManager->static_fields + 0x40),
                         pIVar14 != (Il2CppClass *)0x0)) {
                        lVar27 = 7;
                        pIVar24 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar14,
                                             7,MethodInfo_BaseWeatherEffect_get_Item);
                        if (pIVar24 != (Il2CppObject *)0x0) {
                          pIVar14 = pIVar24->klass;
                          vtableDispatch = pIVar14->vtable[9].methodPtr;
                          (*vtableDispatch)
                                    (pIVar24,_Var30.genericMethod,pIVar14->vtable[9].method,pIVar14,
                                     vtableDispatch);
                          return;
                        }
                      }
                    }
                  }
                }
              }
              il2cpp_runtime_helper_022b2c90();
              ppIStack_70 = &TypeInfo_WeatherManager;
              pIStack_80 = (Il2CppRGCTXData *)&TypeInfo_DataCompressors;
              auStack_98._0_8_ = method_00;
              auStack_98._8_8_ = x;
              _Stack_88 = (_union_249689)ppMVar20;
              _Stack_78 = _Var30;
              if (g_data_057ac303 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
                il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
                il2cpp_runtime_helper_023445d0(&"2");
                il2cpp_runtime_helper_023445d0(&"_");
                il2cpp_runtime_helper_023445d0(&"Tex");
                il2cpp_runtime_helper_023445d0(&"_Tint");
                g_data_057ac303 = '\x01';
              }
              pUVar12 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
              UnityEngine_Material___ctor(pUVar12,(UnityEngine_Shader_o *)pIVar14,(MethodInfo *)0x0);
              if (lVar27 != 0) {
                iVar9 = (int)*(ulong *)(lVar27 + 0x18);
                if (pUVar12 == (UnityEngine_Material_o *)0x0) {
label_0406fde7:
                  if (0 < iVar9) {
                    pIVar14 = (Il2CppClass *)
                              System_String__Concat_3af7150
                                        ("_",*(System_String_o **)(lVar27 + 0x20),"Tex",
                                         (MethodInfo *)0x0);
                    unaff_RBP = &TypeInfo_WeatherManager;
                    if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar18 = *(System_Collections_Generic_Dictionary_object__object__o **)
                               ((long)TypeInfo_WeatherManager->static_fields + 8);
                    if ((pSVar18 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
                       (pUVar15 = (UnityEngine_Material_o *)
                                  System_Collections_Generic_Dictionary_object__object___get_Item
                                            (pSVar18,key_00,MethodInfo_Material_get_Item),
                       pUVar15 != (UnityEngine_Material_o *)0x0)) goto label_0406fe58;
                  }
                }
                else {
                  if (0 < iVar9) {
                    pvVar13 = (void *)(*(ulong *)(lVar27 + 0x18) & 0xffffffff);
                    _Var30.genericMethod = (void *)0x0;
                    do {
                      ppMVar20 = (MethodInfo_30D43D0 **)&TypeInfo_WeatherManager;
                      if (pvVar13 <= _Var30.genericMethod) {
                        iVar9 = il2cpp_runtime_helper_022b2ca0();
                        goto label_0406fde7;
                      }
                      pIVar14 = (Il2CppClass *)
                                System_String__Concat_3af7150
                                          ("_",
                                           *(System_String_o **)
                                            (lVar27 + 0x20 + (long)_Var30.genericMethod * 8),"Tex",
                                           (MethodInfo *)0x0);
                      if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pSVar18 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                 ((long)TypeInfo_WeatherManager->static_fields + 8);
                      if ((pSVar18 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
                         (pUVar15 = (UnityEngine_Material_o *)
                                    System_Collections_Generic_Dictionary_object__object___get_Item
                                              (pSVar18,key_00,MethodInfo_Material_get_Item),
                         pUVar15 == (UnityEngine_Material_o *)0x0)) goto label_0406fe53;
                      pUVar16 = UnityEngine_Material__GetTexture
                                          (pUVar15,(System_String_o *)pIVar14,(MethodInfo *)0x0);
                      UnityEngine_Material__SetTexture
                                (pUVar12,(System_String_o *)pIVar14,pUVar16,(MethodInfo *)0x0);
                      unaff_RBP = (Il2CppClass **)
                                  System_String__Concat_3ae5ba0
                                            ((System_String_o *)pIVar14,"2",(MethodInfo *)0x0);
                      pSVar18 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                 ((long)TypeInfo_WeatherManager->static_fields + 8);
                      if ((pSVar18 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
                         (pUVar15 = (UnityEngine_Material_o *)
                                    System_Collections_Generic_Dictionary_object__object___get_Item
                                              (pSVar18,(Il2CppObject *)auStack_98._0_8_,MethodInfo_Material_get_Item),
                         pUVar15 == (UnityEngine_Material_o *)0x0)) goto label_0406fe53;
                      pUVar16 = UnityEngine_Material__GetTexture
                                          (pUVar15,(System_String_o *)pIVar14,(MethodInfo *)0x0);
                      UnityEngine_Material__SetTexture
                                (pUVar12,(System_String_o *)unaff_RBP,pUVar16,(MethodInfo *)0x0);
                      _Var30.genericMethod = _Var30.genericMethod + 1;
                      pvVar13 = (void *)(ulong)*(uint *)(lVar27 + 0x18);
                    } while ((long)_Var30.genericMethod < (long)(int)*(uint *)(lVar27 + 0x18));
                  }
                  if (pUVar12 != (UnityEngine_Material_o *)0x0) {
                    value.fields.b = 0.5;
                    value.fields.a = 1.0;
                    value.fields.r = 0.5;
                    value.fields.g = 0.5;
                    UnityEngine_Material__SetColor(pUVar12,"_Tint",value,(MethodInfo *)0x0);
                    if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    if (g_data_057ac304 == '\0') {
                      il2cpp_runtime_helper_023445d0(&"_Blend");
                      g_data_057ac304 = '\x01';
                    }
                    UnityEngine_Material__SetFloat(pUVar12,"_Blend",0.0,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
label_0406fe53:
              pUVar15 = (UnityEngine_Material_o *)il2cpp_runtime_helper_022b2c90();
label_0406fe58:
              UnityEngine_Material__GetTexture(pUVar15,(System_String_o *)pIVar14,(MethodInfo *)0x0);
              fVar31 = (float)il2cpp_runtime_helper_022b2c90();
              ppIVar26 = (Il2CppClass **)pUVar15;
              if (g_data_057ac304 == '\0') {
                ppSVar29 = &"_Blend";
                il2cpp_runtime_helper_023445d0();
                g_data_057ac304 = '\x01';
                ppIVar26 = (Il2CppClass **)ppSVar29;
              }
              if (pUVar15 != (UnityEngine_Material_o *)0x0) {
                UnityEngine_Material__SetFloat(pUVar15,"_Blend",fVar31,(MethodInfo *)0x0);
                return;
              }
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057ac305 == '\0') {
                pSStack_d0 = (System_String_o *)0x406fee9;
                il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
                pSStack_d0 = (System_String_o *)0x406fef5;
                il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
                pSStack_d0 = (System_String_o *)0x406ff01;
                il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
                pSStack_d0 = (System_String_o *)0x406ff0d;
                il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
                g_data_057ac305 = '\x01';
              }
              pvVar13 = ((UnityEngine_Material_o *)((long)ppIVar26 + 0x30))->monitor;
              if (pvVar13 != (void *)0x0) {
                *(int *)((long)pvVar13 + 0x1c) = *(int *)((long)pvVar13 + 0x1c) + 1;
                iVar9 = *(int *)((long)pvVar13 + 0x18);
                *(undefined4 *)((long)pvVar13 + 0x18) = 0;
                if (0 < iVar9) {
                  pSStack_d0 = (System_String_o *)0x406ff40;
                  System_Array__Clear(*(System_Array_o **)((long)pvVar13 + 0x10),0,iVar9,(MethodInfo *)0x0);
                }
                ppIVar26 = &TypeInfo_WeatherManager;
                if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
                  pSStack_d0 = (System_String_o *)0x406ff58;
                  il2cpp_runtime_helper_02337ed0();
                }
                lVar22 = MethodInfo_Void_Add;
                if (((*(long *)TypeInfo_WeatherManager->static_fields != 0) &&
                    (lVar3 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18), lVar3 != 0)) &&
                   (pSVar25 = *(System_Collections_Generic_List_object__o **)
                               (*(long *)TypeInfo_WeatherManager->static_fields + 0x38),
                   pSVar25 != (System_Collections_Generic_List_object__o *)0x0)) {
                  pIVar24 = *(Il2CppObject **)(lVar3 + 0x20);
                  piVar1 = &(pSVar25->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar4 = (pSVar25->fields)._items;
                  if (pSVar4 != (System_Object_array *)0x0) {
                    uVar2 = (pSVar25->fields)._size;
                    if (uVar2 < (uint)pSVar4->max_length) {
                      (pSVar25->fields)._size = uVar2 + 1;
                      pSVar4->m_Items[(int)uVar2] = pIVar24;
                      il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2);
                      return;
                    }
                    System_Collections_Generic_List_object___AddWithResize
                              (pSVar25,pIVar24,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                    return;
                  }
                }
              }
              pSStack_d0 = (System_String_o *)0x406ffe4;
              il2cpp_runtime_helper_022b2c90();
              pUStack_f8 = (UnityEngine_Material_o *)ppIVar26;
              _Stack_f0 = (_union_249689)ppMVar20;
              pUStack_e8 = pUVar12;
              _Stack_e0 = _Var30;
              lStack_d8 = lVar27;
              pSStack_d0 = (System_String_o *)unaff_RBP;
              if (g_data_057ac306 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
                il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
                il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
                il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
                il2cpp_runtime_helper_023445d0(&"_Tint");
                g_data_057ac306 = '\x01';
              }
              _Var34.genericMethod =
                   (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
              pIVar35 = (Il2CppType *)0x0;
              pIVar24 = (Il2CppObject *)0x0;
              _Stack_130.genericMethod =
                   (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
              pIStack_128 = (Il2CppType *)0x0;
              pIStack_120 = (Il2CppObject *)0x0;
              if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar18 = *(System_Collections_Generic_Dictionary_object__object__o **)
                         ((long)TypeInfo_WeatherManager->static_fields + 0x10);
              if ((pSVar18 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
                 (pSVar17 = System_Collections_Generic_Dictionary_object__object___get_Keys
                                      (pSVar18,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic),
                 pSVar17 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
                System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                          ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                           &_Stack_110,pSVar17,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
                _Var34 = _Stack_110;
                pIVar35 = pIStack_108;
                key_01 = pIStack_100;
                while( true ) {
                  __this_01.fields._8_8_ = pIVar35;
                  __this_01.fields._dictionary = _Var34.genericMethod;
                  __this_01.fields._currentKey = key_01;
                  bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                     (__this_01,(MethodInfo_3251B20 *)&stack0xfffffffffffffeb0);
                  if ((char)bVar10 == '\0') {
                    __this_04.fields._8_8_ = pIVar35;
                    __this_04.fields._dictionary = _Var34.genericMethod;
                    __this_04.fields._currentKey = key_01;
                    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                              (__this_04,(MethodInfo_3251B10 *)&stack0xfffffffffffffeb0);
                    return;
                  }
                  pIVar24 = key_01;
                  if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar18 = *(System_Collections_Generic_Dictionary_object__object__o **)
                             ((long)TypeInfo_WeatherManager->static_fields + 0x10);
                  if (pSVar18 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
                  pSVar18 = (System_Collections_Generic_Dictionary_object__object__o *)
                            System_Collections_Generic_Dictionary_object__object___get_Item
                                      (pSVar18,key_01,MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item);
                  if (pSVar18 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                  goto label_04070392;
                  pSVar17 = System_Collections_Generic_Dictionary_object__object___get_Keys
                                      (pSVar18,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
                  if (pSVar17 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
                  goto label_04070397;
                  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *
                             )&_Stack_110,pSVar17,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
                  pIStack_120 = pIStack_100;
                  _Stack_130 = _Stack_110;
                  pIStack_128 = pIStack_108;
                  while (__this_02.fields._8_8_ = pIVar35, __this_02.fields._dictionary = _Var34.genericMethod
                        , __this_02.fields._currentKey = pIVar24,
                        bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                           (__this_02,(MethodInfo_3251B20 *)&_Stack_130), key = pIStack_120,
                        (char)bVar10 != '\0') {
                    if (*(int *)&(TypeInfo_WeatherManager->_2).field_0x1c == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar18 = *(System_Collections_Generic_Dictionary_object__object__o **)
                               ((long)TypeInfo_WeatherManager->static_fields + 0x10);
                    if (pSVar18 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      il2cpp_runtime_helper_022b2c90();
                      goto label_0407038d;
                    }
                    pSVar18 = (System_Collections_Generic_Dictionary_object__object__o *)
                              System_Collections_Generic_Dictionary_object__object___get_Item
                                        (pSVar18,key_01,MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item);
                    if (pSVar18 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      il2cpp_runtime_helper_022b2c90();
                      goto label_0407038d;
                    }
                    pUVar12 = (UnityEngine_Material_o *)
                              System_Collections_Generic_Dictionary_object__object___get_Item
                                        (pSVar18,key,MethodInfo_Material_get_Item);
                    if (pUVar12 == (UnityEngine_Material_o *)0x0) {
                      il2cpp_runtime_helper_022b2c90();
                      goto label_0407038d;
                    }
                    value_00.fields.b = 0.5;
                    value_00.fields.a = 1.0;
                    value_00.fields.r = 0.5;
                    value_00.fields.g = 0.5;
                    UnityEngine_Material__SetColor(pUVar12,"_Tint",value_00,(MethodInfo *)0x0);
                  }
                  __this_03.fields._8_8_ = pIVar35;
                  __this_03.fields._dictionary = _Var34.genericMethod;
                  __this_03.fields._currentKey = pIVar24;
                  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                            (__this_03,(MethodInfo_3251B10 *)&_Stack_130);
                  key_01 = pIVar24;
                }
label_0407038d:
                il2cpp_runtime_helper_022b2c90();
label_04070392:
                il2cpp_runtime_helper_022b2c90();
label_04070397:
                il2cpp_runtime_helper_022b2c90();
                il2cpp_runtime_helper_022fefe0(key_01);
              }
              auVar33 = il2cpp_runtime_helper_022b2c90();
              lVar22 = auVar33._0_8_;
              if (auVar33._8_4_ == 1) {
                plVar19 = (long *)__cxa_begin_catch();
                lVar22 = *plVar19;
                __cxa_end_catch();
                __this_05.fields._8_8_ = pIVar35;
                __this_05.fields._dictionary = _Var34.genericMethod;
                __this_05.fields._currentKey = pIVar24;
                System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                          (__this_05,(MethodInfo_3251B10 *)&stack0xfffffffffffffeb0);
                if (lVar22 == 0) {
                  return;
                }
                il2cpp_runtime_helper_022fefe0();
              }
              __this_06.fields._8_8_ = pIVar35;
              __this_06.fields._dictionary = _Var34.genericMethod;
              __this_06.fields._currentKey = pIVar24;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                        (__this_06,(MethodInfo_3251B10 *)&stack0xfffffffffffffeb0);
              _Unwind_Resume(lVar22);
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  ppIStack_70 = (Il2CppClass **)&TypeInfo_DataCompressors;
  pIStack_80 = (Il2CppRGCTXData *)path;
  _Stack_78.genericMethod = ppMVar20;
  if (g_data_057ac30e == '\0') {
    pSStack_d0 = (System_String_o *)0x4072e0a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pSStack_d0 = (System_String_o *)0x4072e16;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    pSStack_d0 = (System_String_o *)0x4072e22;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_Weather_WeatherSc);
    pSStack_d0 = (System_String_o *)0x4072e2e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pSStack_d0 = (System_String_o *)0x4072e3a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    pSStack_d0 = (System_String_o *)0x4072e46;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    pSStack_d0 = (System_String_o *)0x4072e52;
    il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherScheduleRunner_get_Current);
    pSStack_d0 = (System_String_o *)0x4072e5e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Weather_WeatherScheduleRunner_GetEnu);
    pSStack_d0 = (System_String_o *)0x4072e6a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherScheduleRunner);
    pSStack_d0 = (System_String_o *)0x4072e76;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_WeatherScheduleRunner);
    pSStack_d0 = (System_String_o *)0x4072e82;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    pSStack_d0 = (System_String_o *)0x4072e8e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pSStack_d0 = (System_String_o *)0x4072e9a;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac30e = '\x01';
  }
  uVar36 = 0;
  uVar37 = 0;
  if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) != 2) {
    return;
  }
  if (*(char *)(__this_11 + 0x12) == '\0') {
    return;
  }
  fVar31 = *(float *)(__this_11 + 0xf);
  pSStack_d0 = (System_String_o *)0x4072eee;
  fVar32 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  *(float *)(__this_11 + 0xf) = fVar32 + fVar31;
  if (__this_11[0xc].method != (MethodInfo *)0x0) {
    pSStack_d0 = (System_String_o *)0x4072f16;
    pMVar28 = MethodInfo_Int32_get_Count;
    iVar11 = System_Collections_Generic_Dictionary_int__float___get_Count
                       ((System_Collections_Generic_Dictionary_int__float__o *)__this_11[0xc].method,
                        (MethodInfo_308DD70 *)MethodInfo_Int32_get_Count);
    if (0 < iVar11) {
      fVar31 = *(float *)(__this_11 + 0x11);
      pSStack_d0 = (System_String_o *)0x4072f30;
      fVar32 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      *(float *)(__this_11 + 0x11) = fVar31 - fVar32;
      if (fVar31 - fVar32 <= 0.0) {
        pSStack_d0 = (System_String_o *)0x4072f53;
        Weather_WeatherManager__LerpCurrentWeatherToTarget((Weather_WeatherManager_o *)__this_11,pMVar28);
        pSStack_d0 = (System_String_o *)0x4072f5f;
        Weather_WeatherManager__ApplyCurrentWeather
                  ((Weather_WeatherManager_o *)__this_11,0,0,(MethodInfo *)method_00);
        *(float *)(__this_11 + 0x11) = 0.05;
      }
    }
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      pSStack_d0 = (System_String_o *)0x40730fc;
      il2cpp_runtime_helper_02337ed0();
      pSStack_d0 = (System_String_o *)0x4073103;
      bVar10 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar8 = (char)bVar10;
    }
    else {
      pSStack_d0 = (System_String_o *)0x4072f88;
      bVar10 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar8 = (char)bVar10;
    }
    if (cVar8 == '\0') {
      return;
    }
    if ((__this_11[9].klass != (Il2CppClass *)0x0) &&
       (pIVar23 = (__this_11[9].klass)->rgctx_data, pIVar23 != (Il2CppRGCTXData *)0x0)) {
      if (*(char *)((long)pIVar23 + 0x11) == '\0') {
        return;
      }
      if (__this_11[0x10].method != (MethodInfo *)0x0) {
        pSStack_d0 = (System_String_o *)0x4072fd6;
        pSVar17 = System_Collections_Generic_Dictionary_object__float___get_Keys
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_11[0x10].method,
                             MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_Weather_WeatherSc);
        pSStack_d0 = (System_String_o *)0x4072fe8;
        pSVar25 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_WeatherScheduleRunner);
        pSStack_d0 = (System_String_o *)0x4073000;
        System_Collections_Generic_List_object____ctor_362ba10
                  (pSVar25,(System_Collections_Generic_IEnumerable_T__o *)pSVar17,MethodInfo_List_1_Weather_WeatherScheduleRunner);
        if (pSVar25 != (System_Collections_Generic_List_object__o *)0x0) {
          pSStack_d0 = (System_String_o *)0x4073020;
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_98,pSVar25,MethodInfo_List_1_T_Enumerator_Weather_WeatherScheduleRunner_GetEnu);
          uVar36 = (undefined4)auStack_98._0_8_;
          uVar37 = SUB84(auStack_98._0_8_,4);
          while( true ) {
            pSStack_d0 = (System_String_o *)0x4073062;
            __this_07.fields._index = in_stack_ffffffffffffff40;
            __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff38;
            __this_07.fields._version = (int32_t)fVar31;
            __this_07.fields._current._0_4_ = uVar36;
            __this_07.fields._current._4_4_ = uVar37;
            bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_07,(MethodInfo_321A1D0 *)&stack0xffffffffffffff48);
            if ((char)bVar10 == '\0') break;
            pMVar28 = __this_11[0x10].method;
            if (pMVar28 == (MethodInfo *)0x0) {
              pSStack_d0 = (System_String_o *)0x407318d;
              il2cpp_runtime_helper_022b2c90();
label_0407318d:
              pSStack_d0 = (System_String_o *)0x4073192;
              il2cpp_runtime_helper_022b2c90();
              goto label_04073192;
            }
            pSStack_d0 = (System_String_o *)0x407308e;
            fVar31 = System_Collections_Generic_Dictionary_object__float___get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar28,
                                (Il2CppObject *)_Stack_88,MethodInfo_Single_get_Item);
            pSStack_d0 = (System_String_o *)0x407309b;
            fVar32 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
            pSStack_d0 = (System_String_o *)0x40730b7;
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar28,
                       (Il2CppObject *)_Stack_88,fVar31 - fVar32,MethodInfo_Void_set_Item);
            if (__this_11[0x10].method == (MethodInfo *)0x0) goto label_0407318d;
            pSStack_d0 = (System_String_o *)0x40730d3;
            fVar32 = System_Collections_Generic_Dictionary_object__float___get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                __this_11[0x10].method,(Il2CppObject *)_Stack_88,MethodInfo_Single_get_Item);
            if (fVar32 <= 0.0) {
              if (_Stack_88 == (_union_249689)0x0) {
label_04073192:
                pSStack_d0 = (System_String_o *)0x4073197;
                il2cpp_runtime_helper_022b2c90();
                goto label_04073197;
              }
              pSStack_d0 = (System_String_o *)0x40730f2;
              Weather_WeatherScheduleRunner__ConsumeSchedule
                        ((Weather_WeatherScheduleRunner_o *)_Stack_88,(MethodInfo *)0x0);
            }
          }
          pSStack_d0 = (System_String_o *)0x4073121;
          __this_08.fields._index = in_stack_ffffffffffffff40;
          __this_08.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff38;
          __this_08.fields._version = (int32_t)fVar31;
          __this_08.fields._current._0_4_ = uVar36;
          __this_08.fields._current._4_4_ = uVar37;
          pMVar28 = MethodInfo_Void_Dispose;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff48);
          goto label_04073121;
        }
      }
    }
  }
label_04073197:
  pSStack_d0 = (System_String_o *)0x407319c;
  auVar33 = il2cpp_runtime_helper_022b2c90();
  if (auVar33._8_4_ == 1) {
    pSStack_d0 = (System_String_o *)0x40731f2;
    plVar19 = (long *)__cxa_begin_catch(auVar33._0_8_);
    lVar22 = *plVar19;
    pSStack_d0 = (System_String_o *)0x40731fa;
    __cxa_end_catch();
    pSStack_d0 = (System_String_o *)0x407320e;
    __this_09.fields._index = in_stack_ffffffffffffff40;
    __this_09.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff38;
    __this_09.fields._version = (int32_t)fVar31;
    __this_09.fields._current._0_4_ = uVar36;
    __this_09.fields._current._4_4_ = uVar37;
    pMVar28 = MethodInfo_Void_Dispose;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff48);
    if (lVar22 == 0) {
label_04073121:
      fVar31 = *(float *)((long)__this_11 + 0x8c);
      pSStack_d0 = (System_String_o *)0x4073137;
      fVar32 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      *(float *)((long)__this_11 + 0x8c) = fVar31 - fVar32;
      if ((fVar31 - fVar32 <= 0.0) && (*(char *)((long)__this_11 + 0x7c) != '\0')) {
        pSStack_d0 = (System_String_o *)0x4073161;
        Weather_WeatherManager__LerpCurrentWeatherToTarget((Weather_WeatherManager_o *)__this_11,pMVar28);
        pSStack_d0 = (System_String_o *)0x4073169;
        Weather_WeatherManager__SyncWeather((Weather_WeatherManager_o *)__this_11,pMVar28);
        *(undefined1 *)((long)__this_11 + 0x7c) = 0;
        *(float *)((long)__this_11 + 0x8c) = 5.0;
      }
      return;
    }
    pSStack_d0 = (System_String_o *)0x407321f;
    il2cpp_runtime_helper_022fefe0(lVar22);
  }
  pSStack_d0 = (System_String_o *)0x407323a;
  __this_10.fields._index = in_stack_ffffffffffffff40;
  __this_10.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff38;
  __this_10.fields._version = (int32_t)fVar31;
  __this_10.fields._current._0_4_ = uVar36;
  __this_10.fields._current._4_4_ = uVar37;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_10,(MethodInfo_321A1C0 *)&stack0xffffffffffffff48);
  pSStack_d0 = (System_String_o *)0x4073247;
  _Unwind_Resume(auVar33._0_8_);
}


// Weather.WeatherManager$$OnPlayerEnteredRoom
// il2cpp: void Weather_WeatherManager__OnPlayerEnteredRoom (Weather_WeatherManager_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x40743b0

void Weather_WeatherManager__OnPlayerEnteredRoom
               (Weather_WeatherManager_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  Utility_Algorithms_CompressionAlgorithm_o *pUVar1;
  Weather_WeatherManager_o *__this_01;
  void *pvVar2;
  char cVar3;
  uint16_t uVar4;
  bool_conflict bVar5;
  System_Object_array *parameters;
  System_String_o *pSVar6;
  System_Byte_array *pSVar7;
  long lVar8;
  Il2CppObject *pIVar9;
  System_String_o **__this_02;
  Weather_WeatherManager_o *pWVar10;
  System_String_array *parts;
  UnityEngine_Material_o *value;
  System_Byte_array *pSVar11;
  System_Byte_array *pSVar12;
  System_Collections_IEnumerator_o *routine;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this_03;
  System_Collections_Generic_Dictionary_int__float__o *pSVar13;
  Settings_WeatherSet_o *pSVar14;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_c *__this_04;
  System_Collections_Generic_List_T__o *__this_05;
  System_Collections_Generic_Dictionary_object__object__o *pSVar15;
  MethodInfo_3105020 **in_RCX;
  System_Byte_array *__this_06;
  System_Byte_array *targetWeatherJson;
  System_Byte_array *extraout_RDX;
  System_Byte_array *startWeatherJson;
  System_Byte_array *pSVar16;
  System_Byte_array *currentWeatherJson;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this_07;
  MethodInfo *in_R8;
  MethodInfo *pMVar17;
  System_Collections_Generic_Dictionary_int__float__o *in_R9;
  float fVar18;
  MethodInfo *in_stack_ffffffffffffff38;
  
  if (g_data_057ac310 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&"SetWeatherRPC");
    g_data_057ac310 = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_040743dd;
label_04074443:
    il2cpp_runtime_helper_02337ed0();
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar5;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_04074443;
label_040743dd:
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar5;
  }
  if (cVar3 == '\0') {
    return;
  }
  __this_00 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = (__this->fields)._currentWeather;
  if (pSVar14 == (Settings_WeatherSet_o *)0x0) {
label_04074730:
    il2cpp_runtime_helper_022b2c90();
label_04074735:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    pUVar1 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
    in_RCX = (MethodInfo_3105020 **)pSVar14->klass;
    pSVar6 = (System_String_o *)(**(code **)(((System_Byte_array *)in_RCX)->m_Items + 0x188))(pSVar14);
    if (pUVar1 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) goto label_04074730;
    in_RCX = (MethodInfo_3105020 **)0x0;
    pSVar7 = Utility_Algorithms_CompressionAlgorithm__CompressString(pUVar1,pSVar6,1,(MethodInfo *)0x0);
    if (parameters == (System_Object_array *)0x0) goto label_04074730;
    if ((pSVar7 != (System_Byte_array *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pSVar7), lVar8 == 0))
    goto label_0407473a;
    if ((int)parameters->max_length == 0) goto label_04074735;
    parameters->m_Items[0] = &pSVar7->obj;
    il2cpp_runtime_helper_022b4080(parameters->m_Items);
    pSVar14 = (__this->fields)._startWeather;
    if (pSVar14 == (Settings_WeatherSet_o *)0x0) goto label_04074730;
    pUVar1 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
    pSVar6 = (System_String_o *)(*(pSVar14->klass->vtable)._7_SerializeToJsonString.methodPtr)();
    if (pUVar1 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) goto label_04074730;
    in_RCX = (MethodInfo_3105020 **)0x0;
    pSVar7 = Utility_Algorithms_CompressionAlgorithm__CompressString(pUVar1,pSVar6,1,(MethodInfo *)0x0);
    if ((pSVar7 != (System_Byte_array *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pSVar7), lVar8 == 0))
    goto label_0407473a;
    if ((uint)parameters->max_length < 2) goto label_04074735;
    parameters->m_Items[1] = &pSVar7->obj;
    il2cpp_runtime_helper_022b4080(parameters->m_Items + 1);
    pSVar14 = (__this->fields)._targetWeather;
    if (pSVar14 == (Settings_WeatherSet_o *)0x0) goto label_04074730;
    pUVar1 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
    pSVar6 = (System_String_o *)(*(pSVar14->klass->vtable)._7_SerializeToJsonString.methodPtr)();
    if (pUVar1 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) goto label_04074730;
    in_RCX = (MethodInfo_3105020 **)0x0;
    pSVar7 = Utility_Algorithms_CompressionAlgorithm__CompressString(pUVar1,pSVar6,1,(MethodInfo *)0x0);
    if ((pSVar7 == (System_Byte_array *)0x0) || (lVar8 = il2cpp_runtime_helper_023051f0(pSVar7), lVar8 != 0)) {
      if (2 < (uint)parameters->max_length) {
        parameters->m_Items[2] = &pSVar7->obj;
        il2cpp_runtime_helper_022b4080(parameters->m_Items + 2);
        pSVar13 = (__this->fields)._targetWeatherStartTimes;
        if ((pSVar13 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) &&
           (lVar8 = il2cpp_runtime_helper_023051f0(pSVar13), lVar8 == 0)) goto label_0407473a;
        if (3 < (uint)parameters->max_length) {
          parameters->m_Items[3] = (Il2CppObject *)pSVar13;
          il2cpp_runtime_helper_022b4080(parameters->m_Items + 3);
          pSVar13 = (__this->fields)._targetWeatherEndTimes;
          if ((pSVar13 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) &&
             (lVar8 = il2cpp_runtime_helper_023051f0(pSVar13), lVar8 == 0)) goto label_0407473a;
          if (4 < (uint)parameters->max_length) {
            parameters->m_Items[4] = (Il2CppObject *)pSVar13;
            il2cpp_runtime_helper_022b4080(parameters->m_Items + 4,pSVar13);
            pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8);
            if ((pIVar9 != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pIVar9), lVar8 == 0))
            goto label_0407473a;
            if (5 < (uint)parameters->max_length) {
              parameters->m_Items[5] = pIVar9;
              il2cpp_runtime_helper_022b4080(parameters->m_Items + 5);
              if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
                Photon_Pun_PhotonView__RPC_3efa220(__this_00,"SetWeatherRPC",player,parameters,(MethodInfo *)0x0)
                ;
                return;
              }
              goto label_04074730;
            }
          }
        }
      }
      goto label_04074735;
    }
  }
label_0407473a:
  __this_02 = (System_String_o **)il2cpp_runtime_helper_0231b270();
  pWVar10 = (Weather_WeatherManager_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ac314 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_EnumToStringArray_SkyboxCustomSkinPartId);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    __this_02 = &"1";
    il2cpp_runtime_helper_023445d0();
    g_data_057ac314 = '\x01';
  }
  pSVar7 = __this_06;
  if (pWVar10 == (Weather_WeatherManager_o *)0x0) goto label_04074a5f;
  uVar4 = System_String__get_Chars
                    ((System_String_o *)pWVar10,*(int *)&(pWVar10->fields).m_CachedPtr + -1,(MethodInfo *)0x0)
  ;
  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = (System_String_o **)(ulong)uVar4;
  bVar5 = System_Char__IsDigit(uVar4,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    __this_02 = (System_String_o **)pWVar10;
    pWVar10 = (Weather_WeatherManager_o *)
              System_String__Concat_3ae5ba0((System_String_o *)pWVar10,"1",(MethodInfo *)0x0);
  }
  if (__this_06 == (System_Byte_array *)0x0) goto label_04074a5f;
  uVar4 = System_String__get_Chars
                    ((System_String_o *)__this_06,*(int *)&__this_06->bounds + -1,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = System_Char__IsDigit(uVar4,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pSVar7 = (System_Byte_array *)
             System_String__Concat_3ae5ba0((System_String_o *)__this_06,"1",(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) != 0) goto label_04074889;
label_040748c9:
    il2cpp_runtime_helper_02337ed0();
    pSVar15 = *(System_Collections_Generic_Dictionary_object__object__o **)
               ((long)TypeInfo_WeatherManager[1].monitor + 0x10);
    __this_02 = (System_String_o **)0x0;
    if (pSVar15 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04074a5f;
  }
  else {
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) == 0) goto label_040748c9;
label_04074889:
    pSVar15 = *(System_Collections_Generic_Dictionary_object__object__o **)
               ((long)TypeInfo_WeatherManager[1].monitor + 0x10);
    if (pSVar15 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_02 = (System_String_o **)0x0;
      goto label_04074a5f;
    }
  }
  bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar15,(Il2CppObject *)pWVar10,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar5 == '\0') {
    return;
  }
  if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = *(System_String_o ***)((long)TypeInfo_WeatherManager[1].monitor + 0x10);
  if (((Weather_WeatherManager_o *)__this_02 != (Weather_WeatherManager_o *)0x0) &&
     (pSVar15 = (System_Collections_Generic_Dictionary_object__object__o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                           (Il2CppObject *)pWVar10,MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item),
     pSVar15 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    in_RCX = &MethodInfo_Boolean_ContainsKey;
    bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar15,&pSVar7->obj,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      parts = Utility_Util__EnumToStringArray_Int32Enum_(MethodInfo_String_EnumToStringArray_SkyboxCustomSkinPartId);
      if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      in_RCX = (MethodInfo_3105020 **)pSVar7;
      value = Weather_WeatherManager__CreateBlendedSkybox
                        (*(UnityEngine_Shader_o **)((long)TypeInfo_WeatherManager[1].monitor + 0x18),parts,
                         (System_String_o *)pWVar10,(System_String_o *)pSVar7,in_R8);
      __this_02 = *(System_String_o ***)((long)TypeInfo_WeatherManager[1].monitor + 0x10);
      if (((Weather_WeatherManager_o *)__this_02 == (Weather_WeatherManager_o *)0x0) ||
         (pSVar15 = (System_Collections_Generic_Dictionary_object__object__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                               (Il2CppObject *)pWVar10,MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item),
         pSVar15 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_04074a5f;
      in_RCX = (MethodInfo_3105020 **)MethodInfo_Void_Add;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar15,&pSVar7->obj,(Il2CppObject *)value,(MethodInfo_3104E10 *)MethodInfo_Void_Add);
    }
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = *(System_String_o ***)((long)TypeInfo_WeatherManager[1].monitor + 0x10);
    if (((Weather_WeatherManager_o *)__this_02 != (Weather_WeatherManager_o *)0x0) &&
       (pSVar15 = (System_Collections_Generic_Dictionary_object__object__o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                             (Il2CppObject *)pWVar10,MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item),
       pSVar15 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      System_Collections_Generic_Dictionary_object__object___get_Item(pSVar15,&pSVar7->obj,MethodInfo_Material_get_Item);
      return;
    }
  }
label_04074a5f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac317 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_02 = (System_String_o **)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac317 = '\x01';
  }
  lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x98) != 0)) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac313 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndApplySkybox_d__51);
    g_data_057ac313 = '\x01';
  }
  pSVar11 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndApplySkybox_d__51);
  startWeatherJson = (System_Byte_array *)0x0;
  currentWeatherJson = pSVar11;
  Weather_WeatherManager__WaitAndApplySkybox_d__51___ctor
            ((Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)pSVar11,0,(MethodInfo *)0x0);
  if (pSVar11 != (System_Byte_array *)0x0) {
    *(System_String_o ***)pSVar11->m_Items = __this_02;
    il2cpp_runtime_helper_022b4080(pSVar11->m_Items,__this_02);
    return;
  }
  fVar18 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar11 = (System_Byte_array *)in_RCX;
  pSVar16 = startWeatherJson;
  pMVar17 = in_R8;
  if (g_data_057ac315 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac315 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pWVar10 = (Weather_WeatherManager_o *)0x0;
    pSVar12 = (System_Byte_array *)Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  else {
    pWVar10 = (Weather_WeatherManager_o *)0x0;
    pSVar12 = (System_Byte_array *)Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  if (pSVar7 != pSVar12) {
    return;
  }
  lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x98), lVar8 != 0)) {
    if (*(int *)(lVar8 + 0x14) == 0) {
      return;
    }
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = *(Weather_WeatherManager_o **)TypeInfo_WeatherManager[1].monitor;
    pWVar10 = TypeInfo_WeatherManager;
    if (__this_01 != (Weather_WeatherManager_o *)0x0) {
      routine = Weather_WeatherManager__WaitAndFinishOnSetWeather
                          (__this_01,currentWeatherJson,startWeatherJson,targetWeatherJson,
                           (System_Collections_Generic_Dictionary_int__float__o *)in_RCX,
                           (System_Collections_Generic_Dictionary_int__float__o *)in_R8,fVar18,
                           in_stack_ffffffffffffff38);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this_01,routine,(MethodInfo *)0x0);
      return;
    }
  }
  fVar18 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac316 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishOnSetWeather_d__54);
    g_data_057ac316 = '\x01';
  }
  __this_03 = (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishOnSetWeather_d__54);
  __this_07 = __this_03;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54___ctor(__this_03,0,(MethodInfo *)0x0);
  if (__this_03 == (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac318 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Weather_WeatherEffect_Weather_BaseWeatherEf);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_System_Single);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Weather_WeatherScheduleRunner_System_Single);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_float);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_WeatherEffect_BaseWeatherEffect);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_WeatherScheduleRunner_float);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Weather_WeatherEffect);
      il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_WeatherEffect);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherScheduleRunner);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Camera);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherEffect);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_WeatherScheduleRunner);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_WeatherEffect);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_Camera);
      il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
      g_data_057ac318 = '\x01';
    }
    pSVar7 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_WeatherEffect);
    System_Collections_Generic_HashSet_Int32Enum____ctor
              ((System_Collections_Generic_HashSet_T__o *)pSVar7,MethodInfo_HashSet_1_Weather_WeatherEffect);
    if (pSVar7 == (System_Byte_array *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac319 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Un);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Material);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Dictionary_string_Material);
        il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
        g_data_057ac319 = '\x01';
      }
      pSVar15 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Material);
      System_Collections_Generic_Dictionary_object__object____ctor(pSVar15,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
      pvVar2 = TypeInfo_WeatherManager[1].monitor;
      *(System_Collections_Generic_Dictionary_object__object__o **)((long)pvVar2 + 8) = pSVar15;
      il2cpp_runtime_helper_022b4080((long)pvVar2 + 8,pSVar15);
      pSVar15 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Dictionary_string_Material);
      System_Collections_Generic_Dictionary_object__object____ctor(pSVar15,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Un);
      pvVar2 = TypeInfo_WeatherManager[1].monitor;
      *(System_Collections_Generic_Dictionary_object__object__o **)((long)pvVar2 + 0x10) = pSVar15;
      il2cpp_runtime_helper_022b4080((long)pvVar2 + 0x10,pSVar15);
      return;
    }
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pSVar7,1,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pSVar7,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pSVar7,7,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pSVar7,5,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pSVar7,2,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pSVar7,3,MethodInfo_Boolean_Add);
    (__this_07->fields).currentWeatherJson = pSVar7;
    il2cpp_runtime_helper_022b4080(&(__this_07->fields).currentWeatherJson,pSVar7);
    pSVar7 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_WeatherScheduleRunner);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar7,MethodInfo_List_1_Weather_WeatherScheduleRunner);
    (__this_07->fields).startWeatherJson = pSVar7;
    il2cpp_runtime_helper_022b4080(&(__this_07->fields).startWeatherJson,pSVar7);
    pSVar7 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Camera);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar7,MethodInfo_List_1_UnityEngine_Camera);
    (__this_07->fields).targetWeatherJson = pSVar7;
    il2cpp_runtime_helper_022b4080(&(__this_07->fields).targetWeatherJson,pSVar7);
    pSVar13 = (System_Collections_Generic_Dictionary_int__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_WeatherEffect_BaseWeatherEffect);
    System_Collections_Generic_Dictionary_Int32Enum__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13,MethodInfo_Dictionary_2_Weather_WeatherEffect_Weather_BaseWeatherEf);
    (__this_07->fields).targetWeatherStartTimes = pSVar13;
    il2cpp_runtime_helper_022b4080(&(__this_07->fields).targetWeatherStartTimes);
    pSVar14 = (Settings_WeatherSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
    Settings_WeatherSet___ctor(pSVar14,(MethodInfo *)0x0);
    (__this_07->fields).targetWeatherEndTimes = (System_Collections_Generic_Dictionary_int__float__o *)pSVar14
    ;
    il2cpp_runtime_helper_022b4080(&(__this_07->fields).targetWeatherEndTimes);
    pSVar14 = (Settings_WeatherSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
    Settings_WeatherSet___ctor(pSVar14,(MethodInfo *)0x0);
    *(Settings_WeatherSet_o **)&(__this_07->fields).currentTime = pSVar14;
    il2cpp_runtime_helper_022b4080(&(__this_07->fields).currentTime);
    __this_04 = (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_c *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
    Settings_WeatherSet___ctor((Settings_WeatherSet_o *)__this_04,(MethodInfo *)0x0);
    __this_07[1].klass = __this_04;
    il2cpp_runtime_helper_022b4080(__this_07 + 1,__this_04);
    pSVar13 = (System_Collections_Generic_Dictionary_int__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_float);
    System_Collections_Generic_Dictionary_int__float____ctor(pSVar13,MethodInfo_Dictionary_2_System_Int32_System_Single);
    __this_07[1].monitor = pSVar13;
    il2cpp_runtime_helper_022b4080(&__this_07[1].monitor,pSVar13);
    pSVar13 = (System_Collections_Generic_Dictionary_int__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_float);
    System_Collections_Generic_Dictionary_int__float____ctor(pSVar13,MethodInfo_Dictionary_2_System_Int32_System_Single);
    *(System_Collections_Generic_Dictionary_int__float__o **)&__this_07[1].fields = pSVar13;
    il2cpp_runtime_helper_022b4080(&__this_07[1].fields,pSVar13);
    __this_05 = (System_Collections_Generic_List_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_WeatherEffect);
    System_Collections_Generic_List_Int32Enum____ctor(__this_05,MethodInfo_List_1_Weather_WeatherEffect);
    __this_07[1].fields.__2__current = (Il2CppObject *)__this_05;
    il2cpp_runtime_helper_022b4080(&__this_07[1].fields.__2__current,__this_05);
    pSVar7 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_WeatherScheduleRunner_float);
    System_Collections_Generic_Dictionary_object__float____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,MethodInfo_Dictionary_2_Weather_WeatherScheduleRunner_System_Single);
    __this_07[1].fields.currentWeatherJson = pSVar7;
    il2cpp_runtime_helper_022b4080(&__this_07[1].fields.currentWeatherJson);
    Photon_Pun_MonoBehaviourPunCallbacks___ctor
              ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this_07,(MethodInfo *)0x0);
    return;
  }
  (__this_03->fields).__4__this = pWVar10;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields).__4__this,pWVar10);
  (__this_03->fields).currentWeatherJson = pSVar16;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields).currentWeatherJson,pSVar16);
  (__this_03->fields).startWeatherJson = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields).startWeatherJson,extraout_RDX);
  (__this_03->fields).targetWeatherJson = pSVar11;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields).targetWeatherJson,pSVar11);
  (__this_03->fields).targetWeatherStartTimes = (System_Collections_Generic_Dictionary_int__float__o *)pMVar17
  ;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields).targetWeatherStartTimes,pMVar17);
  (__this_03->fields).targetWeatherEndTimes = in_R9;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields).targetWeatherEndTimes);
  (__this_03->fields).currentTime = fVar18;
  return;
}


// Weather.WeatherManager$$LerpCurrentWeatherToTarget
// il2cpp: void Weather_WeatherManager__LerpCurrentWeatherToTarget (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x4073260

void Weather_WeatherManager__LerpCurrentWeatherToTarget(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code cVar4;
  byte bVar5;
  uint uVar6;
  System_Collections_Generic_Dictionary_int__float__o *pSVar7;
  System_Int32_array *pSVar8;
  Settings_WeatherSet_o *pSVar9;
  System_Collections_Specialized_OrderedDictionary_o *pSVar10;
  System_Collections_Generic_List_T__o *__this_00;
  System_Object_array *pSVar11;
  Settings_StringSetting_o *pSVar12;
  MethodInfo *method_00;
  long lVar13;
  System_Collections_Generic_List_Enumerator_int__o __this_01;
  System_Collections_Generic_List_Enumerator_int__o __this_02;
  System_Collections_Generic_List_Enumerator_int__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_06;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_07;
  bool_conflict bVar14;
  System_Collections_Generic_List_int__o *__this_08;
  System_String_o *key;
  ulong uVar15;
  Utility_Color255_o *value;
  long *plVar16;
  Weather_WeatherManager_o *__this_09;
  MethodInfo_3215510 *unaff_R12;
  Settings_TypedSetting_Vector3__o *unaff_R13;
  Il2CppObject *unaff_R15;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [12];
  UnityEngine_Vector3_o value_00;
  undefined1 in_stack_ffffffffffffff58 [12];
  float in_stack_ffffffffffffff64;
  undefined1 auVar22 [8];
  Il2CppType *pIVar23;
  int32_t key_00;
  int32_t iVar24;
  float fVar25;
  System_Enum_c *local_78;
  Il2CppType *pIStack_70;
  int32_t local_68;
  float fStack_64;
  _union_231569 _Stack_60;
  undefined1 local_50 [8];
  Il2CppType *pIStack_48;
  int32_t local_40;
  float fStack_3c;
  _union_231569 _Stack_38;
  
  if (g_data_057ac311 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_Int32_System);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_Int32_System_Single_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Int32_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3Setting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac311 = '\x01';
  }
  local_68 = 0;
  fStack_64 = 0.0;
  _Stack_60.genericMethod = (Il2CppObject *)0x0;
  local_78 = (System_Enum_c *)0x0;
  pIStack_70 = (Il2CppType *)0x0;
  auVar22 = (undefined1  [8])0x0;
  pIVar23 = (Il2CppType *)0x0;
  key_00 = 0;
  fVar25 = 0.0;
  __this_08 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
  System_Collections_Generic_List_int____ctor(__this_08,MethodInfo_List_1_System_Int32);
  pSVar7 = (__this->fields)._targetWeatherEndTimes;
  if (pSVar7 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_04073ea4;
  System_Collections_Generic_Dictionary_int__float___GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_50,pSVar7,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_Int32_System)
  ;
  local_68 = local_40;
  fStack_64 = fStack_3c;
  _Stack_60 = _Stack_38;
  local_78 = (System_Enum_c *)local_50;
  pIStack_70 = pIStack_48;
  do {
    __this_04.fields._index = (int32_t)in_stack_ffffffffffffff64;
    __this_04.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff58._0_8_;
    __this_04.fields._version = in_stack_ffffffffffffff58._8_4_;
    __this_04.fields._current.fields.key = (Il2CppObject *)auVar22;
    __this_04.fields._current.fields.value = (Il2CppObject *)pIVar23;
    __this_04.fields._getEnumeratorRetType = key_00;
    __this_04.fields._36_4_ = fVar25;
    bVar14 = System_Collections_Generic_Dictionary_Enumerator_int__float___MoveNext
                       (__this_04,(MethodInfo_3244F20 *)&local_78);
    iVar24 = local_68;
    lVar13 = MethodInfo_Void_Add;
    if ((char)bVar14 == '\0') {
      __this_05.fields._index = (int32_t)in_stack_ffffffffffffff64;
      __this_05.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff58._0_8_;
      __this_05.fields._version = in_stack_ffffffffffffff58._8_4_;
      __this_05.fields._current.fields.key = (Il2CppObject *)auVar22;
      __this_05.fields._current.fields.value = (Il2CppObject *)pIVar23;
      __this_05.fields._getEnumeratorRetType = key_00;
      __this_05.fields._36_4_ = fVar25;
      System_Collections_Generic_Dictionary_Enumerator_int__float___Dispose
                (__this_05,(MethodInfo_3245030 *)&local_78);
      goto label_04073cd9;
    }
    if (fStack_64 <= (__this->fields)._currentTime) {
      if (__this_08 == (System_Collections_Generic_List_int__o *)0x0) goto label_04073e3d;
      piVar1 = &(__this_08->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar8 = (__this_08->fields)._items;
      if (pSVar8 == (System_Int32_array *)0x0) goto label_04073e38;
      uVar6 = (__this_08->fields)._size;
      if (uVar6 < (uint)pSVar8->max_length) {
        (__this_08->fields)._size = uVar6 + 1;
        pSVar8->m_Items[(int)uVar6] = local_68;
        in_stack_ffffffffffffff64 = 1.0;
      }
      else {
        System_Collections_Generic_List_int___AddWithResize
                  (__this_08,local_68,
                   *(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        in_stack_ffffffffffffff64 = 1.0;
      }
    }
    else {
      pSVar7 = (__this->fields)._targetWeatherStartTimes;
      in_stack_ffffffffffffff64 = fStack_64;
      if (pSVar7 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_04073e47;
      fVar18 = fStack_64;
      fVar17 = System_Collections_Generic_Dictionary_int__float___get_Item(pSVar7,local_68,MethodInfo_Single_get_Item);
      fVar18 = fVar18 - fVar17;
      if (fVar18 <= 1.0) {
        fVar18 = 1.0;
      }
      fVar18 = ((__this->fields)._currentTime - fVar17) / fVar18;
      in_stack_ffffffffffffff64 = 0.0;
      if ((0.0 <= fVar18) && (in_stack_ffffffffffffff64 = 1.0, fVar18 <= 1.0)) {
        in_stack_ffffffffffffff64 = fVar18;
      }
    }
    local_50 = (undefined1  [8])TypeInfo_WeatherEffect;
    pIStack_48 = (Il2CppType *)0xffffffffffffffff;
    local_40 = iVar24;
    key = System_Enum__ToString((System_Enum_o *)local_50,(MethodInfo *)0x0);
    pSVar9 = (__this->fields)._startWeather;
    if (pSVar9 == (Settings_WeatherSet_o *)0x0) goto label_04073dc0;
    pSVar10 = (pSVar9->fields).Settings;
    if (pSVar10 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_04073dc5;
    unaff_R12 = (MethodInfo_3215510 *)
                System_Collections_Specialized_OrderedDictionary__get_Item
                          (pSVar10,(Il2CppObject *)key,(MethodInfo *)0x0);
    if (unaff_R12 != (MethodInfo_3215510 *)0x0) {
      cVar4 = (code)(TypeInfo_BaseSetting->_2).naturalAligment;
      if (((byte)cVar4 <= (byte)unaff_R12->methodPointer[0x130]) &&
         (*(Il2CppClass **)(*(long *)(unaff_R12->methodPointer + 200) + -8 + (ulong)(byte)cVar4 * 8) ==
          TypeInfo_BaseSetting)) goto label_0407362e;
      il2cpp_runtime_helper_022b2fd0(unaff_R12);
label_04073d96:
      il2cpp_runtime_helper_022b2fd0(unaff_R15);
label_04073d9e:
      il2cpp_runtime_helper_022b2fd0(unaff_R13);
      goto label_04073da6;
    }
label_0407362e:
    pSVar9 = (__this->fields)._currentWeather;
    if (pSVar9 == (Settings_WeatherSet_o *)0x0) goto label_04073dca;
    pSVar10 = (pSVar9->fields).Settings;
    if (pSVar10 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_04073dcf;
    unaff_R13 = (Settings_TypedSetting_Vector3__o *)
                System_Collections_Specialized_OrderedDictionary__get_Item
                          (pSVar10,(Il2CppObject *)key,(MethodInfo *)0x0);
    if (unaff_R13 != (Settings_TypedSetting_Vector3__o *)0x0) {
      bVar5 = (TypeInfo_BaseSetting->_2).naturalAligment;
      if (((unaff_R13->klass->_2).naturalAligment < bVar5) ||
         ((unaff_R13->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_BaseSetting)) goto label_04073d9e;
    }
    pSVar9 = (__this->fields)._targetWeather;
    if (pSVar9 == (Settings_WeatherSet_o *)0x0) goto label_04073dd4;
    __this_09 = (Weather_WeatherManager_o *)(pSVar9->fields).Settings;
    if (__this_09 == (Weather_WeatherManager_o *)0x0) goto label_04073dd9;
    unaff_R15 = System_Collections_Specialized_OrderedDictionary__get_Item
                          ((System_Collections_Specialized_OrderedDictionary_o *)__this_09,(Il2CppObject *)key
                           ,(MethodInfo *)0x0);
    if (unaff_R15 != (Il2CppObject *)0x0) {
      bVar5 = (TypeInfo_BaseSetting->_2).naturalAligment;
      if (((unaff_R15->klass->_2).naturalAligment < bVar5) ||
         ((unaff_R15->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_BaseSetting)) goto label_04073d96;
    }
    switch(iVar24) {
    case 1:
    case 4:
    case 6:
    case 7:
    case 9:
      if (unaff_R12 == (MethodInfo_3215510 *)0x0) goto label_04073e56;
      cVar4 = (code)(TypeInfo_ColorSetting->_2).naturalAligment;
      if ((byte)unaff_R12->methodPointer[0x130] < (byte)cVar4) goto label_04073e10;
      if (*(Il2CppClass **)(*(long *)(unaff_R12->methodPointer + 200) + -8 + (ulong)(byte)cVar4 * 8) !=
          TypeInfo_ColorSetting) goto label_04073e10;
      cVar4 = (code)(TypeInfo_ColorSetting->_2).naturalAligment;
      uVar15 = (ulong)(byte)cVar4;
      if ((byte)unaff_R12->methodPointer[0x130] < (byte)cVar4) goto label_04073e18;
      if (*(Il2CppClass **)(*(long *)(unaff_R12->methodPointer + 200) + -8 + uVar15 * 8) != TypeInfo_ColorSetting)
      goto label_04073e18;
      if (unaff_R15 == (Il2CppObject *)0x0) goto label_04073e5b;
      if ((unaff_R15->klass->_2).naturalAligment < (byte)cVar4) goto label_04073e20;
      if ((unaff_R15->klass->_2).typeHierarchy[uVar15 - 1] != TypeInfo_ColorSetting) goto label_04073e20;
      if ((unaff_R15->klass->_2).naturalAligment < (byte)cVar4) goto label_04073e08;
      if ((unaff_R15->klass->_2).typeHierarchy[uVar15 - 1] != TypeInfo_ColorSetting) goto label_04073e08;
      value = Utility_Color255__Lerp
                        ((Utility_Color255_o *)unaff_R12->name,unaff_R15[1].monitor,in_stack_ffffffffffffff64,
                         (MethodInfo *)0x0);
      if (unaff_R13 == (Settings_TypedSetting_Vector3__o *)0x0) goto label_04073e60;
      bVar5 = (TypeInfo_ColorSetting->_2).naturalAligment;
      if ((unaff_R13->klass->_2).naturalAligment < bVar5) goto label_04073e30;
      if ((unaff_R13->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_ColorSetting) goto label_04073e30;
      bVar5 = (TypeInfo_ColorSetting->_2).naturalAligment;
      if ((unaff_R13->klass->_2).naturalAligment < bVar5) goto label_04073e28;
      if ((unaff_R13->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_ColorSetting) goto label_04073e28;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)unaff_R13,(Il2CppObject *)value,MethodInfo_Void_set_Value);
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
      if (unaff_R12 == (MethodInfo_3215510 *)0x0) goto label_04073e4c;
      cVar4 = (code)(TypeInfo_FloatSetting->_2).naturalAligment;
      if ((byte)unaff_R12->methodPointer[0x130] < (byte)cVar4) goto label_04073de8;
      if (*(Il2CppClass **)(*(long *)(unaff_R12->methodPointer + 200) + -8 + (ulong)(byte)cVar4 * 8) !=
          TypeInfo_FloatSetting) goto label_04073de8;
      cVar4 = (code)(TypeInfo_FloatSetting->_2).naturalAligment;
      uVar15 = (ulong)(byte)cVar4;
      if ((byte)unaff_R12->methodPointer[0x130] < (byte)cVar4) goto label_04073e00;
      if (*(Il2CppClass **)(*(long *)(unaff_R12->methodPointer + 200) + -8 + uVar15 * 8) != TypeInfo_FloatSetting)
      goto label_04073e00;
      if (unaff_R15 == (Il2CppObject *)0x0) goto label_04073e51;
      if ((unaff_R15->klass->_2).naturalAligment < (byte)cVar4) goto label_04073db8;
      if ((unaff_R15->klass->_2).typeHierarchy[uVar15 - 1] != TypeInfo_FloatSetting) goto label_04073db8;
      if ((unaff_R15->klass->_2).naturalAligment < (byte)cVar4) goto label_04073df0;
      if ((unaff_R15->klass->_2).typeHierarchy[uVar15 - 1] != TypeInfo_FloatSetting) goto label_04073df0;
      if (unaff_R13 == (Settings_TypedSetting_Vector3__o *)0x0) goto label_04073e42;
      if ((unaff_R13->klass->_2).naturalAligment < (byte)cVar4) goto label_04073df8;
      if ((unaff_R13->klass->_2).typeHierarchy[uVar15 - 1] != TypeInfo_FloatSetting) goto label_04073df8;
      if ((unaff_R13->klass->_2).naturalAligment < (byte)cVar4) goto label_04073db0;
      if ((unaff_R13->klass->_2).typeHierarchy[uVar15 - 1] != TypeInfo_FloatSetting) goto label_04073db0;
      fVar18 = *(float *)((long)&unaff_R12->invoker_method + 4);
      fVar17 = 0.0;
      if (0.0 <= in_stack_ffffffffffffff64) {
        fVar17 = in_stack_ffffffffffffff64;
      }
      Settings_TypedSetting_float___set_Value
                ((Settings_TypedSetting_float__o *)unaff_R13,
                 (*(float *)((long)&unaff_R15[1].klass + 4) - fVar18) * fVar17 + fVar18,MethodInfo_Void_set_Value);
      break;
    case 3:
    case 0xe:
      if (unaff_R12 == (MethodInfo_3215510 *)0x0) goto label_04073e95;
      cVar4 = (code)(TypeInfo_Vector3Setting->_2).naturalAligment;
      if ((byte)unaff_R12->methodPointer[0x130] < (byte)cVar4) goto label_04073e65;
      if (*(Il2CppClass **)(*(long *)(unaff_R12->methodPointer + 200) + -8 + (ulong)(byte)cVar4 * 8) !=
          TypeInfo_Vector3Setting) goto label_04073e65;
      cVar4 = (code)(TypeInfo_Vector3Setting->_2).naturalAligment;
      uVar15 = (ulong)(byte)cVar4;
      if ((byte)unaff_R12->methodPointer[0x130] < (byte)cVar4) goto label_04073e75;
      if (*(Il2CppClass **)(*(long *)(unaff_R12->methodPointer + 200) + -8 + uVar15 * 8) != TypeInfo_Vector3Setting)
      goto label_04073e75;
      if (unaff_R15 == (Il2CppObject *)0x0) goto label_04073e9a;
      if ((unaff_R15->klass->_2).naturalAligment < (byte)cVar4) goto label_04073e6d;
      if ((unaff_R15->klass->_2).typeHierarchy[uVar15 - 1] != TypeInfo_Vector3Setting) goto label_04073e6d;
      if ((unaff_R15->klass->_2).naturalAligment < (byte)cVar4) goto label_04073e85;
      if ((unaff_R15->klass->_2).typeHierarchy[uVar15 - 1] != TypeInfo_Vector3Setting) goto label_04073e85;
      if (unaff_R13 == (Settings_TypedSetting_Vector3__o *)0x0) goto label_04073e9f;
      if ((unaff_R13->klass->_2).naturalAligment < (byte)cVar4) goto label_04073e7d;
      if ((unaff_R13->klass->_2).typeHierarchy[uVar15 - 1] != TypeInfo_Vector3Setting) goto label_04073e7d;
      if ((unaff_R13->klass->_2).naturalAligment < (byte)cVar4) goto label_04073e8d;
      if ((unaff_R13->klass->_2).typeHierarchy[uVar15 - 1] != TypeInfo_Vector3Setting) goto label_04073e8d;
      uVar2 = *(undefined8 *)((long)&unaff_R12->name + 4);
      fVar18 = *(float *)((long)&unaff_R12->klass + 4);
      uVar3 = *(undefined8 *)((long)&unaff_R15[1].monitor + 4);
      fVar17 = 0.0;
      if (0.0 <= in_stack_ffffffffffffff64) {
        fVar17 = in_stack_ffffffffffffff64;
      }
      fVar19 = (float)uVar2;
      fVar20 = (float)((ulong)uVar2 >> 0x20);
      value_00.fields.x = fVar17 * ((float)uVar3 - fVar19) + fVar19;
      value_00.fields.y = fVar17 * ((float)((ulong)uVar3 >> 0x20) - fVar20) + fVar20;
      value_00.fields.z = (*(float *)((long)&unaff_R15[2].klass + 4) - fVar18) * fVar17 + fVar18;
      Settings_TypedSetting_Vector3___set_Value(unaff_R13,value_00,MethodInfo_Void_set_Value);
      break;
    case 5:
      pSVar9 = (__this->fields)._currentWeather;
      if (pSVar9 == (Settings_WeatherSet_o *)0x0) goto label_04073eb6;
      pSVar12 = (pSVar9->fields).Skybox;
      if (pSVar12 == (Settings_StringSetting_o *)0x0) goto label_04073ecb;
      pSVar9 = (__this->fields)._targetWeather;
      if (pSVar9 == (Settings_WeatherSet_o *)0x0) goto label_04073ed8;
      method_00 = (MethodInfo *)(pSVar9->fields).Skybox;
      if (method_00 == (MethodInfo *)0x0) goto label_04073ee2;
      unaff_R12 = (MethodInfo_3215510 *)
                  Weather_WeatherManager__GetBlendedSkybox
                            (__this_09,(pSVar12->fields)._value,(System_String_o *)method_00->name,method_00);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar14 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        if (1.0 <= in_stack_ffffffffffffff64) {
          if (unaff_R15 == (Il2CppObject *)0x0) goto label_04073ee7;
          bVar5 = (TypeInfo_StringSetting->_2).naturalAligment;
          if ((unaff_R15->klass->_2).naturalAligment < bVar5) goto label_04073ebb;
          if ((unaff_R15->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_StringSetting) goto label_04073ebb;
          bVar5 = (TypeInfo_StringSetting->_2).naturalAligment;
          if ((unaff_R15->klass->_2).naturalAligment < bVar5) goto label_04073ed0;
          if ((unaff_R15->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_StringSetting) goto label_04073ed0;
          if (unaff_R13 == (Settings_TypedSetting_Vector3__o *)0x0) goto label_04073edd;
          if ((unaff_R13->klass->_2).naturalAligment < bVar5) goto label_04073ea9;
          if ((unaff_R13->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_StringSetting) goto label_04073ea9;
          if ((unaff_R13->klass->_2).naturalAligment < bVar5) goto label_04073ec3;
          if ((unaff_R13->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_StringSetting) goto label_04073ec3;
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)unaff_R13,unaff_R15[1].monitor,MethodInfo_Void_set_Value);
        }
        if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac304 == '\0') {
          il2cpp_runtime_helper_023445d0(&"_Blend");
          g_data_057ac304 = '\x01';
        }
        if (unaff_R12 == (MethodInfo_3215510 *)0x0) goto label_04073eb1;
        UnityEngine_Material__SetFloat
                  ((UnityEngine_Material_o *)unaff_R12,"_Blend",in_stack_ffffffffffffff64,
                   (MethodInfo *)0x0);
      }
    }
    lVar13 = MethodInfo_Void_Add;
    __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields)._needApply;
    if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) goto label_04073dde;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar11 = (__this_00->fields)._items;
    if (pSVar11 == (System_Object_array *)0x0) break;
    uVar6 = (__this_00->fields)._size;
    if (uVar6 < (uint)pSVar11->max_length) {
      (__this_00->fields)._size = uVar6 + 1;
      *(int32_t *)((long)pSVar11->m_Items + (long)(int)uVar6 * 4) = iVar24;
    }
    else {
      System_Collections_Generic_List_Int32Enum___AddWithResize
                (__this_00,iVar24,*(MethodInfo_3600FE0 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
      ;
    }
  } while( true );
label_04073de3:
  il2cpp_runtime_helper_022b2c90();
label_04073de8:
  il2cpp_runtime_helper_022b2fd0(unaff_R12);
label_04073df0:
  il2cpp_runtime_helper_022b2fd0(unaff_R15);
label_04073df8:
  il2cpp_runtime_helper_022b2fd0(unaff_R13);
label_04073e00:
  il2cpp_runtime_helper_022b2fd0(unaff_R12);
label_04073e08:
  il2cpp_runtime_helper_022b2fd0(unaff_R15);
label_04073e10:
  il2cpp_runtime_helper_022b2fd0(unaff_R12);
label_04073e18:
  il2cpp_runtime_helper_022b2fd0(unaff_R12);
label_04073e20:
  il2cpp_runtime_helper_022b2fd0(unaff_R15);
label_04073e28:
  il2cpp_runtime_helper_022b2fd0(unaff_R13);
label_04073e30:
  il2cpp_runtime_helper_022b2fd0(unaff_R13);
label_04073e38:
  il2cpp_runtime_helper_022b2c90();
label_04073e3d:
  il2cpp_runtime_helper_022b2c90();
label_04073e42:
  il2cpp_runtime_helper_022b2c90();
label_04073e47:
  il2cpp_runtime_helper_022b2c90();
label_04073e4c:
  il2cpp_runtime_helper_022b2c90();
label_04073e51:
  il2cpp_runtime_helper_022b2c90();
label_04073e56:
  il2cpp_runtime_helper_022b2c90();
label_04073e5b:
  il2cpp_runtime_helper_022b2c90();
label_04073e60:
  il2cpp_runtime_helper_022b2c90();
label_04073e65:
  il2cpp_runtime_helper_022b2fd0(unaff_R12);
label_04073e6d:
  il2cpp_runtime_helper_022b2fd0(unaff_R15);
label_04073e75:
  il2cpp_runtime_helper_022b2fd0(unaff_R12);
label_04073e7d:
  il2cpp_runtime_helper_022b2fd0(unaff_R13);
label_04073e85:
  il2cpp_runtime_helper_022b2fd0(unaff_R15);
label_04073e8d:
  il2cpp_runtime_helper_022b2fd0(unaff_R13);
label_04073e95:
  il2cpp_runtime_helper_022b2c90();
label_04073e9a:
  il2cpp_runtime_helper_022b2c90();
label_04073e9f:
  il2cpp_runtime_helper_022b2c90();
label_04073ea4:
  do {
    il2cpp_runtime_helper_022b2c90();
label_04073ea9:
    il2cpp_runtime_helper_022b2fd0(unaff_R13);
label_04073eb1:
    il2cpp_runtime_helper_022b2c90();
label_04073eb6:
    il2cpp_runtime_helper_022b2c90();
label_04073ebb:
    il2cpp_runtime_helper_022b2fd0(unaff_R15);
label_04073ec3:
    il2cpp_runtime_helper_022b2fd0(unaff_R13);
label_04073ecb:
    il2cpp_runtime_helper_022b2c90();
label_04073ed0:
    il2cpp_runtime_helper_022b2fd0(unaff_R15);
label_04073ed8:
    il2cpp_runtime_helper_022b2c90();
label_04073edd:
    il2cpp_runtime_helper_022b2c90();
label_04073ee2:
    il2cpp_runtime_helper_022b2c90();
label_04073ee7:
    auVar21 = il2cpp_runtime_helper_022b2c90();
    if (auVar21._8_4_ != 1) {
      __this_07.fields._index = (int32_t)in_stack_ffffffffffffff64;
      __this_07.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff58._0_8_;
      __this_07.fields._version = in_stack_ffffffffffffff58._8_4_;
      __this_07.fields._current.fields.key = (Il2CppObject *)auVar22;
      __this_07.fields._current.fields.value = (Il2CppObject *)pIVar23;
      __this_07.fields._getEnumeratorRetType = key_00;
      __this_07.fields._36_4_ = fVar25;
      System_Collections_Generic_Dictionary_Enumerator_int__float___Dispose
                (__this_07,(MethodInfo_3245030 *)&local_78);
label_04074393:
      _Unwind_Resume(auVar21._0_8_);
    }
    plVar16 = (long *)__cxa_begin_catch(auVar21._0_8_);
    lVar13 = *plVar16;
    __cxa_end_catch();
    __this_06.fields._index = (int32_t)in_stack_ffffffffffffff64;
    __this_06.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff58._0_8_;
    __this_06.fields._version = in_stack_ffffffffffffff58._8_4_;
    __this_06.fields._current.fields.key = (Il2CppObject *)auVar22;
    __this_06.fields._current.fields.value = (Il2CppObject *)pIVar23;
    __this_06.fields._getEnumeratorRetType = key_00;
    __this_06.fields._36_4_ = fVar25;
    System_Collections_Generic_Dictionary_Enumerator_int__float___Dispose
              (__this_06,(MethodInfo_3245030 *)&local_78);
    if (lVar13 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar13);
      __this_03.fields._version = (int32_t)in_stack_ffffffffffffff64;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff58._0_8_;
      __this_03.fields._index = in_stack_ffffffffffffff58._8_4_;
      __this_03.fields._16_8_ = auVar22;
      System_Collections_Generic_List_Enumerator_int___Dispose
                (__this_03,(MethodInfo_3215500 *)&stack0xffffffffffffff68);
      goto label_04074393;
    }
label_04073cd9:
  } while (__this_08 == (System_Collections_Generic_List_int__o *)0x0);
  System_Collections_Generic_List_int___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_50,__this_08,MethodInfo_List_1_T_Enumerator_System_Int32_GetEnumerator);
  unaff_R15 = (Il2CppObject *)&MethodInfo_Boolean_MoveNext;
  unaff_R12 = (MethodInfo_3215510 *)&stack0xffffffffffffff68;
  auVar22 = local_50;
  pIVar23 = pIStack_48;
  key_00 = local_40;
  fVar25 = fStack_3c;
  while( true ) {
    __this_01.fields._version = (int32_t)in_stack_ffffffffffffff64;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff58._0_8_;
    __this_01.fields._index = in_stack_ffffffffffffff58._8_4_;
    __this_01.fields._16_8_ = auVar22;
    bVar14 = System_Collections_Generic_List_Enumerator_int___MoveNext(__this_01,unaff_R12);
    if ((char)bVar14 == '\0') {
      __this_02.fields._version = (int32_t)in_stack_ffffffffffffff64;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff58._0_8_;
      __this_02.fields._index = in_stack_ffffffffffffff58._8_4_;
      __this_02.fields._16_8_ = auVar22;
      System_Collections_Generic_List_Enumerator_int___Dispose
                (__this_02,(MethodInfo_3215500 *)&stack0xffffffffffffff68);
      return;
    }
    pSVar7 = (__this->fields)._targetWeatherStartTimes;
    if (pSVar7 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_04073da6;
    iVar24 = key_00;
    System_Collections_Generic_Dictionary_int__float___Remove(pSVar7,key_00,MethodInfo_Boolean_Remove);
    pSVar7 = (__this->fields)._targetWeatherEndTimes;
    if (pSVar7 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) break;
    System_Collections_Generic_Dictionary_int__float___Remove(pSVar7,key_00,MethodInfo_Boolean_Remove);
    key_00 = iVar24;
  }
  goto label_04073dab;
label_04073da6:
  il2cpp_runtime_helper_022b2c90();
  iVar24 = key_00;
label_04073dab:
  key_00 = iVar24;
  il2cpp_runtime_helper_022b2c90();
label_04073db0:
  il2cpp_runtime_helper_022b2fd0(unaff_R13);
label_04073db8:
  il2cpp_runtime_helper_022b2fd0(unaff_R15);
label_04073dc0:
  il2cpp_runtime_helper_022b2c90();
label_04073dc5:
  il2cpp_runtime_helper_022b2c90();
label_04073dca:
  il2cpp_runtime_helper_022b2c90();
label_04073dcf:
  il2cpp_runtime_helper_022b2c90();
label_04073dd4:
  il2cpp_runtime_helper_022b2c90();
label_04073dd9:
  il2cpp_runtime_helper_022b2c90();
label_04073dde:
  il2cpp_runtime_helper_022b2c90();
  goto label_04073de3;
}


// Weather.WeatherManager$$ApplyCurrentWeather
// il2cpp: void Weather_WeatherManager__ApplyCurrentWeather (Weather_WeatherManager_o* __this, bool firstStart, bool applyAll, const MethodInfo* method);
// 0x4070e50

void Weather_WeatherManager__ApplyCurrentWeather
               (Weather_WeatherManager_o *__this,bool_conflict firstStart,bool_conflict applyAll,
               MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *pSVar10;
  Settings_WeatherSet_o *pSVar11;
  Settings_FloatSetting_o *pSVar12;
  Settings_StringSetting_o *pSVar13;
  MethodInfo *method_00;
  Weather_WeatherManager__WaitAndApplySkybox_d__51_c *pWVar14;
  Settings_ColorSetting_o *pSVar15;
  Utility_Color255_o *pUVar16;
  Settings_Vector3Setting_o *pSVar17;
  System_Collections_Generic_List_object__o *pSVar18;
  System_Collections_Generic_List_WeatherEffect__o *pSVar19;
  undefined1 auVar20 [16];
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_T__o __this_07;
  System_Collections_Generic_List_Enumerator_T__o __this_08;
  System_Collections_Generic_List_Enumerator_T__o __this_09;
  Weather_WeatherManager__WaitAndApplySkybox_d__51_o *__this_10;
  int32_t key;
  bool_conflict bVar21;
  System_Collections_Generic_List_T__o *pSVar22;
  System_String_o *key_00;
  UnityEngine_Component_o *pUVar23;
  UnityEngine_GameObject_o *pUVar24;
  Il2CppObject *pIVar25;
  long *plVar26;
  Weather_WeatherManager__WaitAndApplySkybox_d__51_o *unaff_RBP;
  Weather_WeatherManager_o *__this_11;
  System_Collections_Specialized_OrderedDictionary_o *unaff_R13;
  float fVar27;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar29;
  undefined4 extraout_XMM0_Dd;
  undefined8 uVar30;
  undefined8 extraout_XMM1_Qa;
  undefined1 auVar31 [16];
  UnityEngine_Color_o UVar32;
  UnityEngine_Quaternion_o value;
  undefined1 auVar33 [12];
  UnityEngine_Vector3_o euler;
  float in_stack_ffffffffffffff68;
  undefined4 in_stack_ffffffffffffff6c;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 in_stack_ffffffffffffff78;
  float in_stack_ffffffffffffff7c;
  undefined1 local_80 [8];
  Il2CppType *pIStack_78;
  int32_t local_70;
  undefined4 uStack_6c;
  Weather_WeatherManager_c *local_68;
  Il2CppType *pIStack_60;
  Weather_WeatherManager__WaitAndApplySkybox_d__51_o *local_58;
  Weather_WeatherManager_c *local_48;
  Il2CppType *pIStack_40;
  int32_t local_38;
  
  if (g_data_057ac312 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseWeatherEffect_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Light_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherEffect_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FlashlightWeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Weather_WeatherEffect_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Light_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherEffect_EnumToList_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WindWeatherEffect);
    il2cpp_runtime_helper_023445d0(&"_Tint");
    g_data_057ac312 = '\x01';
  }
  local_48 = (Weather_WeatherManager_c *)0x0;
  pIStack_40 = (Il2CppType *)0x0;
  _local_38 = (Il2CppType **)0x0;
  local_68 = (Weather_WeatherManager_c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)0x0;
  if ((byte)firstStart == 0) {
    if (g_data_057ac317 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      g_data_057ac317 = '\x01';
    }
    lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x98), lVar9 == 0)) goto label_04071fc9;
    if (*(int *)(lVar9 + 0x14) == 0) {
      return;
    }
  }
  if ((char)applyAll != '\0') {
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar22 = Utility_Util__EnumToList_Int32Enum_(MethodInfo_List_1_Weather_WeatherEffect_EnumToList_WeatherEffect);
    (__this->fields)._needApply = (System_Collections_Generic_List_WeatherEffect__o *)pSVar22;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._needApply,pSVar22);
  }
  lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if (((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x98), lVar9 != 0)) &&
     (pSVar22 = (System_Collections_Generic_List_T__o *)(__this->fields)._needApply,
     pSVar22 != (System_Collections_Generic_List_T__o *)0x0)) {
    uVar7 = *(uint *)(lVar9 + 0x14);
    unaff_RBP = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)(ulong)uVar7;
    System_Collections_Generic_List_Int32Enum___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_80,pSVar22,MethodInfo_List_1_T_Enumerator_Weather_WeatherEffect_GetEnumerator);
    _local_38 = (Il2CppType **)CONCAT44(uStack_6c,local_70);
    local_48 = (Weather_WeatherManager_c *)local_80;
    pIStack_40 = pIStack_78;
switchD_0407115d_default:
    __this_11 = (Weather_WeatherManager_o *)&stack0xffffffffffffffb8;
    __this_00.fields._list._4_4_ = in_stack_ffffffffffffff6c;
    __this_00.fields._list._0_4_ = in_stack_ffffffffffffff68;
    __this_00.fields._index = (int)in_stack_ffffffffffffff70;
    __this_00.fields._version = (int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
    __this_00.fields._current._0_4_ = in_stack_ffffffffffffff78;
    __this_00.fields._current._4_4_ = in_stack_ffffffffffffff7c;
    bVar21 = System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext
                       (__this_00,(MethodInfo_3216100 *)__this_11);
    if ((char)bVar21 == '\0') {
      __this_07.fields._list._4_4_ = in_stack_ffffffffffffff6c;
      __this_07.fields._list._0_4_ = in_stack_ffffffffffffff68;
      __this_07.fields._index = (int)in_stack_ffffffffffffff70;
      __this_07.fields._version = (int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
      __this_07.fields._current._0_4_ = in_stack_ffffffffffffff78;
      __this_07.fields._current._4_4_ = in_stack_ffffffffffffff7c;
      System_Collections_Generic_List_Enumerator_Int32Enum___Dispose
                (__this_07,(MethodInfo_32160F0 *)&stack0xffffffffffffffb8);
      goto label_04071f1d;
    }
    key = local_38;
    unaff_RBP = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)((ulong)_local_38 & 0xffffffff);
    if ((uVar7 == 1 & ((byte)firstStart ^ 1)) == 0) goto label_04071147;
    __this_11 = (Weather_WeatherManager_o *)(__this->fields).LowEffects;
    if (__this_11 != (Weather_WeatherManager_o *)0x0) goto code_r0x04071132;
label_04071fbc:
    pIVar25 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
    goto label_04071fc1;
  }
label_04071fc9:
  do {
    il2cpp_runtime_helper_022b2c90();
label_04071fce:
    il2cpp_runtime_helper_022b2c90();
label_04071fd3:
    il2cpp_runtime_helper_022b2c90();
label_04071fd8:
    il2cpp_runtime_helper_022b2c90();
label_04071fdd:
    il2cpp_runtime_helper_022b2c90();
label_04071fe2:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04071fef:
    il2cpp_runtime_helper_022b2c90();
label_04071ff4:
    il2cpp_runtime_helper_022b2c90();
label_04071ff9:
    il2cpp_runtime_helper_022b2c90();
label_04071ffe:
    il2cpp_runtime_helper_022b2c90();
label_04072003:
    il2cpp_runtime_helper_022b2c90();
label_04072008:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(unaff_R13);
label_04072015:
    il2cpp_runtime_helper_022b2c90();
label_0407201a:
    il2cpp_runtime_helper_022b2c90();
label_0407201f:
    il2cpp_runtime_helper_022b2c90();
label_04072024:
    il2cpp_runtime_helper_022b2c90();
label_04072029:
    il2cpp_runtime_helper_022b2c90();
label_0407202e:
    il2cpp_runtime_helper_022b2c90();
label_04072033:
    il2cpp_runtime_helper_022b2c90();
label_04072038:
    il2cpp_runtime_helper_022b2c90();
label_0407203d:
    il2cpp_runtime_helper_022b2c90();
label_04072042:
    il2cpp_runtime_helper_022b2c90();
label_04072047:
    il2cpp_runtime_helper_022b2c90();
label_0407204c:
    il2cpp_runtime_helper_022b2c90();
label_04072051:
    il2cpp_runtime_helper_022b2c90();
label_04072056:
    il2cpp_runtime_helper_022b2c90();
label_0407205b:
    il2cpp_runtime_helper_022b2c90();
label_04072060:
    il2cpp_runtime_helper_022b2c90();
label_04072065:
    il2cpp_runtime_helper_022b2c90();
label_0407206a:
    il2cpp_runtime_helper_022b2c90();
label_0407206f:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(unaff_R13);
label_0407207c:
    il2cpp_runtime_helper_022b2c90();
label_04072081:
    il2cpp_runtime_helper_022b2c90();
label_04072086:
    il2cpp_runtime_helper_022b2c90();
label_0407208b:
    il2cpp_runtime_helper_022b2c90();
label_04072090:
    il2cpp_runtime_helper_022b2c90();
label_04072095:
    il2cpp_runtime_helper_022b2c90();
label_0407209a:
    il2cpp_runtime_helper_022b2c90();
label_0407209f:
    il2cpp_runtime_helper_022b2c90();
label_040720a4:
    il2cpp_runtime_helper_022b2c90();
label_040720a9:
    il2cpp_runtime_helper_022b2c90();
label_040720ae:
    il2cpp_runtime_helper_022b2c90();
label_040720b3:
    il2cpp_runtime_helper_022b2c90();
label_040720b8:
    il2cpp_runtime_helper_022b2c90();
label_040720bd:
    il2cpp_runtime_helper_022b2c90();
label_040720c2:
    il2cpp_runtime_helper_022b2c90();
label_040720c7:
    il2cpp_runtime_helper_022b2c90();
label_040720cc:
    il2cpp_runtime_helper_022b2c90();
label_040720d1:
    il2cpp_runtime_helper_022b2c90();
label_040720d6:
    il2cpp_runtime_helper_022b2c90();
label_040720db:
    il2cpp_runtime_helper_022b2c90();
label_040720e0:
    il2cpp_runtime_helper_022b2c90();
label_040720e5:
    il2cpp_runtime_helper_022b2fd0(unaff_RBP);
label_040720ed:
    il2cpp_runtime_helper_022b2c90();
label_040720f2:
    il2cpp_runtime_helper_022b2c90();
label_040720f7:
    il2cpp_runtime_helper_022b2c90();
label_040720fc:
    fVar2 = (float)il2cpp_runtime_helper_022b2c90();
    uVar30 = extraout_XMM1_Qa;
label_04072101:
    il2cpp_runtime_helper_022b2fd0(fVar2,uVar30,unaff_RBP);
label_04072109:
    il2cpp_runtime_helper_022b2c90();
label_0407210e:
    il2cpp_runtime_helper_022b2c90();
label_04072113:
    il2cpp_runtime_helper_022b2c90();
label_04072118:
    il2cpp_runtime_helper_022b2c90();
label_0407211d:
    il2cpp_runtime_helper_022b2c90();
label_04072122:
    il2cpp_runtime_helper_022b2c90();
label_04072127:
    auVar33 = il2cpp_runtime_helper_022b2c90();
    uVar28 = auVar33._0_4_;
    uVar29 = auVar33._4_4_;
    if (auVar33._8_4_ != 1) {
label_04072468:
      __this_09.fields._list._4_4_ = uVar29;
      __this_09.fields._list._0_4_ = uVar28;
      __this_09.fields._index = (int)in_stack_ffffffffffffff70;
      __this_09.fields._version = (int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
      __this_09.fields._current._0_4_ = in_stack_ffffffffffffff78;
      __this_09.fields._current._4_4_ = in_stack_ffffffffffffff7c;
      System_Collections_Generic_List_Enumerator_Int32Enum___Dispose
                (__this_09,(MethodInfo_32160F0 *)&stack0xffffffffffffffb8);
      _Unwind_Resume(CONCAT44(uVar29,uVar28));
    }
    plVar26 = (long *)__cxa_begin_catch(auVar33._0_8_);
    lVar9 = *plVar26;
    __cxa_end_catch();
    __this_08.fields._list._4_4_ = uVar29;
    __this_08.fields._list._0_4_ = uVar28;
    __this_08.fields._index = (int)in_stack_ffffffffffffff70;
    __this_08.fields._version = (int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
    __this_08.fields._current._0_4_ = in_stack_ffffffffffffff78;
    __this_08.fields._current._4_4_ = in_stack_ffffffffffffff7c;
    System_Collections_Generic_List_Enumerator_Int32Enum___Dispose
              (__this_08,(MethodInfo_32160F0 *)&stack0xffffffffffffffb8);
    unaff_RBP = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)0x0;
    if (lVar9 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar9);
      goto label_04072468;
    }
label_04071f1d:
    pSVar19 = (__this->fields)._needApply;
    if (pSVar19 != (System_Collections_Generic_List_WeatherEffect__o *)0x0) {
      piVar1 = &(pSVar19->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar19->fields)._size = 0;
      return;
    }
  } while( true );
code_r0x04071132:
  bVar21 = System_Collections_Generic_HashSet_Int32Enum___Contains
                     ((System_Collections_Generic_HashSet_T__o *)__this_11,local_38,MethodInfo_Boolean_Contains);
  if ((char)bVar21 != '\0') {
label_04071147:
    switch(key) {
    case 1:
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar18 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x28);
      if (pSVar18 == (System_Collections_Generic_List_object__o *)0x0) goto label_04072024;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_80,pSVar18,MethodInfo_List_1_T_Enumerator_UnityEngine_Light_GetEnumerator);
      local_58 = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)CONCAT44(uStack_6c,local_70);
      local_68 = (Weather_WeatherManager_c *)local_80;
      pIStack_60 = pIStack_78;
      while (__this_01.fields._list._4_4_ = in_stack_ffffffffffffff6c,
            __this_01.fields._list._0_4_ = in_stack_ffffffffffffff68,
            __this_01.fields._index = (int)in_stack_ffffffffffffff70,
            __this_01.fields._version = (int)((ulong)in_stack_ffffffffffffff70 >> 0x20),
            __this_01.fields._current._0_4_ = in_stack_ffffffffffffff78,
            __this_01.fields._current._4_4_ = in_stack_ffffffffffffff7c,
            bVar21 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_01,(MethodInfo_321A1D0 *)&local_68), __this_10 = local_58,
            (char)bVar21 != '\0') {
        pSVar11 = (__this->fields)._currentWeather;
        if (pSVar11 == (Settings_WeatherSet_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04071fbc;
        }
        pSVar15 = (pSVar11->fields).Daylight;
        if (pSVar15 == (Settings_ColorSetting_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04071fbc;
        }
        pUVar16 = (pSVar15->fields)._value;
        if (pUVar16 == (Utility_Color255_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04071fbc;
        }
        UVar32 = Utility_Color255__ToColor(pUVar16,(MethodInfo *)0x0);
        unaff_RBP = __this_10;
        if (__this_10 == (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04071fbc;
        }
        UnityEngine_Light__set_color((UnityEngine_Light_o *)__this_10,UVar32,(MethodInfo *)0x0);
      }
      unaff_RBP = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)&g_data_00000004;
      unaff_R13 = (System_Collections_Specialized_OrderedDictionary_o *)0x0;
      __this_02.fields._list._4_4_ = in_stack_ffffffffffffff6c;
      __this_02.fields._list._0_4_ = in_stack_ffffffffffffff68;
      __this_02.fields._index = (int)in_stack_ffffffffffffff70;
      __this_02.fields._version = (int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
      __this_02.fields._current._0_4_ = in_stack_ffffffffffffff78;
      __this_02.fields._current._4_4_ = in_stack_ffffffffffffff7c;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_02,(MethodInfo_321A1C0 *)&local_68);
      break;
    case 2:
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar18 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x28);
      if (pSVar18 == (System_Collections_Generic_List_object__o *)0x0) goto label_04071ff4;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_80,pSVar18,MethodInfo_List_1_T_Enumerator_UnityEngine_Light_GetEnumerator);
      local_58 = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)CONCAT44(uStack_6c,local_70);
      local_68 = (Weather_WeatherManager_c *)local_80;
      pIStack_60 = pIStack_78;
      while (__this_03.fields._list._4_4_ = in_stack_ffffffffffffff6c,
            __this_03.fields._list._0_4_ = in_stack_ffffffffffffff68,
            __this_03.fields._index = (int)in_stack_ffffffffffffff70,
            __this_03.fields._version = (int)((ulong)in_stack_ffffffffffffff70 >> 0x20),
            __this_03.fields._current._0_4_ = in_stack_ffffffffffffff78,
            __this_03.fields._current._4_4_ = in_stack_ffffffffffffff7c,
            bVar21 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_03,(MethodInfo_321A1D0 *)&local_68), (char)bVar21 != '\0') {
        pSVar11 = (__this->fields)._currentWeather;
        if (pSVar11 == (Settings_WeatherSet_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04071fbc;
        }
        pSVar12 = (pSVar11->fields).DaylightIntensity;
        if (pSVar12 == (Settings_FloatSetting_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04071fbc;
        }
        if (local_58 == (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04071fbc;
        }
        UnityEngine_Light__set_intensity
                  ((UnityEngine_Light_o *)local_58,(pSVar12->fields)._value,(MethodInfo *)0x0);
      }
      unaff_RBP = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)&g_data_00000004;
      unaff_R13 = (System_Collections_Specialized_OrderedDictionary_o *)0x0;
      __this_04.fields._list._4_4_ = in_stack_ffffffffffffff6c;
      __this_04.fields._list._0_4_ = in_stack_ffffffffffffff68;
      __this_04.fields._index = (int)in_stack_ffffffffffffff70;
      __this_04.fields._version = (int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
      __this_04.fields._current._0_4_ = in_stack_ffffffffffffff78;
      __this_04.fields._current._4_4_ = in_stack_ffffffffffffff7c;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&local_68);
      break;
    case 3:
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar18 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x28);
      if (pSVar18 == (System_Collections_Generic_List_object__o *)0x0) goto label_0407210e;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_80,pSVar18,MethodInfo_List_1_T_Enumerator_UnityEngine_Light_GetEnumerator);
      local_58 = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)CONCAT44(uStack_6c,local_70);
      local_68 = (Weather_WeatherManager_c *)local_80;
      pIStack_60 = pIStack_78;
      while (__this_05.fields._list._4_4_ = in_stack_ffffffffffffff6c,
            __this_05.fields._list._0_4_ = in_stack_ffffffffffffff68,
            __this_05.fields._index = (int)in_stack_ffffffffffffff70,
            __this_05.fields._version = (int)((ulong)in_stack_ffffffffffffff70 >> 0x20),
            __this_05.fields._current._0_4_ = in_stack_ffffffffffffff78,
            __this_05.fields._current._4_4_ = in_stack_ffffffffffffff7c,
            bVar21 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_05,(MethodInfo_321A1D0 *)&local_68), (char)bVar21 != '\0') {
        if (local_58 == (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04071fbc;
        }
        unaff_RBP = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)
                    UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)local_58,(MethodInfo *)0x0);
        pSVar11 = (__this->fields)._currentWeather;
        if (pSVar11 == (Settings_WeatherSet_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04071fbc;
        }
        pSVar17 = (pSVar11->fields).DaylightDirection;
        if (pSVar17 == (Settings_Vector3Setting_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04071fbc;
        }
        uVar3 = (pSVar17->fields)._value.fields.x;
        uVar5 = (pSVar17->fields)._value.fields.y;
        euler.fields.x = (float)uVar3 * 0.017453292;
        euler.fields.z = (pSVar17->fields)._value.fields.z * 0.017453292;
        euler.fields.y = (float)uVar5 * 0.017453292;
        value = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
        if (unaff_RBP == (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04071fbc;
        }
        UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)unaff_RBP,value,(MethodInfo *)0x0);
      }
      unaff_RBP = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)&g_data_00000004;
      unaff_R13 = (System_Collections_Specialized_OrderedDictionary_o *)0x0;
      __this_06.fields._list._4_4_ = in_stack_ffffffffffffff6c;
      __this_06.fields._list._0_4_ = in_stack_ffffffffffffff68;
      __this_06.fields._index = (int)in_stack_ffffffffffffff70;
      __this_06.fields._version = (int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
      __this_06.fields._current._0_4_ = in_stack_ffffffffffffff78;
      __this_06.fields._current._4_4_ = in_stack_ffffffffffffff7c;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)&local_68);
      break;
    case 4:
      pSVar11 = (__this->fields)._currentWeather;
      if (pSVar11 == (Settings_WeatherSet_o *)0x0) goto label_040720db;
      pSVar15 = (pSVar11->fields).AmbientLight;
      if (pSVar15 == (Settings_ColorSetting_o *)0x0) goto label_040720d6;
      pUVar16 = (pSVar15->fields)._value;
      if (pUVar16 == (Utility_Color255_o *)0x0) goto label_040720ae;
      UVar32 = Utility_Color255__ToColor(pUVar16,(MethodInfo *)0x0);
      UnityEngine_RenderSettings__set_ambientLight(UVar32,(MethodInfo *)0x0);
      break;
    case 5:
      if (g_data_057ac313 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndApplySkybox_d__51);
        g_data_057ac313 = '\x01';
      }
      unaff_RBP = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndApplySkybox_d__51);
      Weather_WeatherManager__WaitAndApplySkybox_d__51___ctor(unaff_RBP,0,(MethodInfo *)0x0);
      if (unaff_RBP == (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)0x0) goto label_0407206a;
      (unaff_RBP->fields).__4__this = __this;
      il2cpp_runtime_helper_022b4080(&(unaff_RBP->fields).__4__this,__this);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)unaff_RBP,
                 (MethodInfo *)0x0);
      break;
    case 6:
      pSVar11 = (__this->fields)._currentWeather;
      if (pSVar11 == (Settings_WeatherSet_o *)0x0) goto label_04071fce;
      pSVar13 = (pSVar11->fields).Skybox;
      if (pSVar13 == (Settings_StringSetting_o *)0x0) goto label_040720e0;
      pSVar11 = (__this->fields)._targetWeather;
      if (pSVar11 == (Settings_WeatherSet_o *)0x0) goto label_0407211d;
      method_00 = (MethodInfo *)(pSVar11->fields).Skybox;
      if (method_00 == (MethodInfo *)0x0) goto label_040720bd;
      unaff_RBP = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)
                  Weather_WeatherManager__GetBlendedSkybox
                            (__this_11,(pSVar13->fields)._value,(System_String_o *)method_00->name,method_00);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar21 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar21 != '\0') {
        pSVar11 = (__this->fields)._currentWeather;
        if (pSVar11 == (Settings_WeatherSet_o *)0x0) goto label_0407209f;
        pSVar15 = (pSVar11->fields).SkyboxColor;
        if (pSVar15 == (Settings_ColorSetting_o *)0x0) goto label_0407206f;
        pUVar16 = (pSVar15->fields)._value;
        if (pUVar16 == (Utility_Color255_o *)0x0) goto label_04072042;
        UVar32 = Utility_Color255__ToColor(pUVar16,(MethodInfo *)0x0);
        if (unaff_RBP == (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)0x0) goto label_04072029;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)unaff_RBP,"_Tint",UVar32,(MethodInfo *)0x0);
      }
      break;
    case 7:
      pSVar10 = (__this->fields)._effects;
      if (pSVar10 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)
      goto label_0407205b;
      unaff_RBP = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)
                  System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,7,MethodInfo_BaseWeatherEffect_get_Item);
      pSVar11 = (__this->fields)._currentWeather;
      if (pSVar11 == (Settings_WeatherSet_o *)0x0) goto label_0407202e;
      pSVar15 = (pSVar11->fields).Flashlight;
      if (pSVar15 == (Settings_ColorSetting_o *)0x0) goto label_04072008;
      pUVar16 = (pSVar15->fields)._value;
      if (pUVar16 == (Utility_Color255_o *)0x0) goto label_04071fef;
      UVar32 = Utility_Color255__ToColor(pUVar16,(MethodInfo *)0x0);
      uVar30 = UVar32.fields._8_8_;
      fVar2 = UVar32.fields.r;
      if (unaff_RBP == (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)0x0) goto label_040720f7;
      bVar6 = (TypeInfo_FlashlightWeatherEffect->_2).naturalAligment;
      if ((unaff_RBP->klass->_2).naturalAligment < bVar6) goto label_04072101;
      if ((unaff_RBP->klass->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_FlashlightWeatherEffect) goto label_04072101;
      pWVar14 = unaff_RBP->klass;
      bVar6 = (TypeInfo_FlashlightWeatherEffect->_2).naturalAligment;
      if ((pWVar14->_2).naturalAligment < bVar6) goto label_040720e5;
      if ((pWVar14->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_FlashlightWeatherEffect) goto label_040720e5;
      (*pWVar14[1]._2.unity_user_data)(fVar2,unaff_RBP);
      pSVar11 = (__this->fields)._currentWeather;
      if (pSVar11 == (Settings_WeatherSet_o *)0x0) goto label_04072127;
      pSVar15 = (pSVar11->fields).Flashlight;
      if (pSVar15 == (Settings_ColorSetting_o *)0x0) goto label_040720c2;
      pUVar16 = (pSVar15->fields)._value;
      if (pUVar16 == (Utility_Color255_o *)0x0) goto label_04072086;
      if (((pUVar16->fields).A < 1) ||
         (UVar32 = Utility_Color255__ToColor(pUVar16,(MethodInfo *)0x0), fVar2 = UVar32.fields.a + -1.0,
         fVar2 * fVar2 +
         UVar32.fields.b * UVar32.fields.b +
         UVar32.fields.g * UVar32.fields.g + UVar32.fields.r * UVar32.fields.r < 9.9999994e-11)) {
        pSVar10 = (__this->fields)._effects;
        if (pSVar10 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)
        goto label_04072051;
        pIVar25 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,7,MethodInfo_BaseWeatherEffect_get_Item);
        if (pIVar25 == (Il2CppObject *)0x0) goto label_04072033;
        (*pIVar25->klass->vtable[6].methodPtr)(pIVar25,0,pIVar25->klass->vtable[6].method);
      }
      else {
        pSVar10 = (__this->fields)._effects;
        if (pSVar10 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)
        goto label_04071fd3;
        pUVar23 = (UnityEngine_Component_o *)
                  System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,7,MethodInfo_BaseWeatherEffect_get_Item);
        if (pUVar23 == (UnityEngine_Component_o *)0x0) goto label_040720f2;
        pUVar24 = UnityEngine_Component__get_gameObject(pUVar23,(MethodInfo *)0x0);
        if (pUVar24 == (UnityEngine_GameObject_o *)0x0) goto label_04072122;
        bVar21 = UnityEngine_GameObject__get_activeSelf(pUVar24,(MethodInfo *)0x0);
        if ((char)bVar21 == '\0') {
          pSVar10 = (__this->fields)._effects;
          if (pSVar10 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)
          goto label_040720c7;
          pIVar25 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,7,MethodInfo_BaseWeatherEffect_get_Item
                              );
          if (pIVar25 == (Il2CppObject *)0x0) goto label_040720a4;
          (*pIVar25->klass->vtable[7].methodPtr)(pIVar25,pIVar25->klass->vtable[7].method);
        }
      }
      break;
    case 8:
      pSVar11 = (__this->fields)._currentWeather;
      if (pSVar11 == (Settings_WeatherSet_o *)0x0) goto label_04071ffe;
      pSVar12 = (pSVar11->fields).FogDensity;
      if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto label_04071fdd;
      if ((pSVar12->fields)._value <= 0.0) {
        UnityEngine_RenderSettings__set_fog(0,(MethodInfo *)0x0);
      }
      else {
        UnityEngine_RenderSettings__set_fog(1,(MethodInfo *)0x0);
        UnityEngine_RenderSettings__set_fogMode(2,(MethodInfo *)0x0);
        pSVar11 = (__this->fields)._currentWeather;
        if (pSVar11 == (Settings_WeatherSet_o *)0x0) goto label_04072113;
        pSVar12 = (pSVar11->fields).FogDensity;
        if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto label_040720cc;
        UnityEngine_RenderSettings__set_fogDensity((pSVar12->fields)._value * 0.02,(MethodInfo *)0x0);
      }
      break;
    case 9:
      pSVar11 = (__this->fields)._currentWeather;
      if (pSVar11 == (Settings_WeatherSet_o *)0x0) goto label_04072047;
      pSVar15 = (pSVar11->fields).FogColor;
      if (pSVar15 == (Settings_ColorSetting_o *)0x0) goto label_04072015;
      pUVar16 = (pSVar15->fields)._value;
      if (pUVar16 == (Utility_Color255_o *)0x0) goto label_04071ff9;
      UVar32 = Utility_Color255__ToColor(pUVar16,(MethodInfo *)0x0);
      UnityEngine_RenderSettings__set_fogColor(UVar32,(MethodInfo *)0x0);
      break;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      pSVar11 = (__this->fields)._currentWeather;
      if (pSVar11 == (Settings_WeatherSet_o *)0x0) goto label_040720d1;
      unaff_R13 = (pSVar11->fields).Settings;
      local_80 = (undefined1  [8])TypeInfo_WeatherEffect;
      pIStack_78 = (Il2CppType *)0xffffffffffffffff;
      local_70 = key;
      key_00 = System_Enum__ToString((System_Enum_o *)local_80,(MethodInfo *)0x0);
      if (unaff_R13 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_040720b3;
      pIVar25 = System_Collections_Specialized_OrderedDictionary__get_Item
                          (unaff_R13,(Il2CppObject *)key_00,(MethodInfo *)0x0);
      if (pIVar25 == (Il2CppObject *)0x0) goto label_04072090;
      bVar6 = (TypeInfo_FloatSetting->_2).naturalAligment;
      if (((pIVar25->klass->_2).naturalAligment < bVar6) ||
         ((pIVar25->klass->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_FloatSetting)) {
label_04071fc1:
        il2cpp_runtime_helper_022b2fd0(pIVar25);
        goto label_04071fc9;
      }
      pSVar10 = (__this->fields)._effects;
      if (pSVar10 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)
      goto label_04072038;
      in_stack_ffffffffffffff68 = *(float *)((long)&pIVar25[1].klass + 4);
      pIVar25 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,key,MethodInfo_BaseWeatherEffect_get_Item);
      if (pIVar25 == (Il2CppObject *)0x0) goto label_0407201a;
      (*pIVar25->klass->vtable[10].methodPtr)
                (in_stack_ffffffffffffff68,pIVar25,pIVar25->klass->vtable[10].method);
      pSVar10 = (__this->fields)._effects;
      if (in_stack_ffffffffffffff68 <= 0.0) {
        if (pSVar10 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)
        goto label_04072095;
        pIVar25 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,key,MethodInfo_BaseWeatherEffect_get_Item
                            );
        if (pIVar25 == (Il2CppObject *)0x0) goto label_04072060;
        (*pIVar25->klass->vtable[6].methodPtr)(pIVar25,1,pIVar25->klass->vtable[6].method);
      }
      else {
        if (pSVar10 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)
        goto label_04072003;
        pUVar23 = (UnityEngine_Component_o *)
                  System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,key,MethodInfo_BaseWeatherEffect_get_Item
                            );
        if (pUVar23 == (UnityEngine_Component_o *)0x0) goto label_04071fd8;
        pUVar24 = UnityEngine_Component__get_gameObject(pUVar23,(MethodInfo *)0x0);
        if (pUVar24 == (UnityEngine_GameObject_o *)0x0) goto label_04072118;
        bVar21 = UnityEngine_GameObject__get_activeSelf(pUVar24,(MethodInfo *)0x0);
        if ((char)bVar21 == '\0') {
          pSVar10 = (__this->fields)._effects;
          if (pSVar10 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)
          goto label_040720ed;
          pIVar25 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,key,
                               MethodInfo_BaseWeatherEffect_get_Item);
          if (pIVar25 == (Il2CppObject *)0x0) goto label_040720b8;
          (*pIVar25->klass->vtable[8].methodPtr)(pIVar25,pIVar25->klass->vtable[8].method);
          pSVar10 = (__this->fields)._effects;
          if (pSVar10 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)
          goto label_04072081;
          pIVar25 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,key,
                               MethodInfo_BaseWeatherEffect_get_Item);
          if (pIVar25 == (Il2CppObject *)0x0) goto label_04072056;
          (*pIVar25->klass->vtable[7].methodPtr)(pIVar25,pIVar25->klass->vtable[7].method);
        }
      }
      break;
    case 0xe:
      pSVar11 = (__this->fields)._currentWeather;
      if (pSVar11 == (Settings_WeatherSet_o *)0x0) goto label_040720a9;
      pSVar17 = (pSVar11->fields).WindDirection;
      if (pSVar17 == (Settings_Vector3Setting_o *)0x0) goto label_0407208b;
      fVar2 = (pSVar17->fields)._value.fields.x;
      fVar4 = (pSVar17->fields)._value.fields.y;
      uVar30 = 0;
      in_stack_ffffffffffffff7c = (pSVar17->fields)._value.fields.z;
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
        iVar8 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar8 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar8 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar28 = 0;
      uVar29 = 0;
      fVar27 = in_stack_ffffffffffffff7c * in_stack_ffffffffffffff7c + fVar4 * fVar4 + fVar2 * fVar2;
      if (fVar27 < 0.0) {
        fVar27 = sqrtf(fVar27);
        uVar28 = extraout_XMM0_Dc;
        uVar29 = extraout_XMM0_Dd;
      }
      else {
        fVar27 = SQRT(fVar27);
      }
      if (1e-05 < fVar27) {
        in_stack_ffffffffffffff7c = in_stack_ffffffffffffff7c / fVar27;
        auVar20._4_4_ = fVar4;
        auVar20._0_4_ = fVar2;
        auVar20._8_8_ = uVar30;
        auVar31._4_4_ = fVar27;
        auVar31._0_4_ = fVar27;
        auVar31._8_4_ = uVar28;
        auVar31._12_4_ = uVar29;
        auVar31 = divps(auVar20,auVar31);
        in_stack_ffffffffffffff68 = auVar31._0_4_;
        in_stack_ffffffffffffff6c = auVar31._4_4_;
        in_stack_ffffffffffffff70 = auVar31._8_8_;
        iVar8 = *(int *)(TypeInfo_WindWeatherEffect + 0xe4);
      }
      else {
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        uVar30 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        in_stack_ffffffffffffff68 = (float)uVar30;
        in_stack_ffffffffffffff6c = (undefined4)((ulong)uVar30 >> 0x20);
        in_stack_ffffffffffffff70 = 0;
        in_stack_ffffffffffffff7c = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        iVar8 = *(int *)(TypeInfo_WindWeatherEffect + 0xe4);
      }
      if (iVar8 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar9 = *(long *)(TypeInfo_WindWeatherEffect + 0xb8);
      *(ulong *)(lVar9 + 4) = CONCAT44(in_stack_ffffffffffffff6c,in_stack_ffffffffffffff68);
      *(float *)(lVar9 + 0xc) = in_stack_ffffffffffffff7c;
      break;
    case 0xf:
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = (__this->fields)._currentWeather;
      if (pSVar11 == (Settings_WeatherSet_o *)0x0) goto label_0407209a;
      pSVar12 = (pSVar11->fields).RainForce;
      if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto label_0407207c;
      if (**(long **)(TypeInfo_WeatherManager + 0xb8) == 0) goto label_0407204c;
      *(float *)(**(long **)(TypeInfo_WeatherManager + 0xb8) + 0x94) = (pSVar12->fields)._value;
      break;
    case 0x10:
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = (__this->fields)._currentWeather;
      if (pSVar11 == (Settings_WeatherSet_o *)0x0) goto label_04071fe2;
      pSVar12 = (pSVar11->fields).SnowForce;
      if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto label_04072109;
      if (**(long **)(TypeInfo_WeatherManager + 0xb8) == 0) goto label_040720fc;
      *(float *)(**(long **)(TypeInfo_WeatherManager + 0xb8) + 0x98) = (pSVar12->fields)._value;
      break;
    case 0x11:
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = (__this->fields)._currentWeather;
      if (pSVar11 == (Settings_WeatherSet_o *)0x0) goto label_04072065;
      pSVar12 = (pSVar11->fields).WindForce;
      if (pSVar12 == (Settings_FloatSetting_o *)0x0) goto label_0407203d;
      if (**(long **)(TypeInfo_WeatherManager + 0xb8) == 0) goto label_0407201f;
      *(float *)(**(long **)(TypeInfo_WeatherManager + 0xb8) + 0x9c) = (pSVar12->fields)._value;
    }
  }
  goto switchD_0407115d_default;
}


// Weather.WeatherManager$$WaitAndApplySkybox
// il2cpp: System_Collections_IEnumerator_o* Weather_WeatherManager__WaitAndApplySkybox (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x4074ad0

System_Collections_IEnumerator_o *
Weather_WeatherManager__WaitAndApplySkybox(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  long lVar1;
  Weather_WeatherManager_o *__this_00;
  void *pvVar2;
  System_Byte_array *pSVar3;
  Photon_Realtime_Player_o *pPVar4;
  System_Collections_IEnumerator_o *pSVar5;
  UnityEngine_Coroutine_o *pUVar6;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this_01;
  System_Byte_array *pSVar7;
  System_Collections_Generic_Dictionary_int__float__o *pSVar8;
  Settings_WeatherSet_o *pSVar9;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_c *__this_02;
  System_Collections_Generic_List_T__o *__this_03;
  System_Collections_IEnumerator_o *extraout_RAX;
  System_Collections_Generic_Dictionary_object__object__o *pSVar10;
  System_Byte_array *in_RCX;
  System_Byte_array *targetWeatherJson;
  System_Byte_array *extraout_RDX;
  System_Byte_array *startWeatherJson;
  System_Byte_array *pSVar11;
  Weather_WeatherManager_o *pWVar12;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this_04;
  System_Collections_Generic_Dictionary_int__float__o *in_R8;
  System_Collections_Generic_Dictionary_int__float__o *in_R9;
  Photon_Realtime_Player_o *unaff_R14;
  float fVar13;
  MethodInfo *in_stack_ffffffffffffffa0;
  
  if (g_data_057ac313 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndApplySkybox_d__51);
    g_data_057ac313 = '\x01';
  }
  pSVar3 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndApplySkybox_d__51);
  startWeatherJson = (System_Byte_array *)0x0;
  pSVar7 = pSVar3;
  Weather_WeatherManager__WaitAndApplySkybox_d__51___ctor
            ((Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)pSVar3,0,(MethodInfo *)0x0);
  if (pSVar3 != (System_Byte_array *)0x0) {
    *(Weather_WeatherManager_o **)pSVar3->m_Items = __this;
    il2cpp_runtime_helper_022b4080(pSVar3->m_Items,__this);
    return (System_Collections_IEnumerator_o *)pSVar3;
  }
  fVar13 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar3 = in_RCX;
  pSVar11 = startWeatherJson;
  pSVar8 = in_R8;
  if (g_data_057ac315 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac315 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pWVar12 = (Weather_WeatherManager_o *)0x0;
    pPVar4 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  else {
    pWVar12 = (Weather_WeatherManager_o *)0x0;
    pPVar4 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  if (unaff_R14 != pPVar4) {
    return (System_Collections_IEnumerator_o *)pPVar4;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar1 != 0) &&
     (pSVar5 = *(System_Collections_IEnumerator_o **)(lVar1 + 0x98),
     pSVar5 != (System_Collections_IEnumerator_o *)0x0)) {
    if (*(int *)((long)&pSVar5[1].klass + 4) == 0) {
      return pSVar5;
    }
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(Weather_WeatherManager_o **)TypeInfo_WeatherManager[1].monitor;
    pWVar12 = TypeInfo_WeatherManager;
    if (__this_00 != (Weather_WeatherManager_o *)0x0) {
      pSVar5 = Weather_WeatherManager__WaitAndFinishOnSetWeather
                         (__this_00,pSVar7,startWeatherJson,targetWeatherJson,
                          (System_Collections_Generic_Dictionary_int__float__o *)in_RCX,in_R8,fVar13,
                          in_stack_ffffffffffffffa0);
      pUVar6 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar5,(MethodInfo *)0x0);
      return (System_Collections_IEnumerator_o *)pUVar6;
    }
  }
  fVar13 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac316 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishOnSetWeather_d__54);
    g_data_057ac316 = '\x01';
  }
  __this_01 = (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishOnSetWeather_d__54);
  __this_04 = __this_01;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54___ctor(__this_01,0,(MethodInfo *)0x0);
  if (__this_01 != (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *)0x0) {
    (__this_01->fields).__4__this = pWVar12;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).__4__this,pWVar12);
    (__this_01->fields).currentWeatherJson = pSVar11;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).currentWeatherJson,pSVar11);
    (__this_01->fields).startWeatherJson = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).startWeatherJson,extraout_RDX);
    (__this_01->fields).targetWeatherJson = pSVar3;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).targetWeatherJson,pSVar3);
    (__this_01->fields).targetWeatherStartTimes = pSVar8;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).targetWeatherStartTimes,pSVar8);
    (__this_01->fields).targetWeatherEndTimes = in_R9;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).targetWeatherEndTimes);
    (__this_01->fields).currentTime = fVar13;
    return (System_Collections_IEnumerator_o *)__this_01;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac318 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Weather_WeatherEffect_Weather_BaseWeatherEf);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_System_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Weather_WeatherScheduleRunner_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_WeatherEffect_BaseWeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_WeatherScheduleRunner_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Weather_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherScheduleRunner);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Camera);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_WeatherScheduleRunner);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Camera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
    g_data_057ac318 = '\x01';
  }
  pSVar7 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_WeatherEffect);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)pSVar7,MethodInfo_HashSet_1_Weather_WeatherEffect);
  if (pSVar7 == (System_Byte_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac319 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Un);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Material);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Dictionary_string_Material);
      il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
      g_data_057ac319 = '\x01';
    }
    pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Material);
    System_Collections_Generic_Dictionary_object__object____ctor(pSVar10,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
    pvVar2 = TypeInfo_WeatherManager[1].monitor;
    *(System_Collections_Generic_Dictionary_object__object__o **)((long)pvVar2 + 8) = pSVar10;
    il2cpp_runtime_helper_022b4080((long)pvVar2 + 8,pSVar10);
    pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Dictionary_string_Material);
    System_Collections_Generic_Dictionary_object__object____ctor(pSVar10,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Un);
    pvVar2 = TypeInfo_WeatherManager[1].monitor;
    *(System_Collections_Generic_Dictionary_object__object__o **)((long)pvVar2 + 0x10) = pSVar10;
    pSVar5 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_022b4080((long)pvVar2 + 0x10,pSVar10);
    return pSVar5;
  }
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)pSVar7,1,MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)pSVar7,4,MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)pSVar7,7,MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)pSVar7,5,MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)pSVar7,2,MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)pSVar7,3,MethodInfo_Boolean_Add);
  (__this_04->fields).currentWeatherJson = pSVar7;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields).currentWeatherJson,pSVar7);
  pSVar7 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_WeatherScheduleRunner);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar7,MethodInfo_List_1_Weather_WeatherScheduleRunner);
  (__this_04->fields).startWeatherJson = pSVar7;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields).startWeatherJson,pSVar7);
  pSVar7 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Camera);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar7,MethodInfo_List_1_UnityEngine_Camera);
  (__this_04->fields).targetWeatherJson = pSVar7;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields).targetWeatherJson,pSVar7);
  pSVar8 = (System_Collections_Generic_Dictionary_int__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_WeatherEffect_BaseWeatherEffect);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,MethodInfo_Dictionary_2_Weather_WeatherEffect_Weather_BaseWeatherEf);
  (__this_04->fields).targetWeatherStartTimes = pSVar8;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields).targetWeatherStartTimes);
  pSVar9 = (Settings_WeatherSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
  Settings_WeatherSet___ctor(pSVar9,(MethodInfo *)0x0);
  (__this_04->fields).targetWeatherEndTimes = (System_Collections_Generic_Dictionary_int__float__o *)pSVar9;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields).targetWeatherEndTimes);
  pSVar9 = (Settings_WeatherSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
  Settings_WeatherSet___ctor(pSVar9,(MethodInfo *)0x0);
  *(Settings_WeatherSet_o **)&(__this_04->fields).currentTime = pSVar9;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields).currentTime);
  __this_02 = (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_c *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
  Settings_WeatherSet___ctor((Settings_WeatherSet_o *)__this_02,(MethodInfo *)0x0);
  __this_04[1].klass = __this_02;
  il2cpp_runtime_helper_022b4080(__this_04 + 1,__this_02);
  pSVar8 = (System_Collections_Generic_Dictionary_int__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_float);
  System_Collections_Generic_Dictionary_int__float____ctor(pSVar8,MethodInfo_Dictionary_2_System_Int32_System_Single);
  __this_04[1].monitor = pSVar8;
  il2cpp_runtime_helper_022b4080(&__this_04[1].monitor,pSVar8);
  pSVar8 = (System_Collections_Generic_Dictionary_int__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_float);
  System_Collections_Generic_Dictionary_int__float____ctor(pSVar8,MethodInfo_Dictionary_2_System_Int32_System_Single);
  *(System_Collections_Generic_Dictionary_int__float__o **)&__this_04[1].fields = pSVar8;
  il2cpp_runtime_helper_022b4080(&__this_04[1].fields,pSVar8);
  __this_03 = (System_Collections_Generic_List_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_WeatherEffect);
  System_Collections_Generic_List_Int32Enum____ctor(__this_03,MethodInfo_List_1_Weather_WeatherEffect);
  __this_04[1].fields.__2__current = (Il2CppObject *)__this_03;
  il2cpp_runtime_helper_022b4080(&__this_04[1].fields.__2__current,__this_03);
  pSVar7 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_WeatherScheduleRunner_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,MethodInfo_Dictionary_2_Weather_WeatherScheduleRunner_System_Single);
  __this_04[1].fields.currentWeatherJson = pSVar7;
  il2cpp_runtime_helper_022b4080(&__this_04[1].fields.currentWeatherJson);
  Photon_Pun_MonoBehaviourPunCallbacks___ctor
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this_04,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Weather.WeatherManager$$GetBlendedSkybox
// il2cpp: UnityEngine_Material_o* Weather_WeatherManager__GetBlendedSkybox (Weather_WeatherManager_o* __this, System_String_o* skybox1, System_String_o* skybox2, const MethodInfo* method);
// 0x4074750

UnityEngine_Material_o *
Weather_WeatherManager__GetBlendedSkybox
          (Weather_WeatherManager_o *__this,System_String_o *skybox1,System_String_o *skybox2,
          MethodInfo *method)

{
  long lVar1;
  Weather_WeatherManager_o *__this_00;
  void *pvVar2;
  uint16_t uVar3;
  bool_conflict bVar4;
  System_String_array *parts;
  System_Byte_array *pSVar5;
  System_Byte_array *pSVar6;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Material_o *pUVar7;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this_01;
  System_Byte_array *pSVar8;
  System_Collections_Generic_Dictionary_int__float__o *pSVar9;
  Settings_WeatherSet_o *pSVar10;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_c *__this_02;
  System_Collections_Generic_List_T__o *__this_03;
  UnityEngine_Material_o *extraout_RAX;
  System_Collections_Generic_Dictionary_object__object__o *pSVar11;
  System_Byte_array *targetWeatherJson;
  System_Byte_array *extraout_RDX;
  System_Byte_array *startWeatherJson;
  System_Byte_array *pSVar12;
  Weather_WeatherManager_o *pWVar13;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this_04;
  MethodInfo *in_R8;
  MethodInfo *pMVar14;
  System_Collections_Generic_Dictionary_int__float__o *in_R9;
  float fVar15;
  MethodInfo *in_stack_ffffffffffffff70;
  
  if (g_data_057ac314 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_EnumToStringArray_SkyboxCustomSkinPartId);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    __this = (Weather_WeatherManager_o *)&"1";
    il2cpp_runtime_helper_023445d0();
    g_data_057ac314 = '\x01';
  }
  if (skybox1 == (System_String_o *)0x0) goto label_04074a5f;
  uVar3 = System_String__get_Chars(skybox1,(skybox1->fields)._stringLength + -1,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (Weather_WeatherManager_o *)(ulong)uVar3;
  bVar4 = System_Char__IsDigit(uVar3,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    __this = (Weather_WeatherManager_o *)skybox1;
    skybox1 = System_String__Concat_3ae5ba0(skybox1,"1",(MethodInfo *)0x0);
  }
  if (skybox2 == (System_String_o *)0x0) goto label_04074a5f;
  uVar3 = System_String__get_Chars(skybox2,(skybox2->fields)._stringLength + -1,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_Char__IsDigit(uVar3,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    skybox2 = System_String__Concat_3ae5ba0(skybox2,"1",(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) != 0) goto label_04074889;
label_040748c9:
    il2cpp_runtime_helper_02337ed0();
    pSVar11 = *(System_Collections_Generic_Dictionary_object__object__o **)
               ((long)TypeInfo_WeatherManager[1].monitor + 0x10);
    __this = (Weather_WeatherManager_o *)0x0;
    if (pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04074a5f;
  }
  else {
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) == 0) goto label_040748c9;
label_04074889:
    pSVar11 = *(System_Collections_Generic_Dictionary_object__object__o **)
               ((long)TypeInfo_WeatherManager[1].monitor + 0x10);
    if (pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this = (Weather_WeatherManager_o *)0x0;
      goto label_04074a5f;
    }
  }
  bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar11,(Il2CppObject *)skybox1,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar4 == '\0') {
    return (UnityEngine_Material_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = *(Weather_WeatherManager_o **)((long)TypeInfo_WeatherManager[1].monitor + 0x10);
  if ((__this != (Weather_WeatherManager_o *)0x0) &&
     (pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                           (Il2CppObject *)skybox1,MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item),
     pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    method = (MethodInfo *)&MethodInfo_Boolean_ContainsKey;
    bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar11,(Il2CppObject *)skybox2,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 == '\0') {
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      parts = Utility_Util__EnumToStringArray_Int32Enum_(MethodInfo_String_EnumToStringArray_SkyboxCustomSkinPartId);
      if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method = (MethodInfo *)skybox2;
      pUVar7 = Weather_WeatherManager__CreateBlendedSkybox
                         (*(UnityEngine_Shader_o **)((long)TypeInfo_WeatherManager[1].monitor + 0x18),parts,skybox1,
                          skybox2,in_R8);
      __this = *(Weather_WeatherManager_o **)((long)TypeInfo_WeatherManager[1].monitor + 0x10);
      if ((__this == (Weather_WeatherManager_o *)0x0) ||
         (pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                               (Il2CppObject *)skybox1,MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item),
         pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_04074a5f;
      method = (MethodInfo *)MethodInfo_Void_Add;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar11,(Il2CppObject *)skybox2,(Il2CppObject *)pUVar7,(MethodInfo_3104E10 *)MethodInfo_Void_Add);
    }
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = *(Weather_WeatherManager_o **)((long)TypeInfo_WeatherManager[1].monitor + 0x10);
    if ((__this != (Weather_WeatherManager_o *)0x0) &&
       (pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                             (Il2CppObject *)skybox1,MethodInfo_Dictionary_2_System_String_UnityEngine_Material_get_Item),
       pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      pUVar7 = (UnityEngine_Material_o *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar11,(Il2CppObject *)skybox2,MethodInfo_Material_get_Item);
      return pUVar7;
    }
  }
label_04074a5f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac317 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this = (Weather_WeatherManager_o *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac317 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x98), lVar1 != 0)) {
    return (UnityEngine_Material_o *)CONCAT71((int7)((ulong)lVar1 >> 8),*(int *)(lVar1 + 0x14) != 0);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac313 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndApplySkybox_d__51);
    g_data_057ac313 = '\x01';
  }
  pSVar5 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndApplySkybox_d__51);
  startWeatherJson = (System_Byte_array *)0x0;
  pSVar8 = pSVar5;
  Weather_WeatherManager__WaitAndApplySkybox_d__51___ctor
            ((Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)pSVar5,0,(MethodInfo *)0x0);
  if (pSVar5 != (System_Byte_array *)0x0) {
    *(Weather_WeatherManager_o **)pSVar5->m_Items = __this;
    il2cpp_runtime_helper_022b4080(pSVar5->m_Items,__this);
    return (UnityEngine_Material_o *)pSVar5;
  }
  fVar15 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar5 = (System_Byte_array *)method;
  pSVar12 = startWeatherJson;
  pMVar14 = in_R8;
  if (g_data_057ac315 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac315 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pWVar13 = (Weather_WeatherManager_o *)0x0;
    pSVar6 = (System_Byte_array *)Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  else {
    pWVar13 = (Weather_WeatherManager_o *)0x0;
    pSVar6 = (System_Byte_array *)Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  if ((System_Byte_array *)skybox2 != pSVar6) {
    return (UnityEngine_Material_o *)pSVar6;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar1 != 0) &&
     (pUVar7 = *(UnityEngine_Material_o **)(lVar1 + 0x98), pUVar7 != (UnityEngine_Material_o *)0x0)) {
    if (*(int *)((long)&(pUVar7->fields).m_CachedPtr + 4) == 0) {
      return pUVar7;
    }
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(Weather_WeatherManager_o **)TypeInfo_WeatherManager[1].monitor;
    pWVar13 = TypeInfo_WeatherManager;
    if (__this_00 != (Weather_WeatherManager_o *)0x0) {
      routine = Weather_WeatherManager__WaitAndFinishOnSetWeather
                          (__this_00,pSVar8,startWeatherJson,targetWeatherJson,
                           (System_Collections_Generic_Dictionary_int__float__o *)method,
                           (System_Collections_Generic_Dictionary_int__float__o *)in_R8,fVar15,
                           in_stack_ffffffffffffff70);
      pUVar7 = (UnityEngine_Material_o *)
               UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
      return pUVar7;
    }
  }
  fVar15 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac316 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishOnSetWeather_d__54);
    g_data_057ac316 = '\x01';
  }
  __this_01 = (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishOnSetWeather_d__54);
  __this_04 = __this_01;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54___ctor(__this_01,0,(MethodInfo *)0x0);
  if (__this_01 != (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *)0x0) {
    (__this_01->fields).__4__this = pWVar13;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).__4__this,pWVar13);
    (__this_01->fields).currentWeatherJson = pSVar12;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).currentWeatherJson,pSVar12);
    (__this_01->fields).startWeatherJson = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).startWeatherJson,extraout_RDX);
    (__this_01->fields).targetWeatherJson = pSVar5;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).targetWeatherJson,pSVar5);
    (__this_01->fields).targetWeatherStartTimes =
         (System_Collections_Generic_Dictionary_int__float__o *)pMVar14;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).targetWeatherStartTimes,pMVar14);
    (__this_01->fields).targetWeatherEndTimes = in_R9;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).targetWeatherEndTimes);
    (__this_01->fields).currentTime = fVar15;
    return (UnityEngine_Material_o *)__this_01;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac318 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Weather_WeatherEffect_Weather_BaseWeatherEf);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_System_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Weather_WeatherScheduleRunner_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_WeatherEffect_BaseWeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_WeatherScheduleRunner_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Weather_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherScheduleRunner);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Camera);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_WeatherScheduleRunner);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Camera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
    g_data_057ac318 = '\x01';
  }
  pSVar8 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_WeatherEffect);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)pSVar8,MethodInfo_HashSet_1_Weather_WeatherEffect);
  if (pSVar8 == (System_Byte_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac319 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Un);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Material);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Dictionary_string_Material);
      il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
      g_data_057ac319 = '\x01';
    }
    pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Material);
    System_Collections_Generic_Dictionary_object__object____ctor(pSVar11,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
    pvVar2 = TypeInfo_WeatherManager[1].monitor;
    *(System_Collections_Generic_Dictionary_object__object__o **)((long)pvVar2 + 8) = pSVar11;
    il2cpp_runtime_helper_022b4080((long)pvVar2 + 8,pSVar11);
    pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Dictionary_string_Material);
    System_Collections_Generic_Dictionary_object__object____ctor(pSVar11,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Un);
    pvVar2 = TypeInfo_WeatherManager[1].monitor;
    *(System_Collections_Generic_Dictionary_object__object__o **)((long)pvVar2 + 0x10) = pSVar11;
    pUVar7 = (UnityEngine_Material_o *)il2cpp_runtime_helper_022b4080((long)pvVar2 + 0x10,pSVar11);
    return pUVar7;
  }
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)pSVar8,1,MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)pSVar8,4,MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)pSVar8,7,MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)pSVar8,5,MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)pSVar8,2,MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)pSVar8,3,MethodInfo_Boolean_Add);
  (__this_04->fields).currentWeatherJson = pSVar8;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields).currentWeatherJson,pSVar8);
  pSVar8 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_WeatherScheduleRunner);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar8,MethodInfo_List_1_Weather_WeatherScheduleRunner);
  (__this_04->fields).startWeatherJson = pSVar8;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields).startWeatherJson,pSVar8);
  pSVar8 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Camera);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar8,MethodInfo_List_1_UnityEngine_Camera);
  (__this_04->fields).targetWeatherJson = pSVar8;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields).targetWeatherJson,pSVar8);
  pSVar9 = (System_Collections_Generic_Dictionary_int__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_WeatherEffect_BaseWeatherEffect);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9,MethodInfo_Dictionary_2_Weather_WeatherEffect_Weather_BaseWeatherEf);
  (__this_04->fields).targetWeatherStartTimes = pSVar9;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields).targetWeatherStartTimes);
  pSVar10 = (Settings_WeatherSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
  Settings_WeatherSet___ctor(pSVar10,(MethodInfo *)0x0);
  (__this_04->fields).targetWeatherEndTimes = (System_Collections_Generic_Dictionary_int__float__o *)pSVar10;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields).targetWeatherEndTimes);
  pSVar10 = (Settings_WeatherSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
  Settings_WeatherSet___ctor(pSVar10,(MethodInfo *)0x0);
  *(Settings_WeatherSet_o **)&(__this_04->fields).currentTime = pSVar10;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields).currentTime);
  __this_02 = (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_c *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
  Settings_WeatherSet___ctor((Settings_WeatherSet_o *)__this_02,(MethodInfo *)0x0);
  __this_04[1].klass = __this_02;
  il2cpp_runtime_helper_022b4080(__this_04 + 1,__this_02);
  pSVar9 = (System_Collections_Generic_Dictionary_int__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_float);
  System_Collections_Generic_Dictionary_int__float____ctor(pSVar9,MethodInfo_Dictionary_2_System_Int32_System_Single);
  __this_04[1].monitor = pSVar9;
  il2cpp_runtime_helper_022b4080(&__this_04[1].monitor,pSVar9);
  pSVar9 = (System_Collections_Generic_Dictionary_int__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_float);
  System_Collections_Generic_Dictionary_int__float____ctor(pSVar9,MethodInfo_Dictionary_2_System_Int32_System_Single);
  *(System_Collections_Generic_Dictionary_int__float__o **)&__this_04[1].fields = pSVar9;
  il2cpp_runtime_helper_022b4080(&__this_04[1].fields,pSVar9);
  __this_03 = (System_Collections_Generic_List_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_WeatherEffect);
  System_Collections_Generic_List_Int32Enum____ctor(__this_03,MethodInfo_List_1_Weather_WeatherEffect);
  __this_04[1].fields.__2__current = (Il2CppObject *)__this_03;
  il2cpp_runtime_helper_022b4080(&__this_04[1].fields.__2__current,__this_03);
  pSVar8 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_WeatherScheduleRunner_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,MethodInfo_Dictionary_2_Weather_WeatherScheduleRunner_System_Single);
  __this_04[1].fields.currentWeatherJson = pSVar8;
  il2cpp_runtime_helper_022b4080(&__this_04[1].fields.currentWeatherJson);
  Photon_Pun_MonoBehaviourPunCallbacks___ctor
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this_04,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Weather.WeatherManager$$OnSetWeatherRPC
// il2cpp: void Weather_WeatherManager__OnSetWeatherRPC (System_Byte_array* currentWeatherJson, System_Byte_array* startWeatherJson, System_Byte_array* targetWeatherJson, System_Collections_Generic_Dictionary_int__float__o* targetWeatherStartTimes, System_Collections_Generic_Dictionary_int__float__o* targetWeatherEndTimes, float currentTime, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4074b40

void Weather_WeatherManager__OnSetWeatherRPC
               (System_Byte_array *currentWeatherJson,System_Byte_array *startWeatherJson,
               System_Byte_array *targetWeatherJson,
               System_Collections_Generic_Dictionary_int__float__o *targetWeatherStartTimes,
               System_Collections_Generic_Dictionary_int__float__o *targetWeatherEndTimes,float currentTime,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  long lVar1;
  Weather_WeatherManager_o *__this;
  void *pvVar2;
  Photon_Realtime_Player_o *pPVar3;
  System_Collections_IEnumerator_o *routine;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this_00;
  System_Byte_array *pSVar4;
  System_Collections_Generic_Dictionary_int__float__o *pSVar5;
  Settings_WeatherSet_o *pSVar6;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_c *__this_01;
  System_Collections_Generic_List_T__o *__this_02;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  System_Byte_array *extraout_RDX;
  System_Byte_array *pSVar8;
  Weather_WeatherManager_o *pWVar9;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this_03;
  float fVar10;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  pSVar4 = (System_Byte_array *)targetWeatherStartTimes;
  pSVar8 = startWeatherJson;
  pSVar5 = targetWeatherEndTimes;
  if (g_data_057ac315 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac315 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pWVar9 = (Weather_WeatherManager_o *)0x0;
    pPVar3 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  else {
    pWVar9 = (Weather_WeatherManager_o *)0x0;
    pPVar3 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  if (info.fields.Sender != pPVar3) {
    return;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x98), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x14) == 0) {
      return;
    }
    if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = *(Weather_WeatherManager_o **)TypeInfo_WeatherManager[1].monitor;
    pWVar9 = TypeInfo_WeatherManager;
    if (__this != (Weather_WeatherManager_o *)0x0) {
      routine = Weather_WeatherManager__WaitAndFinishOnSetWeather
                          (__this,currentWeatherJson,startWeatherJson,targetWeatherJson,
                           targetWeatherStartTimes,targetWeatherEndTimes,currentTime,in_stack_ffffffffffffffb8
                          );
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
  fVar10 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac316 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishOnSetWeather_d__54);
    g_data_057ac316 = '\x01';
  }
  __this_00 = (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishOnSetWeather_d__54);
  __this_03 = __this_00;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 == (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac318 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Weather_WeatherEffect_Weather_BaseWeatherEf);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_System_Single);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Weather_WeatherScheduleRunner_System_Single);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_float);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_WeatherEffect_BaseWeatherEffect);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_WeatherScheduleRunner_float);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Weather_WeatherEffect);
      il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_WeatherEffect);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherScheduleRunner);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Camera);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherEffect);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_WeatherScheduleRunner);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_WeatherEffect);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_Camera);
      il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
      g_data_057ac318 = '\x01';
    }
    pSVar4 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_WeatherEffect);
    System_Collections_Generic_HashSet_Int32Enum____ctor
              ((System_Collections_Generic_HashSet_T__o *)pSVar4,MethodInfo_HashSet_1_Weather_WeatherEffect);
    if (pSVar4 == (System_Byte_array *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac319 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Un);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Material);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Dictionary_string_Material);
        il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
        g_data_057ac319 = '\x01';
      }
      pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Material);
      System_Collections_Generic_Dictionary_object__object____ctor(pSVar7,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
      pvVar2 = TypeInfo_WeatherManager[1].monitor;
      *(System_Collections_Generic_Dictionary_object__object__o **)((long)pvVar2 + 8) = pSVar7;
      il2cpp_runtime_helper_022b4080((long)pvVar2 + 8,pSVar7);
      pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Dictionary_string_Material);
      System_Collections_Generic_Dictionary_object__object____ctor(pSVar7,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Un);
      pvVar2 = TypeInfo_WeatherManager[1].monitor;
      *(System_Collections_Generic_Dictionary_object__object__o **)((long)pvVar2 + 0x10) = pSVar7;
      il2cpp_runtime_helper_022b4080((long)pvVar2 + 0x10,pSVar7);
      return;
    }
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pSVar4,1,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pSVar4,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pSVar4,7,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pSVar4,5,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pSVar4,2,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pSVar4,3,MethodInfo_Boolean_Add);
    (__this_03->fields).currentWeatherJson = pSVar4;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).currentWeatherJson,pSVar4);
    pSVar4 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_WeatherScheduleRunner);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_Weather_WeatherScheduleRunner);
    (__this_03->fields).startWeatherJson = pSVar4;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).startWeatherJson,pSVar4);
    pSVar4 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Camera);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_UnityEngine_Camera);
    (__this_03->fields).targetWeatherJson = pSVar4;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).targetWeatherJson,pSVar4);
    pSVar5 = (System_Collections_Generic_Dictionary_int__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_WeatherEffect_BaseWeatherEffect);
    System_Collections_Generic_Dictionary_Int32Enum__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,MethodInfo_Dictionary_2_Weather_WeatherEffect_Weather_BaseWeatherEf);
    (__this_03->fields).targetWeatherStartTimes = pSVar5;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).targetWeatherStartTimes);
    pSVar6 = (Settings_WeatherSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
    Settings_WeatherSet___ctor(pSVar6,(MethodInfo *)0x0);
    (__this_03->fields).targetWeatherEndTimes = (System_Collections_Generic_Dictionary_int__float__o *)pSVar6;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).targetWeatherEndTimes);
    pSVar6 = (Settings_WeatherSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
    Settings_WeatherSet___ctor(pSVar6,(MethodInfo *)0x0);
    *(Settings_WeatherSet_o **)&(__this_03->fields).currentTime = pSVar6;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).currentTime);
    __this_01 = (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_c *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
    Settings_WeatherSet___ctor((Settings_WeatherSet_o *)__this_01,(MethodInfo *)0x0);
    __this_03[1].klass = __this_01;
    il2cpp_runtime_helper_022b4080(__this_03 + 1,__this_01);
    pSVar5 = (System_Collections_Generic_Dictionary_int__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_float);
    System_Collections_Generic_Dictionary_int__float____ctor(pSVar5,MethodInfo_Dictionary_2_System_Int32_System_Single);
    __this_03[1].monitor = pSVar5;
    il2cpp_runtime_helper_022b4080(&__this_03[1].monitor,pSVar5);
    pSVar5 = (System_Collections_Generic_Dictionary_int__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_float);
    System_Collections_Generic_Dictionary_int__float____ctor(pSVar5,MethodInfo_Dictionary_2_System_Int32_System_Single);
    *(System_Collections_Generic_Dictionary_int__float__o **)&__this_03[1].fields = pSVar5;
    il2cpp_runtime_helper_022b4080(&__this_03[1].fields,pSVar5);
    __this_02 = (System_Collections_Generic_List_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_WeatherEffect);
    System_Collections_Generic_List_Int32Enum____ctor(__this_02,MethodInfo_List_1_Weather_WeatherEffect);
    __this_03[1].fields.__2__current = (Il2CppObject *)__this_02;
    il2cpp_runtime_helper_022b4080(&__this_03[1].fields.__2__current,__this_02);
    pSVar4 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_WeatherScheduleRunner_float);
    System_Collections_Generic_Dictionary_object__float____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,MethodInfo_Dictionary_2_Weather_WeatherScheduleRunner_System_Single);
    __this_03[1].fields.currentWeatherJson = pSVar4;
    il2cpp_runtime_helper_022b4080(&__this_03[1].fields.currentWeatherJson);
    Photon_Pun_MonoBehaviourPunCallbacks___ctor
              ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this_03,(MethodInfo *)0x0);
    return;
  }
  (__this_00->fields).__4__this = pWVar9;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).__4__this,pWVar9);
  (__this_00->fields).currentWeatherJson = pSVar8;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).currentWeatherJson,pSVar8);
  (__this_00->fields).startWeatherJson = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).startWeatherJson,extraout_RDX);
  (__this_00->fields).targetWeatherJson = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).targetWeatherJson,pSVar4);
  (__this_00->fields).targetWeatherStartTimes = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).targetWeatherStartTimes,pSVar5);
  (__this_00->fields).targetWeatherEndTimes = (System_Collections_Generic_Dictionary_int__float__o *)method;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).targetWeatherEndTimes);
  (__this_00->fields).currentTime = fVar10;
  return;
}


// Weather.WeatherManager$$WaitAndFinishOnSetWeather
// il2cpp: System_Collections_IEnumerator_o* Weather_WeatherManager__WaitAndFinishOnSetWeather (Weather_WeatherManager_o* __this, System_Byte_array* currentWeatherJson, System_Byte_array* startWeatherJson, System_Byte_array* targetWeatherJson, System_Collections_Generic_Dictionary_int__float__o* targetWeatherStartTimes, System_Collections_Generic_Dictionary_int__float__o* targetWeatherEndTimes, float currentTime, const MethodInfo* method);
// 0x4074c90

System_Collections_IEnumerator_o *
Weather_WeatherManager__WaitAndFinishOnSetWeather
          (Weather_WeatherManager_o *__this,System_Byte_array *currentWeatherJson,
          System_Byte_array *startWeatherJson,System_Byte_array *targetWeatherJson,
          System_Collections_Generic_Dictionary_int__float__o *targetWeatherStartTimes,
          System_Collections_Generic_Dictionary_int__float__o *targetWeatherEndTimes,float currentTime,
          MethodInfo *method)

{
  long lVar1;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this_00;
  System_Byte_array *pSVar2;
  System_Collections_Generic_Dictionary_int__float__o *pSVar3;
  Settings_WeatherSet_o *pSVar4;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_c *__this_01;
  System_Collections_Generic_List_T__o *__this_02;
  System_Collections_IEnumerator_o *extraout_RAX;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_IEnumerator_o *pSVar6;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this_03;
  
  if (g_data_057ac316 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishOnSetWeather_d__54);
    g_data_057ac316 = '\x01';
  }
  __this_00 = (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishOnSetWeather_d__54);
  __this_03 = __this_00;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).currentWeatherJson = currentWeatherJson;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).currentWeatherJson,currentWeatherJson);
    (__this_00->fields).startWeatherJson = startWeatherJson;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).startWeatherJson,startWeatherJson);
    (__this_00->fields).targetWeatherJson = targetWeatherJson;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).targetWeatherJson,targetWeatherJson);
    (__this_00->fields).targetWeatherStartTimes = targetWeatherStartTimes;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).targetWeatherStartTimes,targetWeatherStartTimes);
    (__this_00->fields).targetWeatherEndTimes = targetWeatherEndTimes;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).targetWeatherEndTimes);
    (__this_00->fields).currentTime = currentTime;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac318 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Weather_WeatherEffect_Weather_BaseWeatherEf);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_System_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Weather_WeatherScheduleRunner_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_WeatherEffect_BaseWeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_WeatherScheduleRunner_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Weather_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherScheduleRunner);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Camera);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_WeatherScheduleRunner);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Camera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
    g_data_057ac318 = '\x01';
  }
  pSVar2 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_WeatherEffect);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)pSVar2,MethodInfo_HashSet_1_Weather_WeatherEffect);
  if (pSVar2 != (System_Byte_array *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pSVar2,1,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pSVar2,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pSVar2,7,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pSVar2,5,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pSVar2,2,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pSVar2,3,MethodInfo_Boolean_Add);
    (__this_03->fields).currentWeatherJson = pSVar2;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).currentWeatherJson,pSVar2);
    pSVar2 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_WeatherScheduleRunner);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_Weather_WeatherScheduleRunner);
    (__this_03->fields).startWeatherJson = pSVar2;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).startWeatherJson,pSVar2);
    pSVar2 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Camera);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_UnityEngine_Camera);
    (__this_03->fields).targetWeatherJson = pSVar2;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).targetWeatherJson,pSVar2);
    pSVar3 = (System_Collections_Generic_Dictionary_int__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_WeatherEffect_BaseWeatherEffect);
    System_Collections_Generic_Dictionary_Int32Enum__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,MethodInfo_Dictionary_2_Weather_WeatherEffect_Weather_BaseWeatherEf);
    (__this_03->fields).targetWeatherStartTimes = pSVar3;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).targetWeatherStartTimes);
    pSVar4 = (Settings_WeatherSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
    Settings_WeatherSet___ctor(pSVar4,(MethodInfo *)0x0);
    (__this_03->fields).targetWeatherEndTimes = (System_Collections_Generic_Dictionary_int__float__o *)pSVar4;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).targetWeatherEndTimes);
    pSVar4 = (Settings_WeatherSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
    Settings_WeatherSet___ctor(pSVar4,(MethodInfo *)0x0);
    *(Settings_WeatherSet_o **)&(__this_03->fields).currentTime = pSVar4;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).currentTime);
    __this_01 = (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_c *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
    Settings_WeatherSet___ctor((Settings_WeatherSet_o *)__this_01,(MethodInfo *)0x0);
    __this_03[1].klass = __this_01;
    il2cpp_runtime_helper_022b4080(__this_03 + 1,__this_01);
    pSVar3 = (System_Collections_Generic_Dictionary_int__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_float);
    System_Collections_Generic_Dictionary_int__float____ctor(pSVar3,MethodInfo_Dictionary_2_System_Int32_System_Single);
    __this_03[1].monitor = pSVar3;
    il2cpp_runtime_helper_022b4080(&__this_03[1].monitor,pSVar3);
    pSVar3 = (System_Collections_Generic_Dictionary_int__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_float);
    System_Collections_Generic_Dictionary_int__float____ctor(pSVar3,MethodInfo_Dictionary_2_System_Int32_System_Single);
    *(System_Collections_Generic_Dictionary_int__float__o **)&__this_03[1].fields = pSVar3;
    il2cpp_runtime_helper_022b4080(&__this_03[1].fields,pSVar3);
    __this_02 = (System_Collections_Generic_List_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_WeatherEffect);
    System_Collections_Generic_List_Int32Enum____ctor(__this_02,MethodInfo_List_1_Weather_WeatherEffect);
    __this_03[1].fields.__2__current = (Il2CppObject *)__this_02;
    il2cpp_runtime_helper_022b4080(&__this_03[1].fields.__2__current,__this_02);
    pSVar2 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_WeatherScheduleRunner_float);
    System_Collections_Generic_Dictionary_object__float____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,MethodInfo_Dictionary_2_Weather_WeatherScheduleRunner_System_Single);
    __this_03[1].fields.currentWeatherJson = pSVar2;
    il2cpp_runtime_helper_022b4080(&__this_03[1].fields.currentWeatherJson);
    Photon_Pun_MonoBehaviourPunCallbacks___ctor
              ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this_03,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac319 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Un);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Dictionary_string_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac319 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar5,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
  lVar1 = *(long *)(TypeInfo_WeatherManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 8) = pSVar5;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar5);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar5,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Un);
  lVar1 = *(long *)(TypeInfo_WeatherManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x10) = pSVar5;
  pSVar6 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar5);
  return pSVar6;
}


// Weather.WeatherManager$$IsWeatherEnabled
// il2cpp: bool Weather_WeatherManager__IsWeatherEnabled (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x4074a70

bool_conflict Weather_WeatherManager__IsWeatherEnabled(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  long lVar1;
  Weather_WeatherManager_o *__this_00;
  void *pvVar2;
  bool_conflict extraout_EAX;
  bool_conflict bVar3;
  System_Byte_array *pSVar4;
  Photon_Realtime_Player_o *pPVar5;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar6;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this_01;
  System_Byte_array *pSVar7;
  System_Collections_Generic_Dictionary_int__float__o *pSVar8;
  Settings_WeatherSet_o *pSVar9;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_c *__this_02;
  System_Collections_Generic_List_T__o *__this_03;
  System_Collections_Generic_Dictionary_object__object__o *pSVar10;
  System_Byte_array *in_RCX;
  System_Byte_array *targetWeatherJson;
  System_Byte_array *extraout_RDX;
  System_Byte_array *startWeatherJson;
  System_Byte_array *pSVar11;
  Weather_WeatherManager_o *pWVar12;
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this_04;
  System_Collections_Generic_Dictionary_int__float__o *in_R8;
  System_Collections_Generic_Dictionary_int__float__o *in_R9;
  Photon_Realtime_Player_o *unaff_R14;
  float fVar13;
  MethodInfo *in_stack_ffffffffffffff98;
  
  if (g_data_057ac317 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this = (Weather_WeatherManager_o *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac317 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x98), lVar1 != 0)) {
    return (bool_conflict)CONCAT71((int7)((ulong)lVar1 >> 8),*(int *)(lVar1 + 0x14) != 0);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac313 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndApplySkybox_d__51);
    g_data_057ac313 = '\x01';
  }
  pSVar4 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndApplySkybox_d__51);
  startWeatherJson = (System_Byte_array *)0x0;
  pSVar7 = pSVar4;
  Weather_WeatherManager__WaitAndApplySkybox_d__51___ctor
            ((Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)pSVar4,0,(MethodInfo *)0x0);
  if (pSVar4 != (System_Byte_array *)0x0) {
    *(Weather_WeatherManager_o **)pSVar4->m_Items = __this;
    il2cpp_runtime_helper_022b4080(pSVar4->m_Items,__this);
    return (bool_conflict)pSVar4;
  }
  fVar13 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar4 = in_RCX;
  pSVar11 = startWeatherJson;
  pSVar8 = in_R8;
  if (g_data_057ac315 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac315 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pWVar12 = (Weather_WeatherManager_o *)0x0;
    pPVar5 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  else {
    pWVar12 = (Weather_WeatherManager_o *)0x0;
    pPVar5 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  if (unaff_R14 == pPVar5) {
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
    if ((lVar1 != 0) &&
       (pPVar5 = *(Photon_Realtime_Player_o **)(lVar1 + 0x98), pPVar5 != (Photon_Realtime_Player_o *)0x0)) {
      if (*(int *)((long)&(pPVar5->fields)._RoomReference_k__BackingField + 4) == 0) goto label_04074c7a;
      if (*(int *)((long)&TypeInfo_WeatherManager[1].fields._scheduleRunners + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = *(Weather_WeatherManager_o **)TypeInfo_WeatherManager[1].monitor;
      pWVar12 = TypeInfo_WeatherManager;
      if (__this_00 != (Weather_WeatherManager_o *)0x0) {
        routine = Weather_WeatherManager__WaitAndFinishOnSetWeather
                            (__this_00,pSVar7,startWeatherJson,targetWeatherJson,
                             (System_Collections_Generic_Dictionary_int__float__o *)in_RCX,in_R8,fVar13,
                             in_stack_ffffffffffffff98);
        pUVar6 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                           ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
        return (bool_conflict)pUVar6;
      }
    }
    fVar13 = (float)il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac316 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishOnSetWeather_d__54);
      g_data_057ac316 = '\x01';
    }
    __this_01 = (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishOnSetWeather_d__54);
    __this_04 = __this_01;
    Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54___ctor(__this_01,0,(MethodInfo *)0x0);
    if (__this_01 != (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *)0x0) {
      (__this_01->fields).__4__this = pWVar12;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).__4__this,pWVar12);
      (__this_01->fields).currentWeatherJson = pSVar11;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).currentWeatherJson,pSVar11);
      (__this_01->fields).startWeatherJson = extraout_RDX;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).startWeatherJson,extraout_RDX);
      (__this_01->fields).targetWeatherJson = pSVar4;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).targetWeatherJson,pSVar4);
      (__this_01->fields).targetWeatherStartTimes = pSVar8;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).targetWeatherStartTimes,pSVar8);
      (__this_01->fields).targetWeatherEndTimes = in_R9;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).targetWeatherEndTimes);
      (__this_01->fields).currentTime = fVar13;
      return (bool_conflict)__this_01;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac318 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Weather_WeatherEffect_Weather_BaseWeatherEf);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_System_Single);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Weather_WeatherScheduleRunner_System_Single);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_float);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_WeatherEffect_BaseWeatherEffect);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_WeatherScheduleRunner_float);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Weather_WeatherEffect);
      il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_WeatherEffect);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherScheduleRunner);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Camera);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherEffect);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_WeatherScheduleRunner);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_WeatherEffect);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_Camera);
      il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
      g_data_057ac318 = '\x01';
    }
    pSVar7 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_WeatherEffect);
    System_Collections_Generic_HashSet_Int32Enum____ctor
              ((System_Collections_Generic_HashSet_T__o *)pSVar7,MethodInfo_HashSet_1_Weather_WeatherEffect);
    if (pSVar7 != (System_Byte_array *)0x0) {
      System_Collections_Generic_HashSet_Int32Enum___Add
                ((System_Collections_Generic_HashSet_T__o *)pSVar7,1,MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet_Int32Enum___Add
                ((System_Collections_Generic_HashSet_T__o *)pSVar7,4,MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet_Int32Enum___Add
                ((System_Collections_Generic_HashSet_T__o *)pSVar7,7,MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet_Int32Enum___Add
                ((System_Collections_Generic_HashSet_T__o *)pSVar7,5,MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet_Int32Enum___Add
                ((System_Collections_Generic_HashSet_T__o *)pSVar7,2,MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet_Int32Enum___Add
                ((System_Collections_Generic_HashSet_T__o *)pSVar7,3,MethodInfo_Boolean_Add);
      (__this_04->fields).currentWeatherJson = pSVar7;
      il2cpp_runtime_helper_022b4080(&(__this_04->fields).currentWeatherJson,pSVar7);
      pSVar7 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_WeatherScheduleRunner);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)pSVar7,MethodInfo_List_1_Weather_WeatherScheduleRunner);
      (__this_04->fields).startWeatherJson = pSVar7;
      il2cpp_runtime_helper_022b4080(&(__this_04->fields).startWeatherJson,pSVar7);
      pSVar7 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Camera);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)pSVar7,MethodInfo_List_1_UnityEngine_Camera);
      (__this_04->fields).targetWeatherJson = pSVar7;
      il2cpp_runtime_helper_022b4080(&(__this_04->fields).targetWeatherJson,pSVar7);
      pSVar8 = (System_Collections_Generic_Dictionary_int__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_WeatherEffect_BaseWeatherEffect);
      System_Collections_Generic_Dictionary_Int32Enum__object____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,MethodInfo_Dictionary_2_Weather_WeatherEffect_Weather_BaseWeatherEf);
      (__this_04->fields).targetWeatherStartTimes = pSVar8;
      il2cpp_runtime_helper_022b4080(&(__this_04->fields).targetWeatherStartTimes);
      pSVar9 = (Settings_WeatherSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
      Settings_WeatherSet___ctor(pSVar9,(MethodInfo *)0x0);
      (__this_04->fields).targetWeatherEndTimes =
           (System_Collections_Generic_Dictionary_int__float__o *)pSVar9;
      il2cpp_runtime_helper_022b4080(&(__this_04->fields).targetWeatherEndTimes);
      pSVar9 = (Settings_WeatherSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
      Settings_WeatherSet___ctor(pSVar9,(MethodInfo *)0x0);
      *(Settings_WeatherSet_o **)&(__this_04->fields).currentTime = pSVar9;
      il2cpp_runtime_helper_022b4080(&(__this_04->fields).currentTime);
      __this_02 = (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_c *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
      Settings_WeatherSet___ctor((Settings_WeatherSet_o *)__this_02,(MethodInfo *)0x0);
      __this_04[1].klass = __this_02;
      il2cpp_runtime_helper_022b4080(__this_04 + 1,__this_02);
      pSVar8 = (System_Collections_Generic_Dictionary_int__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_float);
      System_Collections_Generic_Dictionary_int__float____ctor(pSVar8,MethodInfo_Dictionary_2_System_Int32_System_Single);
      __this_04[1].monitor = pSVar8;
      il2cpp_runtime_helper_022b4080(&__this_04[1].monitor,pSVar8);
      pSVar8 = (System_Collections_Generic_Dictionary_int__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_float);
      System_Collections_Generic_Dictionary_int__float____ctor(pSVar8,MethodInfo_Dictionary_2_System_Int32_System_Single);
      *(System_Collections_Generic_Dictionary_int__float__o **)&__this_04[1].fields = pSVar8;
      il2cpp_runtime_helper_022b4080(&__this_04[1].fields,pSVar8);
      __this_03 = (System_Collections_Generic_List_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_WeatherEffect);
      System_Collections_Generic_List_Int32Enum____ctor(__this_03,MethodInfo_List_1_Weather_WeatherEffect);
      __this_04[1].fields.__2__current = (Il2CppObject *)__this_03;
      il2cpp_runtime_helper_022b4080(&__this_04[1].fields.__2__current,__this_03);
      pSVar7 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_WeatherScheduleRunner_float);
      System_Collections_Generic_Dictionary_object__float____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,MethodInfo_Dictionary_2_Weather_WeatherScheduleRunner_System_Single);
      __this_04[1].fields.currentWeatherJson = pSVar7;
      il2cpp_runtime_helper_022b4080(&__this_04[1].fields.currentWeatherJson);
      Photon_Pun_MonoBehaviourPunCallbacks___ctor
                ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this_04,(MethodInfo *)0x0);
      return extraout_EAX;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac319 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Un);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Material);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Dictionary_string_Material);
      il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
      g_data_057ac319 = '\x01';
    }
    pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Material);
    System_Collections_Generic_Dictionary_object__object____ctor(pSVar10,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
    pvVar2 = TypeInfo_WeatherManager[1].monitor;
    *(System_Collections_Generic_Dictionary_object__object__o **)((long)pvVar2 + 8) = pSVar10;
    il2cpp_runtime_helper_022b4080((long)pvVar2 + 8,pSVar10);
    pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Dictionary_string_Material);
    System_Collections_Generic_Dictionary_object__object____ctor(pSVar10,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Un);
    pvVar2 = TypeInfo_WeatherManager[1].monitor;
    *(System_Collections_Generic_Dictionary_object__object__o **)((long)pvVar2 + 0x10) = pSVar10;
    bVar3 = il2cpp_runtime_helper_022b4080((long)pvVar2 + 0x10,pSVar10);
    return bVar3;
  }
label_04074c7a:
  return (bool_conflict)pPVar5;
}


// Weather.WeatherManager$$.ctor
// il2cpp: void Weather_WeatherManager___ctor (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x4074d90

void Weather_WeatherManager___ctor(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_HashSet_WeatherEffect__o *__this_00;
  System_Collections_Generic_List_WeatherScheduleRunner__o *__this_01;
  System_Collections_Generic_List_Camera__o *__this_02;
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *__this_03;
  Settings_WeatherSet_o *pSVar2;
  System_Collections_Generic_Dictionary_int__float__o *pSVar3;
  System_Collections_Generic_List_T__o *__this_04;
  System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *__this_05;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  
  if (g_data_057ac318 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Weather_WeatherEffect_Weather_BaseWeatherEf);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_System_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Weather_WeatherScheduleRunner_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_WeatherEffect_BaseWeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_WeatherScheduleRunner_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Weather_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherScheduleRunner);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Camera);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_WeatherScheduleRunner);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Camera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSet);
    g_data_057ac318 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_WeatherEffect__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_WeatherEffect);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,MethodInfo_HashSet_1_Weather_WeatherEffect);
  if (__this_00 != (System_Collections_Generic_HashSet_WeatherEffect__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,1,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,7,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,5,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,2,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,3,MethodInfo_Boolean_Add);
    (__this->fields).LowEffects = __this_00;
    il2cpp_runtime_helper_022b4080(&(__this->fields).LowEffects,__this_00);
    __this_01 = (System_Collections_Generic_List_WeatherScheduleRunner__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_WeatherScheduleRunner);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_Weather_WeatherScheduleRunner);
    (__this->fields)._scheduleRunners = __this_01;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._scheduleRunners,__this_01);
    __this_02 = (System_Collections_Generic_List_Camera__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Camera);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_UnityEngine_Camera);
    (__this->fields)._skyboxCameras = __this_02;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._skyboxCameras,__this_02);
    __this_03 = (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)
                il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_WeatherEffect_BaseWeatherEffect);
    System_Collections_Generic_Dictionary_Int32Enum__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,MethodInfo_Dictionary_2_Weather_WeatherEffect_Weather_BaseWeatherEf);
    (__this->fields)._effects = __this_03;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._effects);
    pSVar2 = (Settings_WeatherSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
    Settings_WeatherSet___ctor(pSVar2,(MethodInfo *)0x0);
    (__this->fields)._currentWeather = pSVar2;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._currentWeather);
    pSVar2 = (Settings_WeatherSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
    Settings_WeatherSet___ctor(pSVar2,(MethodInfo *)0x0);
    (__this->fields)._targetWeather = pSVar2;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._targetWeather);
    pSVar2 = (Settings_WeatherSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSet);
    Settings_WeatherSet___ctor(pSVar2,(MethodInfo *)0x0);
    (__this->fields)._startWeather = pSVar2;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._startWeather,pSVar2);
    pSVar3 = (System_Collections_Generic_Dictionary_int__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_float);
    System_Collections_Generic_Dictionary_int__float____ctor(pSVar3,MethodInfo_Dictionary_2_System_Int32_System_Single);
    (__this->fields)._targetWeatherStartTimes = pSVar3;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._targetWeatherStartTimes,pSVar3);
    pSVar3 = (System_Collections_Generic_Dictionary_int__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_float);
    System_Collections_Generic_Dictionary_int__float____ctor(pSVar3,MethodInfo_Dictionary_2_System_Int32_System_Single);
    (__this->fields)._targetWeatherEndTimes = pSVar3;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._targetWeatherEndTimes,pSVar3);
    __this_04 = (System_Collections_Generic_List_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_WeatherEffect);
    System_Collections_Generic_List_Int32Enum____ctor(__this_04,MethodInfo_List_1_Weather_WeatherEffect);
    (__this->fields)._needApply = (System_Collections_Generic_List_WeatherEffect__o *)__this_04;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._needApply,__this_04);
    __this_05 = (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)
                il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_WeatherScheduleRunner_float);
    System_Collections_Generic_Dictionary_object__float____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_05,MethodInfo_Dictionary_2_Weather_WeatherScheduleRunner_System_Single);
    (__this->fields)._currentScheduleWait = __this_05;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._currentScheduleWait);
    Photon_Pun_MonoBehaviourPunCallbacks___ctor
              ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac319 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Un);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Dictionary_string_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac319 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar4,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
  lVar1 = *(long *)(TypeInfo_WeatherManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 8) = pSVar4;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar4);
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar4,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Un);
  lVar1 = *(long *)(TypeInfo_WeatherManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x10) = pSVar4;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar4);
  return;
}


// Weather.WeatherManager$$.cctor
// il2cpp: void Weather_WeatherManager___cctor (const MethodInfo* method);
// 0x4075110

void Weather_WeatherManager___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  
  if (g_data_057ac319 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Un);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Dictionary_string_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057ac319 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
  lVar1 = *(long *)(TypeInfo_WeatherManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Un);
  lVar1 = *(long *)(TypeInfo_WeatherManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar2);
  return;
}


