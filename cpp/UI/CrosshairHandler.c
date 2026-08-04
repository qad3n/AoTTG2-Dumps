// Type: UI.CrosshairHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CrosshairHandler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CrosshairHandler.cs
// --------------------------------

// UI.CrosshairHandler.<LoadSkin>d__9$$.ctor
// il2cpp: void UI_CrosshairHandler__LoadSkin_d__9___ctor (UI_CrosshairHandler__LoadSkin_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x43b9de0

void UI_CrosshairHandler__LoadSkin_d__9___ctor
               (UI_CrosshairHandler__LoadSkin_d__9_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CrosshairHandler.<LoadSkin>d__9$$System.IDisposable.Dispose
// il2cpp: void UI_CrosshairHandler__LoadSkin_d__9__System_IDisposable_Dispose (UI_CrosshairHandler__LoadSkin_d__9_o* __this, const MethodInfo* method);
// 0x43b9e90

void UI_CrosshairHandler__LoadSkin_d__9__System_IDisposable_Dispose
               (UI_CrosshairHandler__LoadSkin_d__9_o *__this,MethodInfo *method)

{
  return;
}


// UI.CrosshairHandler.<LoadSkin>d__9$$MoveNext
// il2cpp: bool UI_CrosshairHandler__LoadSkin_d__9__MoveNext (UI_CrosshairHandler__LoadSkin_d__9_o* __this, const MethodInfo* method);
// 0x43b9ea0

bool_conflict
UI_CrosshairHandler__LoadSkin_d__9__MoveNext(UI_CrosshairHandler__LoadSkin_d__9_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  int iVar2;
  UI_CrosshairHandler_o *obj;
  Utility_CoroutineWithData_o *pUVar3;
  long lVar4;
  UnityEngine_UI_RawImage_o *pUVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  System_Collections_IEnumerator_o *target;
  MethodInfo *__this_00;
  System_String_c *pSVar8;
  
  if (g_data_057ae39f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CoroutineWithData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CrosshairHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TextureDownloader);
    g_data_057ae39f = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  obj = (__this->fields).__4__this;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    pUVar3 = (__this->fields)._cwd_5__2;
    if (pUVar3 != (Utility_CoroutineWithData_o *)0x0) {
      method = (MethodInfo *)(pUVar3->fields).Result;
      if ((method != (MethodInfo *)0x0) &&
         (pSVar8 = TypeInfo_Texture2D, (System_String_c *)method->methodPointer != TypeInfo_Texture2D)) goto label_043ba11d;
      **(undefined8 **)(TypeInfo_CrosshairHandler + 0xb8) = method;
      if ((method != (MethodInfo *)0x0) &&
         (pSVar8 = TypeInfo_Texture2D, (System_String_c *)method->methodPointer != TypeInfo_Texture2D)) goto label_043ba11d;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CrosshairHandler + 0xb8));
      lVar4 = *(long *)(TypeInfo_CrosshairHandler + 0xb8);
      *(System_String_o **)(lVar4 + 8) = (__this->fields).url;
      il2cpp_runtime_helper_022b4080(lVar4 + 8);
      (__this->fields)._cwd_5__2 = (Utility_CoroutineWithData_o *)0x0;
      method = (MethodInfo *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._cwd_5__2);
label_043ba0bb:
      if ((obj != (UI_CrosshairHandler_o *)0x0) &&
         (pUVar5 = (obj->fields)._crosshairImageWhite, pUVar5 != (UnityEngine_UI_RawImage_o *)0x0)) {
        method = (MethodInfo *)**(undefined8 **)(TypeInfo_CrosshairHandler + 0xb8);
        UnityEngine_UI_RawImage__set_texture(pUVar5,(UnityEngine_Texture_o *)method,(MethodInfo *)0x0);
        pUVar5 = (obj->fields)._crosshairImageRed;
        if (pUVar5 != (UnityEngine_UI_RawImage_o *)0x0) {
          UnityEngine_UI_RawImage__set_texture
                    (pUVar5,(UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_CrosshairHandler + 0xb8),(MethodInfo *)0x0)
          ;
          return 0;
        }
      }
    }
  }
  else {
    if (iVar2 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    pSVar7 = (__this->fields).url;
    if (pSVar7 != (System_String_o *)0x0) {
      ppSVar1 = &(__this->fields).url;
      pSVar7 = System_String__Trim(pSVar7,(MethodInfo *)0x0);
      *ppSVar1 = pSVar7;
      il2cpp_runtime_helper_022b4080(ppSVar1);
      pSVar7 = *ppSVar1;
      if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = CustomSkins_TextureDownloader__ValidTextureURL(pSVar7,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return 0;
      }
      method = *(MethodInfo **)(*(long *)(TypeInfo_CrosshairHandler + 0xb8) + 8);
      bVar6 = System_String__op_Inequality(*ppSVar1,(System_String_o *)method,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') goto label_043ba0bb;
      pSVar7 = *ppSVar1;
      if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      target = CustomSkins_TextureDownloader__DownloadTexture
                         ((UnityEngine_MonoBehaviour_o *)obj,pSVar7,0,2000000,(MethodInfo *)0x0);
      __this_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_CoroutineWithData);
      Utility_CoroutineWithData___ctor
                ((Utility_CoroutineWithData_o *)__this_00,(UnityEngine_MonoBehaviour_o *)obj,target,
                 (MethodInfo *)0x0);
      (__this->fields)._cwd_5__2 = (Utility_CoroutineWithData_o *)__this_00;
      method = __this_00;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._cwd_5__2);
      pUVar3 = (__this->fields)._cwd_5__2;
      if (pUVar3 != (Utility_CoroutineWithData_o *)0x0) {
        (__this->fields).__2__current = (Il2CppObject *)(pUVar3->fields)._Coroutine_k__BackingField;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
      }
    }
  }
  pSVar8 = (System_String_c *)il2cpp_runtime_helper_022b2c90();
