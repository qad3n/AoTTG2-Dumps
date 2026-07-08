// Type: UI.BloodBackgroundPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/BloodBackgroundPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/BloodBackgroundPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.BloodBackgroundPanel$$get_Title
// il2cpp: System_String_o* UI_BloodBackgroundPanel__get_Title (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x408d6e0

System_String_o *
UI_BloodBackgroundPanel__get_Title(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.BloodBackgroundPanel$$get_Width
// il2cpp: float UI_BloodBackgroundPanel__get_Width (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x408d700

float UI_BloodBackgroundPanel__get_Width(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BloodBackgroundPanel$$get_Height
// il2cpp: float UI_BloodBackgroundPanel__get_Height (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x408d710

float UI_BloodBackgroundPanel__get_Height(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BloodBackgroundPanel$$get_TopBarHeight
// il2cpp: float UI_BloodBackgroundPanel__get_TopBarHeight (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x408d720

float UI_BloodBackgroundPanel__get_TopBarHeight
                (UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BloodBackgroundPanel$$get_BottomBarHeight
// il2cpp: float UI_BloodBackgroundPanel__get_BottomBarHeight (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x408d730

float UI_BloodBackgroundPanel__get_BottomBarHeight
                (UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BloodBackgroundPanel$$get_PopupAnimationType
// il2cpp: int32_t UI_BloodBackgroundPanel__get_PopupAnimationType (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x408d740

int32_t UI_BloodBackgroundPanel__get_PopupAnimationType
                  (UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.BloodBackgroundPanel$$get_AnimationTime
// il2cpp: float UI_BloodBackgroundPanel__get_AnimationTime (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x408d750

float UI_BloodBackgroundPanel__get_AnimationTime
                (UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.5;
}


// UI.BloodBackgroundPanel$$Setup
// il2cpp: void UI_BloodBackgroundPanel__Setup (UI_BloodBackgroundPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x408d760

void UI_BloodBackgroundPanel__Setup
               (UI_BloodBackgroundPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_RawImage_o *pUVar2;
  
  if (DAT_05704580 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&"Prefabs/MainMenu/MainBackground");
    il2cpp_init_method_metadata(&"Image");
    DAT_05704580 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  __this_00 = UI_ElementFactory__InstantiateAndBind(pUVar1,"Prefabs/MainMenu/MainBackground",(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Image",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = (UnityEngine_UI_RawImage_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar1,MethodInfo_RawImage_GetComponent_RawImage);
        (__this->fields)._loadingBackground = pUVar2;
        il2cpp_runtime_glue(&(__this->fields)._loadingBackground,pUVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BloodBackgroundPanel$$Show
// il2cpp: void UI_BloodBackgroundPanel__Show (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x408d830

void UI_BloodBackgroundPanel__Show(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *__this_00;
  System_String_o *path;
  uint in_EAX;
  int32_t iVar1;
  System_String_o *pSVar2;
  UnityEngine_Texture_o *value;
  undefined8 uStack_28;
  
  uStack_28._0_4_ = in_EAX;
  if (DAT_05704581 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&"BackgroundTexture");
    il2cpp_init_method_metadata(&"Backgrounds/Blood/Blood");
    DAT_05704581 = '\x01';
  }
  uStack_28 = (ulong)(uint)uStack_28;
  if ((char)(__this->fields).IsActive == '\0') {
    iVar1 = UnityEngine_Random__Range(1,6,(MethodInfo *)0x0);
    uStack_28 = CONCAT44(iVar1,(uint)uStack_28);
    pSVar2 = System_Int32__ToString((int)&uStack_28 + 4,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat("Backgrounds/Blood/Blood",pSVar2,"BackgroundTexture",(MethodInfo *)0x0);
    __this_00 = (__this->fields)._loadingBackground;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(path,pSVar2,1,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((value != (UnityEngine_Texture_o *)0x0) && (value->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(value);
    }
    UnityEngine_UI_RawImage__set_texture(__this_00,value,(MethodInfo *)0x0);
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  }
  return;
}


// UI.BloodBackgroundPanel$$.ctor
// il2cpp: void UI_BloodBackgroundPanel___ctor (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x408d980

void UI_BloodBackgroundPanel___ctor(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


