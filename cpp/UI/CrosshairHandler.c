// Type: UI.CrosshairHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/CrosshairHandler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CrosshairHandler.cs
// --------------------------------

// UI.CrosshairHandler.<LoadSkin>d__9$$.ctor
// il2cpp: void UI_CrosshairHandler__LoadSkin_d__9___ctor (UI_CrosshairHandler__LoadSkin_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5d1b890

void UI_CrosshairHandler__LoadSkin_d__9___ctor
               (UI_CrosshairHandler__LoadSkin_d__9_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CrosshairHandler.<LoadSkin>d__9$$System.IDisposable.Dispose
// il2cpp: void UI_CrosshairHandler__LoadSkin_d__9__System_IDisposable_Dispose (UI_CrosshairHandler__LoadSkin_d__9_o* __this, const MethodInfo* method);
// 0x5d1b8b0

void UI_CrosshairHandler__LoadSkin_d__9__System_IDisposable_Dispose
               (UI_CrosshairHandler__LoadSkin_d__9_o *__this,MethodInfo *method)

{
  return;
}


// UI.CrosshairHandler.<LoadSkin>d__9$$MoveNext
// il2cpp: bool UI_CrosshairHandler__LoadSkin_d__9__MoveNext (UI_CrosshairHandler__LoadSkin_d__9_o* __this, const MethodInfo* method);
// 0x5d1b8c0

bool UI_CrosshairHandler__LoadSkin_d__9__MoveNext
               (UI_CrosshairHandler__LoadSkin_d__9_o *__this,MethodInfo *method)

{
  System_String_o **targetAddress;
  int iVar1;
  UI_CrosshairHandler_o *obj;
  UnityEngine_Texture2D_o *pUVar2;
  UI_CrosshairHandler_StaticFields *pUVar3;
  UnityEngine_UI_RawImage_o *pUVar4;
  bool bVar5;
  System_String_o *pSVar6;
  System_Collections_IEnumerator_o *target;
  Utility_CoroutineWithData_o *pUVar7;
  
  if (Il2CppMethodInitialized_07547da0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CoroutineWithData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CrosshairHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_07547da0 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  obj = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    pUVar7 = (__this->fields)._cwd_5__2;
    if (pUVar7 == (Utility_CoroutineWithData_o *)0x0) goto label_05d1bb62;
    pUVar2 = (UnityEngine_Texture2D_o *)(pUVar7->fields).Result;
    if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) {
      TypeInfo_UI_CrosshairHandler->static_fields->_crosshairSkinTexture = (UnityEngine_Texture2D_o *)0x0;
    }
    else if ((pUVar2->klass != TypeInfo_UnityEngine_Texture2D) ||
            (TypeInfo_UI_CrosshairHandler->static_fields->_crosshairSkinTexture = pUVar2,
            pUVar2->klass != TypeInfo_UnityEngine_Texture2D)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UnityEngine_Texture2D);
    }
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_CrosshairHandler->static_fields->_crosshairSkinTexture);
    pUVar3 = TypeInfo_UI_CrosshairHandler->static_fields;
    pUVar3->_crosshairSkinURL = (__this->fields).url;
    Il2CppCodeGenWriteBarrier(&pUVar3->_crosshairSkinURL);
    (__this->fields)._cwd_5__2 = (Utility_CoroutineWithData_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._cwd_5__2);
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    pSVar6 = (__this->fields).url;
    if (pSVar6 == (System_String_o *)0x0) goto label_05d1bb62;
    targetAddress = &(__this->fields).url;
    pSVar6 = System_String__Trim(pSVar6,(MethodInfo *)0x0);
    *targetAddress = pSVar6;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pSVar6 = *targetAddress;
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    }
    bVar5 = CustomSkins_TextureDownloader__ValidTextureURL(pSVar6,false,(MethodInfo *)0x0);
    if (!bVar5) {
      return false;
    }
    bVar5 = System_String__op_Inequality
                      (*targetAddress,TypeInfo_UI_CrosshairHandler->static_fields->_crosshairSkinURL,
                       (MethodInfo *)0x0);
    if (bVar5) {
      pSVar6 = *targetAddress;
      if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
      }
      target = CustomSkins_TextureDownloader__DownloadTexture
                         ((UnityEngine_MonoBehaviour_o *)obj,pSVar6,false,2000000,false,(MethodInfo *)0x0);
      pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CoroutineWithData);
      Utility_CoroutineWithData___ctor(pUVar7,(UnityEngine_MonoBehaviour_o *)obj,target,(MethodInfo *)0x0);
      (__this->fields)._cwd_5__2 = pUVar7;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._cwd_5__2);
      pUVar7 = (__this->fields)._cwd_5__2;
      if (pUVar7 != (Utility_CoroutineWithData_o *)0x0) {
        (__this->fields).__2__current = (Il2CppObject *)(pUVar7->fields)._Coroutine_k__BackingField;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (__this->fields).__1__state = 1;
        return true;
      }
      goto label_05d1bb62;
    }
  }
  if ((obj != (UI_CrosshairHandler_o *)0x0) &&
     (pUVar4 = (obj->fields)._crosshairImageWhite, pUVar4 != (UnityEngine_UI_RawImage_o *)0x0)) {
    UnityEngine_UI_RawImage__set_texture
              (pUVar4,(UnityEngine_Texture_o *)
                      TypeInfo_UI_CrosshairHandler->static_fields->_crosshairSkinTexture,(MethodInfo *)0x0);
    pUVar4 = (obj->fields)._crosshairImageRed;
    if (pUVar4 != (UnityEngine_UI_RawImage_o *)0x0) {
      UnityEngine_UI_RawImage__set_texture
                (pUVar4,(UnityEngine_Texture_o *)
                        TypeInfo_UI_CrosshairHandler->static_fields->_crosshairSkinTexture,(MethodInfo *)0x0);
      return false;
    }
  }
