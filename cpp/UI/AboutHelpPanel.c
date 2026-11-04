// Type: UI.AboutHelpPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/AboutHelpPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/AboutHelpPanel.cs
// --------------------------------

// UI.AboutHelpPanel.<>c__DisplayClass3_0$$.ctor
// il2cpp: void UI_AboutHelpPanel___c__DisplayClass3_0___ctor (UI_AboutHelpPanel___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_AboutHelpPanel___c__DisplayClass3_0___ctor(UI_AboutHelpPanel___c__DisplayClass3_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.AboutHelpPanel.<>c__DisplayClass3_0$$<CreateLink>b__0
// il2cpp: void UI_AboutHelpPanel___c__DisplayClass3_0___CreateLink_b__0 (UI_AboutHelpPanel___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x1822837d0

void UI_AboutHelpPanel___c__DisplayClass3_0___CreateLink_b__0
               (UI_AboutHelpPanel___c__DisplayClass3_0_o *__this,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  UI_ExternalLinkPopup_o *__this_00;
  
  if (Il2CppMethodInitialized_1843473ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_1843473ad = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((pUVar1 != (UI_BaseMenu_o *)0x0) &&
     (__this_00 = (pUVar1->fields).ExternalLinkPopup, __this_00 != (UI_ExternalLinkPopup_o *)0x0)) {
    UI_ExternalLinkPopup__Show(__this_00,(__this->fields).link,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.AboutHelpPanel$$get_VerticalSpacing
// il2cpp: float UI_AboutHelpPanel__get_VerticalSpacing (UI_AboutHelpPanel_o* __this, const MethodInfo* method);
// 0x1820b9980

float
UI_AboutHelpPanel__get_VerticalSpacing(UI_AboutHelpPanel_o* __this, MethodInfo* method)

{
  return 10.0;
}


// UI.AboutHelpPanel$$Setup
// il2cpp: void UI_AboutHelpPanel__Setup (UI_AboutHelpPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18226e420
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18226e608: movss xmm7, dword ptr [rip + 0x10ea6d4]
// asm:   0x18226e806: movaps xmm6, xmmword ptr [rsp + 0x100]
// asm:   0x18226e80e: mov rdi, qword ptr [rsp + 0x140]
// asm:   0x18226e816: mov rsi, qword ptr [rsp + 0x138]
// asm:   0x18226e81e: mov rbp, qword ptr [rsp + 0x130]
// asm:   0x18226e826: movaps xmm7, xmmword ptr [rsp + 0xf0]

void UI_AboutHelpPanel__Setup(UI_AboutHelpPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_00;
  undefined8 *puVar4;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  System_Xml_Schema_XmlSchema_o *pSVar7;
  System_String_o *value;
  UI_AboutHelpPanel___c__DisplayClass3_0_o *object;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_Events_UnityAction_o *__this_02;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_f8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_a8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_98;
  undefined1 local_88 [112];
  
  if (Il2CppMethodInitialized_1843473ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MiscInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"Error loading data.");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"Link");
    Il2CppMethodInitialized_1843473ab = '\x01';
  }
  local_f8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_f8.type = 0;
  local_f8._4_4_ = 0;
  local_f8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8.m_Object.fields._version = 0;
  local_f8.m_Object.fields._index = 0;
  local_f8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_f8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_f8.m_Object.fields._getEnumeratorRetType = 0;
  local_f8.m_Object.fields._36_4_ = 0;
  local_f8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_f8.m_Array.fields._index = 0;
  local_f8.m_Array.fields._version = 0;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar3 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,100.0,20.0,pSVar3,(MethodInfo *)0x0);
  pSVar6 = TypeInfo_ApplicationManagers_MiscInfo->static_fields->Help;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar6 = TypeInfo_ApplicationManagers_MiscInfo->static_fields->Help;
    if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_18226e844:
      ThrowNullReferenceException();
    }
    puVar4 = (undefined8 *)(*(pSVar6->klass->vtable)._32_unknown.methodPtr)(local_88);
    local_f8._0_8_ = *puVar4;
    local_f8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar4[1];
    local_f8.m_Object.fields._8_8_ = puVar4[2];
    local_f8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar4[3];
    local_f8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar4[4];
    local_f8.m_Object.fields._32_8_ = puVar4[5];
    local_f8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar4[6];
    local_f8.m_Array.fields._8_8_ = puVar4[7];
    local_f8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar4[8];
    bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
    if (bVar2) {
      do {
        pSVar5 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (&local_98,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_f8,(MethodInfo *)0x0);
        pSVar3 = (pSVar5->fields).key;
        pSVar6 = (pSVar5->fields).value;
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        local_a8.fields.key = pSVar3;
        local_a8.fields.value = pSVar6;
        pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_a8,(MethodInfo *)0x0);
        if ((pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
           (pSVar7 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar6,(MethodInfo *)"Title"),
           pSVar7 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_18226e844;
        pSVar1 = pSVar7->klass;
        pSVar3 = (System_String_o *)
                 (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                           (pSVar7,(UnityEngine_GameObject_o *)
                                   (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
        pSVar7 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)(pSVar6,(MethodInfo *)"Link");
        if (pSVar7 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18226e844;
        pSVar1 = pSVar7->klass;
        value = (System_String_o *)
                (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                          (pSVar7,(UnityEngine_GameObject_o *)
                                  (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
        if (Il2CppMethodInitialized_1843473ac == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_UI_AboutHelpPanel_c__DisplayClass3_0_CreateLink_b__0);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_AboutHelpPanel_c__DisplayClass3_0);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
          il2cpp_codegen_initialize_runtime_metadata(&" ");
          il2cpp_codegen_initialize_runtime_metadata(&":");
          Il2CppMethodInitialized_1843473ac = '\x01';
        }
        object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_AboutHelpPanel_c__DisplayClass3_0);
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
        if (object == (UI_AboutHelpPanel___c__DisplayClass3_0_o *)0x0) goto label_18226e844;
        (object->fields).link = value;
        Il2CppCodeGenWriteBarrier(&(object->fields).link,value);
        __this_01 = UI_ElementFactory__CreateHorizontalGroup
                              ((__this->fields).SinglePanel,5.0,0,(MethodInfo *)0x0);
        if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_18226e844;
        parent_00 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
        pSVar3 = System_String__Concat_1969b70
                           (" ",pSVar3,":",(MethodInfo *)0x0);
        UI_ElementFactory__CreateDefaultLabel(parent_00,__this_00,pSVar3,0,4,(MethodInfo *)0x0);
        pSVar3 = (object->fields).link;
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_AboutHelpPanel_c__DisplayClass3_0_CreateLink_b__0,(MethodInfo *)0x0
                  );
        UI_ElementFactory__CreateLinkButton(parent_00,__this_00,pSVar3,__this_02,(MethodInfo *)0x0);
        bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
      } while (bVar2);
    }
  }
  else {
    UI_ElementFactory__CreateDefaultLabel
              ((__this->fields).SinglePanel,__this_00,"Error loading data.",0,4,(MethodInfo *)0x0);
  }
  return;
}


// UI.AboutHelpPanel$$CreateLink
// il2cpp: void UI_AboutHelpPanel__CreateLink (UI_AboutHelpPanel_o* __this, UI_ElementStyle_o* style, System_String_o* title, System_String_o* link, const MethodInfo* method);
// 0x18226e2b0

void UI_AboutHelpPanel__CreateLink
               (UI_AboutHelpPanel_o *__this,UI_ElementStyle_o *style,System_String_o *title,
               System_String_o *link,MethodInfo *method)

{
  UI_AboutHelpPanel___c__DisplayClass3_0_o *object;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *parent;
  System_String_o *pSVar1;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_1843473ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_AboutHelpPanel_c__DisplayClass3_0_CreateLink_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_AboutHelpPanel_c__DisplayClass3_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&":");
    Il2CppMethodInitialized_1843473ac = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_AboutHelpPanel_c__DisplayClass3_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_AboutHelpPanel___c__DisplayClass3_0_o *)0x0) {
    (object->fields).link = link;
    Il2CppCodeGenWriteBarrier(&(object->fields).link,link);
    __this_00 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,5.0,0,(MethodInfo *)0x0)
    ;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      parent = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat_1969b70
                         (" ",title,":",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultLabel(parent,style,pSVar1,0,4,(MethodInfo *)0x0);
      pSVar1 = (object->fields).link;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_AboutHelpPanel_c__DisplayClass3_0_CreateLink_b__0,(MethodInfo *)0x0);
      UI_ElementFactory__CreateLinkButton(parent,style,pSVar1,__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.AboutHelpPanel$$.ctor
// il2cpp: void UI_AboutHelpPanel___ctor (UI_AboutHelpPanel_o* __this, const MethodInfo* method);
// 0x181da8ae0

void
UI_AboutHelpPanel___ctor(UI_AboutHelpPanel_o* __this, MethodInfo* method)

{
  UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}


