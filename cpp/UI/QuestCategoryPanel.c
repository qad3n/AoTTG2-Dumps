// Type: UI.QuestCategoryPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/QuestCategoryPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/QuestCategoryPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.QuestCategoryPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_QuestCategoryPanel__get_ThemePanel (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x40fce90

System_String_o *
UI_QuestCategoryPanel__get_ThemePanel(UI_QuestCategoryPanel_o *__this,MethodInfo *method)

{
  if (DAT_0570484d == '\0') {
    il2cpp_init_method_metadata(&"QuestPopup");
    DAT_0570484d = '\x01';
  }
  return "QuestPopup";
}


// UI.QuestCategoryPanel$$get_VerticalSpacing
// il2cpp: float UI_QuestCategoryPanel__get_VerticalSpacing (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x40fcec0

float UI_QuestCategoryPanel__get_VerticalSpacing(UI_QuestCategoryPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.QuestCategoryPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_QuestCategoryPanel__get_HorizontalPadding (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x40fced0

int32_t UI_QuestCategoryPanel__get_HorizontalPadding
                  (UI_QuestCategoryPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.QuestCategoryPanel$$get_VerticalPadding
// il2cpp: int32_t UI_QuestCategoryPanel__get_VerticalPadding (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x40fcee0

int32_t UI_QuestCategoryPanel__get_VerticalPadding
                  (UI_QuestCategoryPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.QuestCategoryPanel$$get_PanelAlignment
// il2cpp: int32_t UI_QuestCategoryPanel__get_PanelAlignment (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x40fcef0

int32_t UI_QuestCategoryPanel__get_PanelAlignment
                  (UI_QuestCategoryPanel_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.QuestCategoryPanel$$Setup
// il2cpp: void UI_QuestCategoryPanel__Setup (UI_QuestCategoryPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40fba50

void UI_QuestCategoryPanel__Setup
               (UI_QuestCategoryPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  return;
}


// UI.QuestCategoryPanel$$CreateQuestItems
// il2cpp: void UI_QuestCategoryPanel__CreateQuestItems (UI_QuestCategoryPanel_o* __this, System_Collections_Generic_List_QuestItem__o* items, const MethodInfo* method);
// 0x40fbd40

void UI_QuestCategoryPanel__CreateQuestItems
               (UI_QuestCategoryPanel_o *__this,System_Collections_Generic_List_QuestItem__o *items,
               MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar2;
  uint uVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  Il2CppObject *pIVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_UI_RawImage_o *__this_02;
  System_String_o *name;
  UnityEngine_Texture_o *value;
  System_String_o *pSVar8;
  UnityEngine_Texture_c **method_00;
  UI_QuestCategoryPanel_o *__this_03;
  UnityEngine_Color_o UVar9;
  System_Collections_Generic_List_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  GameProgress_QuestItem_o *item;
  GameProgress_QuestItem_o *pGVar12;
  undefined1 local_48 [16];
  GameProgress_QuestItem_o *local_38;
  
  if (DAT_0570484e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_QuestItem_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_GameProgress_QuestItem__Get);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"ProgressBarFillColor");
    il2cpp_init_method_metadata(&"Panel/Icon");
    il2cpp_init_method_metadata(&"Panel/ProgressLabel");
    il2cpp_init_method_metadata(&"Panel/ProgressBar/Background");
    il2cpp_init_method_metadata(&"Background");
    il2cpp_init_method_metadata(&"Icons/Quests/");
    il2cpp_init_method_metadata(&"QuestItem");
    il2cpp_init_method_metadata(&"Panel/ProgressBar/Fill Area/Fill");
    il2cpp_init_method_metadata(&"Panel/CheckIcon");
    il2cpp_init_method_metadata(&"Panel/RewardLabel");
    il2cpp_init_method_metadata(&"CheckColor");
    il2cpp_init_method_metadata(&"BorderColor");
    il2cpp_init_method_metadata(&"Icon");
    il2cpp_init_method_metadata(&"IconColor");
    il2cpp_init_method_metadata(&"Border");
    il2cpp_init_method_metadata(&"Panel/Title");
    il2cpp_init_method_metadata(&"ProgressBarBackgroundColor");
    il2cpp_init_method_metadata(&"Prefabs/MainMenu/QuestItemPanel");
    il2cpp_init_method_metadata(&"BackgroundColor");
    DAT_0570484e = '\x01';
  }
  if (items == (System_Collections_Generic_List_QuestItem__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)items,MethodInfo_List_1_T__Enumerator_GameProgress_QuestItem__Get);
  pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
  pIVar11 = (Il2CppType *)local_48._8_8_;
  item = local_38;
  while( true ) {
    __this_00.fields._8_8_ = pIVar11;
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
    __this_00.fields._current = (Il2CppObject *)item;
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
    if ((char)bVar2 == '\0') {
      __this_01.fields._8_8_ = pIVar11;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
      __this_01.fields._current = (Il2CppObject *)item;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      return;
    }
    pGVar12 = item;
    pUVar4 = UI_ElementFactory__InstantiateAndBind
                       ((__this->fields).SinglePanel,"Prefabs/MainMenu/QuestItemPanel",(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar6 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar5,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*pIVar6->klass->vtable[0x24].methodPtr)
              ((__this->fields).QuestItemWidth,pIVar6,pIVar6->klass->vtable[0x24].method);
    pIVar6 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar5,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*pIVar6->klass->vtable[0x26].methodPtr)
              ((__this->fields).QuestItemHeight,pIVar6,pIVar6->klass->vtable[0x26].method);
    pUVar7 = UnityEngine_Transform__Find(pUVar5,"Panel/Icon",(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_02 = (UnityEngine_UI_RawImage_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pUVar7,MethodInfo_RawImage_GetComponent_RawImage);
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (item == (GameProgress_QuestItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar1 = (item->fields).Icon;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar8 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    name = System_String__Concat
                     ("Icons/Quests/",(pSVar1->fields)._value,"Icon",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = (UnityEngine_Texture_c **)0x0;
    value = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar8,name,1,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_UI_RawImage_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (value != (UnityEngine_Texture_o *)0x0) {
      method_00 = &TypeInfo_Texture2D;
      if (value->klass != TypeInfo_Texture2D) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(value);
      }
    }
    UnityEngine_UI_RawImage__set_texture(__this_02,value,(MethodInfo *)0x0);
    UI_QuestCategoryPanel__SetTitle(__this,item,pUVar5,(MethodInfo *)method_00);
    __this_03 = __this;
    UI_QuestCategoryPanel__SetRewardLabel(__this,item,pUVar5,(MethodInfo *)method_00);
    UI_QuestCategoryPanel__SetProgress(__this_03,item,pUVar5,(MethodInfo *)method_00);
    pUVar7 = UnityEngine_Transform__Find(pUVar5,"Background",(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar6 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar7,MethodInfo_Image_GetComponent_Image);
    pSVar8 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar9 = UI_UIManager__GetThemeColor
                      (pSVar8,"QuestItem","BackgroundColor","DefaultPanel",(MethodInfo *)0x0);
    if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception(UVar9.fields.r,UVar9.fields._8_8_);
    }
    (*pIVar6->klass->vtable[0x17].methodPtr)(pIVar6,pIVar6->klass->vtable[0x17].method);
    pUVar7 = UnityEngine_Transform__Find(pUVar5,"Panel/CheckIcon",(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
    uVar3 = GameProgress_QuestItem__Finished(item,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_GameObject__SetActive(pUVar4,uVar3 & 0xff,(MethodInfo *)0x0);
    pUVar7 = UnityEngine_Transform__Find(pUVar5,"Border",(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar6 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar7,MethodInfo_Image_GetComponent_Image);
    pSVar8 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    UVar9 = UI_UIManager__GetThemeColor
                      (pSVar8,"QuestItem","BorderColor","DefaultPanel",(MethodInfo *)0x0);
    if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception(UVar9.fields.r,UVar9.fields._8_8_);
    }
    (*pIVar6->klass->vtable[0x17].methodPtr)(pIVar6,pIVar6->klass->vtable[0x17].method);
    pUVar7 = UnityEngine_Transform__Find(pUVar5,"Panel/Icon",(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar6 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar7,MethodInfo_RawImage_GetComponent_RawImage);
    pSVar8 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    UVar9 = UI_UIManager__GetThemeColor
                      (pSVar8,"QuestItem","IconColor","DefaultPanel",(MethodInfo *)0x0);
    if (pIVar6 == (Il2CppObject *)0x0) break;
    (*pIVar6->klass->vtable[0x17].methodPtr)(pIVar6,pIVar6->klass->vtable[0x17].method);
    pUVar7 = UnityEngine_Transform__Find(pUVar5,"Panel/CheckIcon",(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar6 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar7,MethodInfo_Image_GetComponent_Image);
    pSVar8 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    UVar9 = UI_UIManager__GetThemeColor
                      (pSVar8,"QuestItem","CheckColor","DefaultPanel",(MethodInfo *)0x0);
    if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception(UVar9.fields.r,UVar9.fields._8_8_);
    }
    (*pIVar6->klass->vtable[0x17].methodPtr)(pIVar6,pIVar6->klass->vtable[0x17].method);
    pUVar7 = UnityEngine_Transform__Find(pUVar5,"Panel/Title",(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar6 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar7,MethodInfo_Text_GetComponent_Text);
    pSVar8 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    UVar9 = UI_UIManager__GetThemeColor
                      (pSVar8,"QuestItem","TextColor","DefaultPanel",(MethodInfo *)0x0);
    if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception(UVar9.fields.r,UVar9.fields._8_8_);
    }
    (*pIVar6->klass->vtable[0x17].methodPtr)(pIVar6,pIVar6->klass->vtable[0x17].method);
    pUVar7 = UnityEngine_Transform__Find(pUVar5,"Panel/ProgressLabel",(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar6 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar7,MethodInfo_Text_GetComponent_Text);
    pSVar8 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    UVar9 = UI_UIManager__GetThemeColor
                      (pSVar8,"QuestItem","TextColor","DefaultPanel",(MethodInfo *)0x0);
    if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception(UVar9.fields.r,UVar9.fields._8_8_);
    }
    (*pIVar6->klass->vtable[0x17].methodPtr)(pIVar6,pIVar6->klass->vtable[0x17].method);
    pUVar7 = UnityEngine_Transform__Find(pUVar5,"Panel/RewardLabel",(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar6 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar7,MethodInfo_Text_GetComponent_Text);
    pSVar8 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    UVar9 = UI_UIManager__GetThemeColor
                      (pSVar8,"QuestItem","TextColor","DefaultPanel",(MethodInfo *)0x0);
    if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception(UVar9.fields.r,UVar9.fields._8_8_);
    }
    (*pIVar6->klass->vtable[0x17].methodPtr)(pIVar6,pIVar6->klass->vtable[0x17].method);
    pUVar7 = UnityEngine_Transform__Find(pUVar5,"Panel/CheckIcon",(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar6 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar7,MethodInfo_Image_GetComponent_Image);
    pSVar8 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    UVar9 = UI_UIManager__GetThemeColor
                      (pSVar8,"QuestItem","IconColor","DefaultPanel",(MethodInfo *)0x0);
    if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception(UVar9.fields.r,UVar9.fields._8_8_);
    }
    (*pIVar6->klass->vtable[0x17].methodPtr)(pIVar6,pIVar6->klass->vtable[0x17].method);
    pUVar7 = UnityEngine_Transform__Find(pUVar5,"Panel/ProgressBar/Background",(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar6 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar7,MethodInfo_Image_GetComponent_Image);
    pSVar8 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    UVar9 = UI_UIManager__GetThemeColor
                      (pSVar8,"QuestItem","ProgressBarBackgroundColor","DefaultPanel",(MethodInfo *)0x0);
    if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception(UVar9.fields.r,UVar9.fields._8_8_);
    }
    (*pIVar6->klass->vtable[0x17].methodPtr)(pIVar6,pIVar6->klass->vtable[0x17].method);
    pUVar5 = UnityEngine_Transform__Find(pUVar5,"Panel/ProgressBar/Fill Area/Fill",(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar6 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar5,MethodInfo_Image_GetComponent_Image);
    pSVar8 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    UVar9 = UI_UIManager__GetThemeColor
                      (pSVar8,"QuestItem","ProgressBarFillColor","DefaultPanel",(MethodInfo *)0x0);
    if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception(UVar9.fields.r,UVar9.fields._8_8_);
    }
    (*pIVar6->klass->vtable[0x17].methodPtr)(pIVar6,pIVar6->klass->vtable[0x17].method);
    item = pGVar12;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(UVar9.fields.r,UVar9.fields._8_8_);
}


// UI.QuestCategoryPanel$$SetRewardLabel
// il2cpp: void UI_QuestCategoryPanel__SetRewardLabel (UI_QuestCategoryPanel_o* __this, GameProgress_QuestItem_o* item, UnityEngine_Transform_o* panel, const MethodInfo* method);
// 0x40fd690

void UI_QuestCategoryPanel__SetRewardLabel
               (UI_QuestCategoryPanel_o *__this,GameProgress_QuestItem_o *item,
               UnityEngine_Transform_o *panel,MethodInfo *method)

{
  byte bVar1;
  Settings_StringSetting_o *pSVar2;
  Il2CppClass *pIVar3;
  Il2CppMethodPointer vtable_dispatch;
  GameProgress_QuestItem_o *pGVar4;
  bool_conflict bVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  Il2CppObject *pIVar8;
  System_String_o *pSVar9;
  System_String_o *item_00;
  UnityEngine_Color_o UVar10;
  
  if (DAT_0570484f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AchievementItem);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Color");
    il2cpp_init_method_metadata(&"Trophy");
    il2cpp_init_method_metadata(&"+");
    il2cpp_init_method_metadata(&"Exp");
    il2cpp_init_method_metadata(&"Panel/AchievementIcon");
    il2cpp_init_method_metadata(&"Panel/RewardLabel");
    il2cpp_init_method_metadata(&" exp");
    DAT_0570484f = '\x01';
  }
  if (item == (GameProgress_QuestItem_o *)0x0) {
LAB_040fd777:
    pGVar4 = (GameProgress_QuestItem_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_AchievementItem->_2).naturalAligment;
    if ((item->klass->_2).naturalAligment < bVar1) goto LAB_040fd777;
    pGVar4 = (GameProgress_QuestItem_o *)0x0;
    if ((item->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AchievementItem) {
      pGVar4 = item;
    }
  }
  if (((panel != (UnityEngine_Transform_o *)0x0) &&
      (pUVar6 = UnityEngine_Transform__Find(panel,"Panel/RewardLabel",(MethodInfo *)0x0),
      pUVar6 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar7 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
     pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
    if (pGVar4 == (GameProgress_QuestItem_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar7,1,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_Transform__Find(panel,"Panel/AchievementIcon",(MethodInfo *)0x0);
      if (((pUVar6 != (UnityEngine_Transform_o *)0x0) &&
          (pUVar7 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
          pUVar7 != (UnityEngine_GameObject_o *)0x0)) &&
         ((UnityEngine_GameObject__SetActive(pUVar7,0,(MethodInfo *)0x0),
          item != (GameProgress_QuestItem_o *)0x0 &&
          (pSVar2 = (item->fields).RewardType, pSVar2 != (Settings_StringSetting_o *)0x0)))) {
        bVar5 = System_String__op_Equality((pSVar2->fields)._value,"Exp",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return;
        }
        pUVar6 = UnityEngine_Transform__Find(panel,"Panel/RewardLabel",(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          pIVar8 = UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pUVar6,MethodInfo_Text_GetComponent_Text);
          pSVar2 = (item->fields).RewardValue;
          if ((pSVar2 != (Settings_StringSetting_o *)0x0) &&
             (pSVar9 = System_String__Concat
                                 ("+",(pSVar2->fields)._value," exp",
                                  (MethodInfo *)0x0), pIVar8 != (Il2CppObject *)0x0)) {
            pIVar3 = pIVar8->klass;
            vtable_dispatch = pIVar3->vtable[0x4b].methodPtr;
            (*vtable_dispatch)
                      (pIVar8,pSVar9,pIVar3->vtable[0x4b].method,pIVar3,vtable_dispatch);
            return;
          }
        }
      }
    }
    else {
      UnityEngine_GameObject__SetActive(pUVar7,0,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_Transform__Find(panel,"Panel/AchievementIcon",(MethodInfo *)0x0);
      if ((pUVar6 != (UnityEngine_Transform_o *)0x0) &&
         (pUVar7 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
         pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar7,1,(MethodInfo *)0x0);
        pUVar6 = UnityEngine_Transform__Find(panel,"Panel/AchievementIcon",(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          pIVar8 = UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pUVar6,MethodInfo_Image_GetComponent_Image);
          pSVar9 = (System_String_o *)
                   (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                             (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
          if (item != (GameProgress_QuestItem_o *)0x0) {
            bVar1 = (TypeInfo_AchievementItem->_2).naturalAligment;
            if ((bVar1 <= (item->klass->_2).naturalAligment) &&
               ((item->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AchievementItem)) {
              bVar1 = (TypeInfo_AchievementItem->_2).naturalAligment;
              if ((bVar1 <= (item->klass->_2).naturalAligment) &&
                 ((item->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AchievementItem)) {
                if (item[1].klass != (GameProgress_QuestItem_c *)0x0) {
                  item_00 = System_String__Concat
                                      ((System_String_o *)((item[1].klass)->_1).namespaze,
                                       "Color",(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  UVar10 = UI_UIManager__GetThemeColor
                                     (pSVar9,"Trophy",item_00,"DefaultPanel",(MethodInfo *)0x0);
                  if (pIVar8 != (Il2CppObject *)0x0) {
                    (*pIVar8->klass->vtable[0x17].methodPtr)
                              (UVar10.fields._0_8_,UVar10.fields._8_8_,pIVar8,
                               pIVar8->klass->vtable[0x17].method);
                    return;
                  }
                }
                goto LAB_040fda57;
              }
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(item);
          }
        }
      }
    }
  }
LAB_040fda57:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.QuestCategoryPanel$$SetTitle
// il2cpp: void UI_QuestCategoryPanel__SetTitle (UI_QuestCategoryPanel_o* __this, GameProgress_QuestItem_o* item, UnityEngine_Transform_o* panel, const MethodInfo* method);
// 0x40fcf00

void UI_QuestCategoryPanel__SetTitle
               (UI_QuestCategoryPanel_o *__this,GameProgress_QuestItem_o *item,
               UnityEngine_Transform_o *panel,MethodInfo *method)

{
  int iVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_ListSetting_StringSetting__o *pSVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  uint16_t uVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  uint uVar7;
  uint uVar8;
  UI_QuestCategoryPanel_o *__this_04;
  System_Collections_Generic_Dictionary_object__object__o *__this_05;
  System_String_array *pSVar9;
  System_String_o *pSVar10;
  MethodInfo *str0;
  System_String_o *str1;
  System_String_o *str3;
  UnityEngine_Transform_o *__this_06;
  Il2CppObject *pIVar11;
  UI_QuestCategoryPanel_o *pUVar12;
  MethodInfo *method_00;
  uint index;
  undefined1 in_stack_ffffffffffffff78 [14];
  undefined2 uVar13;
  Il2CppObject *in_stack_ffffffffffffff88;
  System_Collections_Generic_List_Enumerator_T__c *local_68;
  Il2CppType *pIStack_60;
  Il2CppObject *local_58;
  UnityEngine_Transform_o *local_50;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  local_50 = panel;
  if (DAT_05704850 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_StringSetting_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_StringSetting__get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"QuestItems");
    il2cpp_init_method_metadata(&"Panel/Title");
    il2cpp_init_method_metadata(&"");
    DAT_05704850 = '\x01';
  }
  local_68 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (Il2CppObject *)0x0;
  uVar13 = 0;
  if ((item != (GameProgress_QuestItem_o *)0x0) &&
     (pSVar2 = (item->fields).Category, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    pSVar10 = (pSVar2->fields)._value;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = "";
    __this_04 = (UI_QuestCategoryPanel_o *)
                UI_UIManager__GetLocale
                          ("QuestItems",pSVar10,(System_String_o *)"",
                           (System_String_o *)"",(System_String_o *)"",
                           (MethodInfo *)0x0);
    __this_05 = (System_Collections_Generic_Dictionary_object__object__o *)
                il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
    System_Collections_Generic_Dictionary<object__object>___ctor(__this_05,MethodInfo_Dictionary_2_System_String_System_String);
    pSVar3 = (item->fields).Conditions;
    if ((pSVar3 != (Settings_ListSetting_StringSetting__o *)0x0) &&
       (__this_00 = (System_Collections_Generic_List_object__o *)(pSVar3->fields)._value,
       __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,__this_00,MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get)
      ;
      local_58 = local_38;
      local_68 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIStack_60 = (Il2CppType *)local_48._8_8_;
      if (__this_05 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        __this_02.fields._version._2_2_ = uVar13;
        __this_02.fields._0_14_ = in_stack_ffffffffffffff78;
        __this_02.fields._current = in_stack_ffffffffffffff88;
        bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_02,(MethodInfo_3185E20 *)&local_68);
        if ((char)bVar5 != '\0') {
          if (local_58 != (Il2CppObject *)0x0) {
            if (local_58[1].monitor != (System_String_o *)0x0) {
              pSVar9 = System_String__Split(local_58[1].monitor,0x3a,0,(MethodInfo *)0x0);
              if (pSVar9 != (System_String_array *)0x0) {
                iVar1 = (int)pSVar9->max_length;
                if (iVar1 == 0) {
LAB_040fd38f:
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
LAB_040fd387:
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
LAB_040fd373:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
LAB_040fd352:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_040fd341:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else {
        while (__this_01.fields._version._2_2_ = uVar13,
              __this_01.fields._0_14_ = in_stack_ffffffffffffff78,
              __this_01.fields._current = in_stack_ffffffffffffff88,
              bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_01,(MethodInfo_3185E20 *)&local_68), (char)bVar5 != '\0') {
          if (local_58 == (Il2CppObject *)0x0) goto LAB_040fd341;
          if (local_58[1].monitor == (System_String_o *)0x0) goto LAB_040fd352;
          pSVar9 = System_String__Split(local_58[1].monitor,0x3a,0,(MethodInfo *)0x0);
          if (pSVar9 == (System_String_array *)0x0) goto LAB_040fd373;
          iVar1 = (int)pSVar9->max_length;
          if (iVar1 == 1) goto LAB_040fd387;
          if (iVar1 == 0) goto LAB_040fd38f;
          System_Collections_Generic_Dictionary<object__object>__Add
                    (__this_05,(Il2CppObject *)pSVar9->m_Items[0],(Il2CppObject *)pSVar9->m_Items[1]
                     ,MethodInfo_Void_Add);
        }
      }
      __this_03.fields._version._2_2_ = uVar13;
      __this_03.fields._0_14_ = in_stack_ffffffffffffff78;
      __this_03.fields._current = in_stack_ffffffffffffff88;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_03,(MethodInfo_3185E10 *)&local_68);
      if (__this_04 == (UI_QuestCategoryPanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      str0 = "";
      if (0 < (int)(__this_04->fields).m_CachedPtr) {
        index = 0;
        do {
          while (pUVar12 = __this_04,
                uVar4 = System_String__get_Chars
                                  ((System_String_o *)__this_04,index,(MethodInfo *)0x0),
                uVar4 == 0x7b) {
            pSVar10 = UI_QuestCategoryPanel__HandleConditionVariable
                                (pUVar12,(System_String_o *)__this_04,index,
                                 (System_Collections_Generic_Dictionary_string__string__o *)
                                 __this_05,method_00);
            str0 = (MethodInfo *)
                   System_String__Concat((System_String_o *)str0,pSVar10,(MethodInfo *)0x0);
            iVar6 = System_String__IndexOf
                              ((System_String_o *)__this_04,0x7d,index,(MethodInfo *)0x0);
            index = iVar6 + 1;
            if ((int)(__this_04->fields).m_CachedPtr <= (int)index) goto LAB_040fd57d;
          }
          uVar4 = System_String__get_Chars((System_String_o *)__this_04,index,(MethodInfo *)0x0);
          if (uVar4 == 0x5b) {
            uVar7 = System_String__IndexOf
                              ((System_String_o *)__this_04,0x5d,index,(MethodInfo *)0x0);
            iVar6 = System_String__IndexOf
                              ((System_String_o *)__this_04,0x7b,index,(MethodInfo *)0x0);
            pUVar12 = __this_04;
            uVar8 = System_String__IndexOf
                              ((System_String_o *)__this_04,0x7d,index,(MethodInfo *)0x0);
            pSVar10 = UI_QuestCategoryPanel__HandleConditionVariable
                                (pUVar12,(System_String_o *)__this_04,iVar6,
                                 (System_Collections_Generic_Dictionary_string__string__o *)
                                 __this_05,method_00);
            bVar5 = System_String__op_Inequality
                              (pSVar10,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                               (MethodInfo *)0x0);
            if ((char)bVar5 != '\0') {
              str1 = System_String__Substring
                               ((System_String_o *)__this_04,index + 1,iVar6 + ~index,
                                (MethodInfo *)0x0);
              str3 = System_String__Substring
                               ((System_String_o *)__this_04,uVar8 + 1,uVar7 + ~uVar8,
                                (MethodInfo *)0x0);
              method_00 = (MethodInfo *)0x0;
              str0 = (MethodInfo *)
                     System_String__Concat
                               ((System_String_o *)str0,str1,pSVar10,str3,(MethodInfo *)0x0);
            }
          }
          else {
            System_String__get_Chars((System_String_o *)__this_04,index,(MethodInfo *)0x0);
            if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = System_Char__ToString((uint16_t)&stack0xffffffffffffff86,(MethodInfo *)0x0);
            str0 = (MethodInfo *)
                   System_String__Concat((System_String_o *)str0,pSVar10,(MethodInfo *)0x0);
            uVar7 = index;
          }
          index = uVar7 + 1;
        } while ((int)index < (int)(__this_04->fields).m_CachedPtr);
      }
LAB_040fd57d:
      if (((local_50 != (UnityEngine_Transform_o *)0x0) &&
          (__this_06 = UnityEngine_Transform__Find(local_50,"Panel/Title",(MethodInfo *)0x0),
          __this_06 != (UnityEngine_Transform_o *)0x0)) &&
         (pIVar11 = UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)__this_06,MethodInfo_Text_GetComponent_Text),
         pIVar11 != (Il2CppObject *)0x0)) {
        (*pIVar11->klass->vtable[0x4b].methodPtr)(pIVar11,str0,pIVar11->klass->vtable[0x4b].method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.QuestCategoryPanel$$HandleConditionVariable
// il2cpp: System_String_o* UI_QuestCategoryPanel__HandleConditionVariable (UI_QuestCategoryPanel_o* __this, System_String_o* locale, int32_t index, System_Collections_Generic_Dictionary_string__string__o* conditionToValue, const MethodInfo* method);
// 0x40fdc20

System_String_o *
UI_QuestCategoryPanel__HandleConditionVariable
          (UI_QuestCategoryPanel_o *__this,System_String_o *locale,int32_t index,
          System_Collections_Generic_Dictionary_string__string__o *conditionToValue,
          MethodInfo *method)

{
  int32_t iVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  
  if (DAT_05704851 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"QuestItems");
    il2cpp_init_method_metadata(&"Error");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&".");
    DAT_05704851 = '\x01';
  }
  if (locale != (System_String_o *)0x0) {
    iVar1 = System_String__IndexOf(locale,0x7d,index,(MethodInfo *)0x0);
    pSVar3 = System_String__Substring(locale,index + 1,~index + iVar1,(MethodInfo *)0x0);
    if (conditionToValue != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)conditionToValue
                         ,(Il2CppObject *)pSVar3,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar2 == '\0') {
        pSVar4 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      }
      else {
        pSVar4 = (System_String_o *)
                 System_Collections_Generic_Dictionary<object__object>__get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)
                            conditionToValue,(Il2CppObject *)pSVar3,MethodInfo_String_get_Item);
        pSVar4 = System_String__Concat(pSVar3,".",pSVar4,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar4 = UI_UIManager__GetLocale
                           ("QuestItems",pSVar4,"","","Error",
                            (MethodInfo *)0x0);
        bVar2 = System_String__op_Equality(pSVar4,"Error",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          pSVar3 = (System_String_o *)
                   System_Collections_Generic_Dictionary<object__object>__get_Item
                             ((System_Collections_Generic_Dictionary_object__object__o *)
                              conditionToValue,(Il2CppObject *)pSVar3,MethodInfo_String_get_Item);
          return pSVar3;
        }
      }
      return pSVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.QuestCategoryPanel$$SetProgress
// il2cpp: void UI_QuestCategoryPanel__SetProgress (UI_QuestCategoryPanel_o* __this, GameProgress_QuestItem_o* item, UnityEngine_Transform_o* panel, const MethodInfo* method);
// 0x40fda70

void UI_QuestCategoryPanel__SetProgress
               (UI_QuestCategoryPanel_o *__this,GameProgress_QuestItem_o *item,
               UnityEngine_Transform_o *panel,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  int32_t local_1c;
  
  if (DAT_05704852 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Slider_GetComponent_Slider);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"Panel/ProgressLabel");
    il2cpp_init_method_metadata(&" / ");
    il2cpp_init_method_metadata(&"Panel/ProgressBar");
    DAT_05704852 = '\x01';
  }
  local_1c = 0;
  if (panel != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__Find(panel,"Panel/ProgressBar",(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pIVar4 = UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar3,MethodInfo_Slider_GetComponent_Slider);
      if ((((item != (GameProgress_QuestItem_o *)0x0) &&
           (pSVar1 = (item->fields).Progress, pSVar1 != (Settings_IntSetting_o *)0x0)) &&
          (pSVar2 = (item->fields).Amount, pSVar2 != (Settings_IntSetting_o *)0x0)) &&
         (pIVar4 != (Il2CppObject *)0x0)) {
        (*pIVar4->klass->vtable[0x2f].methodPtr)
                  ((float)(pSVar1->fields)._value / (float)(pSVar2->fields)._value,pIVar4,
                   pIVar4->klass->vtable[0x2f].method);
        pUVar3 = UnityEngine_Transform__Find(panel,"Panel/ProgressLabel",(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          pIVar4 = UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pUVar3,MethodInfo_Text_GetComponent_Text);
          pSVar1 = (item->fields).Progress;
          if (pSVar1 != (Settings_IntSetting_o *)0x0) {
            local_1c = (pSVar1->fields)._value;
            pSVar5 = System_Int32__ToString((int32_t)&local_1c,(MethodInfo *)0x0);
            pSVar1 = (item->fields).Amount;
            if (pSVar1 != (Settings_IntSetting_o *)0x0) {
              local_1c = (pSVar1->fields)._value;
              str2 = System_Int32__ToString((int32_t)&local_1c,(MethodInfo *)0x0);
              pSVar5 = System_String__Concat(pSVar5," / ",str2,(MethodInfo *)0x0);
              if (pIVar4 != (Il2CppObject *)0x0) {
                (*pIVar4->klass->vtable[0x4b].methodPtr)
                          (pIVar4,pSVar5,pIVar4->klass->vtable[0x4b].method);
                return;
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


// UI.QuestCategoryPanel$$.ctor
// il2cpp: void UI_QuestCategoryPanel___ctor (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x40fce70

void UI_QuestCategoryPanel___ctor(UI_QuestCategoryPanel_o *__this,MethodInfo *method)

{
  (__this->fields).QuestItemWidth = 940.0;
  (__this->fields).QuestItemHeight = 100.0;
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


