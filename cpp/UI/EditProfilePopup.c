// Type: UI.EditProfilePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/EditProfilePopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/EditProfilePopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.EditProfilePopup.<>c__DisplayClass15_0$$.ctor
// il2cpp: void UI_EditProfilePopup___c__DisplayClass15_0___ctor (UI_EditProfilePopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x40e81e0

void UI_EditProfilePopup_<>c__DisplayClass15_0___ctor
               (UI_EditProfilePopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfilePopup.<>c__DisplayClass15_0$$<SetupTopButtons>b__0
// il2cpp: void UI_EditProfilePopup___c__DisplayClass15_0___SetupTopButtons_b__0 (UI_EditProfilePopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x40e8450

void UI_EditProfilePopup_<>c__DisplayClass15_0__<SetupTopButtons>b__0
               (UI_EditProfilePopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  UI_EditProfilePopup_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_EditProfilePopup_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(__this->fields).buttonName,
               (pUVar1->klass->vtable)._28_SetCategoryPanel.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfilePopup.<>c__DisplayClass19_0$$.ctor
// il2cpp: void UI_EditProfilePopup___c__DisplayClass19_0___ctor (UI_EditProfilePopup___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x40e8360

void UI_EditProfilePopup_<>c__DisplayClass19_0___ctor
               (UI_EditProfilePopup___c__DisplayClass19_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfilePopup.<>c__DisplayClass19_0$$<SetupBottomButtons>b__0
// il2cpp: void UI_EditProfilePopup___c__DisplayClass19_0___SetupBottomButtons_b__0 (UI_EditProfilePopup___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x40e8480

void UI_EditProfilePopup_<>c__DisplayClass19_0__<SetupBottomButtons>b__0
               (UI_EditProfilePopup___c__DisplayClass19_0_o *__this,MethodInfo *method)

{
  long *plVar1;
  Il2CppMethodPointer vtable_dispatch;
  UI_EditProfilePopup_o *pUVar2;
  System_String_o *a;
  bool_conflict bVar3;
  undefined8 extraout_RDX;
  
  pUVar2 = (__this->fields).__4__this;
  if (pUVar2 == (UI_EditProfilePopup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  a = (__this->fields).buttonName;
  if (DAT_057047d1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&"Save");
    DAT_057047d1 = '\x01';
  }
  bVar3 = System_String__op_Equality(a,"Save",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
      plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
        vtable_dispatch = (pUVar2->klass->vtable)._22_Hide.methodPtr;
        (*vtable_dispatch)
                  (pUVar2,(pUVar2->klass->vtable)._22_Hide.method,extraout_RDX,vtable_dispatch
                  );
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// UI.EditProfilePopup$$get_Title
// il2cpp: System_String_o* UI_EditProfilePopup__get_Title (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x40e7c10

System_String_o * UI_EditProfilePopup__get_Title(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.EditProfilePopup$$get_Width
// il2cpp: float UI_EditProfilePopup__get_Width (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x40e7c30

float UI_EditProfilePopup__get_Width(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  return 730.0;
}


// UI.EditProfilePopup$$get_Height
// il2cpp: float UI_EditProfilePopup__get_Height (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x40e7c40

float UI_EditProfilePopup__get_Height(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  return 770.0;
}


// UI.EditProfilePopup$$get_CategoryPanel
// il2cpp: bool UI_EditProfilePopup__get_CategoryPanel (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x40e7c50

bool_conflict
UI_EditProfilePopup__get_CategoryPanel(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.EditProfilePopup$$get_CategoryButtons
// il2cpp: bool UI_EditProfilePopup__get_CategoryButtons (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x40e7c60

bool_conflict
UI_EditProfilePopup__get_CategoryButtons(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.EditProfilePopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_EditProfilePopup__get_DefaultCategoryPanel (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x40e7c70

System_String_o *
UI_EditProfilePopup__get_DefaultCategoryPanel(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  if (DAT_057047cd == '\0') {
    il2cpp_init_method_metadata(&"Profile");
    DAT_057047cd = '\x01';
  }
  return "Profile";
}


// UI.EditProfilePopup$$get_UseSound
// il2cpp: bool UI_EditProfilePopup__get_UseSound (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x40e7ca0

bool_conflict UI_EditProfilePopup__get_UseSound(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.EditProfilePopup$$Setup
// il2cpp: void UI_EditProfilePopup__Setup (UI_EditProfilePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40e7cb0

void UI_EditProfilePopup__Setup
               (UI_EditProfilePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  Il2CppClass *item;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  long lVar2;
  UnityEngine_Events_UnityAction_o *onClick;
  Il2CppObject *__this_01;
  ulong uVar3;
  
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if (DAT_057047d0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupBottomButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass19_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Save");
    DAT_057047d0 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,1);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_040e7eff:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    *(undefined8 *)(lVar2 + 0x20) = "Save";
    il2cpp_runtime_glue(lVar2 + 0x20);
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar3 = 0;
      do {
        __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass19_0);
        System_Object___ctor(__this_01,(MethodInfo *)0x0);
        if (__this_01 == (Il2CppObject *)0x0) goto LAB_040e7efa;
        __this_01[1].monitor = __this;
        il2cpp_runtime_glue(&__this_01[1].monitor,__this);
        if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_040e7eff;
        __this_01[1].klass = *(Il2CppClass **)(lVar2 + 0x20 + uVar3 * 8);
        il2cpp_runtime_glue(__this_01 + 1);
        parent_00 = (__this->fields).BottomBar;
        item = __this_01[1].klass;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar1 = UI_UIManager__GetLocaleCommon((System_String_o *)item,(MethodInfo *)0x0);
        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton
                  (parent_00,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x18));
    }
    return;
  }
LAB_040e7efa:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfilePopup$$SetupTopButtons
// il2cpp: void UI_EditProfilePopup__SetupTopButtons (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x40e7f10

void UI_EditProfilePopup__SetupTopButtons(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  Il2CppClass *pIVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_01;
  long lVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *__this_02;
  ulong uVar5;
  
  if (DAT_057047ce == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupTopButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass15_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Emote");
    il2cpp_init_method_metadata(&"Stats");
    il2cpp_init_method_metadata(&"Profile");
    DAT_057047ce = '\x01';
  }
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x1c,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  lVar3 = il2cpp_glue_02274930(TypeInfo_string,3);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = "Profile";
      il2cpp_runtime_glue(lVar3 + 0x20);
      if (1 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x28) = "Emote";
        il2cpp_runtime_glue(lVar3 + 0x28);
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = "Stats";
          il2cpp_runtime_glue(lVar3 + 0x30);
          if (0 < *(int *)(lVar3 + 0x18)) {
            uVar5 = 0;
            do {
              pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass15_0);
              System_Object___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (Il2CppObject *)0x0) goto LAB_040e81d3;
              pIVar4[1].monitor = __this;
              il2cpp_runtime_glue(&pIVar4[1].monitor,__this);
              if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_040e81d8;
              pIVar4[1].klass = *(Il2CppClass **)(lVar3 + 0x20 + uVar5 * 8);
              il2cpp_runtime_glue(pIVar4 + 1);
              parent = (__this->fields).TopBar;
              pIVar1 = pIVar4[1].klass;
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar2 = UI_UIManager__GetLocaleCommon((System_String_o *)pIVar1,(MethodInfo *)0x0);
              onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              __this_02 = UI_ElementFactory__CreateCategoryButton
                                    (parent,__this_01,pSVar2,onClick,(MethodInfo *)0x0);
              if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e81d3;
              __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                          (__this->fields)._topButtons;
              pIVar1 = pIVar4[1].klass;
              pIVar4 = UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_Button_GetComponent_Button);
              if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto LAB_040e81d3;
              System_Collections_Generic_Dictionary<object__object>__Add
                        (__this_00,(Il2CppObject *)pIVar1,pIVar4,MethodInfo_Void_Add);
              uVar5 = uVar5 + 1;
            } while ((long)uVar5 < (long)*(int *)(lVar3 + 0x18));
          }
          UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
LAB_040e81d8:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_040e81d3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfilePopup$$RegisterCategoryPanels
// il2cpp: void UI_EditProfilePopup__RegisterCategoryPanels (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x40e81f0

void UI_EditProfilePopup__RegisterCategoryPanels(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_RuntimeTypeHandle_o handle;
  System_Type_o *pSVar2;
  
  if (DAT_057047cf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeRef_EditProfileEmotePanel);
    il2cpp_init_method_metadata(&TypeRef_EditProfileProfilePanel);
    il2cpp_init_method_metadata(&TypeRef_EditProfileStatsPanel);
    il2cpp_init_method_metadata(&"Emote");
    il2cpp_init_method_metadata(&"Stats");
    il2cpp_init_method_metadata(&"Profile");
    DAT_057047cf = '\x01';
  }
  handle.fields.value = TypeRef_EditProfileProfilePanel.fields.value;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           (__this->fields)._categoryPanelTypes;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Add
              (pSVar1,"Profile",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._categoryPanelTypes;
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_EditProfileEmotePanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Add
                (pSVar1,"Emote",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._categoryPanelTypes;
      pSVar2 = System_Type__GetTypeFromHandle(TypeRef_EditProfileStatsPanel,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__Add
                  (pSVar1,"Stats",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfilePopup$$SetupPopups
// il2cpp: void UI_EditProfilePopup__SetupPopups (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x40e8330

void UI_EditProfilePopup__SetupPopups(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  UI_BasePanel__SetupPopups((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfilePopup$$Show
// il2cpp: void UI_EditProfilePopup__Show (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x40e8340

void UI_EditProfilePopup__Show(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfilePopup$$SetupBottomButtons
// il2cpp: void UI_EditProfilePopup__SetupBottomButtons (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x40e7cd0

void UI_EditProfilePopup__SetupBottomButtons(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  Il2CppClass *item;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  long lVar2;
  UnityEngine_Events_UnityAction_o *onClick;
  Il2CppObject *__this_01;
  ulong uVar3;
  
  if (DAT_057047d0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupBottomButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass19_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Save");
    DAT_057047d0 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,1);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_040e7eff:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    *(undefined8 *)(lVar2 + 0x20) = "Save";
    il2cpp_runtime_glue(lVar2 + 0x20);
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar3 = 0;
      do {
        __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass19_0);
        System_Object___ctor(__this_01,(MethodInfo *)0x0);
        if (__this_01 == (Il2CppObject *)0x0) goto LAB_040e7efa;
        __this_01[1].monitor = __this;
        il2cpp_runtime_glue(&__this_01[1].monitor,__this);
        if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_040e7eff;
        __this_01[1].klass = *(Il2CppClass **)(lVar2 + 0x20 + uVar3 * 8);
        il2cpp_runtime_glue(__this_01 + 1);
        parent = (__this->fields).BottomBar;
        item = __this_01[1].klass;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar1 = UI_UIManager__GetLocaleCommon((System_String_o *)item,(MethodInfo *)0x0);
        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton(parent,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x18));
    }
    return;
  }
LAB_040e7efa:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfilePopup$$OnBottomBarButtonClick
// il2cpp: void UI_EditProfilePopup__OnBottomBarButtonClick (UI_EditProfilePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40e8370

void UI_EditProfilePopup__OnBottomBarButtonClick
               (UI_EditProfilePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  long *plVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  undefined8 extraout_RDX;
  
  if (DAT_057047d1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&"Save");
    DAT_057047d1 = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
      plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
        vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
        (*vtable_dispatch)
                  (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtable_dispatch
                  );
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// UI.EditProfilePopup$$.ctor
// il2cpp: void UI_EditProfilePopup___ctor (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x40e8440

void UI_EditProfilePopup___ctor(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


