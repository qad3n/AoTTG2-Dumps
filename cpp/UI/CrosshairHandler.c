// Type: UI.CrosshairHandler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CrosshairHandler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CrosshairHandler.cs
// --------------------------------

// UI.CrosshairHandler.<LoadSkin>d__9$$.ctor
// il2cpp: void UI_CrosshairHandler__LoadSkin_d__9___ctor (UI_CrosshairHandler__LoadSkin_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_CrosshairHandler__LoadSkin_d__9___ctor(UI_CrosshairHandler__LoadSkin_d__9_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CrosshairHandler.<LoadSkin>d__9$$System.IDisposable.Dispose
// il2cpp: void UI_CrosshairHandler__LoadSkin_d__9__System_IDisposable_Dispose (UI_CrosshairHandler__LoadSkin_d__9_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_CrosshairHandler__LoadSkin_d__9__System_IDisposable_Dispose(UI_CrosshairHandler__LoadSkin_d__9_o* __this, MethodInfo* method)

{
  return;
}


// UI.CrosshairHandler.<LoadSkin>d__9$$MoveNext
// il2cpp: bool UI_CrosshairHandler__LoadSkin_d__9__MoveNext (UI_CrosshairHandler__LoadSkin_d__9_o* __this, const MethodInfo* method);
// 0x182253f10

bool UI_CrosshairHandler__LoadSkin_d__9__MoveNext
               (UI_CrosshairHandler__LoadSkin_d__9_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_CrosshairHandler_o *obj;
  UnityEngine_Coroutine_o *value;
  UnityEngine_Texture2D_o *pUVar2;
  UnityEngine_UI_RawImage_o *pUVar3;
  bool bVar4;
  System_String_o *pSVar5;
  System_Collections_IEnumerator_o *target;
  Utility_CoroutineWithData_o *pUVar6;
  UnityEngine_Texture2D_o *value_00;
  
  if (Il2CppMethodInitialized_18434722d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CoroutineWithData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CrosshairHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_18434722d = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  obj = (__this->fields).__4__this;
  if (iVar1 == 0) {
    pSVar5 = (__this->fields).url;
    (__this->fields).__1__state = -1;
    if (pSVar5 == (System_String_o *)0x0) goto label_1822541c9;
    pSVar5 = System_String__Trim(pSVar5,(MethodInfo *)0x0);
    (__this->fields).url = pSVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).url,pSVar5);
    pSVar5 = (__this->fields).url;
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    }
    bVar4 = CustomSkins_TextureDownloader__ValidTextureURL(pSVar5,false,(MethodInfo *)0x0);
    if (!bVar4) {
      return false;
    }
    bVar4 = System_String__op_Inequality
                      ((__this->fields).url,TypeInfo_UI_CrosshairHandler->static_fields->_crosshairSkinURL,
                       (MethodInfo *)0x0);
    if (bVar4) {
      pSVar5 = (__this->fields).url;
      if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
      }
      target = CustomSkins_TextureDownloader__DownloadTexture
                         ((UnityEngine_MonoBehaviour_o *)obj,pSVar5,false,2000000,false,(MethodInfo *)0x0);
      pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CoroutineWithData);
      Utility_CoroutineWithData___ctor(pUVar6,(UnityEngine_MonoBehaviour_o *)obj,target,(MethodInfo *)0x0);
      (__this->fields)._cwd_5__2 = pUVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._cwd_5__2,pUVar6);
      pUVar6 = (__this->fields)._cwd_5__2;
      if (pUVar6 != (Utility_CoroutineWithData_o *)0x0) {
        value = (pUVar6->fields)._Coroutine_k__BackingField;
        (__this->fields).__2__current = (Il2CppObject *)value;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
        (__this->fields).__1__state = 1;
        return true;
      }
      goto label_1822541c9;
    }
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    pUVar6 = (__this->fields)._cwd_5__2;
    (__this->fields).__1__state = -1;
    if (pUVar6 == (Utility_CoroutineWithData_o *)0x0) goto label_1822541c9;
    pUVar2 = (UnityEngine_Texture2D_o *)(pUVar6->fields).Result;
    value_00 = (UnityEngine_Texture2D_o *)0x0;
    if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) {
      TypeInfo_UI_CrosshairHandler->static_fields->_crosshairSkinTexture = (UnityEngine_Texture2D_o *)0x0;
    }
    else {
      if (pUVar2->klass == TypeInfo_UnityEngine_Texture2D) {
        value_00 = pUVar2;
      }
      if (value_00 == (UnityEngine_Texture2D_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UnityEngine_Texture2D);
      }
      TypeInfo_UI_CrosshairHandler->static_fields->_crosshairSkinTexture = value_00;
      value_00 = (UnityEngine_Texture2D_o *)0x0;
      if (pUVar2->klass == TypeInfo_UnityEngine_Texture2D) {
        value_00 = pUVar2;
      }
      if (value_00 == (UnityEngine_Texture2D_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UnityEngine_Texture2D);
      }
    }
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_CrosshairHandler->static_fields->_crosshairSkinTexture,value_00);
    pSVar5 = (__this->fields).url;
    TypeInfo_UI_CrosshairHandler->static_fields->_crosshairSkinURL = pSVar5;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_CrosshairHandler->static_fields->_crosshairSkinURL,pSVar5);
    (__this->fields)._cwd_5__2 = (Utility_CoroutineWithData_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._cwd_5__2,(void *)0x0);
  }
  if ((obj != (UI_CrosshairHandler_o *)0x0) &&
     (pUVar3 = (obj->fields)._crosshairImageWhite, pUVar3 != (UnityEngine_UI_RawImage_o *)0x0)) {
    UnityEngine_UI_RawImage__set_texture
              (pUVar3,(UnityEngine_Texture_o *)
                      TypeInfo_UI_CrosshairHandler->static_fields->_crosshairSkinTexture,(MethodInfo *)0x0);
    pUVar3 = (obj->fields)._crosshairImageRed;
    if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
      UnityEngine_UI_RawImage__set_texture
                (pUVar3,(UnityEngine_Texture_o *)
                        TypeInfo_UI_CrosshairHandler->static_fields->_crosshairSkinTexture,(MethodInfo *)0x0);
      return false;
    }
  }