label_05d1bb62:
  ThrowNullReferenceException();
}


// UI.CrosshairHandler.<LoadSkin>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CrosshairHandler__LoadSkin_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CrosshairHandler__LoadSkin_d__9_o* __this, const MethodInfo* method);
// 0x5d1bb70

Il2CppObject *
UI_CrosshairHandler__LoadSkin_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CrosshairHandler__LoadSkin_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CrosshairHandler.<LoadSkin>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CrosshairHandler__LoadSkin_d__9__System_Collections_IEnumerator_Reset (UI_CrosshairHandler__LoadSkin_d__9_o* __this, const MethodInfo* method);
// 0x5d1bb80

void UI_CrosshairHandler__LoadSkin_d__9__System_Collections_IEnumerator_Reset
               (UI_CrosshairHandler__LoadSkin_d__9_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_CrosshairHandler_LoadSkin_d__9_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.CrosshairHandler.<LoadSkin>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CrosshairHandler__LoadSkin_d__9__System_Collections_IEnumerator_get_Current (UI_CrosshairHandler__LoadSkin_d__9_o* __this, const MethodInfo* method);
// 0x5d1bbc0

Il2CppObject *
UI_CrosshairHandler__LoadSkin_d__9__System_Collections_IEnumerator_get_Current
          (UI_CrosshairHandler__LoadSkin_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CrosshairHandler$$Awake
// il2cpp: void UI_CrosshairHandler__Awake (UI_CrosshairHandler_o* __this, const MethodInfo* method);
// 0x5d1b280

void UI_CrosshairHandler__Awake(UI_CrosshairHandler_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o **targetAddress;
  UnityEngine_UI_RawImage_o **targetAddress_00;
  UnityEngine_UI_Text_o **targetAddress_01;
  UnityEngine_UI_Text_o **targetAddress_02;
  UnityEngine_UI_RawImage_o *crosshairImageRed;
  UnityEngine_UI_Text_o *crosshairLabelRed;
  Settings_UISettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *pSVar3;
  bool bVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_UI_RawImage_o *pUVar7;
  UnityEngine_UI_Text_o *pUVar8;
  UnityEngine_UI_Image_o *pUVar9;
  UI_CrosshairHandler__LoadSkin_d__9_o *__this_00;
  UnityEngine_Color_o UVar10;
  
  if (Il2CppMethodInitialized_07547d9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_CrosshairScaler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/CrosshairImage");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/HookArrowImage");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547d9c = '\x01';
  }
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar6 = UI_ElementFactory__InstantiateAndBind(pUVar5,"Prefabs/InGame/CrosshairImage",(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
    pUVar7 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar6,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    targetAddress = &(__this->fields)._crosshairImageWhite;
    (__this->fields)._crosshairImageWhite = pUVar7;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar6 = UI_ElementFactory__InstantiateAndBind(pUVar5,"Prefabs/InGame/CrosshairImage",(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
      pUVar7 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar6,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage
                         );
      targetAddress_00 = &(__this->fields)._crosshairImageRed;
      (__this->fields)._crosshairImageRed = pUVar7;
      Il2CppCodeGenWriteBarrier(targetAddress_00);
      pUVar7 = (__this->fields)._crosshairImageRed;
      if (pUVar7 != (UnityEngine_UI_RawImage_o *)0x0) {
        UVar10.fields.b = 0.0;
        UVar10.fields.a = 1.0;
        UVar10.fields.r = 1.0;
        UVar10.fields.g = 0.0;
        (*(pUVar7->klass->vtable)._23_set_color.methodPtr)
                  (pUVar7,UVar10,(pUVar7->klass->vtable)._23_set_color.method);
        if (*targetAddress != (UnityEngine_UI_RawImage_o *)0x0) {
          pUVar5 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
            pUVar5 = UnityEngine_Transform__Find(pUVar5,"DefaultLabel",(MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
              pUVar8 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar5,
                                  (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
              targetAddress_01 = &(__this->fields)._crosshairLabelWhite;
              (__this->fields)._crosshairLabelWhite = pUVar8;
              Il2CppCodeGenWriteBarrier(targetAddress_01);
              pUVar7 = (__this->fields)._crosshairImageRed;
              if (pUVar7 != (UnityEngine_UI_RawImage_o *)0x0) {
                pUVar5 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
                if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                  pUVar5 = UnityEngine_Transform__Find(pUVar5,"DefaultLabel",(MethodInfo *)0x0);
                  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                    pUVar8 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)pUVar5,
                                        (MethodInfo_34B0830 *)
                                        MethodInfo_UnityEngine_Component_GetComponent_Text);
                    targetAddress_02 = &(__this->fields)._crosshairLabelRed;
                    (__this->fields)._crosshairLabelRed = pUVar8;
                    Il2CppCodeGenWriteBarrier(targetAddress_02);
                    pUVar5 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar6 = UI_ElementFactory__InstantiateAndBind
                                       (pUVar5,"Prefabs/InGame/HookArrowImage",(MethodInfo *)0x0);
                    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar9 = UnityEngine_GameObject__GetComponent_object_
                                         (pUVar6,(MethodInfo_353B730 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                      (__this->fields)._arrowLeft = pUVar9;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._arrowLeft);
                      pUVar5 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                      pUVar6 = UI_ElementFactory__InstantiateAndBind
                                         (pUVar5,"Prefabs/InGame/HookArrowImage",(MethodInfo *)0x0);
                      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar9 = UnityEngine_GameObject__GetComponent_object_
                                           (pUVar6,(MethodInfo_353B730 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                        (__this->fields)._arrowRight = pUVar9;
                        Il2CppCodeGenWriteBarrier(&(__this->fields)._arrowRight);
                        pUVar7 = (__this->fields)._crosshairImageWhite;
                        if (pUVar7 != (UnityEngine_UI_RawImage_o *)0x0) {
                          pUVar6 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
                          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                            Il2CppMethodInitialized_0753ecc8 = '\x01';
                          }
                          UI_ElementFactory__SetAnchor
                                    (pUVar6,4,4,
                                     (UnityEngine_Vector2_o)
                                     (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                                     (MethodInfo *)0x0);
                          if (*targetAddress_00 != (UnityEngine_UI_RawImage_o *)0x0) {
                            pUVar6 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)*targetAddress_00,(MethodInfo *)0x0
                                               );
                            if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                              Il2CppMethodInitialized_0753ecc8 = '\x01';
                            }
                            UI_ElementFactory__SetAnchor
                                      (pUVar6,4,4,
                                       (UnityEngine_Vector2_o)
                                       (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                                       (MethodInfo *)0x0);
                            if (*targetAddress != (UnityEngine_UI_RawImage_o *)0x0) {
                              pUVar6 = UnityEngine_Component__get_gameObject
                                                 ((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0)
                              ;
                              if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                                UnityEngine_GameObject__AddComponent_object_
                                          (pUVar6,(MethodInfo_353B6A0 *)
                                                  MethodInfo_UnityEngine_GameObject_AddComponent_CrosshairScaler
                                          );
                                if (*targetAddress_00 != (UnityEngine_UI_RawImage_o *)0x0) {
                                  pUVar6 = UnityEngine_Component__get_gameObject
                                                     ((UnityEngine_Component_o *)*targetAddress_00,
                                                      (MethodInfo *)0x0);
                                  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                                    UnityEngine_GameObject__AddComponent_object_
                                              (pUVar6,(MethodInfo_353B6A0 *)
                                                      MethodInfo_UnityEngine_GameObject_AddComponent_CrosshairScaler
                                              );
                                    pUVar7 = *targetAddress;
                                    crosshairImageRed = *targetAddress_00;
                                    pUVar8 = *targetAddress_01;
                                    crosshairLabelRed = *targetAddress_02;
                                    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
                                      il2cpp_codegen_runtime_class_init
                                                ((Il2CppClass *)TypeInfo_UI_CursorManager);
                                    }
                                    UI_CursorManager__UpdateCrosshair
                                              (pUVar7,crosshairImageRed,pUVar8,crosshairLabelRed,true,
                                               (MethodInfo *)0x0);
                                    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
                                    if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
                                       (pSVar2 = (pSVar1->fields).CrosshairSkin,
                                       pSVar2 != (Settings_StringSetting_o *)0x0)) {
                                      bVar4 = System_String__op_Inequality
                                                        ((pSVar2->fields)._value,"",
                                                         (MethodInfo *)0x0);
                                      if (!bVar4) {
                                        return;
                                      }
                                      pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
                                      if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
                                         (pSVar2 = (pSVar1->fields).CrosshairSkin,
                                         pSVar2 != (Settings_StringSetting_o *)0x0)) {
                                        pSVar3 = (pSVar2->fields)._value;
                                        if (Il2CppMethodInitialized_07547d9d == '\0') {
                                          il2cpp_codegen_initialize_runtime_metadata
                                                    (&TypeInfo_UI_CrosshairHandler_LoadSkin_d__9);
                                          Il2CppMethodInitialized_07547d9d = '\x01';
                                        }
                                        __this_00 = il2cpp_codegen_object_new
                                                              ((Il2CppClass *)
                                                               TypeInfo_UI_CrosshairHandler_LoadSkin_d__9);
                                        UI_CrosshairHandler__LoadSkin_d__9___ctor
                                                  (__this_00,0,(MethodInfo *)0x0);
                                        if (__this_00 != (UI_CrosshairHandler__LoadSkin_d__9_o *)0x0) {
                                          (__this_00->fields).__4__this = __this;
                                          Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
                                          (__this_00->fields).url = pSVar3;
                                          Il2CppCodeGenWriteBarrier(&(__this_00->fields).url);
                                          UnityEngine_MonoBehaviour__StartCoroutine_691c390
                                                    ((UnityEngine_MonoBehaviour_o *)__this,
                                                     (System_Collections_IEnumerator_o *)__this_00,
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
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CrosshairHandler$$LoadSkin
// il2cpp: System_Collections_IEnumerator_o* UI_CrosshairHandler__LoadSkin (UI_CrosshairHandler_o* __this, System_String_o* url, const MethodInfo* method);
// 0x5d1b780

System_Collections_IEnumerator_o *
UI_CrosshairHandler__LoadSkin(UI_CrosshairHandler_o *__this,System_String_o *url,MethodInfo *method)

{
  UI_CrosshairHandler__LoadSkin_d__9_o *__this_00;
  
  if (Il2CppMethodInitialized_07547d9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CrosshairHandler_LoadSkin_d__9);
    Il2CppMethodInitialized_07547d9d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CrosshairHandler_LoadSkin_d__9);
  UI_CrosshairHandler__LoadSkin_d__9___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 == (UI_CrosshairHandler__LoadSkin_d__9_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).url = url;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).url);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CrosshairHandler$$Update
// il2cpp: void UI_CrosshairHandler__Update (UI_CrosshairHandler_o* __this, const MethodInfo* method);
// 0x5d1b800

void UI_CrosshairHandler__Update(UI_CrosshairHandler_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *crosshairImageWhite;
  UnityEngine_UI_RawImage_o *crosshairImageRed;
  UnityEngine_UI_Text_o *crosshairLabelWhite;
  UnityEngine_UI_Text_o *crosshairLabelRed;
  
  if (Il2CppMethodInitialized_07547d9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_07547d9e = '\x01';
  }
  crosshairImageWhite = (__this->fields)._crosshairImageWhite;
  crosshairImageRed = (__this->fields)._crosshairImageRed;
  crosshairLabelWhite = (__this->fields)._crosshairLabelWhite;
  crosshairLabelRed = (__this->fields)._crosshairLabelRed;
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  UI_CursorManager__UpdateCrosshair
            (crosshairImageWhite,crosshairImageRed,crosshairLabelWhite,crosshairLabelRed,false,
             (MethodInfo *)0x0);
  UI_CursorManager__UpdateHookArrows
            ((__this->fields)._arrowLeft,(__this->fields)._arrowRight,(MethodInfo *)0x0);
  return;
}


// UI.CrosshairHandler$$.ctor
// il2cpp: void UI_CrosshairHandler___ctor (UI_CrosshairHandler_o* __this, const MethodInfo* method);
// 0x5d1b880

void UI_CrosshairHandler___ctor(UI_CrosshairHandler_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


