// Type: UI.QuestCategoryPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/QuestCategoryPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/QuestCategoryPanel.cs
// --------------------------------

// UI.QuestCategoryPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_QuestCategoryPanel__get_ThemePanel (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x44111d0

System_String_o * UI_QuestCategoryPanel__get_ThemePanel(UI_QuestCategoryPanel_o *__this,MethodInfo *method)

{
  if (g_data_057ae5e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"QuestPopup");
    g_data_057ae5e8 = '\x01';
  }
  return "QuestPopup";
}


// UI.QuestCategoryPanel$$get_VerticalSpacing
// il2cpp: float UI_QuestCategoryPanel__get_VerticalSpacing (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x4411200

float UI_QuestCategoryPanel__get_VerticalSpacing(UI_QuestCategoryPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.QuestCategoryPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_QuestCategoryPanel__get_HorizontalPadding (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x4411210

int32_t UI_QuestCategoryPanel__get_HorizontalPadding(UI_QuestCategoryPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.QuestCategoryPanel$$get_VerticalPadding
// il2cpp: int32_t UI_QuestCategoryPanel__get_VerticalPadding (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x4411220

int32_t UI_QuestCategoryPanel__get_VerticalPadding(UI_QuestCategoryPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.QuestCategoryPanel$$get_PanelAlignment
// il2cpp: int32_t UI_QuestCategoryPanel__get_PanelAlignment (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x4411230

int32_t UI_QuestCategoryPanel__get_PanelAlignment(UI_QuestCategoryPanel_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.QuestCategoryPanel$$Setup
// il2cpp: void UI_QuestCategoryPanel__Setup (UI_QuestCategoryPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x440fd90

void UI_QuestCategoryPanel__Setup(UI_QuestCategoryPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  return;
}


// UI.QuestCategoryPanel$$CreateQuestItems
// il2cpp: void UI_QuestCategoryPanel__CreateQuestItems (UI_QuestCategoryPanel_o* __this, System_Collections_Generic_List_QuestItem__o* items, const MethodInfo* method);
// 0x4410080

void UI_QuestCategoryPanel__CreateQuestItems
               (UI_QuestCategoryPanel_o *__this,System_Collections_Generic_List_QuestItem__o *items,
               MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar3;
  uint uVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  Il2CppObject *pIVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_UI_RawImage_o *__this_04;
  System_String_o *name;
  UnityEngine_Texture_o *value;
  System_String_o *pSVar9;
  long *plVar10;
  UnityEngine_Texture_c **method_00;
  UI_QuestCategoryPanel_o *__this_05;
  float fVar11;
  UnityEngine_Color_o UVar12;
  undefined1 auVar13 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar14;
  Il2CppType *pIVar15;
  GameProgress_QuestItem_o *pGVar16;
  GameProgress_QuestItem_o *item;
  undefined1 local_48 [16];
  GameProgress_QuestItem_o *local_38;
  
  if (g_data_057ae5e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestItem_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"ProgressBarFillColor");
    il2cpp_runtime_helper_023445d0(&"Panel/Icon");
    il2cpp_runtime_helper_023445d0(&"Panel/ProgressLabel");
    il2cpp_runtime_helper_023445d0(&"Panel/ProgressBar/Background");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"Icons/Quests/");
    il2cpp_runtime_helper_023445d0(&"QuestItem");
    il2cpp_runtime_helper_023445d0(&"Panel/ProgressBar/Fill Area/Fill");
    il2cpp_runtime_helper_023445d0(&"Panel/CheckIcon");
    il2cpp_runtime_helper_023445d0(&"Panel/RewardLabel");
    il2cpp_runtime_helper_023445d0(&"CheckColor");
    il2cpp_runtime_helper_023445d0(&"BorderColor");
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"IconColor");
    il2cpp_runtime_helper_023445d0(&"Border");
    il2cpp_runtime_helper_023445d0(&"Panel/Title");
    il2cpp_runtime_helper_023445d0(&"ProgressBarBackgroundColor");
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/QuestItemPanel");
    il2cpp_runtime_helper_023445d0(&"BackgroundColor");
    g_data_057ae5e9 = '\x01';
  }
  pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar15 = (Il2CppType *)0x0;
  pGVar16 = (GameProgress_QuestItem_o *)0x0;
  if (items != (System_Collections_Generic_List_QuestItem__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)items,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
    pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar15 = (Il2CppType *)local_48._8_8_;
    item = local_38;
    while( true ) {
      __this_00.fields._8_8_ = pIVar15;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
      __this_00.fields._current = (Il2CppObject *)item;
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      if ((char)bVar3 == '\0') {
        __this_01.fields._8_8_ = pIVar15;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
        __this_01.fields._current = (Il2CppObject *)item;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        return;
      }
      pGVar16 = item;
      pUVar5 = UI_ElementFactory__InstantiateAndBind
                         ((__this->fields).SinglePanel,"Prefabs/MainMenu/QuestItemPanel",(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_GameObject_o *)0x0) break;
      pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_04410a62;
      pIVar7 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement);
      if (pIVar7 == (Il2CppObject *)0x0) goto label_04410a67;
      (*pIVar7->klass->vtable[0x24].methodPtr)
                ((__this->fields).QuestItemWidth,pIVar7,pIVar7->klass->vtable[0x24].method);
      pIVar7 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement);
      if (pIVar7 == (Il2CppObject *)0x0) goto label_04410a6c;
      (*pIVar7->klass->vtable[0x26].methodPtr)
                ((__this->fields).QuestItemHeight,pIVar7,pIVar7->klass->vtable[0x26].method);
      pUVar8 = UnityEngine_Transform__Find(pUVar6,"Panel/Icon",(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04410a71;
      __this_04 = (UnityEngine_UI_RawImage_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_RawImage_GetComponent_RawImage);
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (item == (GameProgress_QuestItem_o *)0x0) goto label_04410a76;
      pSVar1 = (item->fields).Icon;
      if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_04410a7b;
      pSVar9 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      name = System_String__Concat_3af7150
                       ("Icons/Quests/",(pSVar1->fields)._value,"Icon",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = (UnityEngine_Texture_c **)0x0;
      value = (UnityEngine_Texture_o *)
              ApplicationManagers_ResourceManager__LoadAsset(pSVar9,name,1,(MethodInfo *)0x0);
      if (__this_04 == (UnityEngine_UI_RawImage_o *)0x0) goto label_04410a80;
      if ((value != (UnityEngine_Texture_o *)0x0) && (method_00 = &TypeInfo_Texture2D, value->klass != TypeInfo_Texture2D)
         ) goto label_04410af3;
      UnityEngine_UI_RawImage__set_texture(__this_04,value,(MethodInfo *)0x0);
      UI_QuestCategoryPanel__SetTitle(__this,item,pUVar6,(MethodInfo *)method_00);
      __this_05 = __this;
      UI_QuestCategoryPanel__SetRewardLabel(__this,item,pUVar6,(MethodInfo *)method_00);
      UI_QuestCategoryPanel__SetProgress(__this_05,item,pUVar6,(MethodInfo *)method_00);
      pUVar8 = UnityEngine_Transform__Find(pUVar6,"Background",(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04410a85;
      pIVar7 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_Image_GetComponent_Image);
      pSVar9 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UVar12 = UI_UIManager__GetThemeColor(pSVar9,"QuestItem","BackgroundColor","DefaultPanel",(MethodInfo *)0x0);
      fVar11 = UVar12.fields.r;
      if (pIVar7 == (Il2CppObject *)0x0) goto label_04410a8a;
      (*pIVar7->klass->vtable[0x17].methodPtr)
                (fVar11,UVar12.fields._8_8_,pIVar7,pIVar7->klass->vtable[0x17].method);
      pUVar8 = UnityEngine_Transform__Find(pUVar6,"Panel/CheckIcon",(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04410a8f;
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
      uVar4 = GameProgress_QuestItem__Finished(item,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_04410a94;
      UnityEngine_GameObject__SetActive(pUVar5,uVar4 & 0xff,(MethodInfo *)0x0);
      pUVar8 = UnityEngine_Transform__Find(pUVar6,"Border",(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04410a99;
      pIVar7 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_Image_GetComponent_Image);
      pSVar9 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      UVar12 = UI_UIManager__GetThemeColor(pSVar9,"QuestItem","BorderColor","DefaultPanel",(MethodInfo *)0x0);
      fVar11 = UVar12.fields.r;
      if (pIVar7 == (Il2CppObject *)0x0) goto label_04410a9e;
      (*pIVar7->klass->vtable[0x17].methodPtr)
                (fVar11,UVar12.fields._8_8_,pIVar7,pIVar7->klass->vtable[0x17].method);
      pUVar8 = UnityEngine_Transform__Find(pUVar6,"Panel/Icon",(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04410aa3;
      pIVar7 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_RawImage_GetComponent_RawImage);
      pSVar9 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      UVar12 = UI_UIManager__GetThemeColor(pSVar9,"QuestItem","IconColor","DefaultPanel",(MethodInfo *)0x0);
      fVar11 = UVar12.fields.r;
      if (pIVar7 == (Il2CppObject *)0x0) goto label_04410aa8;
      (*pIVar7->klass->vtable[0x17].methodPtr)
                (fVar11,UVar12.fields._8_8_,pIVar7,pIVar7->klass->vtable[0x17].method);
      pUVar8 = UnityEngine_Transform__Find(pUVar6,"Panel/CheckIcon",(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04410aad;
      pIVar7 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_Image_GetComponent_Image);
      pSVar9 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      UVar12 = UI_UIManager__GetThemeColor(pSVar9,"QuestItem","CheckColor","DefaultPanel",(MethodInfo *)0x0);
      fVar11 = UVar12.fields.r;
      if (pIVar7 == (Il2CppObject *)0x0) goto label_04410ab2;
      (*pIVar7->klass->vtable[0x17].methodPtr)
                (fVar11,UVar12.fields._8_8_,pIVar7,pIVar7->klass->vtable[0x17].method);
      pUVar8 = UnityEngine_Transform__Find(pUVar6,"Panel/Title",(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04410ab7;
      pIVar7 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_Text_GetComponent_Text);
      pSVar9 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      UVar12 = UI_UIManager__GetThemeColor(pSVar9,"QuestItem","TextColor","DefaultPanel",(MethodInfo *)0x0);
      fVar11 = UVar12.fields.r;
      if (pIVar7 == (Il2CppObject *)0x0) goto label_04410abc;
      (*pIVar7->klass->vtable[0x17].methodPtr)
                (fVar11,UVar12.fields._8_8_,pIVar7,pIVar7->klass->vtable[0x17].method);
      pUVar8 = UnityEngine_Transform__Find(pUVar6,"Panel/ProgressLabel",(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04410ac1;
      pIVar7 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_Text_GetComponent_Text);
      pSVar9 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      UVar12 = UI_UIManager__GetThemeColor(pSVar9,"QuestItem","TextColor","DefaultPanel",(MethodInfo *)0x0);
      fVar11 = UVar12.fields.r;
      if (pIVar7 == (Il2CppObject *)0x0) goto label_04410ac6;
      (*pIVar7->klass->vtable[0x17].methodPtr)
                (fVar11,UVar12.fields._8_8_,pIVar7,pIVar7->klass->vtable[0x17].method);
      pUVar8 = UnityEngine_Transform__Find(pUVar6,"Panel/RewardLabel",(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04410acb;
      pIVar7 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_Text_GetComponent_Text);
      pSVar9 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      UVar12 = UI_UIManager__GetThemeColor(pSVar9,"QuestItem","TextColor","DefaultPanel",(MethodInfo *)0x0);
      fVar11 = UVar12.fields.r;
      if (pIVar7 == (Il2CppObject *)0x0) goto label_04410ad0;
      (*pIVar7->klass->vtable[0x17].methodPtr)
                (fVar11,UVar12.fields._8_8_,pIVar7,pIVar7->klass->vtable[0x17].method);
      pUVar8 = UnityEngine_Transform__Find(pUVar6,"Panel/CheckIcon",(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04410ad5;
      pIVar7 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_Image_GetComponent_Image);
      pSVar9 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      UVar12 = UI_UIManager__GetThemeColor(pSVar9,"QuestItem","IconColor","DefaultPanel",(MethodInfo *)0x0);
      fVar11 = UVar12.fields.r;
      if (pIVar7 == (Il2CppObject *)0x0) goto label_04410ada;
      (*pIVar7->klass->vtable[0x17].methodPtr)
                (fVar11,UVar12.fields._8_8_,pIVar7,pIVar7->klass->vtable[0x17].method);
      pUVar8 = UnityEngine_Transform__Find(pUVar6,"Panel/ProgressBar/Background",(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04410adf;
      pIVar7 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_Image_GetComponent_Image);
      pSVar9 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      UVar12 = UI_UIManager__GetThemeColor(pSVar9,"QuestItem","ProgressBarBackgroundColor","DefaultPanel",(MethodInfo *)0x0);
      fVar11 = UVar12.fields.r;
      if (pIVar7 == (Il2CppObject *)0x0) goto label_04410ae4;
      (*pIVar7->klass->vtable[0x17].methodPtr)
                (fVar11,UVar12.fields._8_8_,pIVar7,pIVar7->klass->vtable[0x17].method);
      pUVar6 = UnityEngine_Transform__Find(pUVar6,"Panel/ProgressBar/Fill Area/Fill",(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_04410ae9;
      pIVar7 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar6,MethodInfo_Image_GetComponent_Image);
      pSVar9 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      UVar12 = UI_UIManager__GetThemeColor(pSVar9,"QuestItem","ProgressBarFillColor","DefaultPanel",(MethodInfo *)0x0);
      fVar11 = UVar12.fields.r;
      if (pIVar7 == (Il2CppObject *)0x0) goto label_04410aee;
      (*pIVar7->klass->vtable[0x17].methodPtr)
                (fVar11,UVar12.fields._8_8_,pIVar7,pIVar7->klass->vtable[0x17].method);
      item = pGVar16;
    }
    il2cpp_runtime_helper_022b2c90();
label_04410a62:
    il2cpp_runtime_helper_022b2c90();
label_04410a67:
    il2cpp_runtime_helper_022b2c90();
label_04410a6c:
    il2cpp_runtime_helper_022b2c90();
label_04410a71:
    il2cpp_runtime_helper_022b2c90();
label_04410a76:
    il2cpp_runtime_helper_022b2c90();
label_04410a7b:
    il2cpp_runtime_helper_022b2c90();
label_04410a80:
    il2cpp_runtime_helper_022b2c90();
label_04410a85:
    fVar11 = (float)il2cpp_runtime_helper_022b2c90();
label_04410a8a:
    il2cpp_runtime_helper_022b2c90(fVar11);
label_04410a8f:
    il2cpp_runtime_helper_022b2c90();
label_04410a94:
    il2cpp_runtime_helper_022b2c90();
label_04410a99:
    fVar11 = (float)il2cpp_runtime_helper_022b2c90();
label_04410a9e:
    il2cpp_runtime_helper_022b2c90(fVar11);
label_04410aa3:
    fVar11 = (float)il2cpp_runtime_helper_022b2c90();
label_04410aa8:
    il2cpp_runtime_helper_022b2c90(fVar11);
label_04410aad:
    fVar11 = (float)il2cpp_runtime_helper_022b2c90();
label_04410ab2:
    il2cpp_runtime_helper_022b2c90(fVar11);
label_04410ab7:
    fVar11 = (float)il2cpp_runtime_helper_022b2c90();
label_04410abc:
    il2cpp_runtime_helper_022b2c90(fVar11);
label_04410ac1:
    fVar11 = (float)il2cpp_runtime_helper_022b2c90();
label_04410ac6:
    il2cpp_runtime_helper_022b2c90(fVar11);
label_04410acb:
    fVar11 = (float)il2cpp_runtime_helper_022b2c90();
label_04410ad0:
    il2cpp_runtime_helper_022b2c90(fVar11);
label_04410ad5:
    fVar11 = (float)il2cpp_runtime_helper_022b2c90();
label_04410ada:
    il2cpp_runtime_helper_022b2c90(fVar11);
label_04410adf:
    fVar11 = (float)il2cpp_runtime_helper_022b2c90();
label_04410ae4:
    il2cpp_runtime_helper_022b2c90(fVar11);
label_04410ae9:
    fVar11 = (float)il2cpp_runtime_helper_022b2c90();
label_04410aee:
    value = (UnityEngine_Texture_o *)il2cpp_runtime_helper_022b2c90(fVar11);
label_04410af3:
    il2cpp_runtime_helper_022b2fd0(value);
  }
  auVar13 = il2cpp_runtime_helper_022b2c90();
  if (auVar13._8_4_ == 1) {
    plVar10 = (long *)__cxa_begin_catch(auVar13._0_8_);
    lVar2 = *plVar10;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar15;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
    __this_02.fields._current = (Il2CppObject *)pGVar16;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_03.fields._8_8_ = pIVar15;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
  __this_03.fields._current = (Il2CppObject *)pGVar16;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar13._0_8_);
}


// UI.QuestCategoryPanel$$SetRewardLabel
// il2cpp: void UI_QuestCategoryPanel__SetRewardLabel (UI_QuestCategoryPanel_o* __this, GameProgress_QuestItem_o* item, UnityEngine_Transform_o* panel, const MethodInfo* method);
// 0x44119d0

void UI_QuestCategoryPanel__SetRewardLabel
               (UI_QuestCategoryPanel_o *__this,GameProgress_QuestItem_o *item,UnityEngine_Transform_o *panel,
               MethodInfo *method)

{
  byte bVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_c *pSVar3;
  code *vtableDispatch;
  void *pvVar4;
  Il2CppClass *pIVar5;
  long lVar6;
  Il2CppClass_1 *pIVar7;
  GameProgress_QuestItem_o *pGVar8;
  int32_t iVar9;
  bool_conflict bVar10;
  UnityEngine_Transform_o *pUVar11;
  Il2CppClass *pIVar12;
  Il2CppObject *pIVar13;
  System_String_o *pSVar14;
  System_String_o *pSVar15;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar16;
  UI_CategoryPanel_o *__this_01;
  MethodInfo_24E7B40 **ppMVar17;
  Il2CppClass **ppIVar18;
  uint startIndex;
  Il2CppClass *__this_02;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Il2CppClass **unaff_RBX;
  Il2CppClass *pIVar19;
  Il2CppClass *__this_03;
  Il2CppClass **ppIVar20;
  System_String_o **__this_04;
  undefined4 extraout_XMM0_Db;
  UnityEngine_Color_o UVar21;
  undefined4 uStack_54;
  System_String_o *pSStack_50;
  System_String_o *pSStack_48;
  UI_QuestCategoryPanel_o *pUStack_40;
  
  pIVar19 = (Il2CppClass *)item;
  if (g_data_057ae5ea == '\0') {
    pUStack_40 = (UI_QuestCategoryPanel_o *)0x44119fd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AchievementItem);
    pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411a09;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411a15;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411a21;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411a2d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411a39;
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411a45;
    il2cpp_runtime_helper_023445d0(&"Color");
    pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411a51;
    il2cpp_runtime_helper_023445d0(&"Trophy");
    pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411a5d;
    il2cpp_runtime_helper_023445d0(&"+");
    pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411a69;
    il2cpp_runtime_helper_023445d0(&"Exp");
    pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411a75;
    il2cpp_runtime_helper_023445d0(&"Panel/AchievementIcon");
    pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411a81;
    il2cpp_runtime_helper_023445d0(&"Panel/RewardLabel");
    pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411a8d;
    il2cpp_runtime_helper_023445d0(&" exp");
    g_data_057ae5ea = '\x01';
  }
  if (item == (GameProgress_QuestItem_o *)0x0) {
label_04411ab7:
    ppMVar17 = (MethodInfo_24E7B40 **)method;
    pGVar8 = (GameProgress_QuestItem_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_AchievementItem->_2).naturalAligment;
    method = (MethodInfo *)(ulong)bVar1;
    if ((item->klass->_2).naturalAligment < bVar1) goto label_04411ab7;
    ppMVar17 = (MethodInfo_24E7B40 **)method;
    pGVar8 = (GameProgress_QuestItem_o *)0x0;
    if ((item->klass->_2).typeHierarchy
        [(long)((long)&((Il2CppClass *)((long)method + -0x1128))->vtable[0xfe].method + 7)] == TypeInfo_AchievementItem) {
      pGVar8 = item;
    }
  }
  if (panel != (UnityEngine_Transform_o *)0x0) {
    unaff_RBX = &"Panel/RewardLabel";
    pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411af2;
    pIVar19 = "Panel/RewardLabel";
    pUVar11 = UnityEngine_Transform__Find(panel,(System_String_o *)"Panel/RewardLabel",(MethodInfo *)0x0);
    if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
      pIVar19 = (Il2CppClass *)0x0;
      pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411b05;
      pUVar16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
      if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
        if (pGVar8 == (GameProgress_QuestItem_o *)0x0) {
          pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411c9f;
          UnityEngine_GameObject__SetActive(pUVar16,1,(MethodInfo *)0x0);
          pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411cb3;
          pIVar19 = "Panel/AchievementIcon";
          pUVar11 = UnityEngine_Transform__Find(panel,(System_String_o *)"Panel/AchievementIcon",(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
            pIVar19 = (Il2CppClass *)0x0;
            pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411cc6;
            pUVar16 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
            if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
              pIVar19 = (Il2CppClass *)0x0;
              pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411cdb;
              UnityEngine_GameObject__SetActive(pUVar16,0,(MethodInfo *)0x0);
              if ((item != (GameProgress_QuestItem_o *)0x0) &&
                 (pSVar2 = (item->fields).RewardType, pSVar2 != (Settings_StringSetting_o *)0x0)) {
                pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411d07;
                bVar10 = System_String__op_Equality((pSVar2->fields)._value,"Exp",(MethodInfo *)0x0);
                if ((char)bVar10 == '\0') {
                  return;
                }
                pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411d18;
                pIVar19 = "Panel/RewardLabel";
                pUVar11 = UnityEngine_Transform__Find(panel,(System_String_o *)"Panel/RewardLabel",(MethodInfo *)0x0)
                ;
                if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                  ppIVar18 = &MethodInfo_Text_GetComponent_Text;
                  pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411d2f;
                  pIVar19 = MethodInfo_Text_GetComponent_Text;
                  unaff_RBX = &UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)pUVar11,
                                          (MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text)->klass;
                  pSVar2 = (item->fields).RewardValue;
                  ppMVar17 = (MethodInfo_24E7B40 **)ppIVar18;
                  if (pSVar2 != (Settings_StringSetting_o *)0x0) {
                    pIVar19 = (Il2CppClass *)(pSVar2->fields)._value;
                    ppMVar17 = (MethodInfo_24E7B40 **)0x0;
                    pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411d5b;
                    pSVar14 = System_String__Concat_3af7150
                                        ("+",(System_String_o *)pIVar19," exp",
                                         (MethodInfo *)0x0);
                    if ((System_String_o *)unaff_RBX != (System_String_o *)0x0) {
                      pSVar3 = ((System_String_o *)unaff_RBX)->klass;
                      vtableDispatch = (code *)pSVar3[2]._1.namespaze;
                      (*vtableDispatch)
                                (unaff_RBX,pSVar14,pSVar3[2]._1.byval_arg.data,pSVar3,vtableDispatch);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411b23;
          UnityEngine_GameObject__SetActive(pUVar16,0,(MethodInfo *)0x0);
          unaff_RBX = &"Panel/AchievementIcon";
          pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411b37;
          pIVar19 = "Panel/AchievementIcon";
          pUVar11 = UnityEngine_Transform__Find(panel,(System_String_o *)"Panel/AchievementIcon",(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
            pIVar19 = (Il2CppClass *)0x0;
            pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411b4a;
            pUVar16 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
            if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
              pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411b65;
              UnityEngine_GameObject__SetActive(pUVar16,1,(MethodInfo *)0x0);
              pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411b72;
              pIVar19 = "Panel/AchievementIcon";
              pUVar11 = UnityEngine_Transform__Find(panel,(System_String_o *)"Panel/AchievementIcon",(MethodInfo *)0x0);
              if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                ppMVar17 = &MethodInfo_Image_GetComponent_Image;
                pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411b8d;
                pIVar13 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar11,MethodInfo_Image_GetComponent_Image);
                pIVar19 = (Il2CppClass *)(__this->klass->vtable)._4_get_ThemePanel.method;
                pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411ba3;
                pSVar14 = (System_String_o *)(*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)(__this);
                if (item != (GameProgress_QuestItem_o *)0x0) {
                  bVar1 = (TypeInfo_AchievementItem->_2).naturalAligment;
                  ppMVar17 = (MethodInfo_24E7B40 **)(ulong)bVar1;
                  pIVar19 = TypeInfo_AchievementItem;
                  if (((item->klass->_2).naturalAligment < bVar1) ||
                     ((item->klass->_2).typeHierarchy
                      [(long)((long)&((Il2CppClass *)((long)ppMVar17 + -0x1128))->vtable[0xfe].method + 7)] !=
                      TypeInfo_AchievementItem)) goto label_04411d9c;
                  bVar1 = (TypeInfo_AchievementItem->_2).naturalAligment;
                  ppMVar17 = (MethodInfo_24E7B40 **)(ulong)bVar1;
                  if (((item->klass->_2).naturalAligment < bVar1) ||
                     ((item->klass->_2).typeHierarchy
                      [(long)((long)&((Il2CppClass *)((long)ppMVar17 + -0x1128))->vtable[0xfe].method + 7)] !=
                      TypeInfo_AchievementItem)) goto label_04411d9c;
                  panel = (UnityEngine_Transform_o *)pSVar14;
                  if (item[1].klass != (GameProgress_QuestItem_c *)0x0) {
                    pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411c28;
                    unaff_RBX = (Il2CppClass **)
                                System_String__Concat_3ae5ba0
                                          ((System_String_o *)((item[1].klass)->_1).namespaze,"Color",
                                           (MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411c43;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411c65;
                    ppMVar17 = (MethodInfo_24E7B40 **)"DefaultPanel";
                    pIVar19 = "Trophy";
                    UVar21 = UI_UIManager__GetThemeColor
                                       (pSVar14,(System_String_o *)"Trophy",(System_String_o *)unaff_RBX,
                                        (System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
                    if (pIVar13 != (Il2CppObject *)0x0) {
                      (*pIVar13->klass->vtable[0x17].methodPtr)
                                (UVar21.fields._0_8_,UVar21.fields._8_8_,pIVar13,
                                 pIVar13->klass->vtable[0x17].method);
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
  pSVar14 = (System_String_o *)panel;
  pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411d9c;
  il2cpp_runtime_helper_022b2c90();
label_04411d9c:
  pUStack_40 = (UI_QuestCategoryPanel_o *)0x4411da4;
  il2cpp_runtime_helper_022b2fd0();
  ppIVar18 = (Il2CppClass **)ppMVar17;
  __this_03 = pIVar19;
  pSStack_50 = (System_String_o *)unaff_RBX;
  pSStack_48 = pSVar14;
  pUStack_40 = __this;
  if (g_data_057ae5ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Slider_GetComponent_Slider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Panel/ProgressLabel");
    il2cpp_runtime_helper_023445d0(&" / ");
    ppIVar20 = &"Panel/ProgressBar";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5ed = '\x01';
    ppIVar18 = (Il2CppClass **)ppMVar17;
    item = (GameProgress_QuestItem_o *)ppIVar20;
  }
  uStack_54 = 0;
  __this_04 = (System_String_o **)item;
  if ((__this_02 != (Il2CppClass *)0x0) &&
     (__this_03 = "Panel/ProgressBar", __this_04 = (System_String_o **)__this_02,
     pIVar12 = (Il2CppClass *)
               UnityEngine_Transform__Find
                         ((UnityEngine_Transform_o *)__this_02,(System_String_o *)"Panel/ProgressBar",
                          (MethodInfo *)0x0), pIVar12 != (Il2CppClass *)0x0)) {
    ppIVar18 = &MethodInfo_Slider_GetComponent_Slider;
    __this_03 = MethodInfo_Slider_GetComponent_Slider;
    pIVar13 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pIVar12,(MethodInfo_24E7B40 *)MethodInfo_Slider_GetComponent_Slider);
    __this_04 = (System_String_o **)pIVar12;
    if ((pIVar19 != (Il2CppClass *)0x0) &&
       (((ppIVar18 = (Il2CppClass **)(pIVar19->_1).declaringType,
         (Il2CppClass *)ppIVar18 != (Il2CppClass *)0x0 &&
         (pvVar4 = (pIVar19->_1).this_arg.data, pvVar4 != (void *)0x0)) && (pIVar13 != (Il2CppObject *)0x0))))
    {
      pIVar7 = &((Il2CppClass *)ppIVar18)->_1;
      ppIVar18 = (Il2CppClass **)pIVar13->klass;
      (*((Il2CppClass *)ppIVar18)->vtable[0x2f].methodPtr)
                (CONCAT44(extraout_XMM0_Db,
                          (float)*(int *)((long)&pIVar7->name + 4) / (float)*(int *)((long)pvVar4 + 0x14)),
                 pIVar13,((Il2CppClass *)ppIVar18)->vtable[0x2f].method);
      __this_03 = "Panel/ProgressLabel";
      __this_04 = (System_String_o **)__this_02;
      pIVar12 = (Il2CppClass *)
                UnityEngine_Transform__Find
                          ((UnityEngine_Transform_o *)__this_02,(System_String_o *)"Panel/ProgressLabel",
                           (MethodInfo *)0x0);
      if (pIVar12 != (Il2CppClass *)0x0) {
        ppIVar18 = &MethodInfo_Text_GetComponent_Text;
        __this_03 = MethodInfo_Text_GetComponent_Text;
        pIVar13 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pIVar12,(MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text);
        pIVar5 = (pIVar19->_1).declaringType;
        __this_04 = (System_String_o **)pIVar12;
        if (pIVar5 != (Il2CppClass *)0x0) {
          uStack_54 = *(undefined4 *)((long)&(pIVar5->_1).name + 4);
          __this_04 = (System_String_o **)&stack0xffffffffffffffac;
          __this_03 = (Il2CppClass *)0x0;
          pIVar12 = (Il2CppClass *)System_Int32__ToString((int32_t)__this_04,(MethodInfo *)0x0);
          pvVar4 = (pIVar19->_1).this_arg.data;
          if (pvVar4 != (void *)0x0) {
            uStack_54 = *(undefined4 *)((long)pvVar4 + 0x14);
            pSVar14 = System_Int32__ToString((int32_t)&stack0xffffffffffffffac,(MethodInfo *)0x0);
            ppIVar18 = (Il2CppClass **)0x0;
            __this_03 = " / ";
            pSVar14 = System_String__Concat_3af7150
                                ((System_String_o *)pIVar12,(System_String_o *)" / ",pSVar14,
                                 (MethodInfo *)0x0);
            __this_04 = (System_String_o **)pIVar12;
            if (pIVar13 != (Il2CppObject *)0x0) {
              (*pIVar13->klass->vtable[0x4b].methodPtr)(pIVar13,pSVar14,pIVar13->klass->vtable[0x4b].method);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar19 = __this_03;
  if (g_data_057ae5ec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"QuestItems");
    il2cpp_runtime_helper_023445d0(&"Error");
    il2cpp_runtime_helper_023445d0(&"");
    __this_04 = &".";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5ec = '\x01';
  }
  if (__this_03 != (Il2CppClass *)0x0) {
    iVar9 = System_String__IndexOf_3afbe50((System_String_o *)__this_03,0x7d,startIndex,(MethodInfo *)0x0);
    pIVar19 = (Il2CppClass *)(ulong)(startIndex + 1);
    pSVar14 = System_String__Substring_3af8da0
                        ((System_String_o *)__this_03,startIndex + 1,~startIndex + iVar9,(MethodInfo *)0x0);
    __this_04 = (System_String_o **)__this_03;
    if ((Il2CppClass *)ppIVar18 != (Il2CppClass *)0x0) {
      bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                         ((System_Collections_Generic_Dictionary_object__object__o *)ppIVar18,
                          (Il2CppObject *)pSVar14,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar10 != '\0') {
        pSVar15 = (System_String_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)ppIVar18,
                             (Il2CppObject *)pSVar14,MethodInfo_String_get_Item);
        pSVar15 = System_String__Concat_3af7150(pSVar14,".",pSVar15,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar15 = UI_UIManager__GetLocale
                            ("QuestItems",pSVar15,"","","Error",(MethodInfo *)0x0);
        bVar10 = System_String__op_Equality(pSVar15,"Error",(MethodInfo *)0x0);
        if ((char)bVar10 != '\0') {
          System_Collections_Generic_Dictionary_object__object___get_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)ppIVar18,
                     (Il2CppObject *)pSVar14,MethodInfo_String_get_Item);
          return;
        }
      }
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5ee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuestHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"ResetTextColor");
    il2cpp_runtime_helper_023445d0(&"QuestHeader");
    g_data_057ae5ee = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this_04,(UI_BasePanel_o *)pIVar19,(MethodInfo *)0x0);
  pvVar4 = (((Il2CppClass *)__this_04)->_1).image;
  __this_01 = (((Il2CppClass *)__this_04)->_1).byval_arg.data;
  pSVar14 = (System_String_o *)
            (**(code **)((long)pvVar4 + 0x178))(__this_04,*(undefined8 *)((long)pvVar4 + 0x180));
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar14,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_QuestHandler + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = GameProgress_QuestHandler__GetTimeToQuestReset(1,(MethodInfo *)0x0);
  pUVar16 = UI_ElementFactory__CreateDefaultLabel
                      ((UnityEngine_Transform_o *)__this_01,__this_00,pSVar14,0,3,(MethodInfo *)0x0);
  if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
    pIVar13 = UnityEngine_GameObject__GetComponent_object_(pUVar16,MethodInfo_Text_GetComponent_Text);
    pvVar4 = (((Il2CppClass *)__this_04)->_1).image;
    __this_01 = (UI_CategoryPanel_o *)
                (**(code **)((long)pvVar4 + 0x178))(__this_04,*(undefined8 *)((long)pvVar4 + 0x180));
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar21 = UI_UIManager__GetThemeColor
                       ((System_String_o *)__this_01,"QuestHeader","ResetTextColor",(System_String_o *)"DefaultPanel"
                        ,(MethodInfo *)0x0);
    if (pIVar13 != (Il2CppObject *)0x0) {
      (*pIVar13->klass->vtable[0x17].methodPtr)(UVar21.fields._0_8_,UVar21.fields._8_8_,pIVar13);
      method_00 = extraout_RDX;
      if (*(int *)((long)&TypeInfo_GameProgressManager[2].fields.m_CachedPtr + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_00;
      }
      pvVar4 = (TypeInfo_GameProgressManager[1].fields._categoryPanelTypes)->monitor;
      __this_01 = TypeInfo_GameProgressManager;
      if (((pvVar4 != (void *)0x0) && (lVar6 = *(long *)((long)pvVar4 + 0x28), lVar6 != 0)) &&
         (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0)) {
        UI_QuestCategoryPanel__CreateQuestItems
                  ((UI_QuestCategoryPanel_o *)__this_04,
                   *(System_Collections_Generic_List_QuestItem__o **)(lVar6 + 0x18),method_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01[1].klass = (UI_CategoryPanel_c *)0x42c80000446b0000;
  UI_CategoryPanel___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.QuestCategoryPanel$$SetTitle
// il2cpp: void UI_QuestCategoryPanel__SetTitle (UI_QuestCategoryPanel_o* __this, GameProgress_QuestItem_o* item, UnityEngine_Transform_o* panel, const MethodInfo* method);
// 0x4411240

void UI_QuestCategoryPanel__SetTitle
               (UI_QuestCategoryPanel_o *__this,GameProgress_QuestItem_o *item,UnityEngine_Transform_o *panel,
               MethodInfo *method)

{
  int iVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_ListSetting_StringSetting__o *pSVar3;
  System_Collections_Generic_List_object__o *__this_00;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  uint16_t uVar5;
  bool_conflict bVar6;
  int32_t iVar7;
  uint uVar8;
  uint uVar9;
  System_Collections_Generic_Dictionary_object__object__o *__this_06;
  System_String_array *pSVar10;
  System_String_o *pSVar11;
  MethodInfo *str0;
  System_String_o *str1;
  System_String_o *str3;
  UnityEngine_Transform_o *__this_07;
  Il2CppObject *pIVar12;
  undefined8 *puVar13;
  long *plVar14;
  UI_QuestCategoryPanel_o *unaff_RBX;
  UI_QuestCategoryPanel_o *pUVar15;
  MethodInfo *method_00;
  uint index;
  undefined1 auVar16 [12];
  undefined1 in_stack_ffffffffffffff78 [14];
  undefined2 uVar17;
  Il2CppObject *in_stack_ffffffffffffff88;
  System_Collections_Generic_List_Enumerator_T__c *local_68;
  Il2CppType *pIStack_60;
  Il2CppObject *local_58;
  UnityEngine_Transform_o *local_50;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  local_50 = panel;
  if (g_data_057ae5eb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"QuestItems");
    il2cpp_runtime_helper_023445d0(&"Panel/Title");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae5eb = '\x01';
  }
  local_68 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (Il2CppObject *)0x0;
  uVar17 = 0;
  if ((item != (GameProgress_QuestItem_o *)0x0) &&
     (pSVar2 = (item->fields).Category, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    pSVar11 = (pSVar2->fields)._value;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = "";
    unaff_RBX = (UI_QuestCategoryPanel_o *)
                UI_UIManager__GetLocale
                          ("QuestItems",pSVar11,(System_String_o *)"",
                           (System_String_o *)"",(System_String_o *)"",(MethodInfo *)0x0);
    __this_06 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
    System_Collections_Generic_Dictionary_object__object____ctor(__this_06,MethodInfo_Dictionary_2_System_String_System_String);
    pSVar3 = (item->fields).Conditions;
    if ((pSVar3 != (Settings_ListSetting_StringSetting__o *)0x0) &&
       (__this_00 = (System_Collections_Generic_List_object__o *)(pSVar3->fields)._value,
       __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,__this_00,MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
      local_58 = local_38;
      local_68 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIStack_60 = (Il2CppType *)local_48._8_8_;
      if (__this_06 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        __this_02.fields._version._2_2_ = uVar17;
        __this_02.fields._0_14_ = in_stack_ffffffffffffff78;
        __this_02.fields._current = in_stack_ffffffffffffff88;
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_02,(MethodInfo_321A1D0 *)&local_68);
        if ((char)bVar6 != '\0') goto label_04411677;
      }
      else {
        while (__this_01.fields._version._2_2_ = uVar17, __this_01.fields._0_14_ = in_stack_ffffffffffffff78,
              __this_01.fields._current = in_stack_ffffffffffffff88,
              bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_01,(MethodInfo_321A1D0 *)&local_68), (char)bVar6 != '\0') {
          if (local_58 == (Il2CppObject *)0x0) goto label_04411681;
          pSVar11 = (System_String_o *)0x0;
          if (local_58[1].monitor == (System_String_o *)0x0) goto label_04411692;
          pSVar10 = System_String__Split(local_58[1].monitor,0x3a,0,(MethodInfo *)0x0);
          if (pSVar10 == (System_String_array *)0x0) goto label_044116b3;
          iVar1 = (int)pSVar10->max_length;
          if (iVar1 == 1) goto label_044116c7;
          if (iVar1 == 0) goto label_044116cf;
          System_Collections_Generic_Dictionary_object__object___Add
                    (__this_06,(Il2CppObject *)pSVar10->m_Items[0],(Il2CppObject *)pSVar10->m_Items[1],
                     MethodInfo_Void_Add);
        }
      }
      __this_03.fields._version._2_2_ = uVar17;
      __this_03.fields._0_14_ = in_stack_ffffffffffffff78;
      __this_03.fields._current = in_stack_ffffffffffffff88;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_03,(MethodInfo_321A1C0 *)&local_68);
      while (unaff_RBX == (UI_QuestCategoryPanel_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_04411677:
        pIVar12 = local_58;
        if (local_58 == (Il2CppObject *)0x0) {
label_04411681:
          pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
        }
        pSVar11 = pIVar12[1].monitor;
        if (pSVar11 == (System_String_o *)0x0) {
label_04411692:
          il2cpp_runtime_helper_022b2c90();
        }
        pSVar10 = System_String__Split(pSVar11,0x3a,0,(MethodInfo *)0x0);
        if (pSVar10 == (System_String_array *)0x0) {
label_044116b3:
          pSVar10 = (System_String_array *)il2cpp_runtime_helper_022b2c90();
        }
        iVar1 = (int)pSVar10->max_length;
        if (iVar1 == 0) {
label_044116cf:
          il2cpp_runtime_helper_022b2ca0();
        }
        else if (iVar1 == 1) {
label_044116c7:
          il2cpp_runtime_helper_022b2ca0();
          goto label_044116cf;
        }
        auVar16 = il2cpp_runtime_helper_022b2c90();
        pUVar15 = auVar16._0_8_;
        if (auVar16._8_4_ != 1) goto label_0441198e;
        plVar14 = (long *)__cxa_begin_catch(pUVar15);
        lVar4 = *plVar14;
        __cxa_end_catch();
        __this_04.fields._version._2_2_ = uVar17;
        __this_04.fields._0_14_ = in_stack_ffffffffffffff78;
        __this_04.fields._current = in_stack_ffffffffffffff88;
        System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&local_68)
        ;
        if (lVar4 != 0) {
          il2cpp_runtime_helper_022fefe0(lVar4);
          pUVar15 = unaff_RBX;
label_0441198e:
          __this_05.fields._version._2_2_ = uVar17;
          __this_05.fields._0_14_ = in_stack_ffffffffffffff78;
          __this_05.fields._current = in_stack_ffffffffffffff88;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_05,(MethodInfo_321A1C0 *)&local_68);
          _Unwind_Resume(pUVar15);
        }
      }
      str0 = "";
      if (0 < (int)(unaff_RBX->fields).m_CachedPtr) {
        index = 0;
        do {
          while (pUVar15 = unaff_RBX,
                uVar5 = System_String__get_Chars((System_String_o *)unaff_RBX,index,(MethodInfo *)0x0),
                uVar5 == 0x7b) {
            pSVar11 = UI_QuestCategoryPanel__HandleConditionVariable
                                (pUVar15,(System_String_o *)unaff_RBX,index,
                                 (System_Collections_Generic_Dictionary_string__string__o *)__this_06,
                                 method_00);
            str0 = (MethodInfo *)
                   System_String__Concat_3ae5ba0((System_String_o *)str0,pSVar11,(MethodInfo *)0x0);
            iVar7 = System_String__IndexOf_3afbe50((System_String_o *)unaff_RBX,0x7d,index,(MethodInfo *)0x0);
            index = iVar7 + 1;
            if ((int)(unaff_RBX->fields).m_CachedPtr <= (int)index) goto label_044118bd;
          }
          uVar5 = System_String__get_Chars((System_String_o *)unaff_RBX,index,(MethodInfo *)0x0);
          if (uVar5 == 0x5b) {
            uVar8 = System_String__IndexOf_3afbe50((System_String_o *)unaff_RBX,0x5d,index,(MethodInfo *)0x0);
            iVar7 = System_String__IndexOf_3afbe50((System_String_o *)unaff_RBX,0x7b,index,(MethodInfo *)0x0);
            pUVar15 = unaff_RBX;
            uVar9 = System_String__IndexOf_3afbe50((System_String_o *)unaff_RBX,0x7d,index,(MethodInfo *)0x0);
            pSVar11 = UI_QuestCategoryPanel__HandleConditionVariable
                                (pUVar15,(System_String_o *)unaff_RBX,iVar7,
                                 (System_Collections_Generic_Dictionary_string__string__o *)__this_06,
                                 method_00);
            bVar6 = System_String__op_Inequality
                              (pSVar11,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                               (MethodInfo *)0x0);
            if ((char)bVar6 != '\0') {
              str1 = System_String__Substring_3af8da0
                               ((System_String_o *)unaff_RBX,index + 1,iVar7 + ~index,(MethodInfo *)0x0);
              str3 = System_String__Substring_3af8da0
                               ((System_String_o *)unaff_RBX,uVar9 + 1,uVar8 + ~uVar9,(MethodInfo *)0x0);
              method_00 = (MethodInfo *)0x0;
              str0 = (MethodInfo *)
                     System_String__Concat_3af7470
                               ((System_String_o *)str0,str1,pSVar11,str3,(MethodInfo *)0x0);
            }
          }
          else {
            System_String__get_Chars((System_String_o *)unaff_RBX,index,(MethodInfo *)0x0);
            if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar11 = System_Char__ToString((uint16_t)&stack0xffffffffffffff86,(MethodInfo *)0x0);
            str0 = (MethodInfo *)
                   System_String__Concat_3ae5ba0((System_String_o *)str0,pSVar11,(MethodInfo *)0x0);
            uVar8 = index;
          }
          index = uVar8 + 1;
        } while ((int)index < (int)(unaff_RBX->fields).m_CachedPtr);
      }
label_044118bd:
      if (((local_50 != (UnityEngine_Transform_o *)0x0) &&
          (__this_07 = UnityEngine_Transform__Find(local_50,"Panel/Title",(MethodInfo *)0x0),
          __this_07 != (UnityEngine_Transform_o *)0x0)) &&
         (pIVar12 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_07,MethodInfo_Text_GetComponent_Text),
         pIVar12 != (Il2CppObject *)0x0)) {
        (*pIVar12->klass->vtable[0x4b].methodPtr)(pIVar12,str0,pIVar12->klass->vtable[0x4b].method);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  puVar13 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar13 = unaff_RBX->klass;
  __cxa_throw(puVar13,&PTR_PTR_05215060,0);
}


// UI.QuestCategoryPanel$$HandleConditionVariable
// il2cpp: System_String_o* UI_QuestCategoryPanel__HandleConditionVariable (UI_QuestCategoryPanel_o* __this, System_String_o* locale, int32_t index, System_Collections_Generic_Dictionary_string__string__o* conditionToValue, const MethodInfo* method);
// 0x4411f60

System_String_o *
UI_QuestCategoryPanel__HandleConditionVariable
          (UI_QuestCategoryPanel_o *__this,System_String_o *locale,int32_t index,
          System_Collections_Generic_Dictionary_string__string__o *conditionToValue,MethodInfo *method)

{
  void *pvVar1;
  long lVar2;
  int32_t iVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *pIVar7;
  UI_CategoryPanel_o *__this_02;
  System_String_o *extraout_RAX;
  System_String_o *extraout_RAX_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UI_BasePanel_o *parent;
  System_String_o **ppSVar8;
  UnityEngine_Color_o UVar9;
  
  parent = (UI_BasePanel_o *)locale;
  if (g_data_057ae5ec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"QuestItems");
    il2cpp_runtime_helper_023445d0(&"Error");
    il2cpp_runtime_helper_023445d0(&"");
    ppSVar8 = &".";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5ec = '\x01';
    __this = (UI_QuestCategoryPanel_o *)ppSVar8;
  }
  if (locale != (System_String_o *)0x0) {
    iVar3 = System_String__IndexOf_3afbe50(locale,0x7d,index,(MethodInfo *)0x0);
    parent = (UI_BasePanel_o *)(ulong)(index + 1U);
    pSVar5 = System_String__Substring_3af8da0(locale,index + 1U,~index + iVar3,(MethodInfo *)0x0);
    __this = (UI_QuestCategoryPanel_o *)locale;
    if (conditionToValue != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)conditionToValue,
                         (Il2CppObject *)pSVar5,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar4 == '\0') {
        pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        pSVar6 = (System_String_o *)
                 System_Collections_Generic_Dictionary_object__object___get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)conditionToValue,
                            (Il2CppObject *)pSVar5,MethodInfo_String_get_Item);
        pSVar6 = System_String__Concat_3af7150(pSVar5,".",pSVar6,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = UI_UIManager__GetLocale
                           ("QuestItems",pSVar6,"","","Error",(MethodInfo *)0x0);
        bVar4 = System_String__op_Equality(pSVar6,"Error",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          pSVar5 = (System_String_o *)
                   System_Collections_Generic_Dictionary_object__object___get_Item
                             ((System_Collections_Generic_Dictionary_object__object__o *)conditionToValue,
                              (Il2CppObject *)pSVar5,MethodInfo_String_get_Item);
          return pSVar5;
        }
      }
      return pSVar6;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5ee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuestHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"ResetTextColor");
    il2cpp_runtime_helper_023445d0(&"QuestHeader");
    g_data_057ae5ee = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  __this_02 = (UI_CategoryPanel_o *)(__this->fields).SinglePanel;
  pSVar5 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar5,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_QuestHandler + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = GameProgress_QuestHandler__GetTimeToQuestReset(1,(MethodInfo *)0x0);
  __this_01 = UI_ElementFactory__CreateDefaultLabel
                        ((UnityEngine_Transform_o *)__this_02,__this_00,pSVar5,0,3,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pIVar7 = UnityEngine_GameObject__GetComponent_object_(__this_01,MethodInfo_Text_GetComponent_Text);
    __this_02 = (UI_CategoryPanel_o *)
                (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar9 = UI_UIManager__GetThemeColor
                      ((System_String_o *)__this_02,"QuestHeader","ResetTextColor","DefaultPanel",(MethodInfo *)0x0);
    if (pIVar7 != (Il2CppObject *)0x0) {
      (*pIVar7->klass->vtable[0x17].methodPtr)(UVar9.fields._0_8_,UVar9.fields._8_8_,pIVar7);
      method_00 = extraout_RDX;
      if (*(int *)((long)&TypeInfo_GameProgressManager[2].fields.m_CachedPtr + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_00;
      }
      pvVar1 = (TypeInfo_GameProgressManager[1].fields._categoryPanelTypes)->monitor;
      __this_02 = TypeInfo_GameProgressManager;
      if (((pvVar1 != (void *)0x0) && (lVar2 = *(long *)((long)pvVar1 + 0x28), lVar2 != 0)) &&
         (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
        UI_QuestCategoryPanel__CreateQuestItems
                  (__this,*(System_Collections_Generic_List_QuestItem__o **)(lVar2 + 0x18),method_00);
        return extraout_RAX;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02[1].klass = (UI_CategoryPanel_c *)0x42c80000446b0000;
  UI_CategoryPanel___ctor(__this_02,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// UI.QuestCategoryPanel$$SetProgress
// il2cpp: void UI_QuestCategoryPanel__SetProgress (UI_QuestCategoryPanel_o* __this, GameProgress_QuestItem_o* item, UnityEngine_Transform_o* panel, const MethodInfo* method);
// 0x4411db0

void UI_QuestCategoryPanel__SetProgress
               (UI_QuestCategoryPanel_o *__this,GameProgress_QuestItem_o *item,UnityEngine_Transform_o *panel,
               MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  void *pvVar2;
  long lVar3;
  Il2CppClass_1 *pIVar4;
  int32_t iVar5;
  bool_conflict bVar6;
  UI_QuestCategoryPanel_o *pUVar7;
  Il2CppObject *pIVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UI_CategoryPanel_o *__this_02;
  UI_QuestCategoryPanel_o **__this_03;
  uint startIndex;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UI_QuestCategoryPanel_o *__this_04;
  UI_QuestCategoryPanel_o **ppUVar11;
  System_String_o **__this_05;
  undefined4 extraout_XMM0_Db;
  UnityEngine_Color_o UVar12;
  int32_t local_1c;
  
  __this_03 = (UI_QuestCategoryPanel_o **)method;
  __this_04 = (UI_QuestCategoryPanel_o *)item;
  if (g_data_057ae5ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Slider_GetComponent_Slider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Panel/ProgressLabel");
    il2cpp_runtime_helper_023445d0(&" / ");
    ppUVar11 = &"Panel/ProgressBar";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5ed = '\x01';
    __this_03 = (UI_QuestCategoryPanel_o **)method;
    __this = (UI_QuestCategoryPanel_o *)ppUVar11;
  }
  local_1c = 0;
  __this_05 = (System_String_o **)__this;
  if ((panel != (UnityEngine_Transform_o *)0x0) &&
     (__this_04 = "Panel/ProgressBar", __this_05 = (System_String_o **)panel,
     pUVar7 = (UI_QuestCategoryPanel_o *)
              UnityEngine_Transform__Find(panel,(System_String_o *)"Panel/ProgressBar",(MethodInfo *)0x0),
     pUVar7 != (UI_QuestCategoryPanel_o *)0x0)) {
    __this_03 = &MethodInfo_Slider_GetComponent_Slider;
    __this_04 = MethodInfo_Slider_GetComponent_Slider;
    pIVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar7,(MethodInfo_24E7B40 *)MethodInfo_Slider_GetComponent_Slider);
    __this_05 = (System_String_o **)pUVar7;
    if ((item != (GameProgress_QuestItem_o *)0x0) &&
       (((__this_03 = (UI_QuestCategoryPanel_o **)(item->fields).Progress,
         (Il2CppClass *)__this_03 != (Il2CppClass *)0x0 &&
         (pSVar1 = (item->fields).Amount, pSVar1 != (Settings_IntSetting_o *)0x0)) &&
        (pIVar8 != (Il2CppObject *)0x0)))) {
      pIVar4 = &((Il2CppClass *)__this_03)->_1;
      __this_03 = (UI_QuestCategoryPanel_o **)pIVar8->klass;
      (*((Il2CppClass *)__this_03)->vtable[0x2f].methodPtr)
                (CONCAT44(extraout_XMM0_Db,
                          (float)*(int *)((long)&pIVar4->name + 4) / (float)(pSVar1->fields)._value),pIVar8,
                 ((Il2CppClass *)__this_03)->vtable[0x2f].method);
      __this_04 = "Panel/ProgressLabel";
      pUVar7 = (UI_QuestCategoryPanel_o *)
               UnityEngine_Transform__Find(panel,(System_String_o *)"Panel/ProgressLabel",(MethodInfo *)0x0);
      __this_05 = (System_String_o **)panel;
      if (pUVar7 != (UI_QuestCategoryPanel_o *)0x0) {
        __this_03 = &MethodInfo_Text_GetComponent_Text;
        __this_04 = MethodInfo_Text_GetComponent_Text;
        pIVar8 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar7,(MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text);
        pSVar1 = (item->fields).Progress;
        __this_05 = (System_String_o **)pUVar7;
        if (pSVar1 != (Settings_IntSetting_o *)0x0) {
          local_1c = (pSVar1->fields)._value;
          __this_05 = (System_String_o **)&stack0xffffffffffffffe4;
          __this_04 = (UI_QuestCategoryPanel_o *)0x0;
          pUVar7 = (UI_QuestCategoryPanel_o *)System_Int32__ToString((int32_t)__this_05,(MethodInfo *)0x0);
          pSVar1 = (item->fields).Amount;
          if (pSVar1 != (Settings_IntSetting_o *)0x0) {
            local_1c = (pSVar1->fields)._value;
            pSVar9 = System_Int32__ToString((int32_t)&stack0xffffffffffffffe4,(MethodInfo *)0x0);
            __this_03 = (UI_QuestCategoryPanel_o **)0x0;
            __this_04 = " / ";
            pSVar9 = System_String__Concat_3af7150
                               ((System_String_o *)pUVar7,(System_String_o *)" / ",pSVar9,
                                (MethodInfo *)0x0);
            __this_05 = (System_String_o **)pUVar7;
            if (pIVar8 != (Il2CppObject *)0x0) {
              (*pIVar8->klass->vtable[0x4b].methodPtr)(pIVar8,pSVar9,pIVar8->klass->vtable[0x4b].method);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = __this_04;
  if (g_data_057ae5ec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"QuestItems");
    il2cpp_runtime_helper_023445d0(&"Error");
    il2cpp_runtime_helper_023445d0(&"");
    __this_05 = &".";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5ec = '\x01';
  }
  if (__this_04 != (UI_QuestCategoryPanel_o *)0x0) {
    iVar5 = System_String__IndexOf_3afbe50((System_String_o *)__this_04,0x7d,startIndex,(MethodInfo *)0x0);
    pUVar7 = (UI_QuestCategoryPanel_o *)(ulong)(startIndex + 1);
    pSVar9 = System_String__Substring_3af8da0
                       ((System_String_o *)__this_04,startIndex + 1,~startIndex + iVar5,(MethodInfo *)0x0);
    __this_05 = (System_String_o **)__this_04;
    if ((Il2CppClass *)__this_03 != (Il2CppClass *)0x0) {
      bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                         (Il2CppObject *)pSVar9,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar6 != '\0') {
        pSVar10 = (System_String_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                             (Il2CppObject *)pSVar9,MethodInfo_String_get_Item);
        pSVar10 = System_String__Concat_3af7150(pSVar9,".",pSVar10,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar10 = UI_UIManager__GetLocale
                            ("QuestItems",pSVar10,"","","Error",(MethodInfo *)0x0);
        bVar6 = System_String__op_Equality(pSVar10,"Error",(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          System_Collections_Generic_Dictionary_object__object___get_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                     (Il2CppObject *)pSVar9,MethodInfo_String_get_Item);
          return;
        }
      }
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5ee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuestHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"ResetTextColor");
    il2cpp_runtime_helper_023445d0(&"QuestHeader");
    g_data_057ae5ee = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this_05,(UI_BasePanel_o *)pUVar7,(MethodInfo *)0x0);
  __this_02 = (UI_CategoryPanel_o *)(((UI_QuestCategoryPanel_o *)__this_05)->fields).SinglePanel;
  pSVar9 = (System_String_o *)
           (*(((UI_QuestCategoryPanel_o *)__this_05)->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this_05,
                      (((UI_QuestCategoryPanel_o *)__this_05)->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar9,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_QuestHandler + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = GameProgress_QuestHandler__GetTimeToQuestReset(1,(MethodInfo *)0x0);
  __this_01 = UI_ElementFactory__CreateDefaultLabel
                        ((UnityEngine_Transform_o *)__this_02,__this_00,pSVar9,0,3,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pIVar8 = UnityEngine_GameObject__GetComponent_object_(__this_01,MethodInfo_Text_GetComponent_Text);
    __this_02 = (UI_CategoryPanel_o *)
                (*(((UI_QuestCategoryPanel_o *)__this_05)->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this_05,
                           (((UI_QuestCategoryPanel_o *)__this_05)->klass->vtable)._4_get_ThemePanel.method);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar12 = UI_UIManager__GetThemeColor
                       ((System_String_o *)__this_02,"QuestHeader","ResetTextColor","DefaultPanel",(MethodInfo *)0x0)
    ;
    if (pIVar8 != (Il2CppObject *)0x0) {
      (*pIVar8->klass->vtable[0x17].methodPtr)(UVar12.fields._0_8_,UVar12.fields._8_8_,pIVar8);
      method_00 = extraout_RDX;
      if (*(int *)((long)&TypeInfo_GameProgressManager[2].fields.m_CachedPtr + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_00;
      }
      pvVar2 = (TypeInfo_GameProgressManager[1].fields._categoryPanelTypes)->monitor;
      __this_02 = TypeInfo_GameProgressManager;
      if (((pvVar2 != (void *)0x0) && (lVar3 = *(long *)((long)pvVar2 + 0x28), lVar3 != 0)) &&
         (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
        UI_QuestCategoryPanel__CreateQuestItems
                  ((UI_QuestCategoryPanel_o *)__this_05,
                   *(System_Collections_Generic_List_QuestItem__o **)(lVar3 + 0x18),method_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02[1].klass = (UI_CategoryPanel_c *)0x42c80000446b0000;
  UI_CategoryPanel___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.QuestCategoryPanel$$.ctor
// il2cpp: void UI_QuestCategoryPanel___ctor (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x44111b0

void UI_QuestCategoryPanel___ctor(UI_QuestCategoryPanel_o *__this,MethodInfo *method)

{
  (__this->fields).QuestItemWidth = 940.0;
  (__this->fields).QuestItemHeight = 100.0;
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