label_043ba11d:
  il2cpp_runtime_helper_022b2fd0(method,pSVar8);
  return (bool_conflict)(Il2CppObject *)method->name;
}


// UI.CrosshairHandler.<LoadSkin>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CrosshairHandler__LoadSkin_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CrosshairHandler__LoadSkin_d__9_o* __this, const MethodInfo* method);
// 0x43ba130

Il2CppObject *
UI_CrosshairHandler__LoadSkin_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CrosshairHandler__LoadSkin_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CrosshairHandler.<LoadSkin>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CrosshairHandler__LoadSkin_d__9__System_Collections_IEnumerator_Reset (UI_CrosshairHandler__LoadSkin_d__9_o* __this, const MethodInfo* method);
// 0x43ba140

void UI_CrosshairHandler__LoadSkin_d__9__System_Collections_IEnumerator_Reset
               (UI_CrosshairHandler__LoadSkin_d__9_o *__this,MethodInfo *method)

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


// UI.CrosshairHandler.<LoadSkin>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CrosshairHandler__LoadSkin_d__9__System_Collections_IEnumerator_get_Current (UI_CrosshairHandler__LoadSkin_d__9_o* __this, const MethodInfo* method);
// 0x43ba180

Il2CppObject *
UI_CrosshairHandler__LoadSkin_d__9__System_Collections_IEnumerator_get_Current
          (UI_CrosshairHandler__LoadSkin_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CrosshairHandler$$Awake
// il2cpp: void UI_CrosshairHandler__Awake (UI_CrosshairHandler_o* __this, const MethodInfo* method);
// 0x43b9850

void UI_CrosshairHandler__Awake(UI_CrosshairHandler_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o **ppUVar1;
  UnityEngine_UI_RawImage_o **ppUVar2;
  UnityEngine_UI_Text_o **ppUVar3;
  UnityEngine_UI_Text_o **ppUVar4;
  UnityEngine_UI_RawImage_c *pUVar5;
  UnityEngine_UI_Text_o *crosshairLabelRed;
  long lVar6;
  UnityEngine_Material_o *pUVar7;
  bool_conflict bVar8;
  UnityEngine_UI_RawImage_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  Il2CppClass *crosshairImageRed;
  UnityEngine_UI_RawImage_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_UI_Text_o *pUVar13;
  UnityEngine_UI_Image_o *pUVar14;
  Il2CppObject *__this_00;
  undefined4 uVar15;
  Il2CppObject *__this_01;
  
  if (g_data_057ae39c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CrosshairScaler_AddComponent_CrosshairScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/CrosshairImage");
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/HookArrowImage");
    il2cpp_runtime_helper_023445d0(&"DefaultLabel");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae39c = '\x01';
  }
  pUVar9 = (UnityEngine_UI_RawImage_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  crosshairImageRed = "Prefabs/InGame/CrosshairImage";
  pUVar10 = UI_ElementFactory__InstantiateAndBind
                      ((UnityEngine_Transform_o *)pUVar9,(System_String_o *)"Prefabs/InGame/CrosshairImage",(MethodInfo *)0x0);
  if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
    pUVar9 = (UnityEngine_UI_RawImage_o *)UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_RawImage_GetComponent_RawImage);
    ppUVar1 = &(__this->fields)._crosshairImageWhite;
    (__this->fields)._crosshairImageWhite = pUVar9;
    il2cpp_runtime_helper_022b4080(ppUVar1);
    pUVar9 = (UnityEngine_UI_RawImage_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    crosshairImageRed = "Prefabs/InGame/CrosshairImage";
    pUVar10 = UI_ElementFactory__InstantiateAndBind
                        ((UnityEngine_Transform_o *)pUVar9,(System_String_o *)"Prefabs/InGame/CrosshairImage",(MethodInfo *)0x0);
    if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
      crosshairImageRed = (Il2CppClass *)UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_RawImage_GetComponent_RawImage);
      ppUVar2 = &(__this->fields)._crosshairImageRed;
      (__this->fields)._crosshairImageRed = (UnityEngine_UI_RawImage_o *)crosshairImageRed;
      il2cpp_runtime_helper_022b4080(ppUVar2);
      pUVar11 = (__this->fields)._crosshairImageRed;
      pUVar9 = (UnityEngine_UI_RawImage_o *)0x0;
      if (pUVar11 != (UnityEngine_UI_RawImage_o *)0x0) {
        pUVar5 = pUVar11->klass;
        crosshairImageRed = (Il2CppClass *)(pUVar5->vtable)._23_set_color.method;
        (*(pUVar5->vtable)._23_set_color.methodPtr)(0x3f800000,0);
        pUVar9 = *ppUVar1;
        if (pUVar9 != (UnityEngine_UI_RawImage_o *)0x0) {
          crosshairImageRed = (Il2CppClass *)0x0;
          pUVar11 = (UnityEngine_UI_RawImage_o *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_UI_RawImage_o *)0x0) {
            crosshairImageRed = "DefaultLabel";
            pUVar12 = UnityEngine_Transform__Find
                                ((UnityEngine_Transform_o *)pUVar11,(System_String_o *)"DefaultLabel",
                                 (MethodInfo *)0x0);
            pUVar9 = pUVar11;
            if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
              crosshairImageRed =
                   (Il2CppClass *)
                   UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar12,MethodInfo_Text_GetComponent_Text);
              ppUVar3 = &(__this->fields)._crosshairLabelWhite;
              (__this->fields)._crosshairLabelWhite = (UnityEngine_UI_Text_o *)crosshairImageRed;
              il2cpp_runtime_helper_022b4080(ppUVar3);
              pUVar9 = (__this->fields)._crosshairImageRed;
              if (pUVar9 != (UnityEngine_UI_RawImage_o *)0x0) {
                crosshairImageRed = (Il2CppClass *)0x0;
                pUVar11 = (UnityEngine_UI_RawImage_o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                if (pUVar11 != (UnityEngine_UI_RawImage_o *)0x0) {
                  crosshairImageRed = "DefaultLabel";
                  pUVar12 = UnityEngine_Transform__Find
                                      ((UnityEngine_Transform_o *)pUVar11,(System_String_o *)"DefaultLabel",
                                       (MethodInfo *)0x0);
                  pUVar9 = pUVar11;
                  if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
                    pUVar13 = (UnityEngine_UI_Text_o *)
                              UnityEngine_Component__GetComponent_object_
                                        ((UnityEngine_Component_o *)pUVar12,MethodInfo_Text_GetComponent_Text);
                    ppUVar4 = &(__this->fields)._crosshairLabelRed;
                    (__this->fields)._crosshairLabelRed = pUVar13;
                    il2cpp_runtime_helper_022b4080(ppUVar4);
                    pUVar9 = (UnityEngine_UI_RawImage_o *)
                             UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    crosshairImageRed = "Prefabs/InGame/HookArrowImage";
                    pUVar10 = UI_ElementFactory__InstantiateAndBind
                                        ((UnityEngine_Transform_o *)pUVar9,(System_String_o *)"Prefabs/InGame/HookArrowImage",
                                         (MethodInfo *)0x0);
                    if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar14 = (UnityEngine_UI_Image_o *)
                                UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_Image_GetComponent_Image);
                      (__this->fields)._arrowLeft = pUVar14;
                      il2cpp_runtime_helper_022b4080(&(__this->fields)._arrowLeft);
                      pUVar9 = (UnityEngine_UI_RawImage_o *)
                               UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                      crosshairImageRed = "Prefabs/InGame/HookArrowImage";
                      pUVar10 = UI_ElementFactory__InstantiateAndBind
                                          ((UnityEngine_Transform_o *)pUVar9,(System_String_o *)"Prefabs/InGame/HookArrowImage",
                                           (MethodInfo *)0x0);
                      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                        crosshairImageRed =
                             (Il2CppClass *)UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_Image_GetComponent_Image)
                        ;
                        (__this->fields)._arrowRight = (UnityEngine_UI_Image_o *)crosshairImageRed;
                        il2cpp_runtime_helper_022b4080(&(__this->fields)._arrowRight);
                        pUVar11 = (__this->fields)._crosshairImageWhite;
                        pUVar9 = (UnityEngine_UI_RawImage_o *)0x0;
                        if (pUVar11 != (UnityEngine_UI_RawImage_o *)0x0) {
                          pUVar10 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
                          if (g_data_057a694c == '\0') {
                            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                            g_data_057a694c = '\x01';
                          }
                          crosshairImageRed = (Il2CppClass *)&g_data_00000004;
                          UI_ElementFactory__SetAnchor
                                    (pUVar10,4,4,
                                     (UnityEngine_Vector2_o)
                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0)
                          ;
                          pUVar9 = (UnityEngine_UI_RawImage_o *)0x0;
                          if (*ppUVar2 != (UnityEngine_UI_RawImage_o *)0x0) {
                            pUVar10 = UnityEngine_Component__get_gameObject
                                                ((UnityEngine_Component_o *)*ppUVar2,(MethodInfo *)0x0);
                            if (g_data_057a694c == '\0') {
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                              g_data_057a694c = '\x01';
                            }
                            crosshairImageRed = (Il2CppClass *)&g_data_00000004;
                            UI_ElementFactory__SetAnchor
                                      (pUVar10,4,4,
                                       (UnityEngine_Vector2_o)
                                       **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                       (MethodInfo *)0x0);
                            pUVar9 = *ppUVar1;
                            if (pUVar9 != (UnityEngine_UI_RawImage_o *)0x0) {
                              crosshairImageRed = (Il2CppClass *)0x0;
                              pUVar10 = UnityEngine_Component__get_gameObject
                                                  ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                              if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                                crosshairImageRed = MethodInfo_CrosshairScaler_AddComponent_CrosshairScaler;
                                UnityEngine_GameObject__AddComponent_object_
                                          (pUVar10,(MethodInfo_255A020 *)MethodInfo_CrosshairScaler_AddComponent_CrosshairScaler);
                                pUVar9 = *ppUVar2;
                                if (pUVar9 != (UnityEngine_UI_RawImage_o *)0x0) {
                                  crosshairImageRed = (Il2CppClass *)0x0;
                                  pUVar10 = UnityEngine_Component__get_gameObject
                                                      ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                                  if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                                    UnityEngine_GameObject__AddComponent_object_
                                              (pUVar10,(MethodInfo_255A020 *)MethodInfo_CrosshairScaler_AddComponent_CrosshairScaler);
                                    pUVar9 = *ppUVar1;
                                    crosshairImageRed = (Il2CppClass *)*ppUVar2;
                                    pUVar13 = *ppUVar3;
                                    crosshairLabelRed = *ppUVar4;
                                    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                                      il2cpp_runtime_helper_02337ed0();
                                    }
                                    UI_CursorManager__UpdateCrosshair
                                              (pUVar9,(UnityEngine_UI_RawImage_o *)crosshairImageRed,pUVar13,
                                               crosshairLabelRed,1,(MethodInfo *)0x0);
                                    lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                    if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x58), lVar6 != 0)) {
                                      pUVar9 = *(UnityEngine_UI_RawImage_o **)(lVar6 + 0x18);
                                      crosshairImageRed = "";
                                      bVar8 = System_String__op_Inequality
                                                        ((System_String_o *)pUVar9,
                                                         (System_String_o *)"",(MethodInfo *)0x0);
                                      if ((char)bVar8 == '\0') {
                                        return;
                                      }
                                      lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                      if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x58), lVar6 != 0)) {
                                        pUVar7 = *(UnityEngine_Material_o **)(lVar6 + 0x18);
                                        if (g_data_057ae39d == '\0') {
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkin_d__9);
                                          g_data_057ae39d = '\x01';
                                        }
                                        pUVar11 = (UnityEngine_UI_RawImage_o *)
                                                  il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkin_d__9);
                                        crosshairImageRed = (Il2CppClass *)0x0;
                                        pUVar9 = pUVar11;
                                        System_Object___ctor((Il2CppObject *)pUVar11,(MethodInfo *)0x0);
                                        *(undefined4 *)&(pUVar11->fields).m_CachedPtr = 0;
                                        if (pUVar11 != (UnityEngine_UI_RawImage_o *)0x0) {
                                          *(UI_CrosshairHandler_o **)&(pUVar11->fields).m_Color.fields =
                                               __this;
                                          il2cpp_runtime_helper_022b4080(&(pUVar11->fields).m_Color,__this);
                                          (pUVar11->fields).m_Material = pUVar7;
                                          il2cpp_runtime_helper_022b4080(&(pUVar11->fields).m_Material,pUVar7);
                                          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                                    ((UnityEngine_MonoBehaviour_o *)__this,
                                                     (System_Collections_IEnumerator_o *)pUVar11,
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae39d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkin_d__9);
    g_data_057ae39d = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkin_d__9);
  uVar15 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = pUVar9;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,pUVar9);
    __this_00[2].klass = crosshairImageRed;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,crosshairImageRed);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar15;
  return;
}


