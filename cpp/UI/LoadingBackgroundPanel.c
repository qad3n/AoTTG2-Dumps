// Type: UI.LoadingBackgroundPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/LoadingBackgroundPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/LoadingMenu/LoadingBackgroundPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.LoadingBackgroundPanel$$get_Title
// il2cpp: System_String_o* UI_LoadingBackgroundPanel__get_Title (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x40dc190

System_String_o *
UI_LoadingBackgroundPanel__get_Title(UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.LoadingBackgroundPanel$$get_Width
// il2cpp: float UI_LoadingBackgroundPanel__get_Width (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x40dc1b0

float UI_LoadingBackgroundPanel__get_Width(UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.LoadingBackgroundPanel$$get_Height
// il2cpp: float UI_LoadingBackgroundPanel__get_Height (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x40dc1c0

float UI_LoadingBackgroundPanel__get_Height(UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.LoadingBackgroundPanel$$get_TopBarHeight
// il2cpp: float UI_LoadingBackgroundPanel__get_TopBarHeight (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x40dc1d0

float UI_LoadingBackgroundPanel__get_TopBarHeight
                (UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.LoadingBackgroundPanel$$get_BottomBarHeight
// il2cpp: float UI_LoadingBackgroundPanel__get_BottomBarHeight (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x40dc1e0

float UI_LoadingBackgroundPanel__get_BottomBarHeight
                (UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.LoadingBackgroundPanel$$get_ShowOnTop
// il2cpp: bool UI_LoadingBackgroundPanel__get_ShowOnTop (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x40dc1f0

bool_conflict
UI_LoadingBackgroundPanel__get_ShowOnTop(UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.LoadingBackgroundPanel$$get_PopupAnimationType
// il2cpp: int32_t UI_LoadingBackgroundPanel__get_PopupAnimationType (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x40dc200

int32_t UI_LoadingBackgroundPanel__get_PopupAnimationType
                  (UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.LoadingBackgroundPanel$$get_AnimationTime
// il2cpp: float UI_LoadingBackgroundPanel__get_AnimationTime (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x40dc210

float UI_LoadingBackgroundPanel__get_AnimationTime
                (UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.2;
}


// UI.LoadingBackgroundPanel$$Setup
// il2cpp: void UI_LoadingBackgroundPanel__Setup (UI_LoadingBackgroundPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40dc220

void UI_LoadingBackgroundPanel__Setup
               (UI_LoadingBackgroundPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  UnityEngine_GameObject_o *pUVar1;
  
  if (DAT_0570477a == '\0') {
    il2cpp_init_method_metadata(&"Prefabs/MainMenu/MainBackground");
    DAT_0570477a = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  parent_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar1 = UI_ElementFactory__InstantiateAndBind(parent_00,"Prefabs/MainMenu/MainBackground",(MethodInfo *)0x0);
  (__this->fields)._background = pUVar1;
  il2cpp_runtime_glue(&(__this->fields)._background,pUVar1);
  return;
}


// UI.LoadingBackgroundPanel$$SetRandomBackground
// il2cpp: void UI_LoadingBackgroundPanel__SetRandomBackground (UI_LoadingBackgroundPanel_o* __this, bool loading, bool seasonal, const MethodInfo* method);
// 0x40dc2a0

void UI_LoadingBackgroundPanel__SetRandomBackground
               (UI_LoadingBackgroundPanel_o *__this,bool_conflict loading,bool_conflict seasonal,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  char cVar2;
  int iVar3;
  int32_t iVar4;
  long *plVar5;
  MethodInfo *in_R8;
  System_String_o *path;
  
  if (DAT_0570477b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MainMenu);
    il2cpp_init_method_metadata(&"LoadingBackgrounds");
    il2cpp_init_method_metadata(&"EventBackgrounds");
    il2cpp_init_method_metadata(&"MainBackgrounds");
    DAT_0570477b = '\x01';
  }
  path = "MainBackgrounds";
  pSVar1 = "EventBackgrounds";
  if ((char)seasonal != '\0') {
    plVar5 = (long *)**(long **)(TypeInfo_MainMenu + 0xb8);
    if (plVar5 == (long *)0x0) goto LAB_040dc44d;
    cVar2 = (**(code **)(*plVar5 + 0x2f8))(plVar5,"EventBackgrounds",*(undefined8 *)(*plVar5 + 0x300));
    if (cVar2 != '\0') {
      plVar5 = (long *)**(long **)(TypeInfo_MainMenu + 0xb8);
      if (((plVar5 == (long *)0x0) ||
          (plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))
                                      (plVar5,pSVar1,*(undefined8 *)(*plVar5 + 0x1b0)),
          plVar5 == (long *)0x0)) ||
         (plVar5 = (long *)(**(code **)(*plVar5 + 0x408))(plVar5,*(undefined8 *)(*plVar5 + 0x410)),
         plVar5 == (long *)0x0)) goto LAB_040dc44d;
      iVar3 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
      if (0 < iVar3) {
        path = pSVar1;
      }
    }
  }
  plVar5 = (long *)**(long **)(TypeInfo_MainMenu + 0xb8);
  if (plVar5 != (long *)0x0) {
    if ((char)loading == '\0') {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))(plVar5,path,*(undefined8 *)(*plVar5 + 0x1b0));
    }
    else {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))
                                 (plVar5,"LoadingBackgrounds",*(undefined8 *)(*plVar5 + 0x1b0));
    }
    if (plVar5 != (long *)0x0) {
      do {
        iVar4 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
        iVar4 = UnityEngine_Random__Range(0,iVar4,(MethodInfo *)0x0);
      } while (iVar4 == (__this->fields).BackgroundIndex);
      UI_LoadingBackgroundPanel__SetBackground(__this,loading & 0xff,iVar4,path,in_R8);
      return;
    }
  }
LAB_040dc44d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.LoadingBackgroundPanel$$SetBackground
// il2cpp: void UI_LoadingBackgroundPanel__SetBackground (UI_LoadingBackgroundPanel_o* __this, bool loading, int32_t backgroundIndex, System_String_o* path, const MethodInfo* method);
// 0x40dc460

void UI_LoadingBackgroundPanel__SetBackground
               (UI_LoadingBackgroundPanel_o *__this,bool_conflict loading,int32_t backgroundIndex,
               System_String_o *path,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  System_String_o *pSVar1;
  UnityEngine_Vector2_o value;
  int iVar2;
  int iVar3;
  long *plVar4;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_UI_RawImage_o *__this_01;
  System_String_o *pSVar7;
  UnityEngine_Texture_o *pUVar8;
  UnityEngine_RectTransform_o *__this_02;
  undefined8 uVar9;
  float fVar10;
  long lVar5;
  
  if (DAT_0570477c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_MainMenu);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&"LoadingBackgrounds");
    il2cpp_init_method_metadata(&"Backgrounds/");
    il2cpp_init_method_metadata(&"Backgrounds/MainBackgroundBlankTexture");
    il2cpp_init_method_metadata(&"Image");
    DAT_0570477c = '\x01';
  }
  (__this->fields).BackgroundIndex = backgroundIndex;
  plVar4 = (long *)**(long **)(TypeInfo_MainMenu + 0xb8);
  if (plVar4 != (long *)0x0) {
    if ((char)loading == '\0') {
      lVar5 = *plVar4;
      uVar9 = *(undefined8 *)(lVar5 + 0x1b0);
    }
    else {
      lVar5 = *plVar4;
      uVar9 = *(undefined8 *)(lVar5 + 0x1b0);
      path = "LoadingBackgrounds";
    }
    plVar4 = (long *)(**(code **)(lVar5 + 0x1a8))(plVar4,path,uVar9);
    __this_00 = (__this->fields)._background;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pUVar6 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        pUVar6 = UnityEngine_Transform__Find(pUVar6,"Image",(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          __this_01 = (UnityEngine_UI_RawImage_o *)
                      UnityEngine_Component__GetComponent<object>
                                ((UnityEngine_Component_o *)pUVar6,MethodInfo_RawImage_GetComponent_RawImage);
          if ((__this->fields).BackgroundIndex < 0) {
            if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar1 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pUVar8 = (UnityEngine_Texture_o *)
                     ApplicationManagers_ResourceManager__LoadAsset
                               (pSVar1,"Backgrounds/MainBackgroundBlankTexture",0,(MethodInfo *)0x0);
            if (__this_01 == (UnityEngine_UI_RawImage_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if ((pUVar8 != (UnityEngine_Texture_o *)0x0) && (pUVar8->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pUVar8);
            }
            UnityEngine_UI_RawImage__set_texture(__this_01,pUVar8,(MethodInfo *)0x0);
          }
          else {
            if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar1 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
            plVar4 = (long *)(**(code **)(*plVar4 + 0x188))
                                       (plVar4,backgroundIndex,*(undefined8 *)(*plVar4 + 400));
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar7 = (System_String_o *)
                     (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
            pSVar7 = System_String__Concat("Backgrounds/",pSVar7,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pUVar8 = (UnityEngine_Texture_o *)
                     ApplicationManagers_ResourceManager__LoadAsset
                               (pSVar1,pSVar7,0,(MethodInfo *)0x0);
            if (__this_01 == (UnityEngine_UI_RawImage_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if ((pUVar8 != (UnityEngine_Texture_o *)0x0) && (pUVar8->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pUVar8);
            }
            UnityEngine_UI_RawImage__set_texture(__this_01,pUVar8,(MethodInfo *)0x0);
          }
          plVar4 = *(long **)&(__this_01->fields).m_ShouldRecalculate;
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          iVar2 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
          plVar4 = *(long **)&(__this_01->fields).m_ShouldRecalculate;
          if (plVar4 != (long *)0x0) {
            iVar3 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
            __this_02 = (UnityEngine_RectTransform_o *)
                        UnityEngine_Component__GetComponent<object>
                                  ((UnityEngine_Component_o *)__this_01,MethodInfo_RectTransform_GetComponent_RectTransform);
            if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
              fVar10 = (float)iVar3 * (1928.0 / (float)iVar2);
              if (fVar10 <= 1084.0) {
                fVar10 = 1084.0;
              }
              value.fields.y = fVar10;
              value.fields.x = 1928.0;
              UnityEngine_RectTransform__set_sizeDelta(__this_02,value,(MethodInfo *)0x0);
              return;
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.LoadingBackgroundPanel$$GetAnimationSpeed
// il2cpp: float UI_LoadingBackgroundPanel__GetAnimationSpeed (UI_LoadingBackgroundPanel_o* __this, float min, float max, const MethodInfo* method);
// 0x40dc960

float UI_LoadingBackgroundPanel__GetAnimationSpeed
                (UI_LoadingBackgroundPanel_o *__this,float min,float max,MethodInfo *method)

{
  long lVar1;
  float fVar2;
  
  if (DAT_0570477d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_0570477d = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x130), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x11) != '\0') {
      fVar2 = UI_BasePopup__GetAnimationSpeed((UI_BasePopup_o *)__this,min,max,(MethodInfo *)0x0);
      return fVar2;
    }
    return (max - min) / 0.01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.LoadingBackgroundPanel$$.ctor
// il2cpp: void UI_LoadingBackgroundPanel___ctor (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x40dca00

void UI_LoadingBackgroundPanel___ctor(UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  (__this->fields).BackgroundIndex = -1;
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


