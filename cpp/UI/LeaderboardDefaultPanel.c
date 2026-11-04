// Type: UI.LeaderboardDefaultPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/LeaderboardDefaultPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/LeaderboardDefaultPanel.cs
// --------------------------------

// UI.LeaderboardDefaultPanel.<>c$$.cctor
// il2cpp: void UI_LeaderboardDefaultPanel___c___cctor (const MethodInfo* method);
// 0x18229d320

void UI_LeaderboardDefaultPanel___c___cctor(MethodInfo *method)

{
  UI_LeaderboardDefaultPanel___c_o *__this;
  
  if (Il2CppMethodInitialized_184347428 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LeaderboardDefaultPanel_c);
    Il2CppMethodInitialized_184347428 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_LeaderboardDefaultPanel_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_UI_LeaderboardDefaultPanel_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_LeaderboardDefaultPanel_c->static_fields->__9,__this);
  return;
}


// UI.LeaderboardDefaultPanel.<>c$$.ctor
// il2cpp: void UI_LeaderboardDefaultPanel___c___ctor (UI_LeaderboardDefaultPanel___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_LeaderboardDefaultPanel___c___ctor(UI_LeaderboardDefaultPanel___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardDefaultPanel.<>c$$<Setup>b__8_2
// il2cpp: float UI_LeaderboardDefaultPanel___c___Setup_b__8_2 (UI_LeaderboardDefaultPanel___c_o* __this, SimpleJSONFixed_JSONNode_o* x, const MethodInfo* method);
// 0x18229c970

float UI_LeaderboardDefaultPanel___c___Setup_b__8_2
                (UI_LeaderboardDefaultPanel___c_o *__this,SimpleJSONFixed_JSONNode_o *x,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_o *pSVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_184347429 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Score");
    Il2CppMethodInitialized_184347429 = '\x01';
  }
  if (x != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar1 = (*(x->klass->vtable)._7_get_Item.methodPtr)(x,(MethodInfo *)"Score");
    if (pSVar1 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      fVar2 = (float)(*(code *)((Il2CppClass *)pSVar1->klass)->vtable[37].methodPtr)
                               (pSVar1,((Il2CppClass *)pSVar1->klass)->vtable[37].method);
      return fVar2;
    }
  }
  ThrowNullReferenceException();
}


// UI.LeaderboardDefaultPanel.<>c$$<Setup>b__8_3
// il2cpp: float UI_LeaderboardDefaultPanel___c___Setup_b__8_3 (UI_LeaderboardDefaultPanel___c_o* __this, SimpleJSONFixed_JSONNode_o* x, const MethodInfo* method);
// 0x18229c9e0

float UI_LeaderboardDefaultPanel___c___Setup_b__8_3
                (UI_LeaderboardDefaultPanel___c_o *__this,SimpleJSONFixed_JSONNode_o *x,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_o *pSVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_18434742a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Score");
    Il2CppMethodInitialized_18434742a = '\x01';
  }
  if (x != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar1 = (*(x->klass->vtable)._7_get_Item.methodPtr)(x,(MethodInfo *)"Score");
    if (pSVar1 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      fVar2 = (float)(*(code *)((Il2CppClass *)pSVar1->klass)->vtable[37].methodPtr)
                               (pSVar1,((Il2CppClass *)pSVar1->klass)->vtable[37].method);
      return fVar2;
    }
  }
  ThrowNullReferenceException();
}


// UI.LeaderboardDefaultPanel.<>c__DisplayClass8_0$$.ctor
// il2cpp: void UI_LeaderboardDefaultPanel___c__DisplayClass8_0___ctor (UI_LeaderboardDefaultPanel___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_LeaderboardDefaultPanel___c__DisplayClass8_0___ctor(UI_LeaderboardDefaultPanel___c__DisplayClass8_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardDefaultPanel.<>c__DisplayClass8_0$$<Setup>b__0
// il2cpp: void UI_LeaderboardDefaultPanel___c__DisplayClass8_0___Setup_b__0 (UI_LeaderboardDefaultPanel___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x18229d210

void
UI_LeaderboardDefaultPanel___c__DisplayClass8_0___Setup_b__0(UI_LeaderboardDefaultPanel___c__DisplayClass8_0_o* __this, MethodInfo* method)

