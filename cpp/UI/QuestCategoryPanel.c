// Type: UI.QuestCategoryPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/QuestCategoryPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/QuestCategoryPanel.cs
// --------------------------------

// UI.QuestCategoryPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_QuestCategoryPanel__get_ThemePanel (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x1822993f0

System_String_o * UI_QuestCategoryPanel__get_ThemePanel(UI_QuestCategoryPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347476 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"QuestPopup");
    Il2CppMethodInitialized_184347476 = '\x01';
  }
  return "QuestPopup";
}


// UI.QuestCategoryPanel$$get_VerticalSpacing
// il2cpp: float UI_QuestCategoryPanel__get_VerticalSpacing (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x182168bc0

float
UI_QuestCategoryPanel__get_VerticalSpacing(UI_QuestCategoryPanel_o* __this, MethodInfo* method)

{
  return 20.0;
}


// UI.QuestCategoryPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_QuestCategoryPanel__get_HorizontalPadding (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_QuestCategoryPanel__get_HorizontalPadding(UI_QuestCategoryPanel_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.QuestCategoryPanel$$get_VerticalPadding
// il2cpp: int32_t UI_QuestCategoryPanel__get_VerticalPadding (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_QuestCategoryPanel__get_VerticalPadding(UI_QuestCategoryPanel_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.QuestCategoryPanel$$get_PanelAlignment
// il2cpp: int32_t UI_QuestCategoryPanel__get_PanelAlignment (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
UI_QuestCategoryPanel__get_PanelAlignment(UI_QuestCategoryPanel_o* __this, MethodInfo* method)

{
  return 1;
}


// UI.QuestCategoryPanel$$Setup
// il2cpp: void UI_QuestCategoryPanel__Setup (UI_QuestCategoryPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182278860

void UI_QuestCategoryPanel__Setup(UI_QuestCategoryPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  return;
}


// UI.QuestCategoryPanel$$CreateQuestItems
// il2cpp: void UI_QuestCategoryPanel__CreateQuestItems (UI_QuestCategoryPanel_o* __this, System_Collections_Generic_List_QuestItem__o* items, const MethodInfo* method);
// 0x182297aa0
// eh: try 0x182297cc0..0x182298778 -> pad 0x1833286e0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182298671: mov rdx, qword ptr [rip + 0x1df9498]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x182298678: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x18229867d: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182298682: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x182298687: test rcx, rcx
// asm:   0x18229868a: jne 0x182298778
// asm:   0x182298778: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833286e0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833286e5: push rbp
// asm:   0x1833286e6: sub rsp, 0x30
// asm:   0x1833286ea: mov rbp, rdx
// asm:   0x1833286ed: mov rax, qword ptr [rbp + 0x80]
// asm:   0x1833286f4: mov rcx, qword ptr [rax]
// asm:   0x1833286f7: mov qword ptr [rbp + 0x40], rcx
// asm:   0x1833286fb: movabs rax, 0
// asm:   0x183328705: add rsp, 0x30
// asm:   0x183328709: pop rbp
// asm:   0x18332870a: ret 

