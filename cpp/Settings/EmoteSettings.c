// Type: Settings.EmoteSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/EmoteSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/EmoteSettings.cs
// --------------------------------

// Settings.EmoteSettings$$get_FileName
// il2cpp: System_String_o* Settings_EmoteSettings__get_FileName (Settings_EmoteSettings_o* __this, const MethodInfo* method);
// 0x181dbb020

System_String_o * Settings_EmoteSettings__get_FileName(Settings_EmoteSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344a14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Emote.json");
    Il2CppMethodInitialized_184344a14 = '\x01';
  }
  return "Emote.json";
}


// Settings.EmoteSettings$$Validate
// il2cpp: bool Settings_EmoteSettings__Validate (Settings_EmoteSettings_o* __this, const MethodInfo* method);
// 0x181dba530

bool Settings_EmoteSettings__Validate(Settings_EmoteSettings_o *__this,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  
  if (Il2CppMethodInitialized_184344a15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    Il2CppMethodInitialized_184344a15 = '\x01';
  }
  pSVar1 = (__this->fields).TextEmotes;
  if ((pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) &&
     (pSVar2 = (pSVar1->fields)._value, pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
    if ((pSVar2->fields)._size != 8) {
      return false;
    }
    pSVar1 = (__this->fields).EmojiEmotes;
    if ((pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) &&
       (pSVar2 = (pSVar1->fields)._value, pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
      return (pSVar2->fields)._size == 8;
    }
  }
  ThrowNullReferenceException();
}


// Settings.EmoteSettings$$.ctor
// il2cpp: void Settings_EmoteSettings___ctor (Settings_EmoteSettings_o* __this, const MethodInfo* method);
// 0x181dba5b0

void Settings_EmoteSettings___ctor(Settings_EmoteSettings_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Settings_StringSetting_array *pSVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_StringSetting__o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  Settings_ListSetting_StringSetting__o *pSVar7;
  
  if (Il2CppMethodInitialized_184344a16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_ctor_4072d28);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_StringSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_StringSetting_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiCrying");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan here");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiSmile");
    il2cpp_codegen_initialize_runtime_metadata(&"Thanks");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiThumbsUp");
    il2cpp_codegen_initialize_runtime_metadata(&"Good game");
    il2cpp_codegen_initialize_runtime_metadata(&"Welcome");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiCool");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiShocked");
    il2cpp_codegen_initialize_runtime_metadata(&"Sorry");
    il2cpp_codegen_initialize_runtime_metadata(&"Nice hit");
    il2cpp_codegen_initialize_runtime_metadata(&"Help");
    il2cpp_codegen_initialize_runtime_metadata(&"Oops");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiAngry");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiAnnoyed");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiLove");
    Il2CppMethodInitialized_184344a16 = '\x01';
  }
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_StringSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_StringSetting_ctor);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar6,"Help",0x28,(MethodInfo *)0x0);
  pMVar4 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
  if (pSVar5 != (System_Collections_Generic_List_StringSetting__o *)0x0) {
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar5->fields)._items;
    if (pSVar3 == (Settings_StringSetting_array *)0x0) goto label_181dbb013;
    uVar2 = (pSVar5->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar5->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181dbb019;
      pSVar3->m_Items[(int)uVar2] = pSVar6;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pSVar6,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
    Settings_StringSetting___ctor_1f27ee0(pSVar6,"Thanks",0x28,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar5->fields)._items;
    if (pSVar3 == (Settings_StringSetting_array *)0x0) goto label_181dbb013;
    uVar2 = (pSVar5->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar5->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181dbb019;
      pSVar3->m_Items[(int)uVar2] = pSVar6;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pSVar6,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
    Settings_StringSetting___ctor_1f27ee0(pSVar6,"Sorry",0x28,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar5->fields)._items;
    if (pSVar3 == (Settings_StringSetting_array *)0x0) goto label_181dbb013;
    uVar2 = (pSVar5->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar5->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181dbb019;
      pSVar3->m_Items[(int)uVar2] = pSVar6;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pSVar6,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
    Settings_StringSetting___ctor_1f27ee0(pSVar6,"Titan here",0x28,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar5->fields)._items;
    if (pSVar3 == (Settings_StringSetting_array *)0x0) goto label_181dbb013;
    uVar2 = (pSVar5->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar5->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181dbb019;
      pSVar3->m_Items[(int)uVar2] = pSVar6;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pSVar6,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
    Settings_StringSetting___ctor_1f27ee0(pSVar6,"Good game",0x28,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar5->fields)._items;
    if (pSVar3 == (Settings_StringSetting_array *)0x0) goto label_181dbb013;
    uVar2 = (pSVar5->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar5->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181dbb019;
      pSVar3->m_Items[(int)uVar2] = pSVar6;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pSVar6,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
    Settings_StringSetting___ctor_1f27ee0(pSVar6,"Nice hit",0x28,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar5->fields)._items;
    if (pSVar3 == (Settings_StringSetting_array *)0x0) goto label_181dbb013;
    uVar2 = (pSVar5->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar5->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181dbb019;
      pSVar3->m_Items[(int)uVar2] = pSVar6;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pSVar6,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
    Settings_StringSetting___ctor_1f27ee0(pSVar6,"Oops",0x28,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar5->fields)._items;
    if (pSVar3 == (Settings_StringSetting_array *)0x0) goto label_181dbb013;
    uVar2 = (pSVar5->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar5->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181dbb019;
      pSVar3->m_Items[(int)uVar2] = pSVar6;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pSVar6,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
    Settings_StringSetting___ctor_1f27ee0(pSVar6,"Welcome",0x28,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar5->fields)._items;
    if (pSVar3 == (Settings_StringSetting_array *)0x0) goto label_181dbb013;
    uVar2 = (pSVar5->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar5->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181dbb019;
      pSVar3->m_Items[(int)uVar2] = pSVar6;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pSVar6,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
    Settings_ListSetting_object____ctor
              ((Settings_ListSetting_T__o *)pSVar7,(System_Collections_Generic_List_T__o *)pSVar5,
               (MethodInfo_1755D40 *)MethodInfo_Settings_ListSetting_StringSetting_ctor_4072d28);
    (__this->fields).TextEmotes = pSVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields).TextEmotes,pSVar7);
    pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_StringSetting);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_StringSetting_ctor);
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
    Settings_StringSetting___ctor_1f27ee0(pSVar6,"EmojiSmile",0x28,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
    if (pSVar5 == (System_Collections_Generic_List_StringSetting__o *)0x0) goto label_181dbb013;
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar5->fields)._items;
    if (pSVar3 == (Settings_StringSetting_array *)0x0) goto label_181dbb013;
    uVar2 = (pSVar5->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar5->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181dbb019;
      pSVar3->m_Items[(int)uVar2] = pSVar6;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pSVar6,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
    Settings_StringSetting___ctor_1f27ee0(pSVar6,"EmojiThumbsUp",0x28,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar5->fields)._items;
    if (pSVar3 == (Settings_StringSetting_array *)0x0) goto label_181dbb013;
    uVar2 = (pSVar5->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar5->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181dbb019;
      pSVar3->m_Items[(int)uVar2] = pSVar6;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pSVar6,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
    Settings_StringSetting___ctor_1f27ee0(pSVar6,"EmojiCool",0x28,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar5->fields)._items;
    if (pSVar3 == (Settings_StringSetting_array *)0x0) goto label_181dbb013;
    uVar2 = (pSVar5->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar5->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181dbb019;
      pSVar3->m_Items[(int)uVar2] = pSVar6;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pSVar6,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
    Settings_StringSetting___ctor_1f27ee0(pSVar6,"EmojiLove",0x28,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar5->fields)._items;
    if (pSVar3 == (Settings_StringSetting_array *)0x0) goto label_181dbb013;
    uVar2 = (pSVar5->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar5->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181dbb019;
      pSVar3->m_Items[(int)uVar2] = pSVar6;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pSVar6,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
    Settings_StringSetting___ctor_1f27ee0(pSVar6,"EmojiShocked",0x28,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar5->fields)._items;
    if (pSVar3 == (Settings_StringSetting_array *)0x0) goto label_181dbb013;
    uVar2 = (pSVar5->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar5->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181dbb019;
      pSVar3->m_Items[(int)uVar2] = pSVar6;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pSVar6,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
    Settings_StringSetting___ctor_1f27ee0(pSVar6,"EmojiCrying",0x28,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar5->fields)._items;
    if (pSVar3 == (Settings_StringSetting_array *)0x0) goto label_181dbb013;
    uVar2 = (pSVar5->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar5->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181dbb019;
      pSVar3->m_Items[(int)uVar2] = pSVar6;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pSVar6,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
    Settings_StringSetting___ctor_1f27ee0(pSVar6,"EmojiAnnoyed",0x28,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar5->fields)._items;
    if (pSVar3 == (Settings_StringSetting_array *)0x0) goto label_181dbb013;
    uVar2 = (pSVar5->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar5->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181dbb019;
      pSVar3->m_Items[(int)uVar2] = pSVar6;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pSVar6,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
    Settings_StringSetting___ctor_1f27ee0(pSVar6,"EmojiAngry",0x28,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar5->fields)._items;
    if (pSVar3 != (Settings_StringSetting_array *)0x0) {
      uVar2 = (pSVar5->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (pSVar5->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) {
label_181dbb019:
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar2] = pSVar6;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar6);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pSVar6,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
      Settings_ListSetting_object____ctor
                ((Settings_ListSetting_T__o *)pSVar7,(System_Collections_Generic_List_T__o *)pSVar5,
                 (MethodInfo_1755D40 *)MethodInfo_Settings_ListSetting_StringSetting_ctor_4072d28);
      (__this->fields).EmojiEmotes = pSVar7;
      Il2CppCodeGenWriteBarrier(&(__this->fields).EmojiEmotes,pSVar7);
      Settings_SaveableSettingsContainer___ctor
                ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
label_181dbb013:
  ThrowNullReferenceException();
}