label_1822541c9:
  ThrowNullReferenceException();
}


// UI.CrosshairHandler.<LoadSkin>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CrosshairHandler__LoadSkin_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CrosshairHandler__LoadSkin_d__9_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CrosshairHandler__LoadSkin_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_CrosshairHandler__LoadSkin_d__9_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CrosshairHandler.<LoadSkin>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CrosshairHandler__LoadSkin_d__9__System_Collections_IEnumerator_Reset (UI_CrosshairHandler__LoadSkin_d__9_o* __this, const MethodInfo* method);
// 0x1822541f0

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
// 0x180573e90

Il2CppObject*
UI_CrosshairHandler__LoadSkin_d__9__System_Collections_IEnumerator_get_Current(UI_CrosshairHandler__LoadSkin_d__9_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CrosshairHandler$$Awake
// il2cpp: void UI_CrosshairHandler__Awake (UI_CrosshairHandler_o* __this, const MethodInfo* method);
// 0x18223f270

void UI_CrosshairHandler__Awake(UI_CrosshairHandler_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *crosshairImageRed;
  UnityEngine_UI_Text_o *crosshairLabelRed;
  Settings_UISettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *value;
  bool bVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_RawImage_o *pUVar6;
  UnityEngine_UI_Text_o *pUVar7;
  UnityEngine_UI_Image_o *pUVar8;
  UI_CrosshairHandler__LoadSkin_d__9_o *routine;
  UnityEngine_Color_Fields local_28;
  
  if (Il2CppMethodInitialized_18434722a == '\0') {
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
    Il2CppMethodInitialized_18434722a = '\x01';
  }
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar5 = UI_ElementFactory__InstantiateAndBind(pUVar4,"Prefabs/InGame/CrosshairImage",(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
    pUVar6 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar5,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    (__this->fields)._crosshairImageWhite = pUVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._crosshairImageWhite,pUVar6);
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar5 = UI_ElementFactory__InstantiateAndBind(pUVar4,"Prefabs/InGame/CrosshairImage",(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      pUVar6 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar5,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage)
      ;
      (__this->fields)._crosshairImageRed = pUVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._crosshairImageRed,pUVar6);
      pUVar6 = (__this->fields)._crosshairImageRed;
      if (pUVar6 != (UnityEngine_UI_RawImage_o *)0x0) {
        local_28.r = 1.0;
        local_28.g = 0.0;
        local_28.b = 0.0;
        local_28.a = 1.0;
        (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                  (pUVar6,(UnityEngine_Color_o *)&local_28,(pUVar6->klass->vtable)._23_set_color.method);
        pUVar6 = (__this->fields)._crosshairImageWhite;
        if (pUVar6 != (UnityEngine_UI_RawImage_o *)0x0) {
          pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            pUVar4 = UnityEngine_Transform__Find(pUVar4,"DefaultLabel",(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              pUVar7 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar4,
                                  (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
              (__this->fields)._crosshairLabelWhite = pUVar7;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._crosshairLabelWhite,pUVar7);
              pUVar6 = (__this->fields)._crosshairImageRed;
              if (pUVar6 != (UnityEngine_UI_RawImage_o *)0x0) {
                pUVar4 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
                if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                  pUVar4 = UnityEngine_Transform__Find(pUVar4,"DefaultLabel",(MethodInfo *)0x0);
                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                    pUVar7 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)pUVar4,
                                        (MethodInfo_6651A0 *)
                                        MethodInfo_UnityEngine_Component_GetComponent_Text);
                    (__this->fields)._crosshairLabelRed = pUVar7;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._crosshairLabelRed,pUVar7);
                    pUVar4 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar5 = UI_ElementFactory__InstantiateAndBind
                                       (pUVar4,"Prefabs/InGame/HookArrowImage",(MethodInfo *)0x0);
                    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                         (pUVar5,(MethodInfo_6F5650 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                      (__this->fields)._arrowLeft = pUVar8;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._arrowLeft,pUVar8);
                      pUVar4 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                      pUVar5 = UI_ElementFactory__InstantiateAndBind
                                         (pUVar4,"Prefabs/InGame/HookArrowImage",(MethodInfo *)0x0);
                      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                           (pUVar5,(MethodInfo_6F5650 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                        (__this->fields)._arrowRight = pUVar8;
                        Il2CppCodeGenWriteBarrier(&(__this->fields)._arrowRight,pUVar8);
                        pUVar6 = (__this->fields)._crosshairImageWhite;
                        if (pUVar6 != (UnityEngine_UI_RawImage_o *)0x0) {
                          pUVar5 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
                          if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                            Il2CppMethodInitialized_18433e3c9 = '\x01';
                          }
                          UI_ElementFactory__SetAnchor
                                    (pUVar5,4,4,
                                     (UnityEngine_Vector2_o)
                                     (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                                     (MethodInfo *)0x0);
                          pUVar6 = (__this->fields)._crosshairImageRed;
                          if (pUVar6 != (UnityEngine_UI_RawImage_o *)0x0) {
                            pUVar5 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
                            if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                              Il2CppMethodInitialized_18433e3c9 = '\x01';
                            }
                            UI_ElementFactory__SetAnchor
                                      (pUVar5,4,4,
                                       (UnityEngine_Vector2_o)
                                       (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                                       (MethodInfo *)0x0);
                            pUVar6 = (__this->fields)._crosshairImageWhite;
                            if (pUVar6 != (UnityEngine_UI_RawImage_o *)0x0) {
                              pUVar5 = UnityEngine_Component__get_gameObject
                                                 ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
                              if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                                UnityEngine_GameObject__AddComponent_object_
                                          (pUVar5,(MethodInfo_6F4D60 *)
                                                  MethodInfo_UnityEngine_GameObject_AddComponent_CrosshairScaler
                                          );
                                pUVar6 = (__this->fields)._crosshairImageRed;
                                if (pUVar6 != (UnityEngine_UI_RawImage_o *)0x0) {
                                  pUVar5 = UnityEngine_Component__get_gameObject
                                                     ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
                                  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                                    UnityEngine_GameObject__AddComponent_object_
                                              (pUVar5,(MethodInfo_6F4D60 *)
                                                      MethodInfo_UnityEngine_GameObject_AddComponent_CrosshairScaler
                                              );
                                    pUVar6 = (__this->fields)._crosshairImageWhite;
                                    crosshairImageRed = (__this->fields)._crosshairImageRed;
                                    pUVar7 = (__this->fields)._crosshairLabelWhite;
                                    crosshairLabelRed = (__this->fields)._crosshairLabelRed;
                                    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
                                      il2cpp_codegen_runtime_class_init
                                                ((Il2CppClass *)TypeInfo_UI_CursorManager);
                                    }
                                    UI_CursorManager__UpdateCrosshair
                                              (pUVar6,crosshairImageRed,pUVar7,crosshairLabelRed,true,
                                               (MethodInfo *)0x0);
                                    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
                                    if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
                                       (pSVar2 = (pSVar1->fields).CrosshairSkin,
                                       pSVar2 != (Settings_StringSetting_o *)0x0)) {
                                      bVar3 = System_String__op_Inequality
                                                        ((pSVar2->fields)._value,"",
                                                         (MethodInfo *)0x0);
                                      if (bVar3) {
                                        pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
                                        if ((pSVar1 == (Settings_UISettings_o *)0x0) ||
                                           (pSVar2 = (pSVar1->fields).CrosshairSkin,
                                           pSVar2 == (Settings_StringSetting_o *)0x0)) goto label_18223f759;
                                        value = (pSVar2->fields)._value;
                                        if (Il2CppMethodInitialized_18434722b == '\0') {
                                          il2cpp_codegen_initialize_runtime_metadata
                                                    (&TypeInfo_UI_CrosshairHandler_LoadSkin_d__9);
                                          Il2CppMethodInitialized_18434722b = '\x01';
                                        }
                                        routine = il2cpp_codegen_object_new
                                                            ((Il2CppClass *)
                                                             TypeInfo_UI_CrosshairHandler_LoadSkin_d__9);
                                        System_Configuration_ConfigurationCollectionAttribute___ctor
                                                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o
                                                    *)routine,(MethodInfo *)0x0);
                                        (routine->fields).__1__state = 0;
                                        (routine->fields).__4__this = __this;
                                        Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
                                        (routine->fields).url = value;
                                        Il2CppCodeGenWriteBarrier(&(routine->fields).url,value);
                                        UnityEngine_MonoBehaviour__StartCoroutine_Auto
                                                  ((UnityEngine_MonoBehaviour_o *)__this,
                                                   (System_Collections_IEnumerator_o *)routine,
                                                   (MethodInfo *)0x0);
                                      }
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
label_18223f759:
  ThrowNullReferenceException();
}


// UI.CrosshairHandler$$LoadSkin
// il2cpp: System_Collections_IEnumerator_o* UI_CrosshairHandler__LoadSkin (UI_CrosshairHandler_o* __this, System_String_o* url, const MethodInfo* method);
// 0x18223f760

System_Collections_IEnumerator_o *
UI_CrosshairHandler__LoadSkin(UI_CrosshairHandler_o *__this,System_String_o *url,MethodInfo *method)

{
  UI_CrosshairHandler__LoadSkin_d__9_o *__this_00;
  
  if (Il2CppMethodInitialized_18434722b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CrosshairHandler_LoadSkin_d__9);
    Il2CppMethodInitialized_18434722b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CrosshairHandler_LoadSkin_d__9);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).url = url;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).url,url);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CrosshairHandler$$Update
// il2cpp: void UI_CrosshairHandler__Update (UI_CrosshairHandler_o* __this, const MethodInfo* method);
// 0x18223f7f0

void UI_CrosshairHandler__Update(UI_CrosshairHandler_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *crosshairImageWhite;
  UnityEngine_UI_RawImage_o *crosshairImageRed;
  UnityEngine_UI_Text_o *crosshairLabelWhite;
  UnityEngine_UI_Text_o *crosshairLabelRed;
  
  if (Il2CppMethodInitialized_18434722c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_18434722c = '\x01';
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
// 0x180528540

void
UI_CrosshairHandler___ctor(UI_CrosshairHandler_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


