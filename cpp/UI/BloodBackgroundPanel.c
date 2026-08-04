// Type: UI.BloodBackgroundPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/BloodBackgroundPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/BloodBackgroundPanel.cs
// --------------------------------

// UI.BloodBackgroundPanel$$get_Title
// il2cpp: System_String_o* UI_BloodBackgroundPanel__get_Title (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x439b650

System_String_o * UI_BloodBackgroundPanel__get_Title(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.BloodBackgroundPanel$$get_Width
// il2cpp: float UI_BloodBackgroundPanel__get_Width (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x439b670

float UI_BloodBackgroundPanel__get_Width(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BloodBackgroundPanel$$get_Height
// il2cpp: float UI_BloodBackgroundPanel__get_Height (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x439b680

float UI_BloodBackgroundPanel__get_Height(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BloodBackgroundPanel$$get_TopBarHeight
// il2cpp: float UI_BloodBackgroundPanel__get_TopBarHeight (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x439b690

float UI_BloodBackgroundPanel__get_TopBarHeight(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BloodBackgroundPanel$$get_BottomBarHeight
// il2cpp: float UI_BloodBackgroundPanel__get_BottomBarHeight (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x439b6a0

float UI_BloodBackgroundPanel__get_BottomBarHeight(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BloodBackgroundPanel$$get_PopupAnimationType
// il2cpp: int32_t UI_BloodBackgroundPanel__get_PopupAnimationType (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x439b6b0

int32_t UI_BloodBackgroundPanel__get_PopupAnimationType(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.BloodBackgroundPanel$$get_AnimationTime
// il2cpp: float UI_BloodBackgroundPanel__get_AnimationTime (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x439b6c0

float UI_BloodBackgroundPanel__get_AnimationTime(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.5;
}


// UI.BloodBackgroundPanel$$Setup
// il2cpp: void UI_BloodBackgroundPanel__Setup (UI_BloodBackgroundPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x439b6d0

void UI_BloodBackgroundPanel__Setup
               (UI_BloodBackgroundPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UI_BasePopup_c *__this_00;
  System_String_o *path;
  int32_t iVar1;
  UI_BasePopup_o *__this_01;
  UI_BasePopup_o *__this_02;
  UI_BasePopup_o *__this_03;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_UI_RawImage_o *pUVar2;
  System_String_o *pSVar3;
  UI_TooltipPopup_o *__this_05;
  undefined8 uStack_40;
  UI_BloodBackgroundPanel_o *pUStack_38;
  
  if (g_data_057ae2fb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MainBackground");
    il2cpp_runtime_helper_023445d0(&"Image");
    g_data_057ae2fb = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  __this_01 = (UI_BasePopup_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_02 = (UI_BasePopup_o *)
              UI_ElementFactory__InstantiateAndBind
                        ((UnityEngine_Transform_o *)__this_01,"Prefabs/MainMenu/MainBackground",(MethodInfo *)0x0);
  if (((__this_02 != (UI_BasePopup_o *)0x0) &&
      (__this_03 = (UI_BasePopup_o *)
                   UnityEngine_GameObject__get_transform
                             ((UnityEngine_GameObject_o *)__this_02,(MethodInfo *)0x0), __this_01 = __this_02,
      __this_03 != (UI_BasePopup_o *)0x0)) &&
     (__this_04 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)__this_03,"Image",(MethodInfo *)0x0),
     __this_01 = __this_03, __this_04 != (UnityEngine_Transform_o *)0x0)) {
    pUVar2 = (UnityEngine_UI_RawImage_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_04,MethodInfo_RawImage_GetComponent_RawImage);
    (__this->fields)._loadingBackground = pUVar2;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._loadingBackground,pUVar2);
    return;
  }
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  pUStack_38 = __this;
  if (g_data_057ae2fc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"BackgroundTexture");
    il2cpp_runtime_helper_023445d0(&"Backgrounds/Blood/Blood");
    g_data_057ae2fc = '\x01';
  }
  uStack_40 = uStack_40 & 0xffffffff;
  if ((char)(__this_01->fields).IsActive != '\0') {
    return;
  }
  iVar1 = UnityEngine_Random__Range_4df2410(1,6,(MethodInfo *)0x0);
  uStack_40 = CONCAT44(iVar1,(undefined4)uStack_40);
  pSVar3 = System_Int32__ToString((int)&uStack_40 + 4,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_3af7150("Backgrounds/Blood/Blood",pSVar3,"BackgroundTexture",(MethodInfo *)0x0);
  __this_00 = __this_01[1].klass;
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_05 = (UI_TooltipPopup_o *)
              ApplicationManagers_ResourceManager__LoadAsset(path,pSVar3,1,(MethodInfo *)0x0);
  if (__this_00 == (UI_BasePopup_c *)0x0) {
    __this_05 = (UI_TooltipPopup_o *)il2cpp_runtime_helper_022b2c90();
  }
  else if ((__this_05 == (UI_TooltipPopup_o *)0x0) || (__this_05->klass == TypeInfo_Texture2D)) {
    UnityEngine_UI_RawImage__set_texture
              ((UnityEngine_UI_RawImage_o *)__this_00,(UnityEngine_Texture_o *)__this_05,(MethodInfo *)0x0);
    UI_BasePopup__Show(__this_01,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2fd0();
  UI_BasePopup___ctor(__this_05,(MethodInfo *)0x0);
  return;
}


// UI.BloodBackgroundPanel$$Show
// il2cpp: void UI_BloodBackgroundPanel__Show (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x439b7a0

void UI_BloodBackgroundPanel__Show(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *__this_00;
  System_String_o *path;
  uint in_EAX;
  int32_t iVar1;
  System_String_o *pSVar2;
  UI_TooltipPopup_o *__this_01;
  undefined8 uStack_28;
  
  uStack_28._0_4_ = in_EAX;
  if (g_data_057ae2fc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"BackgroundTexture");
    il2cpp_runtime_helper_023445d0(&"Backgrounds/Blood/Blood");
    g_data_057ae2fc = '\x01';
  }
  uStack_28 = (ulong)(uint)uStack_28;
  if ((char)(__this->fields).IsActive != '\0') {
    return;
  }
  iVar1 = UnityEngine_Random__Range_4df2410(1,6,(MethodInfo *)0x0);
  uStack_28 = CONCAT44(iVar1,(uint)uStack_28);
  pSVar2 = System_Int32__ToString((int)&uStack_28 + 4,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_3af7150("Backgrounds/Blood/Blood",pSVar2,"BackgroundTexture",(MethodInfo *)0x0);
  __this_00 = (__this->fields)._loadingBackground;
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = (UI_TooltipPopup_o *)
              ApplicationManagers_ResourceManager__LoadAsset(path,pSVar2,1,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) {
    __this_01 = (UI_TooltipPopup_o *)il2cpp_runtime_helper_022b2c90();
  }
  else if ((__this_01 == (UI_TooltipPopup_o *)0x0) || (__this_01->klass == TypeInfo_Texture2D)) {
    UnityEngine_UI_RawImage__set_texture(__this_00,(UnityEngine_Texture_o *)__this_01,(MethodInfo *)0x0);
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2fd0();
  UI_BasePopup___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.BloodBackgroundPanel$$.ctor
// il2cpp: void UI_BloodBackgroundPanel___ctor (UI_BloodBackgroundPanel_o* __this, const MethodInfo* method);
// 0x439b8f0

void UI_BloodBackgroundPanel___ctor(UI_BloodBackgroundPanel_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


