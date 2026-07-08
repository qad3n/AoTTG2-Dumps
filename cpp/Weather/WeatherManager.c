// Type: Weather.WeatherManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Weather/WeatherManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Weather/WeatherManager.cs  [CHANGED since prior version]
// --------------------------------

// Weather.WeatherManager.<UpdateReflectionTexture>d__30$$.ctor
// il2cpp: void Weather_WeatherManager__UpdateReflectionTexture_d__30___ctor (Weather_WeatherManager__UpdateReflectionTexture_d__30_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3d7f8a0

void Weather_WeatherManager_<UpdateReflectionTexture>d__30___ctor
               (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Weather.WeatherManager.<UpdateReflectionTexture>d__30$$System.IDisposable.Dispose
// il2cpp: void Weather_WeatherManager__UpdateReflectionTexture_d__30__System_IDisposable_Dispose (Weather_WeatherManager__UpdateReflectionTexture_d__30_o* __this, const MethodInfo* method);
// 0x3d7f8c0

void Weather_WeatherManager_<UpdateReflectionTexture>d__30__System_IDisposable_Dispose
               (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *__this,MethodInfo *method)

{
  return;
}


// Weather.WeatherManager.<UpdateReflectionTexture>d__30$$MoveNext
// il2cpp: bool Weather_WeatherManager__UpdateReflectionTexture_d__30__MoveNext (Weather_WeatherManager__UpdateReflectionTexture_d__30_o* __this, const MethodInfo* method);
// 0x3d7f8d0

bool_conflict
Weather_WeatherManager_<UpdateReflectionTexture>d__30__MoveNext
          (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *__this,MethodInfo *method)

{
  int iVar1;
  Weather_WeatherManager_o *pWVar2;
  UnityEngine_ReflectionProbe_o *__this_00;
  Il2CppObject *__this_01;
  UnityEngine_Texture_o *value;
  bool_conflict bVar3;
  
  if (DAT_0570266c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    DAT_0570266c = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    pWVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((pWVar2 == (Weather_WeatherManager_o *)0x0) ||
       (__this_00 = *(UnityEngine_ReflectionProbe_o **)&(pWVar2->fields)._currentWindForce,
       __this_00 == (UnityEngine_ReflectionProbe_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar3 = 0;
    value = UnityEngine_ReflectionProbe__get_texture(__this_00,(MethodInfo *)0x0);
    UnityEngine_RenderSettings__set_customReflectionTexture(value,(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)__this_01,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_01;
    il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
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
// 0x3d7f980

Il2CppObject *
Weather_WeatherManager_<UpdateReflectionTexture>d__30__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager.<UpdateReflectionTexture>d__30$$System.Collections.IEnumerator.Reset
// il2cpp: void Weather_WeatherManager__UpdateReflectionTexture_d__30__System_Collections_IEnumerator_Reset (Weather_WeatherManager__UpdateReflectionTexture_d__30_o* __this, const MethodInfo* method);
// 0x3d7f990

void Weather_WeatherManager_<UpdateReflectionTexture>d__30__System_Collections_IEnumerator_Reset
               (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// Weather.WeatherManager.<UpdateReflectionTexture>d__30$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__UpdateReflectionTexture_d__30__System_Collections_IEnumerator_get_Current (Weather_WeatherManager__UpdateReflectionTexture_d__30_o* __this, const MethodInfo* method);
// 0x3d7f9d0

Il2CppObject *
Weather_WeatherManager_<UpdateReflectionTexture>d__30__System_Collections_IEnumerator_get_Current
          (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__51$$.ctor
// il2cpp: void Weather_WeatherManager__WaitAndApplySkybox_d__51___ctor (Weather_WeatherManager__WaitAndApplySkybox_d__51_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3d7f9e0

void Weather_WeatherManager_<WaitAndApplySkybox>d__51___ctor
               (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__51$$System.IDisposable.Dispose
// il2cpp: void Weather_WeatherManager__WaitAndApplySkybox_d__51__System_IDisposable_Dispose (Weather_WeatherManager__WaitAndApplySkybox_d__51_o* __this, const MethodInfo* method);
// 0x3d7fa00

void Weather_WeatherManager_<WaitAndApplySkybox>d__51__System_IDisposable_Dispose
               (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *__this,MethodInfo *method)

{
  return;
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__51$$MoveNext
// il2cpp: bool Weather_WeatherManager__WaitAndApplySkybox_d__51__MoveNext (Weather_WeatherManager__WaitAndApplySkybox_d__51_o* __this, const MethodInfo* method);
// 0x3d7fa10

bool_conflict
Weather_WeatherManager_<WaitAndApplySkybox>d__51__MoveNext
          (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *__this,MethodInfo *method)

{
  int iVar1;
  Weather_WeatherManager_o *__this_00;
  Settings_StringSetting_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  long lVar4;
  Settings_WeatherSet_o *pSVar5;
  Settings_ColorSetting_o *pSVar6;
  Utility_Color255_o *__this_01;
  System_Collections_Generic_List_Camera__o *__this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar7;
  Il2CppObject *__this_05;
  long *plVar8;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *pUVar9;
  UnityEngine_GameObject_o *__this_06;
  UnityEngine_Skybox_o *pUVar10;
  System_String_o *skybox2;
  System_String_o *skybox1;
  UnityEngine_Color_o value;
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  Il2CppType *pIVar12;
  UnityEngine_Component_o *__this_07;
  undefined1 auStack_48 [16];
  UnityEngine_Component_o *pUStack_38;
  
  if (DAT_0570266d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Material_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Camera_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Skybox_GetComponentInChildren_Skybox);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_Camera__GetEnum);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SkyboxCustomSkinLoader);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    il2cpp_init_method_metadata(&"CaveMap1");
    il2cpp_init_method_metadata(&"Day1");
    il2cpp_init_method_metadata(&"_Tint");
    DAT_0570266d = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    __this_05 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)__this_05,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_05;
    il2cpp_runtime_glue(&(__this->fields).__2__current,__this_05);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)__this_05 >> 8),1);
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  plVar8 = *(long **)(TypeInfo_WeatherManager + 0xb8);
  if (*plVar8 != 0) {
    if (*(char *)(*plVar8 + 0x91) == '\0') {
      if (__this_00 == (Weather_WeatherManager_o *)0x0) goto LAB_03d7fe6a;
      bVar7 = Weather_WeatherManager__IsWeatherEnabled(__this_00,(MethodInfo *)0x0);
      skybox2 = "Day1";
      skybox1 = "Day1";
      if ((char)bVar7 != '\0') {
        pSVar5 = (__this_00->fields)._currentWeather;
        if ((((pSVar5 == (Settings_WeatherSet_o *)0x0) ||
             (pSVar2 = (pSVar5->fields).Skybox, pSVar2 == (Settings_StringSetting_o *)0x0)) ||
            (pSVar5 = (__this_00->fields)._targetWeather, pSVar5 == (Settings_WeatherSet_o *)0x0))
           || (pSVar3 = (pSVar5->fields).Skybox, pSVar3 == (Settings_StringSetting_o *)0x0))
        goto LAB_03d7fe6a;
        skybox2 = (pSVar3->fields)._value;
        skybox1 = (pSVar2->fields)._value;
      }
      x = (UnityEngine_Object_o *)
          Weather_WeatherManager__GetBlendedSkybox(__this_00,skybox1,skybox2,(MethodInfo *)0x0);
    }
    else {
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_init_class();
        plVar8 = *(long **)(TypeInfo_WeatherManager + 0xb8);
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)plVar8[1] ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03d7fe6a;
      x = (UnityEngine_Object_o *)
          System_Collections_Generic_Dictionary<object__object>__get_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)plVar8[1],
                     "CaveMap1",MethodInfo_Material_get_Item);
    }
    lVar4 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (lVar4 != 0) {
      pUVar10 = *(UnityEngine_Skybox_o **)(lVar4 + 0x30);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return 0;
      }
      if (pUVar10 != (UnityEngine_Skybox_o *)0x0) {
        pUVar9 = (UnityEngine_Object_o *)UnityEngine_Skybox__get_material(pUVar10,(MethodInfo *)0x0)
        ;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality(pUVar9,x,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          return 0;
        }
        pUVar9 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_SkyboxCustomSkinLoader + 0xb8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Equality
                          (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          return 0;
        }
        if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (**(long **)(TypeInfo_WeatherManager + 0xb8) != 0) {
          if (*(char *)(**(long **)(TypeInfo_WeatherManager + 0xb8) + 0x91) == '\0') {
            if (((__this_00 == (Weather_WeatherManager_o *)0x0) ||
                (pSVar5 = (__this_00->fields)._currentWeather,
                pSVar5 == (Settings_WeatherSet_o *)0x0)) ||
               ((pSVar6 = (pSVar5->fields).SkyboxColor, pSVar6 == (Settings_ColorSetting_o *)0x0 ||
                ((__this_01 = (pSVar6->fields)._value, __this_01 == (Utility_Color255_o *)0x0 ||
                 (value = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0),
                 x == (UnityEngine_Object_o *)0x0)))))) goto LAB_03d7fe6a;
            UnityEngine_Material__SetColor
                      ((UnityEngine_Material_o *)x,"_Tint",value,(MethodInfo *)0x0);
          }
          else if (__this_00 == (Weather_WeatherManager_o *)0x0) goto LAB_03d7fe6a;
          __this_02 = (__this_00->fields)._skyboxCameras;
          if (__this_02 != (System_Collections_Generic_List_Camera__o *)0x0) {
            System_Collections_Generic_List<object>__GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
                       (System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_T__Enumerator_UnityEngine_Camera__GetEnum);
            pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
            pIVar12 = (Il2CppType *)auStack_48._8_8_;
            __this_07 = pUStack_38;
            while( true ) {
              __this_03.fields._8_8_ = pIVar12;
              __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
              __this_03.fields._current = (Il2CppObject *)__this_07;
              bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_03,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
              if ((char)bVar7 == '\0') {
                __this_04.fields._8_8_ = pIVar12;
                __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
                __this_04.fields._current = (Il2CppObject *)__this_07;
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (__this_04,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
                return 0;
              }
              if (__this_07 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              __this_06 = UnityEngine_Component__get_gameObject(__this_07,(MethodInfo *)0x0);
              if (__this_06 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pUVar10 = (UnityEngine_Skybox_o *)
                        UnityEngine_GameObject__GetComponentInChildren<object>
                                  (__this_06,MethodInfo_Skybox_GetComponentInChildren_Skybox);
              if (pUVar10 == (UnityEngine_Skybox_o *)0x0) break;
              UnityEngine_Skybox__set_material
                        (pUVar10,(UnityEngine_Material_o *)x,(MethodInfo *)0x0);
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
  }
LAB_03d7fe6a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__51$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__WaitAndApplySkybox_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current (Weather_WeatherManager__WaitAndApplySkybox_d__51_o* __this, const MethodInfo* method);
// 0x3d7ff30

Il2CppObject *
Weather_WeatherManager_<WaitAndApplySkybox>d__51__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__51$$System.Collections.IEnumerator.Reset
// il2cpp: void Weather_WeatherManager__WaitAndApplySkybox_d__51__System_Collections_IEnumerator_Reset (Weather_WeatherManager__WaitAndApplySkybox_d__51_o* __this, const MethodInfo* method);
// 0x3d7ff40

void Weather_WeatherManager_<WaitAndApplySkybox>d__51__System_Collections_IEnumerator_Reset
               (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__51$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__WaitAndApplySkybox_d__51__System_Collections_IEnumerator_get_Current (Weather_WeatherManager__WaitAndApplySkybox_d__51_o* __this, const MethodInfo* method);
// 0x3d7ff80

Il2CppObject *
Weather_WeatherManager_<WaitAndApplySkybox>d__51__System_Collections_IEnumerator_get_Current
          (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__54$$.ctor
// il2cpp: void Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54___ctor (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3d7ff90

void Weather_WeatherManager_<WaitAndFinishOnSetWeather>d__54___ctor
               (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this,int32_t __1__state
               ,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__54$$System.IDisposable.Dispose
// il2cpp: void Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54__System_IDisposable_Dispose (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o* __this, const MethodInfo* method);
// 0x3d7ffb0

void Weather_WeatherManager_<WaitAndFinishOnSetWeather>d__54__System_IDisposable_Dispose
               (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this,MethodInfo *method
               )

{
  return;
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__54$$MoveNext
// il2cpp: bool Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54__MoveNext (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o* __this, const MethodInfo* method);
// 0x3d7ffc0

bool_conflict
Weather_WeatherManager_<WaitAndFinishOnSetWeather>d__54__MoveNext
          (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this,MethodInfo *method)

{
  Weather_WeatherManager_o *__this_00;
  Settings_WeatherSet_o *pSVar1;
  System_String_o *pSVar2;
  
  if (DAT_0570266e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DataCompressors);
    DAT_0570266e = '\x01';
  }
  if (1 < (uint)(__this->fields).__1__state) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (__this_00 != (Weather_WeatherManager_o *)0x0) {
    if ((char)(__this_00->fields)._finishedLoading == '\0') {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      il2cpp_runtime_glue(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
    }
    pSVar1 = (__this_00->fields)._currentWeather;
    if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (((Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8) !=
         (Utility_Algorithms_CompressionAlgorithm_o *)0x0) &&
       (pSVar2 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                           ((Utility_Algorithms_CompressionAlgorithm_o *)
                            **(undefined8 **)(TypeInfo_DataCompressors + 0xb8),
                            (__this->fields).currentWeatherJson,0x1000,0xa00000,(MethodInfo *)0x0),
       pSVar1 != (Settings_WeatherSet_o *)0x0)) {
      (*(pSVar1->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
                (pSVar1,pSVar2,(pSVar1->klass->vtable)._8_DeserializeFromJsonString.method);
      if ((Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8) !=
          (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
        pSVar1 = (__this_00->fields)._startWeather;
        pSVar2 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                           ((Utility_Algorithms_CompressionAlgorithm_o *)
                            **(undefined8 **)(TypeInfo_DataCompressors + 0xb8),(__this->fields).startWeatherJson
                            ,0x1000,0xa00000,(MethodInfo *)0x0);
        if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
          (*(pSVar1->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
                    (pSVar1,pSVar2,(pSVar1->klass->vtable)._8_DeserializeFromJsonString.method);
          if ((Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8) !=
              (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
            pSVar1 = (__this_00->fields)._targetWeather;
            pSVar2 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                               ((Utility_Algorithms_CompressionAlgorithm_o *)
                                **(undefined8 **)(TypeInfo_DataCompressors + 0xb8),
                                (__this->fields).targetWeatherJson,0x1000,0xa00000,(MethodInfo *)0x0
                               );
            if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
              (*(pSVar1->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
                        (pSVar1,pSVar2,(pSVar1->klass->vtable)._8_DeserializeFromJsonString.method);
              (__this_00->fields)._targetWeatherStartTimes =
                   (__this->fields).targetWeatherStartTimes;
              il2cpp_runtime_glue(&(__this_00->fields)._targetWeatherStartTimes);
              (__this_00->fields)._targetWeatherEndTimes = (__this->fields).targetWeatherEndTimes;
              il2cpp_runtime_glue(&(__this_00->fields)._targetWeatherEndTimes);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__54$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o* __this, const MethodInfo* method);
// 0x3d801a0

Il2CppObject *
Weather_WeatherManager_<WaitAndFinishOnSetWeather>d__54__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__54$$System.Collections.IEnumerator.Reset
// il2cpp: void Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54__System_Collections_IEnumerator_Reset (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o* __this, const MethodInfo* method);
// 0x3d801b0

void Weather_WeatherManager_<WaitAndFinishOnSetWeather>d__54__System_Collections_IEnumerator_Reset
               (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this,MethodInfo *method
               )

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__54$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54__System_Collections_IEnumerator_get_Current (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o* __this, const MethodInfo* method);
// 0x3d801f0

Il2CppObject *
Weather_WeatherManager_<WaitAndFinishOnSetWeather>d__54__System_Collections_IEnumerator_get_Current
          (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager$$Init
// il2cpp: void Weather_WeatherManager__Init (const MethodInfo* method);
// 0x3d78be0

void Weather_WeatherManager__Init(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Events_OnPreLoadScene_o *value;
  MethodInfo *method_00;
  
  if (DAT_0570264b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_OnPreLoadScene);
    il2cpp_init_method_metadata(&MethodInfo_WeatherManager_CreateSingleton_WeatherManager);
    il2cpp_init_method_metadata(&TypeInfo_ThunderWeatherEffect);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnPreLoadScene);
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    DAT_0570264b = '\x01';
  }
  if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = Utility_SingletonFactory__CreateSingleton<object>
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_WeatherManager + 0xb8),MethodInfo_WeatherManager_CreateSingleton_WeatherManager);
  **(undefined8 **)(TypeInfo_WeatherManager + 0xb8) = pIVar1;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_WeatherManager + 0xb8));
  method_00 = TypeInfo_ThunderWeatherEffect;
  if (*(int *)((long)&TypeInfo_ThunderWeatherEffect[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  Weather_ThunderWeatherEffect__OnFinishInit(method_00);
  Weather_WeatherManager__LoadSkyboxes(method_00);
  value = (Events_OnPreLoadScene_o *)il2cpp_runtime_glue(TypeInfo_OnPreLoadScene);
  Events_OnPreLoadScene___ctor();
  Events_EventManager__add_OnPreLoadScene(value,(MethodInfo *)0x0);
  return;
}


// Weather.WeatherManager$$OnPreLoadScene
// il2cpp: void Weather_WeatherManager__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x3d79180

/* WARNING: Removing unreachable block (ram,0x03d7936d) */

void Weather_WeatherManager__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  MethodInfo *pMVar2;
  _union_247328 _Var3;
  Il2CppType *pIVar4;
  Weather_LightningParticle_o *__this_03;
  _union_247328 _Stack_68;
  Il2CppType *pIStack_60;
  Weather_LightningParticle_o *pWStack_58;
  _union_247328 _Stack_48;
  Il2CppType *pIStack_40;
  Weather_LightningParticle_o *pWStack_38;
  
  if (DAT_0570264c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_LightningParticle_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Weather_LightningParticle__get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Weather_LightningParticle);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_List_1_Weather_LightningPar);
    il2cpp_init_method_metadata(&TypeInfo_ThunderWeatherEffect);
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    il2cpp_init_method_metadata(&TypeInfo_WindWeatherEffect);
    DAT_0570264c = '\x01';
  }
  _Stack_68.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  pWStack_58 = (Weather_LightningParticle_o *)0x0;
  if (*(int *)(TypeInfo_WindWeatherEffect + 0xe4) == 0) {
    il2cpp_init_class();
  }
  **(undefined1 **)(TypeInfo_WindWeatherEffect + 0xb8) = 0;
  if (*(int *)(TypeInfo_ThunderWeatherEffect + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_ThunderWeatherEffect + 0xb8) !=
      (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_48,
               (System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_ThunderWeatherEffect + 0xb8),
               MethodInfo_List_1_T__Enumerator_List_1_Weather_LightningPar);
    _Var3 = _Stack_48;
    pIVar4 = pIStack_40;
    __this_03 = pWStack_38;
    while (__this.fields._8_8_ = pIVar4, __this.fields._list = _Var3.genericMethod,
          __this.fields._current = (Il2CppObject *)__this_03,
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this,(MethodInfo_3185E20 *)&stack0xffffffffffffff78),
          (char)bVar1 != '\0') {
      if (__this_03 == (Weather_LightningParticle_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_48,
                 (System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_T__Enumerator_Weather_LightningParticle);
      pWStack_58 = pWStack_38;
      _Stack_68.genericMethod = _Stack_48.genericMethod;
      pIStack_60 = pIStack_40;
      while (__this_00.fields._8_8_ = pIVar4, __this_00.fields._list = _Var3.genericMethod,
            __this_00.fields._current = (Il2CppObject *)__this_03, pMVar2 = MethodInfo_Boolean_MoveNext,
            bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_00,(MethodInfo_3185E20 *)&_Stack_68), (char)bVar1 != '\0') {
        if (pWStack_58 == (Weather_LightningParticle_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        Weather_LightningParticle__Disable(pWStack_58,pMVar2);
      }
      __this_01.fields._8_8_ = pIVar4;
      __this_01.fields._list = _Var3.genericMethod;
      __this_01.fields._current = (Il2CppObject *)__this_03;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_01,(MethodInfo_3185E10 *)&_Stack_68);
    }
    __this_02.fields._8_8_ = pIVar4;
    __this_02.fields._list = _Var3.genericMethod;
    __this_02.fields._current = (Il2CppObject *)__this_03;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff78);
    if (*(int *)((long)&TypeInfo_WeatherManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    pMVar2 = TypeInfo_WeatherManager;
    if (*(long *)TypeInfo_WeatherManager[2].virtualMethodPointer != 0) {
      *(undefined1 *)(*(long *)TypeInfo_WeatherManager[2].virtualMethodPointer + 0x90) = 0;
      Weather_WeatherManager__DisableCaveMap(pMVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$EnableCaveMap
// il2cpp: void Weather_WeatherManager__EnableCaveMap (const MethodInfo* method);
// 0x3d79570

void Weather_WeatherManager__EnableCaveMap(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UnityEngine_ReflectionProbe_o *pUVar3;
  Weather_WeatherManager_o *__this;
  long *plVar4;
  UnityEngine_Material_o *value;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar5;
  Weather_WeatherManager__UpdateReflectionTexture_d__30_o *__this_01;
  
  if (DAT_0570264d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Material_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_ReflectionProbe_AddComponent_ReflectionProbe);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    il2cpp_init_method_metadata(&"CaveMap1");
    DAT_0570264d = '\x01';
    iVar1 = *(int *)(TypeInfo_WeatherManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_WeatherManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    plVar4 = *(long **)(TypeInfo_WeatherManager + 0xb8);
    lVar2 = *plVar4;
  }
  else {
    plVar4 = *(long **)(TypeInfo_WeatherManager + 0xb8);
    lVar2 = *plVar4;
  }
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x91) != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
      il2cpp_init_class();
      plVar4 = *(long **)(TypeInfo_WeatherManager + 0xb8);
    }
    if (*plVar4 != 0) {
      *(undefined1 *)(*plVar4 + 0x91) = 1;
      if ((System_Collections_Generic_Dictionary_object__object__o *)plVar4[1] !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        value = (UnityEngine_Material_o *)
                System_Collections_Generic_Dictionary<object__object>__get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)plVar4[1],
                           "CaveMap1",MethodInfo_Material_get_Item);
        UnityEngine_RenderSettings__set_skybox(value,(MethodInfo *)0x0);
        UnityEngine_RenderSettings__set_defaultReflectionMode(1,(MethodInfo *)0x0);
        UnityEngine_RenderSettings__set_ambientMode(0,(MethodInfo *)0x0);
        UnityEngine_RenderSettings__set_ambientIntensity(1.0,(MethodInfo *)0x0);
        UnityEngine_RenderSettings__set_reflectionIntensity(1.0,(MethodInfo *)0x0);
        __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor(__this_00,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          lVar2 = **(long **)(TypeInfo_WeatherManager + 0xb8);
          pIVar5 = UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_ReflectionProbe_AddComponent_ReflectionProbe);
          if (lVar2 != 0) {
            *(Il2CppObject **)(lVar2 + 0xa0) = pIVar5;
            il2cpp_runtime_glue(lVar2 + 0xa0);
            if ((**(long **)(TypeInfo_WeatherManager + 0xb8) != 0) &&
               (pUVar3 = *(UnityEngine_ReflectionProbe_o **)
                          (**(long **)(TypeInfo_WeatherManager + 0xb8) + 0xa0),
               pUVar3 != (UnityEngine_ReflectionProbe_o *)0x0)) {
              UnityEngine_ReflectionProbe__set_cullingMask(pUVar3,0,(MethodInfo *)0x0);
              if ((**(long **)(TypeInfo_WeatherManager + 0xb8) != 0) &&
                 (pUVar3 = *(UnityEngine_ReflectionProbe_o **)
                            (**(long **)(TypeInfo_WeatherManager + 0xb8) + 0xa0),
                 pUVar3 != (UnityEngine_ReflectionProbe_o *)0x0)) {
                UnityEngine_ReflectionProbe__set_refreshMode(pUVar3,2,(MethodInfo *)0x0);
                if ((**(long **)(TypeInfo_WeatherManager + 0xb8) != 0) &&
                   (pUVar3 = *(UnityEngine_ReflectionProbe_o **)
                              (**(long **)(TypeInfo_WeatherManager + 0xb8) + 0xa0),
                   pUVar3 != (UnityEngine_ReflectionProbe_o *)0x0)) {
                  UnityEngine_ReflectionProbe__set_mode(pUVar3,1,(MethodInfo *)0x0);
                  if ((**(long **)(TypeInfo_WeatherManager + 0xb8) != 0) &&
                     (pUVar3 = *(UnityEngine_ReflectionProbe_o **)
                                (**(long **)(TypeInfo_WeatherManager + 0xb8) + 0xa0),
                     pUVar3 != (UnityEngine_ReflectionProbe_o *)0x0)) {
                    UnityEngine_ReflectionProbe__set_timeSlicingMode(pUVar3,2,(MethodInfo *)0x0);
                    UnityEngine_DynamicGI__UpdateEnvironment((MethodInfo *)0x0);
                    if ((**(long **)(TypeInfo_WeatherManager + 0xb8) != 0) &&
                       (pUVar3 = *(UnityEngine_ReflectionProbe_o **)
                                  (**(long **)(TypeInfo_WeatherManager + 0xb8) + 0xa0),
                       pUVar3 != (UnityEngine_ReflectionProbe_o *)0x0)) {
                      UnityEngine_ReflectionProbe__RenderProbe(pUVar3,(MethodInfo *)0x0);
                      __this = (Weather_WeatherManager_o *)**(undefined8 **)(TypeInfo_WeatherManager + 0xb8);
                      if (__this != (Weather_WeatherManager_o *)0x0) {
                        if (DAT_0570264e == '\0') {
                          il2cpp_init_method_metadata(&TypeInfo_UpdateReflectionTexture_d__30);
                          DAT_0570264e = '\x01';
                        }
                        __this_01 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)
                                    il2cpp_runtime_glue(TypeInfo_UpdateReflectionTexture_d__30);
                        Weather_WeatherManager_<UpdateReflectionTexture>d__30___ctor
                                  (__this_01,0,(MethodInfo *)0x0);
                        if (__this_01 !=
                            (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)0x0) {
                          (__this_01->fields).__4__this = __this;
                          il2cpp_runtime_glue(&(__this_01->fields).__4__this,__this);
                          UnityEngine_MonoBehaviour__StartCoroutine
                                    ((UnityEngine_MonoBehaviour_o *)__this,
                                     (System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0
                                    );
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$UpdateReflectionTexture
// il2cpp: System_Collections_IEnumerator_o* Weather_WeatherManager__UpdateReflectionTexture (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x3d79890

System_Collections_IEnumerator_o *
Weather_WeatherManager__UpdateReflectionTexture(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  Weather_WeatherManager__UpdateReflectionTexture_d__30_o *__this_00;
  
  if (DAT_0570264e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UpdateReflectionTexture_d__30);
    DAT_0570264e = '\x01';
  }
  __this_00 = (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)
              il2cpp_runtime_glue(TypeInfo_UpdateReflectionTexture_d__30);
  Weather_WeatherManager_<UpdateReflectionTexture>d__30___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Weather_WeatherManager__UpdateReflectionTexture_d__30_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&(__this_00->fields).__4__this,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$DisableCaveMap
// il2cpp: void Weather_WeatherManager__DisableCaveMap (const MethodInfo* method);
// 0x3d794c0

void Weather_WeatherManager__DisableCaveMap(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_0570264f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    DAT_0570264f = '\x01';
    iVar1 = *(int *)(TypeInfo_WeatherManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_WeatherManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = **(long **)(TypeInfo_WeatherManager + 0xb8);
  }
  else {
    lVar2 = **(long **)(TypeInfo_WeatherManager + 0xb8);
  }
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x91) = 0;
    UnityEngine_RenderSettings__set_skybox((UnityEngine_Material_o *)0x0,(MethodInfo *)0x0);
    UnityEngine_RenderSettings__set_defaultReflectionMode(0,(MethodInfo *)0x0);
    UnityEngine_RenderSettings__set_ambientMode(3,(MethodInfo *)0x0);
    UnityEngine_RenderSettings__set_ambientIntensity(1.0,(MethodInfo *)0x0);
    UnityEngine_RenderSettings__set_reflectionIntensity(0.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$OnFinishLoading
// il2cpp: void Weather_WeatherManager__OnFinishLoading (const MethodInfo* method);
// 0x3d79900

void Weather_WeatherManager__OnFinishLoading(MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t length;
  Weather_WeatherManager_o *__this;
  System_Collections_Generic_List_WeatherScheduleRunner__o *pSVar3;
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *__this_00;
  Settings_WeatherSet_o *pSVar4;
  System_Collections_Generic_Dictionary_int__float__o *pSVar5;
  System_Collections_Generic_List_WeatherEffect__o *pSVar6;
  System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *__this_01;
  long lVar7;
  Settings_ListSetting_T__o *__this_02;
  Settings_StringSetting_o *pSVar8;
  Settings_StringSetting_c *pSVar9;
  Settings_BoolSetting_o *pSVar10;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  char cVar11;
  bool_conflict bVar12;
  Settings_BaseSetting_o *pSVar13;
  long lVar14;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *in_RSI;
  MethodInfo *pMVar15;
  Weather_WeatherManager_o *__this_05;
  System_Collections_Generic_List_T__o *pSVar16;
  Il2CppMethodPointer pIVar17;
  Weather_WeatherScheduleRunner_o *__this_06;
  Weather_WeatherScheduleRunner_o *pWVar18;
  
  if (DAT_05702650 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    DAT_05702650 = '\x01';
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) != 0) goto LAB_03d7991d;
LAB_03d79955:
    il2cpp_init_class();
    __this = (Weather_WeatherManager_o *)**(undefined8 **)(TypeInfo_WeatherManager + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) goto LAB_03d79955;
LAB_03d7991d:
    __this = (Weather_WeatherManager_o *)**(undefined8 **)(TypeInfo_WeatherManager + 0xb8);
  }
  if (__this == (Weather_WeatherManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702659 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_WeatherScheduleRunner_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Weather_WeatherScheduleRunn);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_WeatherSet);
    il2cpp_init_method_metadata(&"Map Default*");
    DAT_05702659 = '\x01';
  }
  pSVar16 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar17 = (Il2CppMethodPointer)0x0;
  __this_06 = (Weather_WeatherScheduleRunner_o *)0x0;
  __this_05 = __this;
  Weather_WeatherManager__ResetCameras(__this,in_RSI);
  Weather_WeatherManager__ResetSkyboxColors(__this_05,in_RSI);
  if (DAT_05702657 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    DAT_05702657 = '\x01';
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) != 0) goto LAB_03d79abf;
LAB_03d79af9:
    il2cpp_init_class();
    lVar14 = **(long **)(TypeInfo_WeatherManager + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) goto LAB_03d79af9;
LAB_03d79abf:
    lVar14 = **(long **)(TypeInfo_WeatherManager + 0xb8);
  }
  if (lVar14 == 0) goto LAB_03d79fac;
  *(undefined4 *)(lVar14 + 0x9c) = 0;
  *(undefined8 *)(lVar14 + 0x94) = 0;
  pSVar3 = (__this->fields)._scheduleRunners;
  if (pSVar3 == (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) goto LAB_03d79fac;
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
  goto LAB_03d79fac;
  System_Collections_Generic_Dictionary<Int32Enum__object>__Clear
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Void_Clear);
  pSVar4 = (__this->fields)._currentWeather;
  if (pSVar4 == (Settings_WeatherSet_o *)0x0) goto LAB_03d79fac;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)
            (pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  pSVar4 = (__this->fields)._startWeather;
  if (pSVar4 == (Settings_WeatherSet_o *)0x0) goto LAB_03d79fac;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)
            (pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  pSVar4 = (__this->fields)._targetWeather;
  if (pSVar4 == (Settings_WeatherSet_o *)0x0) goto LAB_03d79fac;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)
            (pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  pSVar5 = (__this->fields)._targetWeatherStartTimes;
  if (pSVar5 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto LAB_03d79fac;
  System_Collections_Generic_Dictionary<int__float>__Clear(pSVar5,MethodInfo_Void_Clear);
  pSVar5 = (__this->fields)._targetWeatherEndTimes;
  if (pSVar5 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto LAB_03d79fac;
  System_Collections_Generic_Dictionary<int__float>__Clear(pSVar5,MethodInfo_Void_Clear);
  pSVar6 = (__this->fields)._needApply;
  if (pSVar6 == (System_Collections_Generic_List_WeatherEffect__o *)0x0) goto LAB_03d79fac;
  piVar1 = &(pSVar6->fields)._version;
  *piVar1 = *piVar1 + 1;
  (pSVar6->fields)._size = 0;
  (__this->fields)._currentTime = 0.0;
  __this_01 = (__this->fields)._currentScheduleWait;
  if (__this_01 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0)
  goto LAB_03d79fac;
  pMVar15 = MethodInfo_Void_Clear;
  System_Collections_Generic_Dictionary<object__float>__Clear
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_3094120 *)MethodInfo_Void_Clear);
  Weather_WeatherManager__CreateEffects(__this,pMVar15);
  Weather_WeatherManager__SetSceneWeather(__this,pMVar15);
  Weather_WeatherManager__ApplyCurrentWeather(__this,1,1,in_RCX);
  if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) != 2) goto LAB_03d79f8b;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
    bVar12 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar11 = (char)bVar12;
  }
  else {
    bVar12 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar11 = (char)bVar12;
  }
  if (cVar11 == '\0') goto LAB_03d79f8b;
  lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
  if ((((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x20), lVar14 == 0)) ||
      (lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50), lVar7 == 0)) ||
     ((lVar7 = *(long *)(lVar7 + 0x60), lVar7 == 0 ||
      (__this_02 = *(Settings_ListSetting_T__o **)(lVar14 + 0x28),
      __this_02 == (Settings_ListSetting_T__o *)0x0)))) goto LAB_03d79fac;
  pSVar13 = Settings_ListSetting<object>__GetItemAt
                      (__this_02,*(int32_t *)(lVar7 + 0x14),MethodInfo_BaseSetting_GetItemAt);
  if (pSVar13 != (Settings_BaseSetting_o *)0x0) {
    bVar2 = (TypeInfo_WeatherSet->_2).naturalAligment;
    if (((pSVar13->klass->_2).naturalAligment < bVar2) ||
       ((pSVar13->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_WeatherSet)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar13);
    }
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
    lVar14 = *(long *)(TypeInfo_MapLoader + 0xb8);
    if (*(char *)(lVar14 + 0x80) != '\0') goto LAB_03d79d7f;
LAB_03d79e5a:
    pSVar4 = (__this->fields)._currentWeather;
    if (pSVar4 == (Settings_WeatherSet_o *)0x0) goto LAB_03d79fac;
    (*(pSVar4->klass->vtable)._9_Copy.methodPtr)
              (pSVar4,pSVar13,(pSVar4->klass->vtable)._9_Copy.method);
    pSVar4 = (__this->fields)._currentWeather;
    pMVar15 = extraout_RDX_00;
  }
  else {
    lVar14 = *(long *)(TypeInfo_MapLoader + 0xb8);
    if (*(char *)(lVar14 + 0x80) == '\0') goto LAB_03d79e5a;
LAB_03d79d7f:
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
      if (*(long *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x88) != 0) goto LAB_03d79d9a;
      goto LAB_03d79e5a;
    }
    if (*(long *)(lVar14 + 0x88) == 0) goto LAB_03d79e5a;
LAB_03d79d9a:
    if ((pSVar13 == (Settings_BaseSetting_o *)0x0) ||
       (pSVar13[2].klass == (Settings_BaseSetting_c *)0x0)) goto LAB_03d79fac;
    bVar12 = System_String__op_Equality
                       ((System_String_o *)((pSVar13[2].klass)->_1).namespaze,"Map Default*",
                        (MethodInfo *)0x0);
    if ((char)bVar12 == '\0') goto LAB_03d79e5a;
    pSVar4 = (__this->fields)._currentWeather;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pSVar4 == (Settings_WeatherSet_o *)0x0) goto LAB_03d79fac;
    (*(pSVar4->klass->vtable)._9_Copy.methodPtr)
              (pSVar4,*(undefined8 *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x88),
               (pSVar4->klass->vtable)._9_Copy.method);
    pSVar4 = (__this->fields)._currentWeather;
    pMVar15 = extraout_RDX;
  }
  if ((pSVar4 != (Settings_WeatherSet_o *)0x0) &&
     (pSVar8 = (pSVar4->fields).Schedule, pSVar8 != (Settings_StringSetting_o *)0x0)) {
    Weather_WeatherManager__CreateScheduleRunners(__this,(pSVar8->fields)._value,pMVar15);
    pSVar4 = (__this->fields)._currentWeather;
    if ((pSVar4 != (Settings_WeatherSet_o *)0x0) &&
       (pSVar8 = (pSVar4->fields).Schedule, pSVar8 != (Settings_StringSetting_o *)0x0)) {
      pSVar9 = pSVar8->klass;
      pMVar15 = (pSVar9->vtable)._4_SetDefault.method;
      (*(pSVar9->vtable)._4_SetDefault.methodPtr)();
      pSVar4 = (__this->fields)._currentWeather;
      if ((pSVar4 != (Settings_WeatherSet_o *)0x0) &&
         (pSVar10 = (pSVar4->fields).UseSchedule, pSVar10 != (Settings_BoolSetting_o *)0x0)) {
        if (*(char *)((long)&(pSVar10->fields).DefaultValue + 1) != '\0') {
          pSVar3 = (__this->fields)._scheduleRunners;
          if (pSVar3 == (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0)
          goto LAB_03d79fac;
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                     (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T__Enumerator_Weather_WeatherScheduleRunn);
          while (__this_03.fields._8_8_ = pIVar17, __this_03.fields._list = pSVar16,
                __this_03.fields._current = (Il2CppObject *)__this_06,
                bVar12 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (__this_03,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8),
                (char)bVar12 != '\0') {
            if (__this_06 == (Weather_WeatherScheduleRunner_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pWVar18 = __this_06;
            Weather_WeatherScheduleRunner__ProcessSchedule(__this_06,(MethodInfo *)0x0);
            Weather_WeatherScheduleRunner__ConsumeSchedule(__this_06,(MethodInfo *)0x0);
            __this_06 = pWVar18;
          }
          __this_04.fields._8_8_ = pIVar17;
          __this_04.fields._list = pSVar16;
          __this_04.fields._current = (Il2CppObject *)__this_06;
          pMVar15 = MethodInfo_Void_Dispose;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_04,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
        }
        Weather_WeatherManager__SyncWeather(__this,pMVar15);
        (__this->fields)._currentSyncWait = 5.0;
        *(undefined1 *)&(__this->fields)._needSync = 0;
LAB_03d79f8b:
        (__this->fields)._currentLerpWait = 0.05;
        *(undefined1 *)&(__this->fields)._finishedLoading = 1;
        return;
      }
    }
  }
LAB_03d79fac:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$LoadSkyboxes
// il2cpp: void Weather_WeatherManager__LoadSkyboxes (const MethodInfo* method);
// 0x3d78ce0

void Weather_WeatherManager__LoadSkyboxes(MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_String_o *path;
  UnityEngine_Shader_o *pUVar4;
  System_String_array *pSVar5;
  System_String_array *values;
  System_String_o *pSVar6;
  Il2CppObject *pIVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  il2cpp_array_size_t iVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  
  if (DAT_05702651 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Material);
    il2cpp_init_method_metadata(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_String___EnumToStringArray_WeatherSkybox);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    il2cpp_init_method_metadata(&"Skybox/Blended");
    il2cpp_init_method_metadata(&"Skyboxes/");
    il2cpp_init_method_metadata(&"CaveMap1");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"Skybox");
    il2cpp_init_method_metadata(&"Skyboxes/CaveMap1/CaveMap1Skybox");
    DAT_05702651 = '\x01';
  }
  pUVar4 = UnityEngine_Shader__Find("Skybox/Blended",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(TypeInfo_WeatherManager + 0xb8);
  *(UnityEngine_Shader_o **)(lVar1 + 0x18) = pUVar4;
  il2cpp_runtime_glue(lVar1 + 0x18,pUVar4);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = Utility_Util__EnumToStringArray<Int32Enum>(MethodInfo_String___EnumToStringArray_WeatherSkybox);
  if (pSVar5 != (System_String_array *)0x0) {
    iVar8 = pSVar5->max_length;
    if (0 < (int)iVar8) {
      uVar11 = 0;
      do {
        if ((uint)iVar8 <= uVar11) goto LAB_03d79172;
        pSVar2 = pSVar5->m_Items[(int)uVar11];
        if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_WeatherManager + 0xb8) + 8);
        if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
          il2cpp_init_class();
        }
        path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58);
        values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
        if (values == (System_String_array *)0x0) goto LAB_03d79177;
        if ((int)values->max_length == 0) goto LAB_03d79172;
        values->m_Items[0] = "Skyboxes/";
        il2cpp_runtime_glue(values->m_Items);
        if (pSVar2 == (System_String_o *)0x0) goto LAB_03d79177;
        pSVar6 = (System_String_o *)
                 (*((Il2CppClass *)pSVar2->klass)->vtable[3].methodPtr)
                           (pSVar2,((Il2CppClass *)pSVar2->klass)->vtable[3].method);
        if ((uint)values->max_length < 2) goto LAB_03d79172;
        values->m_Items[1] = pSVar6;
        il2cpp_runtime_glue(values->m_Items + 1,pSVar6);
        if ((uint)values->max_length < 3) goto LAB_03d79172;
        values->m_Items[2] = "/";
        il2cpp_runtime_glue(values->m_Items + 2);
        pSVar6 = (System_String_o *)
                 (*((Il2CppClass *)pSVar2->klass)->vtable[3].methodPtr)
                           (pSVar2,((Il2CppClass *)pSVar2->klass)->vtable[3].method);
        if ((uint)values->max_length < 4) goto LAB_03d79172;
        values->m_Items[3] = pSVar6;
        il2cpp_runtime_glue(values->m_Items + 3,pSVar6);
        if ((uint)values->max_length < 5) goto LAB_03d79172;
        values->m_Items[4] = "Skybox";
        il2cpp_runtime_glue(values->m_Items + 4);
        pSVar6 = System_String__Concat(values,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pIVar7 = ApplicationManagers_ResourceManager__InstantiateAsset<object>
                           (path,pSVar6,0,MethodInfo_Material_InstantiateAsset_Material);
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_03d79177;
        System_Collections_Generic_Dictionary<object__object>__Add
                  (pSVar3,(Il2CppObject *)pSVar2,pIVar7,MethodInfo_Void_Add);
        uVar11 = uVar11 + 1;
        iVar8 = pSVar5->max_length;
      } while ((int)uVar11 < (int)iVar8);
    }
    uVar9 = iVar8 & 0xffffffff;
    if (0 < (int)iVar8) {
      uVar10 = 0;
      do {
        if (uVar9 <= uVar10) {
LAB_03d79172:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar2 = pSVar5->m_Items[uVar10];
        if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_WeatherManager + 0xb8) + 0x10);
        __this = (System_Collections_Generic_Dictionary_object__object__o *)
                 il2cpp_runtime_glue(TypeInfo_Dictionary_string__Material);
        System_Collections_Generic_Dictionary<object__object>___ctor(__this,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_03d79177;
        System_Collections_Generic_Dictionary<object__object>__Add
                  (pSVar3,(Il2CppObject *)pSVar2,(Il2CppObject *)__this,MethodInfo_Void_Add);
        uVar10 = uVar10 + 1;
        uVar11 = (uint)pSVar5->max_length;
        uVar9 = (ulong)uVar11;
      } while ((long)uVar10 < (long)(int)uVar11);
    }
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_WeatherManager + 0xb8) + 8);
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar7 = ApplicationManagers_ResourceManager__InstantiateAsset<object>
                       (pSVar2,"Skyboxes/CaveMap1/CaveMap1Skybox",0,MethodInfo_Material_InstantiateAsset_Material);
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Add
                (pSVar3,"CaveMap1",pIVar7,MethodInfo_Void_Add);
      return;
    }
  }
LAB_03d79177:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$TakeFlashlight
// il2cpp: void Weather_WeatherManager__TakeFlashlight (UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x3d7a050

void Weather_WeatherManager__TakeFlashlight(UnityEngine_Transform_o *parent,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar5;
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar6;
  
  if (DAT_05702652 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_BaseWeatherEffect_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    DAT_05702652 = '\x01';
    iVar1 = *(int *)(TypeInfo_WeatherManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_WeatherManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = **(long **)(TypeInfo_WeatherManager + 0xb8);
  }
  else {
    lVar2 = **(long **)(TypeInfo_WeatherManager + 0xb8);
  }
  if ((lVar2 != 0) &&
     (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar2 + 0x40) !=
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)) {
    bVar5 = System_Collections_Generic_Dictionary<Int32Enum__object>__ContainsKey
                      (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar2 + 0x40),7,
                       MethodInfo_Boolean_ContainsKey);
    if ((char)bVar5 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((**(long **)(TypeInfo_WeatherManager + 0xb8) != 0) &&
       (pSVar3 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                  (**(long **)(TypeInfo_WeatherManager + 0xb8) + 0x40),
       pSVar3 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)) {
      x = (UnityEngine_Object_o *)
          System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item(pSVar3,7,MethodInfo_BaseWeatherEffect_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (((**(long **)(TypeInfo_WeatherManager + 0xb8) != 0) &&
          (pSVar3 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                     (**(long **)(TypeInfo_WeatherManager + 0xb8) + 0x40),
          pSVar3 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)) &&
         (pIVar6 = System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                             (pSVar3,7,MethodInfo_BaseWeatherEffect_get_Item), pIVar6 != (Il2CppObject *)0x0)) {
        pIVar4 = pIVar6->klass;
        vtable_dispatch = pIVar4->vtable[9].methodPtr;
        (*vtable_dispatch)
                  (pIVar6,parent,pIVar4->vtable[9].method,pIVar4,vtable_dispatch);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$CreateBlendedSkybox
// il2cpp: UnityEngine_Material_o* Weather_WeatherManager__CreateBlendedSkybox (UnityEngine_Shader_o* shader, System_String_array* parts, System_String_o* skybox1, System_String_o* skybox2, const MethodInfo* method);
// 0x3d7a220

UnityEngine_Material_o *
Weather_WeatherManager__CreateBlendedSkybox
          (UnityEngine_Shader_o *shader,System_String_array *parts,System_String_o *skybox1,
          System_String_o *skybox2,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  int iVar3;
  UnityEngine_Material_o *pUVar4;
  ulong uVar5;
  System_String_o *pSVar6;
  UnityEngine_Material_o *pUVar7;
  UnityEngine_Texture_o *pUVar8;
  System_String_o *name;
  ulong uVar9;
  UnityEngine_Color_o value;
  
  if (DAT_05702653 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Material_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    il2cpp_init_method_metadata(&"2");
    il2cpp_init_method_metadata(&"_");
    il2cpp_init_method_metadata(&"Tex");
    il2cpp_init_method_metadata(&"_Tint");
    DAT_05702653 = '\x01';
  }
  pUVar4 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
  UnityEngine_Material___ctor(pUVar4,shader,(MethodInfo *)0x0);
  if (parts != (System_String_array *)0x0) {
    iVar3 = (int)parts->max_length;
    if (pUVar4 == (UnityEngine_Material_o *)0x0) {
      if (0 < iVar3) {
        pSVar6 = System_String__Concat
                           ("_",parts->m_Items[0],"Tex",(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_WeatherManager + 0xb8) + 8);
        if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
           (pUVar4 = (UnityEngine_Material_o *)
                     System_Collections_Generic_Dictionary<object__object>__get_Item
                               (pSVar2,(Il2CppObject *)skybox1,MethodInfo_Material_get_Item),
           pUVar4 != (UnityEngine_Material_o *)0x0)) {
          UnityEngine_Material__GetTexture(pUVar4,pSVar6,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
    else {
      if (0 < iVar3) {
        uVar5 = parts->max_length & 0xffffffff;
        uVar9 = 0;
        do {
          if (uVar5 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar6 = System_String__Concat
                             ("_",parts->m_Items[uVar9],"Tex",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                    (*(long *)(TypeInfo_WeatherManager + 0xb8) + 8);
          if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
             (pUVar7 = (UnityEngine_Material_o *)
                       System_Collections_Generic_Dictionary<object__object>__get_Item
                                 (pSVar2,(Il2CppObject *)skybox1,MethodInfo_Material_get_Item),
             pUVar7 == (UnityEngine_Material_o *)0x0)) goto LAB_03d7a503;
          pUVar8 = UnityEngine_Material__GetTexture(pUVar7,pSVar6,(MethodInfo *)0x0);
          UnityEngine_Material__SetTexture(pUVar4,pSVar6,pUVar8,(MethodInfo *)0x0);
          name = System_String__Concat(pSVar6,"2",(MethodInfo *)0x0);
          pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                    (*(long *)(TypeInfo_WeatherManager + 0xb8) + 8);
          if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
             (pUVar7 = (UnityEngine_Material_o *)
                       System_Collections_Generic_Dictionary<object__object>__get_Item
                                 (pSVar2,(Il2CppObject *)skybox2,MethodInfo_Material_get_Item),
             pUVar7 == (UnityEngine_Material_o *)0x0)) goto LAB_03d7a503;
          pUVar8 = UnityEngine_Material__GetTexture(pUVar7,pSVar6,(MethodInfo *)0x0);
          UnityEngine_Material__SetTexture(pUVar4,name,pUVar8,(MethodInfo *)0x0);
          uVar9 = uVar9 + 1;
          uVar1 = (uint)parts->max_length;
          uVar5 = (ulong)uVar1;
        } while ((long)uVar9 < (long)(int)uVar1);
      }
      if (pUVar4 != (UnityEngine_Material_o *)0x0) {
        value.fields.b = 0.5;
        value.fields.a = 1.0;
        value.fields.r = 0.5;
        value.fields.g = 0.5;
        UnityEngine_Material__SetColor(pUVar4,"_Tint",value,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702654 == '\0') {
          il2cpp_init_method_metadata(&"_Blend");
          DAT_05702654 = '\x01';
        }
        UnityEngine_Material__SetFloat(pUVar4,"_Blend",0.0,(MethodInfo *)0x0);
        return pUVar4;
      }
    }
  }
LAB_03d7a503:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$SetSkyboxBlend
// il2cpp: void Weather_WeatherManager__SetSkyboxBlend (UnityEngine_Material_o* skybox, float blend, const MethodInfo* method);
// 0x3d7a520

void Weather_WeatherManager__SetSkyboxBlend
               (UnityEngine_Material_o *skybox,float blend,MethodInfo *method)

{
  if (DAT_05702654 == '\0') {
    il2cpp_init_method_metadata(&"_Blend");
    DAT_05702654 = '\x01';
  }
  if (skybox != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetFloat(skybox,"_Blend",blend,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$ResetCameras
// il2cpp: void Weather_WeatherManager__ResetCameras (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x3d7a580

void Weather_WeatherManager__ResetCameras(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  uint uVar2;
  System_Collections_Generic_List_Camera__o *pSVar3;
  long lVar4;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *item;
  System_Object_array *pSVar5;
  long lVar6;
  
  if (DAT_05702655 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    DAT_05702655 = '\x01';
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
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar6 = MethodInfo_Void_Add;
    if (((**(long **)(TypeInfo_WeatherManager + 0xb8) != 0) &&
        (lVar4 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18), lVar4 != 0)) &&
       (__this_00 = *(System_Collections_Generic_List_object__o **)
                     (**(long **)(TypeInfo_WeatherManager + 0xb8) + 0x38),
       __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
      item = *(Il2CppObject **)(lVar4 + 0x20);
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this_00->fields)._items;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar5->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar5->m_Items[(int)uVar2] = item;
          il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,item,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$ResetSkyboxColors
// il2cpp: void Weather_WeatherManager__ResetSkyboxColors (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x3d7a6a0

/* WARNING: Removing unreachable block (ram,0x03d7a96d) */

void Weather_WeatherManager__ResetSkyboxColors(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  Il2CppObject *key;
  bool_conflict bVar1;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  UnityEngine_Material_o *__this_04;
  UnityEngine_Color_o value;
  _union_231280 _Var4;
  Il2CppType *pIVar5;
  Il2CppObject *key_00;
  Il2CppObject *pIVar6;
  _union_231280 local_68;
  Il2CppType *pIStack_60;
  Il2CppObject *local_58;
  _union_231280 local_48;
  Il2CppType *pIStack_40;
  Il2CppObject *local_38;
  
  if (DAT_05702656 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
    il2cpp_init_method_metadata(&MethodInfo_Material_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    il2cpp_init_method_metadata(&"_Tint");
    DAT_05702656 = '\x01';
  }
  local_68.genericMethod =
       (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_WeatherManager + 0xb8) + 0x10);
  if ((pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (pSVar2 = System_Collections_Generic_Dictionary<object__object>__get_Keys(pSVar3,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
     pSVar2 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
             &local_48,pSVar2,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
  _Var4 = local_48;
  pIVar5 = pIStack_40;
  key_00 = local_38;
  while( true ) {
    __this_00.fields._8_8_ = pIVar5;
    __this_00.fields._dictionary = _Var4.genericMethod;
    __this_00.fields._currentKey = key_00;
    bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                      (__this_00,(MethodInfo_31D0850 *)&stack0xffffffffffffff78);
    if ((char)bVar1 == '\0') {
      __this_03.fields._8_8_ = pIVar5;
      __this_03.fields._dictionary = _Var4.genericMethod;
      __this_03.fields._currentKey = key_00;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                (__this_03,(MethodInfo_31D0840 *)&stack0xffffffffffffff78);
      return;
    }
    pIVar6 = key_00;
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_WeatherManager + 0xb8) + 0x10);
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar3,key_00,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar2 = System_Collections_Generic_Dictionary<object__object>__get_Keys(pSVar3,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    if (pSVar2 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) break;
    System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               &local_48,pSVar2,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    local_58 = local_38;
    local_68 = local_48;
    pIStack_60 = pIStack_40;
    while (__this_01.fields._8_8_ = pIVar5, __this_01.fields._dictionary = _Var4.genericMethod,
          __this_01.fields._currentKey = pIVar6,
          bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                            (__this_01,(MethodInfo_31D0850 *)&local_68), key = local_58,
          (char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_WeatherManager + 0xb8) + 0x10);
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar3,key_00,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_04 = (UnityEngine_Material_o *)
                  System_Collections_Generic_Dictionary<object__object>__get_Item
                            (pSVar3,key,MethodInfo_Material_get_Item);
      if (__this_04 == (UnityEngine_Material_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      value.fields.b = 0.5;
      value.fields.a = 1.0;
      value.fields.r = 0.5;
      value.fields.g = 0.5;
      UnityEngine_Material__SetColor(__this_04,"_Tint",value,(MethodInfo *)0x0);
    }
    __this_02.fields._8_8_ = pIVar5;
    __this_02.fields._dictionary = _Var4.genericMethod;
    __this_02.fields._currentKey = pIVar6;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
              (__this_02,(MethodInfo_31D0840 *)&local_68);
    key_00 = pIVar6;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$ResetPhysics
// il2cpp: void Weather_WeatherManager__ResetPhysics (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x3d7aaf0

void Weather_WeatherManager__ResetPhysics(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_05702657 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    DAT_05702657 = '\x01';
    iVar1 = *(int *)(TypeInfo_WeatherManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_WeatherManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = **(long **)(TypeInfo_WeatherManager + 0xb8);
  }
  else {
    lVar2 = **(long **)(TypeInfo_WeatherManager + 0xb8);
  }
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x9c) = 0;
    *(undefined8 *)(lVar2 + 0x94) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$GetWeatherForce
// il2cpp: UnityEngine_Vector3_o Weather_WeatherManager__GetWeatherForce (const MethodInfo* method);
// 0x3d7ab80

UnityEngine_Vector3_o Weather_WeatherManager__GetWeatherForce(MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  UnityEngine_Vector3_o UVar5;
  float local_3c;
  undefined8 local_38;
  
  if (DAT_05702658 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseWeatherEffect_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    il2cpp_init_method_metadata(&TypeInfo_WindWeatherEffect);
    DAT_05702658 = '\x01';
  }
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  local_38 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  local_3c = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar4 = **(long **)(TypeInfo_WeatherManager + 0xb8);
  if (lVar4 == 0) goto LAB_03d7af8c;
  if (0.0 < *(float *)(lVar4 + 0x94)) {
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar4 = **(long **)(TypeInfo_WeatherManager + 0xb8);
      if (lVar4 == 0) goto LAB_03d7af8c;
    }
    if (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar4 + 0x40) ==
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto LAB_03d7af8c;
    pIVar3 = System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                       (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar4 + 0x40),10
                        ,MethodInfo_BaseWeatherEffect_get_Item);
    if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03d7af8c;
    if (0.0 < *(float *)&pIVar3[3].klass) {
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (**(long **)(TypeInfo_WeatherManager + 0xb8) == 0) goto LAB_03d7af8c;
      fVar1 = *(float *)(**(long **)(TypeInfo_WeatherManager + 0xb8) + 0x94);
      if (DAT_0570266b == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_0570266b = '\x01';
      }
      uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
      local_38._4_4_ = (float)((ulong)local_38 >> 0x20);
      local_38 = CONCAT44(local_38._4_4_ + fVar1 * (float)((ulong)uVar2 >> 0x20),
                          (float)local_38 + fVar1 * (float)uVar2);
      local_3c = local_3c + fVar1 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
    }
  }
  if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar4 = **(long **)(TypeInfo_WeatherManager + 0xb8);
  if (lVar4 == 0) goto LAB_03d7af8c;
  if (0.0 < *(float *)(lVar4 + 0x98)) {
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar4 = **(long **)(TypeInfo_WeatherManager + 0xb8);
      if (lVar4 == 0) goto LAB_03d7af8c;
    }
    if (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar4 + 0x40) ==
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto LAB_03d7af8c;
    pIVar3 = System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                       (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar4 + 0x40),
                        0xc,MethodInfo_BaseWeatherEffect_get_Item);
    if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03d7af8c;
    if (0.0 < *(float *)&pIVar3[3].klass) {
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (**(long **)(TypeInfo_WeatherManager + 0xb8) == 0) goto LAB_03d7af8c;
      fVar1 = *(float *)(**(long **)(TypeInfo_WeatherManager + 0xb8) + 0x98);
      if (DAT_0570266b == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_0570266b = '\x01';
      }
      uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
      local_38 = CONCAT44(local_38._4_4_ + fVar1 * (float)((ulong)uVar2 >> 0x20),
                          (float)local_38 + fVar1 * (float)uVar2);
      local_3c = local_3c + fVar1 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
    }
  }
  if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar4 = **(long **)(TypeInfo_WeatherManager + 0xb8);
  if (lVar4 != 0) {
    if (*(float *)(lVar4 + 0x9c) <= 0.0) goto LAB_03d7af79;
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar4 = **(long **)(TypeInfo_WeatherManager + 0xb8);
      if (lVar4 == 0) goto LAB_03d7af8c;
    }
    if (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar4 + 0x40) !=
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
      pIVar3 = System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                         (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar4 + 0x40),
                          0xd,MethodInfo_BaseWeatherEffect_get_Item);
      if (pIVar3 != (Il2CppObject *)0x0) {
        if (0.0 < *(float *)&pIVar3[3].klass) {
          if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (**(long **)(TypeInfo_WeatherManager + 0xb8) == 0) goto LAB_03d7af8c;
          fVar1 = *(float *)(**(long **)(TypeInfo_WeatherManager + 0xb8) + 0x9c);
          if (*(int *)(TypeInfo_WindWeatherEffect + 0xe4) == 0) {
            il2cpp_init_class();
          }
          uVar2 = *(undefined8 *)(*(long *)(TypeInfo_WindWeatherEffect + 0xb8) + 4);
          local_38 = CONCAT44(local_38._4_4_ + fVar1 * (float)((ulong)uVar2 >> 0x20),
                              (float)local_38 + fVar1 * (float)uVar2);
          local_3c = local_3c + fVar1 * *(float *)(*(long *)(TypeInfo_WindWeatherEffect + 0xb8) + 0xc);
        }
LAB_03d7af79:
        UVar5.fields.z = local_3c;
        UVar5.fields.x = (float)local_38;
        UVar5.fields.y = local_38._4_4_;
        return (UnityEngine_Vector3_o)UVar5.fields;
      }
    }
  }
LAB_03d7af8c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$RestartWeather
// il2cpp: void Weather_WeatherManager__RestartWeather (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x3d79980

void Weather_WeatherManager__RestartWeather(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t length;
  System_Collections_Generic_List_WeatherScheduleRunner__o *pSVar3;
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *__this_00;
  Settings_WeatherSet_o *pSVar4;
  System_Collections_Generic_Dictionary_int__float__o *pSVar5;
  System_Collections_Generic_List_WeatherEffect__o *pSVar6;
  System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *__this_01;
  long lVar7;
  Settings_ListSetting_T__o *__this_02;
  Settings_StringSetting_o *pSVar8;
  Settings_StringSetting_c *pSVar9;
  Settings_BoolSetting_o *pSVar10;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  char cVar11;
  bool_conflict bVar12;
  Settings_BaseSetting_o *pSVar13;
  long lVar14;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar15;
  Weather_WeatherManager_o *__this_05;
  System_Collections_Generic_List_T__o *pSVar16;
  Il2CppMethodPointer pIVar17;
  Weather_WeatherScheduleRunner_o *__this_06;
  Weather_WeatherScheduleRunner_o *pWVar18;
  
  if (DAT_05702659 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_WeatherScheduleRunner_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Weather_WeatherScheduleRunn);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_WeatherSet);
    il2cpp_init_method_metadata(&"Map Default*");
    DAT_05702659 = '\x01';
  }
  pSVar16 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar17 = (Il2CppMethodPointer)0x0;
  __this_06 = (Weather_WeatherScheduleRunner_o *)0x0;
  __this_05 = __this;
  Weather_WeatherManager__ResetCameras(__this,method);
  Weather_WeatherManager__ResetSkyboxColors(__this_05,method);
  if (DAT_05702657 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    DAT_05702657 = '\x01';
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) goto LAB_03d79af9;
LAB_03d79abf:
    lVar14 = **(long **)(TypeInfo_WeatherManager + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) != 0) goto LAB_03d79abf;
LAB_03d79af9:
    il2cpp_init_class();
    lVar14 = **(long **)(TypeInfo_WeatherManager + 0xb8);
  }
  if (lVar14 == 0) goto LAB_03d79fac;
  *(undefined4 *)(lVar14 + 0x9c) = 0;
  *(undefined8 *)(lVar14 + 0x94) = 0;
  pSVar3 = (__this->fields)._scheduleRunners;
  if (pSVar3 == (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) goto LAB_03d79fac;
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
  goto LAB_03d79fac;
  System_Collections_Generic_Dictionary<Int32Enum__object>__Clear
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Void_Clear);
  pSVar4 = (__this->fields)._currentWeather;
  if (pSVar4 == (Settings_WeatherSet_o *)0x0) goto LAB_03d79fac;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)
            (pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  pSVar4 = (__this->fields)._startWeather;
  if (pSVar4 == (Settings_WeatherSet_o *)0x0) goto LAB_03d79fac;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)
            (pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  pSVar4 = (__this->fields)._targetWeather;
  if (pSVar4 == (Settings_WeatherSet_o *)0x0) goto LAB_03d79fac;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)
            (pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  pSVar5 = (__this->fields)._targetWeatherStartTimes;
  if (pSVar5 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto LAB_03d79fac;
  System_Collections_Generic_Dictionary<int__float>__Clear(pSVar5,MethodInfo_Void_Clear);
  pSVar5 = (__this->fields)._targetWeatherEndTimes;
  if (pSVar5 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto LAB_03d79fac;
  System_Collections_Generic_Dictionary<int__float>__Clear(pSVar5,MethodInfo_Void_Clear);
  pSVar6 = (__this->fields)._needApply;
  if (pSVar6 == (System_Collections_Generic_List_WeatherEffect__o *)0x0) goto LAB_03d79fac;
  piVar1 = &(pSVar6->fields)._version;
  *piVar1 = *piVar1 + 1;
  (pSVar6->fields)._size = 0;
  (__this->fields)._currentTime = 0.0;
  __this_01 = (__this->fields)._currentScheduleWait;
  if (__this_01 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0)
  goto LAB_03d79fac;
  pMVar15 = MethodInfo_Void_Clear;
  System_Collections_Generic_Dictionary<object__float>__Clear
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_3094120 *)MethodInfo_Void_Clear);
  Weather_WeatherManager__CreateEffects(__this,pMVar15);
  Weather_WeatherManager__SetSceneWeather(__this,pMVar15);
  Weather_WeatherManager__ApplyCurrentWeather(__this,1,1,in_RCX);
  if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) != 2) goto LAB_03d79f8b;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
    bVar12 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar11 = (char)bVar12;
  }
  else {
    bVar12 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar11 = (char)bVar12;
  }
  if (cVar11 == '\0') goto LAB_03d79f8b;
  lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
  if ((((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x20), lVar14 == 0)) ||
      (lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50), lVar7 == 0)) ||
     ((lVar7 = *(long *)(lVar7 + 0x60), lVar7 == 0 ||
      (__this_02 = *(Settings_ListSetting_T__o **)(lVar14 + 0x28),
      __this_02 == (Settings_ListSetting_T__o *)0x0)))) goto LAB_03d79fac;
  pSVar13 = Settings_ListSetting<object>__GetItemAt
                      (__this_02,*(int32_t *)(lVar7 + 0x14),MethodInfo_BaseSetting_GetItemAt);
  if (pSVar13 != (Settings_BaseSetting_o *)0x0) {
    bVar2 = (TypeInfo_WeatherSet->_2).naturalAligment;
    if (((pSVar13->klass->_2).naturalAligment < bVar2) ||
       ((pSVar13->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_WeatherSet)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar13);
    }
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
    lVar14 = *(long *)(TypeInfo_MapLoader + 0xb8);
    if (*(char *)(lVar14 + 0x80) != '\0') goto LAB_03d79d7f;
LAB_03d79e5a:
    pSVar4 = (__this->fields)._currentWeather;
    if (pSVar4 == (Settings_WeatherSet_o *)0x0) goto LAB_03d79fac;
    (*(pSVar4->klass->vtable)._9_Copy.methodPtr)
              (pSVar4,pSVar13,(pSVar4->klass->vtable)._9_Copy.method);
    pSVar4 = (__this->fields)._currentWeather;
    pMVar15 = extraout_RDX_00;
  }
  else {
    lVar14 = *(long *)(TypeInfo_MapLoader + 0xb8);
    if (*(char *)(lVar14 + 0x80) == '\0') goto LAB_03d79e5a;
LAB_03d79d7f:
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
      if (*(long *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x88) != 0) goto LAB_03d79d9a;
      goto LAB_03d79e5a;
    }
    if (*(long *)(lVar14 + 0x88) == 0) goto LAB_03d79e5a;
LAB_03d79d9a:
    if ((pSVar13 == (Settings_BaseSetting_o *)0x0) ||
       (pSVar13[2].klass == (Settings_BaseSetting_c *)0x0)) goto LAB_03d79fac;
    bVar12 = System_String__op_Equality
                       ((System_String_o *)((pSVar13[2].klass)->_1).namespaze,"Map Default*",
                        (MethodInfo *)0x0);
    if ((char)bVar12 == '\0') goto LAB_03d79e5a;
    pSVar4 = (__this->fields)._currentWeather;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pSVar4 == (Settings_WeatherSet_o *)0x0) goto LAB_03d79fac;
    (*(pSVar4->klass->vtable)._9_Copy.methodPtr)
              (pSVar4,*(undefined8 *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x88),
               (pSVar4->klass->vtable)._9_Copy.method);
    pSVar4 = (__this->fields)._currentWeather;
    pMVar15 = extraout_RDX;
  }
  if ((pSVar4 != (Settings_WeatherSet_o *)0x0) &&
     (pSVar8 = (pSVar4->fields).Schedule, pSVar8 != (Settings_StringSetting_o *)0x0)) {
    Weather_WeatherManager__CreateScheduleRunners(__this,(pSVar8->fields)._value,pMVar15);
    pSVar4 = (__this->fields)._currentWeather;
    if ((pSVar4 != (Settings_WeatherSet_o *)0x0) &&
       (pSVar8 = (pSVar4->fields).Schedule, pSVar8 != (Settings_StringSetting_o *)0x0)) {
      pSVar9 = pSVar8->klass;
      pMVar15 = (pSVar9->vtable)._4_SetDefault.method;
      (*(pSVar9->vtable)._4_SetDefault.methodPtr)();
      pSVar4 = (__this->fields)._currentWeather;
      if ((pSVar4 != (Settings_WeatherSet_o *)0x0) &&
         (pSVar10 = (pSVar4->fields).UseSchedule, pSVar10 != (Settings_BoolSetting_o *)0x0)) {
        if (*(char *)((long)&(pSVar10->fields).DefaultValue + 1) != '\0') {
          pSVar3 = (__this->fields)._scheduleRunners;
          if (pSVar3 == (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0)
          goto LAB_03d79fac;
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                     (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T__Enumerator_Weather_WeatherScheduleRunn);
          while (__this_03.fields._8_8_ = pIVar17, __this_03.fields._list = pSVar16,
                __this_03.fields._current = (Il2CppObject *)__this_06,
                bVar12 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (__this_03,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8),
                (char)bVar12 != '\0') {
            if (__this_06 == (Weather_WeatherScheduleRunner_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pWVar18 = __this_06;
            Weather_WeatherScheduleRunner__ProcessSchedule(__this_06,(MethodInfo *)0x0);
            Weather_WeatherScheduleRunner__ConsumeSchedule(__this_06,(MethodInfo *)0x0);
            __this_06 = pWVar18;
          }
          __this_04.fields._8_8_ = pIVar17;
          __this_04.fields._list = pSVar16;
          __this_04.fields._current = (Il2CppObject *)__this_06;
          pMVar15 = MethodInfo_Void_Dispose;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_04,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
        }
        Weather_WeatherManager__SyncWeather(__this,pMVar15);
        (__this->fields)._currentSyncWait = 5.0;
        *(undefined1 *)&(__this->fields)._needSync = 0;
LAB_03d79f8b:
        (__this->fields)._currentLerpWait = 0.05;
        *(undefined1 *)&(__this->fields)._finishedLoading = 1;
        return;
      }
    }
  }
LAB_03d79fac:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$SetSceneWeather
// il2cpp: void Weather_WeatherManager__SetSceneWeather (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x3d7b430

void Weather_WeatherManager__SetSceneWeather(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  Settings_WeatherSet_o *pSVar1;
  Settings_ColorSetting_o *__this_00;
  Utility_Color255_o *__this_01;
  
  if (DAT_0570265a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_0570265a = '\x01';
  }
  if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) - 3U < 2) {
    pSVar1 = (__this->fields)._currentWeather;
    if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
      __this_00 = (pSVar1->fields).AmbientLight;
      __this_01 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
      Utility_Color255___ctor(__this_01,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
      if (__this_00 != (Settings_ColorSetting_o *)0x0) {
        Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)__this_01,MethodInfo_Void_set_Value);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Weather.WeatherManager$$CreateScheduleRunners
// il2cpp: void Weather_WeatherManager__CreateScheduleRunners (Weather_WeatherManager_o* __this, System_String_o* schedule, const MethodInfo* method);
// 0x3d7cb60

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
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  long lVar6;
  bool_conflict bVar7;
  Weather_WeatherScheduleRunner_o *__this_04;
  Weather_WeatherSchedule_o *pWVar8;
  System_Collections_Generic_List_Enumerator_T__c *pSVar9;
  Il2CppType *pIVar10;
  Weather_WeatherEvent_o *item;
  Weather_WeatherEvent_o *pWVar11;
  undefined1 local_48 [16];
  Weather_WeatherEvent_o *local_38;
  
  if (DAT_0570265b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_WeatherEvent_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Weather_WeatherEvent__GetEn);
    il2cpp_init_method_metadata(&TypeInfo_WeatherScheduleRunner);
    il2cpp_init_method_metadata(&TypeInfo_WeatherSchedule);
    DAT_0570265b = '\x01';
  }
  __this_04 = (Weather_WeatherScheduleRunner_o *)il2cpp_runtime_glue(TypeInfo_WeatherScheduleRunner);
  Weather_WeatherScheduleRunner___ctor(__this_04,__this,(MethodInfo *)0x0);
  pWVar8 = (Weather_WeatherSchedule_o *)il2cpp_runtime_glue(TypeInfo_WeatherSchedule);
  Weather_WeatherSchedule___ctor(pWVar8,schedule,(MethodInfo *)0x0);
  if ((pWVar8 == (Weather_WeatherSchedule_o *)0x0) ||
     (pSVar3 = (pWVar8->fields).Events,
     pSVar3 == (System_Collections_Generic_List_WeatherEvent__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T__Enumerator_Weather_WeatherEvent__GetEn);
  pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
  pIVar10 = (Il2CppType *)local_48._8_8_;
  item = local_38;
  while( true ) {
    __this_02.fields._8_8_ = pIVar10;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
    __this_02.fields._current = (Il2CppObject *)item;
    bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
    if ((char)bVar7 == '\0') {
      __this_03.fields._8_8_ = pIVar10;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
      __this_03.fields._current = (Il2CppObject *)item;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      return;
    }
    if (item == (Weather_WeatherEvent_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pWVar11 = item;
    if ((item->fields).Action == 0) {
      __this_04 = (Weather_WeatherScheduleRunner_o *)il2cpp_runtime_glue(TypeInfo_WeatherScheduleRunner);
      Weather_WeatherScheduleRunner___ctor(__this_04,__this,(MethodInfo *)0x0);
      lVar6 = MethodInfo_Void_Add;
      __this_00 = (__this->fields)._scheduleRunners;
      if (__this_00 == (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pWVar4 = (__this_00->fields)._items;
      if (pWVar4 == (Weather_WeatherScheduleRunner_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pWVar4->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pWVar4->m_Items[(int)uVar2] = __this_04;
        il2cpp_runtime_glue(pWVar4->m_Items + (int)uVar2,__this_04);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_04,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      __this_01 = (__this->fields)._currentScheduleWait;
      if (__this_01 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0)
      {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_Dictionary<object__float>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                 (Il2CppObject *)__this_04,0.0,MethodInfo_Void_Add);
    }
    lVar6 = MethodInfo_Void_Add;
    if (__this_04 == (Weather_WeatherScheduleRunner_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pWVar8 = (__this_04->fields).Schedule;
    if (pWVar8 == (Weather_WeatherSchedule_o *)0x0) break;
    pSVar3 = (pWVar8->fields).Events;
    if (pSVar3 == (System_Collections_Generic_List_WeatherEvent__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pWVar5 = (pSVar3->fields)._items;
    if (pWVar5 == (Weather_WeatherEvent_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pWVar5->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      pWVar5->m_Items[(int)uVar2] = item;
      il2cpp_runtime_glue(pWVar5->m_Items + (int)uVar2,item);
      item = pWVar11;
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      item = pWVar11;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$CreateEffects
// il2cpp: void Weather_WeatherManager__CreateEffects (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x3d7afa0

void Weather_WeatherManager__CreateEffects(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *pSVar1;
  System_String_o *path;
  long lVar2;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *pUVar4;
  Il2CppObject *pIVar5;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar6;
  Il2CppType *pIVar7;
  Il2CppObject *pIVar8;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (DAT_0570265c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_Weathe);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseWeatherEffect_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_RainWeatherEffect_AddComponent_RainWeatherEffect);
    il2cpp_init_method_metadata(&MethodInfo_SnowWeatherEffect_AddComponent_SnowWeatherEffect);
    il2cpp_init_method_metadata(&MethodInfo_ThunderWeatherEffect_AddComponent_ThunderWeather);
    il2cpp_init_method_metadata(&MethodInfo_WindWeatherEffect_AddComponent_WindWeatherEffect);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    il2cpp_init_method_metadata(&"Prefabs/ThunderEffect");
    il2cpp_init_method_metadata(&"Prefabs/SnowEffect");
    il2cpp_init_method_metadata(&"Prefabs/RainEffect");
    il2cpp_init_method_metadata(&"Prefabs/WindEffect");
    DAT_0570265c = '\x01';
  }
  pSVar1 = (__this->fields)._effects;
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar4 = (UnityEngine_GameObject_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset<object>
                     (path,"Prefabs/RainEffect",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pIVar5 = UnityEngine_GameObject__AddComponent<object>(pUVar4,MethodInfo_RainWeatherEffect_AddComponent_RainWeatherEffect);
    if (pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)
    {
      System_Collections_Generic_Dictionary<Int32Enum__object>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,10,pIVar5,
                 MethodInfo_Void_Add);
      pSVar1 = (__this->fields)._effects;
      pUVar4 = (UnityEngine_GameObject_o *)
               ApplicationManagers_ResourceManager__InstantiateAsset<object>
                         (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58),"Prefabs/SnowEffect",
                          0,MethodInfo_GameObject_InstantiateAsset_GameObject);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        pIVar5 = UnityEngine_GameObject__AddComponent<object>(pUVar4,MethodInfo_SnowWeatherEffect_AddComponent_SnowWeatherEffect);
        if (pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)
                      0x0) {
          System_Collections_Generic_Dictionary<Int32Enum__object>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,0xc,pIVar5,
                     MethodInfo_Void_Add);
          pSVar1 = (__this->fields)._effects;
          pUVar4 = (UnityEngine_GameObject_o *)
                   ApplicationManagers_ResourceManager__InstantiateAsset<object>
                             (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58),
                              "Prefabs/WindEffect",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
            pIVar5 = UnityEngine_GameObject__AddComponent<object>(pUVar4,MethodInfo_WindWeatherEffect_AddComponent_WindWeatherEffect);
            if (pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o
                           *)0x0) {
              System_Collections_Generic_Dictionary<Int32Enum__object>__Add
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,0xd,pIVar5,
                         MethodInfo_Void_Add);
              pSVar1 = (__this->fields)._effects;
              pUVar4 = (UnityEngine_GameObject_o *)
                       ApplicationManagers_ResourceManager__InstantiateAsset<object>
                                 (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58),
                                  "Prefabs/ThunderEffect",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
              if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                pIVar5 = UnityEngine_GameObject__AddComponent<object>(pUVar4,MethodInfo_ThunderWeatherEffect_AddComponent_ThunderWeather);
                if (pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o
                               *)0x0) {
                  System_Collections_Generic_Dictionary<Int32Enum__object>__Add
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,0xb,
                             pIVar5,MethodInfo_Void_Add);
                  pSVar1 = (__this->fields)._effects;
                  if (pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o
                                 *)0x0) {
                    __this_02 = System_Collections_Generic_Dictionary<Int32Enum__object>__get_Values
                                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                           pSVar1,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_Weathe);
                    if (__this_02 !=
                        (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0
                       ) {
                      System_Collections_Generic_Dictionary_ValueCollection<Int32Enum__object>__GetEnumerator
                                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                  *)local_48,__this_02,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
                      pSVar6 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c
                                *)local_48._0_8_;
                      pIVar7 = (Il2CppType *)local_48._8_8_;
                      pIVar5 = local_38;
                      while( true ) {
                        __this_00.fields._8_8_ = pIVar7;
                        __this_00.fields._dictionary =
                             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6;
                        __this_00.fields._currentValue = pIVar5;
                        bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Int32Enum__object>__MoveNext
                                          (__this_00,(MethodInfo_31C8640 *)&stack0xffffffffffffff98)
                        ;
                        if ((char)bVar3 == '\0') {
                          __this_01.fields._8_8_ = pIVar7;
                          __this_01.fields._dictionary =
                               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6;
                          __this_01.fields._currentValue = pIVar5;
                          method_00 = MethodInfo_Void_Dispose;
                          System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Int32Enum__object>__Dispose
                                    (__this_01,(MethodInfo_31C8630 *)&stack0xffffffffffffff98);
                          Weather_WeatherManager__CreateFlashlight(__this,method_00);
                          return;
                        }
                        lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_raise_exception();
                        }
                        lVar2 = *(long *)(lVar2 + 0x28);
                        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_raise_exception();
                        }
                        if (pIVar5 == (Il2CppObject *)0x0) break;
                        pIVar8 = pIVar5;
                        (*pIVar5->klass->vtable[0xb].methodPtr)
                                  (pIVar5,*(undefined8 *)(lVar2 + 0x10),
                                   pIVar5->klass->vtable[0xb].method);
                        (*pIVar5->klass->vtable[8].methodPtr)
                                  (pIVar5,pIVar5->klass->vtable[8].method);
                        (*pIVar5->klass->vtable[6].methodPtr)
                                  (pIVar5,0,pIVar5->klass->vtable[6].method);
                        pIVar5 = pIVar8;
                      }
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
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


// Weather.WeatherManager$$CreateFlashlight
// il2cpp: void Weather_WeatherManager__CreateFlashlight (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x3d7d2a0

void Weather_WeatherManager__CreateFlashlight(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *pSVar1;
  System_String_o *path;
  long lVar2;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar3;
  MethodInfo *method_00;
  
  if (DAT_0570265d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_BaseWeatherEffect_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_FlashlightWeatherEffect_AddComponent_FlashlightW);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    il2cpp_init_method_metadata(&"Prefabs/FlashlightEffect");
    DAT_0570265d = '\x01';
  }
  pSVar1 = (__this->fields)._effects;
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset<object>
                        (path,"Prefabs/FlashlightEffect",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pIVar3 = UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_FlashlightWeatherEffect_AddComponent_FlashlightW);
    if (pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)
    {
      System_Collections_Generic_Dictionary<Int32Enum__object>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,7,pIVar3,
                 MethodInfo_Void_Add);
      pSVar1 = (__this->fields)._effects;
      if (pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0
         ) {
        pIVar3 = System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,7,
                            MethodInfo_BaseWeatherEffect_get_Item);
        if (pIVar3 != (Il2CppObject *)0x0) {
          (*pIVar3->klass->vtable[0xb].methodPtr)(pIVar3,0,pIVar3->klass->vtable[0xb].method);
          pSVar1 = (__this->fields)._effects;
          if (pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *
                        )0x0) {
            pIVar3 = System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,7,
                                MethodInfo_BaseWeatherEffect_get_Item);
            if (pIVar3 != (Il2CppObject *)0x0) {
              method_00 = (MethodInfo *)0x0;
              (*pIVar3->klass->vtable[6].methodPtr)(pIVar3,0,pIVar3->klass->vtable[6].method);
              lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
              if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
                parent = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
                if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                Weather_WeatherManager__TakeFlashlight(parent,method_00);
                return;
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


// Weather.WeatherManager$$FixedUpdate
// il2cpp: void Weather_WeatherManager__FixedUpdate (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x3d7d490

void Weather_WeatherManager__FixedUpdate(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__float__o *__this_00;
  Settings_WeatherSet_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  char cVar4;
  int32_t iVar5;
  bool_conflict bVar6;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *collection;
  System_Collections_Generic_List_object__o *__this_03;
  MethodInfo *in_RCX;
  MethodInfo *pMVar7;
  float fVar8;
  float fVar9;
  undefined1 in_stack_ffffffffffffff88 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar10;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  
  if (DAT_0570265e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_Weather);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_WeatherScheduleRunner_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Weather_WeatherScheduleRunn);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Weather_WeatherScheduleRunner);
    il2cpp_init_method_metadata(&TypeInfo_List_WeatherScheduleRunner);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata();
    DAT_0570265e = '\x01';
  }
  if ((*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) != 2) ||
     ((char)(__this->fields)._finishedLoading == '\0')) {
    return;
  }
  fVar9 = (__this->fields)._currentTime;
  fVar8 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  (__this->fields)._currentTime = fVar8 + fVar9;
  __this_00 = (__this->fields)._targetWeatherStartTimes;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
    pMVar7 = MethodInfo_Int32_get_Count;
    iVar5 = System_Collections_Generic_Dictionary<int__float>__get_Count
                      (__this_00,(MethodInfo_30157C0 *)MethodInfo_Int32_get_Count);
    if (0 < iVar5) {
      fVar9 = (__this->fields)._currentLerpWait;
      fVar8 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      (__this->fields)._currentLerpWait = fVar9 - fVar8;
      if (fVar9 - fVar8 <= 0.0) {
        Weather_WeatherManager__LerpCurrentWeatherToTarget(__this,pMVar7);
        Weather_WeatherManager__ApplyCurrentWeather(__this,0,0,in_RCX);
        (__this->fields)._currentLerpWait = 0.05;
      }
    }
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
      bVar6 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar4 = (char)bVar6;
    }
    else {
      bVar6 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar4 = (char)bVar6;
    }
    if (cVar4 == '\0') {
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
        collection = System_Collections_Generic_Dictionary<object__float>__get_Keys
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                                MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_Weather);
        __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_WeatherScheduleRunner);
        System_Collections_Generic_List<object>___ctor
                  (__this_03,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_Weather_WeatherScheduleRunner)
        ;
        if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator(&SStack_48,__this_03,MethodInfo_List_1_T__Enumerator_Weather_WeatherScheduleRunn);
          pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_48.fields._list;
          while (__this_01.fields._version = (int32_t)fVar9,
                __this_01.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_,
                __this_01.fields._index = in_stack_ffffffffffffff88._8_4_,
                __this_01.fields._current = (Il2CppObject *)pSVar10,
                bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
                (char)bVar6 != '\0') {
            pSVar3 = (__this->fields)._currentScheduleWait;
            if (pSVar3 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)
                          0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            fVar9 = System_Collections_Generic_Dictionary<object__float>__get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                               SStack_48.fields._current,MethodInfo_Single_get_Item);
            fVar8 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
            System_Collections_Generic_Dictionary<object__float>__set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                       SStack_48.fields._current,fVar9 - fVar8,MethodInfo_Void_set_Item);
            pSVar3 = (__this->fields)._currentScheduleWait;
            if (pSVar3 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)
                          0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            fVar8 = System_Collections_Generic_Dictionary<object__float>__get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                               SStack_48.fields._current,MethodInfo_Single_get_Item);
            if (fVar8 <= 0.0) {
              if ((Weather_WeatherScheduleRunner_o *)SStack_48.fields._current ==
                  (Weather_WeatherScheduleRunner_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              Weather_WeatherScheduleRunner__ConsumeSchedule
                        ((Weather_WeatherScheduleRunner_o *)SStack_48.fields._current,
                         (MethodInfo *)0x0);
            }
          }
          __this_02.fields._version = (int32_t)fVar9;
          __this_02.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
          __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
          __this_02.fields._current = (Il2CppObject *)pSVar10;
          pMVar7 = MethodInfo_Void_Dispose;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
          fVar9 = (__this->fields)._currentSyncWait;
          fVar8 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
          (__this->fields)._currentSyncWait = fVar9 - fVar8;
          if (0.0 < fVar9 - fVar8) {
            return;
          }
          if ((char)(__this->fields)._needSync == '\0') {
            return;
          }
          Weather_WeatherManager__LerpCurrentWeatherToTarget(__this,pMVar7);
          Weather_WeatherManager__SyncWeather(__this,pMVar7);
          *(undefined1 *)&(__this->fields)._needSync = 0;
          (__this->fields)._currentSyncWait = 5.0;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$SyncWeather
// il2cpp: void Weather_WeatherManager__SyncWeather (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x3d7cf00

void Weather_WeatherManager__SyncWeather(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  Settings_WeatherSet_o *pSVar1;
  Utility_Algorithms_CompressionAlgorithm_o *pUVar2;
  System_Collections_Generic_Dictionary_int__float__o *pSVar3;
  char cVar4;
  bool_conflict bVar5;
  System_Object_array *parameters;
  System_String_o *pSVar6;
  System_Byte_array *pSVar7;
  long lVar8;
  Il2CppObject *pIVar9;
  undefined8 uVar10;
  MethodInfo *in_RCX;
  float local_2c;
  
  if (DAT_0570265f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DataCompressors);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"SetWeatherRPC");
    DAT_0570265f = '\x01';
  }
  Weather_WeatherManager__ApplyCurrentWeather(__this,0,1,in_RCX);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  else {
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  if (cVar4 == '\0') {
    return;
  }
  __this_00 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,6);
  if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = (__this->fields)._currentWeather;
  if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
    pUVar2 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
    pSVar6 = (System_String_o *)
             (*(pSVar1->klass->vtable)._7_SerializeToJsonString.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._7_SerializeToJsonString.method);
    if ((pUVar2 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) &&
       (pSVar7 = Utility_Algorithms_CompressionAlgorithm__CompressString
                           (pUVar2,pSVar6,1,(MethodInfo *)0x0),
       parameters != (System_Object_array *)0x0)) {
      if ((pSVar7 != (System_Byte_array *)0x0) &&
         (lVar8 = il2cpp_runtime_glue(pSVar7,(((parameters->obj).klass)->_1).element_class),
         lVar8 == 0)) goto LAB_03d7d291;
      if ((int)parameters->max_length == 0) goto LAB_03d7d28c;
      parameters->m_Items[0] = &pSVar7->obj;
      il2cpp_runtime_glue(parameters->m_Items,pSVar7);
      pSVar1 = (__this->fields)._startWeather;
      if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
        pUVar2 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8)
        ;
        pSVar6 = (System_String_o *)
                 (*(pSVar1->klass->vtable)._7_SerializeToJsonString.methodPtr)
                           (pSVar1,(pSVar1->klass->vtable)._7_SerializeToJsonString.method);
        if (pUVar2 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
          pSVar7 = Utility_Algorithms_CompressionAlgorithm__CompressString
                             (pUVar2,pSVar6,1,(MethodInfo *)0x0);
          if ((pSVar7 != (System_Byte_array *)0x0) &&
             (lVar8 = il2cpp_runtime_glue(pSVar7,(((parameters->obj).klass)->_1).element_class),
             lVar8 == 0)) goto LAB_03d7d291;
          if ((uint)parameters->max_length < 2) goto LAB_03d7d28c;
          parameters->m_Items[1] = &pSVar7->obj;
          il2cpp_runtime_glue(parameters->m_Items + 1,pSVar7);
          pSVar1 = (__this->fields)._targetWeather;
          if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
            pUVar2 = (Utility_Algorithms_CompressionAlgorithm_o *)
                     **(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
            pSVar6 = (System_String_o *)
                     (*(pSVar1->klass->vtable)._7_SerializeToJsonString.methodPtr)
                               (pSVar1,(pSVar1->klass->vtable)._7_SerializeToJsonString.method);
            if (pUVar2 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
              pSVar7 = Utility_Algorithms_CompressionAlgorithm__CompressString
                                 (pUVar2,pSVar6,1,(MethodInfo *)0x0);
              if ((pSVar7 != (System_Byte_array *)0x0) &&
                 (lVar8 = il2cpp_runtime_glue(pSVar7,(((parameters->obj).klass)->_1).element_class),
                 lVar8 == 0)) {
LAB_03d7d291:
                uVar10 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
                il2cpp_glue_02274a00(uVar10,0);
              }
              if (2 < (uint)parameters->max_length) {
                parameters->m_Items[2] = &pSVar7->obj;
                il2cpp_runtime_glue(parameters->m_Items + 2,pSVar7);
                pSVar3 = (__this->fields)._targetWeatherStartTimes;
                if ((pSVar3 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) &&
                   (lVar8 = il2cpp_runtime_glue(pSVar3,(((parameters->obj).klass)->_1).element_class)
                   , lVar8 == 0)) goto LAB_03d7d291;
                if (3 < (uint)parameters->max_length) {
                  parameters->m_Items[3] = (Il2CppObject *)pSVar3;
                  il2cpp_runtime_glue(parameters->m_Items + 3,pSVar3);
                  pSVar3 = (__this->fields)._targetWeatherEndTimes;
                  if ((pSVar3 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) &&
                     (lVar8 = il2cpp_runtime_glue(pSVar3,(((parameters->obj).klass)->_1).
                                                        element_class), lVar8 == 0))
                  goto LAB_03d7d291;
                  if (4 < (uint)parameters->max_length) {
                    parameters->m_Items[4] = (Il2CppObject *)pSVar3;
                    il2cpp_runtime_glue(parameters->m_Items + 4,pSVar3);
                    local_2c = (__this->fields)._currentTime;
                    pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_2c);
                    if ((pIVar9 != (Il2CppObject *)0x0) &&
                       (lVar8 = il2cpp_runtime_glue(pIVar9,(((parameters->obj).klass)->_1).
                                                          element_class), lVar8 == 0))
                    goto LAB_03d7d291;
                    if (5 < (uint)parameters->max_length) {
                      parameters->m_Items[5] = pIVar9;
                      il2cpp_runtime_glue(parameters->m_Items + 5,pIVar9);
                      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
                        Photon_Pun_PhotonView__RPC
                                  (__this_00,"SetWeatherRPC",1,parameters,(MethodInfo *)0x0);
                        return;
                      }
                      goto LAB_03d7d287;
                    }
                  }
                }
              }
LAB_03d7d28c:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
        }
      }
    }
  }
LAB_03d7d287:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$OnPlayerEnteredRoom
// il2cpp: void Weather_WeatherManager__OnPlayerEnteredRoom (Weather_WeatherManager_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x3d7ea60

void Weather_WeatherManager__OnPlayerEnteredRoom
               (Weather_WeatherManager_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method
               )

{
  Photon_Pun_PhotonView_o *__this_00;
  Settings_WeatherSet_o *pSVar1;
  Utility_Algorithms_CompressionAlgorithm_o *pUVar2;
  System_Collections_Generic_Dictionary_int__float__o *pSVar3;
  char cVar4;
  bool_conflict bVar5;
  undefined8 in_RAX;
  System_Object_array *parameters;
  System_String_o *pSVar6;
  System_Byte_array *pSVar7;
  long lVar8;
  Il2CppObject *pIVar9;
  undefined8 uVar10;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (DAT_05702660 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DataCompressors);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"SetWeatherRPC");
    DAT_05702660 = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto LAB_03d7ea8d;
LAB_03d7eaf3:
    il2cpp_init_class();
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto LAB_03d7eaf3;
LAB_03d7ea8d:
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  if (cVar4 == '\0') {
    return;
  }
  __this_00 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,6);
  if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = (__this->fields)._currentWeather;
  if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
    pUVar2 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
    pSVar6 = (System_String_o *)
             (*(pSVar1->klass->vtable)._7_SerializeToJsonString.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._7_SerializeToJsonString.method);
    if ((pUVar2 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) &&
       (pSVar7 = Utility_Algorithms_CompressionAlgorithm__CompressString
                           (pUVar2,pSVar6,1,(MethodInfo *)0x0),
       parameters != (System_Object_array *)0x0)) {
      if ((pSVar7 != (System_Byte_array *)0x0) &&
         (lVar8 = il2cpp_runtime_glue(pSVar7,(((parameters->obj).klass)->_1).element_class),
         lVar8 == 0)) goto LAB_03d7edea;
      if ((int)parameters->max_length == 0) goto LAB_03d7ede5;
      parameters->m_Items[0] = &pSVar7->obj;
      il2cpp_runtime_glue(parameters->m_Items,pSVar7);
      pSVar1 = (__this->fields)._startWeather;
      if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
        pUVar2 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8)
        ;
        pSVar6 = (System_String_o *)
                 (*(pSVar1->klass->vtable)._7_SerializeToJsonString.methodPtr)
                           (pSVar1,(pSVar1->klass->vtable)._7_SerializeToJsonString.method);
        if (pUVar2 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
          pSVar7 = Utility_Algorithms_CompressionAlgorithm__CompressString
                             (pUVar2,pSVar6,1,(MethodInfo *)0x0);
          if ((pSVar7 != (System_Byte_array *)0x0) &&
             (lVar8 = il2cpp_runtime_glue(pSVar7,(((parameters->obj).klass)->_1).element_class),
             lVar8 == 0)) goto LAB_03d7edea;
          if ((uint)parameters->max_length < 2) goto LAB_03d7ede5;
          parameters->m_Items[1] = &pSVar7->obj;
          il2cpp_runtime_glue(parameters->m_Items + 1,pSVar7);
          pSVar1 = (__this->fields)._targetWeather;
          if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
            pUVar2 = (Utility_Algorithms_CompressionAlgorithm_o *)
                     **(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
            pSVar6 = (System_String_o *)
                     (*(pSVar1->klass->vtable)._7_SerializeToJsonString.methodPtr)
                               (pSVar1,(pSVar1->klass->vtable)._7_SerializeToJsonString.method);
            if (pUVar2 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
              pSVar7 = Utility_Algorithms_CompressionAlgorithm__CompressString
                                 (pUVar2,pSVar6,1,(MethodInfo *)0x0);
              if ((pSVar7 != (System_Byte_array *)0x0) &&
                 (lVar8 = il2cpp_runtime_glue(pSVar7,(((parameters->obj).klass)->_1).element_class),
                 lVar8 == 0)) {
LAB_03d7edea:
                uVar10 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
                il2cpp_glue_02274a00(uVar10,0);
              }
              if (2 < (uint)parameters->max_length) {
                parameters->m_Items[2] = &pSVar7->obj;
                il2cpp_runtime_glue(parameters->m_Items + 2,pSVar7);
                pSVar3 = (__this->fields)._targetWeatherStartTimes;
                if ((pSVar3 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) &&
                   (lVar8 = il2cpp_runtime_glue(pSVar3,(((parameters->obj).klass)->_1).element_class)
                   , lVar8 == 0)) goto LAB_03d7edea;
                if (3 < (uint)parameters->max_length) {
                  parameters->m_Items[3] = (Il2CppObject *)pSVar3;
                  il2cpp_runtime_glue(parameters->m_Items + 3,pSVar3);
                  pSVar3 = (__this->fields)._targetWeatherEndTimes;
                  if ((pSVar3 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) &&
                     (lVar8 = il2cpp_runtime_glue(pSVar3,(((parameters->obj).klass)->_1).
                                                        element_class), lVar8 == 0))
                  goto LAB_03d7edea;
                  if (4 < (uint)parameters->max_length) {
                    parameters->m_Items[4] = (Il2CppObject *)pSVar3;
                    il2cpp_runtime_glue(parameters->m_Items + 4,pSVar3);
                    uStack_38 = CONCAT44((__this->fields)._currentTime,(undefined4)uStack_38);
                    pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,(long)&uStack_38 + 4);
                    if ((pIVar9 != (Il2CppObject *)0x0) &&
                       (lVar8 = il2cpp_runtime_glue(pIVar9,(((parameters->obj).klass)->_1).
                                                          element_class), lVar8 == 0))
                    goto LAB_03d7edea;
                    if (5 < (uint)parameters->max_length) {
                      parameters->m_Items[5] = pIVar9;
                      il2cpp_runtime_glue(parameters->m_Items + 5,pIVar9);
                      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
                        Photon_Pun_PhotonView__RPC
                                  (__this_00,"SetWeatherRPC",player,parameters,(MethodInfo *)0x0);
                        return;
                      }
                      goto LAB_03d7ede0;
                    }
                  }
                }
              }
LAB_03d7ede5:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
        }
      }
    }
  }
LAB_03d7ede0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$LerpCurrentWeatherToTarget
// il2cpp: void Weather_WeatherManager__LerpCurrentWeatherToTarget (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x3d7d910

void Weather_WeatherManager__LerpCurrentWeatherToTarget
               (Weather_WeatherManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  System_Collections_Generic_Dictionary_int__float__o *pSVar6;
  System_Int32_array *pSVar7;
  Settings_WeatherSet_o *pSVar8;
  System_Collections_Specialized_OrderedDictionary_o *pSVar9;
  System_Collections_Generic_List_T__o *__this_00;
  System_Object_array *pSVar10;
  Settings_StringSetting_o *pSVar11;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_int__o __this_01;
  System_Collections_Generic_List_Enumerator_int__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_04;
  long lVar12;
  bool_conflict bVar13;
  System_Collections_Generic_List_int__o *__this_05;
  System_String_o *key;
  Il2CppObject *pIVar14;
  Settings_TypedSetting_Vector3__o *__this_06;
  Il2CppObject *pIVar15;
  Utility_Color255_o *value;
  UnityEngine_Object_o *x;
  Weather_WeatherManager_o *__this_07;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_o value_00;
  undefined1 in_stack_ffffffffffffff58 [12];
  float in_stack_ffffffffffffff64;
  Il2CppMethodPointer pIVar20;
  undefined1 auVar21 [8];
  Il2CppMethodPointer pIVar22;
  undefined4 uVar23;
  int32_t iVar24;
  int32_t iVar25;
  undefined4 uVar26;
  System_Enum_c *local_78;
  Il2CppType *pIStack_70;
  int32_t local_68;
  float fStack_64;
  _union_229640 _Stack_60;
  undefined1 local_50 [8];
  Il2CppType *pIStack_48;
  int32_t local_40;
  float fStack_3c;
  _union_229640 _Stack_38;
  
  if (DAT_05702661 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseSetting);
    il2cpp_init_method_metadata(&TypeInfo_ColorSetting);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Int3);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_Int32_System_Single__get_C);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Int32__GetEnumerator);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_List_int);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_Vector3Setting);
    il2cpp_init_method_metadata(&TypeInfo_WeatherEffect);
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    DAT_05702661 = '\x01';
  }
  local_68 = 0;
  fStack_64 = 0.0;
  _Stack_60.genericMethod = (Il2CppObject *)0x0;
  local_78 = (System_Enum_c *)0x0;
  pIStack_70 = (Il2CppType *)0x0;
  pIVar20 = (Il2CppMethodPointer)0x0;
  pIVar22 = (Il2CppMethodPointer)0x0;
  uVar23 = 0;
  uVar26 = 0;
  __this_05 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_glue(TypeInfo_List_int);
  System_Collections_Generic_List<int>___ctor(__this_05,MethodInfo_List_1_System_Int32);
  pSVar6 = (__this->fields)._targetWeatherEndTimes;
  if (pSVar6 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
    System_Collections_Generic_Dictionary<int__float>__GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_50,pSVar6,
               MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Int3);
    local_68 = local_40;
    fStack_64 = fStack_3c;
    _Stack_60 = _Stack_38;
    local_78 = (System_Enum_c *)local_50;
    pIStack_70 = pIStack_48;
    while (__this_03.fields._index = (int32_t)in_stack_ffffffffffffff64,
          __this_03.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)
               in_stack_ffffffffffffff58._0_8_,
          __this_03.fields._version = in_stack_ffffffffffffff58._8_4_,
          __this_03.fields._current.fields.key = (Il2CppObject *)pIVar20,
          __this_03.fields._current.fields.value = (Il2CppObject *)pIVar22,
          __this_03.fields._getEnumeratorRetType = uVar23, __this_03.fields._36_4_ = uVar26,
          bVar13 = System_Collections_Generic_Dictionary_Enumerator<int__float>__MoveNext
                             (__this_03,(MethodInfo_31C3C50 *)&local_78), iVar24 = local_68,
          lVar12 = MethodInfo_Void_Add, (char)bVar13 != '\0') {
      if (fStack_64 <= (__this->fields)._currentTime) {
        if (__this_05 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        piVar1 = &(__this_05->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar7 = (__this_05->fields)._items;
        if (pSVar7 == (System_Int32_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar5 = (__this_05->fields)._size;
        if (uVar5 < (uint)pSVar7->max_length) {
          (__this_05->fields)._size = uVar5 + 1;
          pSVar7->m_Items[(int)uVar5] = local_68;
          in_stack_ffffffffffffff64 = 1.0;
        }
        else {
          System_Collections_Generic_List<int>__AddWithResize
                    (__this_05,local_68,
                     *(MethodInfo_3579120 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          in_stack_ffffffffffffff64 = 1.0;
        }
      }
      else {
        pSVar6 = (__this->fields)._targetWeatherStartTimes;
        if (pSVar6 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        fVar17 = fStack_64;
        fVar16 = System_Collections_Generic_Dictionary<int__float>__get_Item
                           (pSVar6,local_68,MethodInfo_Single_get_Item);
        fVar17 = fVar17 - fVar16;
        if (fVar17 <= 1.0) {
          fVar17 = 1.0;
        }
        fVar17 = ((__this->fields)._currentTime - fVar16) / fVar17;
        in_stack_ffffffffffffff64 = 0.0;
        if ((0.0 <= fVar17) && (in_stack_ffffffffffffff64 = 1.0, fVar17 <= 1.0)) {
          in_stack_ffffffffffffff64 = fVar17;
        }
      }
      local_50 = (undefined1  [8])TypeInfo_WeatherEffect;
      pIStack_48 = (Il2CppType *)0xffffffffffffffff;
      local_40 = iVar24;
      key = System_Enum__ToString((System_Enum_o *)local_50,(MethodInfo *)0x0);
      pSVar8 = (__this->fields)._startWeather;
      if (pSVar8 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar9 = (pSVar8->fields).Settings;
      if (pSVar9 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar14 = System_Collections_Specialized_OrderedDictionary__get_Item
                          (pSVar9,(Il2CppObject *)key,(MethodInfo *)0x0);
      if (pIVar14 != (Il2CppObject *)0x0) {
        bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
        if (((pIVar14->klass->_2).naturalAligment < bVar4) ||
           ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseSetting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar14);
        }
      }
      pSVar8 = (__this->fields)._currentWeather;
      if (pSVar8 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar9 = (pSVar8->fields).Settings;
      if (pSVar9 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_06 = (Settings_TypedSetting_Vector3__o *)
                  System_Collections_Specialized_OrderedDictionary__get_Item
                            (pSVar9,(Il2CppObject *)key,(MethodInfo *)0x0);
      if (__this_06 != (Settings_TypedSetting_Vector3__o *)0x0) {
        bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
        if (((__this_06->klass->_2).naturalAligment < bVar4) ||
           ((__this_06->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseSetting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(__this_06);
        }
      }
      pSVar8 = (__this->fields)._targetWeather;
      if (pSVar8 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_07 = (Weather_WeatherManager_o *)(pSVar8->fields).Settings;
      if (__this_07 == (Weather_WeatherManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar15 = System_Collections_Specialized_OrderedDictionary__get_Item
                          ((System_Collections_Specialized_OrderedDictionary_o *)__this_07,
                           (Il2CppObject *)key,(MethodInfo *)0x0);
      if (pIVar15 != (Il2CppObject *)0x0) {
        bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
        if (((pIVar15->klass->_2).naturalAligment < bVar4) ||
           ((pIVar15->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseSetting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar15);
        }
      }
      switch(iVar24) {
      case 1:
      case 4:
      case 6:
      case 7:
      case 9:
        if (pIVar14 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar4 = (TypeInfo_ColorSetting->_2).naturalAligment;
        if (((pIVar14->klass->_2).naturalAligment < bVar4) ||
           ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_ColorSetting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar14);
        }
        bVar4 = (TypeInfo_ColorSetting->_2).naturalAligment;
        if (((pIVar14->klass->_2).naturalAligment < bVar4) ||
           ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_ColorSetting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar14);
        }
        if (pIVar15 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (((pIVar15->klass->_2).naturalAligment < bVar4) ||
           ((pIVar15->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_ColorSetting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar15);
        }
        if (((pIVar15->klass->_2).naturalAligment < bVar4) ||
           ((pIVar15->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_ColorSetting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar15);
        }
        value = Utility_Color255__Lerp
                          (pIVar14[1].monitor,pIVar15[1].monitor,in_stack_ffffffffffffff64,
                           (MethodInfo *)0x0);
        if (__this_06 == (Settings_TypedSetting_Vector3__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar4 = (TypeInfo_ColorSetting->_2).naturalAligment;
        if (((__this_06->klass->_2).naturalAligment < bVar4) ||
           ((__this_06->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_ColorSetting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(__this_06);
        }
        bVar4 = (TypeInfo_ColorSetting->_2).naturalAligment;
        if (((__this_06->klass->_2).naturalAligment < bVar4) ||
           ((__this_06->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_ColorSetting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(__this_06);
        }
        Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)__this_06,(Il2CppObject *)value,MethodInfo_Void_set_Value);
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
        if (pIVar14 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar4 = (TypeInfo_FloatSetting->_2).naturalAligment;
        if (((pIVar14->klass->_2).naturalAligment < bVar4) ||
           ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_FloatSetting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar14);
        }
        bVar4 = (TypeInfo_FloatSetting->_2).naturalAligment;
        if (((pIVar14->klass->_2).naturalAligment < bVar4) ||
           ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_FloatSetting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar14);
        }
        if (pIVar15 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (((pIVar15->klass->_2).naturalAligment < bVar4) ||
           ((pIVar15->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_FloatSetting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar15);
        }
        if (((pIVar15->klass->_2).naturalAligment < bVar4) ||
           ((pIVar15->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_FloatSetting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar15);
        }
        if (__this_06 == (Settings_TypedSetting_Vector3__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (((__this_06->klass->_2).naturalAligment < bVar4) ||
           ((__this_06->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_FloatSetting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(__this_06);
        }
        if (((__this_06->klass->_2).naturalAligment < bVar4) ||
           ((__this_06->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_FloatSetting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(__this_06);
        }
        fVar17 = *(float *)((long)&pIVar14[1].klass + 4);
        fVar16 = 0.0;
        if (0.0 <= in_stack_ffffffffffffff64) {
          fVar16 = in_stack_ffffffffffffff64;
        }
        Settings_TypedSetting<float>__set_Value
                  ((Settings_TypedSetting_float__o *)__this_06,
                   (*(float *)((long)&pIVar15[1].klass + 4) - fVar17) * fVar16 + fVar17,MethodInfo_Void_set_Value
                  );
        break;
      case 3:
      case 0xe:
        if (pIVar14 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar4 = (TypeInfo_Vector3Setting->_2).naturalAligment;
        if (((pIVar14->klass->_2).naturalAligment < bVar4) ||
           ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_Vector3Setting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar14);
        }
        bVar4 = (TypeInfo_Vector3Setting->_2).naturalAligment;
        if (((pIVar14->klass->_2).naturalAligment < bVar4) ||
           ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_Vector3Setting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar14);
        }
        if (pIVar15 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (((pIVar15->klass->_2).naturalAligment < bVar4) ||
           ((pIVar15->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_Vector3Setting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar15);
        }
        if (((pIVar15->klass->_2).naturalAligment < bVar4) ||
           ((pIVar15->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_Vector3Setting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar15);
        }
        if (__this_06 == (Settings_TypedSetting_Vector3__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (((__this_06->klass->_2).naturalAligment < bVar4) ||
           ((__this_06->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_Vector3Setting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(__this_06);
        }
        if (((__this_06->klass->_2).naturalAligment < bVar4) ||
           ((__this_06->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_Vector3Setting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(__this_06);
        }
        uVar2 = *(undefined8 *)((long)&pIVar14[1].monitor + 4);
        fVar17 = *(float *)((long)&pIVar14[2].klass + 4);
        uVar3 = *(undefined8 *)((long)&pIVar15[1].monitor + 4);
        fVar16 = 0.0;
        if (0.0 <= in_stack_ffffffffffffff64) {
          fVar16 = in_stack_ffffffffffffff64;
        }
        fVar18 = (float)uVar2;
        fVar19 = (float)((ulong)uVar2 >> 0x20);
        value_00.fields.x = fVar16 * ((float)uVar3 - fVar18) + fVar18;
        value_00.fields.y = fVar16 * ((float)((ulong)uVar3 >> 0x20) - fVar19) + fVar19;
        value_00.fields.z = (*(float *)((long)&pIVar15[2].klass + 4) - fVar17) * fVar16 + fVar17;
        Settings_TypedSetting<Vector3>__set_Value(__this_06,value_00,MethodInfo_Void_set_Value);
        break;
      case 5:
        pSVar8 = (__this->fields)._currentWeather;
        if (pSVar8 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar11 = (pSVar8->fields).Skybox;
        if (pSVar11 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar8 = (__this->fields)._targetWeather;
        if (pSVar8 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        method_00 = (MethodInfo *)(pSVar8->fields).Skybox;
        if (method_00 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        x = (UnityEngine_Object_o *)
            Weather_WeatherManager__GetBlendedSkybox
                      (__this_07,(pSVar11->fields)._value,(System_String_o *)method_00->name,
                       method_00);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar13 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar13 != '\0') {
          if (1.0 <= in_stack_ffffffffffffff64) {
            if (pIVar15 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            bVar4 = (TypeInfo_StringSetting->_2).naturalAligment;
            if (((pIVar15->klass->_2).naturalAligment < bVar4) ||
               ((pIVar15->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_StringSetting)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pIVar15);
            }
            bVar4 = (TypeInfo_StringSetting->_2).naturalAligment;
            if (((pIVar15->klass->_2).naturalAligment < bVar4) ||
               ((pIVar15->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_StringSetting)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pIVar15);
            }
            if (__this_06 == (Settings_TypedSetting_Vector3__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if (((__this_06->klass->_2).naturalAligment < bVar4) ||
               ((__this_06->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_StringSetting)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(__this_06);
            }
            if (((__this_06->klass->_2).naturalAligment < bVar4) ||
               ((__this_06->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_StringSetting)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(__this_06);
            }
            Settings_TypedSetting<object>__set_Value
                      ((Settings_TypedSetting_T__o *)__this_06,pIVar15[1].monitor,MethodInfo_Void_set_Value);
          }
          if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702654 == '\0') {
            il2cpp_init_method_metadata(&"_Blend");
            DAT_05702654 = '\x01';
          }
          if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UnityEngine_Material__SetFloat
                    ((UnityEngine_Material_o *)x,"_Blend",in_stack_ffffffffffffff64,
                     (MethodInfo *)0x0);
        }
      }
      lVar12 = MethodInfo_Void_Add;
      __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields)._needApply;
      if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar10 = (__this_00->fields)._items;
      if (pSVar10 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar5 = (__this_00->fields)._size;
      if (uVar5 < (uint)pSVar10->max_length) {
        (__this_00->fields)._size = uVar5 + 1;
        *(int32_t *)((long)pSVar10->m_Items + (long)(int)uVar5 * 4) = iVar24;
      }
      else {
        System_Collections_Generic_List<Int32Enum>__AddWithResize
                  (__this_00,iVar24,
                   *(MethodInfo_357C110 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
    }
    __this_04.fields._index = (int32_t)in_stack_ffffffffffffff64;
    __this_04.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff58._0_8_;
    __this_04.fields._version = in_stack_ffffffffffffff58._8_4_;
    __this_04.fields._current.fields.key = (Il2CppObject *)pIVar20;
    __this_04.fields._current.fields.value = (Il2CppObject *)pIVar22;
    __this_04.fields._getEnumeratorRetType = uVar23;
    __this_04.fields._36_4_ = uVar26;
    System_Collections_Generic_Dictionary_Enumerator<int__float>__Dispose
              (__this_04,(MethodInfo_31C3D60 *)&local_78);
    if (__this_05 != (System_Collections_Generic_List_int__o *)0x0) {
      System_Collections_Generic_List<int>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_50,__this_05,MethodInfo_List_1_T__Enumerator_System_Int32__GetEnumerator)
      ;
      auVar21 = local_50;
      iVar24 = local_40;
      while( true ) {
        __this_01.fields._version = (int32_t)in_stack_ffffffffffffff64;
        __this_01.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff58._0_8_;
        __this_01.fields._index = in_stack_ffffffffffffff58._8_4_;
        __this_01.fields._16_8_ = auVar21;
        bVar13 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                           (__this_01,(MethodInfo_3181160 *)&stack0xffffffffffffff68);
        if ((char)bVar13 == '\0') {
          __this_02.fields._version = (int32_t)in_stack_ffffffffffffff64;
          __this_02.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff58._0_8_;
          __this_02.fields._index = in_stack_ffffffffffffff58._8_4_;
          __this_02.fields._16_8_ = auVar21;
          System_Collections_Generic_List_Enumerator<int>__Dispose
                    (__this_02,(MethodInfo_3181150 *)&stack0xffffffffffffff68);
          return;
        }
        pSVar6 = (__this->fields)._targetWeatherStartTimes;
        if (pSVar6 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) break;
        iVar25 = iVar24;
        System_Collections_Generic_Dictionary<int__float>__Remove(pSVar6,iVar24,MethodInfo_Boolean_Remove);
        pSVar6 = (__this->fields)._targetWeatherEndTimes;
        if (pSVar6 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_Dictionary<int__float>__Remove(pSVar6,iVar24,MethodInfo_Boolean_Remove);
        iVar24 = iVar25;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$ApplyCurrentWeather
// il2cpp: void Weather_WeatherManager__ApplyCurrentWeather (Weather_WeatherManager_o* __this, bool firstStart, bool applyAll, const MethodInfo* method);
// 0x3d7b500

/* WARNING: Removing unreachable block (ram,0x03d7c724) */
/* WARNING: Removing unreachable block (ram,0x03d7c697) */
/* WARNING: Removing unreachable block (ram,0x03d7c6bd) */

void Weather_WeatherManager__ApplyCurrentWeather
               (Weather_WeatherManager_o *__this,bool_conflict firstStart,bool_conflict applyAll,
               MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar4;
  byte bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *pSVar11;
  Settings_WeatherSet_o *pSVar12;
  Settings_FloatSetting_o *pSVar13;
  Settings_StringSetting_o *pSVar14;
  MethodInfo *method_00;
  Il2CppClass *pIVar15;
  Settings_ColorSetting_o *pSVar16;
  Utility_Color255_o *pUVar17;
  Settings_Vector3Setting_o *pSVar18;
  System_Collections_Generic_List_object__o *pSVar19;
  System_Collections_Generic_List_WeatherEffect__o *pSVar20;
  undefined1 auVar21 [16];
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_T__o __this_08;
  UnityEngine_Light_o *__this_09;
  int32_t key;
  bool_conflict bVar22;
  System_Collections_Generic_List_T__o *pSVar23;
  System_String_o *key_00;
  Il2CppObject *pIVar24;
  UnityEngine_Component_o *pUVar25;
  UnityEngine_GameObject_o *pUVar26;
  Weather_WeatherManager__WaitAndApplySkybox_d__51_o *__this_10;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *__this_11;
  Weather_WeatherManager_o *__this_12;
  float fVar27;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar29;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar30 [16];
  UnityEngine_Vector3_o euler;
  UnityEngine_Color_o UVar31;
  UnityEngine_Quaternion_o value;
  float in_stack_ffffffffffffff68;
  undefined4 in_stack_ffffffffffffff6c;
  undefined4 in_stack_ffffffffffffff70;
  undefined4 uVar32;
  undefined4 in_stack_ffffffffffffff74;
  undefined4 uVar33;
  undefined4 in_stack_ffffffffffffff78;
  float in_stack_ffffffffffffff7c;
  undefined1 local_80 [8];
  Il2CppType *pIStack_78;
  int32_t local_70;
  undefined4 uStack_6c;
  Weather_WeatherManager_c *local_68;
  Il2CppType *pIStack_60;
  UnityEngine_Light_o *local_58;
  Weather_WeatherManager_c *local_48;
  Il2CppType *pIStack_40;
  int32_t local_38;
  
  if (DAT_05702662 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseWeatherEffect_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Light_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_WeatherEffect_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_FlashlightWeatherEffect);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Weather_WeatherEffect__GetE);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_Light__GetEnume);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Weather_WeatherEffect__EnumToList_Weather);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&TypeInfo_WeatherEffect);
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    il2cpp_init_method_metadata(&TypeInfo_WindWeatherEffect);
    il2cpp_init_method_metadata(&"_Tint");
    DAT_05702662 = '\x01';
  }
  local_48 = (Weather_WeatherManager_c *)0x0;
  pIStack_40 = (Il2CppType *)0x0;
  _local_38 = (Il2CppType **)0x0;
  local_68 = (Weather_WeatherManager_c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (UnityEngine_Light_o *)0x0;
  if ((byte)firstStart == 0) {
    if (DAT_05702667 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
      il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
      DAT_05702667 = '\x01';
    }
    lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x98), lVar10 == 0)) goto LAB_03d7c679;
    if (*(int *)(lVar10 + 0x14) == 0) {
      return;
    }
  }
  if ((char)applyAll != '\0') {
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar23 = Utility_Util__EnumToList<Int32Enum>(MethodInfo_List_1_Weather_WeatherEffect__EnumToList_Weather);
    (__this->fields)._needApply = (System_Collections_Generic_List_WeatherEffect__o *)pSVar23;
    il2cpp_runtime_glue(&(__this->fields)._needApply,pSVar23);
  }
  lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if (((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x98), lVar10 != 0)) &&
     (pSVar23 = (System_Collections_Generic_List_T__o *)(__this->fields)._needApply,
     pSVar23 != (System_Collections_Generic_List_T__o *)0x0)) {
    iVar8 = *(int *)(lVar10 + 0x14);
    System_Collections_Generic_List<Int32Enum>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_80,pSVar23,MethodInfo_List_1_T__Enumerator_Weather_WeatherEffect__GetE);
    _local_38 = (Il2CppType **)CONCAT44(uStack_6c,local_70);
    local_48 = (Weather_WeatherManager_c *)local_80;
    pIStack_40 = pIStack_78;
switchD_03d7b80d_default:
    __this_12 = (Weather_WeatherManager_o *)&stack0xffffffffffffffb8;
    __this_01.fields._list._4_4_ = in_stack_ffffffffffffff6c;
    __this_01.fields._list._0_4_ = in_stack_ffffffffffffff68;
    __this_01.fields._index = in_stack_ffffffffffffff70;
    __this_01.fields._version = in_stack_ffffffffffffff74;
    __this_01.fields._current._0_4_ = in_stack_ffffffffffffff78;
    __this_01.fields._current._4_4_ = in_stack_ffffffffffffff7c;
    bVar22 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                       (__this_01,(MethodInfo_3181D50 *)__this_12);
    if ((char)bVar22 != '\0') {
      key = local_38;
      if ((iVar8 == 1 & ((byte)firstStart ^ 1)) != 0) goto code_r0x03d7b7d5;
      goto LAB_03d7b7f7;
    }
    __this_08.fields._list._4_4_ = in_stack_ffffffffffffff6c;
    __this_08.fields._list._0_4_ = in_stack_ffffffffffffff68;
    __this_08.fields._index = in_stack_ffffffffffffff70;
    __this_08.fields._version = in_stack_ffffffffffffff74;
    __this_08.fields._current._0_4_ = in_stack_ffffffffffffff78;
    __this_08.fields._current._4_4_ = in_stack_ffffffffffffff7c;
    System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
              (__this_08,(MethodInfo_3181D40 *)&stack0xffffffffffffffb8);
    pSVar20 = (__this->fields)._needApply;
    if (pSVar20 != (System_Collections_Generic_List_WeatherEffect__o *)0x0) {
      piVar1 = &(pSVar20->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar20->fields)._size = 0;
      return;
    }
  }
LAB_03d7c679:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
code_r0x03d7b7d5:
  __this_12 = (Weather_WeatherManager_o *)(__this->fields).LowEffects;
  if (__this_12 == (Weather_WeatherManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar22 = System_Collections_Generic_HashSet<Int32Enum>__Contains
                     ((System_Collections_Generic_HashSet_T__o *)__this_12,local_38,MethodInfo_Boolean_Contains);
  if ((char)bVar22 != '\0') {
LAB_03d7b7f7:
    switch(key) {
    case 1:
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar19 = *(System_Collections_Generic_List_object__o **)
                 (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x28);
      if (pSVar19 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_80,pSVar19,MethodInfo_List_1_T__Enumerator_UnityEngine_Light__GetEnume);
      local_58 = (UnityEngine_Light_o *)CONCAT44(uStack_6c,local_70);
      local_68 = (Weather_WeatherManager_c *)local_80;
      pIStack_60 = pIStack_78;
      while (__this_02.fields._list._4_4_ = in_stack_ffffffffffffff6c,
            __this_02.fields._list._0_4_ = in_stack_ffffffffffffff68,
            __this_02.fields._index = in_stack_ffffffffffffff70,
            __this_02.fields._version = in_stack_ffffffffffffff74,
            __this_02.fields._current._0_4_ = in_stack_ffffffffffffff78,
            __this_02.fields._current._4_4_ = in_stack_ffffffffffffff7c,
            bVar22 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (__this_02,(MethodInfo_3185E20 *)&local_68), __this_09 = local_58,
            (char)bVar22 != '\0') {
        pSVar12 = (__this->fields)._currentWeather;
        if (pSVar12 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar16 = (pSVar12->fields).Daylight;
        if (pSVar16 == (Settings_ColorSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar17 = (pSVar16->fields)._value;
        if (pUVar17 == (Utility_Color255_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UVar31 = Utility_Color255__ToColor(pUVar17,(MethodInfo *)0x0);
        if (__this_09 == (UnityEngine_Light_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_Light__set_color(__this_09,UVar31,(MethodInfo *)0x0);
      }
      __this_03.fields._list._4_4_ = in_stack_ffffffffffffff6c;
      __this_03.fields._list._0_4_ = in_stack_ffffffffffffff68;
      __this_03.fields._index = in_stack_ffffffffffffff70;
      __this_03.fields._version = in_stack_ffffffffffffff74;
      __this_03.fields._current._0_4_ = in_stack_ffffffffffffff78;
      __this_03.fields._current._4_4_ = in_stack_ffffffffffffff7c;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_03,(MethodInfo_3185E10 *)&local_68);
      break;
    case 2:
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar19 = *(System_Collections_Generic_List_object__o **)
                 (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x28);
      if (pSVar19 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_80,pSVar19,MethodInfo_List_1_T__Enumerator_UnityEngine_Light__GetEnume);
      local_58 = (UnityEngine_Light_o *)CONCAT44(uStack_6c,local_70);
      local_68 = (Weather_WeatherManager_c *)local_80;
      pIStack_60 = pIStack_78;
      while (__this_04.fields._list._4_4_ = in_stack_ffffffffffffff6c,
            __this_04.fields._list._0_4_ = in_stack_ffffffffffffff68,
            __this_04.fields._index = in_stack_ffffffffffffff70,
            __this_04.fields._version = in_stack_ffffffffffffff74,
            __this_04.fields._current._0_4_ = in_stack_ffffffffffffff78,
            __this_04.fields._current._4_4_ = in_stack_ffffffffffffff7c,
            bVar22 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (__this_04,(MethodInfo_3185E20 *)&local_68), (char)bVar22 != '\0') {
        pSVar12 = (__this->fields)._currentWeather;
        if (pSVar12 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar13 = (pSVar12->fields).DaylightIntensity;
        if (pSVar13 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (local_58 == (UnityEngine_Light_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_Light__set_intensity(local_58,(pSVar13->fields)._value,(MethodInfo *)0x0);
      }
      __this_05.fields._list._4_4_ = in_stack_ffffffffffffff6c;
      __this_05.fields._list._0_4_ = in_stack_ffffffffffffff68;
      __this_05.fields._index = in_stack_ffffffffffffff70;
      __this_05.fields._version = in_stack_ffffffffffffff74;
      __this_05.fields._current._0_4_ = in_stack_ffffffffffffff78;
      __this_05.fields._current._4_4_ = in_stack_ffffffffffffff7c;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_05,(MethodInfo_3185E10 *)&local_68);
      break;
    case 3:
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar19 = *(System_Collections_Generic_List_object__o **)
                 (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x28);
      if (pSVar19 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_80,pSVar19,MethodInfo_List_1_T__Enumerator_UnityEngine_Light__GetEnume);
      local_58 = (UnityEngine_Light_o *)CONCAT44(uStack_6c,local_70);
      local_68 = (Weather_WeatherManager_c *)local_80;
      pIStack_60 = pIStack_78;
      while (__this_06.fields._list._4_4_ = in_stack_ffffffffffffff6c,
            __this_06.fields._list._0_4_ = in_stack_ffffffffffffff68,
            __this_06.fields._index = in_stack_ffffffffffffff70,
            __this_06.fields._version = in_stack_ffffffffffffff74,
            __this_06.fields._current._0_4_ = in_stack_ffffffffffffff78,
            __this_06.fields._current._4_4_ = in_stack_ffffffffffffff7c,
            bVar22 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (__this_06,(MethodInfo_3185E20 *)&local_68), (char)bVar22 != '\0') {
        if (local_58 == (UnityEngine_Light_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        __this_11 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)local_58,(MethodInfo *)0x0);
        pSVar12 = (__this->fields)._currentWeather;
        if (pSVar12 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar18 = (pSVar12->fields).DaylightDirection;
        if (pSVar18 == (Settings_Vector3Setting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar3 = (pSVar18->fields)._value.fields.x;
        uVar6 = (pSVar18->fields)._value.fields.y;
        euler.fields.x = (float)uVar3 * 0.017453292;
        euler.fields.z = (pSVar18->fields)._value.fields.z * 0.017453292;
        euler.fields.y = (float)uVar6 * 0.017453292;
        value = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
        if (__this_11 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_Transform__set_rotation(__this_11,value,(MethodInfo *)0x0);
      }
      __this_07.fields._list._4_4_ = in_stack_ffffffffffffff6c;
      __this_07.fields._list._0_4_ = in_stack_ffffffffffffff68;
      __this_07.fields._index = in_stack_ffffffffffffff70;
      __this_07.fields._version = in_stack_ffffffffffffff74;
      __this_07.fields._current._0_4_ = in_stack_ffffffffffffff78;
      __this_07.fields._current._4_4_ = in_stack_ffffffffffffff7c;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_07,(MethodInfo_3185E10 *)&local_68);
      break;
    case 4:
      pSVar12 = (__this->fields)._currentWeather;
      if (pSVar12 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar16 = (pSVar12->fields).AmbientLight;
      if (pSVar16 == (Settings_ColorSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar17 = (pSVar16->fields)._value;
      if (pUVar17 == (Utility_Color255_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UVar31 = Utility_Color255__ToColor(pUVar17,(MethodInfo *)0x0);
      UnityEngine_RenderSettings__set_ambientLight(UVar31,(MethodInfo *)0x0);
      break;
    case 5:
      if (DAT_05702663 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_WaitAndApplySkybox_d__51);
        DAT_05702663 = '\x01';
      }
      __this_10 = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)
                  il2cpp_runtime_glue(TypeInfo_WaitAndApplySkybox_d__51);
      Weather_WeatherManager_<WaitAndApplySkybox>d__51___ctor(__this_10,0,(MethodInfo *)0x0);
      if (__this_10 == (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (__this_10->fields).__4__this = __this;
      il2cpp_runtime_glue(&(__this_10->fields).__4__this,__this);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_10
                 ,(MethodInfo *)0x0);
      break;
    case 6:
      pSVar12 = (__this->fields)._currentWeather;
      if (pSVar12 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar14 = (pSVar12->fields).Skybox;
      if (pSVar14 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar12 = (__this->fields)._targetWeather;
      if (pSVar12 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      method_00 = (MethodInfo *)(pSVar12->fields).Skybox;
      if (method_00 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      x = (UnityEngine_Object_o *)
          Weather_WeatherManager__GetBlendedSkybox
                    (__this_12,(pSVar14->fields)._value,(System_String_o *)method_00->name,method_00
                    );
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar22 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar22 != '\0') {
        pSVar12 = (__this->fields)._currentWeather;
        if (pSVar12 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar16 = (pSVar12->fields).SkyboxColor;
        if (pSVar16 == (Settings_ColorSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar17 = (pSVar16->fields)._value;
        if (pUVar17 == (Utility_Color255_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UVar31 = Utility_Color255__ToColor(pUVar17,(MethodInfo *)0x0);
        if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)x,"_Tint",UVar31,(MethodInfo *)0x0);
      }
      break;
    case 7:
      pSVar11 = (__this->fields)._effects;
      if (pSVar11 ==
          (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar24 = System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,7,
                           MethodInfo_BaseWeatherEffect_get_Item);
      pSVar12 = (__this->fields)._currentWeather;
      if (pSVar12 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar16 = (pSVar12->fields).Flashlight;
      if (pSVar16 == (Settings_ColorSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar17 = (pSVar16->fields)._value;
      if (pUVar17 == (Utility_Color255_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UVar31 = Utility_Color255__ToColor(pUVar17,(MethodInfo *)0x0);
      if (pIVar24 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception(UVar31.fields.r);
      }
      bVar7 = (TypeInfo_FlashlightWeatherEffect->_2).naturalAligment;
      if (((pIVar24->klass->_2).naturalAligment < bVar7) ||
         ((pIVar24->klass->_2).typeHierarchy[(ulong)bVar7 - 1] != TypeInfo_FlashlightWeatherEffect)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar24);
      }
      pIVar15 = pIVar24->klass;
      bVar7 = (TypeInfo_FlashlightWeatherEffect->_2).naturalAligment;
      if (((pIVar15->_2).naturalAligment < bVar7) ||
         ((pIVar15->_2).typeHierarchy[(ulong)bVar7 - 1] != TypeInfo_FlashlightWeatherEffect)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar24);
      }
      (*pIVar15->vtable[0x16].methodPtr)(UVar31.fields.r,UVar31.fields._8_8_,pIVar24);
      pSVar12 = (__this->fields)._currentWeather;
      if (pSVar12 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar16 = (pSVar12->fields).Flashlight;
      if (pSVar16 == (Settings_ColorSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar17 = (pSVar16->fields)._value;
      if (pUVar17 == (Utility_Color255_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (((pUVar17->fields).A < 1) ||
         (UVar31 = Utility_Color255__ToColor(pUVar17,(MethodInfo *)0x0),
         fVar2 = UVar31.fields.a + -1.0,
         fVar2 * fVar2 +
         UVar31.fields.b * UVar31.fields.b +
         UVar31.fields.g * UVar31.fields.g + UVar31.fields.r * UVar31.fields.r < 9.9999994e-11)) {
        pSVar11 = (__this->fields)._effects;
        if (pSVar11 ==
            (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pIVar24 = System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,7,
                             MethodInfo_BaseWeatherEffect_get_Item);
        if (pIVar24 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        (*pIVar24->klass->vtable[6].methodPtr)(pIVar24,0,pIVar24->klass->vtable[6].method);
      }
      else {
        pSVar11 = (__this->fields)._effects;
        if (pSVar11 ==
            (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar25 = (UnityEngine_Component_o *)
                  System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,7,
                             MethodInfo_BaseWeatherEffect_get_Item);
        if (pUVar25 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar26 = UnityEngine_Component__get_gameObject(pUVar25,(MethodInfo *)0x0);
        if (pUVar26 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar22 = UnityEngine_GameObject__get_activeSelf(pUVar26,(MethodInfo *)0x0);
        if ((char)bVar22 == '\0') {
          pSVar11 = (__this->fields)._effects;
          if (pSVar11 ==
              (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pIVar24 = System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,7,
                               MethodInfo_BaseWeatherEffect_get_Item);
          if (pIVar24 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          (*pIVar24->klass->vtable[7].methodPtr)(pIVar24,pIVar24->klass->vtable[7].method);
        }
      }
      break;
    case 8:
      pSVar12 = (__this->fields)._currentWeather;
      if (pSVar12 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar13 = (pSVar12->fields).FogDensity;
      if (pSVar13 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((pSVar13->fields)._value <= 0.0) {
        UnityEngine_RenderSettings__set_fog(0,(MethodInfo *)0x0);
      }
      else {
        UnityEngine_RenderSettings__set_fog(1,(MethodInfo *)0x0);
        UnityEngine_RenderSettings__set_fogMode(2,(MethodInfo *)0x0);
        pSVar12 = (__this->fields)._currentWeather;
        if (pSVar12 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar13 = (pSVar12->fields).FogDensity;
        if (pSVar13 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_RenderSettings__set_fogDensity
                  ((pSVar13->fields)._value * 0.02,(MethodInfo *)0x0);
      }
      break;
    case 9:
      pSVar12 = (__this->fields)._currentWeather;
      if (pSVar12 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar16 = (pSVar12->fields).FogColor;
      if (pSVar16 == (Settings_ColorSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar17 = (pSVar16->fields)._value;
      if (pUVar17 == (Utility_Color255_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UVar31 = Utility_Color255__ToColor(pUVar17,(MethodInfo *)0x0);
      UnityEngine_RenderSettings__set_fogColor(UVar31,(MethodInfo *)0x0);
      break;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      pSVar12 = (__this->fields)._currentWeather;
      if (pSVar12 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_00 = (pSVar12->fields).Settings;
      local_80 = (undefined1  [8])TypeInfo_WeatherEffect;
      pIStack_78 = (Il2CppType *)0xffffffffffffffff;
      local_70 = key;
      key_00 = System_Enum__ToString((System_Enum_o *)local_80,(MethodInfo *)0x0);
      if (__this_00 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar24 = System_Collections_Specialized_OrderedDictionary__get_Item
                          (__this_00,(Il2CppObject *)key_00,(MethodInfo *)0x0);
      if (pIVar24 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar7 = (TypeInfo_FloatSetting->_2).naturalAligment;
      if (((pIVar24->klass->_2).naturalAligment < bVar7) ||
         ((pIVar24->klass->_2).typeHierarchy[(ulong)bVar7 - 1] != TypeInfo_FloatSetting)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar24);
      }
      pSVar11 = (__this->fields)._effects;
      if (pSVar11 ==
          (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      in_stack_ffffffffffffff68 = *(float *)((long)&pIVar24[1].klass + 4);
      pIVar24 = System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,key,
                           MethodInfo_BaseWeatherEffect_get_Item);
      if (pIVar24 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (*pIVar24->klass->vtable[10].methodPtr)
                (in_stack_ffffffffffffff68,pIVar24,pIVar24->klass->vtable[10].method);
      pSVar11 = (__this->fields)._effects;
      if (in_stack_ffffffffffffff68 <= 0.0) {
        if (pSVar11 ==
            (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pIVar24 = System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,key,
                             MethodInfo_BaseWeatherEffect_get_Item);
        if (pIVar24 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        (*pIVar24->klass->vtable[6].methodPtr)(pIVar24,1,pIVar24->klass->vtable[6].method);
      }
      else {
        if (pSVar11 ==
            (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar25 = (UnityEngine_Component_o *)
                  System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,key,
                             MethodInfo_BaseWeatherEffect_get_Item);
        if (pUVar25 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar26 = UnityEngine_Component__get_gameObject(pUVar25,(MethodInfo *)0x0);
        if (pUVar26 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar22 = UnityEngine_GameObject__get_activeSelf(pUVar26,(MethodInfo *)0x0);
        if ((char)bVar22 == '\0') {
          pSVar11 = (__this->fields)._effects;
          if (pSVar11 ==
              (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pIVar24 = System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,key,
                               MethodInfo_BaseWeatherEffect_get_Item);
          if (pIVar24 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          (*pIVar24->klass->vtable[8].methodPtr)(pIVar24,pIVar24->klass->vtable[8].method);
          pSVar11 = (__this->fields)._effects;
          if (pSVar11 ==
              (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pIVar24 = System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,key,
                               MethodInfo_BaseWeatherEffect_get_Item);
          if (pIVar24 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          (*pIVar24->klass->vtable[7].methodPtr)(pIVar24,pIVar24->klass->vtable[7].method);
        }
      }
      break;
    case 0xe:
      pSVar12 = (__this->fields)._currentWeather;
      if (pSVar12 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar18 = (pSVar12->fields).WindDirection;
      if (pSVar18 == (Settings_Vector3Setting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      fVar2 = (pSVar18->fields)._value.fields.x;
      fVar5 = (pSVar18->fields)._value.fields.y;
      uVar32 = 0;
      uVar33 = 0;
      in_stack_ffffffffffffff7c = (pSVar18->fields)._value.fields.z;
      if (DAT_056fde20 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde20 = '\x01';
        iVar9 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar9 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar9 == 0) {
        il2cpp_init_class();
      }
      uVar28 = 0;
      uVar29 = 0;
      fVar27 = in_stack_ffffffffffffff7c * in_stack_ffffffffffffff7c + fVar5 * fVar5 + fVar2 * fVar2
      ;
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
        auVar21._4_4_ = fVar5;
        auVar21._0_4_ = fVar2;
        auVar21._8_4_ = uVar32;
        auVar21._12_4_ = uVar33;
        auVar30._4_4_ = fVar27;
        auVar30._0_4_ = fVar27;
        auVar30._8_4_ = uVar28;
        auVar30._12_4_ = uVar29;
        auVar30 = divps(auVar21,auVar30);
        in_stack_ffffffffffffff68 = auVar30._0_4_;
        in_stack_ffffffffffffff6c = auVar30._4_4_;
        in_stack_ffffffffffffff70 = auVar30._8_4_;
        in_stack_ffffffffffffff74 = auVar30._12_4_;
        iVar9 = *(int *)(TypeInfo_WindWeatherEffect + 0xe4);
      }
      else {
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fdd15 = '\x01';
        }
        uVar4 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        in_stack_ffffffffffffff68 = (float)uVar4;
        in_stack_ffffffffffffff6c = (undefined4)((ulong)uVar4 >> 0x20);
        in_stack_ffffffffffffff70 = 0;
        in_stack_ffffffffffffff74 = 0;
        in_stack_ffffffffffffff7c = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        iVar9 = *(int *)(TypeInfo_WindWeatherEffect + 0xe4);
      }
      if (iVar9 == 0) {
        il2cpp_init_class();
      }
      lVar10 = *(long *)(TypeInfo_WindWeatherEffect + 0xb8);
      *(ulong *)(lVar10 + 4) = CONCAT44(in_stack_ffffffffffffff6c,in_stack_ffffffffffffff68);
      *(float *)(lVar10 + 0xc) = in_stack_ffffffffffffff7c;
      break;
    case 0xf:
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar12 = (__this->fields)._currentWeather;
      if (pSVar12 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar13 = (pSVar12->fields).RainForce;
      if (pSVar13 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (**(long **)(TypeInfo_WeatherManager + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      *(float *)(**(long **)(TypeInfo_WeatherManager + 0xb8) + 0x94) = (pSVar13->fields)._value;
      break;
    case 0x10:
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar12 = (__this->fields)._currentWeather;
      if (pSVar12 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar13 = (pSVar12->fields).SnowForce;
      if (pSVar13 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (**(long **)(TypeInfo_WeatherManager + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      *(float *)(**(long **)(TypeInfo_WeatherManager + 0xb8) + 0x98) = (pSVar13->fields)._value;
      break;
    case 0x11:
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar12 = (__this->fields)._currentWeather;
      if (pSVar12 == (Settings_WeatherSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar13 = (pSVar12->fields).WindForce;
      if (pSVar13 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (**(long **)(TypeInfo_WeatherManager + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      *(float *)(**(long **)(TypeInfo_WeatherManager + 0xb8) + 0x9c) = (pSVar13->fields)._value;
    }
  }
  goto switchD_03d7b80d_default;
}


// Weather.WeatherManager$$WaitAndApplySkybox
// il2cpp: System_Collections_IEnumerator_o* Weather_WeatherManager__WaitAndApplySkybox (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x3d7f180

System_Collections_IEnumerator_o *
Weather_WeatherManager__WaitAndApplySkybox(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  Weather_WeatherManager__WaitAndApplySkybox_d__51_o *__this_00;
  
  if (DAT_05702663 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndApplySkybox_d__51);
    DAT_05702663 = '\x01';
  }
  __this_00 = (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)il2cpp_runtime_glue(TypeInfo_WaitAndApplySkybox_d__51)
  ;
  Weather_WeatherManager_<WaitAndApplySkybox>d__51___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Weather_WeatherManager__WaitAndApplySkybox_d__51_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&(__this_00->fields).__4__this,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$GetBlendedSkybox
// il2cpp: UnityEngine_Material_o* Weather_WeatherManager__GetBlendedSkybox (Weather_WeatherManager_o* __this, System_String_o* skybox1, System_String_o* skybox2, const MethodInfo* method);
// 0x3d7ee00

UnityEngine_Material_o *
Weather_WeatherManager__GetBlendedSkybox
          (Weather_WeatherManager_o *__this,System_String_o *skybox1,System_String_o *skybox2,
          MethodInfo *method)

{
  uint16_t uVar1;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_String_array *parts;
  UnityEngine_Material_o *pUVar4;
  MethodInfo *in_R8;
  
  if (DAT_05702664 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
    il2cpp_init_method_metadata(&MethodInfo_Material_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_String___EnumToStringArray_SkyboxCustomSkinPartI);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    il2cpp_init_method_metadata(&"1");
    DAT_05702664 = '\x01';
  }
  if (skybox1 == (System_String_o *)0x0) goto LAB_03d7f10f;
  uVar1 = System_String__get_Chars(skybox1,(skybox1->fields)._stringLength + -1,(MethodInfo *)0x0);
  if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = System_Char__IsDigit(uVar1,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    skybox1 = System_String__Concat(skybox1,"1",(MethodInfo *)0x0);
  }
  if (skybox2 == (System_String_o *)0x0) goto LAB_03d7f10f;
  uVar1 = System_String__get_Chars(skybox2,(skybox2->fields)._stringLength + -1,(MethodInfo *)0x0);
  if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = System_Char__IsDigit(uVar1,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    skybox2 = System_String__Concat(skybox2,"1",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) goto LAB_03d7ef79;
LAB_03d7ef39:
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_WeatherManager + 0xb8) + 0x10);
  }
  else {
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) != 0) goto LAB_03d7ef39;
LAB_03d7ef79:
    il2cpp_init_class();
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_WeatherManager + 0xb8) + 0x10);
  }
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar3,(Il2CppObject *)skybox1,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      return (UnityEngine_Material_o *)0x0;
    }
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_WeatherManager + 0xb8) + 0x10);
    if ((pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 System_Collections_Generic_Dictionary<object__object>__get_Item
                           (pSVar3,(Il2CppObject *)skybox1,MethodInfo_Dictionary_2_System_String_UnityEngine_Material),
       pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        (pSVar3,(Il2CppObject *)skybox2,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar2 == '\0') {
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_init_class();
        }
        parts = Utility_Util__EnumToStringArray<Int32Enum>(MethodInfo_String___EnumToStringArray_SkyboxCustomSkinPartI);
        if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pUVar4 = Weather_WeatherManager__CreateBlendedSkybox
                           (*(UnityEngine_Shader_o **)(*(long *)(TypeInfo_WeatherManager + 0xb8) + 0x18),parts,
                            skybox1,skybox2,in_R8);
        pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_WeatherManager + 0xb8) + 0x10);
        if ((pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
           (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                     System_Collections_Generic_Dictionary<object__object>__get_Item
                               (pSVar3,(Il2CppObject *)skybox1,MethodInfo_Dictionary_2_System_String_UnityEngine_Material),
           pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
        goto LAB_03d7f10f;
        System_Collections_Generic_Dictionary<object__object>__Add
                  (pSVar3,(Il2CppObject *)skybox2,(Il2CppObject *)pUVar4,MethodInfo_Void_Add);
      }
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_WeatherManager + 0xb8) + 0x10);
      if ((pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   System_Collections_Generic_Dictionary<object__object>__get_Item
                             (pSVar3,(Il2CppObject *)skybox1,MethodInfo_Dictionary_2_System_String_UnityEngine_Material),
         pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        pUVar4 = (UnityEngine_Material_o *)
                 System_Collections_Generic_Dictionary<object__object>__get_Item
                           (pSVar3,(Il2CppObject *)skybox2,MethodInfo_Material_get_Item);
        return pUVar4;
      }
    }
  }
LAB_03d7f10f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$OnSetWeatherRPC
// il2cpp: void Weather_WeatherManager__OnSetWeatherRPC (System_Byte_array* currentWeatherJson, System_Byte_array* startWeatherJson, System_Byte_array* targetWeatherJson, System_Collections_Generic_Dictionary_int__float__o* targetWeatherStartTimes, System_Collections_Generic_Dictionary_int__float__o* targetWeatherEndTimes, float currentTime, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3d7f1f0

void Weather_WeatherManager__OnSetWeatherRPC
               (System_Byte_array *currentWeatherJson,System_Byte_array *startWeatherJson,
               System_Byte_array *targetWeatherJson,
               System_Collections_Generic_Dictionary_int__float__o *targetWeatherStartTimes,
               System_Collections_Generic_Dictionary_int__float__o *targetWeatherEndTimes,
               float currentTime,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  long lVar1;
  Weather_WeatherManager_o *__this;
  Photon_Realtime_Player_o *pPVar2;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (DAT_05702665 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    DAT_05702665 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
    pPVar2 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  else {
    pPVar2 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  if (info.fields.Sender != pPVar2) {
    return;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x98), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x14) == 0) {
      return;
    }
    if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this = (Weather_WeatherManager_o *)**(undefined8 **)(TypeInfo_WeatherManager + 0xb8);
    if (__this != (Weather_WeatherManager_o *)0x0) {
      routine = Weather_WeatherManager__WaitAndFinishOnSetWeather
                          (__this,currentWeatherJson,startWeatherJson,targetWeatherJson,
                           targetWeatherStartTimes,targetWeatherEndTimes,currentTime,
                           in_stack_ffffffffffffffb8);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$WaitAndFinishOnSetWeather
// il2cpp: System_Collections_IEnumerator_o* Weather_WeatherManager__WaitAndFinishOnSetWeather (Weather_WeatherManager_o* __this, System_Byte_array* currentWeatherJson, System_Byte_array* startWeatherJson, System_Byte_array* targetWeatherJson, System_Collections_Generic_Dictionary_int__float__o* targetWeatherStartTimes, System_Collections_Generic_Dictionary_int__float__o* targetWeatherEndTimes, float currentTime, const MethodInfo* method);
// 0x3d7f340

System_Collections_IEnumerator_o *
Weather_WeatherManager__WaitAndFinishOnSetWeather
          (Weather_WeatherManager_o *__this,System_Byte_array *currentWeatherJson,
          System_Byte_array *startWeatherJson,System_Byte_array *targetWeatherJson,
          System_Collections_Generic_Dictionary_int__float__o *targetWeatherStartTimes,
          System_Collections_Generic_Dictionary_int__float__o *targetWeatherEndTimes,
          float currentTime,MethodInfo *method)

{
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *__this_00;
  
  if (DAT_05702666 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndFinishOnSetWeather_d__54);
    DAT_05702666 = '\x01';
  }
  __this_00 = (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *)
              il2cpp_runtime_glue(TypeInfo_WaitAndFinishOnSetWeather_d__54);
  Weather_WeatherManager_<WaitAndFinishOnSetWeather>d__54___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__54_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).currentWeatherJson = currentWeatherJson;
    il2cpp_runtime_glue(&(__this_00->fields).currentWeatherJson,currentWeatherJson);
    (__this_00->fields).startWeatherJson = startWeatherJson;
    il2cpp_runtime_glue(&(__this_00->fields).startWeatherJson,startWeatherJson);
    (__this_00->fields).targetWeatherJson = targetWeatherJson;
    il2cpp_runtime_glue(&(__this_00->fields).targetWeatherJson,targetWeatherJson);
    (__this_00->fields).targetWeatherStartTimes = targetWeatherStartTimes;
    il2cpp_runtime_glue(&(__this_00->fields).targetWeatherStartTimes,targetWeatherStartTimes);
    (__this_00->fields).targetWeatherEndTimes = targetWeatherEndTimes;
    il2cpp_runtime_glue(&(__this_00->fields).targetWeatherEndTimes);
    (__this_00->fields).currentTime = currentTime;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$IsWeatherEnabled
// il2cpp: bool Weather_WeatherManager__IsWeatherEnabled (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x3d7f120

bool_conflict
Weather_WeatherManager__IsWeatherEnabled(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05702667 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05702667 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x98), lVar1 != 0)) {
    return (bool_conflict)CONCAT71((int7)((ulong)lVar1 >> 8),*(int *)(lVar1 + 0x14) != 0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$.ctor
// il2cpp: void Weather_WeatherManager___ctor (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x3d7f440

void Weather_WeatherManager___ctor(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_WeatherEffect__o *__this_00;
  System_Collections_Generic_List_WeatherScheduleRunner__o *__this_01;
  System_Collections_Generic_List_Camera__o *__this_02;
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *__this_03;
  Settings_WeatherSet_o *pSVar1;
  System_Collections_Generic_Dictionary_int__float__o *pSVar2;
  System_Collections_Generic_List_T__o *__this_04;
  System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *__this_05;
  
  if (DAT_05702668 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_Weather_WeatherEffect_Weather_BaseW);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Int32_System_Single);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_Weather_WeatherScheduleRunner_Syste);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_int__float);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_WeatherEffect__BaseWeatherEffect);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_WeatherScheduleRunner__float);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Weather_WeatherEffect);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_WeatherEffect);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Weather_WeatherScheduleRunner);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Camera);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Weather_WeatherEffect);
    il2cpp_init_method_metadata(&TypeInfo_List_WeatherScheduleRunner);
    il2cpp_init_method_metadata(&TypeInfo_List_WeatherEffect);
    il2cpp_init_method_metadata(&TypeInfo_List_Camera);
    il2cpp_init_method_metadata(&TypeInfo_WeatherSet);
    DAT_05702668 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_WeatherEffect__o *)
              il2cpp_runtime_glue(TypeInfo_HashSet_WeatherEffect);
  System_Collections_Generic_HashSet<Int32Enum>___ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,MethodInfo_HashSet_1_Weather_WeatherEffect);
  if (__this_00 != (System_Collections_Generic_HashSet_WeatherEffect__o *)0x0) {
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,1,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,7,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,5,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,2,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,3,MethodInfo_Boolean_Add);
    (__this->fields).LowEffects = __this_00;
    il2cpp_runtime_glue(&(__this->fields).LowEffects,__this_00);
    __this_01 = (System_Collections_Generic_List_WeatherScheduleRunner__o *)
                il2cpp_runtime_glue(TypeInfo_List_WeatherScheduleRunner);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_Weather_WeatherScheduleRunner);
    (__this->fields)._scheduleRunners = __this_01;
    il2cpp_runtime_glue(&(__this->fields)._scheduleRunners,__this_01);
    __this_02 = (System_Collections_Generic_List_Camera__o *)il2cpp_runtime_glue(TypeInfo_List_Camera);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_UnityEngine_Camera);
    (__this->fields)._skyboxCameras = __this_02;
    il2cpp_runtime_glue(&(__this->fields)._skyboxCameras,__this_02);
    __this_03 = (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)
                il2cpp_runtime_glue(TypeInfo_Dictionary_WeatherEffect__BaseWeatherEffect);
    System_Collections_Generic_Dictionary<Int32Enum__object>___ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,MethodInfo_Dictionary_2_Weather_WeatherEffect_Weather_BaseW);
    (__this->fields)._effects = __this_03;
    il2cpp_runtime_glue(&(__this->fields)._effects);
    pSVar1 = (Settings_WeatherSet_o *)il2cpp_runtime_glue(TypeInfo_WeatherSet);
    Settings_WeatherSet___ctor(pSVar1,(MethodInfo *)0x0);
    (__this->fields)._currentWeather = pSVar1;
    il2cpp_runtime_glue(&(__this->fields)._currentWeather);
    pSVar1 = (Settings_WeatherSet_o *)il2cpp_runtime_glue(TypeInfo_WeatherSet);
    Settings_WeatherSet___ctor(pSVar1,(MethodInfo *)0x0);
    (__this->fields)._targetWeather = pSVar1;
    il2cpp_runtime_glue(&(__this->fields)._targetWeather);
    pSVar1 = (Settings_WeatherSet_o *)il2cpp_runtime_glue(TypeInfo_WeatherSet);
    Settings_WeatherSet___ctor(pSVar1,(MethodInfo *)0x0);
    (__this->fields)._startWeather = pSVar1;
    il2cpp_runtime_glue(&(__this->fields)._startWeather,pSVar1);
    pSVar2 = (System_Collections_Generic_Dictionary_int__float__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_int__float)
    ;
    System_Collections_Generic_Dictionary<int__float>___ctor(pSVar2,MethodInfo_Dictionary_2_System_Int32_System_Single);
    (__this->fields)._targetWeatherStartTimes = pSVar2;
    il2cpp_runtime_glue(&(__this->fields)._targetWeatherStartTimes,pSVar2);
    pSVar2 = (System_Collections_Generic_Dictionary_int__float__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_int__float)
    ;
    System_Collections_Generic_Dictionary<int__float>___ctor(pSVar2,MethodInfo_Dictionary_2_System_Int32_System_Single);
    (__this->fields)._targetWeatherEndTimes = pSVar2;
    il2cpp_runtime_glue(&(__this->fields)._targetWeatherEndTimes,pSVar2);
    __this_04 = (System_Collections_Generic_List_T__o *)il2cpp_runtime_glue(TypeInfo_List_WeatherEffect);
    System_Collections_Generic_List<Int32Enum>___ctor(__this_04,MethodInfo_List_1_Weather_WeatherEffect);
    (__this->fields)._needApply = (System_Collections_Generic_List_WeatherEffect__o *)__this_04;
    il2cpp_runtime_glue(&(__this->fields)._needApply,__this_04);
    __this_05 = (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)
                il2cpp_runtime_glue(TypeInfo_Dictionary_WeatherScheduleRunner__float);
    System_Collections_Generic_Dictionary<object__float>___ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_05,MethodInfo_Dictionary_2_Weather_WeatherScheduleRunner_Syste);
    (__this->fields)._currentScheduleWait = __this_05;
    il2cpp_runtime_glue(&(__this->fields)._currentScheduleWait);
    Photon_Pun_MonoBehaviourPunCallbacks___ctor
              ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherManager$$.cctor
// il2cpp: void Weather_WeatherManager___cctor (const MethodInfo* method);
// 0x3d7f7c0

void Weather_WeatherManager___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  
  if (DAT_05702669 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Material);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Dictionary_string__Material);
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    DAT_05702669 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__Material);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
  lVar1 = *(long *)(TypeInfo_WeatherManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 8,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__Dictionary_string__Material);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
  lVar1 = *(long *)(TypeInfo_WeatherManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x10,pSVar2);
  return;
}


