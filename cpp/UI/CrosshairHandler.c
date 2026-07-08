// Type: UI.CrosshairHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CrosshairHandler.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/CrosshairHandler.cs  [CHANGED since prior version]
// --------------------------------

// UI.CrosshairHandler.<LoadSkin>d__9$$.ctor
// il2cpp: void UI_CrosshairHandler__LoadSkin_d__9___ctor (UI_CrosshairHandler__LoadSkin_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x40a85e0

void UI_CrosshairHandler_<LoadSkin>d__9___ctor
               (UI_CrosshairHandler__LoadSkin_d__9_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CrosshairHandler.<LoadSkin>d__9$$System.IDisposable.Dispose
// il2cpp: void UI_CrosshairHandler__LoadSkin_d__9__System_IDisposable_Dispose (UI_CrosshairHandler__LoadSkin_d__9_o* __this, const MethodInfo* method);
// 0x40a8690

void UI_CrosshairHandler_<LoadSkin>d__9__System_IDisposable_Dispose
               (UI_CrosshairHandler__LoadSkin_d__9_o *__this,MethodInfo *method)

{
  return;
}


// UI.CrosshairHandler.<LoadSkin>d__9$$MoveNext
// il2cpp: bool UI_CrosshairHandler__LoadSkin_d__9__MoveNext (UI_CrosshairHandler__LoadSkin_d__9_o* __this, const MethodInfo* method);
// 0x40a86a0

bool_conflict
UI_CrosshairHandler_<LoadSkin>d__9__MoveNext
          (UI_CrosshairHandler__LoadSkin_d__9_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  int iVar2;
  UI_CrosshairHandler_o *obj;
  Utility_CoroutineWithData_o *pUVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  UnityEngine_UI_RawImage_o *pUVar6;
  bool_conflict bVar7;
  System_String_o *pSVar8;
  System_Collections_IEnumerator_o *target;
  Utility_CoroutineWithData_o *__this_00;
  
  if (DAT_05704612 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CoroutineWithData);
    il2cpp_init_method_metadata(&TypeInfo_CrosshairHandler);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&TypeInfo_TextureDownloader);
    DAT_05704612 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  obj = (__this->fields).__4__this;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    pUVar3 = (__this->fields)._cwd_5__2;
    if (pUVar3 == (Utility_CoroutineWithData_o *)0x0) goto LAB_040a8918;
    pIVar4 = (pUVar3->fields).Result;
    if ((pIVar4 != (Il2CppObject *)0x0) && (pIVar4->klass != TypeInfo_Texture2D)) {
LAB_040a891d:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pIVar4,TypeInfo_Texture2D);
    }
    **(long **)(TypeInfo_CrosshairHandler + 0xb8) = (long)pIVar4;
    if ((pIVar4 != (Il2CppObject *)0x0) && (pIVar4->klass != TypeInfo_Texture2D)) goto LAB_040a891d;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CrosshairHandler + 0xb8));
    lVar5 = *(long *)(TypeInfo_CrosshairHandler + 0xb8);
    *(System_String_o **)(lVar5 + 8) = (__this->fields).url;
    il2cpp_runtime_glue(lVar5 + 8);
    (__this->fields)._cwd_5__2 = (Utility_CoroutineWithData_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._cwd_5__2,0);
  }
  else {
    if (iVar2 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    pSVar8 = (__this->fields).url;
    if (pSVar8 == (System_String_o *)0x0) goto LAB_040a8918;
    ppSVar1 = &(__this->fields).url;
    pSVar8 = System_String__Trim(pSVar8,(MethodInfo *)0x0);
    *ppSVar1 = pSVar8;
    il2cpp_runtime_glue(ppSVar1);
    pSVar8 = *ppSVar1;
    if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = CustomSkins_TextureDownloader__ValidTextureURL(pSVar8,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return 0;
    }
    bVar7 = System_String__op_Inequality
                      (*ppSVar1,*(System_String_o **)(*(long *)(TypeInfo_CrosshairHandler + 0xb8) + 8),
                       (MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      pSVar8 = *ppSVar1;
      if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      target = CustomSkins_TextureDownloader__DownloadTexture
                         ((UnityEngine_MonoBehaviour_o *)obj,pSVar8,0,2000000,(MethodInfo *)0x0);
      __this_00 = (Utility_CoroutineWithData_o *)il2cpp_runtime_glue(TypeInfo_CoroutineWithData);
      Utility_CoroutineWithData___ctor
                (__this_00,(UnityEngine_MonoBehaviour_o *)obj,target,(MethodInfo *)0x0);
      (__this->fields)._cwd_5__2 = __this_00;
      il2cpp_runtime_glue(&(__this->fields)._cwd_5__2,__this_00);
      pUVar3 = (__this->fields)._cwd_5__2;
      if (pUVar3 != (Utility_CoroutineWithData_o *)0x0) {
        (__this->fields).__2__current = (Il2CppObject *)(pUVar3->fields)._Coroutine_k__BackingField;
        il2cpp_runtime_glue(&(__this->fields).__2__current);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
      }
      goto LAB_040a8918;
    }
  }
  if ((obj != (UI_CrosshairHandler_o *)0x0) &&
     (pUVar6 = (obj->fields)._crosshairImageWhite, pUVar6 != (UnityEngine_UI_RawImage_o *)0x0)) {
    UnityEngine_UI_RawImage__set_texture
              (pUVar6,(UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_CrosshairHandler + 0xb8),
               (MethodInfo *)0x0);
    pUVar6 = (obj->fields)._crosshairImageRed;
    if (pUVar6 != (UnityEngine_UI_RawImage_o *)0x0) {
      UnityEngine_UI_RawImage__set_texture
                (pUVar6,(UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_CrosshairHandler + 0xb8),
                 (MethodInfo *)0x0);
      return 0;
    }
  }
LAB_040a8918:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CrosshairHandler.<LoadSkin>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CrosshairHandler__LoadSkin_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CrosshairHandler__LoadSkin_d__9_o* __this, const MethodInfo* method);
// 0x40a8930

Il2CppObject *
UI_CrosshairHandler_<LoadSkin>d__9__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_CrosshairHandler__LoadSkin_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CrosshairHandler.<LoadSkin>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CrosshairHandler__LoadSkin_d__9__System_Collections_IEnumerator_Reset (UI_CrosshairHandler__LoadSkin_d__9_o* __this, const MethodInfo* method);
// 0x40a8940

void UI_CrosshairHandler_<LoadSkin>d__9__System_Collections_IEnumerator_Reset
               (UI_CrosshairHandler__LoadSkin_d__9_o *__this,MethodInfo *method)

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


// UI.CrosshairHandler.<LoadSkin>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CrosshairHandler__LoadSkin_d__9__System_Collections_IEnumerator_get_Current (UI_CrosshairHandler__LoadSkin_d__9_o* __this, const MethodInfo* method);
// 0x40a8980

Il2CppObject *
UI_CrosshairHandler_<LoadSkin>d__9__System_Collections_IEnumerator_get_Current
          (UI_CrosshairHandler__LoadSkin_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CrosshairHandler$$Awake
// il2cpp: void UI_CrosshairHandler__Awake (UI_CrosshairHandler_o* __this, const MethodInfo* method);
// 0x40a8050

void UI_CrosshairHandler__Awake(UI_CrosshairHandler_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o **ppUVar1;
  UnityEngine_UI_RawImage_o **ppUVar2;
  UnityEngine_UI_Text_o **ppUVar3;
  UnityEngine_UI_Text_o **ppUVar4;
  UnityEngine_UI_RawImage_o *crosshairImageRed;
  UnityEngine_UI_Text_o *crosshairLabelRed;
  long lVar5;
  Il2CppClass *pIVar6;
  bool_conflict bVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_UI_RawImage_o *pUVar10;
  UnityEngine_UI_Text_o *pUVar11;
  UnityEngine_UI_Image_o *pUVar12;
  Il2CppObject *__this_00;
  
  if (DAT_0570460f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    il2cpp_init_method_metadata(&MethodInfo_CrosshairScaler_AddComponent_CrosshairScaler);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"Prefabs/InGame/CrosshairImage");
    il2cpp_init_method_metadata(&"Prefabs/InGame/HookArrowImage");
    il2cpp_init_method_metadata(&"DefaultLabel");
    il2cpp_init_method_metadata(&"");
    DAT_0570460f = '\x01';
  }
  pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar9 = UI_ElementFactory__InstantiateAndBind(pUVar8,"Prefabs/InGame/CrosshairImage",(MethodInfo *)0x0);
  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
    pUVar10 = (UnityEngine_UI_RawImage_o *)
              UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_RawImage_GetComponent_RawImage);
    ppUVar1 = &(__this->fields)._crosshairImageWhite;
    (__this->fields)._crosshairImageWhite = pUVar10;
    il2cpp_runtime_glue(ppUVar1);
    pUVar8 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar9 = UI_ElementFactory__InstantiateAndBind(pUVar8,"Prefabs/InGame/CrosshairImage",(MethodInfo *)0x0);
    if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
      pUVar10 = (UnityEngine_UI_RawImage_o *)
                UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_RawImage_GetComponent_RawImage);
      ppUVar2 = &(__this->fields)._crosshairImageRed;
      (__this->fields)._crosshairImageRed = pUVar10;
      il2cpp_runtime_glue(ppUVar2,pUVar10);
      pUVar10 = (__this->fields)._crosshairImageRed;
      if (pUVar10 != (UnityEngine_UI_RawImage_o *)0x0) {
        (*(pUVar10->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0);
        if (*ppUVar1 != (UnityEngine_UI_RawImage_o *)0x0) {
          pUVar8 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)*ppUVar1,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            pUVar8 = UnityEngine_Transform__Find(pUVar8,"DefaultLabel",(MethodInfo *)0x0);
            if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
              pUVar11 = (UnityEngine_UI_Text_o *)
                        UnityEngine_Component__GetComponent<object>
                                  ((UnityEngine_Component_o *)pUVar8,MethodInfo_Text_GetComponent_Text);
              ppUVar3 = &(__this->fields)._crosshairLabelWhite;
              (__this->fields)._crosshairLabelWhite = pUVar11;
              il2cpp_runtime_glue(ppUVar3);
              pUVar10 = (__this->fields)._crosshairImageRed;
              if (pUVar10 != (UnityEngine_UI_RawImage_o *)0x0) {
                pUVar8 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
                if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                  pUVar8 = UnityEngine_Transform__Find(pUVar8,"DefaultLabel",(MethodInfo *)0x0);
                  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                    pUVar11 = (UnityEngine_UI_Text_o *)
                              UnityEngine_Component__GetComponent<object>
                                        ((UnityEngine_Component_o *)pUVar8,MethodInfo_Text_GetComponent_Text);
                    ppUVar4 = &(__this->fields)._crosshairLabelRed;
                    (__this->fields)._crosshairLabelRed = pUVar11;
                    il2cpp_runtime_glue(ppUVar4);
                    pUVar8 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar9 = UI_ElementFactory__InstantiateAndBind
                                       (pUVar8,"Prefabs/InGame/HookArrowImage",(MethodInfo *)0x0);
                    if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar12 = (UnityEngine_UI_Image_o *)
                                UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_Image_GetComponent_Image);
                      (__this->fields)._arrowLeft = pUVar12;
                      il2cpp_runtime_glue(&(__this->fields)._arrowLeft);
                      pUVar8 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                      pUVar9 = UI_ElementFactory__InstantiateAndBind
                                         (pUVar8,"Prefabs/InGame/HookArrowImage",(MethodInfo *)0x0);
                      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar12 = (UnityEngine_UI_Image_o *)
                                  UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_Image_GetComponent_Image);
                        (__this->fields)._arrowRight = pUVar12;
                        il2cpp_runtime_glue(&(__this->fields)._arrowRight);
                        pUVar10 = (__this->fields)._crosshairImageWhite;
                        if (pUVar10 != (UnityEngine_UI_RawImage_o *)0x0) {
                          pUVar9 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
                          if (DAT_056fe093 == '\0') {
                            il2cpp_init_method_metadata(&TypeInfo_Vector2);
                            DAT_056fe093 = '\x01';
                          }
                          UI_ElementFactory__SetAnchor
                                    (pUVar9,4,4,
                                     (UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                     (MethodInfo *)0x0);
                          if (*ppUVar2 != (UnityEngine_UI_RawImage_o *)0x0) {
                            pUVar9 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)*ppUVar2,
                                                (MethodInfo *)0x0);
                            if (DAT_056fe093 == '\0') {
                              il2cpp_init_method_metadata(&TypeInfo_Vector2);
                              DAT_056fe093 = '\x01';
                            }
                            UI_ElementFactory__SetAnchor
                                      (pUVar9,4,4,
                                       (UnityEngine_Vector2_o)
                                       **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                       (MethodInfo *)0x0);
                            if (*ppUVar1 != (UnityEngine_UI_RawImage_o *)0x0) {
                              pUVar9 = UnityEngine_Component__get_gameObject
                                                 ((UnityEngine_Component_o *)*ppUVar1,
                                                  (MethodInfo *)0x0);
                              if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                                UnityEngine_GameObject__AddComponent<object>(pUVar9,MethodInfo_CrosshairScaler_AddComponent_CrosshairScaler);
                                if (*ppUVar2 != (UnityEngine_UI_RawImage_o *)0x0) {
                                  pUVar9 = UnityEngine_Component__get_gameObject
                                                     ((UnityEngine_Component_o *)*ppUVar2,
                                                      (MethodInfo *)0x0);
                                  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                                    UnityEngine_GameObject__AddComponent<object>
                                              (pUVar9,MethodInfo_CrosshairScaler_AddComponent_CrosshairScaler);
                                    pUVar10 = *ppUVar1;
                                    crosshairImageRed = *ppUVar2;
                                    pUVar11 = *ppUVar3;
                                    crosshairLabelRed = *ppUVar4;
                                    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                                      il2cpp_init_class();
                                    }
                                    UI_CursorManager__UpdateCrosshair
                                              (pUVar10,crosshairImageRed,pUVar11,crosshairLabelRed,1
                                               ,(MethodInfo *)0x0);
                                    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                    if ((lVar5 != 0) &&
                                       (lVar5 = *(long *)(lVar5 + 0x58), lVar5 != 0)) {
                                      bVar7 = System_String__op_Inequality
                                                        (*(System_String_o **)(lVar5 + 0x18),
                                                         "",(MethodInfo *)0x0);
                                      if ((char)bVar7 == '\0') {
                                        return;
                                      }
                                      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                      if ((lVar5 != 0) &&
                                         (lVar5 = *(long *)(lVar5 + 0x58), lVar5 != 0)) {
                                        pIVar6 = *(Il2CppClass **)(lVar5 + 0x18);
                                        if (DAT_05704610 == '\0') {
                                          il2cpp_init_method_metadata(&TypeInfo_LoadSkin_d__9);
                                          DAT_05704610 = '\x01';
                                        }
                                        __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkin_d__9)
                                        ;
                                        System_Object___ctor(__this_00,(MethodInfo *)0x0);
                                        *(undefined4 *)&__this_00[1].klass = 0;
                                        if (__this_00 != (Il2CppObject *)0x0) {
                                          __this_00[2].monitor = __this;
                                          il2cpp_runtime_glue(&__this_00[2].monitor,__this);
                                          __this_00[2].klass = pIVar6;
                                          il2cpp_runtime_glue(__this_00 + 2,pIVar6);
                                          UnityEngine_MonoBehaviour__StartCoroutine
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CrosshairHandler$$LoadSkin
// il2cpp: System_Collections_IEnumerator_o* UI_CrosshairHandler__LoadSkin (UI_CrosshairHandler_o* __this, System_String_o* url, const MethodInfo* method);
// 0x40a8550

System_Collections_IEnumerator_o *
UI_CrosshairHandler__LoadSkin(UI_CrosshairHandler_o *__this,System_String_o *url,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704610 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LoadSkin_d__9);
    DAT_05704610 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkin_d__9);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    __this_00[2].klass = (Il2CppClass *)url;
    il2cpp_runtime_glue(__this_00 + 2,url);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CrosshairHandler$$Update
// il2cpp: void UI_CrosshairHandler__Update (UI_CrosshairHandler_o* __this, const MethodInfo* method);
// 0x40a8600

void UI_CrosshairHandler__Update(UI_CrosshairHandler_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *crosshairImageWhite;
  UnityEngine_UI_RawImage_o *crosshairImageRed;
  UnityEngine_UI_Text_o *crosshairLabelWhite;
  UnityEngine_UI_Text_o *crosshairLabelRed;
  
  if (DAT_05704611 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    DAT_05704611 = '\x01';
  }
  crosshairImageWhite = (__this->fields)._crosshairImageWhite;
  crosshairImageRed = (__this->fields)._crosshairImageRed;
  crosshairLabelWhite = (__this->fields)._crosshairLabelWhite;
  crosshairLabelRed = (__this->fields)._crosshairLabelRed;
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UI_CursorManager__UpdateCrosshair
            (crosshairImageWhite,crosshairImageRed,crosshairLabelWhite,crosshairLabelRed,0,
             (MethodInfo *)0x0);
  UI_CursorManager__UpdateHookArrows
            ((__this->fields)._arrowLeft,(__this->fields)._arrowRight,(MethodInfo *)0x0);
  return;
}


// UI.CrosshairHandler$$.ctor
// il2cpp: void UI_CrosshairHandler___ctor (UI_CrosshairHandler_o* __this, const MethodInfo* method);
// 0x40a8680

void UI_CrosshairHandler___ctor(UI_CrosshairHandler_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


