// Type: Weather.WeatherManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Weather/WeatherManager.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherManager.cs
// --------------------------------

// Weather.WeatherManager.<UpdateReflectionTexture>d__35$$.ctor
// il2cpp: void Weather_WeatherManager__UpdateReflectionTexture_d__35___ctor (Weather_WeatherManager__UpdateReflectionTexture_d__35_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x585ed00

void Weather_WeatherManager__UpdateReflectionTexture_d__35___ctor
               (Weather_WeatherManager__UpdateReflectionTexture_d__35_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Weather.WeatherManager.<UpdateReflectionTexture>d__35$$System.IDisposable.Dispose
// il2cpp: void Weather_WeatherManager__UpdateReflectionTexture_d__35__System_IDisposable_Dispose (Weather_WeatherManager__UpdateReflectionTexture_d__35_o* __this, const MethodInfo* method);
// 0x585ed20

void Weather_WeatherManager__UpdateReflectionTexture_d__35__System_IDisposable_Dispose
               (Weather_WeatherManager__UpdateReflectionTexture_d__35_o *__this,MethodInfo *method)

{
  return;
}


// Weather.WeatherManager.<UpdateReflectionTexture>d__35$$MoveNext
// il2cpp: bool Weather_WeatherManager__UpdateReflectionTexture_d__35__MoveNext (Weather_WeatherManager__UpdateReflectionTexture_d__35_o* __this, const MethodInfo* method);
// 0x585ed30

bool Weather_WeatherManager__UpdateReflectionTexture_d__35__MoveNext
               (Weather_WeatherManager__UpdateReflectionTexture_d__35_o *__this,MethodInfo *method)

{
  int iVar1;
  Weather_WeatherManager_o *pWVar2;
  UnityEngine_ReflectionProbe_o *__this_00;
  UnityEngine_Texture_o *value;
  Il2CppObject *__this_01;
  
  if (Il2CppMethodInitialized_075450a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_075450a6 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_01 = (Il2CppObject *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)__this_01,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    pWVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((pWVar2 == (Weather_WeatherManager_o *)0x0) ||
       (__this_00 = (pWVar2->fields)._baker, __this_00 == (UnityEngine_ReflectionProbe_o *)0x0)) {
      ThrowNullReferenceException();
    }
    value = UnityEngine_ReflectionProbe__get_texture(__this_00,(MethodInfo *)0x0);
    UnityEngine_RenderSettings__set_customReflectionTexture(value,(MethodInfo *)0x0);
  }
  return iVar1 == 0;
}


// Weather.WeatherManager.<UpdateReflectionTexture>d__35$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__UpdateReflectionTexture_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current (Weather_WeatherManager__UpdateReflectionTexture_d__35_o* __this, const MethodInfo* method);
// 0x585ede0

Il2CppObject *
Weather_WeatherManager__UpdateReflectionTexture_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Weather_WeatherManager__UpdateReflectionTexture_d__35_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager.<UpdateReflectionTexture>d__35$$System.Collections.IEnumerator.Reset
// il2cpp: void Weather_WeatherManager__UpdateReflectionTexture_d__35__System_Collections_IEnumerator_Reset (Weather_WeatherManager__UpdateReflectionTexture_d__35_o* __this, const MethodInfo* method);
// 0x585edf0

void Weather_WeatherManager__UpdateReflectionTexture_d__35__System_Collections_IEnumerator_Reset
               (Weather_WeatherManager__UpdateReflectionTexture_d__35_o *__this,MethodInfo *method)

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
                  MethodInfo_Weather_WeatherManager_UpdateReflectionTexture_d__35_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Weather.WeatherManager.<UpdateReflectionTexture>d__35$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__UpdateReflectionTexture_d__35__System_Collections_IEnumerator_get_Current (Weather_WeatherManager__UpdateReflectionTexture_d__35_o* __this, const MethodInfo* method);
// 0x585ee30

Il2CppObject *
Weather_WeatherManager__UpdateReflectionTexture_d__35__System_Collections_IEnumerator_get_Current
          (Weather_WeatherManager__UpdateReflectionTexture_d__35_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__57$$.ctor
// il2cpp: void Weather_WeatherManager__WaitAndApplySkybox_d__57___ctor (Weather_WeatherManager__WaitAndApplySkybox_d__57_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x585ee40

void Weather_WeatherManager__WaitAndApplySkybox_d__57___ctor
               (Weather_WeatherManager__WaitAndApplySkybox_d__57_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__57$$System.IDisposable.Dispose
// il2cpp: void Weather_WeatherManager__WaitAndApplySkybox_d__57__System_IDisposable_Dispose (Weather_WeatherManager__WaitAndApplySkybox_d__57_o* __this, const MethodInfo* method);
// 0x585ee60

void Weather_WeatherManager__WaitAndApplySkybox_d__57__System_IDisposable_Dispose
               (Weather_WeatherManager__WaitAndApplySkybox_d__57_o *__this,MethodInfo *method)

{
  return;
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__57$$MoveNext
// il2cpp: bool Weather_WeatherManager__WaitAndApplySkybox_d__57__MoveNext (Weather_WeatherManager__WaitAndApplySkybox_d__57_o* __this, const MethodInfo* method);
// 0x585ee70
// eh: try 0x585f154..0x585f1a4 -> pad 0x585f1b5 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x585f1cc..0x585f1d1 -> pad 0x585f1ed cleanup
// eh: try 0x585f1f0..0x585f1f8 -> pad 0x585f200 catch (...) [compiler noexcept guard]
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585f1a9: jmp 0x585f1b5
// asm:   0x585f1ab: jmp 0x585f1b5
// asm:   0x585f1ad: jmp 0x585f1b5
// asm:   0x585f1af: jmp 0x585f1b5
// asm:   0x585f1b1: jmp 0x585f1b5
// asm:   0x585f1b3: jmp 0x585f1b5
// asm:   0x585f1b5: mov rbx, rax
// asm:   0x585f1b8: cmp edx, 1
// asm:   0x585f1bb: jne 0x585f1f0
// asm:   0x585f1bd: mov rdi, rbx
// asm:   0x585f1c0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x585f1c5: mov rax, qword ptr [rax]
// asm:   0x585f1c8: mov qword ptr [rsp], rax
// asm:   0x585f1cc: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x585f1ed: mov rbx, rax
// asm:   0x585f1f0: mov rdi, rsp
// asm:   0x585f1f3: call 0x2fceaa0  ; il2cpp_runtime_helper_02fceaa0()
// asm:   0x585f1f8: mov rdi, rbx
// asm:   0x585f1fb: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x585f200: mov rdi, rax
// asm:   0x585f203: call 0x2ab61e0  ; __clang_call_terminate()

bool Weather_WeatherManager__WaitAndApplySkybox_d__57__MoveNext
               (Weather_WeatherManager__WaitAndApplySkybox_d__57_o *__this,MethodInfo *method)

{
  int iVar1;
  Weather_WeatherManager_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Cameras_BaseCamera_o *pCVar2;
  System_Collections_Generic_List_Camera__o *__this_02;
  bool bVar3;
  UnityEngine_Material_o *__this_03;
  Il2CppObject *__this_04;
  UnityEngine_Material_o *pUVar4;
  UnityEngine_GameObject_o *__this_05;
  UnityEngine_Skybox_o *pUVar5;
  undefined8 uStack_58;
  System_Collections_Generic_List_Enumerator_T__o *pSStack_50;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  
  if (Il2CppMethodInitialized_075450a7 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    il2cpp_codegen_initialize_runtime_metadata(&"CaveMap1");
    il2cpp_codegen_initialize_runtime_metadata(&"_Tint");
    Il2CppMethodInitialized_075450a7 = '\x01';
  }
  SStack_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._current = (Il2CppObject *)0x0;
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_04 = (Il2CppObject *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)__this_04,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_04;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 != (Weather_WeatherManager_o *)0x0) {
      if ((__this_00->fields)._isCaveMap == false) {
        __this_03 = Weather_WeatherManager__GetBlendedSkybox
                              (__this_00,(__this->fields).skybox1,(__this->fields).skybox2,(MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
        }
        __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                    TypeInfo_Weather_WeatherManager->static_fields->SkyboxMaterials;
        if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0585f1a4;
        __this_03 = System_Collections_Generic_Dictionary_object__object___get_Item
                              (__this_01,(Il2CppObject *)"CaveMap1",
                               (MethodInfo_4AAD450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
      }
      pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
        pUVar5 = (pCVar2->fields).Skybox;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          if (pUVar5 == (UnityEngine_Skybox_o *)0x0) goto label_0585f1a4;
          pUVar4 = UnityEngine_Skybox__get_material(pUVar5,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)__this_03,
                             (MethodInfo *)0x0);
          if (bVar3) {
            pUVar4 = TypeInfo_CustomSkins_SkyboxCustomSkinLoader->static_fields->SkyboxMaterial;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar3 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar3) {
              if ((__this_00->fields)._isCaveMap == false) {
                if (__this_03 == (UnityEngine_Material_o *)0x0) goto label_0585f1a4;
                UnityEngine_Material__SetColor
                          (__this_03,"_Tint",(UnityEngine_Color_o)(__this->fields).tint.fields,
                           (MethodInfo *)0x0);
              }
              __this_02 = (__this_00->fields)._skyboxCameras;
              if (__this_02 == (System_Collections_Generic_List_Camera__o *)0x0) goto label_0585f1a4;
              System_Collections_Generic_List_object___GetEnumerator
                        (&SStack_48,(System_Collections_Generic_List_object__o *)__this_02,
                         (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Camera_GetEnumerator
                        );
              uStack_58 = 0;
              pSStack_50 = &SStack_48;
              while( true ) {
                bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                                   (MethodInfo_4C45C50 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_Camera_MoveNext);
                if (!bVar3) break;
                if ((UnityEngine_Component_o *)SStack_48.fields._current == (UnityEngine_Component_o *)0x0) {
                  ThrowNullReferenceException();
                }
                __this_05 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)SStack_48.fields._current,(MethodInfo *)0x0)
                ;
                if (__this_05 == (UnityEngine_GameObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar5 = UnityEngine_GameObject__GetComponentInChildren_object_
                                   (__this_05,
                                    (MethodInfo_353B8D0 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Skybox);
                if (pUVar5 == (UnityEngine_Skybox_o *)0x0) {
                  ThrowNullReferenceException();
                }
                UnityEngine_Skybox__set_material(pUVar5,__this_03,(MethodInfo *)0x0);
              }
              il2cpp_runtime_helper_02fceaa0(&uStack_58);
            }
          }
        }
        goto label_0585f1d9;
      }
    }
label_0585f1a4:
    ThrowNullReferenceException();
  }
label_0585f1d9:
  return iVar1 == 0;
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__57$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__WaitAndApplySkybox_d__57__System_Collections_Generic_IEnumerator_System_Object__get_Current (Weather_WeatherManager__WaitAndApplySkybox_d__57_o* __this, const MethodInfo* method);
// 0x585f210

Il2CppObject *
Weather_WeatherManager__WaitAndApplySkybox_d__57__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Weather_WeatherManager__WaitAndApplySkybox_d__57_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__57$$System.Collections.IEnumerator.Reset
// il2cpp: void Weather_WeatherManager__WaitAndApplySkybox_d__57__System_Collections_IEnumerator_Reset (Weather_WeatherManager__WaitAndApplySkybox_d__57_o* __this, const MethodInfo* method);
// 0x585f220

void Weather_WeatherManager__WaitAndApplySkybox_d__57__System_Collections_IEnumerator_Reset
               (Weather_WeatherManager__WaitAndApplySkybox_d__57_o *__this,MethodInfo *method)

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
                  MethodInfo_Weather_WeatherManager_WaitAndApplySkybox_d__57_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Weather.WeatherManager.<WaitAndApplySkybox>d__57$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__WaitAndApplySkybox_d__57__System_Collections_IEnumerator_get_Current (Weather_WeatherManager__WaitAndApplySkybox_d__57_o* __this, const MethodInfo* method);
// 0x585f260

Il2CppObject *
Weather_WeatherManager__WaitAndApplySkybox_d__57__System_Collections_IEnumerator_get_Current
          (Weather_WeatherManager__WaitAndApplySkybox_d__57_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__61$$.ctor
// il2cpp: void Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61___ctor (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x585f270

void Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61___ctor
               (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__61$$System.IDisposable.Dispose
// il2cpp: void Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61__System_IDisposable_Dispose (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61_o* __this, const MethodInfo* method);
// 0x585f290

void Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61__System_IDisposable_Dispose
               (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61_o *__this,MethodInfo *method)

{
  return;
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__61$$MoveNext
// il2cpp: bool Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61__MoveNext (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61_o* __this, const MethodInfo* method);
// 0x585f2a0

bool Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61__MoveNext
               (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61_o *__this,MethodInfo *method)

{
  Weather_WeatherManager_o *__this_00;
  Settings_WeatherSet_o *pSVar1;
  Utility_Algorithms_CompressionAlgorithm_o *pUVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075450a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    Il2CppMethodInitialized_075450a8 = '\x01';
  }
  if (1 < (uint)(__this->fields).__1__state) {
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (__this_00 != (Weather_WeatherManager_o *)0x0) {
    if ((__this_00->fields)._finishedLoading == false) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
    pSVar1 = (__this_00->fields)._currentWeather;
    if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
    }
    pUVar2 = (Utility_Algorithms_CompressionAlgorithm_o *)
             TypeInfo_Utility_DataCompressors->static_fields->Brotli;
    if ((pUVar2 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) &&
       (pSVar3 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                           (pUVar2,(__this->fields).currentWeatherJson,0x1000,0xa00000,(MethodInfo *)0x0),
       pSVar1 != (Settings_WeatherSet_o *)0x0)) {
      (*(pSVar1->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                (pSVar1,pSVar3,(pSVar1->klass->vtable)._9_DeserializeFromJsonString.method);
      pUVar2 = (Utility_Algorithms_CompressionAlgorithm_o *)
               TypeInfo_Utility_DataCompressors->static_fields->Brotli;
      if (pUVar2 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
        pSVar1 = (__this_00->fields)._startWeather;
        pSVar3 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                           (pUVar2,(__this->fields).startWeatherJson,0x1000,0xa00000,(MethodInfo *)0x0);
        if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
          (*(pSVar1->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                    (pSVar1,pSVar3,(pSVar1->klass->vtable)._9_DeserializeFromJsonString.method);
          pUVar2 = (Utility_Algorithms_CompressionAlgorithm_o *)
                   TypeInfo_Utility_DataCompressors->static_fields->Brotli;
          if (pUVar2 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
            pSVar1 = (__this_00->fields)._targetWeather;
            pSVar3 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                               (pUVar2,(__this->fields).targetWeatherJson,0x1000,0xa00000,(MethodInfo *)0x0);
            if (pSVar1 != (Settings_WeatherSet_o *)0x0) {
              (*(pSVar1->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                        (pSVar1,pSVar3,(pSVar1->klass->vtable)._9_DeserializeFromJsonString.method);
              (__this_00->fields)._targetWeatherStartTimes = (__this->fields).targetWeatherStartTimes;
              Il2CppCodeGenWriteBarrier(&(__this_00->fields)._targetWeatherStartTimes);
              (__this_00->fields)._targetWeatherEndTimes = (__this->fields).targetWeatherEndTimes;
              Il2CppCodeGenWriteBarrier(&(__this_00->fields)._targetWeatherEndTimes);
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
  ThrowNullReferenceException();
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__61$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61__System_Collections_Generic_IEnumerator_System_Object__get_Current (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61_o* __this, const MethodInfo* method);
// 0x585f480

Il2CppObject *
Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__61$$System.Collections.IEnumerator.Reset
// il2cpp: void Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61__System_Collections_IEnumerator_Reset (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61_o* __this, const MethodInfo* method);
// 0x585f490

void Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61__System_Collections_IEnumerator_Reset
               (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61_o *__this,MethodInfo *method)

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
                  MethodInfo_Weather_WeatherManager_WaitAndFinishOnSetWeather_d__61_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__61$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61__System_Collections_IEnumerator_get_Current (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61_o* __this, const MethodInfo* method);
// 0x585f4d0

Il2CppObject *
Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61__System_Collections_IEnumerator_get_Current
          (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Weather.WeatherManager$$Init
// il2cpp: void Weather_WeatherManager__Init (const MethodInfo* method);
// 0x5858180

void Weather_WeatherManager__Init(MethodInfo *method)

{
  Weather_WeatherManager_o *pWVar1;
  Events_OnPreLoadScene_o *__this;
  Weather_ThunderWeatherEffect_c *method_00;
  
  if (Il2CppMethodInitialized_07545083 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_WeatherManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_ThunderWeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Weather_WeatherManager_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_07545083 = '\x01';
  }
  if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
  }
  pWVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_Weather_WeatherManager->static_fields->_instance,
                      (MethodInfo_3680650 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_WeatherManager
                     );
  TypeInfo_Weather_WeatherManager->static_fields->_instance = pWVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Weather_WeatherManager->static_fields->_instance);
  method_00 = TypeInfo_Weather_ThunderWeatherEffect;
  if ((TypeInfo_Weather_ThunderWeatherEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_ThunderWeatherEffect);
  }
  Weather_ThunderWeatherEffect__OnFinishInit((MethodInfo *)method_00);
  Weather_WeatherManager__LoadSkyboxes((MethodInfo *)method_00);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnPreLoadScene);
  Events_OnPreLoadScene___ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Weather_WeatherManager_OnPreLoadScene,
             (MethodInfo *)0x0);
  Events_EventManager__add_OnPreLoadScene(__this,(MethodInfo *)0x0);
  return;
}


// Weather.WeatherManager$$OnPreLoadScene
// il2cpp: void Weather_WeatherManager__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x5858720
// eh: try 0x5858884..0x5858922 -> pad 0x58589d7 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5858943..0x5858948 -> pad 0x58589c7 catch Il2CppExceptionWrapper, cleanup
// eh: try 0x58589a6..0x58589b0 -> pad 0x5858a33 catch (...) [compiler noexcept guard]
// eh: try 0x58589b5..0x58589c2 -> pad 0x58589d1 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58589ef..0x58589f4 -> pad 0x5858a1e cleanup
// eh: try 0x5858a21..0x5858a2b -> pad 0x5858a33 catch (...) [compiler noexcept guard]
// asm: 52 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585887f: nop 
// asm:   0x5858918: jmp 0x58589b5
// asm:   0x5858927: jmp 0x585892b
// asm:   0x5858929: jmp 0x585892b
// asm:   0x585892b: mov r12, rax
// asm:   0x585892e: cmp edx, 1
// asm:   0x5858931: jne 0x58589a3
// asm:   0x5858933: mov rdi, r12
// asm:   0x5858936: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x585893b: mov r12, qword ptr [rax]
// asm:   0x585893e: mov qword ptr [rsp + 8], r12
// asm:   0x5858943: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5858948: jmp 0x5858903
// asm:   0x58589a3: mov rbx, rdx
// asm:   0x58589a6: lea rdi, [rsp + 8]
// asm:   0x58589ab: call 0x2fce6f0  ; il2cpp_runtime_helper_02fce6f0()
// asm:   0x58589b0: mov rdi, r12
// asm:   0x58589b3: jmp 0x58589dd
// asm:   0x58589b5: mov rdi, r12
// asm:   0x58589b8: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58589c7: mov rbx, rdx
// asm:   0x58589ca: mov r12, rax
// asm:   0x58589cd: jmp 0x58589a6
// asm:   0x58589cf: jmp 0x58589d7
// asm:   0x58589d1: jmp 0x58589d7
// asm:   0x58589d3: jmp 0x58589d7
// asm:   0x58589d5: jmp 0x58589d7
// asm:   0x58589d7: mov rbx, rdx
// asm:   0x58589da: mov rdi, rax
// asm:   0x58589dd: cmp ebx, 1
// asm:   0x58589e0: jne 0x5858a19
// asm:   0x58589e2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58589e7: mov rbx, qword ptr [rax]
// asm:   0x58589ea: mov qword ptr [rsp + 0x58], rbx
// asm:   0x58589ef: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58589f4: lea rax, [rip + 0x1a34a1d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_List_LightningParticle_Dispose
// asm:   0x58589fb: mov rsi, qword ptr [rax]
// asm:   0x58589fe: lea rdi, [rsp + 0x40]
// asm:   0x5858a03: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5858a08: test rbx, rbx
// asm:   0x5858a0b: je 0x585895e
// asm:   0x5858a11: mov rdi, rbx
// asm:   0x5858a14: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5858a19: mov rbx, rdi
// asm:   0x5858a1c: jmp 0x5858a21
// asm:   0x5858a1e: mov rbx, rax
// asm:   0x5858a21: lea rdi, [rsp + 0x58]
// asm:   0x5858a26: call 0x2fce720  ; il2cpp_runtime_helper_02fce720()
// asm:   0x5858a2b: mov rdi, rbx
// asm:   0x5858a2e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5858a33: mov rdi, rax
// asm:   0x5858a36: call 0x2ab61e0  ; __clang_call_terminate()

void Weather_WeatherManager__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  System_Collections_Generic_List_List_LightningParticle___o *__this;
  Weather_WeatherManager_o *pWVar1;
  Weather_WeatherManager_c *method_00;
  bool bVar2;
  MethodInfo *method_01;
  undefined1 auStack_90 [16];
  Weather_LightningParticle_o *pWStack_80;
  undefined1 auStack_78 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_70;
  Weather_LightningParticle_o *pWStack_68;
  undefined1 auStack_58 [16];
  Weather_LightningParticle_o *pWStack_48;
  undefined8 uStack_40;
  System_Collections_Generic_List_Enumerator_object__o *pSStack_38;
  
  if (Il2CppMethodInitialized_07545084 == '\0') {
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
    Il2CppMethodInitialized_07545084 = '\x01';
  }
  auStack_78 = (undefined1  [8])0x0;
  pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pWStack_68 = (Weather_LightningParticle_o *)0x0;
  if ((TypeInfo_Weather_WindWeatherEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WindWeatherEffect);
  }
  TypeInfo_Weather_WindWeatherEffect->static_fields->WindEnabled = false;
  if ((TypeInfo_Weather_ThunderWeatherEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_ThunderWeatherEffect);
  }
  __this = TypeInfo_Weather_ThunderWeatherEffect->static_fields->LightningPool;
  if (__this != (System_Collections_Generic_List_List_LightningParticle___o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_90,
               (System_Collections_Generic_List_object__o *)__this,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_List_LightningParticle_GetEnumerator);
    pWStack_48 = pWStack_80;
    auStack_58._0_8_ = auStack_90._0_8_;
    auStack_58._8_8_ = auStack_90._8_8_;
    uStack_40 = 0;
    pSStack_38 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_58;
    while (bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)auStack_58,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_List_LightningParticle_MoveNext
                             ), bVar2) {
      if (pWStack_48 == (Weather_LightningParticle_o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_90,
                 (System_Collections_Generic_List_object__o *)pWStack_48,
                 (MethodInfo_395E050 *)
                 MethodInfo_System_Collections_Generic_List_LightningParticle_GetEnumerator);
      pWStack_68 = pWStack_80;
      auStack_78 = (undefined1  [8])auStack_90._0_8_;
      pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_90._8_8_;
      auStack_90._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      auStack_90._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_78;
      while (method_01 = MethodInfo_System_Collections_Generic_List_Enumerator_LightningParticle_MoveNext,
            bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_78,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_LightningParticle_MoveNext
                              ), bVar2) {
        if (pWStack_68 == (Weather_LightningParticle_o *)0x0) {
          ThrowNullReferenceException();
        }
        Weather_LightningParticle__Disable(pWStack_68,method_01);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)auStack_78,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_LightningParticle_Dispose);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_58,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_List_LightningParticle_Dispose);
    if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
    }
    method_00 = TypeInfo_Weather_WeatherManager;
    pWVar1 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
    if (pWVar1 != (Weather_WeatherManager_o *)0x0) {
      (pWVar1->fields)._finishedLoading = false;
      Weather_WeatherManager__DisableCaveMap((MethodInfo *)method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$EnableCaveMap
// il2cpp: void Weather_WeatherManager__EnableCaveMap (const MethodInfo* method);
// 0x5858af0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5858b20: jmp 0x5858e04

void Weather_WeatherManager__EnableCaveMap(MethodInfo *method)

{
  Weather_WeatherManager_StaticFields *pWVar1;
  UnityEngine_Material_o *value;
  UnityEngine_GameObject_o *__this;
  UnityEngine_ReflectionProbe_o *pUVar2;
  Weather_WeatherManager__UpdateReflectionTexture_d__35_o *__this_00;
  Weather_WeatherManager_o *pWVar3;
  
  if (Il2CppMethodInitialized_07545085 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ReflectionProbe);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    il2cpp_codegen_initialize_runtime_metadata(&"CaveMap1");
    Il2CppMethodInitialized_07545085 = '\x01';
    if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) goto label_05858b7b;
label_05858b11:
    pWVar1 = TypeInfo_Weather_WeatherManager->static_fields;
    pWVar3 = pWVar1->_instance;
  }
  else {
    if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor != 0) goto label_05858b11;
label_05858b7b:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
    pWVar1 = TypeInfo_Weather_WeatherManager->static_fields;
    pWVar3 = pWVar1->_instance;
  }
  if (pWVar3 != (Weather_WeatherManager_o *)0x0) {
    if ((pWVar3->fields)._isCaveMap != false) {
      return;
    }
    if ((((Il2CppClass *)TypeInfo_Weather_WeatherManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      pWVar1 = TypeInfo_Weather_WeatherManager->static_fields;
      pWVar3 = pWVar1->_instance;
      if (pWVar3 == (Weather_WeatherManager_o *)0x0) goto label_05858e04;
    }
    (pWVar3->fields)._isCaveMap = true;
    if ((System_Collections_Generic_Dictionary_object__object__o *)pWVar1->SkyboxMaterials !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      value = System_Collections_Generic_Dictionary_object__object___get_Item
                        ((System_Collections_Generic_Dictionary_object__object__o *)pWVar1->SkyboxMaterials,
                         (Il2CppObject *)"CaveMap1",
                         (MethodInfo_4AAD450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
      UnityEngine_RenderSettings__set_skybox(value,(MethodInfo *)0x0);
      UnityEngine_RenderSettings__set_defaultReflectionMode(1,(MethodInfo *)0x0);
      UnityEngine_RenderSettings__set_ambientMode(0,(MethodInfo *)0x0);
      UnityEngine_RenderSettings__set_ambientIntensity(1.0,(MethodInfo *)0x0);
      UnityEngine_RenderSettings__set_reflectionIntensity(1.0,(MethodInfo *)0x0);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa10(__this,(MethodInfo *)0x0);
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        pWVar3 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
        pUVar2 = UnityEngine_GameObject__AddComponent_object_
                           (__this,(MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_ReflectionProbe);
        if (pWVar3 != (Weather_WeatherManager_o *)0x0) {
          (pWVar3->fields)._baker = pUVar2;
          Il2CppCodeGenWriteBarrier(&(pWVar3->fields)._baker);
          pWVar3 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
          if ((pWVar3 != (Weather_WeatherManager_o *)0x0) &&
             (pUVar2 = (pWVar3->fields)._baker, pUVar2 != (UnityEngine_ReflectionProbe_o *)0x0)) {
            UnityEngine_ReflectionProbe__set_cullingMask(pUVar2,0,(MethodInfo *)0x0);
            pWVar3 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
            if ((pWVar3 != (Weather_WeatherManager_o *)0x0) &&
               (pUVar2 = (pWVar3->fields)._baker, pUVar2 != (UnityEngine_ReflectionProbe_o *)0x0)) {
              UnityEngine_ReflectionProbe__set_refreshMode(pUVar2,2,(MethodInfo *)0x0);
              pWVar3 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
              if ((pWVar3 != (Weather_WeatherManager_o *)0x0) &&
                 (pUVar2 = (pWVar3->fields)._baker, pUVar2 != (UnityEngine_ReflectionProbe_o *)0x0)) {
                UnityEngine_ReflectionProbe__set_mode(pUVar2,1,(MethodInfo *)0x0);
                pWVar3 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
                if ((pWVar3 != (Weather_WeatherManager_o *)0x0) &&
                   (pUVar2 = (pWVar3->fields)._baker, pUVar2 != (UnityEngine_ReflectionProbe_o *)0x0)) {
                  UnityEngine_ReflectionProbe__set_timeSlicingMode(pUVar2,2,(MethodInfo *)0x0);
                  UnityEngine_DynamicGI__UpdateEnvironment((MethodInfo *)0x0);
                  pWVar3 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
                  if ((pWVar3 != (Weather_WeatherManager_o *)0x0) &&
                     (pUVar2 = (pWVar3->fields)._baker, pUVar2 != (UnityEngine_ReflectionProbe_o *)0x0)) {
                    UnityEngine_ReflectionProbe__RenderProbe(pUVar2,(MethodInfo *)0x0);
                    pWVar3 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
                    if (pWVar3 != (Weather_WeatherManager_o *)0x0) {
                      if (Il2CppMethodInitialized_07545086 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&TypeInfo_Weather_WeatherManager_UpdateReflectionTexture_d__35);
                        Il2CppMethodInitialized_07545086 = '\x01';
                      }
                      __this_00 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)
                                             TypeInfo_Weather_WeatherManager_UpdateReflectionTexture_d__35);
                      Weather_WeatherManager__UpdateReflectionTexture_d__35___ctor
                                (__this_00,0,(MethodInfo *)0x0);
                      if (__this_00 != (Weather_WeatherManager__UpdateReflectionTexture_d__35_o *)0x0) {
                        (__this_00->fields).__4__this = pWVar3;
                        Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
                        UnityEngine_MonoBehaviour__StartCoroutine_691c390
                                  ((UnityEngine_MonoBehaviour_o *)pWVar3,
                                   (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
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
label_05858e04:
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$UpdateReflectionTexture
// il2cpp: System_Collections_IEnumerator_o* Weather_WeatherManager__UpdateReflectionTexture (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x5858e10

System_Collections_IEnumerator_o *
Weather_WeatherManager__UpdateReflectionTexture(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  Weather_WeatherManager__UpdateReflectionTexture_d__35_o *__this_00;
  
  if (Il2CppMethodInitialized_07545086 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager_UpdateReflectionTexture_d__35)
    ;
    Il2CppMethodInitialized_07545086 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Weather_WeatherManager_UpdateReflectionTexture_d__35);
  Weather_WeatherManager__UpdateReflectionTexture_d__35___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 == (Weather_WeatherManager__UpdateReflectionTexture_d__35_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Weather.WeatherManager$$DisableCaveMap
// il2cpp: void Weather_WeatherManager__DisableCaveMap (const MethodInfo* method);
// 0x5858a40

void Weather_WeatherManager__DisableCaveMap(MethodInfo *method)

{
  uint32_t uVar1;
  Weather_WeatherManager_o *pWVar2;
  
  if (Il2CppMethodInitialized_07545087 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_07545087 = '\x01';
    uVar1 = (TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
    pWVar2 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
  }
  else {
    pWVar2 = *(Weather_WeatherManager_o **)((Il2CppClass *)TypeInfo_Weather_WeatherManager)->static_fields;
  }
  if (pWVar2 == (Weather_WeatherManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pWVar2->fields)._isCaveMap = false;
  UnityEngine_RenderSettings__set_skybox((UnityEngine_Material_o *)0x0,(MethodInfo *)0x0);
  UnityEngine_RenderSettings__set_defaultReflectionMode(0,(MethodInfo *)0x0);
  UnityEngine_RenderSettings__set_ambientMode(3,(MethodInfo *)0x0);
  UnityEngine_RenderSettings__set_ambientIntensity(1.0,(MethodInfo *)0x0);
  UnityEngine_RenderSettings__set_reflectionIntensity(0.0,(MethodInfo *)0x0);
  return;
}


// Weather.WeatherManager$$OnFinishLoading
// il2cpp: void Weather_WeatherManager__OnFinishLoading (const MethodInfo* method);
// 0x5858e80

void Weather_WeatherManager__OnFinishLoading(MethodInfo *method)

{
  uint32_t uVar1;
  Weather_WeatherManager_o *__this;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_07545088 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_07545088 = '\x01';
    uVar1 = (TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
    __this = TypeInfo_Weather_WeatherManager->static_fields->_instance;
  }
  else {
    __this = *(Weather_WeatherManager_o **)((Il2CppClass *)TypeInfo_Weather_WeatherManager)->static_fields;
  }
  if (__this == (Weather_WeatherManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  Weather_WeatherManager__RestartWeather(__this,in_RSI);
  return;
}


// Weather.WeatherManager$$LoadSkyboxes
// il2cpp: void Weather_WeatherManager__LoadSkyboxes (const MethodInfo* method);
// 0x5858280
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58585dd: nop dword ptr [rax]

void Weather_WeatherManager__LoadSkyboxes(MethodInfo *method)

{
  Weather_WeatherManager_StaticFields *pWVar1;
  System_String_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_String_o *path;
  UnityEngine_Shader_o *pUVar4;
  System_String_array *pSVar5;
  System_String_array *values;
  System_String_o *pSVar6;
  UnityEngine_Material_o *pUVar7;
  System_Collections_Generic_Dictionary_string__Material__o *__this;
  il2cpp_array_size_t iVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  
  if (Il2CppMethodInitialized_07545089 == '\0') {
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
    Il2CppMethodInitialized_07545089 = '\x01';
  }
  pUVar4 = UnityEngine_Shader__Find("Skybox/Blended",(MethodInfo *)0x0);
  if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
  }
  pWVar1 = TypeInfo_Weather_WeatherManager->static_fields;
  pWVar1->_blendedShader = pUVar4;
  Il2CppCodeGenWriteBarrier(&pWVar1->_blendedShader);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pSVar5 = Utility_Util__EnumToStringArray_Int32Enum_
                     ((MethodInfo_377C8A0 *)MethodInfo_Utility_Util_EnumToStringArray_WeatherSkybox);
  if (pSVar5 != (System_String_array *)0x0) {
    iVar8 = pSVar5->max_length;
    if (0 < (int)iVar8) {
      uVar11 = 0;
      do {
        if ((uint)iVar8 <= uVar11) goto label_0585870f;
        pSVar2 = pSVar5->m_Items[(int)uVar11];
        if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
        }
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Weather_WeatherManager->static_fields->SkyboxMaterials;
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        path = TypeInfo_Utility_ResourcePaths->static_fields->Weather;
        values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
        if (values == (System_String_array *)0x0) goto label_05858714;
        if ((int)values->max_length == 0) goto label_0585870f;
        values->m_Items[0] = "Skyboxes/";
        Il2CppCodeGenWriteBarrier(values->m_Items);
        if (pSVar2 == (System_String_o *)0x0) goto label_05858714;
        pSVar6 = (System_String_o *)
                 (*((Il2CppClass *)pSVar2->klass)->vtable[3].methodPtr)
                           (pSVar2,((Il2CppClass *)pSVar2->klass)->vtable[3].method);
        if ((values->max_length & 0xfffffffe) == 0) goto label_0585870f;
        values->m_Items[1] = pSVar6;
        Il2CppCodeGenWriteBarrier(values->m_Items + 1);
        if ((uint)values->max_length < 3) goto label_0585870f;
        values->m_Items[2] = "/";
        Il2CppCodeGenWriteBarrier(values->m_Items + 2);
        pSVar6 = (System_String_o *)
                 (*((Il2CppClass *)pSVar2->klass)->vtable[3].methodPtr)
                           (pSVar2,((Il2CppClass *)pSVar2->klass)->vtable[3].method);
        if ((values->max_length & 0xfffffffc) == 0) goto label_0585870f;
        values->m_Items[3] = pSVar6;
        Il2CppCodeGenWriteBarrier(values->m_Items + 3);
        if ((uint)values->max_length < 5) goto label_0585870f;
        values->m_Items[4] = "Skybox";
        Il2CppCodeGenWriteBarrier(values->m_Items + 4);
        pSVar6 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        pUVar7 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                           (path,pSVar6,false,false,
                            (MethodInfo_3665790 *)
                            MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05858714;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar3,(Il2CppObject *)pSVar2,(Il2CppObject *)pUVar7,
                   (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_Add)
        ;
        uVar11 = uVar11 + 1;
        iVar8 = pSVar5->max_length;
      } while ((int)uVar11 < (int)iVar8);
    }
    uVar9 = iVar8 & 0xffffffff;
    if (0 < (int)iVar8) {
      uVar10 = 0;
      do {
        if (uVar9 <= uVar10) {
label_0585870f:
          ThrowIndexOutOfRangeException();
        }
        pSVar2 = pSVar5->m_Items[uVar10];
        if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
        }
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Weather_WeatherManager->static_fields->SkyboxBlendedMaterials;
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Material);
        System_Collections_Generic_Dictionary_object__object____ctor
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                   (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor
                  );
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05858714;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar3,(Il2CppObject *)pSVar2,(Il2CppObject *)__this,
                   (MethodInfo_4AAD4E0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_Add);
        uVar10 = uVar10 + 1;
        uVar11 = (uint)pSVar5->max_length;
        uVar9 = (ulong)uVar11;
      } while ((long)uVar10 < (long)(int)uVar11);
    }
    if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Weather_WeatherManager->static_fields->SkyboxMaterials;
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->Weather;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar7 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (pSVar2,"Skyboxes/CaveMap1/CaveMap1Skybox",false,false,
                        (MethodInfo_3665790 *)
                        MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar3,(Il2CppObject *)"CaveMap1",(Il2CppObject *)pUVar7,
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_Add);
      return;
    }
  }
label_05858714:
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$TakeFlashlight
// il2cpp: void Weather_WeatherManager__TakeFlashlight (UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x5859580
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58595b6: jmp 0x585972d

void Weather_WeatherManager__TakeFlashlight(UnityEngine_Transform_o *parent,MethodInfo *method)

{
  uint32_t uVar1;
  Weather_WeatherManager_o *pWVar2;
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *pSVar3;
  bool bVar4;
  Weather_BaseWeatherEffect_o *pWVar5;
  
  if (Il2CppMethodInitialized_0754508a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_0754508a = '\x01';
    uVar1 = (TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
    pWVar2 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
  }
  else {
    pWVar2 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
  }
  if ((pWVar2 != (Weather_WeatherManager_o *)0x0) &&
     (pSVar3 = (pWVar2->fields)._effects,
     pSVar3 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)) {
    bVar4 = System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,7,
                       (MethodInfo_4A551F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_ContainsKey
                      );
    if (!bVar4) {
      return;
    }
    if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
    }
    pWVar2 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
    if ((pWVar2 != (Weather_WeatherManager_o *)0x0) &&
       (pSVar3 = (pWVar2->fields)._effects,
       pSVar3 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)) {
      pWVar5 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,7,
                          (MethodInfo_4A54F30 *)
                          MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                         );
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pWVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        return;
      }
      if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      }
      pWVar2 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
      if (((pWVar2 != (Weather_WeatherManager_o *)0x0) &&
          (pSVar3 = (pWVar2->fields)._effects,
          pSVar3 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)) &&
         (pWVar5 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,7,
                              (MethodInfo_4A54F30 *)
                              MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                             ), pWVar5 != (Weather_BaseWeatherEffect_o *)0x0)) {
        (*(pWVar5->klass->vtable)._9_SetParent.methodPtr)
                  (pWVar5,parent,(pWVar5->klass->vtable)._9_SetParent.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$CreateBlendedSkybox
// il2cpp: UnityEngine_Material_o* Weather_WeatherManager__CreateBlendedSkybox (UnityEngine_Shader_o* shader, System_String_array* parts, System_String_o* skybox1, System_String_o* skybox2, const MethodInfo* method);
// 0x5859740
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585995c: cmp byte ptr [rip + 0x1ceb729], 0
// asm:   0x5859963: jne 0x5859978
// asm:   0x58599af: jmp 0x5859978

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
  
  if (Il2CppMethodInitialized_0754508b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    il2cpp_codegen_initialize_runtime_metadata(&"2");
    il2cpp_codegen_initialize_runtime_metadata(&"_");
    il2cpp_codegen_initialize_runtime_metadata(&"Tex");
    il2cpp_codegen_initialize_runtime_metadata(&"_Tint");
    Il2CppMethodInitialized_0754508b = '\x01';
  }
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
  UnityEngine_Material___ctor(pUVar4,shader,(MethodInfo *)0x0);
  if (parts != (System_String_array *)0x0) {
    iVar3 = (int)parts->max_length;
    if (pUVar4 == (UnityEngine_Material_o *)0x0) {
      if (0 < iVar3) {
        pSVar6 = System_String__Concat_5301f10
                           ("_",parts->m_Items[0],"Tex",(MethodInfo *)0x0);
        if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
        }
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Weather_WeatherManager->static_fields->SkyboxMaterials;
        if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
           (pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar2,(Il2CppObject *)skybox1,
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item),
           pUVar4 != (UnityEngine_Material_o *)0x0)) {
          UnityEngine_Material__GetTexture(pUVar4,pSVar6,(MethodInfo *)0x0);
          ThrowNullReferenceException();
        }
      }
    }
    else {
      if (0 < iVar3) {
        uVar5 = parts->max_length & 0xffffffff;
        uVar9 = 0;
        do {
          if (uVar5 <= uVar9) {
            ThrowIndexOutOfRangeException();
          }
          pSVar6 = System_String__Concat_5301f10
                             ("_",parts->m_Items[uVar9],"Tex",
                              (MethodInfo *)0x0);
          if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
          }
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_Weather_WeatherManager->static_fields->SkyboxMaterials;
          if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
             (pUVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar2,(Il2CppObject *)skybox1,
                                  (MethodInfo_4AAD450 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item),
             pUVar7 == (UnityEngine_Material_o *)0x0)) goto label_05859a22;
          pUVar8 = UnityEngine_Material__GetTexture(pUVar7,pSVar6,(MethodInfo *)0x0);
          UnityEngine_Material__SetTexture(pUVar4,pSVar6,pUVar8,(MethodInfo *)0x0);
          name = System_String__Concat_52f0320(pSVar6,"2",(MethodInfo *)0x0);
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_Weather_WeatherManager->static_fields->SkyboxMaterials;
          if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
             (pUVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar2,(Il2CppObject *)skybox2,
                                  (MethodInfo_4AAD450 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item),
             pUVar7 == (UnityEngine_Material_o *)0x0)) goto label_05859a22;
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
        if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
        }
        if (Il2CppMethodInitialized_0754508c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"_Blend");
          Il2CppMethodInitialized_0754508c = '\x01';
        }
        UnityEngine_Material__SetFloat(pUVar4,"_Blend",0.0,(MethodInfo *)0x0);
        return pUVar4;
      }
    }
  }
label_05859a22:
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$SetSkyboxBlend
// il2cpp: void Weather_WeatherManager__SetSkyboxBlend (UnityEngine_Material_o* skybox, float blend, const MethodInfo* method);
// 0x5859a40

void Weather_WeatherManager__SetSkyboxBlend(UnityEngine_Material_o *skybox,float blend,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754508c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"_Blend");
    Il2CppMethodInitialized_0754508c = '\x01';
  }
  if (skybox == (UnityEngine_Material_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Material__SetFloat(skybox,"_Blend",blend,(MethodInfo *)0x0);
  return;
}


// Weather.WeatherManager$$ResetCameras
// il2cpp: void Weather_WeatherManager__ResetCameras (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x5859aa0

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
  
  if (Il2CppMethodInitialized_0754508d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Camera_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Camera_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_0754508d = '\x01';
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
        if (uVar2 < (uint)pUVar6->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          pUVar6->m_Items[(int)uVar2] = item;
          Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar2);
          return;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,
                   (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$ResetSkyboxColors
// il2cpp: void Weather_WeatherManager__ResetSkyboxColors (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x5859bc0
// eh: try 0x5859d5a..0x5859f3e -> pad 0x5859f67 (+18 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5859f49..0x5859f53 -> pad 0x5859fc1 catch (...) [compiler noexcept guard]
// eh: try 0x5859f82..0x5859f87 -> pad 0x5859fac cleanup
// eh: try 0x5859faf..0x5859fb9 -> pad 0x5859fc1 catch (...) [compiler noexcept guard]
// asm: 58 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5859ebd: jmp 0x5859f2c
// asm:   0x5859ed4: jmp 0x5859ee2
// asm:   0x5859ed6: jmp 0x5859ee2
// asm:   0x5859ed8: jmp 0x5859ee2
// asm:   0x5859eda: jmp 0x5859ee2
// asm:   0x5859edc: jmp 0x5859ee2
// asm:   0x5859ede: jmp 0x5859ee2
// asm:   0x5859ee0: jmp 0x5859ee2
// asm:   0x5859ee2: mov rbx, rdx
// asm:   0x5859ee5: mov r13, rax
// asm:   0x5859ee8: cmp ebx, 1
// asm:   0x5859eeb: jne 0x5859f49
// asm:   0x5859eed: mov rdi, r13
// asm:   0x5859ef0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5859ef5: mov rbx, qword ptr [rax]
// asm:   0x5859ef8: mov qword ptr [rsp + 8], rbx
// asm:   0x5859efd: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5859f02: jmp 0x5859ea2
// asm:   0x5859f2c: mov rdi, rbx
// asm:   0x5859f2f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5859f43: mov rbx, rdx
// asm:   0x5859f46: mov r13, rax
// asm:   0x5859f49: lea rdi, [rsp + 8]
// asm:   0x5859f4e: call 0x2fce750  ; il2cpp_runtime_helper_02fce750()
// asm:   0x5859f53: jmp 0x5859f6d
// asm:   0x5859f55: jmp 0x5859f67
// asm:   0x5859f57: jmp 0x5859f67
// asm:   0x5859f59: jmp 0x5859f67
// asm:   0x5859f5b: jmp 0x5859f67
// asm:   0x5859f5d: jmp 0x5859f67
// asm:   0x5859f5f: jmp 0x5859f67
// asm:   0x5859f61: jmp 0x5859f67
// asm:   0x5859f63: jmp 0x5859f67
// asm:   0x5859f65: jmp 0x5859f67
// asm:   0x5859f67: mov rbx, rdx
// asm:   0x5859f6a: mov r13, rax
// asm:   0x5859f6d: cmp ebx, 1
// asm:   0x5859f70: jne 0x5859faf
// asm:   0x5859f72: mov rdi, r13
// asm:   0x5859f75: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5859f7a: mov rbx, qword ptr [rax]
// asm:   0x5859f7d: mov qword ptr [rsp + 0x58], rbx
// asm:   0x5859f82: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5859f87: lea rax, [rip + 0x1a35d6a]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_Material
// asm:   0x5859f8e: mov rsi, qword ptr [rax]
// asm:   0x5859f91: lea rdi, [rsp + 0x20]
// asm:   0x5859f96: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5859f9b: test rbx, rbx
// asm:   0x5859f9e: je 0x5859f18
// asm:   0x5859fa4: mov rdi, rbx
// asm:   0x5859fa7: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5859fac: mov r13, rax
// asm:   0x5859faf: lea rdi, [rsp + 0x58]
// asm:   0x5859fb4: call 0x2fce780  ; il2cpp_runtime_helper_02fce780()
// asm:   0x5859fb9: mov rdi, r13
// asm:   0x5859fbc: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5859fc1: mov rdi, rax
// asm:   0x5859fc4: call 0x2ab61e0  ; __clang_call_terminate()

void Weather_WeatherManager__ResetSkyboxColors(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  Il2CppObject *key;
  Il2CppObject *key_00;
  bool bVar1;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Color_o value;
  undefined1 local_90 [16];
  Il2CppObject *local_80;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  Il2CppObject *local_68;
  undefined1 local_58 [8];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSStack_50;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_0754508e == '\0') {
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
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_Material_718fd00
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_Material_718fd08
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
    Il2CppMethodInitialized_0754508e = '\x01';
  }
  local_78 = (undefined1  [8])0x0;
  uStack_70._0_4_ = 0;
  uStack_70._4_4_ = 0;
  local_68 = (Il2CppObject *)0x0;
  local_58 = (undefined1  [8])0x0;
  pSStack_50 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)0x0;
  local_48 = (Il2CppObject *)0x0;
  if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Weather_WeatherManager->static_fields->SkyboxBlendedMaterials;
  if ((pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (pSVar2 = System_Collections_Generic_Dictionary_object__object___get_Keys
                         (pSVar3,(MethodInfo_4AAD0F0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_get_Keys
                         ),
     pSVar2 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_90,pSVar2
             ,(MethodInfo_511A520 *)
              MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Dictionary_string_Material_GetEnumera
            );
  local_68 = local_80;
  local_78 = (undefined1  [8])local_90._0_8_;
  uStack_70 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_90._8_8_
  ;
  local_40 = 0;
  local_38 = local_78;
  while( true ) {
    bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                       local_78,(MethodInfo_4CE7080 *)
                                MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Dictionary_string_Material_718fd00
                      );
    key = local_68;
    if (!bVar1) {
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_78,
                 (MethodInfo_4CE7070 *)
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
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar3,key,
                        (MethodInfo_4AAD450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_get_Item
                       );
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar2 = System_Collections_Generic_Dictionary_object__object___get_Keys
                       (pSVar3,(MethodInfo_4AAD0F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Keys);
    if (pSVar2 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) break;
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_90,
               pSVar2,(MethodInfo_511A520 *)
                      MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Material_GetEnumerator
              );
    local_48 = local_80;
    local_58 = (undefined1  [8])local_90._0_8_;
    pSStack_50 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 local_90._8_8_;
    local_90._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_90._8_8_ =
         (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_58;
    while (bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                             ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                               *)local_58,
                              (MethodInfo_4CE7080 *)
                              MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Material_MoveNext
                             ), key_00 = local_48, bVar1) {
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
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_get_Item
                         );
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_00 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar3,key_00,
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
      if (__this_00 == (UnityEngine_Material_o *)0x0) {
        ThrowNullReferenceException();
      }
      value.fields.b = 0.5;
      value.fields.a = 1.0;
      value.fields.r = 0.5;
      value.fields.g = 0.5;
      UnityEngine_Material__SetColor(__this_00,"_Tint",value,(MethodInfo *)0x0);
    }
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_58,
               (MethodInfo_4CE7070 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Material_Dispose
              );
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$ResetPhysics
// il2cpp: void Weather_WeatherManager__ResetPhysics (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x5859fd0

void Weather_WeatherManager__ResetPhysics(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Weather_WeatherManager_o *pWVar2;
  
  if (Il2CppMethodInitialized_0754508f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_0754508f = '\x01';
    uVar1 = (TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
    pWVar2 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
  }
  else {
    pWVar2 = *(Weather_WeatherManager_o **)((Il2CppClass *)TypeInfo_Weather_WeatherManager)->static_fields;
  }
  if (pWVar2 == (Weather_WeatherManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pWVar2->fields)._currentWindForce = 0.0;
  (pWVar2->fields)._currentRainForce = 0.0;
  (pWVar2->fields)._currentSnowForce = 0.0;
  return;
}


// Weather.WeatherManager$$GetWeatherForce
// il2cpp: UnityEngine_Vector3_o Weather_WeatherManager__GetWeatherForce (const MethodInfo* method);
// 0x585a060

UnityEngine_Vector3_o Weather_WeatherManager__GetWeatherForce(MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  UnityEngine_Vector3_StaticFields *pUVar8;
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *pSVar9;
  Weather_WindWeatherEffect_StaticFields *pWVar10;
  Weather_BaseWeatherEffect_o *pWVar11;
  Weather_WeatherManager_o *pWVar12;
  UnityEngine_Vector3_o UVar13;
  float local_3c;
  undefined8 local_38;
  
  if (Il2CppMethodInitialized_07545090 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WindWeatherEffect);
    Il2CppMethodInitialized_07545090 = '\x01';
  }
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
  local_38._0_4_ = (pUVar8->zeroVector).fields.x;
  local_38._4_4_ = (pUVar8->zeroVector).fields.y;
  local_3c = (pUVar8->zeroVector).fields.z;
  if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
  }
  pWVar12 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
  if (pWVar12 == (Weather_WeatherManager_o *)0x0) goto label_0585a46f;
  if (0.0 < (pWVar12->fields)._currentRainForce) {
    if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      pWVar12 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
      if (pWVar12 == (Weather_WeatherManager_o *)0x0) goto label_0585a46f;
    }
    pSVar9 = (pWVar12->fields)._effects;
    if (pSVar9 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)
    goto label_0585a46f;
    pWVar11 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9,10,
                         (MethodInfo_4A54F30 *)
                         MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                        );
    if (pWVar11 == (Weather_BaseWeatherEffect_o *)0x0) goto label_0585a46f;
    if (0.0 < (pWVar11->fields)._level) {
      if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      }
      pWVar12 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
      if (pWVar12 == (Weather_WeatherManager_o *)0x0) goto label_0585a46f;
      fVar1 = (pWVar12->fields)._currentRainForce;
      if (Il2CppMethodInitialized_075450a5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_075450a5 = '\x01';
      }
      pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar2 = (pUVar8->downVector).fields.x;
      uVar5 = (pUVar8->downVector).fields.y;
      local_38 = CONCAT44(local_38._4_4_ + fVar1 * (float)uVar5,(float)local_38 + fVar1 * (float)uVar2);
      local_3c = local_3c + (pUVar8->downVector).fields.z * fVar1;
    }
  }
  if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
  }
  pWVar12 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
  if (pWVar12 == (Weather_WeatherManager_o *)0x0) goto label_0585a46f;
  if (0.0 < (pWVar12->fields)._currentSnowForce) {
    if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      pWVar12 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
      if (pWVar12 == (Weather_WeatherManager_o *)0x0) goto label_0585a46f;
    }
    pSVar9 = (pWVar12->fields)._effects;
    if (pSVar9 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0)
    goto label_0585a46f;
    pWVar11 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9,0xc,
                         (MethodInfo_4A54F30 *)
                         MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                        );
    if (pWVar11 == (Weather_BaseWeatherEffect_o *)0x0) goto label_0585a46f;
    if (0.0 < (pWVar11->fields)._level) {
      if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      }
      pWVar12 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
      if (pWVar12 == (Weather_WeatherManager_o *)0x0) goto label_0585a46f;
      fVar1 = (pWVar12->fields)._currentSnowForce;
      if (Il2CppMethodInitialized_075450a5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_075450a5 = '\x01';
      }
      pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar3 = (pUVar8->downVector).fields.x;
      uVar6 = (pUVar8->downVector).fields.y;
      local_38 = CONCAT44(local_38._4_4_ + fVar1 * (float)uVar6,(float)local_38 + fVar1 * (float)uVar3);
      local_3c = local_3c + (pUVar8->downVector).fields.z * fVar1;
    }
  }
  if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
  }
  pWVar12 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
  if (pWVar12 != (Weather_WeatherManager_o *)0x0) {
    if ((pWVar12->fields)._currentWindForce <= 0.0) goto label_0585a45c;
    if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      pWVar12 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
      if (pWVar12 == (Weather_WeatherManager_o *)0x0) goto label_0585a46f;
    }
    pSVar9 = (pWVar12->fields)._effects;
    if (pSVar9 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
      pWVar11 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9,0xd,
                           (MethodInfo_4A54F30 *)
                           MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                          );
      if (pWVar11 != (Weather_BaseWeatherEffect_o *)0x0) {
        if (0.0 < (pWVar11->fields)._level) {
          if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
          }
          pWVar12 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
          if (pWVar12 == (Weather_WeatherManager_o *)0x0) goto label_0585a46f;
          fVar1 = (pWVar12->fields)._currentWindForce;
          if ((TypeInfo_Weather_WindWeatherEffect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WindWeatherEffect);
          }
          pWVar10 = TypeInfo_Weather_WindWeatherEffect->static_fields;
          uVar4 = (pWVar10->WindDirection).fields.x;
          uVar7 = (pWVar10->WindDirection).fields.y;
          local_38 = CONCAT44(local_38._4_4_ + fVar1 * (float)uVar7,(float)local_38 + fVar1 * (float)uVar4);
          local_3c = local_3c + (pWVar10->WindDirection).fields.z * fVar1;
        }
label_0585a45c:
        UVar13.fields.z = local_3c;
        UVar13.fields.x = (float)local_38;
        UVar13.fields.y = local_38._4_4_;
        return (UnityEngine_Vector3_o)UVar13.fields;
      }
    }
  }
label_0585a46f:
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$RestartWeather
// il2cpp: void Weather_WeatherManager__RestartWeather (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x5858f00
// eh: try 0x5859494..0x5859513 -> pad 0x585951d (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5859537..0x585953c -> pad 0x585955f cleanup
// eh: try 0x5859562..0x585956c -> pad 0x5859574 catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585904e: jmp 0x5859509
// asm:   0x5859210: jmp 0x58594ea
// asm:   0x58592eb: jmp 0x58593ae
// asm:   0x5859320: jmp 0x58593ae
// asm:   0x585951b: jmp 0x585951f
// asm:   0x585951d: jmp 0x585951f
// asm:   0x585951f: mov rbx, rax
// asm:   0x5859522: cmp edx, 1
// asm:   0x5859525: jne 0x5859562
// asm:   0x5859527: mov rdi, rbx
// asm:   0x585952a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x585952f: mov rbx, qword ptr [rax]
// asm:   0x5859532: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5859537: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x585953c: lea rax, [rip + 0x1a359d5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_WeatherScheduleRunner_Dispose
// asm:   0x5859543: mov rsi, qword ptr [rax]
// asm:   0x5859546: mov rdi, rsp
// asm:   0x5859549: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x585954e: test rbx, rbx
// asm:   0x5859551: je 0x58594d2
// asm:   0x5859557: mov rdi, rbx
// asm:   0x585955a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x585955f: mov rbx, rax
// asm:   0x5859562: lea rdi, [rsp + 0x18]
// asm:   0x5859567: call 0x2fce7b0  ; il2cpp_runtime_helper_02fce7b0()
// asm:   0x585956c: mov rdi, rbx
// asm:   0x585956f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5859574: mov rdi, rax
// asm:   0x5859577: call 0x2ab61e0  ; __clang_call_terminate()

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
  Settings_WeatherSettings_o *pSVar6;
  Settings_SetSettingsContainer_WeatherSet__o *pSVar7;
  Settings_InGameSet_o *pSVar8;
  Settings_IntSetting_o *pSVar9;
  Settings_ListSetting_T__o *__this_02;
  Settings_StringSetting_o *pSVar10;
  Settings_StringSetting_c *pSVar11;
  Settings_BoolSetting_o *pSVar12;
  Il2CppObject *__this_03;
  bool bVar13;
  Settings_WeatherSet_o *pSVar14;
  Map_MapLoader_StaticFields *pMVar15;
  Settings_WeatherSet_c *pSVar16;
  MethodInfo *in_RCX;
  MethodInfo *pMVar17;
  MethodInfo *method_00;
  Weather_WeatherManager_o *pWVar18;
  Settings_WeatherSet_o *pSVar19;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (Il2CppMethodInitialized_07545091 == '\0') {
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
    Il2CppMethodInitialized_07545091 = '\x01';
  }
  SStack_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._current = (Il2CppObject *)0x0;
  pWVar18 = __this;
  Weather_WeatherManager__ResetCameras(__this,method);
  Weather_WeatherManager__ResetSkyboxColors(pWVar18,method);
  if (Il2CppMethodInitialized_0754508f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_0754508f = '\x01';
    if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) goto label_05859079;
label_0585903f:
    pWVar18 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
  }
  else {
    if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor != 0) goto label_0585903f;
label_05859079:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
    pWVar18 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
  }
  if (pWVar18 == (Weather_WeatherManager_o *)0x0) goto label_05859509;
  (pWVar18->fields)._currentWindForce = 0.0;
  (pWVar18->fields)._currentRainForce = 0.0;
  (pWVar18->fields)._currentSnowForce = 0.0;
  pSVar3 = (__this->fields)._scheduleRunners;
  if (pSVar3 == (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) goto label_05859509;
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
  goto label_05859509;
  System_Collections_Generic_Dictionary_Int32Enum__object___Clear
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_4A55190 *)
             MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_Clear);
  pSVar14 = (__this->fields)._currentWeather;
  if (pSVar14 == (Settings_WeatherSet_o *)0x0) goto label_05859509;
  (*(pSVar14->klass->vtable)._4_SetDefault.methodPtr)(pSVar14,(pSVar14->klass->vtable)._4_SetDefault.method);
  pSVar14 = (__this->fields)._startWeather;
  if (pSVar14 == (Settings_WeatherSet_o *)0x0) goto label_05859509;
  (*(pSVar14->klass->vtable)._4_SetDefault.methodPtr)(pSVar14,(pSVar14->klass->vtable)._4_SetDefault.method);
  pSVar14 = (__this->fields)._targetWeather;
  if (pSVar14 == (Settings_WeatherSet_o *)0x0) goto label_05859509;
  (*(pSVar14->klass->vtable)._4_SetDefault.methodPtr)(pSVar14,(pSVar14->klass->vtable)._4_SetDefault.method);
  pSVar4 = (__this->fields)._targetWeatherStartTimes;
  if (pSVar4 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_05859509;
  System_Collections_Generic_Dictionary_int__float___Clear
            (pSVar4,(MethodInfo_4A17650 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_Clear);
  pSVar4 = (__this->fields)._targetWeatherEndTimes;
  if (pSVar4 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_05859509;
  System_Collections_Generic_Dictionary_int__float___Clear
            (pSVar4,(MethodInfo_4A17650 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_Clear);
  pSVar5 = (__this->fields)._needApply;
  if (pSVar5 == (System_Collections_Generic_List_WeatherEffect__o *)0x0) goto label_05859509;
  piVar1 = &(pSVar5->fields)._version;
  *piVar1 = *piVar1 + 1;
  (pSVar5->fields)._size = 0;
  (__this->fields)._currentTime = 0.0;
  __this_01 = (__this->fields)._currentScheduleWait;
  if (__this_01 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0)
  goto label_05859509;
  pMVar17 = MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_Clear;
  System_Collections_Generic_Dictionary_object__float___Clear
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_4AB5620 *)
             MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_Clear);
  Weather_WeatherManager__CreateEffects(__this,pMVar17);
  Weather_WeatherManager__SetSceneWeather(__this,pMVar17);
  Weather_WeatherManager__ApplyCurrentWeather(__this,true,true,in_RCX);
  if (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName != 2) goto label_058594ea;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar13 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    bVar13 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (!bVar13) goto label_058594ea;
  pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
  if ((((pSVar6 == (Settings_WeatherSettings_o *)0x0) ||
       (pSVar7 = (pSVar6->fields).WeatherSets, pSVar7 == (Settings_SetSettingsContainer_WeatherSet__o *)0x0))
      || (pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,
         pSVar8 == (Settings_InGameSet_o *)0x0)) ||
     ((pSVar9 = (pSVar8->fields).WeatherIndex, pSVar9 == (Settings_IntSetting_o *)0x0 ||
      (__this_02 = (pSVar7->fields).Sets, __this_02 == (Settings_ListSetting_T__o *)0x0)))) goto label_05859509;
  pSVar14 = (Settings_WeatherSet_o *)
            Settings_ListSetting_object___GetItemAt
                      (__this_02,(pSVar9->fields)._value,
                       (MethodInfo_515DEA0 *)MethodInfo_Settings_ListSetting_WeatherSet_GetItemAt);
  if (pSVar14 != (Settings_WeatherSet_o *)0x0) {
    bVar2 = (TypeInfo_Settings_WeatherSet->_2).typeHierarchyDepth;
    if (((pSVar14->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pSVar14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_WeatherSet))
    {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar14);
    }
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    pMVar15 = TypeInfo_Map_MapLoader->static_fields;
    if (pMVar15->HasWeather != false) goto label_0585930d;
label_058593ae:
    pSVar19 = (__this->fields)._currentWeather;
    if (pSVar19 == (Settings_WeatherSet_o *)0x0) goto label_05859509;
    pSVar16 = pSVar19->klass;
    pMVar17 = (pSVar16->vtable)._10_Copy.method;
  }
  else {
    pMVar15 = TypeInfo_Map_MapLoader->static_fields;
    if (pMVar15->HasWeather == false) goto label_058593ae;
label_0585930d:
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      if (TypeInfo_Map_MapLoader->static_fields->Weather != (Settings_WeatherSet_o *)0x0) goto label_0585933f;
      goto label_058593ae;
    }
    if (pMVar15->Weather == (Settings_WeatherSet_o *)0x0) goto label_058593ae;
label_0585933f:
    if ((pSVar14 == (Settings_WeatherSet_o *)0x0) ||
       (pSVar10 = (pSVar14->fields).Name, pSVar10 == (Settings_StringSetting_o *)0x0)) goto label_05859509;
    bVar13 = System_String__op_Equality((pSVar10->fields)._value,"Map Default*",(MethodInfo *)0x0);
    if (!bVar13) goto label_058593ae;
    pSVar19 = (__this->fields)._currentWeather;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    if (pSVar19 == (Settings_WeatherSet_o *)0x0) goto label_05859509;
    pSVar14 = TypeInfo_Map_MapLoader->static_fields->Weather;
    pSVar16 = pSVar19->klass;
    pMVar17 = (pSVar16->vtable)._10_Copy.method;
  }
  (*(pSVar16->vtable)._10_Copy.methodPtr)(pSVar19,(Settings_BaseSetting_o *)pSVar14,pMVar17);
  pSVar14 = (__this->fields)._currentWeather;
  if ((pSVar14 != (Settings_WeatherSet_o *)0x0) &&
     (pSVar10 = (pSVar14->fields).Schedule, pSVar10 != (Settings_StringSetting_o *)0x0)) {
    Weather_WeatherManager__CreateScheduleRunners(__this,(pSVar10->fields)._value,method_00);
    pSVar14 = (__this->fields)._currentWeather;
    if ((pSVar14 != (Settings_WeatherSet_o *)0x0) &&
       (pSVar10 = (pSVar14->fields).Schedule, pSVar10 != (Settings_StringSetting_o *)0x0)) {
      pSVar11 = pSVar10->klass;
      pMVar17 = (pSVar11->vtable)._4_SetDefault.method;
      (*(pSVar11->vtable)._4_SetDefault.methodPtr)();
      pSVar14 = (__this->fields)._currentWeather;
      if ((pSVar14 != (Settings_WeatherSet_o *)0x0) &&
         (pSVar12 = (pSVar14->fields).UseSchedule, pSVar12 != (Settings_BoolSetting_o *)0x0)) {
        if ((pSVar12->fields)._value != false) {
          pSVar3 = (__this->fields)._scheduleRunners;
          if (pSVar3 == (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) goto label_05859509;
          System_Collections_Generic_List_object___GetEnumerator
                    (&SStack_48,(System_Collections_Generic_List_object__o *)pSVar3,
                     (MethodInfo_395E050 *)
                     MethodInfo_System_Collections_Generic_List_WeatherScheduleRunner_GetEnumerator);
          uStack_30 = 0;
          puStack_28 = (undefined1 *)&SStack_48;
          while (bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                                     (MethodInfo_4C45C50 *)
                                     MethodInfo_System_Collections_Generic_List_Enumerator_WeatherScheduleRunner_MoveNext
                                    ), __this_03 = SStack_48.fields._current, bVar13) {
            if ((Weather_WeatherScheduleRunner_o *)SStack_48.fields._current ==
                (Weather_WeatherScheduleRunner_o *)0x0) {
              ThrowNullReferenceException();
            }
            Weather_WeatherScheduleRunner__ProcessSchedule
                      ((Weather_WeatherScheduleRunner_o *)SStack_48.fields._current,(MethodInfo *)0x0);
            Weather_WeatherScheduleRunner__ConsumeSchedule
                      ((Weather_WeatherScheduleRunner_o *)__this_03,(MethodInfo *)0x0);
          }
          pMVar17 = MethodInfo_System_Collections_Generic_List_Enumerator_WeatherScheduleRunner_Dispose;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_WeatherScheduleRunner_Dispose);
        }
        Weather_WeatherManager__SyncWeather(__this,pMVar17);
        (__this->fields)._currentSyncWait = 5.0;
        (__this->fields)._needSync = false;
label_058594ea:
        (__this->fields)._currentLerpWait = 0.05;
        (__this->fields)._finishedLoading = true;
        return;
      }
    }
  }
label_05859509:
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$SetSceneWeather
// il2cpp: void Weather_WeatherManager__SetSceneWeather (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x585a8d0

void Weather_WeatherManager__SetSceneWeather(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_WeatherSet_o *pSVar2;
  Settings_ColorSetting_o *__this_00;
  Settings_GraphicsSettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Utility_Color255_o *__this_01;
  
  if (Il2CppMethodInitialized_07545092 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_07545092 = '\x01';
  }
  iVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName;
  if (iVar1 - 3U < 2) {
    pSVar2 = (__this->fields)._currentWeather;
    if (pSVar2 != (Settings_WeatherSet_o *)0x0) {
      __this_00 = (pSVar2->fields).AmbientLight;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      Utility_Color255___ctor(__this_01,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
      if (__this_00 != (Settings_ColorSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)__this_01,
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
        return;
      }
    }
label_0585a9ff:
    ThrowNullReferenceException();
  }
  if (iVar1 == 2) {
    if (Il2CppMethodInitialized_075450a1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
      Il2CppMethodInitialized_075450a1 = '\x01';
    }
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
    if ((pSVar3 == (Settings_GraphicsSettings_o *)0x0) ||
       (pSVar4 = (pSVar3->fields).WeatherEffects, pSVar4 == (Settings_IntSetting_o *)0x0)) goto label_0585a9ff;
    if ((pSVar4->fields)._value == 0) {
      Weather_WeatherManager__ApplyMapDefaultLighting(__this,method);
      return;
    }
  }
  return;
}


// Weather.WeatherManager$$ApplyMapDefaultLighting
// il2cpp: void Weather_WeatherManager__ApplyMapDefaultLighting (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x585c570
// eh: try 0x585c71a..0x585c9b9 -> pad 0x585c9e0 (+20 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x585c9c4..0x585c9ce -> pad 0x585ca3c catch (...) [compiler noexcept guard]
// eh: try 0x585c9fd..0x585ca02 -> pad 0x585ca27 cleanup
// eh: try 0x585ca2a..0x585ca34 -> pad 0x585ca3c catch (...) [compiler noexcept guard]
// asm: 59 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585c70e: nop 
// asm:   0x585c93f: jmp 0x585c94d
// asm:   0x585c941: jmp 0x585c94d
// asm:   0x585c943: jmp 0x585c94d
// asm:   0x585c945: jmp 0x585c94d
// asm:   0x585c947: jmp 0x585c94d
// asm:   0x585c949: jmp 0x585c94d
// asm:   0x585c94b: jmp 0x585c94d
// asm:   0x585c94d: mov rbp, rdx
// asm:   0x585c950: mov rbx, rax
// asm:   0x585c953: cmp ebp, 1
// asm:   0x585c956: jne 0x585c9c4
// asm:   0x585c958: mov rdi, rbx
// asm:   0x585c95b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x585c960: mov rbx, qword ptr [rax]
// asm:   0x585c963: mov qword ptr [rsp + 0x58], rbx
// asm:   0x585c968: mov bpl, 1
// asm:   0x585c96b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x585c970: jmp 0x585c8f4
// asm:   0x585c9ac: mov rdi, rbx
// asm:   0x585c9af: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x585c9be: mov rbp, rdx
// asm:   0x585c9c1: mov rbx, rax
// asm:   0x585c9c4: lea rdi, [rsp + 0x58]
// asm:   0x585c9c9: call 0x2fce7e0  ; il2cpp_runtime_helper_02fce7e0()
// asm:   0x585c9ce: jmp 0x585c9e8
// asm:   0x585c9d0: jmp 0x585c9e2
// asm:   0x585c9d2: jmp 0x585c9e2
// asm:   0x585c9d4: jmp 0x585c9e2
// asm:   0x585c9d6: jmp 0x585c9e2
// asm:   0x585c9d8: jmp 0x585c9e2
// asm:   0x585c9da: jmp 0x585c9e2
// asm:   0x585c9dc: jmp 0x585c9e2
// asm:   0x585c9de: jmp 0x585c9e2
// asm:   0x585c9e0: jmp 0x585c9e2
// asm:   0x585c9e2: mov rbp, rdx
// asm:   0x585c9e5: mov rbx, rax
// asm:   0x585c9e8: cmp ebp, 1
// asm:   0x585c9eb: jne 0x585ca2a
// asm:   0x585c9ed: mov rdi, rbx
// asm:   0x585c9f0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x585c9f5: mov rbx, qword ptr [rax]
// asm:   0x585c9f8: mov qword ptr [rsp + 0x68], rbx
// asm:   0x585c9fd: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x585ca02: lea rax, [rip + 0x1a30d9f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x585ca09: mov rsi, qword ptr [rax]
// asm:   0x585ca0c: lea rdi, [rsp + 0x20]
// asm:   0x585ca11: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x585ca16: test rbx, rbx
// asm:   0x585ca19: je 0x585c986
// asm:   0x585ca1f: mov rdi, rbx
// asm:   0x585ca22: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x585ca27: mov rbx, rax
// asm:   0x585ca2a: lea rdi, [rsp + 0x68]
// asm:   0x585ca2f: call 0x2fce810  ; il2cpp_runtime_helper_02fce810()
// asm:   0x585ca34: mov rdi, rbx
// asm:   0x585ca37: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x585ca3c: mov rdi, rax
// asm:   0x585ca3f: call 0x2ab61e0  ; __clang_call_terminate()

void Weather_WeatherManager__ApplyMapDefaultLighting(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_WeatherSettings_o *pSVar2;
  Settings_SetSettingsContainer_WeatherSet__o *pSVar3;
  Settings_ListSetting_T__o *__this_00;
  System_Collections_Generic_HashSet_WeatherEffect__o *__this_01;
  Settings_WeatherSet_o *pSVar4;
  System_Collections_Specialized_OrderedDictionary_o *__this_02;
  Il2CppClass *pIVar5;
  Il2CppObject *pIVar6;
  bool bVar7;
  System_Collections_Generic_List_BaseSetting__o *__this_03;
  System_String_o *key;
  Il2CppObject *pIVar8;
  Il2CppObject *pIVar9;
  undefined1 auStack_a0 [8];
  void *pvStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  Il2CppObject *pIStack_78;
  undefined1 auStack_68 [8];
  void *pvStack_60;
  Il2CppObject *pIStack_58;
  undefined8 uStack_50;
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  if (Il2CppMethodInitialized_07545093 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_WeatherEffect_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_WeatherEffect_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_WeatherEffect_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_WeatherEffect_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_WeatherSet_GetItems);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_WeatherSet);
    il2cpp_codegen_initialize_runtime_metadata(&"Map Default*");
    Il2CppMethodInitialized_07545093 = '\x01';
  }
  auStack_88 = (undefined1  [8])0x0;
  uStack_80._0_4_ = 0;
  uStack_80._4_4_ = 0;
  pIStack_78 = (Il2CppObject *)0x0;
  auStack_68 = (undefined1  [8])0x0;
  pvStack_60 = (void *)0x0;
  pIStack_58 = (Il2CppObject *)0x0;
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
  if ((((pSVar2 == (Settings_WeatherSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).WeatherSets, pSVar3 == (Settings_SetSettingsContainer_WeatherSet__o *)0x0))
      || (__this_00 = (pSVar3->fields).Sets, __this_00 == (Settings_ListSetting_T__o *)0x0)) ||
     (__this_03 = Settings_ListSetting_object___GetItems
                            (__this_00,
                             (MethodInfo_515DED0 *)MethodInfo_Settings_ListSetting_WeatherSet_GetItems),
     __this_03 == (System_Collections_Generic_List_BaseSetting__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a0,
             (System_Collections_Generic_List_object__o *)__this_03,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
  pIStack_78 = (Il2CppObject *)CONCAT44(uStack_8c,uStack_90);
  auStack_88 = auStack_a0;
  uStack_80 = pvStack_98;
  uStack_40 = 0;
  puStack_38 = auStack_88;
  do {
    do {
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)auStack_88,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
      pIVar6 = pIStack_78;
      if (!bVar7) goto label_0585c972;
      if (pIStack_78 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = (TypeInfo_Settings_WeatherSet->_2).typeHierarchyDepth;
      if (((pIStack_78->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pIStack_78->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_WeatherSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIStack_78);
      }
      if (pIStack_78[3].monitor == (void *)0x0) {
        ThrowNullReferenceException();
      }
    } while (*(char *)((long)pIStack_78[3].monitor + 0x19) == '\0');
    if (pIStack_78[3].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    bVar7 = System_String__op_Inequality
                      (((pIStack_78[3].klass)->_1).byval_arg.data,"Map Default*",(MethodInfo *)0x0);
  } while (bVar7);
  __this_01 = (__this->fields).LowEffects;
  if (__this_01 == (System_Collections_Generic_HashSet_WeatherEffect__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_Int32Enum___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_a0,
             (System_Collections_Generic_HashSet_T__o *)__this_01,
             (MethodInfo_4FAE100 *)MethodInfo_System_Collections_Generic_HashSet_WeatherEffect_GetEnumerator);
  pIStack_58 = (Il2CppObject *)CONCAT44(uStack_8c,uStack_90);
  auStack_68 = auStack_a0;
  pvStack_60 = pvStack_98;
  uStack_50 = 0;
  pSStack_48 = (System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_68;
  do {
    bVar7 = System_Collections_Generic_HashSet_Enumerator_Int32Enum___MoveNext
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_68,
                       (MethodInfo_4C3C760 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_WeatherEffect_MoveNext);
    if (!bVar7) {
      System_Collections_Generic_HashSet_Enumerator_Int32Enum___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_68,
                 (MethodInfo_4C3C750 *)
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_WeatherEffect_Dispose);
label_0585c972:
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)auStack_88,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
      return;
    }
    auStack_a0 = (undefined1  [8])TypeInfo_Weather_WeatherEffect;
    pvStack_98 = (void *)0xffffffffffffffff;
    uStack_90 = pIStack_58._0_4_;
    key = System_Enum__ToString((System_Enum_o *)auStack_a0,(MethodInfo *)0x0);
    pSVar4 = (__this->fields)._currentWeather;
    if (pSVar4 == (Settings_WeatherSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_02 = (pSVar4->fields).Settings;
    if (__this_02 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar8 = System_Collections_Specialized_OrderedDictionary__get_Item
                       (__this_02,(Il2CppObject *)key,(MethodInfo *)0x0);
    if (pIVar6[1].monitor == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar9 = System_Collections_Specialized_OrderedDictionary__get_Item
                       (pIVar6[1].monitor,(Il2CppObject *)key,(MethodInfo *)0x0);
    if (pIVar8 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar5 = pIVar8->klass;
    bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
    if (((pIVar5->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar5->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
label_0585c8e0:
      il2cpp_codegen_raise_invalid_cast_exception(pIVar8);
    }
    if ((pIVar9 != (Il2CppObject *)0x0) &&
       (((pIVar9->klass->_2).typeHierarchyDepth < bVar1 ||
        ((pIVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BaseSetting))
       )) {
      pIVar8 = pIVar9;
      goto label_0585c8e0;
    }
    (*pIVar5->vtable[10].methodPtr)(pIVar8,pIVar9,pIVar5->vtable[10].method);
  } while( true );
}


// Weather.WeatherManager$$CreateScheduleRunners
// il2cpp: void Weather_WeatherManager__CreateScheduleRunners (Weather_WeatherManager_o* __this, System_String_o* schedule, const MethodInfo* method);
// 0x585be20
// eh: try 0x585bf6f..0x585c0df -> pad 0x585c0f4 (+11 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x585c110..0x585c115 -> pad 0x585c134 cleanup
// eh: try 0x585c137..0x585c141 -> pad 0x585c149 catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585c0e4: jmp 0x585c0f8
// asm:   0x585c0e6: jmp 0x585c0f8
// asm:   0x585c0e8: jmp 0x585c0f8
// asm:   0x585c0ea: jmp 0x585c0f8
// asm:   0x585c0ec: jmp 0x585c0f8
// asm:   0x585c0ee: jmp 0x585c0f8
// asm:   0x585c0f0: jmp 0x585c0f8
// asm:   0x585c0f2: jmp 0x585c0f8
// asm:   0x585c0f4: jmp 0x585c0f8
// asm:   0x585c0f6: jmp 0x585c0f8
// asm:   0x585c0f8: mov rbx, rax
// asm:   0x585c0fb: cmp edx, 1
// asm:   0x585c0fe: jne 0x585c137
// asm:   0x585c100: mov rdi, rbx
// asm:   0x585c103: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x585c108: mov rbx, qword ptr [rax]
// asm:   0x585c10b: mov qword ptr [rsp + 0x20], rbx
// asm:   0x585c110: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x585c115: lea rax, [rip + 0x1a32de4]  ; MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEvent_Dispose
// asm:   0x585c11c: mov rsi, qword ptr [rax]
// asm:   0x585c11f: mov rdi, rsp
// asm:   0x585c122: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x585c127: test rbx, rbx
// asm:   0x585c12a: je 0x585c0b2
// asm:   0x585c12c: mov rdi, rbx
// asm:   0x585c12f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x585c134: mov rbx, rax
// asm:   0x585c137: lea rdi, [rsp + 0x20]
// asm:   0x585c13c: call 0x2fce840  ; il2cpp_runtime_helper_02fce840()
// asm:   0x585c141: mov rdi, rbx
// asm:   0x585c144: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x585c149: mov rdi, rax
// asm:   0x585c14c: call 0x2ab61e0  ; __clang_call_terminate()

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
  MethodInfo *pMVar6;
  Il2CppObject *item;
  bool bVar7;
  Weather_WeatherScheduleRunner_o *__this_02;
  Weather_WeatherSchedule_o *pWVar8;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  undefined1 local_48 [16];
  Weather_WeatherEvent_o *local_38;
  
  if (Il2CppMethodInitialized_07545094 == '\0') {
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
    Il2CppMethodInitialized_07545094 = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Weather_WeatherScheduleRunner);
  Weather_WeatherScheduleRunner___ctor(__this_02,__this,(MethodInfo *)0x0);
  pWVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Weather_WeatherSchedule);
  Weather_WeatherSchedule___ctor_575f560(pWVar8,schedule,(MethodInfo *)0x0);
  if ((pWVar8 == (Weather_WeatherSchedule_o *)0x0) ||
     (pSVar3 = (pWVar8->fields).Events, pSVar3 == (System_Collections_Generic_List_WeatherEvent__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)pSVar3,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_WeatherEvent_GetEnumerator);
  local_68.fields._current = (Il2CppObject *)local_38;
  local_68.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
  local_68.fields._index = local_48._8_4_;
  local_68.fields._version = local_48._12_4_;
  local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_48._8_8_ = &local_68;
  do {
    bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_68,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEvent_MoveNext);
    item = local_68.fields._current;
    if (!bVar7) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                (&local_68,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEvent_Dispose);
      return;
    }
    if ((Weather_WeatherEvent_o *)local_68.fields._current == (Weather_WeatherEvent_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (((Weather_WeatherEvent_Fields *)((long)local_68.fields._current + 0x10))->Action == 0) {
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Weather_WeatherScheduleRunner);
      Weather_WeatherScheduleRunner___ctor(__this_02,__this,(MethodInfo *)0x0);
      pMVar6 = MethodInfo_System_Collections_Generic_List_WeatherScheduleRunner_Add;
      __this_00 = (__this->fields)._scheduleRunners;
      if (__this_00 == (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) {
label_0585c0d5:
        ThrowNullReferenceException();
      }
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pWVar4 = (__this_00->fields)._items;
      if (pWVar4 == (Weather_WeatherScheduleRunner_array *)0x0) goto label_0585c0d5;
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pWVar4->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pWVar4->m_Items[(int)uVar2] = __this_02;
        Il2CppCodeGenWriteBarrier(pWVar4->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_02,
                   (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
      }
      __this_01 = (__this->fields)._currentScheduleWait;
      if (__this_01 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__float___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,(Il2CppObject *)__this_02,
                 0.0,(MethodInfo_4AB5470 *)
                     MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_Add);
    }
    pMVar6 = MethodInfo_System_Collections_Generic_List_WeatherEvent_Add;
    if (__this_02 == (Weather_WeatherScheduleRunner_o *)0x0) {
      ThrowNullReferenceException();
    }
    pWVar8 = (__this_02->fields).Schedule;
    if (pWVar8 == (Weather_WeatherSchedule_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = (pWVar8->fields).Events;
    if (pSVar3 == (System_Collections_Generic_List_WeatherEvent__o *)0x0) {
label_0585c0c1:
      ThrowNullReferenceException();
    }
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pWVar5 = (pSVar3->fields)._items;
    if (pWVar5 == (Weather_WeatherEvent_array *)0x0) goto label_0585c0c1;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pWVar5->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      pWVar5->m_Items[(int)uVar2] = (Weather_WeatherEvent_o *)item;
      Il2CppCodeGenWriteBarrier(pWVar5->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,item,
                 (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
    }
  } while( true );
}


// Weather.WeatherManager$$CreateEffects
// il2cpp: void Weather_WeatherManager__CreateEffects (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x585a480
// eh: try 0x585a7b4..0x585a864 -> pad 0x585a871 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x585a88b..0x585a890 -> pad 0x585a8af cleanup
// eh: try 0x585a8b2..0x585a8bc -> pad 0x585a8c4 catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585a869: jmp 0x585a873
// asm:   0x585a86b: jmp 0x585a873
// asm:   0x585a86d: jmp 0x585a873
// asm:   0x585a86f: jmp 0x585a873
// asm:   0x585a871: jmp 0x585a873
// asm:   0x585a873: mov rbx, rax
// asm:   0x585a876: cmp edx, 1
// asm:   0x585a879: jne 0x585a8b2
// asm:   0x585a87b: mov rdi, rbx
// asm:   0x585a87e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x585a883: mov rbx, qword ptr [rax]
// asm:   0x585a886: mov qword ptr [rsp + 0x18], rbx
// asm:   0x585a88b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x585a890: lea rax, [rip + 0x1a35bc9]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_WeatherEffect_BaseWeatherEffect
// asm:   0x585a897: mov rsi, qword ptr [rax]
// asm:   0x585a89a: mov rdi, rsp
// asm:   0x585a89d: call 0x4ddc060  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___Dispose()
// asm:   0x585a8a2: test rbx, rbx
// asm:   0x585a8a5: je 0x585a83e
// asm:   0x585a8a7: mov rdi, rbx
// asm:   0x585a8aa: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x585a8af: mov rbx, rax
// asm:   0x585a8b2: lea rdi, [rsp + 0x18]
// asm:   0x585a8b7: call 0x2fce870  ; il2cpp_runtime_helper_02fce870()
// asm:   0x585a8bc: mov rdi, rbx
// asm:   0x585a8bf: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x585a8c4: mov rdi, rax
// asm:   0x585a8c7: call 0x2ab61e0  ; __clang_call_terminate()

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
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_58;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_07545095 == '\0') {
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
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_WeatherEffect_BaseWeatherEffect_7190468
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_WeatherEffect_BaseWeatherEffect_7190470
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
    Il2CppMethodInitialized_07545095 = '\x01';
  }
  local_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._currentValue = (Il2CppObject *)0x0;
  pSVar1 = (__this->fields)._effects;
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Weather;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar6 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (path,"Prefabs/RainEffect",false,false,
                      (MethodInfo_3665790 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
    value = UnityEngine_GameObject__AddComponent_object_
                      (pUVar6,(MethodInfo_353B6A0 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_RainWeatherEffect);
    if (pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,10,(Il2CppObject *)value,
                 (MethodInfo_4A54FE0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_Add);
      pSVar1 = (__this->fields)._effects;
      pUVar6 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                         (TypeInfo_Utility_ResourcePaths->static_fields->Weather,"Prefabs/SnowEffect",false,
                          false,(MethodInfo_3665790 *)
                                MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        value_00 = UnityEngine_GameObject__AddComponent_object_
                             (pUVar6,(MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_SnowWeatherEffect);
        if (pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,0xc,
                     (Il2CppObject *)value_00,
                     (MethodInfo_4A54FE0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_Add);
          pSVar1 = (__this->fields)._effects;
          pUVar6 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                             (TypeInfo_Utility_ResourcePaths->static_fields->Weather,"Prefabs/WindEffect",
                              false,false,
                              (MethodInfo_3665790 *)
                              MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
          if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
            value_01 = UnityEngine_GameObject__AddComponent_object_
                                 (pUVar6,(MethodInfo_353B6A0 *)
                                         MethodInfo_UnityEngine_GameObject_AddComponent_WindWeatherEffect);
            if (pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
              System_Collections_Generic_Dictionary_Int32Enum__object___Add
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,0xd,
                         (Il2CppObject *)value_01,
                         (MethodInfo_4A54FE0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_Add)
              ;
              pSVar1 = (__this->fields)._effects;
              pUVar6 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                 (TypeInfo_Utility_ResourcePaths->static_fields->Weather,"Prefabs/ThunderEffect"
                                  ,false,false,
                                  (MethodInfo_3665790 *)
                                  MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
              if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                value_02 = UnityEngine_GameObject__AddComponent_object_
                                     (pUVar6,(MethodInfo_353B6A0 *)
                                             MethodInfo_UnityEngine_GameObject_AddComponent_ThunderWeatherEffect
                                     );
                if (pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0
                   ) {
                  System_Collections_Generic_Dictionary_Int32Enum__object___Add
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,0xb,
                             (Il2CppObject *)value_02,
                             (MethodInfo_4A54FE0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_Add
                            );
                  pSVar1 = (__this->fields)._effects;
                  if (pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)
                                0x0) {
                    __this_00 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Values
                                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                                           (MethodInfo_4A54D80 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Values
                                          );
                    if (__this_00 !=
                        (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
                      System_Collections_Generic_Dictionary_ValueCollection_Int32Enum__object___GetEnumerator
                                (&local_58,__this_00,
                                 (MethodInfo_43F1210 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_WeatherEffect_BaseWeatherEffect_GetEnumera
                                );
                      local_40 = 0;
                      local_38 = (undefined1 *)&local_58;
                      while( true ) {
                        bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___MoveNext
                                          (&local_58,
                                           (MethodInfo_4CDC070 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_WeatherEffect_BaseWeatherEffect_7190468
                                          );
                        pIVar4 = local_58.fields._currentValue;
                        if (!bVar5) {
                          method_00 = 
                          MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_WeatherEffect_BaseWeatherEffect
                          ;
                          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___Dispose
                                    (&local_58,
                                     (MethodInfo_4CDC060 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_WeatherEffect_BaseWeatherEffect
                                    );
                          Weather_WeatherManager__CreateFlashlight(__this,method_00);
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
                        if (local_58.fields._currentValue == (Il2CppObject *)0x0) break;
                        (*(local_58.fields._currentValue)->klass->vtable[0xb].methodPtr)
                                  (local_58.fields._currentValue,(pUVar3->fields).Transform,
                                   (local_58.fields._currentValue)->klass->vtable[0xb].method);
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
// 0x585ca50

void Weather_WeatherManager__CreateFlashlight(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *pSVar1;
  System_String_o *path;
  Cameras_BaseCamera_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_00;
  Weather_FlashlightWeatherEffect_o *value;
  Weather_BaseWeatherEffect_o *pWVar4;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545096 == '\0') {
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
    Il2CppMethodInitialized_07545096 = '\x01';
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
                        (path,"Prefabs/FlashlightEffect",false,false,
                         (MethodInfo_3665790 *)
                         MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    value = UnityEngine_GameObject__AddComponent_object_
                      (__this_00,
                       (MethodInfo_353B6A0 *)
                       MethodInfo_UnityEngine_GameObject_AddComponent_FlashlightWeatherEffect);
    if (pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,7,(Il2CppObject *)value,
                 (MethodInfo_4A54FE0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_Add);
      pSVar1 = (__this->fields)._effects;
      if (pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
        pWVar4 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,7,
                            (MethodInfo_4A54F30 *)
                            MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                           );
        if (pWVar4 != (Weather_BaseWeatherEffect_o *)0x0) {
          (*(pWVar4->klass->vtable)._11_Setup.methodPtr)
                    (pWVar4,(UnityEngine_Transform_o *)0x0,(pWVar4->klass->vtable)._11_Setup.method);
          pSVar1 = (__this->fields)._effects;
          if (pSVar1 != (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
            pWVar4 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,7,
                                (MethodInfo_4A54F30 *)
                                MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                               );
            if (pWVar4 != (Weather_BaseWeatherEffect_o *)0x0) {
              method_00 = (MethodInfo *)0x0;
              (*(pWVar4->klass->vtable)._6_Disable.methodPtr)
                        (pWVar4,false,(pWVar4->klass->vtable)._6_Disable.method);
              pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
              if ((pCVar2 != (Cameras_BaseCamera_o *)0x0) &&
                 (pUVar3 = (pCVar2->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) {
                parent = (pUVar3->fields).Transform;
                if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
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
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$FixedUpdate
// il2cpp: void Weather_WeatherManager__FixedUpdate (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x585cc40
// eh: try 0x585cefa..0x585d021 -> pad 0x585d032 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x585d04c..0x585d051 -> pad 0x585d076 cleanup
// eh: try 0x585d079..0x585d083 -> pad 0x585d08b catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585cdd7: jmp 0x585d003
// asm:   0x585d026: jmp 0x585d034
// asm:   0x585d028: jmp 0x585d034
// asm:   0x585d02a: jmp 0x585d034
// asm:   0x585d02c: jmp 0x585d034
// asm:   0x585d02e: jmp 0x585d034
// asm:   0x585d030: jmp 0x585d034
// asm:   0x585d032: jmp 0x585d034
// asm:   0x585d034: mov r14, rax
// asm:   0x585d037: cmp edx, 1
// asm:   0x585d03a: jne 0x585d079
// asm:   0x585d03c: mov rdi, r14
// asm:   0x585d03f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x585d044: mov rbx, qword ptr [rax]
// asm:   0x585d047: mov qword ptr [rsp + 8], rbx
// asm:   0x585d04c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x585d051: lea rax, [rip + 0x1a31ec0]  ; MethodInfo_System_Collections_Generic_List_Enumerator_WeatherScheduleRunner_Dispose
// asm:   0x585d058: mov rsi, qword ptr [rax]
// asm:   0x585d05b: lea rdi, [rsp + 0x20]
// asm:   0x585d060: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x585d065: test rbx, rbx
// asm:   0x585d068: je 0x585cfab
// asm:   0x585d06e: mov rdi, rbx
// asm:   0x585d071: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x585d076: mov r14, rax
// asm:   0x585d079: lea rdi, [rsp + 8]
// asm:   0x585d07e: call 0x2fce8a0  ; il2cpp_runtime_helper_02fce8a0()
// asm:   0x585d083: mov rdi, r14
// asm:   0x585d086: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x585d08b: mov rdi, rax
// asm:   0x585d08e: call 0x2ab61e0  ; __clang_call_terminate()

void Weather_WeatherManager__FixedUpdate(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_int__float__o *__this_00;
  Settings_WeatherSet_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *pSVar4;
  Il2CppObject *__this_01;
  bool bVar5;
  int32_t iVar6;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *collection;
  MethodInfo *in_RCX;
  System_Collections_Generic_List_WeatherScheduleRunner__o *pSVar7;
  MethodInfo *pMVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_60 [16];
  Weather_WeatherScheduleRunner_o *pWStack_50;
  System_Collections_Generic_List_Enumerator_object__o SStack_48;
  
  if (Il2CppMethodInitialized_07545097 == '\0') {
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
              (&MethodInfo_System_Collections_Generic_List_WeatherScheduleRunner_AddRange);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_WeatherScheduleRunner_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_WeatherScheduleRunner_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07545097 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName != 2) ||
     ((__this->fields)._finishedLoading == false)) {
    return;
  }
  fVar10 = (__this->fields)._currentTime;
  fVar9 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  (__this->fields)._currentTime = fVar9 + fVar10;
  __this_00 = (__this->fields)._targetWeatherStartTimes;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
    pMVar8 = MethodInfo_System_Collections_Generic_Dictionary_int_float_get_Count;
    iVar6 = System_Collections_Generic_Dictionary_int__float___get_Count
                      (__this_00,
                       (MethodInfo_4A17070 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_float_get_Count);
    if (0 < iVar6) {
      fVar10 = (__this->fields)._currentLerpWait;
      fVar9 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      fVar10 = fVar10 - fVar9;
      (__this->fields)._currentLerpWait = fVar10;
      if (fVar10 <= 0.0) {
        Weather_WeatherManager__LerpCurrentWeatherToTarget(__this,pMVar8);
        Weather_WeatherManager__ApplyCurrentWeather(__this,false,false,in_RCX);
        (__this->fields)._currentLerpWait = 0.05;
      }
    }
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    }
    else {
      bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    }
    if (!bVar5) {
      return;
    }
    pSVar2 = (__this->fields)._currentWeather;
    if ((pSVar2 != (Settings_WeatherSet_o *)0x0) &&
       (pSVar3 = (pSVar2->fields).UseSchedule, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
      if ((pSVar3->fields)._value == false) {
        return;
      }
      pSVar7 = (__this->fields)._scheduleKeys;
      if (pSVar7 != (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) {
        piVar1 = &(pSVar7->fields)._version;
        *piVar1 = *piVar1 + 1;
        iVar6 = (pSVar7->fields)._size;
        (pSVar7->fields)._size = 0;
        if (0 < iVar6) {
          System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,iVar6,(MethodInfo *)0x0);
          pSVar7 = (__this->fields)._scheduleKeys;
        }
        pSVar4 = (__this->fields)._currentScheduleWait;
        if ((pSVar4 != (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0) &&
           (collection = System_Collections_Generic_Dictionary_object__float___get_Keys
                                   ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                                    (MethodInfo_4AB5080 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_get_Keys
                                   ),
           pSVar7 != (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0)) {
          System_Collections_Generic_List_object___AddRange
                    ((System_Collections_Generic_List_object__o *)pSVar7,
                     (System_Collections_Generic_IEnumerable_T__o *)collection,
                     (MethodInfo_395D490 *)
                     MethodInfo_System_Collections_Generic_List_WeatherScheduleRunner_AddRange);
          pSVar7 = (__this->fields)._scheduleKeys;
          if (pSVar7 != (System_Collections_Generic_List_WeatherScheduleRunner__o *)0x0) {
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)auStack_60,
                       (System_Collections_Generic_List_object__o *)pSVar7,
                       (MethodInfo_395E050 *)
                       MethodInfo_System_Collections_Generic_List_WeatherScheduleRunner_GetEnumerator);
            SStack_48.fields._current = (Il2CppObject *)pWStack_50;
            SStack_48.fields._list = (System_Collections_Generic_List_T__o *)auStack_60._0_8_;
            SStack_48.fields._index = auStack_60._8_4_;
            SStack_48.fields._version = auStack_60._12_4_;
            auStack_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
            auStack_60._8_8_ = &SStack_48;
            while (bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     (&SStack_48,
                                      (MethodInfo_4C45C50 *)
                                      MethodInfo_System_Collections_Generic_List_Enumerator_WeatherScheduleRunner_MoveNext
                                     ), __this_01 = SStack_48.fields._current, bVar5) {
              pSVar4 = (__this->fields)._currentScheduleWait;
              if (pSVar4 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0) {
                ThrowNullReferenceException();
              }
              fVar10 = System_Collections_Generic_Dictionary_object__float___get_Item
                                 ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                                  SStack_48.fields._current,
                                  (MethodInfo_4AB53E0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_get_Item
                                 );
              fVar9 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
              System_Collections_Generic_Dictionary_object__float___set_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,__this_01,
                         fVar10 - fVar9,
                         (MethodInfo_4AB5450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_set_Item
                        );
              pSVar4 = (__this->fields)._currentScheduleWait;
              if (pSVar4 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0) {
                ThrowNullReferenceException();
              }
              fVar10 = System_Collections_Generic_Dictionary_object__float___get_Item
                                 ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,__this_01,
                                  (MethodInfo_4AB53E0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_get_Item
                                 );
              if (fVar10 <= 0.0) {
                if ((Weather_WeatherScheduleRunner_o *)__this_01 == (Weather_WeatherScheduleRunner_o *)0x0) {
                  ThrowNullReferenceException();
                }
                Weather_WeatherScheduleRunner__ConsumeSchedule
                          ((Weather_WeatherScheduleRunner_o *)__this_01,(MethodInfo *)0x0);
              }
            }
            pMVar8 = MethodInfo_System_Collections_Generic_List_Enumerator_WeatherScheduleRunner_Dispose;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (&SStack_48,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_WeatherScheduleRunner_Dispose);
            fVar10 = (__this->fields)._currentSyncWait;
            fVar9 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
            fVar10 = fVar10 - fVar9;
            (__this->fields)._currentSyncWait = fVar10;
            if (0.0 < fVar10) {
              return;
            }
            if ((__this->fields)._needSync == false) {
              return;
            }
            Weather_WeatherManager__LerpCurrentWeatherToTarget(__this,pMVar8);
            Weather_WeatherManager__SyncWeather(__this,pMVar8);
            (__this->fields)._needSync = false;
            (__this->fields)._currentSyncWait = 5.0;
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$SyncWeather
// il2cpp: void Weather_WeatherManager__SyncWeather (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x585c160
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585c1e9: jmp 0x585c4e3

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
  MethodInfo *in_RCX;
  float local_2c;
  
  if (Il2CppMethodInitialized_07545098 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SetWeatherRPC");
    Il2CppMethodInitialized_07545098 = '\x01';
  }
  Weather_WeatherManager__ApplyCurrentWeather(__this,false,true,in_RCX);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
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
         pIVar7 == (Il2CppObject *)0x0)) goto label_0585c4fb;
      if ((int)parameters->max_length == 0) goto label_0585c4f6;
      parameters->m_Items[0] = &pSVar6->obj;
      Il2CppCodeGenWriteBarrier(parameters->m_Items);
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
             pIVar7 == (Il2CppObject *)0x0)) goto label_0585c4fb;
          if ((parameters->max_length & 0xfffffffe) == 0) goto label_0585c4f6;
          parameters->m_Items[1] = &pSVar6->obj;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
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
label_0585c4fb:
                pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
              }
              if (2 < (uint)parameters->max_length) {
                parameters->m_Items[2] = &pSVar6->obj;
                Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
                pSVar3 = (__this->fields)._targetWeatherStartTimes;
                if ((pSVar3 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) &&
                   (pIVar7 = il2cpp_vm_Object_IsInst
                                       ((Il2CppObject *)pSVar3,(((parameters->obj).klass)->_1).element_class),
                   pIVar7 == (Il2CppObject *)0x0)) goto label_0585c4fb;
                if ((parameters->max_length & 0xfffffffc) != 0) {
                  parameters->m_Items[3] = (Il2CppObject *)pSVar3;
                  Il2CppCodeGenWriteBarrier(parameters->m_Items + 3);
                  pSVar3 = (__this->fields)._targetWeatherEndTimes;
                  if ((pSVar3 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) &&
                     (pIVar7 = il2cpp_vm_Object_IsInst
                                         ((Il2CppObject *)pSVar3,(((parameters->obj).klass)->_1).element_class
                                         ), pIVar7 == (Il2CppObject *)0x0)) goto label_0585c4fb;
                  if (4 < (uint)parameters->max_length) {
                    parameters->m_Items[4] = (Il2CppObject *)pSVar3;
                    Il2CppCodeGenWriteBarrier(parameters->m_Items + 4);
                    local_2c = (__this->fields)._currentTime;
                    pIVar7 = il2cpp_vm_Object_Box(g_data_07556740,&local_2c);
                    if ((pIVar7 != (Il2CppObject *)0x0) &&
                       (pIVar8 = il2cpp_vm_Object_IsInst(pIVar7,(((parameters->obj).klass)->_1).element_class)
                       , pIVar8 == (Il2CppObject *)0x0)) goto label_0585c4fb;
                    if (5 < (uint)parameters->max_length) {
                      parameters->m_Items[5] = pIVar7;
                      Il2CppCodeGenWriteBarrier(parameters->m_Items + 5);
                      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
                        Photon_Pun_PhotonView__RPC
                                  (__this_00,"SetWeatherRPC",1,parameters,(MethodInfo *)0x0);
                        return;
                      }
                      goto label_0585c4f1;
                    }
                  }
                }
              }
label_0585c4f6:
              ThrowIndexOutOfRangeException();
            }
          }
        }
      }
    }
  }
label_0585c4f1:
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$OnPlayerEnteredRoom
// il2cpp: void Weather_WeatherManager__OnPlayerEnteredRoom (Weather_WeatherManager_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x585dc90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585dcc8: jmp 0x585e00b

void Weather_WeatherManager__OnPlayerEnteredRoom
               (Weather_WeatherManager_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  Settings_WeatherSet_o *pSVar1;
  Utility_Algorithms_CompressionAlgorithm_o *pUVar2;
  System_Collections_Generic_Dictionary_int__float__o *pSVar3;
  bool bVar4;
  undefined8 in_RAX;
  System_Object_array *parameters;
  System_String_o *pSVar5;
  System_Byte_array *pSVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *pIVar8;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_07545099 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SetWeatherRPC");
    Il2CppMethodInitialized_07545099 = '\x01';
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_0585dcbd;
label_0585dd23:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_0585dd23;
label_0585dcbd:
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
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
         pIVar7 == (Il2CppObject *)0x0)) goto label_0585e024;
      if ((int)parameters->max_length == 0) goto label_0585e01f;
      parameters->m_Items[0] = &pSVar6->obj;
      Il2CppCodeGenWriteBarrier(parameters->m_Items);
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
             pIVar7 == (Il2CppObject *)0x0)) goto label_0585e024;
          if ((parameters->max_length & 0xfffffffe) == 0) goto label_0585e01f;
          parameters->m_Items[1] = &pSVar6->obj;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
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
label_0585e024:
                pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
              }
              if (2 < (uint)parameters->max_length) {
                parameters->m_Items[2] = &pSVar6->obj;
                Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
                pSVar3 = (__this->fields)._targetWeatherStartTimes;
                if ((pSVar3 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) &&
                   (pIVar7 = il2cpp_vm_Object_IsInst
                                       ((Il2CppObject *)pSVar3,(((parameters->obj).klass)->_1).element_class),
                   pIVar7 == (Il2CppObject *)0x0)) goto label_0585e024;
                if ((parameters->max_length & 0xfffffffc) != 0) {
                  parameters->m_Items[3] = (Il2CppObject *)pSVar3;
                  Il2CppCodeGenWriteBarrier(parameters->m_Items + 3);
                  pSVar3 = (__this->fields)._targetWeatherEndTimes;
                  if ((pSVar3 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) &&
                     (pIVar7 = il2cpp_vm_Object_IsInst
                                         ((Il2CppObject *)pSVar3,(((parameters->obj).klass)->_1).element_class
                                         ), pIVar7 == (Il2CppObject *)0x0)) goto label_0585e024;
                  if (4 < (uint)parameters->max_length) {
                    parameters->m_Items[4] = (Il2CppObject *)pSVar3;
                    Il2CppCodeGenWriteBarrier(parameters->m_Items + 4);
                    uStack_38 = CONCAT44((__this->fields)._currentTime,(undefined4)uStack_38);
                    pIVar7 = il2cpp_vm_Object_Box(g_data_07556740,(void *)((long)&uStack_38 + 4));
                    if ((pIVar7 != (Il2CppObject *)0x0) &&
                       (pIVar8 = il2cpp_vm_Object_IsInst(pIVar7,(((parameters->obj).klass)->_1).element_class)
                       , pIVar8 == (Il2CppObject *)0x0)) goto label_0585e024;
                    if (5 < (uint)parameters->max_length) {
                      parameters->m_Items[5] = pIVar7;
                      Il2CppCodeGenWriteBarrier(parameters->m_Items + 5);
                      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
                        Photon_Pun_PhotonView__RPC_56e5850
                                  (__this_00,"SetWeatherRPC",player,parameters,(MethodInfo *)0x0);
                        return;
                      }
                      goto label_0585e01a;
                    }
                  }
                }
              }
label_0585e01f:
              ThrowIndexOutOfRangeException();
            }
          }
        }
      }
    }
  }
label_0585e01a:
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$LerpCurrentWeatherToTarget
// il2cpp: void Weather_WeatherManager__LerpCurrentWeatherToTarget (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x585d0a0
// eh: try 0x585d2d5..0x585db36 -> pad 0x585dbcc (+61 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x585dbe6..0x585dbeb -> pad 0x585dc0a cleanup
// eh: try 0x585dc0d..0x585dc17 -> pad 0x585dc7c catch (...) [compiler noexcept guard]
// eh: try 0x585dc3d..0x585dc42 -> pad 0x585dc67 cleanup
// eh: try 0x585dc6a..0x585dc74 -> pad 0x585dc7c catch (...) [compiler noexcept guard]
// asm: 92 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585d9c9: nop dword ptr [rax]
// asm:   0x585db36: jmp 0x585dc25
// asm:   0x585db3b: jmp 0x585dc25
// asm:   0x585db40: jmp 0x585dc25
// asm:   0x585db45: jmp 0x585dc25
// asm:   0x585db4a: jmp 0x585dc25
// asm:   0x585db4f: jmp 0x585dc25
// asm:   0x585db54: jmp 0x585dc25
// asm:   0x585db59: jmp 0x585dc25
// asm:   0x585db5e: jmp 0x585dc25
// asm:   0x585db63: jmp 0x585dc25
// asm:   0x585db68: jmp 0x585dc25
// asm:   0x585db6d: jmp 0x585dc25
// asm:   0x585db72: jmp 0x585dc25
// asm:   0x585db77: jmp 0x585dc25
// asm:   0x585db7c: jmp 0x585dc25
// asm:   0x585db81: jmp 0x585dc25
// asm:   0x585db86: jmp 0x585dc25
// asm:   0x585db8b: jmp 0x585dc25
// asm:   0x585db90: jmp 0x585dc25
// asm:   0x585db95: jmp 0x585dc25
// asm:   0x585db9a: jmp 0x585dc25
// asm:   0x585db9f: jmp 0x585dc25
// asm:   0x585dba4: jmp 0x585dc25
// asm:   0x585dba6: jmp 0x585dc25
// asm:   0x585dba8: jmp 0x585dc25
// asm:   0x585dbaa: jmp 0x585dc25
// asm:   0x585dbac: jmp 0x585dc25
// asm:   0x585dbae: jmp 0x585dc25
// asm:   0x585dbb0: jmp 0x585dc25
// asm:   0x585dbb2: jmp 0x585dc25
// asm:   0x585dbb4: jmp 0x585dc25
// asm:   0x585dbb6: jmp 0x585dc25
// asm:   0x585dbb8: jmp 0x585dc25
// asm:   0x585dbba: jmp 0x585dc25
// asm:   0x585dbbc: jmp 0x585dc25
// asm:   0x585dbbe: jmp 0x585dc25
// asm:   0x585dbc0: jmp 0x585dc25
// asm:   0x585dbc2: jmp 0x585dc25
// asm:   0x585dbc4: jmp 0x585dbce
// asm:   0x585dbc6: jmp 0x585dbce
// asm:   0x585dbc8: jmp 0x585dbce
// asm:   0x585dbca: jmp 0x585dbce
// asm:   0x585dbcc: jmp 0x585dc25
// asm:   0x585dbce: mov rbx, rax
// asm:   0x585dbd1: cmp edx, 1
// asm:   0x585dbd4: jne 0x585dc0d
// asm:   0x585dbd6: mov rdi, rbx
// asm:   0x585dbd9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x585dbde: mov rbx, qword ptr [rax]
// asm:   0x585dbe1: mov qword ptr [rsp + 0x10], rbx
// asm:   0x585dbe6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x585dbeb: lea rax, [rip + 0x1a30606]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x585dbf2: mov rsi, qword ptr [rax]
// asm:   0x585dbf5: lea rdi, [rsp + 0x50]
// asm:   0x585dbfa: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x585dbff: test rbx, rbx
// asm:   0x585dc02: je 0x585da21
// asm:   0x585dc08: jmp 0x585dc5f
// asm:   0x585dc0a: mov rbx, rax
// asm:   0x585dc0d: lea rdi, [rsp + 0x10]
// asm:   0x585dc12: call 0x2fce900  ; il2cpp_runtime_helper_02fce900()
// asm:   0x585dc17: jmp 0x585dc74
// asm:   0x585dc19: jmp 0x585dc25
// asm:   0x585dc1b: jmp 0x585dc25
// asm:   0x585dc1d: jmp 0x585dc25
// asm:   0x585dc1f: jmp 0x585dc25
// asm:   0x585dc21: jmp 0x585dc25
// asm:   0x585dc23: jmp 0x585dc25
// asm:   0x585dc25: mov rbx, rax
// asm:   0x585dc28: cmp edx, 1
// asm:   0x585dc2b: jne 0x585dc6a
// asm:   0x585dc2d: mov rdi, rbx
// asm:   0x585dc30: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x585dc35: mov rbx, qword ptr [rax]
// asm:   0x585dc38: mov qword ptr [rsp + 0x10], rbx
// asm:   0x585dc3d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x585dc42: lea rax, [rip + 0x1a31da7]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_float_Dispose
// asm:   0x585dc49: mov rsi, qword ptr [rax]
// asm:   0x585dc4c: lea rdi, [rsp + 0x30]
// asm:   0x585dc51: call 0x4da4000  ; System_Collections_Generic_Dictionary_Enumerator_int__float___Dispose()
// asm:   0x585dc56: test rbx, rbx
// asm:   0x585dc59: je 0x585d985
// asm:   0x585dc5f: mov rdi, rbx
// asm:   0x585dc62: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x585dc67: mov rbx, rax
// asm:   0x585dc6a: lea rdi, [rsp + 0x10]
// asm:   0x585dc6f: call 0x2fce8d0  ; il2cpp_runtime_helper_02fce8d0()
// asm:   0x585dc74: mov rdi, rbx
// asm:   0x585dc77: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x585dc7c: mov rdi, rax
// asm:   0x585dc7f: call 0x2ab61e0  ; __clang_call_terminate()

void Weather_WeatherManager__LerpCurrentWeatherToTarget(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  System_Collections_Generic_List_int__o *pSVar5;
  System_Collections_Generic_Dictionary_int__float__o *pSVar6;
  System_Int32_array *pSVar7;
  System_String_array *pSVar8;
  Settings_WeatherSet_o *pSVar9;
  System_Collections_Specialized_OrderedDictionary_o *pSVar10;
  System_String_o *key;
  Settings_StringSetting_o *pSVar11;
  MethodInfo *pMVar12;
  System_Collections_Generic_List_T__o *__this_00;
  System_Object_array *pSVar13;
  uint item;
  int32_t key_00;
  bool bVar14;
  Il2CppObject *pIVar15;
  Settings_TypedSetting_Vector3__o *__this_01;
  Il2CppObject *pIVar16;
  Utility_Color255_o *value;
  UnityEngine_Material_o *__this_02;
  Weather_WeatherManager_o *__this_03;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Vector3_o value_00;
  undefined1 local_88 [16];
  Il2CppObject *local_78;
  Il2CppObject *pIStack_70;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  undefined8 local_58;
  Il2CppObject *pIStack_50;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_0754509a == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_0754509a = '\x01';
  }
  local_58 = (Il2CppObject *)0x0;
  pIStack_50 = (Il2CppObject *)0x0;
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar5 = (__this->fields)._finishedLerps;
  if (pSVar5 != (System_Collections_Generic_List_int__o *)0x0) {
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar5->fields)._size = 0;
    pSVar6 = (__this->fields)._targetWeatherEndTimes;
    if (pSVar6 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
      System_Collections_Generic_Dictionary_int__float___GetEnumerator
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_88,pSVar6,
                 (MethodInfo_4A178B0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_int_float_GetEnumerator);
      local_58 = local_78;
      pIStack_50 = pIStack_70;
      local_68 = (undefined1  [8])local_88._0_8_;
      puStack_60 = (undefined1 *)local_88._8_8_;
      local_88._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_88._8_8_ = local_68;
      while (bVar14 = System_Collections_Generic_Dictionary_Enumerator_int__float___MoveNext
                                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_68,
                                 (MethodInfo_4CA3EE0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_float_MoveNext
                                ), pMVar12 = MethodInfo_System_Collections_Generic_List_int_Add, bVar14) {
        item = (uint)local_58;
        fVar21 = local_58._4_4_;
        if (local_58._4_4_ <= (__this->fields)._currentTime) {
          pSVar5 = (__this->fields)._finishedLerps;
          if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) {
label_0585da7f:
            ThrowNullReferenceException();
          }
          piVar1 = &(pSVar5->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar7 = (pSVar5->fields)._items;
          if (pSVar7 == (System_Int32_array *)0x0) goto label_0585da7f;
          uVar4 = (pSVar5->fields)._size;
          if (uVar4 < (uint)pSVar7->max_length) {
            (pSVar5->fields)._size = uVar4 + 1;
            pSVar7->m_Items[(int)uVar4] = (uint)local_58;
            fVar17 = 1.0;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize
                      (pSVar5,(uint)local_58,(MethodInfo_3916AC0 *)pMVar12->klass->rgctx_data[0xe].method);
            fVar17 = 1.0;
          }
        }
        else {
          pSVar6 = (__this->fields)._targetWeatherStartTimes;
          if (pSVar6 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
            ThrowNullReferenceException();
          }
          fVar17 = System_Collections_Generic_Dictionary_int__float___get_Item
                             (pSVar6,(uint)local_58,
                              (MethodInfo_4A173E0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_float_get_Item);
          fVar21 = fVar21 - fVar17;
          if (fVar21 <= 1.0) {
            fVar21 = 1.0;
          }
          fVar21 = ((__this->fields)._currentTime - fVar17) / fVar21;
          fVar17 = 1.0;
          if (fVar21 <= 1.0) {
            fVar17 = fVar21;
          }
          fVar17 = (float)(-(uint)(0.0 <= fVar21) & (uint)fVar17);
        }
        if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
        }
        pSVar8 = TypeInfo_Weather_WeatherManager->static_fields->EffectNames;
        if (pSVar8 == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        if ((uint)pSVar8->max_length <= item) {
          ThrowIndexOutOfRangeException();
        }
        pSVar9 = (__this->fields)._startWeather;
        if (pSVar9 == (Settings_WeatherSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar10 = (pSVar9->fields).Settings;
        if (pSVar10 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
          ThrowNullReferenceException();
        }
        key = pSVar8->m_Items[(int)item];
        pIVar15 = System_Collections_Specialized_OrderedDictionary__get_Item
                            (pSVar10,(Il2CppObject *)key,(MethodInfo *)0x0);
        if (pIVar15 != (Il2CppObject *)0x0) {
          bVar3 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
          if (((pIVar15->klass->_2).typeHierarchyDepth < bVar3) ||
             ((pIVar15->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar15);
          }
        }
        pSVar9 = (__this->fields)._currentWeather;
        if (pSVar9 == (Settings_WeatherSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar10 = (pSVar9->fields).Settings;
        if (pSVar10 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_01 = (Settings_TypedSetting_Vector3__o *)
                    System_Collections_Specialized_OrderedDictionary__get_Item
                              (pSVar10,(Il2CppObject *)key,(MethodInfo *)0x0);
        if (__this_01 != (Settings_TypedSetting_Vector3__o *)0x0) {
          bVar3 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
          if (((__this_01->klass->_2).typeHierarchyDepth < bVar3) ||
             ((__this_01->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_01);
          }
        }
        pSVar9 = (__this->fields)._targetWeather;
        if (pSVar9 == (Settings_WeatherSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_03 = (Weather_WeatherManager_o *)(pSVar9->fields).Settings;
        if (__this_03 == (Weather_WeatherManager_o *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar16 = System_Collections_Specialized_OrderedDictionary__get_Item
                            ((System_Collections_Specialized_OrderedDictionary_o *)__this_03,
                             (Il2CppObject *)key,(MethodInfo *)0x0);
        if (pIVar16 != (Il2CppObject *)0x0) {
          bVar3 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
          if (((pIVar16->klass->_2).typeHierarchyDepth < bVar3) ||
             ((pIVar16->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar16);
          }
        }
        switch(item) {
        case 1:
        case 4:
        case 6:
        case 7:
        case 9:
          if (pIVar15 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          bVar3 = (TypeInfo_Settings_ColorSetting->_2).typeHierarchyDepth;
          if (((pIVar15->klass->_2).typeHierarchyDepth < bVar3) ||
             ((pIVar15->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_ColorSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar15);
          }
          if (pIVar16 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (((pIVar16->klass->_2).typeHierarchyDepth < bVar3) ||
             ((pIVar16->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_ColorSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar16);
          }
          value = Utility_Color255__Lerp
                            ((Utility_Color255_o *)pIVar15[2].klass,(Utility_Color255_o *)pIVar16[2].klass,
                             fVar17,(MethodInfo *)0x0);
          if (__this_01 == (Settings_TypedSetting_Vector3__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar3 = (TypeInfo_Settings_ColorSetting->_2).typeHierarchyDepth;
          if (((__this_01->klass->_2).typeHierarchyDepth < bVar3) ||
             ((__this_01->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_ColorSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_01);
          }
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)value,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
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
          if (pIVar15 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          bVar3 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
          if (((pIVar15->klass->_2).typeHierarchyDepth < bVar3) ||
             ((pIVar15->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar15);
          }
          if (pIVar16 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (((pIVar16->klass->_2).typeHierarchyDepth < bVar3) ||
             ((pIVar16->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar16);
          }
          if (__this_01 == (Settings_TypedSetting_Vector3__o *)0x0) {
            ThrowNullReferenceException();
          }
          if (((__this_01->klass->_2).typeHierarchyDepth < bVar3) ||
             ((__this_01->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_01);
          }
          fVar21 = *(float *)((long)&pIVar15[1].monitor + 4);
          fVar18 = 0.0;
          if (0.0 <= fVar17) {
            fVar18 = fVar17;
          }
          Settings_TypedSetting_float___set_Value
                    ((Settings_TypedSetting_float__o *)__this_01,
                     (*(float *)((long)&pIVar16[1].monitor + 4) - fVar21) * fVar18 + fVar21,
                     (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
          break;
        case 3:
        case 0xe:
          if (pIVar15 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          bVar3 = (TypeInfo_Settings_Vector3Setting->_2).typeHierarchyDepth;
          if (((pIVar15->klass->_2).typeHierarchyDepth < bVar3) ||
             ((pIVar15->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_Vector3Setting)) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar15);
          }
          if (pIVar16 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (((pIVar16->klass->_2).typeHierarchyDepth < bVar3) ||
             ((pIVar16->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_Vector3Setting)) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar16);
          }
          if (__this_01 == (Settings_TypedSetting_Vector3__o *)0x0) {
            ThrowNullReferenceException();
          }
          if (((__this_01->klass->_2).typeHierarchyDepth < bVar3) ||
             ((__this_01->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_Vector3Setting)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_01);
          }
          uVar2 = *(undefined8 *)((long)&pIVar15[2].klass + 4);
          fVar19 = (float)uVar2;
          fVar20 = (float)((ulong)uVar2 >> 0x20);
          fVar21 = *(float *)((long)&pIVar15[2].monitor + 4);
          uVar2 = *(undefined8 *)((long)&pIVar16[2].klass + 4);
          fVar18 = 0.0;
          if (0.0 <= fVar17) {
            fVar18 = fVar17;
          }
          value_00.fields.x = fVar18 * ((float)uVar2 - fVar19) + fVar19;
          value_00.fields.y = fVar18 * ((float)((ulong)uVar2 >> 0x20) - fVar20) + fVar20;
          value_00.fields.z = (*(float *)((long)&pIVar16[2].monitor + 4) - fVar21) * fVar18 + fVar21;
          Settings_TypedSetting_Vector3___set_Value
                    (__this_01,value_00,
                     (MethodInfo_42DA4D0 *)MethodInfo_Settings_TypedSetting_Vector3_set_Value);
          break;
        case 5:
          pSVar9 = (__this->fields)._currentWeather;
          if (pSVar9 == (Settings_WeatherSet_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar11 = (pSVar9->fields).Skybox;
          if (pSVar11 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar9 = (__this->fields)._targetWeather;
          if (pSVar9 == (Settings_WeatherSet_o *)0x0) {
            ThrowNullReferenceException();
          }
          pMVar12 = (MethodInfo *)(pSVar9->fields).Skybox;
          if (pMVar12 == (MethodInfo *)0x0) {
            ThrowNullReferenceException();
          }
          __this_02 = Weather_WeatherManager__GetBlendedSkybox
                                (__this_03,(pSVar11->fields)._value,(System_String_o *)pMVar12->klass,pMVar12)
          ;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar14 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if (bVar14) {
            if (1.0 <= fVar17) {
              if (pIVar16 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              bVar3 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
              if (((pIVar16->klass->_2).typeHierarchyDepth < bVar3) ||
                 ((pIVar16->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
                  (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                il2cpp_codegen_raise_invalid_cast_exception(pIVar16);
              }
              if (__this_01 == (Settings_TypedSetting_Vector3__o *)0x0) {
                ThrowNullReferenceException();
              }
              if (((__this_01->klass->_2).typeHierarchyDepth < bVar3) ||
                 ((__this_01->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
                  (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                il2cpp_codegen_raise_invalid_cast_exception(__this_01);
              }
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)pIVar16[2].klass,
                         (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
            }
            if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
            }
            if (Il2CppMethodInitialized_0754508c == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&"_Blend");
              Il2CppMethodInitialized_0754508c = '\x01';
            }
            if (__this_02 == (UnityEngine_Material_o *)0x0) {
              ThrowNullReferenceException();
            }
            UnityEngine_Material__SetFloat(__this_02,"_Blend",fVar17,(MethodInfo *)0x0);
          }
        }
        pMVar12 = MethodInfo_System_Collections_Generic_List_WeatherEffect_Add;
        __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields)._needApply;
        if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) {
label_0585da30:
          ThrowNullReferenceException();
        }
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar13 = (__this_00->fields)._items;
        if (pSVar13 == (System_Object_array *)0x0) goto label_0585da30;
        uVar4 = (__this_00->fields)._size;
        if (uVar4 < (uint)pSVar13->max_length) {
          (__this_00->fields)._size = uVar4 + 1;
          *(uint *)((long)pSVar13->m_Items + (long)(int)uVar4 * 4) = item;
        }
        else {
          System_Collections_Generic_List_Int32Enum___AddWithResize
                    (__this_00,item,(MethodInfo_3919BE0 *)pMVar12->klass->rgctx_data[0xe].method);
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_int__float___Dispose
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_68,
                 (MethodInfo_4CA4000 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_float_Dispose);
      pSVar5 = (__this->fields)._finishedLerps;
      if (pSVar5 != (System_Collections_Generic_List_int__o *)0x0) {
        System_Collections_Generic_List_int___GetEnumerator
                  (&local_48,pSVar5,
                   (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
        local_88._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_88._8_8_ = &local_48;
        while( true ) {
          bVar14 = System_Collections_Generic_List_Enumerator_int___MoveNext
                             ((System_Collections_Generic_List_Enumerator_int__o *)&local_48,
                              (MethodInfo_4C3B4A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
          if (!bVar14) {
            System_Collections_Generic_List_Enumerator_int___Dispose
                      ((System_Collections_Generic_List_Enumerator_int__o *)&local_48,
                       (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
                      );
            return;
          }
          pSVar6 = (__this->fields)._targetWeatherStartTimes;
          if (pSVar6 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) break;
          key_00 = (int32_t)local_48.fields._current;
          System_Collections_Generic_Dictionary_int__float___Remove
                    (pSVar6,(int32_t)local_48.fields._current,
                     (MethodInfo_4A18A90 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_Remove);
          pSVar6 = (__this->fields)._targetWeatherEndTimes;
          if (pSVar6 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_int__float___Remove
                    (pSVar6,key_00,
                     (MethodInfo_4A18A90 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_Remove);
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$ApplyCurrentWeather
// il2cpp: void Weather_WeatherManager__ApplyCurrentWeather (Weather_WeatherManager_o* __this, bool firstStart, bool applyAll, const MethodInfo* method);
// 0x585aa10
// eh: try 0x585acfa..0x585bbf7 -> pad 0x585bdb4 (+144 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x585bbfd..0x585bc31 -> pad 0x585be0d catch (...) [compiler noexcept guard]
// eh: try 0x585bdce..0x585bdd3 -> pad 0x585bdf8 cleanup
// eh: try 0x585bdfb..0x585be05 -> pad 0x585be0d catch (...) [compiler noexcept guard]
// asm: 358 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585b543: lea rax, [rip + 0x1a32de6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Light_Dispose
// asm:   0x585b54a: mov rsi, qword ptr [rax]
// asm:   0x585b54d: mov rdi, r12
// asm:   0x585b550: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x585b555: test rbp, rbp
// asm:   0x585b558: jne 0x585baf5
// asm:   0x585b55e: test bl, bl
// asm:   0x585b560: je 0x585acf0
// asm:   0x585b566: lea rax, [rip + 0x1a1f423]  ; TypeInfo_Map_MapLoader
// asm:   0x585b56d: mov rdi, qword ptr [rax]
// asm:   0x585b570: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x585b577: jne 0x585b588
// asm:   0x585b579: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x585b57e: lea rax, [rip + 0x1a1f40b]  ; TypeInfo_Map_MapLoader
// asm:   0x585b585: mov rdi, qword ptr [rax]
// asm:   0x585b588: mov rax, qword ptr [rdi + 0xb8]
// asm:   0x585b58f: mov rsi, qword ptr [rax + 0x30]
// asm:   0x585b593: test rsi, rsi
// asm:   0x585b596: je 0x585bae6
// asm:   0x585b59c: lea rax, [rip + 0x1a39ef5]  ; MethodInfo_System_Collections_Generic_List_Light_GetEnumerator
// asm:   0x585b5a3: mov rdx, qword ptr [rax]
// asm:   0x585b5a6: lea rdi, [rsp + 8]
// asm:   0x585b5ab: call 0x3a5e050  ; System_Collections_Generic_List_object___GetEnumerator()
// asm:   0x585b5b0: mov rax, qword ptr [rsp + 0x18]
// asm:   0x585b5b5: mov qword ptr [rsp + 0x30], rax
// asm:   0x585b5ba: movups xmm0, xmmword ptr [rsp + 8]
// asm:   0x585b5bf: movaps xmmword ptr [rsp + 0x20], xmm0
// asm:   0x585b5c4: mov qword ptr [rsp + 8], 0
// asm:   0x585b5cd: mov qword ptr [rsp + 0x10], r12
// asm:   0x585b5d2: nop word ptr cs:[rax + rax]
// asm:   0x585b5e0: mov rsi, qword ptr [r13]
// asm:   0x585b5e4: mov rdi, r12
// asm:   0x585b5e7: call 0x4d45c50  ; System_Collections_Generic_List_Enumerator_object___MoveNext()
// asm:   0x585b5ec: test al, al
// asm:   0x585b5ee: je 0x585b626
// asm:   0x585b5f0: mov rax, qword ptr [r15 + 0x48]
// asm:   0x585b5f4: test rax, rax
// asm:   0x585b5f7: je 0x585b95e
// asm:   0x585b5fd: mov rax, qword ptr [rax + 0x60]
// asm:   0x585b601: test rax, rax
// asm:   0x585b604: je 0x585b968
// asm:   0x585b60a: mov rdi, qword ptr [rsp + 0x30]
// asm:   0x585b60f: test rdi, rdi
// asm:   0x585b612: je 0x585b954
// asm:   0x585b618: movss xmm0, dword ptr [rax + 0x1c]
// asm:   0x585b61d: xor esi, esi
// asm:   0x585b61f: call 0x69e3030  ; UnityEngine_Light__set_intensity()
// asm:   0x585b624: jmp 0x585b5e0
// asm:   0x585b626: xor ebp, ebp
// asm:   0x585b628: xor ebx, ebx
// asm:   0x585b62a: lea rax, [rip + 0x1a32cff]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Light_Dispose
// asm:   0x585b631: mov rsi, qword ptr [rax]
// asm:   0x585b634: mov rdi, r12
// asm:   0x585b637: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x585b63c: test rbp, rbp
// asm:   0x585b63f: jne 0x585bade
// asm:   0x585b645: test bl, bl
// asm:   0x585b647: je 0x585acf0
// asm:   0x585b64d: lea rax, [rip + 0x1a1f33c]  ; TypeInfo_Map_MapLoader
// asm:   0x585b654: mov rdi, qword ptr [rax]
// asm:   0x585b657: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x585b65e: jne 0x585b66f
// asm:   0x585b660: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x585b665: lea rax, [rip + 0x1a1f324]  ; TypeInfo_Map_MapLoader
// asm:   0x585b66c: mov rdi, qword ptr [rax]
// asm:   0x585b66f: mov rax, qword ptr [rdi + 0xb8]
// asm:   0x585b676: mov rsi, qword ptr [rax + 0x30]
// asm:   0x585b67a: test rsi, rsi
// asm:   0x585b67d: je 0x585bad1
// asm:   0x585b683: lea rax, [rip + 0x1a39e0e]  ; MethodInfo_System_Collections_Generic_List_Light_GetEnumerator
// asm:   0x585b68a: mov rdx, qword ptr [rax]
// asm:   0x585b68d: lea rdi, [rsp + 8]
// asm:   0x585b692: call 0x3a5e050  ; System_Collections_Generic_List_object___GetEnumerator()
// asm:   0x585b697: mov rax, qword ptr [rsp + 0x18]
// asm:   0x585b69c: mov qword ptr [rsp + 0x30], rax
// asm:   0x585b6a1: movups xmm0, xmmword ptr [rsp + 8]
// asm:   0x585b6a6: movaps xmmword ptr [rsp + 0x20], xmm0
// asm:   0x585b6ab: mov qword ptr [rsp + 8], 0
// asm:   0x585b6b4: mov qword ptr [rsp + 0x10], r12
// asm:   0x585b6b9: nop dword ptr [rax]
// asm:   0x585b6c0: mov rsi, qword ptr [r13]
// asm:   0x585b6c4: mov rdi, r12
// asm:   0x585b6c7: call 0x4d45c50  ; System_Collections_Generic_List_Enumerator_object___MoveNext()
// asm:   0x585b6cc: test al, al
// asm:   0x585b6ce: je 0x585b757
// asm:   0x585b6d4: mov rdi, qword ptr [rsp + 0x30]
// asm:   0x585b6d9: test rdi, rdi
// asm:   0x585b6dc: je 0x585b940
// asm:   0x585b6e2: xor esi, esi
// asm:   0x585b6e4: call 0x6a15190  ; UnityEngine_Component__get_transform()
// asm:   0x585b6e9: mov rbp, rax
// asm:   0x585b6ec: mov rax, qword ptr [r15 + 0x48]
// asm:   0x585b6f0: test rax, rax
// asm:   0x585b6f3: je 0x585b94a
// asm:   0x585b6f9: mov rax, qword ptr [rax + 0x68]
// asm:   0x585b6fd: test rax, rax
// asm:   0x585b700: je 0x585b92c
// asm:   0x585b706: movsd xmm0, qword ptr [rax + 0x24]
// asm:   0x585b70b: mulps xmm0, xmmword ptr [rip - 0x4853d92]
// asm:   0x585b712: movss xmm1, dword ptr [rax + 0x2c]
// asm:   0x585b717: mulss xmm1, dword ptr [rip - 0x4899ba3]
// asm:   0x585b71f: movlps qword ptr [rsp + 0x88], xmm0
// asm:   0x585b727: movss dword ptr [rsp + 0x90], xmm1
// asm:   0x585b730: lea rdi, [rsp + 0x88]
// asm:   0x585b738: xor esi, esi
// asm:   0x585b73a: call 0x6a050e0  ; UnityEngine_Quaternion__Internal_FromEulerRad()
// asm:   0x585b73f: test rbp, rbp
// asm:   0x585b742: je 0x585b936
// asm:   0x585b748: mov rdi, rbp
// asm:   0x585b74b: xor esi, esi
// asm:   0x585b74d: call 0x6a2c8c0  ; UnityEngine_Transform__set_rotation()
// asm:   0x585b752: jmp 0x585b6c0
// asm:   0x585b757: xor ebp, ebp
// asm:   0x585b759: xor ebx, ebx
// asm:   0x585b75b: lea rax, [rip + 0x1a32bce]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Light_Dispose
// asm:   0x585b762: mov rsi, qword ptr [rax]
// asm:   0x585b765: mov rdi, r12
// asm:   0x585b768: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x585b76d: test rbp, rbp
// asm:   0x585b770: jne 0x585bad6
// asm:   0x585b776: test bl, bl
// asm:   0x585b778: je 0x585acf0
// asm:   0x585b77e: mov rax, qword ptr [r15 + 0x48]
// asm:   0x585b782: test rax, rax
// asm:   0x585b785: je 0x585bac2
// asm:   0x585b78b: mov rax, qword ptr [rax + 0x70]
// asm:   0x585b78f: test rax, rax
// asm:   0x585b792: je 0x585bac7
// asm:   0x585b798: mov rdi, qword ptr [rax + 0x20]
// asm:   0x585b79c: test rdi, rdi
// asm:   0x585b79f: je 0x585bacc
// asm:   0x585b7a5: xor esi, esi
// asm:   0x585b7a7: call 0x5de77d0  ; Utility_Color255__ToColor()
// asm:   0x585b7ac: xor edi, edi
// asm:   0x585b7ae: call 0x69db020  ; UnityEngine_RenderSettings__set_ambientLight()
// asm:   0x585b7b3: jmp 0x585acf0
// asm:   0x585b92c: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x585b936: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x585b940: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x585b94a: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x585b954: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x585b95e: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x585b968: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x585b99a: jmp 0x585b9a6
// asm:   0x585b99c: jmp 0x585b9a6
// asm:   0x585b99e: jmp 0x585b9a6
// asm:   0x585b9a0: jmp 0x585b9a6
// asm:   0x585b9a2: jmp 0x585b9a6
// asm:   0x585b9a4: jmp 0x585b9a6
// asm:   0x585b9a6: mov rbx, rdx
// asm:   0x585b9a9: mov rbp, rax
// asm:   0x585b9ac: cmp ebx, 1
// asm:   0x585b9af: jne 0x585bc12
// asm:   0x585b9b5: mov rdi, rbp
// asm:   0x585b9b8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x585b9bd: mov rbp, qword ptr [rax]
// asm:   0x585b9c0: mov qword ptr [rsp + 8], rbp
// asm:   0x585b9c5: mov bl, 1
// asm:   0x585b9c7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x585b9cc: jmp 0x585b543
// asm:   0x585b9d1: jmp 0x585b9d9
// asm:   0x585b9d3: jmp 0x585b9d9
// asm:   0x585b9d5: jmp 0x585b9d9
// asm:   0x585b9d7: jmp 0x585b9d9
// asm:   0x585b9d9: mov rbx, rdx
// asm:   0x585b9dc: mov rbp, rax
// asm:   0x585b9df: cmp ebx, 1
// asm:   0x585b9e2: jne 0x585bbfd
// asm:   0x585b9e8: mov rdi, rbp
// asm:   0x585b9eb: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x585b9f0: mov rbp, qword ptr [rax]
// asm:   0x585b9f3: mov qword ptr [rsp + 8], rbp
// asm:   0x585b9f8: mov bl, 1
// asm:   0x585b9fa: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x585b9ff: jmp 0x585b62a
// asm:   0x585ba04: jmp 0x585ba12
// asm:   0x585ba06: jmp 0x585ba12
// asm:   0x585ba08: jmp 0x585ba12
// asm:   0x585ba0a: jmp 0x585ba12
// asm:   0x585ba0c: jmp 0x585ba12
// asm:   0x585ba0e: jmp 0x585ba12
// asm:   0x585ba10: jmp 0x585ba12
// asm:   0x585ba12: mov rbx, rdx
// asm:   0x585ba15: mov rbp, rax
// asm:   0x585ba18: cmp ebx, 1
// asm:   0x585ba1b: jne 0x585bc27
// asm:   0x585ba21: mov rdi, rbp
// asm:   0x585ba24: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x585ba29: mov rbp, qword ptr [rax]
// asm:   0x585ba2c: mov qword ptr [rsp + 8], rbp
// asm:   0x585ba31: mov bl, 1
// asm:   0x585ba33: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x585ba38: jmp 0x585b75b
// asm:   0x585bac2: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x585bac7: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x585bacc: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x585bad1: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x585bad6: mov rdi, rbp
// asm:   0x585bad9: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x585bade: mov rdi, rbp
// asm:   0x585bae1: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x585bae6: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x585baf5: mov rdi, rbp
// asm:   0x585baf8: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x585bbf7: mov rbx, rdx
// asm:   0x585bbfa: mov rbp, rax
// asm:   0x585bbfd: lea rdi, [rsp + 8]
// asm:   0x585bc02: call 0x2fce960  ; il2cpp_runtime_helper_02fce960()
// asm:   0x585bc07: jmp 0x585bdb9
// asm:   0x585bc0c: mov rbx, rdx
// asm:   0x585bc0f: mov rbp, rax
// asm:   0x585bc12: lea rdi, [rsp + 8]
// asm:   0x585bc17: call 0x2fce930  ; il2cpp_runtime_helper_02fce930()
// asm:   0x585bc1c: jmp 0x585bdb9
// asm:   0x585bc21: mov rbx, rdx
// asm:   0x585bc24: mov rbp, rax
// asm:   0x585bc27: lea rdi, [rsp + 8]
// asm:   0x585bc2c: call 0x2fce990  ; il2cpp_runtime_helper_02fce990()
// asm:   0x585bc31: jmp 0x585bdb9
// asm:   0x585bc36: jmp 0x585bdac
// asm:   0x585bc3b: jmp 0x585bdac
// asm:   0x585bc40: jmp 0x585bdac
// asm:   0x585bc45: jmp 0x585bdac
// asm:   0x585bc4a: jmp 0x585bdac
// asm:   0x585bc4f: jmp 0x585bdac
// asm:   0x585bc54: jmp 0x585bdac
// asm:   0x585bc59: jmp 0x585bdac
// asm:   0x585bc5e: jmp 0x585bdac
// asm:   0x585bc63: jmp 0x585bdac
// asm:   0x585bc68: jmp 0x585bdb4
// asm:   0x585bc6d: jmp 0x585bdac
// asm:   0x585bc72: jmp 0x585bdac
// asm:   0x585bc77: jmp 0x585bdac
// asm:   0x585bc7c: jmp 0x585bdac
// asm:   0x585bc81: jmp 0x585bdac
// asm:   0x585bc86: jmp 0x585bdac
// asm:   0x585bc8b: jmp 0x585bdac
// asm:   0x585bc90: jmp 0x585bdac
// asm:   0x585bc95: jmp 0x585bdac
// asm:   0x585bc9a: jmp 0x585bdac
// asm:   0x585bc9f: jmp 0x585bdac
// asm:   0x585bca4: jmp 0x585bdac
// asm:   0x585bca9: jmp 0x585bdac
// asm:   0x585bcae: jmp 0x585bdac
// asm:   0x585bcb3: jmp 0x585bdac
// asm:   0x585bcb8: jmp 0x585bdac
// asm:   0x585bcbd: jmp 0x585bdac
// asm:   0x585bcc2: jmp 0x585bdb4
// asm:   0x585bcc7: jmp 0x585bdac
// asm:   0x585bccc: jmp 0x585bdac
// asm:   0x585bcd1: jmp 0x585bdac
// asm:   0x585bcd6: jmp 0x585bdac
// asm:   0x585bcdb: jmp 0x585bdac
// asm:   0x585bce0: jmp 0x585bdac
// asm:   0x585bce5: jmp 0x585bdac
// asm:   0x585bcea: jmp 0x585bdb4
// asm:   0x585bcef: jmp 0x585bdac
// asm:   0x585bcf4: jmp 0x585bdac
// asm:   0x585bcf9: jmp 0x585bdac
// asm:   0x585bcfe: jmp 0x585bdb4
// asm:   0x585bd03: jmp 0x585bdac
// asm:   0x585bd08: jmp 0x585bdac
// asm:   0x585bd0d: jmp 0x585bdac
// asm:   0x585bd12: jmp 0x585bdb4
// asm:   0x585bd17: jmp 0x585bdac
// asm:   0x585bd1c: jmp 0x585bdac
// asm:   0x585bd21: jmp 0x585bdb4
// asm:   0x585bd26: jmp 0x585bdac
// asm:   0x585bd2b: jmp 0x585bdac
// asm:   0x585bd2d: jmp 0x585bdac
// asm:   0x585bd2f: jmp 0x585bdb4
// asm:   0x585bd34: jmp 0x585bdac
// asm:   0x585bd36: jmp 0x585bdac
// asm:   0x585bd38: jmp 0x585bdac
// asm:   0x585bd3a: jmp 0x585bdb4
// asm:   0x585bd3c: jmp 0x585bdb4
// asm:   0x585bd3e: jmp 0x585bdb4
// asm:   0x585bd40: jmp 0x585bdac
// asm:   0x585bd42: jmp 0x585bdac
// asm:   0x585bd44: jmp 0x585bdb4
// asm:   0x585bd46: jmp 0x585bdac
// asm:   0x585bd48: jmp 0x585bdb4
// asm:   0x585bd4a: jmp 0x585bdac
// asm:   0x585bd4c: jmp 0x585bdac
// asm:   0x585bd4e: jmp 0x585bdb4
// asm:   0x585bd50: jmp 0x585bdb4
// asm:   0x585bd52: jmp 0x585bdac
// asm:   0x585bd54: jmp 0x585bdb4
// asm:   0x585bd56: jmp 0x585bdac
// asm:   0x585bd58: jmp 0x585bdac
// asm:   0x585bd5a: jmp 0x585bdb4
// asm:   0x585bd5c: jmp 0x585bdac
// asm:   0x585bd5e: jmp 0x585bdac
// asm:   0x585bd60: jmp 0x585bdac
// asm:   0x585bd62: jmp 0x585bdac
// asm:   0x585bd64: jmp 0x585bdac
// asm:   0x585bd66: jmp 0x585bdac
// asm:   0x585bd68: jmp 0x585bdac
// asm:   0x585bd6a: jmp 0x585bdac
// asm:   0x585bd6c: jmp 0x585bdac
// asm:   0x585bd6e: jmp 0x585bdac
// asm:   0x585bd70: jmp 0x585bdac
// asm:   0x585bd72: jmp 0x585bdac
// asm:   0x585bd74: jmp 0x585bdac
// asm:   0x585bd76: jmp 0x585bdac
// asm:   0x585bd78: jmp 0x585bdac
// asm:   0x585bd7a: jmp 0x585bdac
// asm:   0x585bd7c: jmp 0x585bdac
// asm:   0x585bd7e: jmp 0x585bdac
// asm:   0x585bd80: jmp 0x585bdac
// asm:   0x585bd82: jmp 0x585bdb4
// asm:   0x585bd84: jmp 0x585bdac
// asm:   0x585bd86: jmp 0x585bdac
// asm:   0x585bd88: jmp 0x585bdb4
// asm:   0x585bd8a: jmp 0x585bdac
// asm:   0x585bd8c: jmp 0x585bdac
// asm:   0x585bd8e: jmp 0x585bdac
// asm:   0x585bd90: jmp 0x585bdac
// asm:   0x585bd92: jmp 0x585bdac
// asm:   0x585bd94: jmp 0x585bdac
// asm:   0x585bd96: jmp 0x585bdac
// asm:   0x585bd98: jmp 0x585bdac
// asm:   0x585bd9a: jmp 0x585bdac
// asm:   0x585bd9c: jmp 0x585bdac
// asm:   0x585bd9e: jmp 0x585bdac
// asm:   0x585bda0: jmp 0x585bdac
// asm:   0x585bda2: jmp 0x585bdac
// asm:   0x585bda4: jmp 0x585bdac
// asm:   0x585bda6: jmp 0x585bdac
// asm:   0x585bda8: jmp 0x585bdac
// asm:   0x585bdaa: jmp 0x585bdac
// asm:   0x585bdac: mov rbx, rdx
// asm:   0x585bdaf: mov rbp, rax
// asm:   0x585bdb2: jmp 0x585bdb9
// asm:   0x585bdb4: mov rbp, rax
// asm:   0x585bdb7: mov ebx, edx
// asm:   0x585bdb9: cmp ebx, 1
// asm:   0x585bdbc: jne 0x585bdfb
// asm:   0x585bdbe: mov rdi, rbp
// asm:   0x585bdc1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x585bdc6: mov rbp, qword ptr [rax]
// asm:   0x585bdc9: mov qword ptr [rsp + 0x78], rbp
// asm:   0x585bdce: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x585bdd3: lea rax, [rip + 0x1a3310e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEffect_Dispose
// asm:   0x585bdda: mov rsi, qword ptr [rax]
// asm:   0x585bddd: lea rdi, [rsp + 0x40]
// asm:   0x585bde2: call 0x4d3c9b0  ; System_Collections_Generic_List_Enumerator_Int32Enum___Dispose()
// asm:   0x585bde7: test rbp, rbp
// asm:   0x585bdea: je 0x585ba51
// asm:   0x585bdf0: mov rdi, rbp
// asm:   0x585bdf3: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x585bdf8: mov rbp, rax
// asm:   0x585bdfb: lea rdi, [rsp + 0x78]
// asm:   0x585be00: call 0x2fce9c0  ; il2cpp_runtime_helper_02fce9c0()
// asm:   0x585be05: mov rdi, rbp
// asm:   0x585be08: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x585be0d: mov rdi, rax
// asm:   0x585be10: call 0x2ab61e0  ; __clang_call_terminate()

void Weather_WeatherManager__ApplyCurrentWeather
               (Weather_WeatherManager_o *__this,bool firstStart,bool applyAll,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  int iVar10;
  uint32_t uVar11;
  Settings_GraphicsSettings_o *pSVar12;
  Settings_IntSetting_o *pSVar13;
  System_Collections_Generic_List_T__o *pSVar14;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *pSVar15;
  Settings_WeatherSet_o *pSVar16;
  Settings_FloatSetting_o *pSVar17;
  Settings_WeatherSet_o *pSVar18;
  Settings_StringSetting_o *pSVar19;
  System_String_o *skybox2;
  Settings_StringSetting_o *pSVar20;
  Weather_BaseWeatherEffect_c *pWVar21;
  Settings_ColorSetting_o *pSVar22;
  Utility_Color255_o *pUVar23;
  Settings_Vector3Setting_o *pSVar24;
  System_Collections_Generic_List_Light__o *pSVar25;
  Weather_WindWeatherEffect_StaticFields *pWVar26;
  System_Collections_Generic_List_WeatherEffect__o *pSVar27;
  undefined1 auVar28 [16];
  UnityEngine_Light_o *__this_01;
  bool bVar29;
  System_String_o *pSVar30;
  Il2CppObject *pIVar31;
  Weather_BaseWeatherEffect_o *pWVar32;
  UnityEngine_GameObject_o *pUVar33;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Material_o *__this_02;
  UnityEngine_Transform_o *__this_03;
  UnityEngine_Vector3_StaticFields *pUVar34;
  MethodInfo *pMVar35;
  Weather_WeatherManager_o *pWVar36;
  float fVar37;
  undefined4 uVar38;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar39 [16];
  UnityEngine_Color_o UVar40;
  UnityEngine_Quaternion_o value;
  float local_c8;
  undefined1 local_c0 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_b8;
  float local_b0;
  float fStack_ac;
  undefined1 local_a8 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_a0;
  UnityEngine_Light_o *local_98;
  undefined1 local_88 [16];
  Il2CppObject *local_78;
  float local_68;
  float fStack_64;
  System_Collections_Generic_HashSet_WeatherEffect__o *pSStack_60;
  System_Collections_Generic_List_Camera__o *local_50;
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *local_48;
  Settings_WeatherSet_o *local_40;
  float local_38;
  
  if (Il2CppMethodInitialized_0754509b == '\0') {
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
              (&MethodInfo_System_Collections_Generic_List_WeatherEffect_AddRange);
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WindWeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata(&"_Tint");
    Il2CppMethodInitialized_0754509b = '\x01';
  }
  local_88._0_8_ = (Weather_WeatherManager_c *)0x0;
  local_88._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_78 = (Il2CppObject *)0x0;
  local_a8 = (undefined1  [8])0x0;
  pSStack_a0 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_98 = (UnityEngine_Light_o *)0x0;
  if (!firstStart) {
    if (Il2CppMethodInitialized_075450a1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
      Il2CppMethodInitialized_075450a1 = '\x01';
    }
    pSVar12 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
    if ((pSVar12 == (Settings_GraphicsSettings_o *)0x0) ||
       (pSVar13 = (pSVar12->fields).WeatherEffects, pSVar13 == (Settings_IntSetting_o *)0x0))
    goto label_0585ba83;
    if ((pSVar13->fields)._value == 0) {
      return;
    }
  }
  if (applyAll) {
    pSVar14 = (System_Collections_Generic_List_T__o *)(__this->fields)._needApply;
    if (pSVar14 == (System_Collections_Generic_List_T__o *)0x0) goto label_0585ba83;
    piVar1 = &(pSVar14->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar14->fields)._size = 0;
    if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
    }
    System_Collections_Generic_List_Int32Enum___AddRange
              (pSVar14,(System_Collections_Generic_IEnumerable_T__o *)
                       TypeInfo_Weather_WeatherManager->static_fields->AllEffects,
               (MethodInfo_3919E10 *)MethodInfo_System_Collections_Generic_List_WeatherEffect_AddRange);
  }
  pSVar12 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if (((pSVar12 != (Settings_GraphicsSettings_o *)0x0) &&
      (pSVar13 = (pSVar12->fields).WeatherEffects, pSVar13 != (Settings_IntSetting_o *)0x0)) &&
     (pSVar14 = (System_Collections_Generic_List_T__o *)(__this->fields)._needApply,
     pSVar14 != (System_Collections_Generic_List_T__o *)0x0)) {
    iVar10 = (pSVar13->fields)._value;
    System_Collections_Generic_List_Int32Enum___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_c0,pSVar14,
               (MethodInfo_391A9A0 *)MethodInfo_System_Collections_Generic_List_WeatherEffect_GetEnumerator);
    local_78 = (Il2CppObject *)CONCAT44(fStack_ac,local_b0);
    local_88._0_8_ = local_c0;
    local_88._8_8_ = pSStack_b8;
    local_50 = (System_Collections_Generic_List_Camera__o *)0x0;
    local_48 = (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)local_88;
switchD_0585ad4f_default:
    pWVar36 = (Weather_WeatherManager_o *)local_88;
    bVar29 = System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext
                       ((System_Collections_Generic_List_Enumerator_T__o *)pWVar36,
                        (MethodInfo_4C3C9C0 *)
                        MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEffect_MoveNext);
    if (bVar29) {
      fVar37 = local_78._0_4_;
      if (iVar10 == 1 && !firstStart) goto code_r0x0585ad17;
      goto label_0585ad39;
    }
    System_Collections_Generic_List_Enumerator_Int32Enum___Dispose
              ((System_Collections_Generic_List_Enumerator_T__o *)local_88,
               (MethodInfo_4C3C9B0 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEffect_Dispose);
    pSVar27 = (__this->fields)._needApply;
    if (pSVar27 != (System_Collections_Generic_List_WeatherEffect__o *)0x0) {
      piVar1 = &(pSVar27->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar27->fields)._size = 0;
      return;
    }
  }
label_0585ba83:
  ThrowNullReferenceException();
code_r0x0585ad17:
  pWVar36 = (Weather_WeatherManager_o *)(__this->fields).LowEffects;
  if (pWVar36 == (Weather_WeatherManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar29 = System_Collections_Generic_HashSet_Int32Enum___Contains
                     ((System_Collections_Generic_HashSet_T__o *)pWVar36,(int32_t)local_78._0_4_,
                      (MethodInfo_4FADAC0 *)
                      MethodInfo_System_Collections_Generic_HashSet_WeatherEffect_Contains);
  if (bVar29) {
label_0585ad39:
    switch(fVar37) {
    case 1.4013e-45:
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar25 = TypeInfo_Map_MapLoader->static_fields->Daylight;
      if (pSVar25 == (System_Collections_Generic_List_Light__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_c0,
                 (System_Collections_Generic_List_object__o *)pSVar25,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Light_GetEnumerator);
      local_98 = (UnityEngine_Light_o *)CONCAT44(fStack_ac,local_b0);
      local_a8 = local_c0;
      pSStack_a0 = pSStack_b8;
      local_c0 = (undefined1  [8])0x0;
      pSStack_b8 = (System_Collections_Generic_List_Enumerator_object__o *)local_a8;
      while (bVar29 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_a8,
                                 (MethodInfo_4C45C50 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_Light_MoveNext),
            __this_01 = local_98, bVar29) {
        pSVar16 = (__this->fields)._currentWeather;
        if (pSVar16 == (Settings_WeatherSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar22 = (pSVar16->fields).Daylight;
        if (pSVar22 == (Settings_ColorSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar23 = (pSVar22->fields)._value;
        if (pUVar23 == (Utility_Color255_o *)0x0) {
          ThrowNullReferenceException();
        }
        UVar40 = Utility_Color255__ToColor(pUVar23,(MethodInfo *)0x0);
        if (__this_01 == (UnityEngine_Light_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_Light__set_color(__this_01,UVar40,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_a8,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Light_Dispose);
      break;
    case 2.8026e-45:
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar25 = TypeInfo_Map_MapLoader->static_fields->Daylight;
      if (pSVar25 == (System_Collections_Generic_List_Light__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_c0,
                 (System_Collections_Generic_List_object__o *)pSVar25,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Light_GetEnumerator);
      local_98 = (UnityEngine_Light_o *)CONCAT44(fStack_ac,local_b0);
      local_a8 = local_c0;
      pSStack_a0 = pSStack_b8;
      local_c0 = (undefined1  [8])0x0;
      pSStack_b8 = (System_Collections_Generic_List_Enumerator_object__o *)local_a8;
      while (bVar29 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_a8,
                                 (MethodInfo_4C45C50 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_Light_MoveNext), bVar29
            ) {
        pSVar16 = (__this->fields)._currentWeather;
        if (pSVar16 == (Settings_WeatherSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar17 = (pSVar16->fields).DaylightIntensity;
        if (pSVar17 == (Settings_FloatSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (local_98 == (UnityEngine_Light_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_Light__set_intensity(local_98,(pSVar17->fields)._value,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_a8,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Light_Dispose);
      break;
    case 4.2039e-45:
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar25 = TypeInfo_Map_MapLoader->static_fields->Daylight;
      if (pSVar25 == (System_Collections_Generic_List_Light__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_c0,
                 (System_Collections_Generic_List_object__o *)pSVar25,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Light_GetEnumerator);
      local_98 = (UnityEngine_Light_o *)CONCAT44(fStack_ac,local_b0);
      local_a8 = local_c0;
      pSStack_a0 = pSStack_b8;
      local_c0 = (undefined1  [8])0x0;
      pSStack_b8 = (System_Collections_Generic_List_Enumerator_object__o *)local_a8;
      while (bVar29 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_a8,
                                 (MethodInfo_4C45C50 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_Light_MoveNext), bVar29
            ) {
        if (local_98 == (UnityEngine_Light_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_03 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)local_98,(MethodInfo *)0x0);
        pSVar16 = (__this->fields)._currentWeather;
        if (pSVar16 == (Settings_WeatherSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar24 = (pSVar16->fields).DaylightDirection;
        if (pSVar24 == (Settings_Vector3Setting_o *)0x0) {
          ThrowNullReferenceException();
        }
        uVar4 = (pSVar24->fields)._value.fields.x;
        uVar7 = (pSVar24->fields)._value.fields.y;
        local_38 = (pSVar24->fields)._value.fields.z * 0.017453292;
        local_40 = (Settings_WeatherSet_o *)CONCAT44((float)uVar7 * 0.017453292,(float)uVar4 * 0.017453292);
        value = UnityEngine_Quaternion__Internal_FromEulerRad
                          ((UnityEngine_Vector3_o *)&local_40,(MethodInfo *)0x0);
        if (__this_03 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_Transform__set_rotation(__this_03,value,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_a8,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Light_Dispose);
      break;
    case 5.60519e-45:
      pSVar16 = (__this->fields)._currentWeather;
      if (pSVar16 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar22 = (pSVar16->fields).AmbientLight;
      if (pSVar22 == (Settings_ColorSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar23 = (pSVar22->fields)._value;
      if (pUVar23 == (Utility_Color255_o *)0x0) {
        ThrowNullReferenceException();
      }
      UVar40 = Utility_Color255__ToColor(pUVar23,(MethodInfo *)0x0);
      UnityEngine_RenderSettings__set_ambientLight(UVar40,(MethodInfo *)0x0);
      break;
    case 7.00649e-45:
      pSVar16 = (__this->fields)._currentWeather;
      if (pSVar16 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar20 = (pSVar16->fields).Skybox;
      if (pSVar20 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar18 = (__this->fields)._targetWeather;
      if (pSVar18 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar19 = (pSVar18->fields).Skybox;
      if (pSVar19 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pMVar35 = (MethodInfo *)(pSVar16->fields).SkyboxColor;
      if (pMVar35 == (MethodInfo *)0x0) {
        ThrowNullReferenceException();
      }
      if (pMVar35->klass == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar30 = (pSVar20->fields)._value;
      skybox2 = (pSVar19->fields)._value;
      UVar40 = Utility_Color255__ToColor((Utility_Color255_o *)pMVar35->klass,(MethodInfo *)0x0);
      routine = Weather_WeatherManager__WaitAndApplySkybox(__this,pSVar30,skybox2,UVar40,pMVar35);
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      break;
    case 8.40779e-45:
      pSVar16 = (__this->fields)._currentWeather;
      if (pSVar16 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar20 = (pSVar16->fields).Skybox;
      if (pSVar20 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar16 = (__this->fields)._targetWeather;
      if (pSVar16 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pMVar35 = (MethodInfo *)(pSVar16->fields).Skybox;
      if (pMVar35 == (MethodInfo *)0x0) {
        ThrowNullReferenceException();
      }
      __this_02 = Weather_WeatherManager__GetBlendedSkybox
                            (pWVar36,(pSVar20->fields)._value,(System_String_o *)pMVar35->klass,pMVar35);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar29 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar29) {
        pSVar16 = (__this->fields)._currentWeather;
        if (pSVar16 == (Settings_WeatherSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar22 = (pSVar16->fields).SkyboxColor;
        if (pSVar22 == (Settings_ColorSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar23 = (pSVar22->fields)._value;
        if (pUVar23 == (Utility_Color255_o *)0x0) {
          ThrowNullReferenceException();
        }
        UVar40 = Utility_Color255__ToColor(pUVar23,(MethodInfo *)0x0);
        if (__this_02 == (UnityEngine_Material_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_Material__SetColor(__this_02,"_Tint",UVar40,(MethodInfo *)0x0);
      }
      break;
    case 9.80909e-45:
      pSVar15 = (__this->fields)._effects;
      if (pSVar15 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
        ThrowNullReferenceException();
      }
      pWVar32 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15,7,
                           (MethodInfo_4A54F30 *)
                           MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                          );
      pSVar16 = (__this->fields)._currentWeather;
      if (pSVar16 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar22 = (pSVar16->fields).Flashlight;
      if (pSVar22 == (Settings_ColorSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar23 = (pSVar22->fields)._value;
      if (pUVar23 == (Utility_Color255_o *)0x0) {
        ThrowNullReferenceException();
      }
      UVar40 = Utility_Color255__ToColor(pUVar23,(MethodInfo *)0x0);
      if (pWVar32 == (Weather_BaseWeatherEffect_o *)0x0) {
        ThrowNullReferenceException();
      }
      pWVar21 = pWVar32->klass;
      bVar9 = (TypeInfo_Weather_FlashlightWeatherEffect->_2).typeHierarchyDepth;
      if (((pWVar21->_2).typeHierarchyDepth < bVar9) ||
         ((pWVar21->_2).typeHierarchy[(ulong)bVar9 - 1] !=
          (Il2CppClass *)TypeInfo_Weather_FlashlightWeatherEffect)) {
        il2cpp_codegen_raise_invalid_cast_exception(UVar40.fields.r,pWVar32);
      }
      (*((Il2CppClass *)pWVar21)->vtable[22].methodPtr)(UVar40.fields.r,UVar40.fields._8_8_,pWVar32);
      pSVar16 = (__this->fields)._currentWeather;
      if (pSVar16 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar22 = (pSVar16->fields).Flashlight;
      if (pSVar22 == (Settings_ColorSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar23 = (pSVar22->fields)._value;
      if (pUVar23 == (Utility_Color255_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (((pUVar23->fields).A < 1) ||
         (UVar40 = Utility_Color255__ToColor(pUVar23,(MethodInfo *)0x0), fVar37 = UVar40.fields.a + -1.0,
         fVar37 * fVar37 +
         UVar40.fields.b * UVar40.fields.b +
         UVar40.fields.g * UVar40.fields.g + UVar40.fields.r * UVar40.fields.r < 9.9999994e-11)) {
        pSVar15 = (__this->fields)._effects;
        if (pSVar15 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
          ThrowNullReferenceException();
        }
        pWVar32 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15,7,
                             (MethodInfo_4A54F30 *)
                             MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                            );
        if (pWVar32 == (Weather_BaseWeatherEffect_o *)0x0) {
          ThrowNullReferenceException();
        }
        (*(pWVar32->klass->vtable)._6_Disable.methodPtr)
                  (pWVar32,false,(pWVar32->klass->vtable)._6_Disable.method);
      }
      else {
        pSVar15 = (__this->fields)._effects;
        if (pSVar15 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
          ThrowNullReferenceException();
        }
        pWVar32 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15,7,
                             (MethodInfo_4A54F30 *)
                             MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                            );
        if (pWVar32 == (Weather_BaseWeatherEffect_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pWVar32,(MethodInfo *)0x0);
        if (pUVar33 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar29 = UnityEngine_GameObject__get_activeSelf(pUVar33,(MethodInfo *)0x0);
        if (!bVar29) {
          pSVar15 = (__this->fields)._effects;
          if (pSVar15 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
            ThrowNullReferenceException();
          }
          pWVar32 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15,7,
                               (MethodInfo_4A54F30 *)
                               MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                              );
          if (pWVar32 == (Weather_BaseWeatherEffect_o *)0x0) {
            ThrowNullReferenceException();
          }
          (*(pWVar32->klass->vtable)._7_Enable.methodPtr)(pWVar32,(pWVar32->klass->vtable)._7_Enable.method);
        }
      }
      break;
    case 1.12104e-44:
      pSVar16 = (__this->fields)._currentWeather;
      if (pSVar16 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar17 = (pSVar16->fields).FogDensity;
      if (pSVar17 == (Settings_FloatSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pSVar17->fields)._value <= 0.0) {
        UnityEngine_RenderSettings__set_fog(false,(MethodInfo *)0x0);
      }
      else {
        UnityEngine_RenderSettings__set_fog(true,(MethodInfo *)0x0);
        UnityEngine_RenderSettings__set_fogMode(2,(MethodInfo *)0x0);
        pSVar16 = (__this->fields)._currentWeather;
        if (pSVar16 == (Settings_WeatherSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar17 = (pSVar16->fields).FogDensity;
        if (pSVar17 == (Settings_FloatSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_RenderSettings__set_fogDensity((pSVar17->fields)._value * 0.02,(MethodInfo *)0x0);
      }
      break;
    case 1.26117e-44:
      pSVar16 = (__this->fields)._currentWeather;
      if (pSVar16 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar22 = (pSVar16->fields).FogColor;
      if (pSVar22 == (Settings_ColorSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar23 = (pSVar22->fields)._value;
      if (pUVar23 == (Utility_Color255_o *)0x0) {
        ThrowNullReferenceException();
      }
      UVar40 = Utility_Color255__ToColor(pUVar23,(MethodInfo *)0x0);
      UnityEngine_RenderSettings__set_fogColor(UVar40,(MethodInfo *)0x0);
      break;
    case 1.4013e-44:
    case 1.54143e-44:
    case 1.68156e-44:
    case 1.82169e-44:
      pSVar16 = (__this->fields)._currentWeather;
      if (pSVar16 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_00 = (pSVar16->fields).Settings;
      local_c0 = (undefined1  [8])TypeInfo_Weather_WeatherEffect;
      pSStack_b8 = (System_Collections_Generic_List_Enumerator_object__o *)0xffffffffffffffff;
      local_b0 = fVar37;
      pSVar30 = System_Enum__ToString((System_Enum_o *)local_c0,(MethodInfo *)0x0);
      if (__this_00 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar31 = System_Collections_Specialized_OrderedDictionary__get_Item
                          (__this_00,(Il2CppObject *)pSVar30,(MethodInfo *)0x0);
      if (pIVar31 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      bVar9 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if (((pIVar31->klass->_2).typeHierarchyDepth < bVar9) ||
         ((pIVar31->klass->_2).typeHierarchy[(ulong)bVar9 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar31);
      }
      pSVar15 = (__this->fields)._effects;
      if (pSVar15 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
        ThrowNullReferenceException();
      }
      fVar2 = *(float *)((long)&pIVar31[1].monitor + 4);
      pWVar32 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15,(int32_t)fVar37,
                           (MethodInfo_4A54F30 *)
                           MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                          );
      if (pWVar32 == (Weather_BaseWeatherEffect_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pWVar32->klass->vtable)._10_SetLevel.methodPtr)
                (pWVar32,fVar2,(pWVar32->klass->vtable)._10_SetLevel.method);
      pSVar15 = (__this->fields)._effects;
      if (fVar2 <= 0.0) {
        if (pSVar15 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
          ThrowNullReferenceException();
        }
        pWVar32 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15,(int32_t)fVar37,
                             (MethodInfo_4A54F30 *)
                             MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                            );
        if (pWVar32 == (Weather_BaseWeatherEffect_o *)0x0) {
          ThrowNullReferenceException();
        }
        (*(pWVar32->klass->vtable)._6_Disable.methodPtr)
                  (pWVar32,true,(pWVar32->klass->vtable)._6_Disable.method);
      }
      else {
        if (pSVar15 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
          ThrowNullReferenceException();
        }
        pWVar32 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15,(int32_t)fVar37,
                             (MethodInfo_4A54F30 *)
                             MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                            );
        if (pWVar32 == (Weather_BaseWeatherEffect_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pWVar32,(MethodInfo *)0x0);
        if (pUVar33 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar29 = UnityEngine_GameObject__get_activeSelf(pUVar33,(MethodInfo *)0x0);
        if (!bVar29) {
          pSVar15 = (__this->fields)._effects;
          if (pSVar15 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
            ThrowNullReferenceException();
          }
          pWVar32 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15,
                               (int32_t)fVar37,
                               (MethodInfo_4A54F30 *)
                               MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                              );
          if (pWVar32 == (Weather_BaseWeatherEffect_o *)0x0) {
            ThrowNullReferenceException();
          }
          (*(pWVar32->klass->vtable)._8_Randomize.methodPtr)
                    (pWVar32,(pWVar32->klass->vtable)._8_Randomize.method);
          pSVar15 = (__this->fields)._effects;
          if (pSVar15 == (System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *)0x0) {
            ThrowNullReferenceException();
          }
          pWVar32 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15,
                               (int32_t)fVar37,
                               (MethodInfo_4A54F30 *)
                               MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_get_Item
                              );
          if (pWVar32 == (Weather_BaseWeatherEffect_o *)0x0) {
            ThrowNullReferenceException();
          }
          (*(pWVar32->klass->vtable)._7_Enable.methodPtr)(pWVar32,(pWVar32->klass->vtable)._7_Enable.method);
        }
      }
      break;
    case 1.96182e-44:
      pSVar16 = (__this->fields)._currentWeather;
      if (pSVar16 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar24 = (pSVar16->fields).WindDirection;
      if (pSVar24 == (Settings_Vector3Setting_o *)0x0) {
        ThrowNullReferenceException();
      }
      uVar3 = (pSVar24->fields)._value.fields.x;
      uVar6 = (pSVar24->fields)._value.fields.y;
      local_68 = (float)uVar3;
      fStack_64 = (float)uVar6;
      pSStack_60 = (System_Collections_Generic_HashSet_WeatherEffect__o *)0x0;
      local_c8 = (pSVar24->fields)._value.fields.z;
      if (Il2CppMethodInitialized_0753e72d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72d = '\x01';
        local_c0 = (undefined1  [8])0x0;
      }
      else {
        local_c0 = (undefined1  [8])0x0;
      }
      if (g_data_0753e729 == '\0') {
        local_c0 = (undefined1  [8])0x0;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        g_data_0753e729 = '\x01';
        uVar11 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      else {
        local_c0 = (undefined1  [8])0x0;
        uVar11 = (((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar11 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      uVar38 = 0;
      fVar37 = local_c8 * local_c8 + fStack_64 * fStack_64 + local_68 * local_68;
      if (fVar37 < 0.0) {
        fVar37 = sqrtf(fVar37);
        uVar38 = extraout_XMM0_Db;
      }
      else {
        fVar37 = SQRT(fVar37);
      }
      if (1e-05 < fVar37) {
        local_c8 = local_c8 / fVar37;
        auVar28._4_4_ = fStack_64;
        auVar28._0_4_ = local_68;
        auVar28._8_8_ = pSStack_60;
        auVar39._4_4_ = fVar37;
        auVar39._0_4_ = fVar37;
        auVar39._8_4_ = uVar38;
        auVar39._12_4_ = uVar38;
        auVar39 = divps(auVar28,auVar39);
        local_c0 = (undefined1  [8])auVar39._0_8_;
        pUVar34 = (UnityEngine_Vector3_StaticFields *)local_c0;
      }
      else {
        pUVar34 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_c8 = (pUVar34->zeroVector).fields.z;
      }
      uVar5 = (pUVar34->zeroVector).fields.x;
      uVar8 = (pUVar34->zeroVector).fields.y;
      pSStack_60 = (System_Collections_Generic_HashSet_WeatherEffect__o *)0x0;
      local_68 = (float)uVar5;
      fStack_64 = (float)uVar8;
      if ((((Il2CppClass *)TypeInfo_Weather_WindWeatherEffect)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WindWeatherEffect);
      }
      pWVar26 = TypeInfo_Weather_WindWeatherEffect->static_fields;
      (pWVar26->WindDirection).fields.x = local_68;
      (pWVar26->WindDirection).fields.y = fStack_64;
      (pWVar26->WindDirection).fields.z = local_c8;
      break;
    case 2.10195e-44:
      if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      }
      pSVar16 = (__this->fields)._currentWeather;
      if (pSVar16 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar17 = (pSVar16->fields).RainForce;
      if (pSVar17 == (Settings_FloatSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pWVar36 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
      if (pWVar36 == (Weather_WeatherManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      (pWVar36->fields)._currentRainForce = (pSVar17->fields)._value;
      break;
    case 2.24208e-44:
      if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      }
      pSVar16 = (__this->fields)._currentWeather;
      if (pSVar16 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar17 = (pSVar16->fields).SnowForce;
      if (pSVar17 == (Settings_FloatSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pWVar36 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
      if (pWVar36 == (Weather_WeatherManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      (pWVar36->fields)._currentSnowForce = (pSVar17->fields)._value;
      break;
    case 2.38221e-44:
      if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      }
      pSVar16 = (__this->fields)._currentWeather;
      if (pSVar16 == (Settings_WeatherSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar17 = (pSVar16->fields).WindForce;
      if (pSVar17 == (Settings_FloatSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pWVar36 = TypeInfo_Weather_WeatherManager->static_fields->_instance;
      if (pWVar36 == (Weather_WeatherManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      (pWVar36->fields)._currentWindForce = (pSVar17->fields)._value;
    }
  }
  goto switchD_0585ad4f_default;
}


// Weather.WeatherManager$$WaitAndApplySkybox
// il2cpp: System_Collections_IEnumerator_o* Weather_WeatherManager__WaitAndApplySkybox (Weather_WeatherManager_o* __this, System_String_o* skybox1, System_String_o* skybox2, UnityEngine_Color_o tint, const MethodInfo* method);
// 0x585e2f0

System_Collections_IEnumerator_o *
Weather_WeatherManager__WaitAndApplySkybox
          (Weather_WeatherManager_o *__this,System_String_o *skybox1,System_String_o *skybox2,
          UnityEngine_Color_o tint,MethodInfo *method)

{
  Weather_WeatherManager__WaitAndApplySkybox_d__57_o *__this_00;
  float local_48;
  float fStack_44;
  
  if (Il2CppMethodInitialized_0754509c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager_WaitAndApplySkybox_d__57);
    Il2CppMethodInitialized_0754509c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Weather_WeatherManager_WaitAndApplySkybox_d__57);
  Weather_WeatherManager__WaitAndApplySkybox_d__57___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 == (Weather_WeatherManager__WaitAndApplySkybox_d__57_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).skybox1 = skybox1;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).skybox1);
  (__this_00->fields).skybox2 = skybox2;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).skybox2);
  local_48 = tint.fields.r;
  fStack_44 = tint.fields.g;
  (__this_00->fields).tint.fields.r = local_48;
  (__this_00->fields).tint.fields.g = fStack_44;
  (__this_00->fields).tint.fields.b = tint.fields.b;
  (__this_00->fields).tint.fields.a = tint.fields.a;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Weather.WeatherManager$$ResolveSkyboxName
// il2cpp: System_String_o* Weather_WeatherManager__ResolveSkyboxName (System_String_o* skybox, const MethodInfo* method);
// 0x585e3b0

System_String_o * Weather_WeatherManager__ResolveSkyboxName(System_String_o *skybox,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  uint16_t c;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_0754509d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    Il2CppMethodInitialized_0754509d = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(skybox,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)0x0;
  }
  if (skybox == (System_String_o *)0x0) goto label_0585e4ce;
  c = System_String__get_Chars(skybox,(skybox->fields)._stringLength + -1,(MethodInfo *)0x0);
  if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556750);
  }
  bVar1 = System_Char__IsDigit(c,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor != 0) goto label_0585e457;
label_0585e4b6:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Weather_WeatherManager->static_fields->SkyboxMaterials;
  }
  else {
    skybox = System_String__Concat_52f0320(skybox,"1",(MethodInfo *)0x0);
    if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) goto label_0585e4b6;
label_0585e457:
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Weather_WeatherManager->static_fields->SkyboxMaterials;
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (__this,(Il2CppObject *)skybox,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
    pSVar2 = (System_String_o *)0x0;
    if (bVar1) {
      pSVar2 = skybox;
    }
    return pSVar2;
  }
label_0585e4ce:
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$GetBlendedSkybox
// il2cpp: UnityEngine_Material_o* Weather_WeatherManager__GetBlendedSkybox (Weather_WeatherManager_o* __this, System_String_o* skybox1, System_String_o* skybox2, const MethodInfo* method);
// 0x585e040
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585e081: jmp 0x585e2db

UnityEngine_Material_o *
Weather_WeatherManager__GetBlendedSkybox
          (Weather_WeatherManager_o *__this,System_String_o *skybox1,System_String_o *skybox2,
          MethodInfo *method)

{
  bool bVar1;
  System_String_o *skybox1_00;
  System_String_o *skybox2_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_String_array *parts;
  UnityEngine_Material_o *pUVar3;
  MethodInfo *pMVar4;
  MethodInfo *in_R8;
  
  pMVar4 = (MethodInfo *)skybox1;
  if (Il2CppMethodInitialized_0754509e == '\0') {
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
    Il2CppMethodInitialized_0754509e = '\x01';
    if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor != 0) goto label_0585e070;
label_0585e105:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
    skybox1_00 = Weather_WeatherManager__ResolveSkyboxName(skybox1,pMVar4);
  }
  else {
    if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) goto label_0585e105;
label_0585e070:
    skybox1_00 = Weather_WeatherManager__ResolveSkyboxName(skybox1,pMVar4);
  }
  if (skybox1_00 == (System_String_o *)0x0) {
    return (UnityEngine_Material_o *)0x0;
  }
  if ((((Il2CppClass *)TypeInfo_Weather_WeatherManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
  }
  skybox2_00 = Weather_WeatherManager__ResolveSkyboxName(skybox2,pMVar4);
  if (skybox2_00 == (System_String_o *)0x0) {
    skybox2_00 = skybox1_00;
  }
  if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Weather_WeatherManager->static_fields->SkyboxBlendedMaterials;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)skybox1_00,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_ContainsKey
                      );
    if (!bVar1) {
      return (UnityEngine_Material_o *)0x0;
    }
    if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Weather_WeatherManager->static_fields->SkyboxBlendedMaterials;
    if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar2,(Il2CppObject *)skybox1_00,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_get_Item
                           ), pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar2,(Il2CppObject *)skybox2_00,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
      if (!bVar1) {
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        parts = Utility_Util__EnumToStringArray_Int32Enum_
                          ((MethodInfo_377C8A0 *)
                           MethodInfo_Utility_Util_EnumToStringArray_SkyboxCustomSkinPartId);
        if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
        }
        pUVar3 = Weather_WeatherManager__CreateBlendedSkybox
                           (TypeInfo_Weather_WeatherManager->static_fields->_blendedShader,parts,skybox1_00,
                            skybox2_00,in_R8);
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Weather_WeatherManager->static_fields->SkyboxBlendedMaterials;
        if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
           (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                     System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar2,(Il2CppObject *)skybox1_00,
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_get_Item
                               ), pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
        goto label_0585e2e7;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar2,(Il2CppObject *)skybox2_00,(Il2CppObject *)pUVar3,
                   (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_Add)
        ;
      }
      if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Weather_WeatherManager->static_fields->SkyboxBlendedMaterials;
      if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar2,(Il2CppObject *)skybox1_00,
                              (MethodInfo_4AAD450 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_get_Item
                             ), pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        pUVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar2,(Il2CppObject *)skybox2_00,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
        return pUVar3;
      }
    }
  }
label_0585e2e7:
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$OnSetWeatherRPC
// il2cpp: void Weather_WeatherManager__OnSetWeatherRPC (System_Byte_array* currentWeatherJson, System_Byte_array* startWeatherJson, System_Byte_array* targetWeatherJson, System_Collections_Generic_Dictionary_int__float__o* targetWeatherStartTimes, System_Collections_Generic_Dictionary_int__float__o* targetWeatherEndTimes, float currentTime, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x585e4e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585e56f: jmp 0x585e586

void Weather_WeatherManager__OnSetWeatherRPC
               (System_Byte_array *currentWeatherJson,System_Byte_array *startWeatherJson,
               System_Byte_array *targetWeatherJson,
               System_Collections_Generic_Dictionary_int__float__o *targetWeatherStartTimes,
               System_Collections_Generic_Dictionary_int__float__o *targetWeatherEndTimes,float currentTime,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Settings_GraphicsSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Weather_WeatherManager_o *__this;
  Photon_Realtime_Player_o *pPVar3;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_0754509f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_0754509f = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    pPVar3 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  else {
    pPVar3 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  if (info.fields.Sender != pPVar3) {
    return;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if ((pSVar1 != (Settings_GraphicsSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).WeatherEffects, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    if ((pSVar2->fields)._value == 0) {
      return;
    }
    if ((((Il2CppClass *)TypeInfo_Weather_WeatherManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
    }
    __this = TypeInfo_Weather_WeatherManager->static_fields->_instance;
    if (__this != (Weather_WeatherManager_o *)0x0) {
      routine = Weather_WeatherManager__WaitAndFinishOnSetWeather
                          (__this,currentWeatherJson,startWeatherJson,targetWeatherJson,
                           targetWeatherStartTimes,targetWeatherEndTimes,currentTime,in_stack_ffffffffffffffb8
                          );
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Weather.WeatherManager$$WaitAndFinishOnSetWeather
// il2cpp: System_Collections_IEnumerator_o* Weather_WeatherManager__WaitAndFinishOnSetWeather (Weather_WeatherManager_o* __this, System_Byte_array* currentWeatherJson, System_Byte_array* startWeatherJson, System_Byte_array* targetWeatherJson, System_Collections_Generic_Dictionary_int__float__o* targetWeatherStartTimes, System_Collections_Generic_Dictionary_int__float__o* targetWeatherEndTimes, float currentTime, const MethodInfo* method);
// 0x585e630

System_Collections_IEnumerator_o *
Weather_WeatherManager__WaitAndFinishOnSetWeather
          (Weather_WeatherManager_o *__this,System_Byte_array *currentWeatherJson,
          System_Byte_array *startWeatherJson,System_Byte_array *targetWeatherJson,
          System_Collections_Generic_Dictionary_int__float__o *targetWeatherStartTimes,
          System_Collections_Generic_Dictionary_int__float__o *targetWeatherEndTimes,float currentTime,
          MethodInfo *method)

{
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61_o *__this_00;
  
  if (Il2CppMethodInitialized_075450a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Weather_WeatherManager_WaitAndFinishOnSetWeather_d__61);
    Il2CppMethodInitialized_075450a0 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Weather_WeatherManager_WaitAndFinishOnSetWeather_d__61);
  Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 == (Weather_WeatherManager__WaitAndFinishOnSetWeather_d__61_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).currentWeatherJson = currentWeatherJson;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).currentWeatherJson);
  (__this_00->fields).startWeatherJson = startWeatherJson;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).startWeatherJson);
  (__this_00->fields).targetWeatherJson = targetWeatherJson;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).targetWeatherJson);
  (__this_00->fields).targetWeatherStartTimes = targetWeatherStartTimes;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).targetWeatherStartTimes);
  (__this_00->fields).targetWeatherEndTimes = targetWeatherEndTimes;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).targetWeatherEndTimes);
  (__this_00->fields).currentTime = currentTime;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Weather.WeatherManager$$IsWeatherEnabled
// il2cpp: bool Weather_WeatherManager__IsWeatherEnabled (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x585c510

bool Weather_WeatherManager__IsWeatherEnabled(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  Settings_GraphicsSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_075450a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_075450a1 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if ((pSVar1 == (Settings_GraphicsSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).WeatherEffects, pSVar2 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pSVar2->fields)._value != 0;
}


// Weather.WeatherManager$$.ctor
// il2cpp: void Weather_WeatherManager___ctor (Weather_WeatherManager_o* __this, const MethodInfo* method);
// 0x585e730

void Weather_WeatherManager___ctor(Weather_WeatherManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_WeatherEffect__o *__this_00;
  System_Collections_Generic_List_WeatherScheduleRunner__o *pSVar1;
  System_Collections_Generic_List_Camera__o *__this_01;
  System_Collections_Generic_Dictionary_WeatherEffect__BaseWeatherEffect__o *__this_02;
  Settings_WeatherSet_o *pSVar2;
  System_Collections_Generic_Dictionary_int__float__o *pSVar3;
  System_Collections_Generic_List_T__o *__this_03;
  System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *__this_04;
  System_Collections_Generic_List_int__o *__this_05;
  
  if (Il2CppMethodInitialized_075450a2 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_WeatherScheduleRunner_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Camera_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherEffect_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_WeatherScheduleRunner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_WeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Camera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_WeatherSet);
    Il2CppMethodInitialized_075450a2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_WeatherEffect);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             (MethodInfo_4FAD1E0 *)MethodInfo_System_Collections_Generic_HashSet_WeatherEffect_ctor);
  if (__this_00 == (System_Collections_Generic_HashSet_WeatherEffect__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_00,1,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_WeatherEffect_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_00,4,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_WeatherEffect_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_00,7,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_WeatherEffect_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_00,5,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_WeatherEffect_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_00,6,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_WeatherEffect_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_00,2,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_WeatherEffect_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)__this_00,3,
             (MethodInfo_4FAE7B0 *)MethodInfo_System_Collections_Generic_HashSet_WeatherEffect_Add);
  (__this->fields).LowEffects = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LowEffects);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_WeatherScheduleRunner);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_WeatherScheduleRunner_ctor);
  (__this->fields)._scheduleRunners = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scheduleRunners);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Camera);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Camera_ctor);
  (__this->fields)._skyboxCameras = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._skyboxCameras);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
             (MethodInfo_4A543B0 *)
             MethodInfo_System_Collections_Generic_Dictionary_WeatherEffect_BaseWeatherEffect_ctor);
  (__this->fields)._effects = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._effects);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_WeatherSet);
  Settings_WeatherSet___ctor(pSVar2,(MethodInfo *)0x0);
  (__this->fields)._currentWeather = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentWeather);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_WeatherSet);
  Settings_WeatherSet___ctor(pSVar2,(MethodInfo *)0x0);
  (__this->fields)._targetWeather = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._targetWeather);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_WeatherSet);
  Settings_WeatherSet___ctor(pSVar2,(MethodInfo *)0x0);
  (__this->fields)._startWeather = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._startWeather);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_float);
  System_Collections_Generic_Dictionary_int__float____ctor
            (pSVar3,(MethodInfo_4A16850 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_ctor);
  (__this->fields)._targetWeatherStartTimes = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._targetWeatherStartTimes);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_float);
  System_Collections_Generic_Dictionary_int__float____ctor
            (pSVar3,(MethodInfo_4A16850 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_ctor);
  (__this->fields)._targetWeatherEndTimes = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._targetWeatherEndTimes);
  __this_03 = (System_Collections_Generic_List_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_WeatherEffect)
  ;
  System_Collections_Generic_List_Int32Enum____ctor
            (__this_03,(MethodInfo_39192E0 *)MethodInfo_System_Collections_Generic_List_WeatherEffect_ctor);
  (__this->fields)._needApply = (System_Collections_Generic_List_WeatherEffect__o *)__this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._needApply);
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04,
             (MethodInfo_4AB4860 *)
             MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_ctor);
  (__this->fields)._currentScheduleWait = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentScheduleWait);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_WeatherScheduleRunner);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_WeatherScheduleRunner_ctor);
  (__this->fields)._scheduleKeys = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scheduleKeys);
  __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (__this_05,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  (__this->fields)._finishedLerps = __this_05;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._finishedLerps);
  Photon_Pun_MonoBehaviourPunCallbacks___ctor
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.WeatherManager$$.cctor
// il2cpp: void Weather_WeatherManager___cctor (const MethodInfo* method);
// 0x585eb50

void Weather_WeatherManager___cctor(MethodInfo *method)

{
  Weather_WeatherManager_StaticFields *pWVar1;
  Il2CppType *handle;
  System_Collections_Generic_Dictionary_string__Material__o *__this;
  System_Collections_Generic_Dictionary_string__Dictionary_string__Material___o *__this_00;
  System_Type_o *enumType;
  System_String_array *pSVar2;
  System_Collections_Generic_List_T__o *pSVar3;
  
  if (Il2CppMethodInitialized_075450a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Material);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumToList_WeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Weather_WeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_075450a3 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
  pWVar1 = TypeInfo_Weather_WeatherManager->static_fields;
  pWVar1->SkyboxMaterials = __this;
  Il2CppCodeGenWriteBarrier(&pWVar1->SkyboxMaterials);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_Material_ctor);
  pWVar1 = TypeInfo_Weather_WeatherManager->static_fields;
  pWVar1->SkyboxBlendedMaterials = __this_00;
  Il2CppCodeGenWriteBarrier(&pWVar1->SkyboxBlendedMaterials);
  handle = TypeRef_Weather_WeatherEffect;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  pSVar2 = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
  pWVar1 = TypeInfo_Weather_WeatherManager->static_fields;
  pWVar1->EffectNames = pSVar2;
  Il2CppCodeGenWriteBarrier(&pWVar1->EffectNames);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pSVar3 = Utility_Util__EnumToList_Int32Enum_
                     ((MethodInfo_377C780 *)MethodInfo_Utility_Util_EnumToList_WeatherEffect);
  pWVar1 = TypeInfo_Weather_WeatherManager->static_fields;
  pWVar1->AllEffects = (System_Collections_Generic_List_WeatherEffect__o *)pSVar3;
  Il2CppCodeGenWriteBarrier(&pWVar1->AllEffects);
  return;
}