// UI.CrosshairHandler$$LoadSkin
// il2cpp: System_Collections_IEnumerator_o* UI_CrosshairHandler__LoadSkin (UI_CrosshairHandler_o* __this, System_String_o* url, const MethodInfo* method);
// 0x43b9d50

System_Collections_IEnumerator_o *
UI_CrosshairHandler__LoadSkin(UI_CrosshairHandler_o *__this,System_String_o *url,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae39d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkin_d__9);
    g_data_057ae39d = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkin_d__9);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,__this);
    __this_00[2].klass = (Il2CppClass *)url;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,url);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// UI.CrosshairHandler$$Update
// il2cpp: void UI_CrosshairHandler__Update (UI_CrosshairHandler_o* __this, const MethodInfo* method);
// 0x43b9e00

void UI_CrosshairHandler__Update(UI_CrosshairHandler_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *crosshairImageWhite;
  UnityEngine_UI_RawImage_o *crosshairImageRed;
  UnityEngine_UI_Text_o *crosshairLabelWhite;
  UnityEngine_UI_Text_o *crosshairLabelRed;
  
  if (g_data_057ae39e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    g_data_057ae39e = '\x01';
  }
  crosshairImageWhite = (__this->fields)._crosshairImageWhite;
  crosshairImageRed = (__this->fields)._crosshairImageRed;
  crosshairLabelWhite = (__this->fields)._crosshairLabelWhite;
  crosshairLabelRed = (__this->fields)._crosshairLabelRed;
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UI_CursorManager__UpdateCrosshair
            (crosshairImageWhite,crosshairImageRed,crosshairLabelWhite,crosshairLabelRed,0,(MethodInfo *)0x0);
  UI_CursorManager__UpdateHookArrows
            ((__this->fields)._arrowLeft,(__this->fields)._arrowRight,(MethodInfo *)0x0);
  return;
}


// UI.CrosshairHandler$$.ctor
// il2cpp: void UI_CrosshairHandler___ctor (UI_CrosshairHandler_o* __this, const MethodInfo* method);
// 0x43b9e80

void UI_CrosshairHandler___ctor(UI_CrosshairHandler_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


