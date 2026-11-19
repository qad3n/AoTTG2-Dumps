// Type: UI.FeedPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/FeedPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/FeedPanel.cs
// --------------------------------

// UI.FeedPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_FeedPanel__get_ThemePanel (UI_FeedPanel_o* __this, const MethodInfo* method);
// 0x5d21340

System_String_o * UI_FeedPanel__get_ThemePanel(UI_FeedPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547dcd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ChatPanel");
    Il2CppMethodInitialized_07547dcd = '\x01';
  }
  return "ChatPanel";
}


// UI.FeedPanel$$Setup
// il2cpp: void UI_FeedPanel__Setup (UI_FeedPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d21370

void UI_FeedPanel__Setup(UI_FeedPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  Settings_UISettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UnityEngine_Vector2_o value;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_RectTransform_o *__this_00;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547dce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Content/Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"Content");
    Il2CppMethodInitialized_07547dce = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Content/Panel",(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
      targetAddress = &(__this->fields)._panel;
      (__this->fields)._panel = pUVar4;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Transform__Find(pUVar3,"Content",(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          pUVar5 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar3,
                              (MethodInfo_34B0830 *)
                              MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
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
                                     (MethodInfo_34B0830 *)
                                     MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
              pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
              if (((pSVar1 != (Settings_UISettings_o *)0x0) &&
                  (pSVar2 = (pSVar1->fields).ChatWidth, pSVar2 != (Settings_IntSetting_o *)0x0)) &&
                 (__this_00 != (UnityEngine_RectTransform_o *)0x0)) {
                value.fields.y = 0.0;
                value.fields.x = (float)(pSVar2->fields)._value;
                UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
                pUVar4 = *targetAddress;
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
                      method_00 = (MethodInfo *)
                                  UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                      (__this->fields)._horizontalLine = (UnityEngine_Transform_o *)method_00;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._horizontalLine);
                      UI_FeedPanel__Sync(__this,method_00);
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
// 0x5d21600
// eh: try 0x5d216d0..0x5d21701 -> pad 0x5d2177f (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d21797..0x5d2179c -> pad 0x5d217bf cleanup
// eh: try 0x5d217c2..0x5d217cc -> pad 0x5d217d4 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d2177d: jmp 0x5d2177f
// asm:   0x5d2177f: mov rbx, rax
// asm:   0x5d21782: cmp edx, 1
// asm:   0x5d21785: jne 0x5d217c2
// asm:   0x5d21787: mov rdi, rbx
// asm:   0x5d2178a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d2178f: mov rbx, qword ptr [rax]
// asm:   0x5d21792: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5d21797: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d2179c: lea rax, [rip + 0x156c5d5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5d217a3: mov rsi, qword ptr [rax]
// asm:   0x5d217a6: mov rdi, rsp
// asm:   0x5d217a9: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d217ae: test rbx, rbx
// asm:   0x5d217b1: je 0x5d21715
// asm:   0x5d217b7: mov rdi, rbx
// asm:   0x5d217ba: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d217bf: mov rbx, rax
// asm:   0x5d217c2: lea rdi, [rsp + 0x20]
// asm:   0x5d217c7: call 0x2fdc040  ; il2cpp_runtime_helper_02fdc040()
// asm:   0x5d217cc: mov rdi, rbx
// asm:   0x5d217cf: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d217d4: mov rdi, rax
// asm:   0x5d217d7: call 0x2ab61e0  ; __clang_call_terminate()

void UI_FeedPanel__Sync(UI_FeedPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  Il2CppObject *obj;
  bool bVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_07547dcf == '\0') {
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
    Il2CppMethodInitialized_07547dcf = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields)._lines;
  if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)pSVar2,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_38 = 0;
    local_30 = (undefined1 *)&local_58;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      obj = local_58.fields._current;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose)
    ;
    pSVar2 = (__this->fields)._lines;
    if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      method_00 = (MethodInfo *)(ulong)length;
      (pSVar2->fields)._size = 0;
      if (0 < (int)length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
        method_00 = extraout_RDX;
      }
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        method_00 = extraout_RDX_00;
      }
      UI_FeedPanel__AddLines(__this,TypeInfo_GameManagers_ChatManager->static_fields->FeedLines,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.FeedPanel$$AddLine
// il2cpp: void UI_FeedPanel__AddLine (UI_FeedPanel_o* __this, System_String_o* line, const MethodInfo* method);
// 0x5d219a0

void UI_FeedPanel__AddLine(UI_FeedPanel_o *__this,System_String_o *line,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  MethodInfo *pMVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547dd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    Il2CppMethodInitialized_07547dd0 = '\x01';
    method = extraout_RDX;
  }
  __this_00 = (__this->fields)._lines;
  method_00 = (MethodInfo *)UI_FeedPanel__CreateLine(__this,line,method);
  pMVar4 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (__this_00->fields)._items;
    if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pUVar3->m_Items[(int)uVar2] = (UnityEngine_GameObject_o *)method_00;
        Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)method_00,
                   (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
      UI_FeedPanel__ClearExcessLines(__this,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.FeedPanel$$AddLines
// il2cpp: void UI_FeedPanel__AddLines (UI_FeedPanel_o* __this, System_Collections_Generic_List_string__o* lines, const MethodInfo* method);
// 0x5d217e0
// eh: try 0x5d2189f..0x5d2193a -> pad 0x5d21943 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d2195b..0x5d21960 -> pad 0x5d2197f cleanup
// eh: try 0x5d21982..0x5d2198c -> pad 0x5d21994 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d2193f: jmp 0x5d21943
// asm:   0x5d21941: jmp 0x5d21943
// asm:   0x5d21943: mov r14, rax
// asm:   0x5d21946: cmp edx, 1
// asm:   0x5d21949: jne 0x5d21982
// asm:   0x5d2194b: mov rdi, r14
// asm:   0x5d2194e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d21953: mov rbx, qword ptr [rax]
// asm:   0x5d21956: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5d2195b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d21960: lea rax, [rip + 0x156d191]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5d21967: mov rsi, qword ptr [rax]
// asm:   0x5d2196a: mov rdi, rsp
// asm:   0x5d2196d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d21972: test rbx, rbx
// asm:   0x5d21975: je 0x5d21918
// asm:   0x5d21977: mov rdi, rbx
// asm:   0x5d2197a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d2197f: mov r14, rax
// asm:   0x5d21982: lea rdi, [rsp + 0x20]
// asm:   0x5d21987: call 0x2fdc070  ; il2cpp_runtime_helper_02fdc070()
// asm:   0x5d2198c: mov rdi, r14
// asm:   0x5d2198f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d21994: mov rdi, rax
// asm:   0x5d21997: call 0x2ab61e0  ; __clang_call_terminate()

void UI_FeedPanel__AddLines
               (UI_FeedPanel_o *__this,System_Collections_Generic_List_string__o *lines,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  bool bVar4;
  UnityEngine_GameObject_o *item;
  MethodInfo *method_00;
  MethodInfo *pMVar5;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_07547dd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    Il2CppMethodInitialized_07547dd1 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if (lines == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_58,(System_Collections_Generic_List_object__o *)lines,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
  local_38 = 0;
  local_30 = (undefined1 *)&local_58;
  while( true ) {
    bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    if (!bVar4) {
      pMVar5 = MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
      UI_FeedPanel__ClearExcessLines(__this,pMVar5);
      return;
    }
    __this_00 = (__this->fields)._lines;
    item = UI_FeedPanel__CreateLine(__this,(System_String_o *)local_58.fields._current,method_00);
    pMVar5 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
    if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (__this_00->fields)._items;
    if (pUVar3 == (UnityEngine_GameObject_array *)0x0) break;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pUVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      pUVar3->m_Items[(int)uVar2] = item;
      Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
    }
  }
  ThrowNullReferenceException();
}


// UI.FeedPanel$$ClearExcessLines
// il2cpp: void UI_FeedPanel__ClearExcessLines (UI_FeedPanel_o* __this, const MethodInfo* method);
// 0x5d21c60
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d21d29: nop dword ptr [rax]
// asm:   0x5d21d86: jmp 0x5d21e78
// asm:   0x5d21dbb: lea r13, [rip + 0x155962e]  ; TypeInfo_UnityEngine_Object
// asm:   0x5d21dc2: lea rbp, [rip + 0x15729cf]  ; MethodInfo_System_Collections_Generic_List_GameObject_RemoveAt
// asm:   0x5d21dc9: nop dword ptr [rax]

void UI_FeedPanel__ClearExcessLines(UI_FeedPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_UISettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Object_o *obj;
  int index;
  System_Collections_Generic_List_GameObject__o *pSVar6;
  UnityEngine_Vector2_o UVar7;
  float local_34;
  
  if (Il2CppMethodInitialized_07547dd2 == '\0') {
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
    Il2CppMethodInitialized_07547dd2 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if (((pSVar2 != (Settings_UISettings_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).ChatHeight, pSVar3 != (Settings_IntSetting_o *)0x0)) &&
     (pSVar6 = (__this->fields)._lines, pSVar6 != (System_Collections_Generic_List_GameObject__o *)0x0)) {
    iVar1 = (pSVar3->fields)._value;
    index = 0;
    local_34 = 0.0;
    while (index < (pSVar6->fields)._size) {
      pUVar4 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar6,index,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_GameObject_get_Item
                         );
      if ((pUVar4 == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar5 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar4,(MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform),
         pUVar5 == (UnityEngine_RectTransform_o *)0x0)) goto label_05d21e78;
      UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0);
      local_34 = local_34 + UVar7.fields.y;
      index = index + 1;
      pSVar6 = (__this->fields)._lines;
      if (pSVar6 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05d21e78;
    }
    local_34 = local_34 - (float)iVar1;
    if (local_34 <= 0.0) {
      return;
    }
    pSVar6 = (__this->fields)._lines;
    if (pSVar6 != (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05d21dd0;
  }
  goto label_05d21e78;
  while( true ) {
    UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0);
    local_34 = local_34 - UVar7.fields.y;
    if (local_34 <= 0.0) {
      return;
    }
    pSVar6 = (__this->fields)._lines;
    if (pSVar6 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
    obj = (UnityEngine_Object_o *)
          System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar6,0,
                     (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    pSVar6 = (__this->fields)._lines;
    if (pSVar6 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
    System_Collections_Generic_List_object___RemoveAt
              ((System_Collections_Generic_List_object__o *)pSVar6,0,
               (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_GameObject_RemoveAt);
    pSVar6 = (__this->fields)._lines;
    if (pSVar6 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
label_05d21dd0:
    if ((pSVar6->fields)._size < 1) {
      return;
    }
    pUVar4 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar6,0,
                        (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
    if ((pUVar4 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar5 = UnityEngine_GameObject__GetComponent_object_
                           (pUVar4,(MethodInfo_353B730 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform),
       pUVar5 == (UnityEngine_RectTransform_o *)0x0)) break;
  }
label_05d21e78:
  ThrowNullReferenceException();
}


// UI.FeedPanel$$CreateLine
// il2cpp: UnityEngine_GameObject_o* UI_FeedPanel__CreateLine (UI_FeedPanel_o* __this, System_String_o* text, const MethodInfo* method);
// 0x5d21a50

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
  UnityEngine_UI_Text_o *text_00;
  UnityEngine_Color_o UVar6;
  
  if (Il2CppMethodInitialized_07547dd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_07547dd3 = '\x01';
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
        text_00 = UnityEngine_GameObject__GetComponent_object_
                            (pUVar5,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text)
        ;
        if (__this_00 != (UI_ElementStyle_o *)0x0) {
          pSVar3 = (__this_00->fields).ThemePanel;
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          UVar6 = UI_UIManager__GetThemeColor
                            (pSVar3,"TextColor","Default","DefaultPanel",
                             (MethodInfo *)0x0);
          if (text_00 != (UnityEngine_UI_Text_o *)0x0) {
            (*(text_00->klass->vtable)._23_set_color.methodPtr)
                      (text_00,UVar6,(text_00->klass->vtable)._23_set_color.method);
            if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
            }
            UI_LanguageFonts__SetText(text_00,text,(MethodInfo *)0x0);
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
// 0x5d21e90

void UI_FeedPanel___ctor(UI_FeedPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_07547dd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_07547dd4 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._lines = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lines);
  UI_BasePanel___ctor((UI_SimplePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


