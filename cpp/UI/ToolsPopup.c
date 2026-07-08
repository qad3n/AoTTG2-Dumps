// Type: UI.ToolsPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ToolsPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/ToolsPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.ToolsPopup$$get_Title
// il2cpp: System_String_o* UI_ToolsPopup__get_Title (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x40ff6e0

System_String_o * UI_ToolsPopup__get_Title(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704865 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"MainMenu");
    il2cpp_init_method_metadata(&"Title");
    il2cpp_init_method_metadata(&"ToolsPopup");
    il2cpp_init_method_metadata(&"");
    DAT_05704865 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","ToolsPopup","Title","","",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.ToolsPopup$$get_Width
// il2cpp: float UI_ToolsPopup__get_Width (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x40ff780

float UI_ToolsPopup__get_Width(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  return 280.0;
}


// UI.ToolsPopup$$get_Height
// il2cpp: float UI_ToolsPopup__get_Height (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x40ff790

float UI_ToolsPopup__get_Height(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  return 375.0;
}


// UI.ToolsPopup$$get_VerticalSpacing
// il2cpp: float UI_ToolsPopup__get_VerticalSpacing (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x40ff7a0

float UI_ToolsPopup__get_VerticalSpacing(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.ToolsPopup$$get_VerticalPadding
// il2cpp: int32_t UI_ToolsPopup__get_VerticalPadding (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x40ff7b0

int32_t UI_ToolsPopup__get_VerticalPadding(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.ToolsPopup$$get_UseSound
// il2cpp: bool UI_ToolsPopup__get_UseSound (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x40ff7c0

bool_conflict UI_ToolsPopup__get_UseSound(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.ToolsPopup$$Setup
// il2cpp: void UI_ToolsPopup__Setup (UI_ToolsPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40ff7d0

void UI_ToolsPopup__Setup(UI_ToolsPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  System_String_o *subCategory;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  System_String_o *pSVar4;
  
  if (DAT_05704866 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__12_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__12_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__12_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__12_3);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__12_4);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"MainMenu");
    il2cpp_init_method_metadata(&"GalleryButton");
    il2cpp_init_method_metadata(&"SnapshotViewerButton");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"CharacterEditorButton");
    il2cpp_init_method_metadata(&"ToolsPopup");
    il2cpp_init_method_metadata(&"MapEditorButton");
    il2cpp_init_method_metadata(&"");
    DAT_05704866 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  subCategory = "ToolsPopup";
  pSVar4 = "MainMenu";
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     (pSVar4,subCategory,"MapEditorButton","","",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,220.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     (pSVar4,subCategory,"CharacterEditorButton","","",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,220.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     (pSVar4,subCategory,"SnapshotViewerButton","","",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,220.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar4 = UI_UIManager__GetLocale
                     (pSVar4,subCategory,"GalleryButton","","",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar4,220.0,pUVar3,(MethodInfo *)0x0);
  return;
}


// UI.ToolsPopup$$OnButtonClick
// il2cpp: void UI_ToolsPopup__OnButtonClick (UI_ToolsPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40ffbb0

void UI_ToolsPopup__OnButtonClick(UI_ToolsPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t sceneName;
  
  if (DAT_05704867 == '\0') {
    il2cpp_init_method_metadata(&"SnapshotViewer");
    il2cpp_init_method_metadata(&"Gallery");
    il2cpp_init_method_metadata(&"MapEditor");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"CharacterEditor");
    DAT_05704867 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"MapEditor",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"CharacterEditor",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__op_Equality(name,"SnapshotViewer",(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        bVar1 = System_String__op_Equality(name,"Gallery",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          bVar1 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
          if ((char)bVar1 != '\0') {
            (*(__this->klass->vtable)._22_Hide.methodPtr)
                      (__this,(__this->klass->vtable)._22_Hide.method);
            return;
          }
          return;
        }
        sceneName = 6;
      }
      else {
        sceneName = 5;
      }
    }
    else {
      sceneName = 4;
    }
  }
  else {
    sceneName = 3;
  }
  ApplicationManagers_SceneLoader__LoadScene(sceneName,(MethodInfo *)0x0);
  return;
}


// UI.ToolsPopup$$.ctor
// il2cpp: void UI_ToolsPopup___ctor (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x40ffcd0

void UI_ToolsPopup___ctor(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ToolsPopup$$<Setup>b__12_0
// il2cpp: void UI_ToolsPopup___Setup_b__12_0 (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x40ffce0

void UI_ToolsPopup__<Setup>b__12_0(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704868 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_05704868 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_ToolsPopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


// UI.ToolsPopup$$<Setup>b__12_1
// il2cpp: void UI_ToolsPopup___Setup_b__12_1 (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x40ffd20

void UI_ToolsPopup__<Setup>b__12_1(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704869 == '\0') {
    il2cpp_init_method_metadata(&"MapEditor");
    DAT_05704869 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_ToolsPopup__OnButtonClick(__this,"MapEditor",in_RDX);
  return;
}


// UI.ToolsPopup$$<Setup>b__12_2
// il2cpp: void UI_ToolsPopup___Setup_b__12_2 (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x40ffd60

void UI_ToolsPopup__<Setup>b__12_2(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570486a == '\0') {
    il2cpp_init_method_metadata(&"CharacterEditor");
    DAT_0570486a = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_ToolsPopup__OnButtonClick(__this,"CharacterEditor",in_RDX);
  return;
}


// UI.ToolsPopup$$<Setup>b__12_3
// il2cpp: void UI_ToolsPopup___Setup_b__12_3 (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x40ffda0

void UI_ToolsPopup__<Setup>b__12_3(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570486b == '\0') {
    il2cpp_init_method_metadata(&"SnapshotViewer");
    DAT_0570486b = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_ToolsPopup__OnButtonClick(__this,"SnapshotViewer",in_RDX);
  return;
}


// UI.ToolsPopup$$<Setup>b__12_4
// il2cpp: void UI_ToolsPopup___Setup_b__12_4 (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x40ffde0

void UI_ToolsPopup__<Setup>b__12_4(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570486c == '\0') {
    il2cpp_init_method_metadata(&"Gallery");
    DAT_0570486c = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_ToolsPopup__OnButtonClick(__this,"Gallery",in_RDX);
  return;
}