void UI_QuestCategoryPanel__CreateQuestItems
               (UI_QuestCategoryPanel_o *__this,System_Collections_Generic_List_QuestItem__o *items,
               MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Il2CppObject *item;
  bool bVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_UI_LayoutElement_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_UI_RawImage_o *pUVar9;
  System_String_o *pSVar10;
  UnityEngine_Texture_o *pUVar11;
  UnityEngine_UI_Slider_o *pUVar12;
  UnityEngine_UI_Text_o *pUVar13;
  System_String_o *pSVar14;
  UnityEngine_UI_Image_o *pUVar15;
  UnityEngine_Color_o *pUVar16;
  UnityEngine_Texture_o *value;
  int32_t local_res10 [2];
  UnityEngine_Color_Fields local_118;
  undefined8 local_108;
  System_Collections_Generic_List_Enumerator_object__o *local_100;
  System_Collections_Generic_List_Enumerator_object__o local_f8;
  System_Collections_Generic_List_Enumerator_T__o local_e0;
  UnityEngine_Color_o local_c0;
  UnityEngine_Color_o local_b0;
  UnityEngine_Color_o local_a0;
  UnityEngine_Color_o local_90;
  UnityEngine_Color_o local_80;
  UnityEngine_Color_o local_70;
  UnityEngine_Color_o local_60;
  UnityEngine_Color_o local_50;
  UnityEngine_Color_o local_40;
  
  if (Il2CppMethodInitialized_184347477 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"ProgressBarFillColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/ProgressLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/ProgressBar/Background");
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Quests/");
    il2cpp_codegen_initialize_runtime_metadata(&"QuestItem");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/ProgressBar/Fill Area/Fill");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/CheckIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/RewardLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"CheckColor");
    il2cpp_codegen_initialize_runtime_metadata(&"BorderColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"IconColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Border");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/Title");
    il2cpp_codegen_initialize_runtime_metadata(&"ProgressBarBackgroundColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/MainMenu/QuestItemPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"BackgroundColor");
    Il2CppMethodInitialized_184347477 = '\x01';
  }
  local_f8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_f8.fields._index = 0;
  local_f8.fields._version = 0;
  local_f8.fields._current = (Il2CppObject *)0x0;
  if (items == (System_Collections_Generic_List_QuestItem__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            (&local_e0,(System_Collections_Generic_List_T__o *)items,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
  local_f8.fields._list = local_e0.fields._list;
  local_f8.fields._index = local_e0.fields._index;
  local_f8.fields._version = local_e0.fields._version;
  local_f8.fields._current = local_e0.fields._current;
  local_108 = 0;
  local_100 = &local_f8;
  while( true ) {
    bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_f8,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
    item = local_f8.fields._current;
    if (!bVar4) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_f8,
                 MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
      return;
    }
    pUVar5 = UI_ElementFactory__InstantiateAndBind
                       ((__this->fields).SinglePanel,"Prefabs/MainMenu/QuestItemPanel",(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar7 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar6,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    if (pUVar7 == (UnityEngine_UI_LayoutElement_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar7->klass->vtable)._36_set_preferredWidth.methodPtr)
              (pUVar7,(__this->fields).QuestItemWidth,(pUVar7->klass->vtable)._36_set_preferredWidth.method);
    pUVar7 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar6,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    if (pUVar7 == (UnityEngine_UI_LayoutElement_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar7->klass->vtable)._38_set_preferredHeight.methodPtr)
              (pUVar7,(__this->fields).QuestItemHeight,(pUVar7->klass->vtable)._38_set_preferredHeight.method)
    ;
    pUVar8 = UnityEngine_Transform__Find(pUVar6,"Panel/Icon",(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar9 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar8,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    if ((GameProgress_QuestItem_o *)item == (GameProgress_QuestItem_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar1 = ((GameProgress_QuestItem_Fields *)((longlong)item + 0x10))->Icon;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar14 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    pSVar10 = System_String__Concat_1969b70
                        ("Icons/Quests/",(pSVar1->fields)._value,"Icon",(MethodInfo *)0x0
                        );
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar11 = (UnityEngine_Texture_o *)
              ApplicationManagers_ResourceManager__LoadAsset(pSVar14,pSVar10,true,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_UI_RawImage_o *)0x0) {
      ThrowNullReferenceException();
    }
    value = (UnityEngine_Texture_o *)0x0;
    if (pUVar11 != (UnityEngine_Texture_o *)0x0) {
      if (pUVar11->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
        value = pUVar11;
      }
      if (value == (UnityEngine_Texture_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar11,TypeInfo_UnityEngine_Texture2D);
      }
    }
    UnityEngine_UI_RawImage__set_texture(pUVar9,value,(MethodInfo *)0x0);
    UI_QuestCategoryPanel__SetTitle(__this,(GameProgress_QuestItem_o *)item,pUVar6,(MethodInfo *)0x0);
    UI_QuestCategoryPanel__SetRewardLabel(__this,(GameProgress_QuestItem_o *)item,pUVar6,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18434747b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Slider);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
      il2cpp_codegen_initialize_runtime_metadata(&"Panel/ProgressLabel");
      il2cpp_codegen_initialize_runtime_metadata(&" / ");
      il2cpp_codegen_initialize_runtime_metadata(&"Panel/ProgressBar");
      Il2CppMethodInitialized_18434747b = '\x01';
    }
    local_res10[0] = 0;
    pUVar8 = UnityEngine_Transform__Find(pUVar6,"Panel/ProgressBar",(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar12 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar8,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Slider);
    pSVar2 = ((GameProgress_QuestItem_Fields *)((longlong)item + 0x10))->Progress;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = ((GameProgress_QuestItem_Fields *)((longlong)item + 0x10))->Amount;
    if (pSVar3 == (Settings_IntSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (pUVar12 == (UnityEngine_UI_Slider_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar12->klass->vtable)._47_set_value.methodPtr)
              (pUVar12,(float)(pSVar2->fields)._value / (float)(pSVar3->fields)._value,
               (pUVar12->klass->vtable)._47_set_value.method);
    pUVar8 = UnityEngine_Transform__Find(pUVar6,"Panel/ProgressLabel",(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar13 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar8,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    pSVar2 = ((GameProgress_QuestItem_Fields *)((longlong)item + 0x10))->Progress;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_res10[0] = (pSVar2->fields)._value;
    pSVar14 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
    pSVar2 = ((GameProgress_QuestItem_Fields *)((longlong)item + 0x10))->Amount;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_res10[0] = (pSVar2->fields)._value;
    pSVar10 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
    pSVar14 = System_String__Concat_1969b70(pSVar14," / ",pSVar10,(MethodInfo *)0x0);
    if (pUVar13 == (UnityEngine_UI_Text_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar13->klass->vtable)._75_set_text.methodPtr)
              (pUVar13,pSVar14,(pUVar13->klass->vtable)._75_set_text.method);
    pUVar8 = UnityEngine_Transform__Find(pUVar6,"Background",(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar15 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar8,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    pSVar14 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar16 = UI_UIManager__GetThemeColor
                        (&local_c0,pSVar14,"QuestItem","BackgroundColor","DefaultPanel",
                         (MethodInfo *)0x0);
    if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_118.r = (pUVar16->fields).r;
    local_118.g = (pUVar16->fields).g;
    local_118.b = (pUVar16->fields).b;
    local_118.a = (pUVar16->fields).a;
    (*(pUVar15->klass->vtable)._23_set_color.methodPtr)
              (pUVar15,(UnityEngine_Color_o *)&local_118,(pUVar15->klass->vtable)._23_set_color.method);
    pUVar8 = UnityEngine_Transform__Find(pUVar6,"Panel/CheckIcon",(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
    bVar4 = GameProgress_QuestItem__Finished((GameProgress_QuestItem_o *)item,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(pUVar5,bVar4,(MethodInfo *)0x0);
    pUVar8 = UnityEngine_Transform__Find(pUVar6,"Border",(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar15 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar8,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    pSVar14 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUVar16 = UI_UIManager__GetThemeColor
                        (&local_b0,pSVar14,"QuestItem","BorderColor","DefaultPanel",
                         (MethodInfo *)0x0);
    if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_118.r = (pUVar16->fields).r;
    local_118.g = (pUVar16->fields).g;
    local_118.b = (pUVar16->fields).b;
    local_118.a = (pUVar16->fields).a;
    (*(pUVar15->klass->vtable)._23_set_color.methodPtr)
              (pUVar15,(UnityEngine_Color_o *)&local_118,(pUVar15->klass->vtable)._23_set_color.method);
    pUVar8 = UnityEngine_Transform__Find(pUVar6,"Panel/Icon",(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar9 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar8,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    pSVar14 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUVar16 = UI_UIManager__GetThemeColor
                        (&local_a0,pSVar14,"QuestItem","IconColor","DefaultPanel",
                         (MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_UI_RawImage_o *)0x0) break;
    local_118.r = (pUVar16->fields).r;
    local_118.g = (pUVar16->fields).g;
    local_118.b = (pUVar16->fields).b;
    local_118.a = (pUVar16->fields).a;
    (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
              (pUVar9,(UnityEngine_Color_o *)&local_118,(pUVar9->klass->vtable)._23_set_color.method);
    pUVar8 = UnityEngine_Transform__Find(pUVar6,"Panel/CheckIcon",(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar15 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar8,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    pSVar14 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUVar16 = UI_UIManager__GetThemeColor
                        (&local_90,pSVar14,"QuestItem","CheckColor","DefaultPanel",
                         (MethodInfo *)0x0);
    if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_118.r = (pUVar16->fields).r;
    local_118.g = (pUVar16->fields).g;
    local_118.b = (pUVar16->fields).b;
    local_118.a = (pUVar16->fields).a;
    (*(pUVar15->klass->vtable)._23_set_color.methodPtr)
              (pUVar15,(UnityEngine_Color_o *)&local_118,(pUVar15->klass->vtable)._23_set_color.method);
    pUVar8 = UnityEngine_Transform__Find(pUVar6,"Panel/Title",(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar13 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar8,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    pSVar14 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUVar16 = UI_UIManager__GetThemeColor
                        (&local_80,pSVar14,"QuestItem","TextColor","DefaultPanel",
                         (MethodInfo *)0x0);
    if (pUVar13 == (UnityEngine_UI_Text_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_118.r = (pUVar16->fields).r;
    local_118.g = (pUVar16->fields).g;
    local_118.b = (pUVar16->fields).b;
    local_118.a = (pUVar16->fields).a;
    (*(pUVar13->klass->vtable)._23_set_color.methodPtr)
              (pUVar13,(UnityEngine_Color_o *)&local_118,(pUVar13->klass->vtable)._23_set_color.method);
    pUVar8 = UnityEngine_Transform__Find(pUVar6,"Panel/ProgressLabel",(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar13 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar8,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    pSVar14 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUVar16 = UI_UIManager__GetThemeColor
                        (&local_70,pSVar14,"QuestItem","TextColor","DefaultPanel",
                         (MethodInfo *)0x0);
    if (pUVar13 == (UnityEngine_UI_Text_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_118.r = (pUVar16->fields).r;
    local_118.g = (pUVar16->fields).g;
    local_118.b = (pUVar16->fields).b;
    local_118.a = (pUVar16->fields).a;
    (*(pUVar13->klass->vtable)._23_set_color.methodPtr)
              (pUVar13,(UnityEngine_Color_o *)&local_118,(pUVar13->klass->vtable)._23_set_color.method);
    pUVar8 = UnityEngine_Transform__Find(pUVar6,"Panel/RewardLabel",(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar13 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar8,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    pSVar14 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUVar16 = UI_UIManager__GetThemeColor
                        (&local_60,pSVar14,"QuestItem","TextColor","DefaultPanel",
                         (MethodInfo *)0x0);
    if (pUVar13 == (UnityEngine_UI_Text_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_118.r = (pUVar16->fields).r;
    local_118.g = (pUVar16->fields).g;
    local_118.b = (pUVar16->fields).b;
    local_118.a = (pUVar16->fields).a;
    (*(pUVar13->klass->vtable)._23_set_color.methodPtr)
              (pUVar13,(UnityEngine_Color_o *)&local_118,(pUVar13->klass->vtable)._23_set_color.method);
    pUVar8 = UnityEngine_Transform__Find(pUVar6,"Panel/CheckIcon",(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar15 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar8,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    pSVar14 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUVar16 = UI_UIManager__GetThemeColor
                        (&local_50,pSVar14,"QuestItem","IconColor","DefaultPanel",
                         (MethodInfo *)0x0);
    if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_118.r = (pUVar16->fields).r;
    local_118.g = (pUVar16->fields).g;
    local_118.b = (pUVar16->fields).b;
    local_118.a = (pUVar16->fields).a;
    (*(pUVar15->klass->vtable)._23_set_color.methodPtr)
              (pUVar15,(UnityEngine_Color_o *)&local_118,(pUVar15->klass->vtable)._23_set_color.method);
    pUVar8 = UnityEngine_Transform__Find(pUVar6,"Panel/ProgressBar/Background",(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar15 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar8,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    pSVar14 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUVar16 = UI_UIManager__GetThemeColor
                        (&local_40,pSVar14,"QuestItem","ProgressBarBackgroundColor","DefaultPanel",
                         (MethodInfo *)0x0);
    if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_118.r = (pUVar16->fields).r;
    local_118.g = (pUVar16->fields).g;
    local_118.b = (pUVar16->fields).b;
    local_118.a = (pUVar16->fields).a;
    (*(pUVar15->klass->vtable)._23_set_color.methodPtr)
              (pUVar15,(UnityEngine_Color_o *)&local_118,(pUVar15->klass->vtable)._23_set_color.method);
    pUVar6 = UnityEngine_Transform__Find(pUVar6,"Panel/ProgressBar/Fill Area/Fill",(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar15 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar6,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    pSVar14 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUVar16 = UI_UIManager__GetThemeColor
                        ((UnityEngine_Color_o *)&local_e0,pSVar14,"QuestItem","ProgressBarFillColor",
                         "DefaultPanel",(MethodInfo *)0x0);
    if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_118.r = (pUVar16->fields).r;
    local_118.g = (pUVar16->fields).g;
    local_118.b = (pUVar16->fields).b;
    local_118.a = (pUVar16->fields).a;
    (*(pUVar15->klass->vtable)._23_set_color.methodPtr)
              (pUVar15,(UnityEngine_Color_o *)&local_118,(pUVar15->klass->vtable)._23_set_color.method);
  }
  ThrowNullReferenceException();
}


// UI.QuestCategoryPanel$$SetRewardLabel
// il2cpp: void UI_QuestCategoryPanel__SetRewardLabel (UI_QuestCategoryPanel_o* __this, GameProgress_QuestItem_o* item, UnityEngine_Transform_o* panel, const MethodInfo* method);
// 0x182298af0

void UI_QuestCategoryPanel__SetRewardLabel
               (UI_QuestCategoryPanel_o *__this,GameProgress_QuestItem_o *item,UnityEngine_Transform_o *panel,
               MethodInfo *method)

{
  byte bVar1;
  Settings_StringSetting_o *pSVar2;
  bool bVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_Image_o *pUVar6;
  System_String_o *pSVar7;
  System_String_o *item_00;
  UnityEngine_Color_o *pUVar8;
  UnityEngine_UI_Text_o *pUVar9;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_184347478 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_AchievementItem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"Trophy");
    il2cpp_codegen_initialize_runtime_metadata(&"+");
    il2cpp_codegen_initialize_runtime_metadata(&"Exp");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/AchievementIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/RewardLabel");
    il2cpp_codegen_initialize_runtime_metadata(&" exp");
    Il2CppMethodInitialized_184347478 = '\x01';
  }
  if (item != (GameProgress_QuestItem_o *)0x0) {
    bVar1 = (TypeInfo_GameProgress_AchievementItem->_2).typeHierarchyDepth;
    if ((bVar1 <= (item->klass->_2).typeHierarchyDepth) &&
       ((item->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_GameProgress_AchievementItem)) {
      if ((panel != (UnityEngine_Transform_o *)0x0) &&
         ((pUVar4 = UnityEngine_Transform__Find(panel,"Panel/RewardLabel",(MethodInfo *)0x0),
          pUVar4 != (UnityEngine_Transform_o *)0x0 &&
          (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0)
          , pUVar5 != (UnityEngine_GameObject_o *)0x0)))) {
        UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
        pUVar4 = UnityEngine_Transform__Find(panel,"Panel/AchievementIcon",(MethodInfo *)0x0);
        if ((pUVar4 != (UnityEngine_Transform_o *)0x0) &&
           (pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
           pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_Transform__Find(panel,"Panel/AchievementIcon",(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            pUVar6 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar4,
                                (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
            pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                               (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
            bVar1 = (TypeInfo_GameProgress_AchievementItem->_2).typeHierarchyDepth;
            if (((item->klass->_2).typeHierarchyDepth < bVar1) ||
               ((item->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_GameProgress_AchievementItem)) {
              il2cpp_codegen_raise_invalid_cast_exception(item,TypeInfo_GameProgress_AchievementItem);
            }
            if ((*(uint64_t *)((char *)item + 0x80)) != (GameProgress_QuestItem_c *)0x0) {
              item_00 = System_String__Concat_1969e50
                                  ((((*(Il2CppClass **)((char *)item + 0x80)))->_1).byval_arg.data,"Color",
                                   (MethodInfo *)0x0);
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pUVar8 = UI_UIManager__GetThemeColor
                                 (&local_18,pSVar7,"Trophy",item_00,"DefaultPanel",
                                  (MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                local_18.fields.r = (pUVar8->fields).r;
                local_18.fields.g = (pUVar8->fields).g;
                local_18.fields.b = (pUVar8->fields).b;
                local_18.fields.a = (pUVar8->fields).a;
                (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                          (pUVar6,&local_18,(pUVar6->klass->vtable)._23_set_color.method);
                return;
              }
            }
          }
        }
      }
      goto label_182298eb3;
    }
  }
  if (((panel != (UnityEngine_Transform_o *)0x0) &&
      (pUVar4 = UnityEngine_Transform__Find(panel,"Panel/RewardLabel",(MethodInfo *)0x0),
      pUVar4 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
    pUVar4 = UnityEngine_Transform__Find(panel,"Panel/AchievementIcon",(MethodInfo *)0x0);
    if (((pUVar4 != (UnityEngine_Transform_o *)0x0) &&
        (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
        pUVar5 != (UnityEngine_GameObject_o *)0x0)) &&
       ((UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0),
        item != (GameProgress_QuestItem_o *)0x0 &&
        (pSVar2 = (item->fields).RewardType, pSVar2 != (Settings_StringSetting_o *)0x0)))) {
      bVar3 = System_String__op_Equality((pSVar2->fields)._value,"Exp",(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      pUVar4 = UnityEngine_Transform__Find(panel,"Panel/RewardLabel",(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        pUVar9 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar4,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
        pSVar2 = (item->fields).RewardValue;
        if ((pSVar2 != (Settings_StringSetting_o *)0x0) &&
           (pSVar7 = System_String__Concat_1969b70
                               ("+",(pSVar2->fields)._value," exp",
                                (MethodInfo *)0x0), pUVar9 != (UnityEngine_UI_Text_o *)0x0)) {
          (*(pUVar9->klass->vtable)._75_set_text.methodPtr)
                    (pUVar9,pSVar7,(pUVar9->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
label_182298eb3:
  ThrowNullReferenceException();
}


// UI.QuestCategoryPanel$$SetTitle
// il2cpp: void UI_QuestCategoryPanel__SetTitle (UI_QuestCategoryPanel_o* __this, GameProgress_QuestItem_o* item, UnityEngine_Transform_o* panel, const MethodInfo* method);
// 0x182298ed0
// eh: try 0x1822990a0..0x18229911f -> pad 0x18333fbb0 catch Il2CppExceptionWrapper
// eh: try 0x182299170..0x182299340 -> pad 0x18333fbe0 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x1822993b6..0x1822993d6 -> pad 0x18333fbb0 catch Il2CppExceptionWrapper
// eh: try 0x1822993dc..0x1822993e3 -> pad 0x18333fbe0 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 50 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182299132: mov rdx, qword ptr [rip + 0x1dfed1f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose
// asm:   0x182299139: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18229913e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182299143: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x182299148: test rcx, rcx
// asm:   0x18229914b: jne 0x1822993d6
// asm:   0x182299151: xor esi, esi
// asm:   0x182299153: mov r12, qword ptr [rsp + 0x68]
// asm:   0x182299158: mov qword ptr [rsp + 0x30], r12
// asm:   0x18229915d: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x182299179: mov ebx, esi
// asm:   0x18229917b: nop dword ptr [rax + rax]
// asm:   0x182299342: lea rcx, [rip + 0x1e53ee7]  ; "Locale error."
// asm:   0x182299349: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18229934e: mov r14, rax
// asm:   0x1822993d6: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333fbb0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333fbb5: push rbp
// asm:   0x18333fbb6: sub rsp, 0x30
// asm:   0x18333fbba: mov rbp, rdx
// asm:   0x18333fbbd: mov rax, qword ptr [rbp + 0x80]
// asm:   0x18333fbc4: mov rcx, qword ptr [rax]
// asm:   0x18333fbc7: mov qword ptr [rbp + 0x38], rcx
// asm:   0x18333fbcb: movabs rax, 0
// asm:   0x18333fbd5: add rsp, 0x30
// asm:   0x18333fbd9: pop rbp
// asm:   0x18333fbda: ret 
// asm:   0x18333fbe0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333fbe5: push rbx
// asm:   0x18333fbe6: push rbp
// asm:   0x18333fbe7: sub rsp, 0x38
// asm:   0x18333fbeb: mov rbp, rdx
// asm:   0x18333fbee: mov rbx, qword ptr [rbp + 0x88]
// asm:   0x18333fbf5: mov rdx, qword ptr [rbx]
// asm:   0x18333fbf8: mov rdx, qword ptr [rdx]
// asm:   0x18333fbfb: mov rcx, qword ptr [rip + 0x10151ce]
// asm:   0x18333fc02: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333fc07: test al, al
// asm:   0x18333fc09: je 0x18333fc17
// asm:   0x18333fc0b: movabs rax, 0
// asm:   0x18333fc15: jmp 0x18333fc2f
// asm:   0x18333fc17: mov rax, qword ptr [rbx]
// asm:   0x18333fc1a: mov qword ptr [rbp + 0x78], rax
// asm:   0x18333fc1e: lea rdx, [rip + 0xc9c363]
// asm:   0x18333fc25: lea rcx, [rbp + 0x78]
// asm:   0x18333fc29: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333fc2f: add rsp, 0x38
// asm:   0x18333fc33: pop rbp
// asm:   0x18333fc34: pop rbx
// asm:   0x18333fc35: ret 

void UI_QuestCategoryPanel__SetTitle
               (UI_QuestCategoryPanel_o *__this,GameProgress_QuestItem_o *item,UnityEngine_Transform_o *panel,
               MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Settings_ListSetting_StringSetting__o *pSVar2;
  System_Collections_Generic_List_T__o *__this_00;
  bool bVar3;
  uint16_t uVar4;
  int32_t iVar5;
  int32_t index;
  int32_t iVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_Dictionary_string__string__o *conditionToValue;
  System_String_array *pSVar8;
  System_String_o *pSVar9;
  System_String_o *str0;
  System_String_o *str1;
  System_String_o *str3;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_UI_Text_o *pUVar10;
  int32_t iVar11;
  MethodInfo *method_00;
  uint16_t local_res10 [4];
  UnityEngine_Transform_o *local_res18;
  undefined1 local_90 [16];
  Il2CppObject *local_80;
  undefined1 local_78 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_70;
  Il2CppObject *local_68;
  System_Collections_Generic_Dictionary_string__string__o *local_60;
  System_String_o *local_58;
  
  local_res18 = panel;
  if (Il2CppMethodInitialized_184347479 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"QuestItems");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/Title");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347479 = '\x01';
  }
  local_78 = (undefined1  [8])0x0;
  pUStack_70 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_68 = (Il2CppObject *)0x0;
  local_res10[0] = 0;
  if ((item != (GameProgress_QuestItem_o *)0x0) &&
     (pSVar1 = (item->fields).Category, pSVar1 != (Settings_StringSetting_o *)0x0)) {
    pSVar7 = (pSVar1->fields)._value;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar7 = UI_UIManager__GetLocale
                       ("QuestItems",pSVar7,"","",
                        "",(MethodInfo *)0x0);
    local_58 = pSVar7;
    conditionToValue =
         il2cpp_codegen_object_new
                   ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
    System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)conditionToValue,
               (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    pSVar2 = (item->fields).Conditions;
    if ((pSVar2 != (Settings_ListSetting_StringSetting__o *)0x0) &&
       (__this_00 = (pSVar2->fields)._value, __this_00 != (System_Collections_Generic_List_T__o *)0x0)) {
      local_60 = conditionToValue;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_90,__this_00,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
      local_78 = (undefined1  [8])local_90._0_8_;
      pUStack_70 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_90._8_8_;
      local_68 = local_80;
      local_90._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_90._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78;
      while (bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                                (MethodInfo_153A2A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext),
            bVar3) {
        if (local_68 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        if (local_68[2].klass == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar8 = System_String__Split((System_String_o *)local_68[2].klass,0x3a,0,(MethodInfo *)0x0);
        if (pSVar8 == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        if ((int)pSVar8->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        if ((uint)pSVar8->max_length < 2) {
          ThrowIndexOutOfRangeException();
        }
        if (conditionToValue == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)conditionToValue,
                   (Il2CppObject *)pSVar8->m_Items[0],(Il2CppObject *)pSVar8->m_Items[1],
                   (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78,
                 MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
      iVar11 = 0;
      str0 = "";
      if (pSVar7 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      while (iVar11 < (pSVar7->fields)._stringLength) {
        uVar4 = System_String__get_Chars(pSVar7,iVar11,(MethodInfo *)0x0);
        if (uVar4 == 0x7b) {
          pSVar9 = UI_QuestCategoryPanel__HandleConditionVariable
                             (__this,pSVar7,iVar11,conditionToValue,(MethodInfo *)0x0);
          str0 = System_String__Concat_1969e50(str0,pSVar9,(MethodInfo *)0x0);
          iVar11 = System_String__IndexOf_196de40(pSVar7,0x7d,iVar11,(MethodInfo *)0x0);
          iVar11 = iVar11 + 1;
        }
        else {
          uVar4 = System_String__get_Chars(pSVar7,iVar11,(MethodInfo *)0x0);
          if (uVar4 == 0x5b) {
            iVar5 = System_String__IndexOf_196de40(pSVar7,0x5d,iVar11,(MethodInfo *)0x0);
            index = System_String__IndexOf_196de40(pSVar7,0x7b,iVar11,(MethodInfo *)0x0);
            iVar6 = System_String__IndexOf_196de40(pSVar7,0x7d,iVar11,(MethodInfo *)0x0);
            pSVar9 = UI_QuestCategoryPanel__HandleConditionVariable
                               (__this,pSVar7,index,conditionToValue,(MethodInfo *)0x0);
            bVar3 = System_String__op_Inequality
                              (pSVar9,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                               (MethodInfo *)0x0);
            if (bVar3) {
              str1 = System_String__Substring_1972740
                               (pSVar7,iVar11 + 1,(index - iVar11) + -1,(MethodInfo *)0x0);
              str3 = System_String__Substring_1972740(pSVar7,iVar6 + 1,(iVar5 - iVar6) + -1,(MethodInfo *)0x0)
              ;
              str0 = System_String__Concat_1969590(str0,str1,pSVar9,str3,(MethodInfo *)0x0);
              iVar11 = iVar5 + 1;
            }
            else {
              iVar11 = iVar5 + 1;
            }
          }
          else {
            method_00 = (MethodInfo *)0x0;
            local_res10[0] = System_String__get_Chars(pSVar7,iVar11,(MethodInfo *)0x0);
            if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_184354e48);
            }
            pSVar9 = System_Char__ToString(local_res10,(System_IFormatProvider_o *)0x0,method_00);
            str0 = System_String__Concat_1969e50(str0,pSVar9,(MethodInfo *)0x0);
            iVar11 = iVar11 + 1;
          }
        }
      }
      if (((local_res18 != (UnityEngine_Transform_o *)0x0) &&
          (__this_01 = UnityEngine_Transform__Find(local_res18,"Panel/Title",(MethodInfo *)0x0),
          __this_01 != (UnityEngine_Transform_o *)0x0)) &&
         (pUVar10 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_01,
                               (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text),
         pUVar10 != (UnityEngine_UI_Text_o *)0x0)) {
        (*(pUVar10->klass->vtable)._75_set_text.methodPtr)
                  (pUVar10,str0,(pUVar10->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.QuestCategoryPanel$$HandleConditionVariable
// il2cpp: System_String_o* UI_QuestCategoryPanel__HandleConditionVariable (UI_QuestCategoryPanel_o* __this, System_String_o* locale, int32_t index, System_Collections_Generic_Dictionary_string__string__o* conditionToValue, const MethodInfo* method);
// 0x182298790

System_String_o *
UI_QuestCategoryPanel__HandleConditionVariable
          (UI_QuestCategoryPanel_o *__this,System_String_o *locale,int32_t index,
          System_Collections_Generic_Dictionary_string__string__o *conditionToValue,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_18434747a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"QuestItems");
    il2cpp_codegen_initialize_runtime_metadata(&"Error");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_18434747a = '\x01';
  }
  if (locale != (System_String_o *)0x0) {
    iVar2 = System_String__IndexOf_196de40(locale,0x7d,index,(MethodInfo *)0x0);
    pSVar3 = System_String__Substring_1972740(locale,index + 1,(iVar2 - index) + -1,(MethodInfo *)0x0);
    if (conditionToValue != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)conditionToValue,
                         (Il2CppObject *)pSVar3,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
      if (!bVar1) {
        return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      pSVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)conditionToValue,
                          (Il2CppObject *)pSVar3,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
      pSVar4 = System_String__Concat_1969b70(pSVar3,".",pSVar4,(MethodInfo *)0x0);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar4 = UI_UIManager__GetLocale
                         ("QuestItems",pSVar4,"","",
                          "Error",(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar4,"Error",(MethodInfo *)0x0);
      if (!bVar1) {
        return pSVar4;
      }
      pSVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)conditionToValue,
                          (Il2CppObject *)pSVar3,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
      return pSVar3;
    }
  }
  ThrowNullReferenceException();
}


// UI.QuestCategoryPanel$$SetProgress
// il2cpp: void UI_QuestCategoryPanel__SetProgress (UI_QuestCategoryPanel_o* __this, GameProgress_QuestItem_o* item, UnityEngine_Transform_o* panel, const MethodInfo* method);
// 0x182298940

void UI_QuestCategoryPanel__SetProgress
               (UI_QuestCategoryPanel_o *__this,GameProgress_QuestItem_o *item,UnityEngine_Transform_o *panel,
               MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_Slider_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  int32_t local_res18 [4];
  
  if (Il2CppMethodInitialized_18434747b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Slider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/ProgressLabel");
    il2cpp_codegen_initialize_runtime_metadata(&" / ");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/ProgressBar");
    Il2CppMethodInitialized_18434747b = '\x01';
  }
  local_res18[0] = 0;
  if (panel != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__Find(panel,"Panel/ProgressBar",(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar3,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Slider);
      if ((((item != (GameProgress_QuestItem_o *)0x0) &&
           (pSVar1 = (item->fields).Progress, pSVar1 != (Settings_IntSetting_o *)0x0)) &&
          (pSVar2 = (item->fields).Amount, pSVar2 != (Settings_IntSetting_o *)0x0)) &&
         (pUVar4 != (UnityEngine_UI_Slider_o *)0x0)) {
        (*(pUVar4->klass->vtable)._47_set_value.methodPtr)
                  (pUVar4,(float)(pSVar1->fields)._value / (float)(pSVar2->fields)._value,
                   (pUVar4->klass->vtable)._47_set_value.method);
        pUVar3 = UnityEngine_Transform__Find(panel,"Panel/ProgressLabel",(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          pUVar5 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar3,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
          pSVar1 = (item->fields).Progress;
          if (pSVar1 != (Settings_IntSetting_o *)0x0) {
            local_res18[0] = (pSVar1->fields)._value;
            pSVar6 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
            pSVar1 = (item->fields).Amount;
            if (pSVar1 != (Settings_IntSetting_o *)0x0) {
              local_res18[0] = (pSVar1->fields)._value;
              str2 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
              pSVar6 = System_String__Concat_1969b70(pSVar6," / ",str2,(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
                (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                          (pUVar5,pSVar6,(pUVar5->klass->vtable)._75_set_text.method);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.QuestCategoryPanel$$.ctor
// il2cpp: void UI_QuestCategoryPanel___ctor (UI_QuestCategoryPanel_o* __this, const MethodInfo* method);
// 0x182297a80

void
UI_QuestCategoryPanel___ctor(UI_QuestCategoryPanel_o* __this, MethodInfo* method)

{
  (__this->fields).QuestItemWidth = 940.0;
  (__this->fields).QuestItemHeight = 100.0;
  UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}