{
  UI_SettingsSkinsPanel_o *__this_00;
  
  __this_00 = (__this->fields).parent;
  if (__this_00 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.LeaderboardDefaultPanel.<>c__DisplayClass8_0$$<Setup>b__1
// il2cpp: void UI_LeaderboardDefaultPanel___c__DisplayClass8_0___Setup_b__1 (UI_LeaderboardDefaultPanel___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x18229d210

void
UI_LeaderboardDefaultPanel___c__DisplayClass8_0___Setup_b__1(UI_LeaderboardDefaultPanel___c__DisplayClass8_0_o* __this, MethodInfo* method)

{
  UI_SettingsSkinsPanel_o *__this_00;
  
  __this_00 = (__this->fields).parent;
  if (__this_00 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.LeaderboardDefaultPanel.<>c__DisplayClass8_1$$.ctor
// il2cpp: void UI_LeaderboardDefaultPanel___c__DisplayClass8_1___ctor (UI_LeaderboardDefaultPanel___c__DisplayClass8_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_LeaderboardDefaultPanel___c__DisplayClass8_1___ctor(UI_LeaderboardDefaultPanel___c__DisplayClass8_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardDefaultPanel.<>c__DisplayClass8_1$$<Setup>b__4
// il2cpp: void UI_LeaderboardDefaultPanel___c__DisplayClass8_1___Setup_b__4 (UI_LeaderboardDefaultPanel___c__DisplayClass8_1_o* __this, const MethodInfo* method);
// 0x18229d230

void UI_LeaderboardDefaultPanel___c__DisplayClass8_1___Setup_b__4
               (UI_LeaderboardDefaultPanel___c__DisplayClass8_1_o *__this,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  UI_ExternalLinkPopup_o *__this_00;
  
  if (Il2CppMethodInitialized_18434742b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_18434742b = '\x01';
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


// UI.LeaderboardDefaultPanel$$get_ScrollBar
// il2cpp: bool UI_LeaderboardDefaultPanel__get_ScrollBar (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_LeaderboardDefaultPanel__get_ScrollBar(UI_LeaderboardDefaultPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.LeaderboardDefaultPanel$$get_VerticalPadding
// il2cpp: int32_t UI_LeaderboardDefaultPanel__get_VerticalPadding (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x181b9be70

int32_t
UI_LeaderboardDefaultPanel__get_VerticalPadding(UI_LeaderboardDefaultPanel_o* __this, MethodInfo* method)

{
  return 0xf;
}


// UI.LeaderboardDefaultPanel$$get_VerticalSpacing
// il2cpp: float UI_LeaderboardDefaultPanel__get_VerticalSpacing (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x182168bc0

float
UI_LeaderboardDefaultPanel__get_VerticalSpacing(UI_LeaderboardDefaultPanel_o* __this, MethodInfo* method)

{
  return 20.0;
}


// UI.LeaderboardDefaultPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_LeaderboardDefaultPanel__get_ThemePanel (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x18228cfc0

System_String_o *
UI_LeaderboardDefaultPanel__get_ThemePanel(UI_LeaderboardDefaultPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347421 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LeaderboardPopup");
    Il2CppMethodInitialized_184347421 = '\x01';
  }
  return "LeaderboardPopup";
}


// UI.LeaderboardDefaultPanel$$Setup
// il2cpp: void UI_LeaderboardDefaultPanel__Setup (UI_LeaderboardDefaultPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18228b620
// eh: try 0x18228b9ac..0x18228c722 -> pad 0x18333faf0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x18228c722..0x18228c80a -> pad 0x18333fa90 catch Il2CppExceptionWrapper
// eh: try 0x18228c80a..0x18228c884 -> pad 0x18333faf0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x18228c884..0x18228c8ad -> pad 0x18333fa90 catch Il2CppExceptionWrapper
// eh: try 0x18228c8ad..0x18228cbb0 -> pad 0x18333faf0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x18228cbb0..0x18228cbff -> pad 0x18333fac0 catch Il2CppExceptionWrapper
// eh: try 0x18228cbff..0x18228cccb -> pad 0x18333faf0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x18228cccb..0x18228cd31 -> pad 0x18333fac0 catch Il2CppExceptionWrapper
// eh: try 0x18228cd31..0x18228cefb -> pad 0x18333faf0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x18228cefb..0x18228cf18 -> pad 0x18333fa90 catch Il2CppExceptionWrapper
// eh: try 0x18228cf18..0x18228cf1e -> pad 0x18333faf0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x18228cf1e..0x18228cf24 -> pad 0x18333fac0 catch Il2CppExceptionWrapper
// eh: try 0x18228cf24..0x18228cf39 -> pad 0x18333faf0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x18228cf39..0x18228cf51 -> pad 0x18333fac0 catch Il2CppExceptionWrapper
// eh: try 0x18228cf51..0x18228cfb9 -> pad 0x18333faf0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 139 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18228bc5b: jmp 0x18228bc60
// asm:   0x18228bc5d: mov rbx, rdi
// asm:   0x18228c04d: mov eax, edi
// asm:   0x18228c11c: mov r15, qword ptr [rip + 0x1df1a85]  ; "Score"
// asm:   0x18228c25e: mov dword ptr [rsp + 0x74], r13d
// asm:   0x18228c847: mov rdx, qword ptr [rip + 0x1df7ff2]  ; TypeInfo_UnityEngine_Transform
// asm:   0x18228c84e: mov r9, qword ptr [rax]
// asm:   0x18228c851: movzx eax, byte ptr [rdx + 0x130]
// asm:   0x18228c858: cmp byte ptr [r9 + 0x130], al
// asm:   0x18228c85f: jb 0x18228cf05
// asm:   0x18228c8ec: lea rcx, [rsp + 0xa8]
// asm:   0x18228c8f4: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x18228c8f9: mov rcx, qword ptr [rsp + 0xa0]
// asm:   0x18228c901: test rcx, rcx
// asm:   0x18228c904: jne 0x18228cf18
// asm:   0x18228c90a: xor edi, edi
// asm:   0x18228c90c: mov r13, qword ptr [rsp + 0xc0]
// asm:   0x18228c914: mov qword ptr [rsp + 0x80], r13
// asm:   0x18228c91c: mov r12, qword ptr [rsp + 0x90]
// asm:   0x18228c924: movss xmm7, dword ptr [rsp + 0x88]
// asm:   0x18228c92d: xorps xmm9, xmm9
// asm:   0x18228c931: movzx r15d, byte ptr [rsp + 0x288]
// asm:   0x18228c93a: mov byte ptr [rsp + 0x278], r15b
// asm:   0x18228c942: mov eax, dword ptr [rsp + 0x74]
// asm:   0x18228c946: mov dword ptr [rsp + 0x70], eax
// asm:   0x18228c96f: movss xmm8, dword ptr [rip + 0x10cc36c]
// asm:   0x18228c978: nop dword ptr [rax + rax]
// asm:   0x18228cccb: mov rdx, qword ptr [rip + 0x1df7b6e]  ; TypeInfo_UnityEngine_Transform
// asm:   0x18228ccd2: mov r9, qword ptr [rax]
// asm:   0x18228ccd5: movzx eax, byte ptr [rdx + 0x130]
// asm:   0x18228ccdc: cmp byte ptr [r9 + 0x130], al
// asm:   0x18228cce3: jb 0x18228cf3e
// asm:   0x18228cd5a: lea rcx, [rsp + 0xa8]
// asm:   0x18228cd62: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x18228cd67: mov rcx, qword ptr [rsp + 0xa0]
// asm:   0x18228cd6f: test rcx, rcx
// asm:   0x18228cd72: jne 0x18228cf51
// asm:   0x18228cd78: xor edi, edi
// asm:   0x18228cd7a: mov r13, qword ptr [rsp + 0xc0]
// asm:   0x18228cd82: mov qword ptr [rsp + 0x80], r13
// asm:   0x18228cd8a: movzx r15d, byte ptr [rsp + 0x288]
// asm:   0x18228cd93: mov byte ptr [rsp + 0x278], r15b
// asm:   0x18228cd9b: mov eax, dword ptr [rsp + 0xb8]
// asm:   0x18228cda2: mov dword ptr [rsp + 0x70], eax
// asm:   0x18228cda6: mov r12, qword ptr [rsp + 0x90]
// asm:   0x18228cdae: movss xmm7, dword ptr [rsp + 0x88]
// asm:   0x18228cdb7: mov esi, dword ptr [rsp + 0x74]
// asm:   0x18228cdbb: xorps xmm9, xmm9
// asm:   0x18228cdbf: movss xmm8, dword ptr [rip + 0x10cbf1c]
// asm:   0x18228cdc8: inc esi
// asm:   0x18228cdca: mov dword ptr [rsp + 0x74], esi
// asm:   0x18228cdce: jmp 0x18228c980
// asm:   0x18228cdd3: jmp 0x18228ce4d
// asm:   0x18228cdd5: mov eax, dword ptr [rsp + 0xd0]
// asm:   0x18228cddc: dec eax
// asm:   0x18228cdde: movsxd rcx, eax
// asm:   0x18228cde1: mov rbx, qword ptr [rsp + rcx*8 + 0xc8]
// asm:   0x18228cde9: lea rcx, [rip + 0x1e6e648]  ; TypeInfo_UnityEngine_Debug
// asm:   0x18228cdf0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18228cdf5: cmp dword ptr [rax + 0xe4], 0
// asm:   0x18228cdfc: jne 0x18228ce06
// asm:   0x18228cdfe: mov rcx, rax
// asm:   0x18228ce01: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x18228ce06: xor edx, edx
// asm:   0x18228ce08: mov rcx, rbx
// asm:   0x18228ce0b: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x18228ce10: mov rax, qword ptr [rsp + 0x270]
// asm:   0x18228ce18: mov rbx, qword ptr [rax + 0x20]
// asm:   0x18228ce1c: lea rcx, [rip + 0x1e582fd]  ; "Failed to load leaderboard."
// asm:   0x18228ce23: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18228ce28: mov r8, rax
// asm:   0x18228ce2b: xor edi, edi
// asm:   0x18228ce2d: mov qword ptr [rsp + 0x28], rdi
// asm:   0x18228ce32: mov dword ptr [rsp + 0x20], 4
// asm:   0x18228ce3a: xor r9d, r9d
// asm:   0x18228ce3d: mov rdx, qword ptr [rsp + 0xc0]
// asm:   0x18228ce45: mov rcx, rbx
// asm:   0x18228ce78: mov qword ptr [rsp + 0x28], rdi
// asm:   0x18228ce7d: mov dword ptr [rsp + 0x20], 4
// asm:   0x18228ce85: xor r9d, r9d
// asm:   0x18228ce88: mov r8, qword ptr [rip + 0x1e5e671]  ; "Loading leaderboard..."
// asm:   0x18228ce8f: mov rdx, rsi
// asm:   0x18228ce92: mov rcx, qword ptr [r12 + 0x20]
// asm:   0x18228ce97: jmp 0x18228ce48
// asm:   0x18228cf18: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18228cf51: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333fa90: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333fa95: push rbp
// asm:   0x18333fa96: sub rsp, 0x70
// asm:   0x18333fa9a: mov rbp, rdx
// asm:   0x18333fa9d: mov rax, qword ptr [rbp + 0x190]
// asm:   0x18333faa4: mov rcx, qword ptr [rax]
// asm:   0x18333faa7: mov qword ptr [rbp + 0xa0], rcx
// asm:   0x18333faae: movabs rax, 0
// asm:   0x18333fab8: add rsp, 0x70
// asm:   0x18333fabc: pop rbp
// asm:   0x18333fabd: ret 
// asm:   0x18333fac0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333fac5: push rbp
// asm:   0x18333fac6: sub rsp, 0x70
// asm:   0x18333faca: mov rbp, rdx
// asm:   0x18333facd: mov rax, qword ptr [rbp + 0x198]
// asm:   0x18333fad4: mov rcx, qword ptr [rax]
// asm:   0x18333fad7: mov qword ptr [rbp + 0xa0], rcx
// asm:   0x18333fade: movabs rax, 0
// asm:   0x18333fae8: add rsp, 0x70
// asm:   0x18333faec: pop rbp
// asm:   0x18333faed: ret 
// asm:   0x18333faf0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333faf5: push rbx
// asm:   0x18333faf6: push rbp
// asm:   0x18333faf7: push rdi
// asm:   0x18333faf8: sub rsp, 0x70
// asm:   0x18333fafc: mov rbp, rdx
// asm:   0x18333faff: mov rdi, qword ptr [rbp + 0x1a0]
// asm:   0x18333fb06: mov rax, qword ptr [rdi]
// asm:   0x18333fb09: mov rbx, qword ptr [rax]
// asm:   0x18333fb0c: lea rcx, [rip + 0xd39445]  ; TypeInfo_System_Exception
// asm:   0x18333fb13: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333fb18: mov rcx, rax
// asm:   0x18333fb1b: mov rdx, rbx
// asm:   0x18333fb1e: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333fb23: test al, al
// asm:   0x18333fb25: mov rax, qword ptr [rdi]
// asm:   0x18333fb28: je 0x18333fb4b
// asm:   0x18333fb2a: movsxd rcx, dword ptr [rbp + 0xd0]
// asm:   0x18333fb31: mov qword ptr [rbp + rcx*8 + 0xc8], rax
// asm:   0x18333fb39: inc dword ptr [rbp + 0xd0]
// asm:   0x18333fb3f: movabs rax, 0
// asm:   0x18333fb49: jmp 0x18333fb66
// asm:   0x18333fb4b: mov qword ptr [rbp + 0xe0], rax
// asm:   0x18333fb52: lea rdx, [rip + 0xc9c42f]
// asm:   0x18333fb59: lea rcx, [rbp + 0xe0]
// asm:   0x18333fb60: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333fb66: add rsp, 0x70
// asm:   0x18333fb6a: pop rdi
// asm:   0x18333fb6b: pop rbp
// asm:   0x18333fb6c: pop rbx
// asm:   0x18333fb6d: ret 

void UI_LeaderboardDefaultPanel__Setup
               (UI_LeaderboardDefaultPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  UI_BasePanel_o *pUVar5;
  Settings_StringSetting_o *__this_00;
  System_Xml_Schema_XmlSchema_c *pSVar6;
  System_Object_array *pSVar7;
  Il2CppClass *pIVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  System_Nullable_float__Fields SVar10;
  System_Nullable_float__Fields SVar11;
  MethodInfo *pMVar12;
  SimpleJSONFixed_JSONNode_c *pSVar13;
  bool bVar14;
  bool bVar15;
  char cVar16;
  UI_LeaderboardDefaultPanel___c__DisplayClass8_0_o *object;
  System_String_o *pSVar17;
  UI_ElementStyle_o *pUVar18;
  System_Xml_Schema_XmlSchema_o *pSVar19;
  undefined8 *puVar20;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar21;
  SimpleJSONFixed_JSONNode_o *pSVar22;
  longlong *plVar23;
  SimpleJSONFixed_JSONNode_o *pSVar24;
  UnityEngine_GameObject_o *pUVar25;
  UnityEngine_Transform_o *pUVar26;
  UnityEngine_Events_UnityAction_o *pUVar27;
  System_String_array *options;
  System_String_o *a;
  System_Collections_Generic_List_object__o *__this_01;
  System_Nullable_float__Fields *pSVar28;
  Il2CppObject *pIVar29;
  System_Func_T__TResult__o *pSVar30;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar31;
  System_Collections_Generic_List_TSource__o *__this_02;
  VirtualInvokeData *pVVar32;
  UnityEngine_Component_o *pUVar33;
  UnityEngine_UI_LayoutElement_o *pUVar34;
  UnityEngine_Transform_o *parent_00;
  SimpleJSONFixed_JSONNode_o *pSVar35;
  void *pvVar36;
  UI_LeaderboardDefaultPanel___c__DisplayClass8_1_o *object_00;
  ushort uVar37;
  ushort uVar38;
  int index;
  undefined1 uVar39;
  float fVar40;
  float num;
  System_Nullable_float__Fields local_res10 [2];
  UnityEngine_Events_UnityAction_o *local_res20;
  int32_t local_1f8;
  SimpleJSONFixed_JSONNode_o local_1f0;
  float local_1e0;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_1d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_1c8;
  Il2CppObject **local_1b8;
  Settings_StringSetting_o *local_1b0;
  UI_ElementStyle_o *local_1a8;
  undefined4 local_198;
  Il2CppObject *local_190 [3];
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_178;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_128;
  undefined1 local_c0 [136];
  
  if (Il2CppMethodInitialized_184347422 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderByDescending_JSONNode_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_JSONNode_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_JSONNode_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LeaderboardPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_JSONNode_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_PastebinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_LeaderboardDefaultPanel_c_Setup_b__8_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_LeaderboardDefaultPanel_c_Setup_b__8_3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_LeaderboardDefaultPanel_c__DisplayClass8_0_Setup_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_LeaderboardDefaultPanel_c__DisplayClass8_0_Setup_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LeaderboardDefaultPanel_c__DisplayClass8_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_LeaderboardDefaultPanel_c__DisplayClass8_1_Setup_b__4);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LeaderboardDefaultPanel_c__DisplayClass8_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LeaderboardDefaultPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"Score");
    il2cpp_codegen_initialize_runtime_metadata(&"Sort");
    il2cpp_codegen_initialize_runtime_metadata(&"Rank");
    il2cpp_codegen_initialize_runtime_metadata(&"DecimalPlaces");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Watch");
    il2cpp_codegen_initialize_runtime_metadata(&"HasLink");
    il2cpp_codegen_initialize_runtime_metadata(&"SubcategoryName");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"Players");
    il2cpp_codegen_initialize_runtime_metadata(&"Join the discord to participate in the leaderboard.");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"CategoryName");
    il2cpp_codegen_initialize_runtime_metadata(&"Descending");
    il2cpp_codegen_initialize_runtime_metadata(&"Subcategories");
    il2cpp_codegen_initialize_runtime_metadata(&"Loading leaderboard...");
    il2cpp_codegen_initialize_runtime_metadata(&"Link");
    Il2CppMethodInitialized_184347422 = '\x01';
  }
  local_128.type = 0;
  local_128._4_4_ = 0;
  local_128.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_128.m_Object.fields._version = 0;
  local_128.m_Object.fields._index = 0;
  local_128.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_128.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_128.m_Object.fields._getEnumeratorRetType = 0;
  local_128.m_Object.fields._36_4_ = 0;
  local_128.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_128.m_Array.fields._index = 0;
  local_128.m_Array.fields._version = 0;
  local_128.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  pSVar35 = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_1f0.klass = (SimpleJSONFixed_JSONNode_c *)0x0;
  local_190[0] = (Il2CppObject *)0x0;
  cVar16 = '\0';
  local_198 = 0;
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_LeaderboardDefaultPanel_c__DisplayClass8_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (UI_LeaderboardDefaultPanel___c__DisplayClass8_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (object->fields).parent = parent;
  Il2CppCodeGenWriteBarrier(&(object->fields).parent,parent);
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,(object->fields).parent,(MethodInfo *)0x0);
  pSVar17 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar18 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  local_1f0.monitor = pUVar18;
  UI_ElementStyle___ctor(pUVar18,0x18,120.0,20.0,pSVar17,(MethodInfo *)0x0);
  local_1a8 = pUVar18;
  if ((TypeInfo_ApplicationManagers_PastebinLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_PastebinLoader);
  }
  if (TypeInfo_ApplicationManagers_PastebinLoader->static_fields->Status != 1) {
    UI_ElementFactory__CreateDefaultLabel
              ((__this->fields).SinglePanel,pUVar18,"Loading leaderboard...",0,4,(MethodInfo *)0x0);
    return;
  }
  pUVar5 = (object->fields).parent;
  if (pUVar5 == (UI_BasePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = (TypeInfo_UI_LeaderboardPopup->_2).typeHierarchyDepth;
  if (((pUVar5->klass->_2).typeHierarchyDepth < bVar2) ||
     ((pUVar5->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_UI_LeaderboardPopup))
  {
    il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
  }
  pUVar27 = (UnityEngine_Events_UnityAction_o *)(*(uint64_t *)((char *)pUVar5 + 0xa8));
  local_res20 = pUVar27;
  if (pUVar27 == (UnityEngine_Events_UnityAction_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_00 = (*(uint64_t *)((char *)pUVar5 + 0xb0));
  local_1b0 = __this_00;
  bVar14 = System_String__op_Equality
                     ((System_String_o *)(pUVar27->fields).m_target,
                      (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (bVar14) {
    if ((TypeInfo_ApplicationManagers_PastebinLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_PastebinLoader);
    }
    pSVar22 = TypeInfo_ApplicationManagers_PastebinLoader->static_fields->Leaderboard;
    if (pSVar22 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar19 = (*(pSVar22->klass->vtable)._5_get_Item.methodPtr)(pSVar22,(MethodInfo *)0x0);
    if (pSVar19 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar17 = (*(pSVar19->klass->vtable)._7_get_IdAttribute.methodPtr)
                        (pSVar19,(MethodInfo *)"CategoryName");
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                        ((SimpleJSONFixed_JSONNode_o *)pSVar17,(MethodInfo *)0x0);
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pUVar27,(Il2CppObject *)pSVar17,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  }
  pIVar29 = (pUVar27->fields).m_target;
  if (Il2CppMethodInitialized_184347426 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_PastebinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&"CategoryName");
    Il2CppMethodInitialized_184347426 = '\x01';
  }
  local_178.type = 0;
  local_178._4_4_ = 0;
  local_178.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_178.m_Object.fields._version = 0;
  local_178.m_Object.fields._index = 0;
  local_178.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_178.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_178.m_Object.fields._getEnumeratorRetType = 0;
  local_178.m_Object.fields._36_4_ = 0;
  local_178.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_178.m_Array.fields._index = 0;
  local_178.m_Array.fields._version = 0;
  local_178.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if ((TypeInfo_ApplicationManagers_PastebinLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_PastebinLoader);
  }
  pSVar22 = TypeInfo_ApplicationManagers_PastebinLoader->static_fields->Leaderboard;
  if (pSVar22 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  puVar20 = (undefined8 *)(*(pSVar22->klass->vtable)._32_unknown.methodPtr)(local_c0);
  local_178._0_8_ = *puVar20;
  local_178.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar20[1];
  local_178.m_Object.fields._8_8_ = puVar20[2];
  local_178.m_Object.fields._current.fields.key = (Il2CppObject *)puVar20[3];
  local_178.m_Object.fields._current.fields.value = (Il2CppObject *)puVar20[4];
  local_178.m_Object.fields._32_8_ = puVar20[5];
  local_178.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar20[6];
  local_178.m_Array.fields._8_8_ = puVar20[7];
  local_178.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar20[8];
  do {
    bVar14 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                       ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_178,(MethodInfo *)0x0);
    pSVar22 = pSVar35;
    if (!bVar14) break;
    pSVar21 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                        (&local_1c8,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_178,(MethodInfo *)0x0);
    pSVar17 = (pSVar21->fields).key;
    SVar10 = (System_Nullable_float__Fields)(pSVar21->fields).value;
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    local_1d8.fields.key = pSVar17;
    local_1d8.fields.value = (SimpleJSONFixed_JSONNode_o *)SVar10;
    pSVar22 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_1d8,(MethodInfo *)0x0);
    if (pSVar22 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar19 = (*(pSVar22->klass->vtable)._7_get_Item.methodPtr)(pSVar22,(MethodInfo *)"CategoryName");
    bVar14 = SimpleJSONFixed_JSONNode__op_Equality
                       ((SimpleJSONFixed_JSONNode_o *)pSVar19,pIVar29,(MethodInfo *)0x0);
  } while (!bVar14);
  if (__this_00 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar14 = System_String__op_Equality
                     ((__this_00->fields)._value,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                      (MethodInfo *)0x0);
  if (bVar14) {
    if (pSVar22 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar19 = (*(pSVar22->klass->vtable)._7_get_Item.methodPtr)(pSVar22,(MethodInfo *)"Subcategories");
    if (pSVar19 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    plVar23 = (longlong *)
              (*(pSVar19->klass->vtable)._5_OnRemove.methodPtr)
                        (pSVar19,(System_Type_o *)0x0,(pSVar19->klass->vtable)._5_OnRemove.method);
    if (plVar23 == (longlong *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar24 = (SimpleJSONFixed_JSONNode_o *)
              (**(code **)(*plVar23 + 0x1a8))(plVar23,"SubcategoryName",*(undefined8 *)(*plVar23 + 0x1b0))
    ;
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450(pSVar24,(MethodInfo *)0x0);
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)pSVar17,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  }
  pSVar24 = UI_LeaderboardDefaultPanel__FindSubcategory
                      (__this,pSVar22,(__this_00->fields)._value,(MethodInfo *)0x0);
  pUVar25 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,10.0,3,(MethodInfo *)0x0);
  if (pUVar25 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar26 = UnityEngine_GameObject__get_transform(pUVar25,(MethodInfo *)0x0);
  pSVar17 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar18 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar18,0x18,0.0,20.0,pSVar17,(MethodInfo *)0x0);
  local_res10[0] =
       (System_Nullable_float__Fields)UI_LeaderboardDefaultPanel__GetCategoryNames(__this,(MethodInfo *)0x0);
  local_1d8.fields.key = (System_String_o *)0x0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&local_1d8,180.0,
             (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
  pUVar27 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar27,(Il2CppObject *)object,
             (intptr_t)MethodInfo_UI_LeaderboardDefaultPanel_c__DisplayClass8_0_Setup_b__0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDropdownSetting
            (pUVar26,pUVar18,(Settings_BaseSetting_o *)local_res20,"",
             (System_String_array *)local_res10[0],"",180.0,40.0,300.0,
             (System_Nullable_float__o)local_1d8.fields.key,pUVar27,(System_Int32_array *)0x0,
             (MethodInfo *)0x0);
  options = UI_LeaderboardDefaultPanel__GetSubcategoryNames(__this,pSVar22,(MethodInfo *)0x0);
  if (options == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (1 < (int)options->max_length) {
    local_res10[0].hasValue = false;
    local_res10[0]._1_3_ = 0;
    local_res10[0].value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)local_res10,180.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    local_res20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)local_res20,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_LeaderboardDefaultPanel_c__DisplayClass8_0_Setup_b__1,(MethodInfo *)0x0
              );
    UI_ElementFactory__CreateDropdownSetting
              (pUVar26,pUVar18,(Settings_BaseSetting_o *)local_1b0,"",options,
               "",180.0,40.0,300.0,(System_Nullable_float__o)local_res10[0],local_res20,
               (System_Int32_array *)0x0,(MethodInfo *)0x0);
  }
  UI_ElementFactory__CreateTooltipIcon
            (pUVar26,local_1f0.monitor,"Join the discord to participate in the leaderboard.",30.0,30.0,(MethodInfo *)0x0);
  if (pSVar22 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar14 = (*(pSVar22->klass->vtable)._28_HasKey.methodPtr)(pSVar22,(MethodInfo *)"Sort");
  if (bVar14) {
    pSVar19 = (*(pSVar22->klass->vtable)._7_get_Item.methodPtr)(pSVar22,(MethodInfo *)"Sort");
    if (pSVar19 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = pSVar19->klass;
    pSVar17 = (System_String_o *)
              (*(pSVar6->vtable)._9_SetUnhandledAttributes.methodPtr)
                        (pSVar19,(UnityEngine_GameObject_o *)(pSVar6->vtable)._9_SetUnhandledAttributes.method
                         ,(MethodInfo *)pSVar6);
    bVar14 = System_String__op_Equality(pSVar17,"Descending",(MethodInfo *)0x0);
  }
  else {
    bVar14 = true;
  }
  bVar15 = (*(pSVar22->klass->vtable)._28_HasKey.methodPtr)(pSVar22,(MethodInfo *)"HasLink");
  if (bVar15) {
    pSVar19 = (*(pSVar22->klass->vtable)._7_get_Item.methodPtr)(pSVar22,(MethodInfo *)"HasLink");
    if (pSVar19 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    cVar16 = (*(code *)((Il2CppClass *)pSVar19->klass)->vtable[39].methodPtr)
                       (pSVar19,((Il2CppClass *)pSVar19->klass)->vtable[39].method);
  }
  uVar39 = cVar16 != '\0';
  local_res10[0].hasValue = (bool)uVar39;
  bVar15 = (*(pSVar22->klass->vtable)._28_HasKey.methodPtr)(pSVar22,(MethodInfo *)"DecimalPlaces");
  if (bVar15) {
    pSVar19 = (*(pSVar22->klass->vtable)._7_get_Item.methodPtr)(pSVar22,(MethodInfo *)"DecimalPlaces");
    if (pSVar19 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_1f8 = (*(code *)((Il2CppClass *)pSVar19->klass)->vtable[35].methodPtr)
                          (pSVar19,((Il2CppClass *)pSVar19->klass)->vtable[35].method);
  }
  else {
    local_1f8 = 0;
  }
  bVar15 = (*(pSVar22->klass->vtable)._28_HasKey.methodPtr)(pSVar22,(MethodInfo *)"ScoreLabel");
  pSVar17 = "Score";
  if (bVar15) {
    pSVar19 = (*(pSVar22->klass->vtable)._7_get_Item.methodPtr)(pSVar22,(MethodInfo *)"ScoreLabel");
    if (pSVar19 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = pSVar19->klass;
    pSVar17 = (System_String_o *)
              (*(pSVar6->vtable)._9_SetUnhandledAttributes.methodPtr)
                        (pSVar19,(UnityEngine_GameObject_o *)(pSVar6->vtable)._9_SetUnhandledAttributes.method
                         ,(MethodInfo *)pSVar6);
  }
  if (pSVar24 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar15 = (*(pSVar24->klass->vtable)._28_HasKey.methodPtr)(pSVar24,(MethodInfo *)"Sort");
  if (bVar15) {
    pSVar19 = (*(pSVar24->klass->vtable)._7_get_Item.methodPtr)(pSVar24,(MethodInfo *)"Sort");
    if (pSVar19 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = pSVar19->klass;
    a = (System_String_o *)
        (*(pSVar6->vtable)._9_SetUnhandledAttributes.methodPtr)
                  (pSVar19,(UnityEngine_GameObject_o *)(pSVar6->vtable)._9_SetUnhandledAttributes.method,
                   (MethodInfo *)pSVar6);
    bVar14 = System_String__op_Equality(a,"Descending",(MethodInfo *)0x0);
  }
  bVar15 = (*(pSVar24->klass->vtable)._28_HasKey.methodPtr)(pSVar24,(MethodInfo *)"HasLink");
  if (bVar15) {
    pSVar19 = (*(pSVar24->klass->vtable)._7_get_Item.methodPtr)(pSVar24,(MethodInfo *)"HasLink");
    if (pSVar19 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    uVar39 = (*(code *)((Il2CppClass *)pSVar19->klass)->vtable[39].methodPtr)
                       (pSVar19,((Il2CppClass *)pSVar19->klass)->vtable[39].method);
    local_res10[0].hasValue = (bool)uVar39;
  }
  local_res20 = (UnityEngine_Events_UnityAction_o *)CONCAT71(local_res20._1_7_,uVar39);
  bVar15 = (*(pSVar24->klass->vtable)._28_HasKey.methodPtr)(pSVar24,(MethodInfo *)"DecimalPlaces");
  if (bVar15) {
    pSVar19 = (*(pSVar24->klass->vtable)._7_get_Item.methodPtr)(pSVar24,(MethodInfo *)"DecimalPlaces");
    if (pSVar19 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_1f8 = (*(code *)((Il2CppClass *)pSVar19->klass)->vtable[35].methodPtr)
                          (pSVar19,((Il2CppClass *)pSVar19->klass)->vtable[35].method);
  }
  bVar15 = (*(pSVar24->klass->vtable)._28_HasKey.methodPtr)(pSVar24,(MethodInfo *)"ScoreLabel");
  if (bVar15) {
    pSVar19 = (*(pSVar22->klass->vtable)._7_get_Item.methodPtr)(pSVar22,(MethodInfo *)"ScoreLabel");
    if (pSVar19 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = pSVar19->klass;
    pSVar17 = (System_String_o *)
              (*(pSVar6->vtable)._9_SetUnhandledAttributes.methodPtr)
                        (pSVar19,(UnityEngine_GameObject_o *)(pSVar6->vtable)._9_SetUnhandledAttributes.method
                         ,(MethodInfo *)pSVar6);
  }
  __this_01 = (System_Collections_Generic_List_object__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_JSONNode);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_JSONNode_ctor);
  pSVar19 = (*(pSVar24->klass->vtable)._7_get_Item.methodPtr)(pSVar24,(MethodInfo *)"Players");
  if (pSVar19 == (System_Xml_Schema_XmlSchema_o *)0x0) {
    ThrowNullReferenceException();
  }
  puVar20 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar19->klass)->vtable[32].methodPtr)(local_c0);
  local_128._0_8_ = *puVar20;
  local_128.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar20[1];
  local_128.m_Object.fields._8_8_ = puVar20[2];
  local_128.m_Object.fields._current.fields.key = (Il2CppObject *)puVar20[3];
  local_128.m_Object.fields._current.fields.value = (Il2CppObject *)puVar20[4];
  local_128.m_Object.fields._32_8_ = puVar20[5];
  local_128.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar20[6];
  local_128.m_Array.fields._8_8_ = puVar20[7];
  local_128.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar20[8];
  while (bVar15 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_128,(MethodInfo *)0x0), bVar15
        ) {
    pSVar28 = (System_Nullable_float__Fields *)
              SimpleJSONFixed_JSONNode_Enumerator__get_Current
                        (&local_1c8,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_128,(MethodInfo *)0x0);
    SVar10 = *pSVar28;
    SVar11 = pSVar28[1];
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    local_1d8.fields.key = (System_String_o *)SVar10;
    local_1d8.fields.value = (SimpleJSONFixed_JSONNode_o *)SVar11;
    pIVar29 = (Il2CppObject *)SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_1d8,(MethodInfo *)0x0);
    pMVar12 = MethodInfo_System_Collections_Generic_List_JSONNode_Add;
    if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
      ThrowNullReferenceException();
    }
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar7 = (__this_01->fields)._items;
    if (pSVar7 == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    uVar4 = (__this_01->fields)._size;
    if (uVar4 < (uint)pSVar7->max_length) {
      (__this_01->fields)._size = uVar4 + 1;
      if ((uint)pSVar7->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      pSVar7->m_Items[(int)uVar4] = pIVar29;
      Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar4,pIVar29);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_01,pIVar29,(MethodInfo_93DD50 *)pMVar12->klass->rgctx_data[0xe].method);
    }
  }
  if (bVar14 == false) {
    if ((TypeInfo_UI_LeaderboardDefaultPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LeaderboardDefaultPanel_c);
    }
    pSVar30 = (System_Func_T__TResult__o *)TypeInfo_UI_LeaderboardDefaultPanel_c->static_fields->__9__8_3;
    if (pSVar30 == (System_Func_T__TResult__o *)0x0) {
      if ((TypeInfo_UI_LeaderboardDefaultPanel_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LeaderboardDefaultPanel_c);
      }
      pIVar29 = (Il2CppObject *)TypeInfo_UI_LeaderboardDefaultPanel_c->static_fields->__9;
      pSVar30 = (System_Func_T__TResult__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_JSONNode_float);
      System_Func_object__float____ctor
                (pSVar30,pIVar29,(intptr_t)MethodInfo_UI_LeaderboardDefaultPanel_c_Setup_b__8_3,
                 (MethodInfo_1729990 *)0x0);
      TypeInfo_UI_LeaderboardDefaultPanel_c->static_fields->__9__8_3 =
           (System_Func_JSONNode__float__o *)pSVar30;
      Il2CppCodeGenWriteBarrier(&TypeInfo_UI_LeaderboardDefaultPanel_c->static_fields->__9__8_3,pSVar30);
    }
    pSVar31 = System_Linq_Enumerable__OrderBy_object__float_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)__this_01,
                         (System_Func_TSource__TKey__o *)pSVar30,
                         (MethodInfo_6C1460 *)MethodInfo_System_Linq_Enumerable_OrderBy_JSONNode_float);
    __this_02 = System_Linq_Enumerable__ToList_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar31,
                           (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_JSONNode);
  }
  else {
    if ((TypeInfo_UI_LeaderboardDefaultPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LeaderboardDefaultPanel_c);
    }
    pSVar30 = (System_Func_T__TResult__o *)TypeInfo_UI_LeaderboardDefaultPanel_c->static_fields->__9__8_2;
    if (pSVar30 == (System_Func_T__TResult__o *)0x0) {
      if ((TypeInfo_UI_LeaderboardDefaultPanel_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LeaderboardDefaultPanel_c);
      }
      pIVar29 = (Il2CppObject *)TypeInfo_UI_LeaderboardDefaultPanel_c->static_fields->__9;
      pSVar30 = (System_Func_T__TResult__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_JSONNode_float);
      System_Func_object__float____ctor
                (pSVar30,pIVar29,(intptr_t)MethodInfo_UI_LeaderboardDefaultPanel_c_Setup_b__8_2,
                 (MethodInfo_1729990 *)0x0);
      TypeInfo_UI_LeaderboardDefaultPanel_c->static_fields->__9__8_2 =
           (System_Func_JSONNode__float__o *)pSVar30;
      Il2CppCodeGenWriteBarrier(&TypeInfo_UI_LeaderboardDefaultPanel_c->static_fields->__9__8_2,pSVar30);
    }
    pSVar31 = System_Linq_Enumerable__OrderByDescending_object__float_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)__this_01,
                         (System_Func_TSource__TKey__o *)pSVar30,
                         (MethodInfo_6C10E0 *)
                         MethodInfo_System_Linq_Enumerable_OrderByDescending_JSONNode_float);
    __this_02 = System_Linq_Enumerable__ToList_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar31,
                           (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_JSONNode);
  }
  local_1d8.fields.key = (System_String_o *)__this_02;
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
  pUVar25 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,0.0,0,(MethodInfo *)0x0);
  if (pUVar25 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar26 = UnityEngine_GameObject__get_transform(pUVar25,(MethodInfo *)0x0);
  pvVar36 = local_1f0.monitor;
  UI_ElementFactory__CreateDefaultLabel(pUVar26,local_1f0.monitor,"Rank",1,4,(MethodInfo *)0x0)
  ;
  UI_ElementFactory__CreateDefaultLabel(pUVar26,pvVar36,"Name",1,4,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(pUVar26,pvVar36,pSVar17,1,4,(MethodInfo *)0x0);
  bVar14 = local_res10[0].hasValue;
  if (local_res10[0].hasValue != false) {
    UI_ElementFactory__CreateDefaultLabel(pUVar26,pvVar36,"Watch",1,4,(MethodInfo *)0x0);
  }
  fVar40 = (*(__this->klass->vtable)._33_GetWidth.methodPtr)
                     (__this,(__this->klass->vtable)._33_GetWidth.method);
  if (bVar14 == false) {
    fVar40 = fVar40 / 3.0;
  }
  else {
    fVar40 = fVar40 * 0.25;
  }
  if (pUVar26 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_1e0 = fVar40;
  local_1f0.klass =
       (SimpleJSONFixed_JSONNode_c *)UnityEngine_Transform__GetEnumerator(pUVar26,(MethodInfo *)0x0);
  local_1c8.fields.key = (System_String_o *)0x0;
  local_1c8.fields.value = &local_1f0;
  local_1b8 = local_190;
  do {
    pSVar13 = local_1f0.klass;
    if (local_1f0.klass == (SimpleJSONFixed_JSONNode_c *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar8 = ((local_1f0.klass)->_1).image;
    uVar3 = (pIVar8->_2).interface_offsets_count;
    uVar38 = 0;
    if (uVar3 != 0) {
      pIVar9 = (pIVar8->_1).interfaceOffsets;
      uVar37 = uVar38;
      do {
        if (pIVar9[uVar37].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar32 = (VirtualInvokeData *)&pIVar8->vtable[pIVar9[uVar37].offset].methodPtr;
          goto label_18228c786;
        }
        uVar37 = uVar37 + 1;
      } while (uVar37 < uVar3);
    }
    pVVar32 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)local_1f0.klass,
                         (Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_18228c786:
    bVar14 = (*pVVar32->methodPtr)((Il2CppObject *)pSVar13,pVVar32->method);
    pSVar13 = local_1f0.klass;
    if (!bVar14) {
      local_190[0] = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)local_1f0.klass,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (local_190[0] != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_190[0]);
      }
      local_res20 = (UnityEngine_Events_UnityAction_o *)CONCAT71(local_res20._1_7_,local_res10[0].hasValue);
      local_1b0 = (Settings_StringSetting_o *)CONCAT44(local_1b0._4_4_,local_1f8);
      cVar16 = local_res10[0].hasValue;
      if (__this_02 == (System_Collections_Generic_List_TSource__o *)0x0) {
        ThrowNullReferenceException();
      }
      while( true ) {
        pvVar36 = local_1f0.monitor;
        index = (int)pSVar35;
        if ((((System_Collections_Generic_List_object__o *)__this_02)->fields)._size <= index) {
          return;
        }
        pUVar25 = UI_ElementFactory__CreateHorizontalGroup
                            ((__this->fields).SinglePanel,0.0,0,(MethodInfo *)0x0);
        if (pUVar25 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar26 = UnityEngine_GameObject__get_transform(pUVar25,(MethodInfo *)0x0);
        pUVar25 = UI_ElementFactory__CreateHorizontalGroup(pUVar26,5.0,4,(MethodInfo *)0x0);
        if (pUVar25 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        parent_00 = UnityEngine_GameObject__get_transform(pUVar25,(MethodInfo *)0x0);
        UI_LeaderboardDefaultPanel__CreateRank(__this,parent_00,pvVar36,index + 1,(MethodInfo *)0x0);
        pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)__this_02,index,
                             (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_JSONNode_get_Item
                            );
        if (pSVar35 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
        pSVar19 = (*(pSVar35->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar35,(MethodInfo *)"Name");
        if (pSVar19 == (System_Xml_Schema_XmlSchema_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar6 = pSVar19->klass;
        pSVar17 = (System_String_o *)
                  (*(pSVar6->vtable)._9_SetUnhandledAttributes.methodPtr)
                            (pSVar19,(UnityEngine_GameObject_o *)
                                     (pSVar6->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar6);
        UI_ElementFactory__CreateDefaultLabel(pUVar26,pvVar36,pSVar17,0,4,(MethodInfo *)0x0);
        pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)__this_02,index,
                             (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_JSONNode_get_Item
                            );
        if (pSVar35 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar19 = (*(pSVar35->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar35,(MethodInfo *)"Score");
        if (pSVar19 == (System_Xml_Schema_XmlSchema_o *)0x0) {
          ThrowNullReferenceException();
        }
        num = (float)(*(code *)((Il2CppClass *)pSVar19->klass)->vtable[37].methodPtr)
                               (pSVar19,((Il2CppClass *)pSVar19->klass)->vtable[37].method);
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        pSVar17 = Utility_Util__FormatFloat(num,local_1f8,(MethodInfo *)0x0);
        UI_ElementFactory__CreateDefaultLabel(pUVar26,pvVar36,pSVar17,0,4,(MethodInfo *)0x0);
        if (cVar16 != '\0') {
          pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)__this_02,index,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_JSONNode_get_Item);
          if (pSVar35 == (SimpleJSONFixed_JSONNode_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar14 = (*(pSVar35->klass->vtable)._28_HasKey.methodPtr)
                             (pSVar35,(MethodInfo *)"Link");
          if (bVar14) {
            object_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_UI_LeaderboardDefaultPanel_c__DisplayClass8_1);
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,
                       (MethodInfo *)0x0);
            pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)__this_02,index,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_JSONNode_get_Item);
            if (pSVar35 == (SimpleJSONFixed_JSONNode_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar19 = (*(pSVar35->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar35,(MethodInfo *)"Link");
            if (pSVar19 == (System_Xml_Schema_XmlSchema_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar6 = pSVar19->klass;
            pSVar17 = (System_String_o *)
                      (*(pSVar6->vtable)._9_SetUnhandledAttributes.methodPtr)
                                (pSVar19,(UnityEngine_GameObject_o *)
                                         (pSVar6->vtable)._9_SetUnhandledAttributes.method,
                                 (MethodInfo *)pSVar6);
            if (object_00 == (UI_LeaderboardDefaultPanel___c__DisplayClass8_1_o *)0x0) {
              ThrowNullReferenceException();
            }
            (object_00->fields).link = pSVar17;
            Il2CppCodeGenWriteBarrier(&(object_00->fields).link,pSVar17);
            pUVar27 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar27,(Il2CppObject *)object_00,
                       (intptr_t)MethodInfo_UI_LeaderboardDefaultPanel_c__DisplayClass8_1_Setup_b__4,
                       (MethodInfo *)0x0);
            UI_ElementFactory__CreateLinkButton
                      (pUVar26,pvVar36,"Link",pUVar27,(MethodInfo *)0x0);
          }
          else {
            UI_ElementFactory__CreateDefaultLabel(pUVar26,pvVar36,"",0,4,(MethodInfo *)0x0)
            ;
          }
        }
        if (pUVar26 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        local_1f0.klass =
             (SimpleJSONFixed_JSONNode_c *)UnityEngine_Transform__GetEnumerator(pUVar26,(MethodInfo *)0x0);
        local_1c8.fields.key = (System_String_o *)0x0;
        local_1c8.fields.value = &local_1f0;
        local_1b8 = local_190;
        while( true ) {
          if (local_1f0.klass == (SimpleJSONFixed_JSONNode_c *)0x0) {
            ThrowNullReferenceException();
          }
          pvVar36 = InterfaceInvoker0_Invoke
                              (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,
                               (Il2CppObject *)local_1f0.klass);
          if ((char)pvVar36 == '\0') break;
          if (local_1f0.klass == (SimpleJSONFixed_JSONNode_c *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar33 = InterfaceInvoker0_Invoke
                              (1,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,
                               (Il2CppObject *)local_1f0.klass);
          if (pUVar33 == (UnityEngine_Component_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar2 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
          if (((pUVar33->klass->_2).typeHierarchyDepth < bVar2) ||
             ((pUVar33->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar33);
          }
          pUVar34 = UnityEngine_Component__GetComponent_object_
                              (pUVar33,(MethodInfo_6651A0 *)
                                       MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
          if (pUVar34 == (UnityEngine_UI_LayoutElement_o *)0x0) {
            ThrowNullReferenceException();
          }
          (*(pUVar34->klass->vtable)._36_set_preferredWidth.methodPtr)
                    (pUVar34,fVar40,(pUVar34->klass->vtable)._36_set_preferredWidth.method);
        }
        il2cpp_runtime_helper_1806aa210(&local_1c8.fields.value);
        pSVar35 = (SimpleJSONFixed_JSONNode_o *)(ulonglong)(index + 1);
        cVar16 = local_res10[0].hasValue;
      }
      ThrowNullReferenceException();
    }
    if (local_1f0.klass == (SimpleJSONFixed_JSONNode_c *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar8 = ((local_1f0.klass)->_1).image;
    uVar3 = (pIVar8->_2).interface_offsets_count;
    if (uVar3 != 0) {
      pIVar9 = (pIVar8->_1).interfaceOffsets;
      do {
        if (pIVar9[uVar38].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar32 = (VirtualInvokeData *)&pIVar8->vtable[pIVar9[uVar38].offset + 1].methodPtr;
          goto label_18228c7f5;
        }
        uVar38 = uVar38 + 1;
      } while (uVar38 < uVar3);
    }
    pVVar32 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)local_1f0.klass,
                         (Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_18228c7f5:
    pUVar33 = (UnityEngine_Component_o *)(*pVVar32->methodPtr)((Il2CppObject *)pSVar13,pVVar32->method);
    if (pUVar33 == (UnityEngine_Component_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
    if (((pUVar33->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pUVar33->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar33);
    }
    pUVar34 = UnityEngine_Component__GetComponent_object_
                        (pUVar33,(MethodInfo_6651A0 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    if (pUVar34 == (UnityEngine_UI_LayoutElement_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar34->klass->vtable)._36_set_preferredWidth.methodPtr)
              (pUVar34,fVar40,(pUVar34->klass->vtable)._36_set_preferredWidth.method);
  } while( true );
}


// UI.LeaderboardDefaultPanel$$CreateRank
// il2cpp: void UI_LeaderboardDefaultPanel__CreateRank (UI_LeaderboardDefaultPanel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, int32_t rank, const MethodInfo* method);
// 0x18228aad0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18228abfa: mov r9, qword ptr [rip + 0x1e39747]  ; "BadgeColor"
// asm:   0x18228ac01: jmp 0x18228ac9d
// asm:   0x18228ac9a: mov r9, r14

void UI_LeaderboardDefaultPanel__CreateRank
               (UI_LeaderboardDefaultPanel_o *__this,UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
               int32_t rank,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_UI_RawImage_o *pUVar2;
  System_String_o *panel;
  UnityEngine_Color_o *pUVar3;
  System_String_o *pSVar4;
  int32_t local_res20 [2];
  UnityEngine_Color_Fields local_28;
  
  local_res20[0] = rank;
  if (Il2CppMethodInitialized_184347423 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"Trophy");
    il2cpp_codegen_initialize_runtime_metadata(&"Rank");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Quests/TrophyIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"BadgeColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Quests/Badge1Icon");
    Il2CppMethodInitialized_184347423 = '\x01';
  }
  if (local_res20[0] < 4) {
    pUVar1 = UI_ElementFactory__CreateRawImage(parent,style,"Icons/Quests/TrophyIcon",32.0,32.0,(MethodInfo *)0x0)
    ;
    if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_18228ad2b;
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar1,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    panel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pSVar4 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_1969b70
                       ("Trophy",pSVar4,"Color",(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
  }
  else {
    if (10 < local_res20[0]) goto label_18228ace8;
    pUVar1 = UI_ElementFactory__CreateRawImage(parent,style,"Icons/Quests/Badge1Icon",32.0,32.0,(MethodInfo *)0x0)
    ;
    if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_18228ad2b;
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar1,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    panel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pSVar4 = "BadgeColor";
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      pSVar4 = "BadgeColor";
    }
  }
  pUVar3 = UI_UIManager__GetThemeColor
                     ((UnityEngine_Color_o *)&local_28,panel,"Rank",pSVar4,
                      "DefaultPanel",(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_UI_RawImage_o *)0x0) {
label_18228ad2b:
    ThrowNullReferenceException();
  }
  local_28.r = (pUVar3->fields).r;
  local_28.g = (pUVar3->fields).g;
  local_28.b = (pUVar3->fields).b;
  local_28.a = (pUVar3->fields).a;
  (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
            (pUVar2,(UnityEngine_Color_o *)&local_28,(pUVar2->klass->vtable)._23_set_color.method);
label_18228ace8:
  pSVar4 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(parent,style,pSVar4,0,4,(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardDefaultPanel$$OnButtonClick
// il2cpp: void UI_LeaderboardDefaultPanel__OnButtonClick (UI_LeaderboardDefaultPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x180547020

void
UI_LeaderboardDefaultPanel__OnButtonClick(UI_LeaderboardDefaultPanel_o* __this, System_String_o* name, MethodInfo* method)

{
  return;
}


// UI.LeaderboardDefaultPanel$$GetCategoryNames
// il2cpp: System_String_array* UI_LeaderboardDefaultPanel__GetCategoryNames (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x18228b140
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18228b27d: nop dword ptr [rax]
// asm:   0x18228b369: jmp 0x18228b370

System_String_array *
UI_LeaderboardDefaultPanel__GetCategoryNames(UI_LeaderboardDefaultPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *__this_00;
  undefined8 *puVar6;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_Xml_Schema_XmlSchema_o *d;
  System_String_o *pSVar9;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar10;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  undefined1 local_68 [96];
  
  if (Il2CppMethodInitialized_184347424 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_PastebinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&"CategoryName");
    Il2CppMethodInitialized_184347424 = '\x01';
  }
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_ApplicationManagers_PastebinLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_PastebinLoader);
  }
  pSVar8 = TypeInfo_ApplicationManagers_PastebinLoader->static_fields->Leaderboard;
  if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_18228b390:
    ThrowNullReferenceException();
  }
  puVar6 = (undefined8 *)(*(pSVar8->klass->vtable)._32_unknown.methodPtr)(local_68);
  local_d8._0_8_ = *puVar6;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar6[1];
  local_d8.m_Object.fields._8_8_ = puVar6[2];
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar6[3];
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar6[4];
  local_d8.m_Object.fields._32_8_ = puVar6[5];
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar6[6];
  local_d8.m_Array.fields._8_8_ = puVar6[7];
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar6[8];
  bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                    ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
  if (bVar5) {
    do {
      pSVar7 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                         (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
      pSVar9 = (pSVar7->fields).key;
      pSVar8 = (pSVar7->fields).value;
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      local_88.fields.key = pSVar9;
      local_88.fields.value = pSVar8;
      pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_88,(MethodInfo *)0x0);
      if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18228b390;
      d = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)(pSVar8,(MethodInfo *)"CategoryName");
      pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                         ((SimpleJSONFixed_JSONNode_o *)d,(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_18228b390;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 == (System_String_array *)0x0) goto label_18228b390;
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar2] = pSVar9;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar9);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar9,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
    } while (bVar5);
  }
  else if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_18228b390;
  pUVar10 = System_Collections_Generic_List_object___ToArray
                      ((System_Collections_Generic_List_T__o *)__this_00,
                       (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
  return (System_String_array *)pUVar10;
}


// UI.LeaderboardDefaultPanel$$GetSubcategoryNames
// il2cpp: System_String_array* UI_LeaderboardDefaultPanel__GetSubcategoryNames (UI_LeaderboardDefaultPanel_o* __this, SimpleJSONFixed_JSONNode_o* category, const MethodInfo* method);
// 0x18228b3a0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18228b4e2: nop dword ptr [rax]
// asm:   0x18228b4e6: nop word ptr [rax + rax]
// asm:   0x18228b5d9: jmp 0x18228b5e0

System_String_array *
UI_LeaderboardDefaultPanel__GetSubcategoryNames
          (UI_LeaderboardDefaultPanel_o *__this,SimpleJSONFixed_JSONNode_o *category,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *__this_00;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  undefined8 *puVar7;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  System_String_o *pSVar10;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar11;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  undefined1 local_68 [96];
  
  if (Il2CppMethodInitialized_184347425 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"SubcategoryName");
    il2cpp_codegen_initialize_runtime_metadata(&"Subcategories");
    Il2CppMethodInitialized_184347425 = '\x01';
  }
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((category != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pSVar6 = (*(category->klass->vtable)._7_get_Item.methodPtr)
                         (category,(MethodInfo *)"Subcategories"),
     pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
    puVar7 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar6->klass)->vtable[32].methodPtr)(local_68);
    local_d8._0_8_ = *puVar7;
    local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar7[1];
    local_d8.m_Object.fields._8_8_ = puVar7[2];
    local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar7[3];
    local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar7[4];
    local_d8.m_Object.fields._32_8_ = puVar7[5];
    local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar7[6];
    local_d8.m_Array.fields._8_8_ = puVar7[7];
    local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar7[8];
    bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
    if (bVar5) {
      do {
        pSVar8 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
        pSVar10 = (pSVar8->fields).key;
        pSVar9 = (pSVar8->fields).value;
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        local_88.fields.key = pSVar10;
        local_88.fields.value = pSVar9;
        pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_88,(MethodInfo *)0x0);
        if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18228b608;
        pSVar6 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)(pSVar9,(MethodInfo *)"SubcategoryName");
        pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                            ((SimpleJSONFixed_JSONNode_o *)pSVar6,(MethodInfo *)0x0);
        pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_18228b608;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_00->fields)._items;
        if (pSVar3 == (System_String_array *)0x0) goto label_18228b608;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          if ((uint)pSVar3->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pSVar3->m_Items[(int)uVar2] = pSVar10;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar10);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar10,
                     (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
      } while (bVar5);
    }
    else if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_18228b608;
    pUVar11 = System_Collections_Generic_List_object___ToArray
                        ((System_Collections_Generic_List_T__o *)__this_00,
                         (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    return (System_String_array *)pUVar11;
  }
label_18228b608:
  ThrowNullReferenceException();
}


// UI.LeaderboardDefaultPanel$$FindCategory
// il2cpp: SimpleJSONFixed_JSONNode_o* UI_LeaderboardDefaultPanel__FindCategory (UI_LeaderboardDefaultPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18228ad40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18228aebc: mov rax, rbx

SimpleJSONFixed_JSONNode_o *
UI_LeaderboardDefaultPanel__FindCategory
          (UI_LeaderboardDefaultPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  undefined8 *puVar3;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_Xml_Schema_XmlSchema_o *a;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  undefined1 local_68 [96];
  
  if (Il2CppMethodInitialized_184347426 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_PastebinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&"CategoryName");
    Il2CppMethodInitialized_184347426 = '\x01';
  }
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  if ((TypeInfo_ApplicationManagers_PastebinLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_PastebinLoader);
  }
  pSVar5 = TypeInfo_ApplicationManagers_PastebinLoader->static_fields->Leaderboard;
  if (pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    puVar3 = (undefined8 *)(*(pSVar5->klass->vtable)._32_unknown.methodPtr)(local_68);
    local_d8._0_8_ = *puVar3;
    local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar3[1];
    local_d8.m_Object.fields._8_8_ = puVar3[2];
    local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar3[3];
    local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar3[4];
    local_d8.m_Object.fields._32_8_ = puVar3[5];
    local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar3[6];
    local_d8.m_Array.fields._8_8_ = puVar3[7];
    local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar3[8];
    while( true ) {
      bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
      if (!bVar2) {
        return (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      pSVar4 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                         (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
      pSVar1 = (pSVar4->fields).key;
      pSVar5 = (pSVar4->fields).value;
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      local_88.fields.key = pSVar1;
      local_88.fields.value = pSVar5;
      pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_88,(MethodInfo *)0x0);
      if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
      a = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)"CategoryName");
      bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                        ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)name,(MethodInfo *)0x0);
      if (bVar2) {
        return pSVar5;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.LeaderboardDefaultPanel$$FindSubcategory
// il2cpp: SimpleJSONFixed_JSONNode_o* UI_LeaderboardDefaultPanel__FindSubcategory (UI_LeaderboardDefaultPanel_o* __this, SimpleJSONFixed_JSONNode_o* category, System_String_o* subcategoryName, const MethodInfo* method);
// 0x18228aef0
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18228b01f: nop 
// asm:   0x18228b0e7: mov rax, rbx
// asm:   0x18228b117: mov r9, qword ptr [rax]
// asm:   0x18228b11a: xor edx, edx
// asm:   0x18228b11c: mov rcx, rax
// asm:   0x18228b11f: mov r8, qword ptr [r9 + 0x190]
// asm:   0x18228b126: call qword ptr [r9 + 0x188]  ; vtable slot 5
// asm:   0x18228b12d: jmp 0x18228b0ea

SimpleJSONFixed_JSONNode_o *
UI_LeaderboardDefaultPanel__FindSubcategory
          (UI_LeaderboardDefaultPanel_o *__this,SimpleJSONFixed_JSONNode_o *category,
          System_String_o *subcategoryName,MethodInfo *method)

{
  _func_24 *p_Var1;
  System_String_o *pSVar2;
  bool bVar3;
  System_Xml_Schema_XmlSchema_o *pSVar4;
  undefined8 *puVar5;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  undefined1 local_68 [96];
  
  if (Il2CppMethodInitialized_184347427 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"SubcategoryName");
    il2cpp_codegen_initialize_runtime_metadata(&"Subcategories");
    Il2CppMethodInitialized_184347427 = '\x01';
  }
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  if ((category != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pSVar4 = (*(category->klass->vtable)._7_get_Item.methodPtr)
                         (category,(MethodInfo *)"Subcategories"),
     pSVar4 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
    pSVar4 = (*(pSVar4->klass->vtable)._11_get_NameAttribute.methodPtr)
                       (pSVar4,(pSVar4->klass->vtable)._11_get_NameAttribute.method);
    p_Var1 = (category->klass->vtable)._7_get_Item.methodPtr;
    if ((int)pSVar4 == 1) {
      pSVar4 = (*p_Var1)(category,(MethodInfo *)"Subcategories");
      if (pSVar4 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        pSVar7 = (SimpleJSONFixed_JSONNode_o *)
                 (*(pSVar4->klass->vtable)._5_OnRemove.methodPtr)
                           (pSVar4,(System_Type_o *)0x0,(pSVar4->klass->vtable)._5_OnRemove.method);
        return pSVar7;
      }
    }
    else {
      pSVar4 = (*p_Var1)(category,(MethodInfo *)"Subcategories");
      if (pSVar4 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        puVar5 = (undefined8 *)(**(code **)&((Il2CppClass *)pSVar4->klass)->vtable[32].methodPtr)(local_68);
        local_d8._0_8_ = *puVar5;
        local_d8.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar5[1];
        local_d8.m_Object.fields._8_8_ = puVar5[2];
        local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar5[3];
        local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar5[4];
        local_d8.m_Object.fields._32_8_ = puVar5[5];
        local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar5[6];
        local_d8.m_Array.fields._8_8_ = puVar5[7];
        local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar5[8];
        while( true ) {
          bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
          if (!bVar3) {
            return (SimpleJSONFixed_JSONNode_o *)0x0;
          }
          pSVar6 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
          pSVar2 = (pSVar6->fields).key;
          pSVar7 = (pSVar6->fields).value;
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          local_88.fields.key = pSVar2;
          local_88.fields.value = pSVar7;
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_88,(MethodInfo *)0x0);
          if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
          bVar3 = (*(pSVar7->klass->vtable)._28_HasKey.methodPtr)(pSVar7,(MethodInfo *)"SubcategoryName");
          if (bVar3) {
            pSVar4 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar7,(MethodInfo *)"SubcategoryName");
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            bVar3 = SimpleJSONFixed_JSONNode__op_Equality
                              ((SimpleJSONFixed_JSONNode_o *)pSVar4,(Il2CppObject *)subcategoryName,
                               (MethodInfo *)0x0);
            if (bVar3) {
              return pSVar7;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.LeaderboardDefaultPanel$$.ctor
// il2cpp: void UI_LeaderboardDefaultPanel___ctor (UI_LeaderboardDefaultPanel_o* __this, const MethodInfo* method);
// 0x181da8ae0

void
UI_LeaderboardDefaultPanel___ctor(UI_LeaderboardDefaultPanel_o* __this, MethodInfo* method)

{
  UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}


