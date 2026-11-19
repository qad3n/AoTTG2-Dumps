// Type: GameManagers.CharacterEditorGameManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/CharacterEditorGameManager.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/CharacterEditorGameManager.cs
// --------------------------------

// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__10$$.ctor
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10___ctor (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x59260f0

void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10___ctor
               (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__10$$System.IDisposable.Dispose
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10__System_IDisposable_Dispose (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x5926410

void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10__System_IDisposable_Dispose
               (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o *__this,
               MethodInfo *method)

{
  uint uVar1;
  
  uVar1 = (__this->fields).__1__state + 3;
  if ((0x11 < uVar1) || ((0x30001U >> (uVar1 & 0x1f) & 1) == 0)) {
    return;
  }
  if (Il2CppMethodInitialized_07545786 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
    Il2CppMethodInitialized_07545786 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap3,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__10$$MoveNext
// il2cpp: bool GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10__MoveNext (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x5926470
// eh: try 0x5926665..0x592800d -> pad 0x5928338 (+218 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5928354..0x5928359 -> pad 0x5928374 cleanup
// eh: try 0x5928377..0x5928381 -> pad 0x5928389 catch (...) [compiler noexcept guard]
// asm: 247 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592800d: mov rbx, rax
// asm:   0x5928010: jmp 0x592833f
// asm:   0x5928015: mov rbx, rax
// asm:   0x5928018: jmp 0x592833f
// asm:   0x592801d: mov rbx, rax
// asm:   0x5928020: jmp 0x592833f
// asm:   0x5928025: jmp 0x592833c
// asm:   0x592802a: jmp 0x592833c
// asm:   0x592802f: mov rbx, rax
// asm:   0x5928032: jmp 0x592833f
// asm:   0x5928037: mov rbx, rax
// asm:   0x592803a: jmp 0x592833f
// asm:   0x592803f: mov rbx, rax
// asm:   0x5928042: jmp 0x592833f
// asm:   0x5928047: mov rbx, rax
// asm:   0x592804a: jmp 0x592833f
// asm:   0x592804f: mov rbx, rax
// asm:   0x5928052: jmp 0x592833f
// asm:   0x5928057: jmp 0x592833c
// asm:   0x592805c: jmp 0x592833c
// asm:   0x5928061: mov rbx, rax
// asm:   0x5928064: jmp 0x592833f
// asm:   0x5928069: jmp 0x592833c
// asm:   0x592806e: jmp 0x592833c
// asm:   0x5928073: mov rbx, rax
// asm:   0x5928076: jmp 0x592833f
// asm:   0x592807b: jmp 0x592833c
// asm:   0x5928080: jmp 0x592833c
// asm:   0x5928085: mov rbx, rax
// asm:   0x5928088: jmp 0x592833f
// asm:   0x592808d: mov rbx, rax
// asm:   0x5928090: jmp 0x592833f
// asm:   0x5928095: mov rbx, rax
// asm:   0x5928098: jmp 0x592833f
// asm:   0x592809d: mov rbx, rax
// asm:   0x59280a0: jmp 0x592833f
// asm:   0x59280a5: jmp 0x592833c
// asm:   0x59280aa: jmp 0x592833c
// asm:   0x59280af: jmp 0x592833c
// asm:   0x59280b4: mov rbx, rax
// asm:   0x59280b7: jmp 0x592833f
// asm:   0x59280bc: jmp 0x592833c
// asm:   0x59280c1: jmp 0x592833c
// asm:   0x59280c6: mov rbx, rax
// asm:   0x59280c9: jmp 0x592833f
// asm:   0x59280ce: jmp 0x592833c
// asm:   0x59280d3: mov rbx, rax
// asm:   0x59280d6: jmp 0x592833f
// asm:   0x59280db: mov rbx, rax
// asm:   0x59280de: jmp 0x592833f
// asm:   0x59280e3: mov rbx, rax
// asm:   0x59280e6: jmp 0x592833f
// asm:   0x59280eb: mov rbx, rax
// asm:   0x59280ee: jmp 0x592833f
// asm:   0x59280f3: mov rbx, rax
// asm:   0x59280f6: jmp 0x592833f
// asm:   0x59280fb: mov rbx, rax
// asm:   0x59280fe: jmp 0x592833f
// asm:   0x5928103: mov rbx, rax
// asm:   0x5928106: jmp 0x592833f
// asm:   0x592810b: mov rbx, rax
// asm:   0x592810e: jmp 0x592833f
// asm:   0x5928113: mov rbx, rax
// asm:   0x5928116: jmp 0x592833f
// asm:   0x592811b: mov rbx, rax
// asm:   0x592811e: jmp 0x592833f
// asm:   0x5928123: mov rbx, rax
// asm:   0x5928126: jmp 0x592833f
// asm:   0x592812b: mov rbx, rax
// asm:   0x592812e: jmp 0x592833f
// asm:   0x5928133: jmp 0x592833c
// asm:   0x5928138: mov rbx, rax
// asm:   0x592813b: jmp 0x592833f
// asm:   0x5928140: mov rbx, rax
// asm:   0x5928143: jmp 0x592833f
// asm:   0x5928148: mov rbx, rax
// asm:   0x592814b: jmp 0x592833f
// asm:   0x5928150: jmp 0x592833c
// asm:   0x5928155: jmp 0x592833c
// asm:   0x592815a: jmp 0x592833c
// asm:   0x592815f: mov rbx, rax
// asm:   0x5928162: jmp 0x592833f
// asm:   0x5928167: mov rbx, rax
// asm:   0x592816a: jmp 0x592833f
// asm:   0x592816f: mov rbx, rax
// asm:   0x5928172: jmp 0x592833f
// asm:   0x5928177: mov rbx, rax
// asm:   0x592817a: jmp 0x592833f
// asm:   0x592817f: jmp 0x592833c
// asm:   0x5928184: jmp 0x592833c
// asm:   0x5928189: mov rbx, rax
// asm:   0x592818c: jmp 0x592833f
// asm:   0x5928191: mov rbx, rax
// asm:   0x5928194: jmp 0x592833f
// asm:   0x5928199: mov rbx, rax
// asm:   0x592819c: jmp 0x592833f
// asm:   0x59281a1: mov rbx, rax
// asm:   0x59281a4: jmp 0x592833f
// asm:   0x59281a9: mov rbx, rax
// asm:   0x59281ac: jmp 0x592833f
// asm:   0x59281b1: mov rbx, rax
// asm:   0x59281b4: jmp 0x592833f
// asm:   0x59281b9: jmp 0x592833c
// asm:   0x59281be: mov rbx, rax
// asm:   0x59281c1: jmp 0x592833f
// asm:   0x59281c6: mov rbx, rax
// asm:   0x59281c9: jmp 0x592833f
// asm:   0x59281ce: mov rbx, rax
// asm:   0x59281d1: jmp 0x592833f
// asm:   0x59281d6: mov rbx, rax
// asm:   0x59281d9: jmp 0x592833f
// asm:   0x59281de: jmp 0x592833c
// asm:   0x59281e3: jmp 0x592833c
// asm:   0x59281e8: jmp 0x592833c
// asm:   0x59281ed: jmp 0x592833c
// asm:   0x59281f2: jmp 0x592833c
// asm:   0x59281f7: mov rbx, rax
// asm:   0x59281fa: jmp 0x592833f
// asm:   0x59281ff: mov rbx, rax
// asm:   0x5928202: jmp 0x592833f
// asm:   0x5928207: jmp 0x592833c
// asm:   0x592820c: jmp 0x592833c
// asm:   0x5928211: mov rbx, rax
// asm:   0x5928214: jmp 0x592833f
// asm:   0x5928219: mov rbx, rax
// asm:   0x592821c: jmp 0x592833f
// asm:   0x5928221: jmp 0x592833c
// asm:   0x5928226: jmp 0x592833c
// asm:   0x592822b: mov rbx, rax
// asm:   0x592822e: jmp 0x592833f
// asm:   0x5928233: mov rbx, rax
// asm:   0x5928236: jmp 0x592833f
// asm:   0x592823b: mov rbx, rax
// asm:   0x592823e: jmp 0x592833f
// asm:   0x5928243: jmp 0x592833c
// asm:   0x5928248: jmp 0x592833c
// asm:   0x592824d: mov rbx, rax
// asm:   0x5928250: jmp 0x592833f
// asm:   0x5928255: mov rbx, rax
// asm:   0x5928258: jmp 0x592833f
// asm:   0x592825d: mov rbx, rax
// asm:   0x5928260: jmp 0x592833f
// asm:   0x5928265: mov rbx, rax
// asm:   0x5928268: jmp 0x592833f
// asm:   0x592826d: mov rbx, rax
// asm:   0x5928270: jmp 0x592833f
// asm:   0x5928275: mov rbx, rax
// asm:   0x5928278: jmp 0x592833f
// asm:   0x592827d: jmp 0x592833c
// asm:   0x5928282: jmp 0x592833c
// asm:   0x5928287: jmp 0x592833c
// asm:   0x592828c: mov rbx, rax
// asm:   0x592828f: jmp 0x592833f
// asm:   0x5928294: jmp 0x592833c
// asm:   0x5928299: mov rbx, rax
// asm:   0x592829c: jmp 0x592833f
// asm:   0x59282a1: mov rbx, rax
// asm:   0x59282a4: jmp 0x592833f
// asm:   0x59282a9: mov rbx, rax
// asm:   0x59282ac: jmp 0x592833f
// asm:   0x59282b1: jmp 0x592833c
// asm:   0x59282b6: jmp 0x592833c
// asm:   0x59282bb: jmp 0x592833c
// asm:   0x59282bd: jmp 0x592833c
// asm:   0x59282bf: jmp 0x592833c
// asm:   0x59282c1: jmp 0x592833c
// asm:   0x59282c3: jmp 0x592833c
// asm:   0x59282c5: jmp 0x592833c
// asm:   0x59282c7: jmp 0x592833c
// asm:   0x59282c9: jmp 0x592833c
// asm:   0x59282cb: jmp 0x592833c
// asm:   0x59282cd: jmp 0x592833c
// asm:   0x59282cf: jmp 0x592833c
// asm:   0x59282d1: jmp 0x592833c
// asm:   0x59282d3: jmp 0x592833c
// asm:   0x59282d5: jmp 0x592833c
// asm:   0x59282d7: jmp 0x592833c
// asm:   0x59282d9: jmp 0x592833c
// asm:   0x59282db: jmp 0x592833c
// asm:   0x59282dd: jmp 0x592833c
// asm:   0x59282df: jmp 0x592833c
// asm:   0x59282e1: jmp 0x592833c
// asm:   0x59282e3: jmp 0x592833c
// asm:   0x59282e5: jmp 0x592833c
// asm:   0x59282e7: jmp 0x592833c
// asm:   0x59282e9: jmp 0x592833c
// asm:   0x59282eb: mov rbx, rax
// asm:   0x59282ee: jmp 0x592833f
// asm:   0x59282f0: jmp 0x592833c
// asm:   0x59282f2: jmp 0x592833c
// asm:   0x59282f4: jmp 0x592833c
// asm:   0x59282f6: jmp 0x592833c
// asm:   0x59282f8: jmp 0x592833c
// asm:   0x59282fa: jmp 0x592833c
// asm:   0x59282fc: jmp 0x592833c
// asm:   0x59282fe: jmp 0x592833c
// asm:   0x5928300: jmp 0x592833c
// asm:   0x5928302: jmp 0x592833c
// asm:   0x5928304: jmp 0x592833c
// asm:   0x5928306: jmp 0x592833c
// asm:   0x5928308: jmp 0x592833c
// asm:   0x592830a: jmp 0x592833c
// asm:   0x592830c: jmp 0x592833c
// asm:   0x592830e: jmp 0x592833c
// asm:   0x5928310: jmp 0x592833c
// asm:   0x5928312: jmp 0x592833c
// asm:   0x5928314: jmp 0x592833c
// asm:   0x5928316: jmp 0x592833c
// asm:   0x5928318: jmp 0x592833c
// asm:   0x592831a: jmp 0x592833c
// asm:   0x592831c: jmp 0x592833c
// asm:   0x592831e: jmp 0x592833c
// asm:   0x5928320: jmp 0x592833c
// asm:   0x5928322: jmp 0x592833c
// asm:   0x5928324: jmp 0x592833c
// asm:   0x5928326: jmp 0x592833c
// asm:   0x5928328: jmp 0x592833c
// asm:   0x592832a: jmp 0x592833c
// asm:   0x592832c: jmp 0x592833c
// asm:   0x592832e: jmp 0x592833c
// asm:   0x5928330: jmp 0x592833c
// asm:   0x5928332: jmp 0x592833c
// asm:   0x5928334: jmp 0x592833c
// asm:   0x5928336: jmp 0x592833c
// asm:   0x5928338: jmp 0x592833c
// asm:   0x592833a: jmp 0x592833c
// asm:   0x592833c: mov rbx, rax
// asm:   0x592833f: cmp edx, 1
// asm:   0x5928342: jne 0x5928377
// asm:   0x5928344: mov rdi, rbx
// asm:   0x5928347: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x592834c: mov rbx, qword ptr [rax]
// asm:   0x592834f: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5928354: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5928359: test rbx, rbx
// asm:   0x592835c: je 0x5927d19
// asm:   0x5928362: mov rdi, qword ptr [rsp + 8]
// asm:   0x5928367: call 0x2fd3060  ; il2cpp_runtime_helper_02fd3060()
// asm:   0x592836c: mov rdi, rbx
// asm:   0x592836f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5928374: mov rbx, rax
// asm:   0x5928377: lea rdi, [rsp + 0x10]
// asm:   0x592837c: call 0x2fd2b00  ; il2cpp_runtime_helper_02fd2b00()
// asm:   0x5928381: mov rdi, rbx
// asm:   0x5928384: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5928389: mov rdi, rax
// asm:   0x592838c: call 0x2ab61e0  ; __clang_call_terminate()

bool GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10__MoveNext
               (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o *__this,
               MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint32_t uVar4;
  GameManagers_CharacterEditorGameManager_o *pGVar5;
  Settings_StringSetting_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  Settings_HumanCustomSettings_o *pSVar8;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar9;
  Settings_ListSetting_T__o *obj;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  Characters_DummyHuman_o *pCVar11;
  Characters_HumanSetup_o *pCVar12;
  Settings_HumanCustomSet_c *pSVar13;
  GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o *pGVar14;
  bool bVar15;
  Settings_HumanCustomSet_o *pSVar16;
  System_String_o *pSVar17;
  UnityEngine_Transform_o *pUVar18;
  VirtualInvokeData *pVVar19;
  UnityEngine_WaitForSeconds_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  Il2CppObject *pIVar20;
  ulong uVar21;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  int iVar22;
  int32_t iVar23;
  System_String_o **__this_02;
  GameManagers_CharacterEditorGameManager_o *pGVar24;
  Il2CppClass *pIVar25;
  long lVar26;
  UnityEngine_Quaternion_o value;
  GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o *pGStack_60;
  undefined8 uStack_58;
  GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o **ppGStack_50;
  System_Collections_Generic_List_T__o *pSStack_48;
  undefined8 uStack_40;
  Settings_BaseSetting_o *pSStack_38;
  System_Collections_Generic_List_Enumerator_T__o SStack_30;
  
  __this_02 = (System_String_o **)__this;
  pGStack_60 = __this;
  if (Il2CppMethodInitialized_07545785 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IListSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"BackNone");
    il2cpp_codegen_initialize_runtime_metadata(&"CostumeM");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"CostumeF");
    il2cpp_codegen_initialize_runtime_metadata(&"PresetNone");
    il2cpp_codegen_initialize_runtime_metadata(&"HatNone");
    il2cpp_codegen_initialize_runtime_metadata(&"Face");
    il2cpp_codegen_initialize_runtime_metadata(&"HairM8");
    il2cpp_codegen_initialize_runtime_metadata(&"Head");
    il2cpp_codegen_initialize_runtime_metadata(&"Glass");
    il2cpp_codegen_initialize_runtime_metadata(&"HairF");
    il2cpp_codegen_initialize_runtime_metadata(&"HeadNone");
    il2cpp_codegen_initialize_runtime_metadata(&"HairF7");
    il2cpp_codegen_initialize_runtime_metadata(&"GlassNone");
    il2cpp_codegen_initialize_runtime_metadata(&"Eye");
    il2cpp_codegen_initialize_runtime_metadata(&"FaceNone");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset");
    il2cpp_codegen_initialize_runtime_metadata(&"HairM10");
    il2cpp_codegen_initialize_runtime_metadata(&"Hat");
    __this_02 = &"HairM";
    il2cpp_codegen_initialize_runtime_metadata(&"HairM");
    Il2CppMethodInitialized_07545785 = '\x01';
    in_RDX = extraout_RDX;
  }
  uStack_58 = 0;
  ppGStack_50 = &pGStack_60;
  uVar3 = (__this->fields).__1__state;
  if (0xe < uVar3) {
    return false;
  }
  pGVar5 = (__this->fields).__4__this;
  switch(uVar3) {
  case 0:
    (__this->fields).__1__state = -1;
    pSVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_HumanCustomSet);
    Settings_HumanCustomSet___ctor(pSVar16,(MethodInfo *)0x0);
    (pGStack_60->fields)._set_5__2 = pSVar16;
    Il2CppCodeGenWriteBarrier(&(pGStack_60->fields)._set_5__2);
    pSVar16 = (pGStack_60->fields)._set_5__2;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = (pSVar16->fields).Hair;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)"HairM8",
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar16 = (pGStack_60->fields)._set_5__2;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar7 = (pSVar16->fields).Costume;
    if (pSVar7 == (Settings_IntSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar7,1,
               (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    (pGStack_60->fields)._i_5__3 = 0;
    iVar22 = 0;
    uVar4 = (TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor;
    goto joined_r0x05926eaa;
  case 1:
    (__this->fields).__1__state = -1;
    pSVar17 = System_Int32__ToString(&(__this->fields)._i_5__3,(MethodInfo *)0x0);
    pGVar24 = (GameManagers_CharacterEditorGameManager_o *)"Eye";
    pSVar17 = System_String__Concat_52f0320("Eye",pSVar17,(MethodInfo *)0x0);
    if (pGVar5 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot(pGVar24,870.0,500.0,172.0,172.0,pSVar17,method_03);
    iVar22 = (pGStack_60->fields)._i_5__3 + 1;
    (pGStack_60->fields)._i_5__3 = iVar22;
    uVar4 = (TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor;
joined_r0x05926eaa:
    if (uVar4 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    }
    pSVar16 = (pGStack_60->fields)._set_5__2;
    if (iVar22 < TypeInfo_Characters_HumanSetup->static_fields->EyeCount) {
      if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar7 = (pSVar16->fields).Eye;
      if (pSVar7 == (Settings_IntSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar7,(pGStack_60->fields)._i_5__3,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      if (pGVar5 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      pCVar11 = (pGVar5->fields).Human;
      if (pCVar11 == (Characters_DummyHuman_o *)0x0) {
        ThrowNullReferenceException();
      }
      pCVar12 = (pCVar11->fields).Setup;
      if (pCVar12 == (Characters_HumanSetup_o *)0x0) {
        ThrowNullReferenceException();
      }
      Characters_HumanSetup__Load(pCVar12,(pGStack_60->fields)._set_5__2,0,false,(MethodInfo *)0x0);
      pIVar20 = (Il2CppObject *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar20,(MethodInfo *)0x0);
      (pGStack_60->fields).__2__current = pIVar20;
      iVar23 = 1;
      Il2CppCodeGenWriteBarrier(&(pGStack_60->fields).__2__current);
    }
    else {
      if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar7 = (pSVar16->fields).Eye;
      if (pSVar7 == (Settings_IntSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar7,0,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      (pGStack_60->fields)._i_5__3 = -1;
      iVar22 = -1;
      uVar4 = (TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor;
joined_r0x05926bee:
      if (uVar4 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
        iVar1 = TypeInfo_Characters_HumanSetup->static_fields->FaceCount;
      }
      else {
        iVar1 = *(int *)((long)((Il2CppClass *)TypeInfo_Characters_HumanSetup)->static_fields + 0x1c);
      }
      if (iVar22 < iVar1) {
        pSVar16 = (pGStack_60->fields)._set_5__2;
        if ((pGStack_60->fields)._i_5__3 == -1) {
          if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar6 = (pSVar16->fields).Face;
          if (pSVar6 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)"FaceNone",
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        }
        else {
          if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar6 = (pSVar16->fields).Face;
          pSVar17 = System_Int32__ToString(&(pGStack_60->fields)._i_5__3,(MethodInfo *)0x0);
          pSVar17 = System_String__Concat_52f0320("Face",pSVar17,(MethodInfo *)0x0);
          if (pSVar6 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar17,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        }
        if (pGVar5 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
          ThrowNullReferenceException();
        }
        pCVar11 = (pGVar5->fields).Human;
        if (pCVar11 == (Characters_DummyHuman_o *)0x0) {
          ThrowNullReferenceException();
        }
        pCVar12 = (pCVar11->fields).Setup;
        if (pCVar12 == (Characters_HumanSetup_o *)0x0) {
          ThrowNullReferenceException();
        }
        Characters_HumanSetup__Load(pCVar12,(pGStack_60->fields)._set_5__2,0,false,(MethodInfo *)0x0);
        pIVar20 = (Il2CppObject *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar20,(MethodInfo *)0x0);
        (pGStack_60->fields).__2__current = pIVar20;
        iVar23 = 2;
        Il2CppCodeGenWriteBarrier(&(pGStack_60->fields).__2__current);
      }
      else {
        pSVar16 = (pGStack_60->fields)._set_5__2;
        if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar6 = (pSVar16->fields).Face;
        if (pSVar6 == (Settings_StringSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)"FaceNone",
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        (pGStack_60->fields)._i_5__3 = -1;
        iVar22 = -1;
        uVar4 = (TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor;
joined_r0x05926cd3:
        if (uVar4 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
          iVar1 = TypeInfo_Characters_HumanSetup->static_fields->GlassCount;
        }
        else {
          iVar1 = *(int *)((long)((Il2CppClass *)TypeInfo_Characters_HumanSetup)->static_fields + 0x20);
        }
        if (iVar22 < iVar1) {
          pSVar16 = (pGStack_60->fields)._set_5__2;
          if ((pGStack_60->fields)._i_5__3 == -1) {
            if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar6 = (pSVar16->fields).Glass;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)"GlassNone",
                       (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          }
          else {
            if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar6 = (pSVar16->fields).Glass;
            pSVar17 = System_Int32__ToString(&(pGStack_60->fields)._i_5__3,(MethodInfo *)0x0);
            pSVar17 = System_String__Concat_52f0320("Glass",pSVar17,(MethodInfo *)0x0);
            if (pSVar6 == (Settings_StringSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar17,
                       (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          }
          if (pGVar5 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
            ThrowNullReferenceException();
          }
          pCVar11 = (pGVar5->fields).Human;
          if (pCVar11 == (Characters_DummyHuman_o *)0x0) {
            ThrowNullReferenceException();
          }
          pCVar12 = (pCVar11->fields).Setup;
          if (pCVar12 == (Characters_HumanSetup_o *)0x0) {
            ThrowNullReferenceException();
          }
          Characters_HumanSetup__Load(pCVar12,(pGStack_60->fields)._set_5__2,0,false,(MethodInfo *)0x0);
          pIVar20 = (Il2CppObject *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
          UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar20,(MethodInfo *)0x0);
          (pGStack_60->fields).__2__current = pIVar20;
          iVar23 = 3;
          Il2CppCodeGenWriteBarrier(&(pGStack_60->fields).__2__current);
        }
        else {
          pSVar16 = (pGStack_60->fields)._set_5__2;
          if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar6 = (pSVar16->fields).Glass;
          if (pSVar6 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)"GlassNone",
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          (pGStack_60->fields)._i_5__3 = 0;
          iVar22 = 0;
          uVar4 = (TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor;
joined_r0x05926892:
          if (uVar4 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
            iVar1 = TypeInfo_Characters_HumanSetup->static_fields->HairMCount;
            pIVar25 = (Il2CppClass *)TypeInfo_Characters_HumanSetup;
          }
          else {
            iVar1 = *(int *)((long)((Il2CppClass *)TypeInfo_Characters_HumanSetup)->static_fields + 0x2c);
            pIVar25 = (Il2CppClass *)TypeInfo_Characters_HumanSetup;
          }
          TypeInfo_Characters_HumanSetup = (Characters_HumanSetup_c *)pIVar25;
          if (iVar22 < iVar1) {
            pSVar16 = (pGStack_60->fields)._set_5__2;
            if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar6 = (pSVar16->fields).Hair;
            pSVar17 = System_Int32__ToString(&(pGStack_60->fields)._i_5__3,(MethodInfo *)0x0);
            pSVar17 = System_String__Concat_52f0320("HairM",pSVar17,(MethodInfo *)0x0);
            if (pSVar6 == (Settings_StringSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar17,
                       (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
            if (pGVar5 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
              ThrowNullReferenceException();
            }
            pCVar11 = (pGVar5->fields).Human;
            if (pCVar11 == (Characters_DummyHuman_o *)0x0) {
              ThrowNullReferenceException();
            }
            pCVar12 = (pCVar11->fields).Setup;
            if (pCVar12 == (Characters_HumanSetup_o *)0x0) {
              ThrowNullReferenceException();
            }
            Characters_HumanSetup__Load(pCVar12,(pGStack_60->fields)._set_5__2,0,false,(MethodInfo *)0x0);
            pIVar20 = (Il2CppObject *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
            UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar20,(MethodInfo *)0x0)
            ;
            (pGStack_60->fields).__2__current = pIVar20;
            iVar23 = 4;
            Il2CppCodeGenWriteBarrier(&(pGStack_60->fields).__2__current);
          }
          else {
            (pGStack_60->fields)._i_5__3 = 0;
            iVar22 = 0;
            uVar4 = (pIVar25->_2).cctor_finished_or_no_cctor;
joined_r0x05927059:
            if (uVar4 == 0) {
              il2cpp_codegen_runtime_class_init(pIVar25);
              pIVar25 = (Il2CppClass *)TypeInfo_Characters_HumanSetup;
            }
            pSVar16 = (pGStack_60->fields)._set_5__2;
            if (iVar22 < *(int *)((long)pIVar25->static_fields + 0x30)) {
              if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar6 = (pSVar16->fields).Hair;
              pSVar17 = System_Int32__ToString(&(pGStack_60->fields)._i_5__3,(MethodInfo *)0x0);
              pSVar17 = System_String__Concat_52f0320("HairF",pSVar17,(MethodInfo *)0x0);
              if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                ThrowNullReferenceException();
              }
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar17,
                         (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
              if (pGVar5 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                ThrowNullReferenceException();
              }
              pCVar11 = (pGVar5->fields).Human;
              if (pCVar11 == (Characters_DummyHuman_o *)0x0) {
                ThrowNullReferenceException();
              }
              pCVar12 = (pCVar11->fields).Setup;
              if (pCVar12 == (Characters_HumanSetup_o *)0x0) {
                ThrowNullReferenceException();
              }
              Characters_HumanSetup__Load(pCVar12,(pGStack_60->fields)._set_5__2,0,false,(MethodInfo *)0x0);
              pIVar20 = (Il2CppObject *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
              UnityEngine_WaitForEndOfFrame___ctor
                        ((UnityEngine_WaitForEndOfFrame_o *)pIVar20,(MethodInfo *)0x0);
              (pGStack_60->fields).__2__current = pIVar20;
              iVar23 = 5;
              Il2CppCodeGenWriteBarrier(&(pGStack_60->fields).__2__current);
            }
            else {
              if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar6 = (pSVar16->fields).Hair;
              if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                ThrowNullReferenceException();
              }
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)"HairM10",
                         (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
              (pGStack_60->fields)._i_5__3 = -1;
              iVar22 = -1;
              uVar4 = (TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor;
joined_r0x05926dbb:
              if (uVar4 == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
                iVar1 = TypeInfo_Characters_HumanSetup->static_fields->HatCount;
              }
              else {
                iVar1 = *(int *)((long)((Il2CppClass *)TypeInfo_Characters_HumanSetup)->static_fields + 0x3c);
              }
              if (iVar22 < iVar1) {
                pSVar16 = (pGStack_60->fields)._set_5__2;
                if ((pGStack_60->fields)._i_5__3 == -1) {
                  if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pSVar6 = (pSVar16->fields).Hat;
                  if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  Settings_TypedSetting_object___set_Value
                            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)"HatNone",
                             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                }
                else {
                  if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pSVar6 = (pSVar16->fields).Hat;
                  pSVar17 = System_Int32__ToString(&(pGStack_60->fields)._i_5__3,(MethodInfo *)0x0);
                  pSVar17 = System_String__Concat_52f0320("Hat",pSVar17,(MethodInfo *)0x0);
                  if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  Settings_TypedSetting_object___set_Value
                            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar17,
                             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                }
                if (pGVar5 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pCVar11 = (pGVar5->fields).Human;
                if (pCVar11 == (Characters_DummyHuman_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pCVar12 = (pCVar11->fields).Setup;
                if (pCVar12 == (Characters_HumanSetup_o *)0x0) {
                  ThrowNullReferenceException();
                }
                Characters_HumanSetup__Load(pCVar12,(pGStack_60->fields)._set_5__2,0,false,(MethodInfo *)0x0);
                pIVar20 = (Il2CppObject *)
                          il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
                UnityEngine_WaitForEndOfFrame___ctor
                          ((UnityEngine_WaitForEndOfFrame_o *)pIVar20,(MethodInfo *)0x0);
                (pGStack_60->fields).__2__current = pIVar20;
                iVar23 = 7;
                Il2CppCodeGenWriteBarrier(&(pGStack_60->fields).__2__current);
              }
              else {
                pSVar16 = (pGStack_60->fields)._set_5__2;
                if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar6 = (pSVar16->fields).Hat;
                if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                  ThrowNullReferenceException();
                }
                Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)"HatNone",
                           (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                if (pGVar5 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pCVar11 = (pGVar5->fields).Human;
                if (pCVar11 == (Characters_DummyHuman_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar18 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pCVar11,(MethodInfo *)0x0);
                pSStack_48 = (System_Collections_Generic_List_T__o *)0xc0490fdb00000000;
                uStack_40 = (ulong)uStack_40._4_4_ << 0x20;
                value = UnityEngine_Quaternion__Internal_FromEulerRad
                                  ((UnityEngine_Vector3_o *)&pSStack_48,(MethodInfo *)0x0);
                if (pUVar18 == (UnityEngine_Transform_o *)0x0) {
                  ThrowNullReferenceException();
                }
                UnityEngine_Transform__set_rotation(pUVar18,value,(MethodInfo *)0x0);
                (pGStack_60->fields)._i_5__3 = -1;
                iVar22 = -1;
                uVar4 = (TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor;
joined_r0x05926b06:
                if (uVar4 == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
                  iVar1 = TypeInfo_Characters_HumanSetup->static_fields->BackCount;
                }
                else {
                  iVar1 = *(int *)((long)((Il2CppClass *)TypeInfo_Characters_HumanSetup)->static_fields + 0x34
                                  );
                }
                if (iVar22 < iVar1) {
                  pSVar16 = (pGStack_60->fields)._set_5__2;
                  if ((pGStack_60->fields)._i_5__3 == -1) {
                    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar6 = (pSVar16->fields).Back;
                    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    Settings_TypedSetting_object___set_Value
                              ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)"BackNone",
                               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                  }
                  else {
                    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar6 = (pSVar16->fields).Back;
                    pSVar17 = System_Int32__ToString(&(pGStack_60->fields)._i_5__3,(MethodInfo *)0x0);
                    pSVar17 = System_String__Concat_52f0320("Back",pSVar17,(MethodInfo *)0x0);
                    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    Settings_TypedSetting_object___set_Value
                              ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar17,
                               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                  }
                  pCVar11 = (pGVar5->fields).Human;
                  if (pCVar11 == (Characters_DummyHuman_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pCVar12 = (pCVar11->fields).Setup;
                  if (pCVar12 == (Characters_HumanSetup_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  Characters_HumanSetup__Load
                            (pCVar12,(pGStack_60->fields)._set_5__2,0,false,(MethodInfo *)0x0);
                  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
                  UnityEngine_WaitForSeconds___ctor(__this_00,1.0,(MethodInfo *)0x0);
                  (pGStack_60->fields).__2__current = (Il2CppObject *)__this_00;
                  iVar23 = 8;
                  Il2CppCodeGenWriteBarrier(&(pGStack_60->fields).__2__current);
                }
                else {
                  pSVar16 = (pGStack_60->fields)._set_5__2;
                  if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pSVar6 = (pSVar16->fields).Back;
                  if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  Settings_TypedSetting_object___set_Value
                            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)"BackNone",
                             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                  pCVar11 = (pGVar5->fields).Human;
                  if (pCVar11 == (Characters_DummyHuman_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar18 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)pCVar11,(MethodInfo *)0x0);
                  if (Il2CppMethodInitialized_0753e72b == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
                    Il2CppMethodInitialized_0753e72b = '\x01';
                  }
                  if (pUVar18 == (UnityEngine_Transform_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  UnityEngine_Transform__set_rotation
                            (pUVar18,(UnityEngine_Quaternion_o)
                                     *(UnityEngine_Quaternion_Fields *)
                                      TypeInfo_UnityEngine_Quaternion->static_fields,(MethodInfo *)0x0);
                  (pGStack_60->fields)._i_5__3 = -1;
                  iVar22 = -1;
                  uVar4 = (TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor;
joined_r0x059270d4:
                  if (uVar4 == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
                    iVar1 = TypeInfo_Characters_HumanSetup->static_fields->HeadCount;
                  }
                  else {
                    iVar1 = *(int *)((long)((Il2CppClass *)TypeInfo_Characters_HumanSetup)->static_fields +
                                    0x38);
                  }
                  if (iVar22 < iVar1) {
                    pSVar16 = (pGStack_60->fields)._set_5__2;
                    if ((pGStack_60->fields)._i_5__3 == -1) {
                      if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pSVar6 = (pSVar16->fields).Head;
                      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      Settings_TypedSetting_object___set_Value
                                ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)"HeadNone",
                                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                    }
                    else {
                      if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pSVar6 = (pSVar16->fields).Head;
                      pSVar17 = System_Int32__ToString(&(pGStack_60->fields)._i_5__3,(MethodInfo *)0x0);
                      pSVar17 = System_String__Concat_52f0320("Head",pSVar17,(MethodInfo *)0x0)
                      ;
                      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      Settings_TypedSetting_object___set_Value
                                ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar17,
                                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                    }
                    pCVar11 = (pGVar5->fields).Human;
                    if (pCVar11 == (Characters_DummyHuman_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pCVar12 = (pCVar11->fields).Setup;
                    if (pCVar12 == (Characters_HumanSetup_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    Characters_HumanSetup__Load
                              (pCVar12,(pGStack_60->fields)._set_5__2,0,false,(MethodInfo *)0x0);
                    pIVar20 = (Il2CppObject *)
                              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame)
                    ;
                    UnityEngine_WaitForEndOfFrame___ctor
                              ((UnityEngine_WaitForEndOfFrame_o *)pIVar20,(MethodInfo *)0x0);
                    (pGStack_60->fields).__2__current = pIVar20;
                    iVar23 = 10;
                    Il2CppCodeGenWriteBarrier(&(pGStack_60->fields).__2__current);
                  }
                  else {
                    pSVar16 = (pGStack_60->fields)._set_5__2;
                    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar6 = (pSVar16->fields).Head;
                    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    Settings_TypedSetting_object___set_Value
                              ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)"HeadNone",
                               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                    pSVar16 = (pGStack_60->fields)._set_5__2;
                    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar6 = (pSVar16->fields).Hair;
                    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    Settings_TypedSetting_object___set_Value
                              ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)"HairM8",
                               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                    (pGStack_60->fields)._i_5__3 = 0;
                    iVar22 = 0;
                    uVar4 = (TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor;
joined_r0x0592681a:
                    if (uVar4 == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
                    }
                    pSVar16 = (pGStack_60->fields)._set_5__2;
                    if (iVar22 < TypeInfo_Characters_HumanSetup->static_fields->CostumeMCount) {
                      if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pSVar7 = (pSVar16->fields).Costume;
                      if (pSVar7 == (Settings_IntSetting_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      Settings_TypedSetting_int___set_Value
                                ((Settings_TypedSetting_int__o *)pSVar7,(pGStack_60->fields)._i_5__3,
                                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                      pCVar11 = (pGVar5->fields).Human;
                      if (pCVar11 == (Characters_DummyHuman_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pCVar12 = (pCVar11->fields).Setup;
                      if (pCVar12 == (Characters_HumanSetup_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      Characters_HumanSetup__Load
                                (pCVar12,(pGStack_60->fields)._set_5__2,0,false,(MethodInfo *)0x0);
                      pIVar20 = (Il2CppObject *)
                                il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
                      UnityEngine_WaitForEndOfFrame___ctor
                                ((UnityEngine_WaitForEndOfFrame_o *)pIVar20,(MethodInfo *)0x0);
                      (pGStack_60->fields).__2__current = pIVar20;
                      iVar23 = 0xb;
                      Il2CppCodeGenWriteBarrier(&(pGStack_60->fields).__2__current);
                    }
                    else {
                      if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pSVar7 = (pSVar16->fields).Sex;
                      if (pSVar7 == (Settings_IntSetting_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      Settings_TypedSetting_int___set_Value
                                ((Settings_TypedSetting_int__o *)pSVar7,1,
                                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                      pSVar16 = (pGStack_60->fields)._set_5__2;
                      if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pSVar6 = (pSVar16->fields).Hair;
                      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      Settings_TypedSetting_object___set_Value
                                ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)"HairF7",
                                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                      (pGStack_60->fields)._i_5__3 = 0;
                      iVar22 = 0;
                      uVar4 = (TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor;
joined_r0x059269e5:
                      if (uVar4 == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
                        iVar1 = TypeInfo_Characters_HumanSetup->static_fields->CostumeFCount;
                      }
                      else {
                        iVar1 = *(int *)((long)((Il2CppClass *)TypeInfo_Characters_HumanSetup)->static_fields
                                        + 0x28);
                      }
                      if (iVar22 < iVar1) {
                        pSVar16 = (pGStack_60->fields)._set_5__2;
                        if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        pSVar7 = (pSVar16->fields).Costume;
                        if (pSVar7 == (Settings_IntSetting_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        Settings_TypedSetting_int___set_Value
                                  ((Settings_TypedSetting_int__o *)pSVar7,(pGStack_60->fields)._i_5__3,
                                   (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                        pCVar11 = (pGVar5->fields).Human;
                        if (pCVar11 == (Characters_DummyHuman_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        pCVar12 = (pCVar11->fields).Setup;
                        if (pCVar12 == (Characters_HumanSetup_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        Characters_HumanSetup__Load
                                  (pCVar12,(pGStack_60->fields)._set_5__2,0,false,(MethodInfo *)0x0);
                        pIVar20 = (Il2CppObject *)
                                  il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
                        UnityEngine_WaitForEndOfFrame___ctor
                                  ((UnityEngine_WaitForEndOfFrame_o *)pIVar20,(MethodInfo *)0x0);
                        (pGStack_60->fields).__2__current = pIVar20;
                        iVar23 = 0xc;
                        Il2CppCodeGenWriteBarrier(&(pGStack_60->fields).__2__current);
                      }
                      else {
                        pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
                        if (pSVar8 == (Settings_HumanCustomSettings_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        pSVar9 = (pSVar8->fields).Costume1Sets;
                        if (pSVar9 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        obj = (pSVar9->fields).Sets;
                        if (obj == (Settings_ListSetting_T__o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        pIVar25 = (Il2CppClass *)obj->klass;
                        uVar21 = (ulong)(pIVar25->_2).interface_offsets_count;
                        if (uVar21 != 0) {
                          pIVar10 = (pIVar25->_1).interfaceOffsets;
                          lVar26 = 0;
                          do {
                            if (*(Il2CppClass **)((long)&pIVar10->interfaceType + lVar26) ==
                                (Il2CppClass *)TypeInfo_Settings_IListSetting) {
                              pVVar19 = (VirtualInvokeData *)
                                        &pIVar25->vtable[*(int *)((long)&pIVar10->offset + lVar26) + 2].
                                         methodPtr;
                              goto label_05927bb9;
                            }
                            lVar26 = lVar26 + 0x10;
                          } while (uVar21 * 0x10 != lVar26);
                        }
                        pVVar19 = GetInterfaceInvokeDataFromVTableSlowPath
                                            ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_Settings_IListSetting
                                             ,2);
label_05927bb9:
                        __this_01 = (System_Collections_Generic_List_object__o *)
                                    (*pVVar19->methodPtr)(obj,pVVar19->method);
                        if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        System_Collections_Generic_List_object___GetEnumerator
                                  (&SStack_30,__this_01,
                                   (MethodInfo_395E050 *)
                                   MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
                        pSStack_38 = (Settings_BaseSetting_o *)SStack_30.fields._current;
                        pSStack_48 = SStack_30.fields._list;
                        uStack_40._0_4_ = SStack_30.fields._index;
                        uStack_40._4_4_ = SStack_30.fields._version;
                        (pGStack_60->fields).__7__wrap3.fields._current =
                             (Settings_BaseSetting_o *)SStack_30.fields._current;
                        (pGStack_60->fields).__7__wrap3.fields._list = SStack_30.fields._list;
                        (pGStack_60->fields).__7__wrap3.fields._index = SStack_30.fields._index;
                        (pGStack_60->fields).__7__wrap3.fields._version = SStack_30.fields._version;
                        Il2CppCodeGenWriteBarrier((void **)&(pGStack_60->fields).__7__wrap3);
                        (pGStack_60->fields).__1__state = -3;
label_05927c1a:
                        bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                           ((System_Collections_Generic_List_Enumerator_object__o *)
                                            &(pGStack_60->fields).__7__wrap3,
                                            (MethodInfo_4C45C50 *)
                                            MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext
                                           );
                        pGVar14 = pGStack_60;
                        pSVar13 = TypeInfo_Settings_HumanCustomSet;
                        if (!bVar15) {
                          if (Il2CppMethodInitialized_07545786 == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata
                                      (&
                                       MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
                                      );
                            Il2CppMethodInitialized_07545786 = '\x01';
                          }
                          (pGVar14->fields).__1__state = -1;
                          pGVar24 = (GameManagers_CharacterEditorGameManager_o *)&(pGVar14->fields).__7__wrap3
                          ;
                          System_Collections_Generic_List_Enumerator_object___Dispose
                                    ((System_Collections_Generic_List_Enumerator_object__o *)pGVar24,
                                     (MethodInfo_4C45C40 *)
                                     MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
                                    );
                          (pGStack_60->fields).__7__wrap3.fields._list =
                               (System_Collections_Generic_List_T__o *)0x0;
                          (pGStack_60->fields).__7__wrap3.fields._index = 0;
                          (pGStack_60->fields).__7__wrap3.fields._version = 0;
                          (pGStack_60->fields).__7__wrap3.fields._current = (Settings_BaseSetting_o *)0x0;
                          if (pGVar5 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          GameManagers_CharacterEditorGameManager__Screenshot
                                    (pGVar24,450.0,360.0,128.0,128.0,"PresetNone",method_04);
                          return false;
                        }
                        pSVar16 = (Settings_HumanCustomSet_o *)(pGStack_60->fields).__7__wrap3.fields._current
                        ;
                        if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
                          (pGStack_60->fields)._preset_5__5 = (Settings_HumanCustomSet_o *)0x0;
                        }
                        else {
                          bVar2 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
                          if (((pSVar16->klass->_2).typeHierarchyDepth < bVar2) ||
                             ((pSVar16->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                              (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
label_05927c8e:
                            il2cpp_codegen_raise_invalid_cast_exception(pSVar16,pSVar13);
                          }
                          (pGStack_60->fields)._preset_5__5 = pSVar16;
                          if (((pSVar16->klass->_2).typeHierarchyDepth < bVar2) ||
                             ((pSVar16->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)pSVar13))
                          goto label_05927c8e;
                        }
                        Il2CppCodeGenWriteBarrier(&(pGStack_60->fields)._preset_5__5);
                        if (pGVar5 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        pCVar11 = (pGVar5->fields).Human;
                        if (pCVar11 == (Characters_DummyHuman_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        pCVar12 = (pCVar11->fields).Setup;
                        if (pCVar12 == (Characters_HumanSetup_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        Characters_HumanSetup__Load
                                  (pCVar12,(pGStack_60->fields)._preset_5__5,0,false,(MethodInfo *)0x0);
                        pIVar20 = (Il2CppObject *)
                                  il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
                        UnityEngine_WaitForEndOfFrame___ctor
                                  ((UnityEngine_WaitForEndOfFrame_o *)pIVar20,(MethodInfo *)0x0);
                        (pGStack_60->fields).__2__current = pIVar20;
                        iVar23 = 0xd;
                        Il2CppCodeGenWriteBarrier(&(pGStack_60->fields).__2__current);
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
    break;
  case 2:
    (__this->fields).__1__state = -1;
    pSVar16 = (__this->fields)._set_5__2;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = (pSVar16->fields).Face;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (pGVar5 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)__this_02,870.0,470.0,172.0,172.0,
               (pSVar6->fields)._value,in_RDX);
    iVar22 = (pGStack_60->fields)._i_5__3 + 1;
    (pGStack_60->fields)._i_5__3 = iVar22;
    uVar4 = (TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor;
    goto joined_r0x05926bee;
  case 3:
    (__this->fields).__1__state = -1;
    pSVar16 = (__this->fields)._set_5__2;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = (pSVar16->fields).Glass;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (pGVar5 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)__this_02,870.0,500.0,172.0,172.0,
               (pSVar6->fields)._value,in_RDX);
    iVar22 = (pGStack_60->fields)._i_5__3 + 1;
    (pGStack_60->fields)._i_5__3 = iVar22;
    uVar4 = (TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor;
    goto joined_r0x05926cd3;
  case 4:
    (__this->fields).__1__state = -1;
    pSVar16 = (__this->fields)._set_5__2;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = (pSVar16->fields).Hair;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (pGVar5 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)__this_02,816.0,510.0,280.0,280.0,
               (pSVar6->fields)._value,in_RDX);
    iVar22 = (pGStack_60->fields)._i_5__3 + 1;
    (pGStack_60->fields)._i_5__3 = iVar22;
    uVar4 = (TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor;
    goto joined_r0x05926892;
  case 5:
    (__this->fields).__1__state = -1;
    pIVar20 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame)
    ;
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar20,(MethodInfo *)0x0);
    (pGStack_60->fields).__2__current = pIVar20;
    iVar23 = 6;
    Il2CppCodeGenWriteBarrier(&(pGStack_60->fields).__2__current);
    break;
  case 6:
    (__this->fields).__1__state = -1;
    pSVar16 = (__this->fields)._set_5__2;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = (pSVar16->fields).Hair;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (pGVar5 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)__this_02,816.0,510.0,280.0,280.0,
               (pSVar6->fields)._value,in_RDX);
    iVar22 = (pGStack_60->fields)._i_5__3 + 1;
    (pGStack_60->fields)._i_5__3 = iVar22;
    uVar4 = (TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor;
    pIVar25 = (Il2CppClass *)TypeInfo_Characters_HumanSetup;
    goto joined_r0x05927059;
  case 7:
    (__this->fields).__1__state = -1;
    pSVar16 = (__this->fields)._set_5__2;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = (pSVar16->fields).Hat;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (pGVar5 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)__this_02,796.0,570.0,320.0,320.0,
               (pSVar6->fields)._value,in_RDX);
    iVar22 = (pGStack_60->fields)._i_5__3 + 1;
    (pGStack_60->fields)._i_5__3 = iVar22;
    uVar4 = (TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor;
    goto joined_r0x05926dbb;
  case 8:
    (__this->fields).__1__state = -1;
    pIVar20 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame)
    ;
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar20,(MethodInfo *)0x0);
    (pGStack_60->fields).__2__current = pIVar20;
    iVar23 = 9;
    Il2CppCodeGenWriteBarrier(&(pGStack_60->fields).__2__current);
    break;
  case 9:
    (__this->fields).__1__state = -1;
    pSVar16 = (__this->fields)._set_5__2;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = (pSVar16->fields).Back;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (pGVar5 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)__this_02,776.0,300.0,360.0,360.0,
               (pSVar6->fields)._value,in_RDX);
    iVar22 = (pGStack_60->fields)._i_5__3 + 1;
    (pGStack_60->fields)._i_5__3 = iVar22;
    uVar4 = (TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor;
    goto joined_r0x05926b06;
  case 10:
    (__this->fields).__1__state = -1;
    pSVar16 = (__this->fields)._set_5__2;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = (pSVar16->fields).Head;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (pGVar5 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)__this_02,801.0,470.0,310.0,310.0,
               (pSVar6->fields)._value,in_RDX);
    iVar22 = (pGStack_60->fields)._i_5__3 + 1;
    (pGStack_60->fields)._i_5__3 = iVar22;
    uVar4 = (TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor;
    goto joined_r0x059270d4;
  case 0xb:
    (__this->fields).__1__state = -1;
    pSVar17 = System_Int32__ToString(&(__this->fields)._i_5__3,(MethodInfo *)0x0);
    pGVar24 = (GameManagers_CharacterEditorGameManager_o *)"CostumeM";
    pSVar17 = System_String__Concat_52f0320("CostumeM",pSVar17,(MethodInfo *)0x0);
    if (pGVar5 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot(pGVar24,826.0,250.0,260.0,260.0,pSVar17,method_01);
    iVar22 = (pGStack_60->fields)._i_5__3 + 1;
    (pGStack_60->fields)._i_5__3 = iVar22;
    uVar4 = (TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor;
    goto joined_r0x0592681a;
  case 0xc:
    (__this->fields).__1__state = -1;
    pSVar17 = System_Int32__ToString(&(__this->fields)._i_5__3,(MethodInfo *)0x0);
    pGVar24 = (GameManagers_CharacterEditorGameManager_o *)"CostumeF";
    pSVar17 = System_String__Concat_52f0320("CostumeF",pSVar17,(MethodInfo *)0x0);
    if (pGVar5 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot(pGVar24,826.0,250.0,260.0,260.0,pSVar17,method_02);
    iVar22 = (pGStack_60->fields)._i_5__3 + 1;
    (pGStack_60->fields)._i_5__3 = iVar22;
    uVar4 = (TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor;
    goto joined_r0x059269e5;
  case 0xd:
    (__this->fields).__1__state = -3;
    pIVar20 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame)
    ;
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar20,(MethodInfo *)0x0);
    (pGStack_60->fields).__2__current = pIVar20;
    iVar23 = 0xe;
    Il2CppCodeGenWriteBarrier(&(pGStack_60->fields).__2__current);
    break;
  case 0xe:
    (__this->fields).__1__state = -3;
    pSVar16 = (__this->fields)._preset_5__5;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = (pSVar16->fields).Name;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pGVar24 = (GameManagers_CharacterEditorGameManager_o *)"Preset";
    pSVar17 = System_String__Concat_52f0320("Preset",(pSVar6->fields)._value,(MethodInfo *)0x0);
    if (pGVar5 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    GameManagers_CharacterEditorGameManager__Screenshot(pGVar24,746.0,360.0,420.0,420.0,pSVar17,method_00);
    (pGStack_60->fields)._preset_5__5 = (Settings_HumanCustomSet_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(pGStack_60->fields)._preset_5__5);
    goto label_05927c1a;
  }
  (pGStack_60->fields).__1__state = iVar23;
  return true;
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__10$$<>m__Finally1
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10____m__Finally1 (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x59283a0

void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10____m__Finally1
               (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o *__this,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545786 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
    Il2CppMethodInitialized_07545786 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap3,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x59283e0

Il2CppObject *
GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__10$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10__System_Collections_IEnumerator_Reset (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x59283f0

void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10__System_Collections_IEnumerator_Reset
               (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o *__this,
               MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_GameManagers_CharacterEditorGameManager_GenerateHumanPreviewsCoroutine_d__10_System_Collections
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__10$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10__System_Collections_IEnumerator_get_Current (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x5928430

Il2CppObject *
GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10__System_Collections_IEnumerator_get_Current
          (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__11$$.ctor
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11___ctor (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5926110

void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11___ctor
               (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__11$$System.IDisposable.Dispose
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11__System_IDisposable_Dispose (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x5928440

void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11__System_IDisposable_Dispose
               (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o *__this,
               MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 != 3) && (iVar1 != -3)) {
    return;
  }
  if (Il2CppMethodInitialized_07545788 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    Il2CppMethodInitialized_07545788 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap3,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__11$$MoveNext
// il2cpp: bool GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11__MoveNext (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x5928490
// eh: try 0x59285c9..0x5928d60 -> pad 0x5928db8 (+64 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5928dd0..0x5928dd5 -> pad 0x5928df6 cleanup
// eh: try 0x5928df9..0x5928e03 -> pad 0x5928e0b catch (...) [compiler noexcept guard]
// asm: 65 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5928d60: jmp 0x5928db8
// asm:   0x5928d62: jmp 0x5928db8
// asm:   0x5928d64: jmp 0x5928db8
// asm:   0x5928d66: jmp 0x5928db8
// asm:   0x5928d68: jmp 0x5928db8
// asm:   0x5928d6a: jmp 0x5928db8
// asm:   0x5928d6c: jmp 0x5928db8
// asm:   0x5928d6e: jmp 0x5928db8
// asm:   0x5928d70: jmp 0x5928db8
// asm:   0x5928d72: jmp 0x5928db8
// asm:   0x5928d74: jmp 0x5928db8
// asm:   0x5928d76: jmp 0x5928db8
// asm:   0x5928d78: jmp 0x5928db8
// asm:   0x5928d7a: jmp 0x5928db8
// asm:   0x5928d7c: jmp 0x5928db8
// asm:   0x5928d7e: jmp 0x5928db8
// asm:   0x5928d80: jmp 0x5928db8
// asm:   0x5928d82: jmp 0x5928db8
// asm:   0x5928d84: jmp 0x5928db8
// asm:   0x5928d86: jmp 0x5928db8
// asm:   0x5928d88: jmp 0x5928db8
// asm:   0x5928d8a: jmp 0x5928db8
// asm:   0x5928d8c: jmp 0x5928db8
// asm:   0x5928d8e: jmp 0x5928db8
// asm:   0x5928d90: jmp 0x5928db8
// asm:   0x5928d92: jmp 0x5928db8
// asm:   0x5928d94: jmp 0x5928db8
// asm:   0x5928d96: jmp 0x5928db8
// asm:   0x5928d98: jmp 0x5928db8
// asm:   0x5928d9a: jmp 0x5928db8
// asm:   0x5928d9c: jmp 0x5928db8
// asm:   0x5928d9e: jmp 0x5928db8
// asm:   0x5928da0: jmp 0x5928db8
// asm:   0x5928da2: jmp 0x5928db8
// asm:   0x5928da4: jmp 0x5928db8
// asm:   0x5928da6: jmp 0x5928db8
// asm:   0x5928da8: jmp 0x5928db8
// asm:   0x5928daa: jmp 0x5928db8
// asm:   0x5928dac: jmp 0x5928db8
// asm:   0x5928dae: jmp 0x5928db8
// asm:   0x5928db0: jmp 0x5928db8
// asm:   0x5928db2: jmp 0x5928db8
// asm:   0x5928db4: jmp 0x5928db8
// asm:   0x5928db6: jmp 0x5928db8
// asm:   0x5928db8: mov rbx, rax
// asm:   0x5928dbb: cmp edx, 1
// asm:   0x5928dbe: jne 0x5928df9
// asm:   0x5928dc0: mov rdi, rbx
// asm:   0x5928dc3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5928dc8: mov rbx, qword ptr [rax]
// asm:   0x5928dcb: mov qword ptr [rsp + 8], rbx
// asm:   0x5928dd0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5928dd5: test rbx, rbx
// asm:   0x5928dd8: jne 0x5928de5
// asm:   0x5928de5: mov rdi, qword ptr [rsp]
// asm:   0x5928de9: call 0x2fd30c0  ; il2cpp_runtime_helper_02fd30c0()
// asm:   0x5928dee: mov rdi, rbx
// asm:   0x5928df1: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5928df6: mov rbx, rax
// asm:   0x5928df9: lea rdi, [rsp + 8]
// asm:   0x5928dfe: call 0x2fd2b20  ; il2cpp_runtime_helper_02fd2b20()
// asm:   0x5928e03: mov rdi, rbx
// asm:   0x5928e06: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5928e0b: mov rdi, rax
// asm:   0x5928e0e: call 0x2ab61e0  ; __clang_call_terminate()

bool GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11__MoveNext
               (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o *__this,
               MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint32_t uVar4;
  GameManagers_CharacterEditorGameManager_o *__this_00;
  Settings_TitanCustomSettings_o *pSVar5;
  Settings_SetSettingsContainer_TitanCustomSet__o *__this_01;
  System_Collections_Generic_List_string__o *__this_02;
  Settings_StringSetting_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  Settings_TitanCustomSet_c *pSVar8;
  GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o *pGVar9;
  bool bVar10;
  Settings_TitanCustomSet_o *pSVar11;
  System_String_o *pSVar12;
  Il2CppObject *pIVar13;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  int iVar14;
  int32_t iVar15;
  System_String_o **__this_03;
  GameManagers_CharacterEditorGameManager_o *pGVar16;
  GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o *pGStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  System_Collections_Generic_List_Enumerator_T__o SStack_50;
  System_Collections_Generic_List_T__o *pSStack_38;
  int32_t iStack_30;
  int32_t iStack_2c;
  System_String_o *pSStack_28;
  
  __this_03 = (System_String_o **)__this;
  pGStack_68 = __this;
  if (Il2CppMethodInitialized_07545787 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    il2cpp_codegen_initialize_runtime_metadata(&"Body");
    il2cpp_codegen_initialize_runtime_metadata(&"Head");
    il2cpp_codegen_initialize_runtime_metadata(&"Eye");
    __this_03 = &"HairM1";
    il2cpp_codegen_initialize_runtime_metadata(&"HairM1");
    Il2CppMethodInitialized_07545787 = '\x01';
    in_RDX = extraout_RDX;
  }
  puStack_58 = (undefined1 *)&pGStack_68;
  uStack_60 = 0;
  uVar3 = (__this->fields).__1__state;
  if (uVar3 < 5) {
    __this_00 = (__this->fields).__4__this;
    switch(uVar3) {
    case 0:
      (__this->fields).__1__state = -1;
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
      if (pSVar5 == (Settings_TitanCustomSettings_o *)0x0) {
        puStack_58 = (undefined1 *)&pGStack_68;
        ThrowNullReferenceException();
      }
      __this_01 = (pSVar5->fields).TitanCustomSets;
      if (__this_01 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0) {
        puStack_58 = (undefined1 *)&pGStack_68;
        ThrowNullReferenceException();
      }
      puStack_58 = (undefined1 *)&pGStack_68;
      pSVar11 = (Settings_TitanCustomSet_o *)
                Settings_SetSettingsContainer_object___GetSelectedSet
                          ((Settings_SetSettingsContainer_T__o *)__this_01,
                           (MethodInfo_40477A0 *)
                           MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
      pSVar8 = TypeInfo_Settings_TitanCustomSet;
      if (pSVar11 == (Settings_TitanCustomSet_o *)0x0) {
        (pGStack_68->fields)._set_5__2 = (Settings_TitanCustomSet_o *)0x0;
      }
      else {
        bVar2 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
        if (((((Settings_BaseSetSetting_c *)pSVar11->klass)->_2).typeHierarchyDepth < bVar2) ||
           ((((Settings_BaseSetSetting_c *)pSVar11->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
label_05928626:
          il2cpp_codegen_raise_invalid_cast_exception(pSVar11);
        }
        (pGStack_68->fields)._set_5__2 = pSVar11;
        if (((((Settings_BaseSetSetting_c *)pSVar11->klass)->_2).typeHierarchyDepth < bVar2) ||
           ((((Settings_BaseSetSetting_c *)pSVar11->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)pSVar8)) goto label_05928626;
      }
      Il2CppCodeGenWriteBarrier(&(pGStack_68->fields)._set_5__2);
      pSVar11 = (pGStack_68->fields)._set_5__2;
      if (pSVar11 == (Settings_TitanCustomSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pSVar11->klass->vtable)._4_SetDefault.methodPtr)
                (pSVar11,(pSVar11->klass->vtable)._4_SetDefault.method);
      pSVar11 = (pGStack_68->fields)._set_5__2;
      if (pSVar11 == (Settings_TitanCustomSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar6 = (pSVar11->fields).Hair;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)"HairM1",
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      (pGStack_68->fields)._i_5__3 = 0;
      iVar14 = 0;
      uVar4 = (TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor;
      break;
    case 1:
      (__this->fields).__1__state = -1;
      puStack_58 = (undefined1 *)&pGStack_68;
      pSVar12 = System_Int32__ToString(&(__this->fields)._i_5__3,(MethodInfo *)0x0);
      pGVar16 = (GameManagers_CharacterEditorGameManager_o *)"Eye";
      pSVar12 = System_String__Concat_52f0320("Eye",pSVar12,(MethodInfo *)0x0);
      if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      GameManagers_CharacterEditorGameManager__Screenshot(pGVar16,876.0,570.0,172.0,172.0,pSVar12,method_02);
      iVar14 = (pGStack_68->fields)._i_5__3 + 1;
      (pGStack_68->fields)._i_5__3 = iVar14;
      uVar4 = (TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor;
      break;
    case 2:
      (__this->fields).__1__state = -1;
      puStack_58 = (undefined1 *)&pGStack_68;
      pSVar12 = System_Int32__ToString(&(__this->fields)._i_5__3,(MethodInfo *)0x0);
      pGVar16 = (GameManagers_CharacterEditorGameManager_o *)"Head";
      pSVar12 = System_String__Concat_52f0320("Head",pSVar12,(MethodInfo *)0x0);
      if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      GameManagers_CharacterEditorGameManager__Screenshot(pGVar16,852.0,580.0,220.0,220.0,pSVar12,method_01);
      iVar14 = (pGStack_68->fields)._i_5__3 + 1;
      (pGStack_68->fields)._i_5__3 = iVar14;
      uVar4 = (TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor;
      goto joined_r0x0592872e;
    case 3:
      (__this->fields).__1__state = -3;
      if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
        puStack_58 = (undefined1 *)&pGStack_68;
        ThrowNullReferenceException();
      }
      puStack_58 = (undefined1 *)&pGStack_68;
      GameManagers_CharacterEditorGameManager__Screenshot
                ((GameManagers_CharacterEditorGameManager_o *)__this_03,820.0,560.0,280.0,280.0,
                 (__this->fields)._hair_5__5,in_RDX);
      (pGStack_68->fields)._hair_5__5 = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(pGStack_68->fields)._hair_5__5);
      goto label_05928aba;
    case 4:
      (__this->fields).__1__state = -1;
      pSVar12 = System_Int32__ToString(&(__this->fields)._i_5__3,(MethodInfo *)0x0);
      pGVar16 = (GameManagers_CharacterEditorGameManager_o *)"Body";
      pSVar12 = System_String__Concat_52f0320("Body",pSVar12,(MethodInfo *)0x0);
      if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      GameManagers_CharacterEditorGameManager__Screenshot(pGVar16,766.0,220.0,380.0,380.0,pSVar12,method_00);
      iVar14 = (pGStack_68->fields)._i_5__3 + 1;
      (pGStack_68->fields)._i_5__3 = iVar14;
      uVar4 = (TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor;
      goto joined_r0x059286a1;
    }
    if (uVar4 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
    }
    pSVar11 = (pGStack_68->fields)._set_5__2;
    if (iVar14 < TypeInfo_Characters_BasicTitanSetup->static_fields->EyeCount) {
      if (pSVar11 == (Settings_TitanCustomSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar7 = (pSVar11->fields).Eye;
      if (pSVar7 == (Settings_IntSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar7,(pGStack_68->fields)._i_5__3,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_00,false,method_03);
      pIVar13 = (Il2CppObject *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar13,(MethodInfo *)0x0);
      (pGStack_68->fields).__2__current = pIVar13;
      iVar15 = 1;
      Il2CppCodeGenWriteBarrier(&(pGStack_68->fields).__2__current);
    }
    else {
      if (pSVar11 == (Settings_TitanCustomSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pSVar11->klass->vtable)._4_SetDefault.methodPtr)
                (pSVar11,(pSVar11->klass->vtable)._4_SetDefault.method);
      pSVar11 = (pGStack_68->fields)._set_5__2;
      if (pSVar11 == (Settings_TitanCustomSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar6 = (pSVar11->fields).Hair;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)"HairM1",
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      (pGStack_68->fields)._i_5__3 = 0;
      iVar14 = 0;
      uVar4 = (TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor;
joined_r0x0592872e:
      if (uVar4 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
      }
      pSVar11 = (pGStack_68->fields)._set_5__2;
      if (iVar14 < TypeInfo_Characters_BasicTitanSetup->static_fields->HeadCount) {
        if (pSVar11 == (Settings_TitanCustomSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar7 = (pSVar11->fields).Head;
        if (pSVar7 == (Settings_IntSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar7,(pGStack_68->fields)._i_5__3,
                   (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
          ThrowNullReferenceException();
        }
        GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_00,false,method_04);
        pIVar13 = (Il2CppObject *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar13,(MethodInfo *)0x0);
        (pGStack_68->fields).__2__current = pIVar13;
        iVar15 = 2;
        Il2CppCodeGenWriteBarrier(&(pGStack_68->fields).__2__current);
      }
      else {
        if (pSVar11 == (Settings_TitanCustomSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        (*(pSVar11->klass->vtable)._4_SetDefault.methodPtr)
                  (pSVar11,(pSVar11->klass->vtable)._4_SetDefault.method);
        if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
        }
        __this_02 = TypeInfo_Characters_BasicTitanSetup->static_fields->AllHairs;
        if (__this_02 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_object___GetEnumerator
                  (&SStack_50,(System_Collections_Generic_List_object__o *)__this_02,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
        pSStack_28 = (System_String_o *)SStack_50.fields._current;
        pSStack_38 = SStack_50.fields._list;
        iStack_30 = SStack_50.fields._index;
        iStack_2c = SStack_50.fields._version;
        (pGStack_68->fields).__7__wrap3.fields._current = (System_String_o *)SStack_50.fields._current;
        (pGStack_68->fields).__7__wrap3.fields._list = SStack_50.fields._list;
        (pGStack_68->fields).__7__wrap3.fields._index = SStack_50.fields._index;
        (pGStack_68->fields).__7__wrap3.fields._version = SStack_50.fields._version;
        Il2CppCodeGenWriteBarrier((void **)&(pGStack_68->fields).__7__wrap3);
        (pGStack_68->fields).__1__state = -3;
label_05928aba:
        bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o *)
                            &(pGStack_68->fields).__7__wrap3,
                            (MethodInfo_4C45C50 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        pGVar9 = pGStack_68;
        if (bVar10) {
          (pGStack_68->fields)._hair_5__5 = (pGStack_68->fields).__7__wrap3.fields._current;
          Il2CppCodeGenWriteBarrier(&(pGStack_68->fields)._hair_5__5);
          pSVar11 = (pGStack_68->fields)._set_5__2;
          if (pSVar11 == (Settings_TitanCustomSet_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar6 = (pSVar11->fields).Hair;
          if (pSVar6 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pGStack_68->fields)._hair_5__5,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
            ThrowNullReferenceException();
          }
          GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_00,false,method_05);
          pIVar13 = (Il2CppObject *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
          UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar13,(MethodInfo *)0x0);
          (pGStack_68->fields).__2__current = pIVar13;
          iVar15 = 3;
          Il2CppCodeGenWriteBarrier(&(pGStack_68->fields).__2__current);
        }
        else {
          if (Il2CppMethodInitialized_07545788 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
            Il2CppMethodInitialized_07545788 = '\x01';
          }
          (pGVar9->fields).__1__state = -1;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)&(pGVar9->fields).__7__wrap3,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
          (pGStack_68->fields).__7__wrap3.fields._list = (System_Collections_Generic_List_T__o *)0x0;
          (pGStack_68->fields).__7__wrap3.fields._index = 0;
          (pGStack_68->fields).__7__wrap3.fields._version = 0;
          (pGStack_68->fields).__7__wrap3.fields._current = (System_String_o *)0x0;
          pSVar11 = (pGStack_68->fields)._set_5__2;
          if (pSVar11 == (Settings_TitanCustomSet_o *)0x0) {
            ThrowNullReferenceException();
          }
          (*(pSVar11->klass->vtable)._4_SetDefault.methodPtr)
                    (pSVar11,(pSVar11->klass->vtable)._4_SetDefault.method);
          pSVar11 = (pGStack_68->fields)._set_5__2;
          if (pSVar11 == (Settings_TitanCustomSet_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar6 = (pSVar11->fields).Hair;
          if (pSVar6 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)"HairM1",
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          (pGStack_68->fields)._i_5__3 = 0;
          iVar14 = 0;
          uVar4 = (TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor;
joined_r0x059286a1:
          if (uVar4 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
            iVar1 = TypeInfo_Characters_BasicTitanSetup->static_fields->BodyCount;
          }
          else {
            iVar1 = *(int *)((long)((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup)->static_fields + 8);
          }
          if (iVar1 <= iVar14) goto label_05928dda;
          pSVar11 = (pGStack_68->fields)._set_5__2;
          if (pSVar11 == (Settings_TitanCustomSet_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar7 = (pSVar11->fields).Body;
          if (pSVar7 == (Settings_IntSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar7,(pGStack_68->fields)._i_5__3,
                     (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
            ThrowNullReferenceException();
          }
          GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_00,false,method_06);
          pIVar13 = (Il2CppObject *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
          UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar13,(MethodInfo *)0x0);
          (pGStack_68->fields).__2__current = pIVar13;
          iVar15 = 4;
          Il2CppCodeGenWriteBarrier(&(pGStack_68->fields).__2__current);
        }
      }
    }
    (pGStack_68->fields).__1__state = iVar15;
    bVar10 = true;
  }
  else {
label_05928dda:
    bVar10 = false;
  }
  return bVar10;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__11$$<>m__Finally1
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11____m__Finally1 (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x5928e20

void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11____m__Finally1
               (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o *__this,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545788 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    Il2CppMethodInitialized_07545788 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap3,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x5928e60

Il2CppObject *
GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__11$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11__System_Collections_IEnumerator_Reset (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x5928e70

void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11__System_Collections_IEnumerator_Reset
               (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o *__this,
               MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_GameManagers_CharacterEditorGameManager_GenerateTitanPreviewsCoroutine_d__11_System_Collections
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__11$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11__System_Collections_IEnumerator_get_Current (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x5928eb0

Il2CppObject *
GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11__System_Collections_IEnumerator_get_Current
          (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.CharacterEditorGameManager$$Awake
// il2cpp: void GameManagers_CharacterEditorGameManager__Awake (GameManagers_CharacterEditorGameManager_o* __this, const MethodInfo* method);
// 0x5925410

void GameManagers_CharacterEditorGameManager__Awake
               (GameManagers_CharacterEditorGameManager_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint32_t uVar5;
  System_String_o *path;
  UnityEngine_Vector3_StaticFields *pUVar6;
  Settings_HumanCustomSettings_o *pSVar7;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar8;
  Settings_IntSetting_o *pSVar9;
  Settings_TitanCustomSettings_o *pSVar10;
  Settings_SetSettingsContainer_TitanCustomSet__o *pSVar11;
  UnityEngine_Quaternion_Fields rotation;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Renderer_o *pUVar13;
  UnityEngine_Material_o *pUVar14;
  MethodInfo *method_00;
  UnityEngine_Color_o value;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value_00;
  
  if (Il2CppMethodInitialized_0754577e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject_71b1698);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Geometry/Prefabs/Cuboid");
    il2cpp_codegen_initialize_runtime_metadata(&"Materials/TransparentMaterial");
    Il2CppMethodInitialized_0754577e = '\x01';
    uVar5 = (TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar5 = (TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor;
  }
  if (uVar5 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    path = TypeInfo_Utility_ResourcePaths->static_fields->Map;
  }
  else {
    path = *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Utility_ResourcePaths)->static_fields + 0x40);
  }
  if (Il2CppMethodInitialized_075450a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_075450a5 = '\x01';
  }
  pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar2 = (pUVar6->downVector).fields.x;
  uVar3 = (pUVar6->downVector).fields.y;
  fVar1 = (pUVar6->downVector).fields.z;
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
  }
  position.fields.x = (float)uVar2 * 0.05;
  position.fields.y = (float)uVar3 * 0.05;
  position.fields.z = fVar1 * 0.05;
  rotation = *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar12 = ApplicationManagers_ResourceManager__InstantiateAsset_object__3665890
                      (path,"Geometry/Prefabs/Cuboid",position,(UnityEngine_Quaternion_o)rotation,false,false,
                       (MethodInfo_3665890 *)
                       MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject_71b1698);
  targetAddress = &(__this->fields).platform;
  (__this->fields).platform = pUVar12;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar12 = (__this->fields).platform;
  if ((pUVar12 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    value_00.fields.z = 2.0;
    value_00.fields.x = 2.0;
    value_00.fields.y = 0.1;
    UnityEngine_Transform__set_localScale(__this_00,value_00,(MethodInfo *)0x0);
    if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
      pUVar13 = UnityEngine_GameObject__GetComponent_object_
                          (*targetAddress,
                           (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
      pUVar14 = (UnityEngine_Material_o *)
                ApplicationManagers_ResourceManager__LoadAsset
                          (TypeInfo_Utility_ResourcePaths->static_fields->Map,"Materials/TransparentMaterial",false,
                           false,(MethodInfo *)0x0);
      if (pUVar13 != (UnityEngine_Renderer_o *)0x0) {
        if (pUVar14 != (UnityEngine_Material_o *)0x0) {
          bVar4 = (TypeInfo_UnityEngine_Material->_2).typeHierarchyDepth;
          if (((pUVar14->klass->_2).typeHierarchyDepth < bVar4) ||
             ((pUVar14->klass->_2).typeHierarchy[(ulong)bVar4 - 1] !=
              (Il2CppClass *)TypeInfo_UnityEngine_Material)) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar14);
          }
        }
        UnityEngine_Renderer__set_material(pUVar13,pUVar14,(MethodInfo *)0x0);
        if (((*targetAddress != (UnityEngine_GameObject_o *)0x0) &&
            (pUVar13 = UnityEngine_GameObject__GetComponent_object_
                                 (*targetAddress,
                                  (MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_Renderer),
            pUVar13 != (UnityEngine_Renderer_o *)0x0)) &&
           (pUVar14 = UnityEngine_Renderer__get_material(pUVar13,(MethodInfo *)0x0),
           pUVar14 != (UnityEngine_Material_o *)0x0)) {
          value.fields.b = 1.0;
          value.fields.a = 0.2;
          value.fields.r = 1.0;
          value.fields.g = 1.0;
          UnityEngine_Material__set_color(pUVar14,value,(MethodInfo *)0x0);
          pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
          if (((pSVar7 != (Settings_HumanCustomSettings_o *)0x0) &&
              (pSVar8 = (pSVar7->fields).CustomSets,
              pSVar8 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) &&
             (pSVar9 = (pSVar8->fields).SelectedSetIndex, pSVar9 != (Settings_IntSetting_o *)0x0)) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar9,0,
                       (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            pSVar10 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
            if (((pSVar10 != (Settings_TitanCustomSettings_o *)0x0) &&
                (pSVar11 = (pSVar10->fields).TitanCustomSets,
                pSVar11 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) &&
               (pSVar9 = (pSVar11->fields).SelectedSetIndex, pSVar9 != (Settings_IntSetting_o *)0x0)) {
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)pSVar9,0,
                         (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
              if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
              }
              Utility_CharacterPreviewGenerator__InitializePreviewSystem((MethodInfo *)0x0);
              UI_CharacterEditorTitanSkinsPanel__ResetPreview((MethodInfo *)0x0);
              GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this,true,method_00);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.CharacterEditorGameManager$$ReinstantiateCharacter
// il2cpp: void GameManagers_CharacterEditorGameManager__ReinstantiateCharacter (GameManagers_CharacterEditorGameManager_o* __this, bool applySkins, const MethodInfo* method);
// 0x5925800

void GameManagers_CharacterEditorGameManager__ReinstantiateCharacter
               (GameManagers_CharacterEditorGameManager_o *__this,bool applySkins,MethodInfo *method)

{
  Characters_DummyCharacter_o **targetAddress;
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar7;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar8;
  byte bVar9;
  Characters_DummyCharacter_o *x;
  System_String_o *pSVar10;
  UnityEngine_Vector3_StaticFields *pUVar11;
  UnityEngine_Quaternion_StaticFields *pUVar12;
  Settings_HumanCustomSettings_o *pSVar13;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  Characters_HumanSetup_o *__this_01;
  Settings_TitanCustomSettings_o *pSVar14;
  Settings_SetSettingsContainer_TitanCustomSet__o *__this_02;
  bool bVar15;
  UnityEngine_Object_o *obj;
  UnityEngine_GameObject_o *pUVar16;
  Characters_DummyHuman_o *pCVar17;
  Characters_Human_o *__this_03;
  Characters_HumanMovementSync_o *__this_04;
  Settings_HumanCustomSet_o *customSet;
  Settings_TitanCustomSet_o *__this_05;
  System_String_o *str1;
  System_String_o *pSVar18;
  Characters_DummyTitan_o *pCVar19;
  Characters_BasicTitan_o *__this_06;
  Characters_BasicTitanMovementSync_o *__this_07;
  undefined7 in_register_00000031;
  Characters_DummyHuman_o **targetAddress_00;
  Characters_DummyTitan_o **targetAddress_01;
  float fVar20;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Quaternion_o rotation_00;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  int32_t local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (Il2CppMethodInitialized_0754577f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_DummyTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_BasicTitanMovementSync);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_HumanMovementSync);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject_71b1698);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Prefabs/HumanPlayer");
    Il2CppMethodInitialized_0754577f = '\x01';
  }
  x = (__this->fields).Character;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields).Character;
  bVar15 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar15) {
    if (*targetAddress == (Characters_DummyCharacter_o *)0x0) goto label_05925ea6;
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  }
  if ((TypeInfo_GameManagers_CharacterEditorGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager);
    cVar8 = TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->HumanMode;
  }
  else {
    cVar8 = TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->HumanMode;
  }
  if (cVar8 == '\0') {
    pSVar14 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
    if (((pSVar14 != (Settings_TitanCustomSettings_o *)0x0) &&
        (__this_02 = (pSVar14->fields).TitanCustomSets,
        __this_02 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) &&
       (__this_05 = (Settings_TitanCustomSet_o *)
                    Settings_SetSettingsContainer_object___GetSelectedSet
                              ((Settings_SetSettingsContainer_T__o *)__this_02,
                               (MethodInfo_40477A0 *)
                               MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet),
       __this_05 != (Settings_TitanCustomSet_o *)0x0)) {
      bVar9 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
      if (((__this_05->klass->_2).typeHierarchyDepth < bVar9) ||
         ((__this_05->klass->_2).typeHierarchy[(ulong)bVar9 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_05);
      }
      local_7c = Settings_TitanCustomSet__GetBody(__this_05,(MethodInfo *)0x0);
      local_68 = CONCAT44(local_68._4_4_,(int)CONCAT71(in_register_00000031,applySkins));
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar10 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
      if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
      }
      pSVar18 = TypeInfo_Characters_CharacterPrefabs->static_fields->BasicTitanPrefix;
      str1 = System_Int32__ToString(&local_7c,(MethodInfo *)0x0);
      pSVar18 = System_String__Concat_52f0320(pSVar18,str1,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar1 = (pUVar11->zeroVector).fields.x;
      uVar7 = (pUVar11->zeroVector).fields.y;
      position_00.fields.y = (float)uVar7;
      position_00.fields.x = (float)uVar1;
      fVar20 = (pUVar11->zeroVector).fields.z;
      if (Il2CppMethodInitialized_0753e72b == '\0') {
        local_78 = CONCAT44(local_78._4_4_,fVar20);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
        Il2CppMethodInitialized_0753e72b = '\x01';
        fVar20 = (float)local_78;
      }
      pUVar12 = TypeInfo_UnityEngine_Quaternion->static_fields;
      uVar5._0_4_ = (pUVar12->identityQuaternion).fields.x;
      uVar5._4_4_ = (pUVar12->identityQuaternion).fields.y;
      uVar6._0_4_ = (pUVar12->identityQuaternion).fields.z;
      uVar6._4_4_ = (pUVar12->identityQuaternion).fields.w;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        local_78 = CONCAT44(local_78._4_4_,fVar20);
        uStack_50 = 0;
        uStack_40 = 0;
        local_58 = uVar5;
        local_48 = uVar6;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        fVar20 = (float)local_78;
        uVar5._0_4_ = (undefined4)local_58;
        uVar5._4_4_ = local_58._4_4_;
        uVar6._0_4_ = (undefined4)local_48;
        uVar6._4_4_ = local_48._4_4_;
      }
      rotation_00.fields.y = (float)uVar5._4_4_;
      rotation_00.fields.x = (float)(undefined4)uVar5;
      rotation_00.fields.w = (float)uVar6._4_4_;
      rotation_00.fields.z = (float)(undefined4)uVar6;
      position_00.fields.z = fVar20;
      pUVar16 = ApplicationManagers_ResourceManager__InstantiateAsset_object__3665890
                          (pSVar10,pSVar18,position_00,rotation_00,false,false,
                           (MethodInfo_3665890 *)
                           MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject_71b1698)
      ;
      if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
        pCVar19 = UnityEngine_GameObject__AddComponent_object_
                            (pUVar16,(MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_DummyTitan);
        (__this->fields).Titan = pCVar19;
        targetAddress_01 = &(__this->fields).Titan;
        Il2CppCodeGenWriteBarrier(targetAddress_01);
        __this_06 = UnityEngine_GameObject__GetComponent_object_
                              (pUVar16,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_BasicTitan);
        uVar5 = local_68;
        if (__this_06 != (Characters_BasicTitan_o *)0x0) {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_06,false,(MethodInfo *)0x0);
          __this_07 = UnityEngine_GameObject__GetComponent_object_
                                (pUVar16,(MethodInfo_353B730 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_BasicTitanMovementSync
                                );
          if (__this_07 != (Characters_BasicTitanMovementSync_o *)0x0) {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_07,false,(MethodInfo *)0x0);
            if (*targetAddress_01 != (Characters_DummyTitan_o *)0x0) {
              Characters_DummyTitan__LoadSet(*targetAddress_01,__this_05,SUB81(uVar5,0),(MethodInfo *)0x0);
              if (*targetAddress_01 != (Characters_DummyTitan_o *)0x0) {
                Characters_DummyCharacter__Idle
                          ((Characters_DummyCharacter_o *)*targetAddress_01,(MethodInfo *)0x0);
                *targetAddress = (Characters_DummyCharacter_o *)*targetAddress_01;
                Il2CppCodeGenWriteBarrier(targetAddress);
                return;
              }
            }
          }
        }
      }
    }
  }
  else {
    if ((((Il2CppClass *)TypeInfo_Utility_ResourcePaths)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      pSVar10 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    }
    else {
      pSVar10 = *(System_String_o **)
                 ((long)((Il2CppClass *)TypeInfo_Utility_ResourcePaths)->static_fields + 8);
    }
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
    pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar2._0_4_ = (pUVar11->zeroVector).fields.x;
    uVar2._4_4_ = (pUVar11->zeroVector).fields.y;
    fVar20 = (pUVar11->zeroVector).fields.z;
    uVar5._0_4_ = 0;
    uVar6._0_4_ = 0;
    if (Il2CppMethodInitialized_0753e72b == '\0') {
      uStack_60 = 0;
      local_68 = uVar2;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_0753e72b = '\x01';
      uVar2._0_4_ = (undefined4)local_68;
      uVar2._4_4_ = local_68._4_4_;
      uVar5._0_4_ = (undefined4)uStack_60;
      uVar6._0_4_ = uStack_60._4_4_;
    }
    pUVar12 = TypeInfo_UnityEngine_Quaternion->static_fields;
    uVar3._0_4_ = (pUVar12->identityQuaternion).fields.x;
    uVar3._4_4_ = (pUVar12->identityQuaternion).fields.y;
    uVar4._0_4_ = (pUVar12->identityQuaternion).fields.z;
    uVar4._4_4_ = (pUVar12->identityQuaternion).fields.w;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      local_68 = CONCAT44(uVar2._4_4_,(undefined4)uVar2);
      uStack_60 = CONCAT44((undefined4)uVar6,(undefined4)uVar5);
      uStack_70 = 0;
      uStack_50 = 0;
      local_78 = uVar3;
      local_58 = uVar4;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      uVar2._0_4_ = (undefined4)local_68;
      uVar2._4_4_ = local_68._4_4_;
      uVar3._0_4_ = (float)local_78;
      uVar3._4_4_ = local_78._4_4_;
      uVar4._0_4_ = (undefined4)local_58;
      uVar4._4_4_ = local_58._4_4_;
    }
    rotation.fields.y = (float)uVar3._4_4_;
    rotation.fields.x = (float)(undefined4)uVar3;
    rotation.fields.w = (float)uVar4._4_4_;
    rotation.fields.z = (float)(undefined4)uVar4;
    position.fields.y = (float)uVar2._4_4_;
    position.fields.x = (float)(undefined4)uVar2;
    position.fields.z = fVar20;
    pUVar16 = ApplicationManagers_ResourceManager__InstantiateAsset_object__3665890
                        (pSVar10,"Human/Prefabs/HumanPlayer",position,rotation,false,false,
                         (MethodInfo_3665890 *)
                         MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject_71b1698);
    if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
      pCVar17 = UnityEngine_GameObject__AddComponent_object_
                          (pUVar16,(MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_DummyHuman);
      (__this->fields).Human = pCVar17;
      targetAddress_00 = &(__this->fields).Human;
      Il2CppCodeGenWriteBarrier(targetAddress_00);
      __this_03 = UnityEngine_GameObject__GetComponent_object_
                            (pUVar16,(MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_Human);
      if (__this_03 != (Characters_Human_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_03,false,(MethodInfo *)0x0);
        __this_04 = UnityEngine_GameObject__GetComponent_object_
                              (pUVar16,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_HumanMovementSync);
        if (__this_04 != (Characters_HumanMovementSync_o *)0x0) {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_04,false,(MethodInfo *)0x0);
          if (((*targetAddress_00 != (Characters_DummyHuman_o *)0x0) &&
              (pSVar13 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings,
              pSVar13 != (Settings_HumanCustomSettings_o *)0x0)) &&
             (__this_00 = (pSVar13->fields).CustomSets,
             __this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
            __this_01 = ((*targetAddress_00)->fields).Setup;
            customSet = (Settings_HumanCustomSet_o *)
                        Settings_SetSettingsContainer_object___GetSelectedSet
                                  ((Settings_SetSettingsContainer_T__o *)__this_00,
                                   (MethodInfo_40477A0 *)
                                   MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
            if (__this_01 != (Characters_HumanSetup_o *)0x0) {
              if (customSet != (Settings_HumanCustomSet_o *)0x0) {
                bVar9 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
                if (((customSet->klass->_2).typeHierarchyDepth < bVar9) ||
                   ((customSet->klass->_2).typeHierarchy[(ulong)bVar9 - 1] !=
                    (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
                  il2cpp_codegen_raise_invalid_cast_exception(customSet);
                }
              }
              Characters_HumanSetup__Load(__this_01,customSet,0,false,(MethodInfo *)0x0);
              if (*targetAddress_00 != (Characters_DummyHuman_o *)0x0) {
                Characters_DummyCharacter__Idle
                          ((Characters_DummyCharacter_o *)*targetAddress_00,(MethodInfo *)0x0);
                *targetAddress = (Characters_DummyCharacter_o *)*targetAddress_00;
                Il2CppCodeGenWriteBarrier(targetAddress);
                return;
              }
            }
          }
        }
      }
    }
  }
label_05925ea6:
  ThrowNullReferenceException();
}


// GameManagers.CharacterEditorGameManager$$GeneratePreviews
// il2cpp: void GameManagers_CharacterEditorGameManager__GeneratePreviews (GameManagers_CharacterEditorGameManager_o* __this, const MethodInfo* method);
// 0x5925ec0

void GameManagers_CharacterEditorGameManager__GeneratePreviews
               (GameManagers_CharacterEditorGameManager_o *__this,MethodInfo *method)

{
  char cVar1;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_c **ppGVar3;
  Il2CppObject *__this_01;
  
  if (Il2CppMethodInitialized_07545780 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    Il2CppMethodInitialized_07545780 = '\x01';
  }
  if ((TypeInfo_GameManagers_CharacterEditorGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager);
  }
  bVar2 = System_IO_Directory__Exists
                    (TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->PreviewFolderPath,
                     (MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_GameManagers_CharacterEditorGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager);
    }
    System_IO_Directory__CreateDirectory
              (TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->PreviewFolderPath,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).platform;
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_CharacterEditorGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager);
    cVar1 = TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->HumanMode;
  }
  else {
    cVar1 = TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->HumanMode;
  }
  if (cVar1 == '\0') {
    if (Il2CppMethodInitialized_07545782 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_GameManagers_CharacterEditorGameManager_GenerateTitanPreviewsCoroutine_d__11);
      Il2CppMethodInitialized_07545782 = '\x01';
    }
    ppGVar3 = (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_c **)
              &TypeInfo_GameManagers_CharacterEditorGameManager_GenerateTitanPreviewsCoroutine_d__11;
  }
  else {
    if (Il2CppMethodInitialized_07545781 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_GameManagers_CharacterEditorGameManager_GenerateHumanPreviewsCoroutine_d__10);
      Il2CppMethodInitialized_07545781 = '\x01';
    }
    ppGVar3 = &TypeInfo_GameManagers_CharacterEditorGameManager_GenerateHumanPreviewsCoroutine_d__10;
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)*ppGVar3);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  __this_01[2].klass = (Il2CppClass *)__this;
  Il2CppCodeGenWriteBarrier(&__this_01[2].klass);
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_01,
             (MethodInfo *)0x0);
  return;
}


// GameManagers.CharacterEditorGameManager$$GenerateHumanPreviewsCoroutine
// il2cpp: System_Collections_IEnumerator_o* GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine (GameManagers_CharacterEditorGameManager_o* __this, const MethodInfo* method);
// 0x5926010

System_Collections_IEnumerator_o *
GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine
          (GameManagers_CharacterEditorGameManager_o *__this,MethodInfo *method)

{
  GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__10_o *__this_00;
  
  if (Il2CppMethodInitialized_07545781 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_CharacterEditorGameManager_GenerateHumanPreviewsCoroutine_d__10);
    Il2CppMethodInitialized_07545781 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_GameManagers_CharacterEditorGameManager_GenerateHumanPreviewsCoroutine_d__10
                        );
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.CharacterEditorGameManager$$GenerateTitanPreviewsCoroutine
// il2cpp: System_Collections_IEnumerator_o* GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine (GameManagers_CharacterEditorGameManager_o* __this, const MethodInfo* method);
// 0x5926080

System_Collections_IEnumerator_o *
GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine
          (GameManagers_CharacterEditorGameManager_o *__this,MethodInfo *method)

{
  GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__11_o *__this_00;
  
  if (Il2CppMethodInitialized_07545782 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_GameManagers_CharacterEditorGameManager_GenerateTitanPreviewsCoroutine_d__11);
    Il2CppMethodInitialized_07545782 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_GameManagers_CharacterEditorGameManager_GenerateTitanPreviewsCoroutine_d__11
                        );
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.CharacterEditorGameManager$$Screenshot
// il2cpp: void GameManagers_CharacterEditorGameManager__Screenshot (GameManagers_CharacterEditorGameManager_o* __this, float x, float y, float w, float h, System_String_o* file, const MethodInfo* method);
// 0x5926130
// eh: try 0x59261c8..0x592628c -> pad 0x592628e (+2 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x59262b6..0x5926332 -> pad 0x5926337 (+1 call sites) cleanup
// eh: try 0x592633a..0x592633f -> pad 0x5926347 catch (...) [compiler noexcept guard]
// asm: 50 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592628c: jmp 0x592628e
// asm:   0x592628e: mov rbx, rax
// asm:   0x5926291: cmp edx, 1
// asm:   0x5926294: jne 0x592633f
// asm:   0x592629a: mov rdi, rbx
// asm:   0x592629d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59262a2: mov rbx, rax
// asm:   0x59262a5: lea rax, [rip + 0x1c3041c]
// asm:   0x59262ac: mov rdi, qword ptr [rax + 0x10]
// asm:   0x59262b0: mov rax, qword ptr [rbx]
// asm:   0x59262b3: mov rsi, qword ptr [rax]
// asm:   0x59262b6: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x59262bb: test al, al
// asm:   0x59262bd: je 0x5926311
// asm:   0x59262bf: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59262c4: lea rdi, [rip + 0x195765d]  ; TypeInfo_UnityEngine_Texture2D
// asm:   0x59262cb: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59262d0: mov rdi, rax
// asm:   0x59262d3: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x59262d8: mov r15, rax
// asm:   0x59262db: mov rdi, rax
// asm:   0x59262de: mov esi, 1
// asm:   0x59262e3: mov edx, 1
// asm:   0x59262e8: xor ecx, ecx
// asm:   0x59262ea: call 0x69efee0  ; UnityEngine_Texture2D___ctor()
// asm:   0x59262ef: test r15, r15
// asm:   0x59262f2: je 0x5926332
// asm:   0x59262f4: movaps xmm0, xmmword ptr [rip - 0x4920a8b]
// asm:   0x59262fb: mov rdi, r15
// asm:   0x59262fe: xor esi, esi
// asm:   0x5926300: xor edx, edx
// asm:   0x5926302: movaps xmm1, xmm0
// asm:   0x5926305: xor ecx, ecx
// asm:   0x5926307: call 0x69f00e0  ; UnityEngine_Texture2D__SetPixel()
// asm:   0x592630c: jmp 0x5926201
// asm:   0x5926311: mov edi, 8
// asm:   0x5926316: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x592631b: mov rcx, qword ptr [rbx]
// asm:   0x592631e: mov qword ptr [rax], rcx
// asm:   0x5926321: lea rsi, [rip + 0x15071d8]
// asm:   0x5926328: mov rdi, rax
// asm:   0x592632b: xor edx, edx
// asm:   0x592632d: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5926332: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5926337: mov rbx, rax
// asm:   0x592633a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x592633f: mov rdi, rbx
// asm:   0x5926342: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5926347: mov rdi, rax
// asm:   0x592634a: call 0x2ab61e0  ; __clang_call_terminate()

void GameManagers_CharacterEditorGameManager__Screenshot
               (GameManagers_CharacterEditorGameManager_o *__this,float x,float y,float w,float h,
               System_String_o *file,MethodInfo *method)

{
  UnityEngine_Texture2D_o *__this_00;
  System_String_o *path;
  System_Byte_array *bytes;
  UnityEngine_Color_o color;
  UnityEngine_Rect_o source;
  
  if (Il2CppMethodInitialized_07545783 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&".png");
    Il2CppMethodInitialized_07545783 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
  UnityEngine_Texture2D___ctor_68efe30(__this_00,(int)w,(int)h,3,false,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Texture2D_o *)0x0) {
    ThrowNullReferenceException();
  }
  color.fields.b = 1.0;
  color.fields.a = 1.0;
  color.fields.r = 1.0;
  color.fields.g = 1.0;
  UnityEngine_Texture2D__SetPixel(__this_00,0,0,color,(MethodInfo *)0x0);
  source.fields.m_YMin = y;
  source.fields.m_XMin = x;
  source.fields.m_Height = h;
  source.fields.m_Width = w;
  UnityEngine_Texture2D__ReadPixels_68f0830(__this_00,source,0,0,(MethodInfo *)0x0);
  UnityEngine_Texture2D__Apply_68f05d0(__this_00,(MethodInfo *)0x0);
  TextureScaler__ScaleBlocking(__this_00,0x80,0x80,(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_CharacterEditorGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager);
  }
  path = System_String__Concat_5302810
                   (TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->PreviewFolderPath,
                    "/",file,".png",(MethodInfo *)0x0);
  bytes = UnityEngine_ImageConversion__EncodeToPNG(__this_00,(MethodInfo *)0x0);
  System_IO_File__WriteAllBytes(path,bytes,(MethodInfo *)0x0);
  return;
}


// GameManagers.CharacterEditorGameManager$$.ctor
// il2cpp: void GameManagers_CharacterEditorGameManager___ctor (GameManagers_CharacterEditorGameManager_o* __this, const MethodInfo* method);
// 0x5926350

void GameManagers_CharacterEditorGameManager___ctor
               (GameManagers_CharacterEditorGameManager_o *__this,MethodInfo *method)

{
  Photon_Pun_MonoBehaviourPunCallbacks___ctor
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.CharacterEditorGameManager$$.cctor
// il2cpp: void GameManagers_CharacterEditorGameManager___cctor (const MethodInfo* method);
// 0x5926360

void GameManagers_CharacterEditorGameManager___cctor(MethodInfo *method)

{
  GameManagers_CharacterEditorGameManager_StaticFields *pGVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545784 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/CharacterPreviews");
    Il2CppMethodInitialized_07545784 = '\x01';
  }
  TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->HumanMode = true;
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar2 = System_String__Concat_52f0320
                     (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/CharacterPreviews",
                      (MethodInfo *)0x0);
  pGVar1 = TypeInfo_GameManagers_CharacterEditorGameManager->static_fields;
  pGVar1->PreviewFolderPath = pSVar2;
  Il2CppCodeGenWriteBarrier(&pGVar1->PreviewFolderPath);
  return;
}


