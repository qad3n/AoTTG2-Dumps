// Type: UI.FeedPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/FeedPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/FeedPanel.cs
// --------------------------------

// UI.FeedPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_FeedPanel__get_ThemePanel (UI_FeedPanel_o* __this, const MethodInfo* method);
// 0x1822458e0

System_String_o * UI_FeedPanel__get_ThemePanel(UI_FeedPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347258 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ChatPanel");
    Il2CppMethodInitialized_184347258 = '\x01';
  }
  return "ChatPanel";
}


// UI.FeedPanel$$Setup
// il2cpp: void UI_FeedPanel__Setup (UI_FeedPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822453e0

void UI_FeedPanel__Setup(UI_FeedPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_RectTransform_o *__this_00;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Vector2_o value;
  
  if (Il2CppMethodInitialized_184347259 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Content/Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"Content");
    Il2CppMethodInitialized_184347259 = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Content/Panel",(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
      (__this->fields)._panel = pUVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._panel,pUVar4);
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Transform__Find(pUVar3,"Content",(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          pUVar5 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar3,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement
                             );
          pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
          if (((pSVar1 != (Settings_UISettings_o *)0x0) &&
              (pSVar2 = (pSVar1->fields).ChatHeight, pSVar2 != (Settings_IntSetting_o *)0x0)) &&
             (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
            (*(pUVar5->klass->vtable)._38_set_preferredHeight.methodPtr)
                      (pUVar5,(float)(pSVar2->fields)._value,
                       (pUVar5->klass->vtable)._38_set_preferredHeight.method);
            pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
              __this_00 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar3,
                                     (MethodInfo_6651A0 *)
                                     MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
              pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
              if (((pSVar1 != (Settings_UISettings_o *)0x0) &&
                  (pSVar2 = (pSVar1->fields).ChatWidth, pSVar2 != (Settings_IntSetting_o *)0x0)) &&
                 (value.fields.x = (float)(pSVar2->fields)._value,
                 __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
                value.fields.y = 0.0;
                UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
                pUVar4 = (__this->fields)._panel;
                if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                  themePanel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
                  UI_ElementStyle___ctor(__this_01,0x18,120.0,20.0,themePanel,(MethodInfo *)0x0);
                  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
                  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
                     (pSVar2 = (pSVar1->fields).ChatWidth, pSVar2 != (Settings_IntSetting_o *)0x0)) {
                    pUVar4 = UI_ElementFactory__CreateHorizontalLine
                                       (pUVar3,__this_01,(float)(pSVar2->fields)._value,2.0,(MethodInfo *)0x0)
                    ;
                    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                      (__this->fields)._horizontalLine = pUVar3;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._horizontalLine,pUVar3);
                      UI_FeedPanel__Sync(__this,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// UI.FeedPanel$$Sync
// il2cpp: void UI_FeedPanel__Sync (UI_FeedPanel_o* __this, const MethodInfo* method);
// 0x1822456a0
// eh: try 0x182245771..0x1822457ac -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822457bd: mov rdx, qword ptr [rip + 0x1e3ad24]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x1822457c4: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822457c9: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822457ce: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822457d3: test rcx, rcx
// asm:   0x1822457d6: jne 0x182245859
// asm:   0x1822457dc: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x182245859: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_FeedPanel__Sync(UI_FeedPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  UnityEngine_Object_o *obj;
  bool bVar3;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  UnityEngine_Object_o *local_18;
  
  if (Il2CppMethodInitialized_18434725a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434725a = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (UnityEngine_Object_o *)0x0;
  pSVar2 = (__this->fields)._lines;
  if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)pSVar2,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      obj = local_18;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    pSVar2 = (__this->fields)._lines;
    if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      UI_FeedPanel__AddLines
                (__this,TypeInfo_GameManagers_ChatManager->static_fields->FeedLines,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.FeedPanel$$AddLine
// il2cpp: void UI_FeedPanel__AddLine (UI_FeedPanel_o* __this, System_String_o* line, const MethodInfo* method);
// 0x182244d00

void UI_FeedPanel__AddLine(UI_FeedPanel_o *__this,System_String_o *line,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  MethodInfo *pMVar4;
  UnityEngine_GameObject_o *item;
  
  if (Il2CppMethodInitialized_18434725b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    Il2CppMethodInitialized_18434725b = '\x01';
  }
  __this_00 = (__this->fields)._lines;
  item = UI_FeedPanel__CreateLine(__this,line,(MethodInfo *)0x0);
  pMVar4 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (__this_00->fields)._items;
    if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pUVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pUVar3->m_Items[(int)uVar2] = item;
        Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,item);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
      UI_FeedPanel__ClearExcessLines(__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.FeedPanel$$AddLines
// il2cpp: void UI_FeedPanel__AddLines (UI_FeedPanel_o* __this, System_Collections_Generic_List_string__o* lines, const MethodInfo* method);
// 0x182244dd0
// eh: try 0x182244e90..0x182244f96 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182244f3b: mov rdx, qword ptr [rip + 0x1e529d6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x182244f42: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182244f47: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182244f4c: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182244f51: test rcx, rcx
// asm:   0x182244f54: jne 0x182244f96
// asm:   0x182244f56: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x182244f96: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_FeedPanel__AddLines
               (UI_FeedPanel_o *__this,System_Collections_Generic_List_string__o *lines,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  UnityEngine_GameObject_o *item;
  undefined1 local_40 [16];
  System_String_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_18434725c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    Il2CppMethodInitialized_18434725c = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if (lines != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)lines,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = (Il2CppObject *)local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
      if (!bVar5) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
        UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
        UI_FeedPanel__ClearExcessLines(__this,(MethodInfo *)0x0);
        return;
      }
      __this_00 = (__this->fields)._lines;
      item = UI_FeedPanel__CreateLine(__this,(System_String_o *)local_28.fields._current,(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
      if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_00->fields)._items;
      if (pUVar3 == (UnityEngine_GameObject_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pUVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pUVar3->m_Items[(int)uVar2] = item;
        Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,item);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// UI.FeedPanel$$ClearExcessLines
// il2cpp: void UI_FeedPanel__ClearExcessLines (UI_FeedPanel_o* __this, const MethodInfo* method);
// 0x182244fa0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822450cd: jmp 0x182245066
// asm:   0x1822450df: xorps xmm6, xmm6
// asm:   0x1822450e2: comiss xmm6, xmm7
// asm:   0x1822450e5: jbe 0x1822451a8
// asm:   0x1822450eb: nop dword ptr [rax + rax]

void UI_FeedPanel__ClearExcessLines(UI_FeedPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_UISettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  System_Collections_Generic_List_GameObject__o *pSVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Object_o *obj;
  int index;
  float fVar8;
  float fStackX_1c;
  
  if (Il2CppMethodInitialized_18434725d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_18434725d = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar2 != (Settings_UISettings_o *)0x0) &&
     (pSVar3 = (pSVar2->fields).ChatHeight, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    iVar1 = (pSVar3->fields)._value;
    index = 0;
    pSVar4 = (__this->fields)._lines;
    fVar8 = 0.0;
    while (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      if ((pSVar4->fields)._size <= index) {
        fVar8 = fVar8 - (float)iVar1;
        if (fVar8 <= 0.0) {
          return;
        }
        goto label_1822450f0;
      }
      pSVar4 = (__this->fields)._lines;
      if (((pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) ||
          (pUVar5 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar4,index,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_GameObject_get_Item),
          pUVar5 == (UnityEngine_GameObject_o *)0x0)) ||
         (pUVar6 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar5,(MethodInfo_6F5650 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform),
         pUVar6 == (UnityEngine_RectTransform_o *)0x0)) break;
      UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar6,(MethodInfo *)0x0);
      index = index + 1;
      pSVar4 = (__this->fields)._lines;
      fStackX_1c = UVar7.fields.y;
      fVar8 = fVar8 + fStackX_1c;
    }
  }
label_1822451c2:
  ThrowNullReferenceException();
label_1822450f0:
  pSVar4 = (__this->fields)._lines;
  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_1822451c2;
  if ((pSVar4->fields)._size < 1) {
    return;
  }
  pUVar5 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar4,0,
                      (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
  if ((pUVar5 == (UnityEngine_GameObject_o *)0x0) ||
     (pUVar6 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar5,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform),
     pUVar6 == (UnityEngine_RectTransform_o *)0x0)) goto label_1822451c2;
  UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar6,(MethodInfo *)0x0);
  fStackX_1c = UVar7.fields.y;
  fVar8 = fVar8 - fStackX_1c;
  if (fVar8 <= 0.0) {
    return;
  }
  pSVar4 = (__this->fields)._lines;
  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_1822451c2;
  obj = (UnityEngine_Object_o *)
        System_Collections_Generic_List_object___System_Collections_IList_get_Item
                  ((System_Collections_Generic_List_object__o *)pSVar4,0,
                   (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._lines;
  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_1822451c2;
  System_Collections_Generic_List_object___RemoveAt
            ((System_Collections_Generic_List_object__o *)pSVar4,0,
             (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_GameObject_RemoveAt);
  goto label_1822450f0;
}


// UI.FeedPanel$$CreateLine
// il2cpp: UnityEngine_GameObject_o* UI_FeedPanel__CreateLine (UI_FeedPanel_o* __this, System_String_o* text, const MethodInfo* method);
// 0x1822451d0

UnityEngine_GameObject_o *
UI_FeedPanel__CreateLine(UI_FeedPanel_o *__this,System_String_o *text,MethodInfo *method)

{
  int32_t fontSize;
  Settings_UISettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_Color_o *pUVar7;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_18434725e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_18434725e = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).ChatFontSize, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    fontSize = (pSVar2->fields)._value;
    pSVar3 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar3,(MethodInfo *)0x0);
    pUVar5 = (__this->fields)._panel;
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
      pUVar5 = UI_ElementFactory__CreateDefaultLabel(pUVar4,__this_00,text,0,3,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        pUVar6 = UnityEngine_GameObject__GetComponent_object_
                           (pUVar5,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
        if (__this_00 != (UI_ElementStyle_o *)0x0) {
          pSVar3 = (__this_00->fields).ThemePanel;
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pUVar7 = UI_UIManager__GetThemeColor
                             (&local_18,pSVar3,"TextColor","Default",
                              "DefaultPanel",(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
            local_18.fields.r = (pUVar7->fields).r;
            local_18.fields.g = (pUVar7->fields).g;
            local_18.fields.b = (pUVar7->fields).b;
            local_18.fields.a = (pUVar7->fields).a;
            (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                      (pUVar6,&local_18,(pUVar6->klass->vtable)._23_set_color.method);
            pUVar4 = (__this->fields)._horizontalLine;
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetAsLastSibling(pUVar4,(MethodInfo *)0x0);
              return pUVar5;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.FeedPanel$$.ctor
// il2cpp: void UI_FeedPanel___ctor (UI_FeedPanel_o* __this, const MethodInfo* method);
// 0x182245860

void UI_FeedPanel___ctor(UI_FeedPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_18434725f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_18434725f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._lines = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lines,__this_00);
  UI_BasePanel___ctor((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


