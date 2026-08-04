// Type: UI.ToolsPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/ToolsPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/ToolsPopup.cs
// --------------------------------

// UI.ToolsPopup$$get_Title
// il2cpp: System_String_o* UI_ToolsPopup__get_Title (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x4413a20

System_String_o * UI_ToolsPopup__get_Title(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae600 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"ToolsPopup");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae600 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","ToolsPopup","Title","","",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ToolsPopup$$get_Width
// il2cpp: float UI_ToolsPopup__get_Width (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x4413ac0

float UI_ToolsPopup__get_Width(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  return 280.0;
}


// UI.ToolsPopup$$get_Height
// il2cpp: float UI_ToolsPopup__get_Height (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x4413ad0

float UI_ToolsPopup__get_Height(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  return 425.0;
}


// UI.ToolsPopup$$get_VerticalSpacing
// il2cpp: float UI_ToolsPopup__get_VerticalSpacing (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x4413ae0

float UI_ToolsPopup__get_VerticalSpacing(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.ToolsPopup$$get_VerticalPadding
// il2cpp: int32_t UI_ToolsPopup__get_VerticalPadding (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x4413af0

int32_t UI_ToolsPopup__get_VerticalPadding(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.ToolsPopup$$get_UseSound
// il2cpp: bool UI_ToolsPopup__get_UseSound (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x4413b00

bool_conflict UI_ToolsPopup__get_UseSound(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.ToolsPopup$$Setup
// il2cpp: void UI_ToolsPopup__Setup (UI_ToolsPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4413b10

void UI_ToolsPopup__Setup(UI_ToolsPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  System_String_o *subCategory;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  System_String_o *pSVar4;
  
  if (g_data_057ae601 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__12_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__12_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__12_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__12_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__12_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__12_5);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"GalleryButton");
    il2cpp_runtime_helper_023445d0(&"SnapshotViewerButton");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"CharacterEditorButton");
    il2cpp_runtime_helper_023445d0(&"AdvancedConfigurationButton");
    il2cpp_runtime_helper_023445d0(&"ToolsPopup");
    il2cpp_runtime_helper_023445d0(&"MapEditorButton");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae601 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  subCategory = "ToolsPopup";
  pSVar4 = "MainMenu";
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     (pSVar4,subCategory,"MapEditorButton","","",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,220.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     (pSVar4,subCategory,"CharacterEditorButton","","",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,220.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     (pSVar4,subCategory,"SnapshotViewerButton","","",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,220.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     (pSVar4,subCategory,"GalleryButton","","",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,220.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar4 = UI_UIManager__GetLocale
                     (pSVar4,subCategory,"AdvancedConfigurationButton","","",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar4,220.0,pUVar3,(MethodInfo *)0x0);
  return;
}


// UI.ToolsPopup$$OnButtonClick
// il2cpp: void UI_ToolsPopup__OnButtonClick (UI_ToolsPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4413f80

void UI_ToolsPopup__OnButtonClick(UI_ToolsPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_GameObject_c *pUVar3;
  undefined8 uVar4;
  bool_conflict bVar5;
  int32_t sceneName;
  UI_TooltipPopup_o *__this_00;
  
  if (g_data_057ae602 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"SnapshotViewer");
    il2cpp_runtime_helper_023445d0(&"Gallery");
    il2cpp_runtime_helper_023445d0(&"MapEditor");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"CharacterEditor");
    il2cpp_runtime_helper_023445d0(&"AdvancedConfiguration");
    g_data_057ae602 = '\x01';
  }
  bVar5 = System_String__op_Equality(name,"MapEditor",(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    bVar5 = System_String__op_Equality(name,"CharacterEditor",(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      bVar5 = System_String__op_Equality(name,"SnapshotViewer",(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        bVar5 = System_String__op_Equality(name,"Gallery",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          bVar5 = System_String__op_Equality(name,"AdvancedConfiguration",(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            bVar5 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
            if ((char)bVar5 != '\0') {
              (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
              return;
            }
            return;
          }
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_00 = *(UI_TooltipPopup_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (__this_00 != (UI_TooltipPopup_o *)0x0) {
            bVar1 = (TypeInfo_MainMenu->_2).naturalAligment;
            if (((__this_00->klass->_2).naturalAligment < bVar1) ||
               ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MainMenu)) {
              il2cpp_runtime_helper_022b2fd0();
            }
            else {
              pUVar2 = __this_00[1].fields._currentCategoryPanel;
              __this_00 = (UI_TooltipPopup_o *)0x0;
              if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                pUVar3 = pUVar2->klass;
                uVar4._0_4_ = pUVar3[1]._2.token;
                uVar4._4_2_ = pUVar3[1]._2.method_count;
                uVar4._6_2_ = pUVar3[1]._2.property_count;
                (**(code **)&pUVar3[1]._2.thread_static_fields_offset)(pUVar2,uVar4);
                return;
              }
            }
          }
          il2cpp_runtime_helper_022b2c90();
          UI_BasePopup___ctor(__this_00,(MethodInfo *)0x0);
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
// 0x4414160

void UI_ToolsPopup___ctor(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ToolsPopup$$<Setup>b__12_0
// il2cpp: void UI_ToolsPopup___Setup_b__12_0 (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x4414170

void UI_ToolsPopup___Setup_b__12_0(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae603 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae603 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_ToolsPopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


// UI.ToolsPopup$$<Setup>b__12_1
// il2cpp: void UI_ToolsPopup___Setup_b__12_1 (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x44141b0

void UI_ToolsPopup___Setup_b__12_1(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae604 == '\0') {
    il2cpp_runtime_helper_023445d0(&"MapEditor");
    g_data_057ae604 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_ToolsPopup__OnButtonClick(__this,"MapEditor",in_RDX);
  return;
}


// UI.ToolsPopup$$<Setup>b__12_2
// il2cpp: void UI_ToolsPopup___Setup_b__12_2 (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x44141f0

void UI_ToolsPopup___Setup_b__12_2(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae605 == '\0') {
    il2cpp_runtime_helper_023445d0(&"CharacterEditor");
    g_data_057ae605 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_ToolsPopup__OnButtonClick(__this,"CharacterEditor",in_RDX);
  return;
}


// UI.ToolsPopup$$<Setup>b__12_3
// il2cpp: void UI_ToolsPopup___Setup_b__12_3 (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x4414230

void UI_ToolsPopup___Setup_b__12_3(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae606 == '\0') {
    il2cpp_runtime_helper_023445d0(&"SnapshotViewer");
    g_data_057ae606 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_ToolsPopup__OnButtonClick(__this,"SnapshotViewer",in_RDX);
  return;
}


// UI.ToolsPopup$$<Setup>b__12_4
// il2cpp: void UI_ToolsPopup___Setup_b__12_4 (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x4414270

void UI_ToolsPopup___Setup_b__12_4(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae607 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Gallery");
    g_data_057ae607 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_ToolsPopup__OnButtonClick(__this,"Gallery",in_RDX);
  return;
}


// UI.ToolsPopup$$<Setup>b__12_5
// il2cpp: void UI_ToolsPopup___Setup_b__12_5 (UI_ToolsPopup_o* __this, const MethodInfo* method);
// 0x44142b0

void UI_ToolsPopup___Setup_b__12_5(UI_ToolsPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae608 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AdvancedConfiguration");
    g_data_057ae608 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_ToolsPopup__OnButtonClick(__this,"AdvancedConfiguration",in_RDX);
  return;
}


