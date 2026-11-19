// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsSearchContext.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o __this, System_String_o* categoryId, System_String_o* categoryTitle, const MethodInfo* method);
// 0x5e3aeb0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *__this,
               System_String_o *categoryId,System_String_o *categoryTitle,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (Il2CppMethodInitialized_07548630 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Settings");
    Il2CppMethodInitialized_07548630 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  method_00 = (MethodInfo *)0x0;
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Common.Settings",(MethodInfo *)0x0);
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase(pSVar1,method_00);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext___ctor_5d4b400
            (__this,pSVar1,categoryId,categoryTitle,(System_String_o *)0x0,(System_String_o *)0x0,
             in_stack_ffffffffffffffd8);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o __this, System_String_o* screenTitle, System_String_o* categoryId, System_String_o* categoryTitle, System_String_o* groupId, System_String_o* groupTitle, const MethodInfo* method);
// 0x5e4b400

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext___ctor_5d4b400
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *__this,
               System_String_o *screenTitle,System_String_o *categoryId,System_String_o *categoryTitle,
               System_String_o *groupId,System_String_o *groupTitle,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  (__this->fields).ScreenTitle = screenTitle;
  Il2CppCodeGenWriteBarrier((void **)__this);
  if (categoryId == (System_String_o *)0x0) {
    categoryId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields).CategoryId = categoryId;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CategoryId);
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase
                     (categoryTitle,(MethodInfo *)categoryId);
  (__this->fields).CategoryTitle = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CategoryTitle);
  if (groupId == (System_String_o *)0x0) {
    groupId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields).GroupId = groupId;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GroupId);
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase
                     (groupTitle,(MethodInfo *)groupId);
  (__this->fields).GroupTitle = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GroupTitle);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$get_HasCategory
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_HasCategory (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o __this, const MethodInfo* method);
// 0x5e4b4c0

bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_HasCategory
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields).CategoryId,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$get_SectionId
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_SectionId (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o __this, const MethodInfo* method);
// 0x5e4b4d0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_SectionId
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *__this,MethodInfo *method)

{
  return (__this->fields).CategoryId;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$get_SectionTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_SectionTitle (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o __this, const MethodInfo* method);
// 0x5e4b4e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e4b543: mov rbx, r14

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_SectionTitle
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *value;
  
  value = (__this->fields).CategoryTitle;
  pSVar2 = (__this->fields).GroupTitle;
  if (Il2CppMethodInitialized_07548634 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" > ");
    Il2CppMethodInitialized_07548634 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    value = pSVar2;
    if (pSVar2 == (System_String_o *)0x0) {
      value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
  }
  else {
    bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = System_String__Concat_5301f10(value," > ",pSVar2,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  return value;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$get_GroupSearchTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_GroupSearchTitle (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o __this, const MethodInfo* method);
// 0x5e41850
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e418b3: mov rbx, r14

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_GroupSearchTitle
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *value;
  
  value = (__this->fields).CategoryTitle;
  pSVar2 = (__this->fields).GroupTitle;
  if (Il2CppMethodInitialized_07548634 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" > ");
    Il2CppMethodInitialized_07548634 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    value = pSVar2;
    if (pSVar2 == (System_String_o *)0x0) {
      value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
  }
  else {
    bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = System_String__Concat_5301f10(value," > ",pSVar2,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  return value;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$ForGroup
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__ForGroup (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o __this, System_String_o* groupId, System_String_o* groupTitle, const MethodInfo* method);
// 0x5e41810

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__ForGroup
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *__this,System_String_o *groupId,
          System_String_o *groupTitle,MethodInfo *method)

{
  System_String_o *screenTitle;
  System_String_o *categoryId;
  System_String_o *categoryTitle;
  MethodInfo *in_stack_ffffffffffffffe8;
  
  screenTitle = (__this->fields).ScreenTitle;
  categoryId = (__this->fields).CategoryId;
  categoryTitle = (__this->fields).CategoryTitle;
  (__return_storage_ptr__->fields).CategoryTitle = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).GroupId = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).ScreenTitle = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).CategoryId = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).GroupTitle = (System_String_o *)0x0;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext___ctor_5d4b400
            (__return_storage_ptr__,screenTitle,categoryId,categoryTitle,groupId,groupTitle,
             in_stack_ffffffffffffffe8);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Title (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o __this, System_String_o* value, const MethodInfo* method);
// 0x5e4b600

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Title
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *__this,System_String_o *value,
          MethodInfo *method)

{
  if (value == (System_String_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  return value;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$Keywords
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Keywords (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o __this, System_String_o* value, const MethodInfo* method);
// 0x5e418e0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Keywords
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *__this,System_String_o *value,
          MethodInfo *method)

{
  System_String_array *parts;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07548631 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_07548631 = '\x01';
  }
  parts = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  if (parts == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)parts->max_length != 0) {
    parts->m_Items[0] = (__this->fields).ScreenTitle;
    Il2CppCodeGenWriteBarrier(parts->m_Items);
    if ((parts->max_length & 0xfffffffe) != 0) {
      parts->m_Items[1] = (__this->fields).CategoryTitle;
      Il2CppCodeGenWriteBarrier(parts->m_Items + 1);
      if (2 < (uint)parts->max_length) {
        parts->m_Items[2] = (__this->fields).GroupTitle;
        Il2CppCodeGenWriteBarrier(parts->m_Items + 2);
        if ((parts->max_length & 0xfffffffc) != 0) {
          parts->m_Items[3] = value;
          Il2CppCodeGenWriteBarrier(parts->m_Items + 3);
          pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__JoinWords
                             (parts,(MethodInfo *)value);
          return pSVar1;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$TitleCase
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase (System_String_o* value, const MethodInfo* method);
// 0x5e4b180
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e4b249: nop dword ptr [rax]
// asm:   0x5e4b2a6: jmp 0x5e4b36c
// asm:   0x5e4b31e: nop 

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase
          (System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  System_Text_StringBuilder_o *__this;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar4;
  MethodInfo *extraout_RDX_04;
  int index;
  int32_t iVar5;
  System_Text_StringBuilder_o *__this_01;
  
  if (Il2CppMethodInitialized_07548632 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_07548632 = '\x01';
  }
  bVar1 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (value != (System_String_o *)0x0) {
    iVar5 = (value->fields)._stringLength;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor_530d510(__this,iVar5,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
    pMVar4 = extraout_RDX;
    if (0 < (value->fields)._stringLength) {
      if (__this == (System_Text_StringBuilder_o *)0x0) {
        if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
          uVar2 = System_String__get_Chars(value,0,(MethodInfo *)0x0);
          if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_07556750);
          }
          bVar1 = System_Char__IsLetterOrDigit(uVar2,(MethodInfo *)0x0);
          pMVar4 = extraout_RDX_04;
          if (!bVar1) {
label_05e4b3e9:
            Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__AppendWord
                      ((System_Text_StringBuilder_o *)0x0,__this_00,pMVar4);
            ThrowNullReferenceException();
          }
          goto label_05e4b3e4;
        }
        iVar5 = 0;
        do {
          uVar2 = System_String__get_Chars(value,iVar5,(MethodInfo *)0x0);
          if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_07556750);
          }
          bVar1 = System_Char__IsLetterOrDigit(uVar2,(MethodInfo *)0x0);
          pMVar4 = extraout_RDX_02;
          if (!bVar1) goto label_05e4b3e9;
          System_Text_StringBuilder__Append_530f6a0(__this_00,uVar2,(MethodInfo *)0x0);
          iVar5 = iVar5 + 1;
          pMVar4 = extraout_RDX_03;
        } while (iVar5 < (value->fields)._stringLength);
      }
      else {
        index = 0;
        if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
          do {
            uVar2 = System_String__get_Chars(value,index,(MethodInfo *)0x0);
            if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_07556750);
            }
            bVar1 = System_Char__IsLetterOrDigit(uVar2,(MethodInfo *)0x0);
            if (bVar1) goto label_05e4b3e4;
            Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__AppendWord
                      (__this,(System_Text_StringBuilder_o *)0x0,method_00);
            System_Text_StringBuilder__Append_530f6a0(__this,uVar2,(MethodInfo *)0x0);
            index = index + 1;
            pMVar4 = extraout_RDX_00;
          } while (index < (value->fields)._stringLength);
        }
        else {
          do {
            uVar2 = System_String__get_Chars(value,index,(MethodInfo *)0x0);
            if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_07556750);
            }
            bVar1 = System_Char__IsLetterOrDigit(uVar2,(MethodInfo *)0x0);
            __this_01 = __this_00;
            if (!bVar1) {
              Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__AppendWord
                        (__this,__this_00,method_01);
              __this_01 = __this;
            }
            System_Text_StringBuilder__Append_530f6a0(__this_01,uVar2,(MethodInfo *)0x0);
            index = index + 1;
            pMVar4 = extraout_RDX_01;
          } while (index < (value->fields)._stringLength);
        }
      }
    }
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__AppendWord(__this,__this_00,pMVar4);
    if ((__this != (System_Text_StringBuilder_o *)0x0) &&
       (pSVar3 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                           (__this,(__this->klass->vtable)._3_ToString.method),
       pSVar3 != (System_String_o *)0x0)) {
      pSVar3 = System_String__Trim(pSVar3,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
label_05e4b3e4:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$AppendWord
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__AppendWord (System_Text_StringBuilder_o* result, System_Text_StringBuilder_o* word, const MethodInfo* method);
// 0x5e4b750
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e4b7b7: jmp 0x5e4b861

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__AppendWord
               (System_Text_StringBuilder_o *result,System_Text_StringBuilder_o *word,MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  System_String_o *value;
  MethodInfo *method_00;
  
  if (word == (System_Text_StringBuilder_o *)0x0) {
label_05e4b861:
    ThrowNullReferenceException();
  }
  iVar3 = System_Text_StringBuilder__get_Length(word,(MethodInfo *)0x0);
  if (iVar3 == 0) {
    return;
  }
  pSVar4 = (*(word->klass->vtable)._3_ToString.methodPtr)(word,(word->klass->vtable)._3_ToString.method);
  if (pSVar4 == (System_String_o *)0x0) goto label_05e4b861;
  method_00 = (MethodInfo *)0x0;
  value = System_String__ToUpperInvariant(pSVar4,(MethodInfo *)0x0);
  bVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__IsAcronym(value,method_00);
  if (bVar1) {
    if (result == (System_Text_StringBuilder_o *)0x0) goto label_05e4b861;
  }
  else {
    pSVar4 = System_String__ToLowerInvariant(pSVar4,(MethodInfo *)0x0);
    if (pSVar4 == (System_String_o *)0x0) goto label_05e4b861;
    uVar2 = System_String__get_Chars(pSVar4,0,(MethodInfo *)0x0);
    if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556750);
    }
    uVar2 = System_Char__ToUpperInvariant(uVar2,(MethodInfo *)0x0);
    if (result == (System_Text_StringBuilder_o *)0x0) goto label_05e4b861;
    System_Text_StringBuilder__Append_530f6a0(result,uVar2,(MethodInfo *)0x0);
    if ((pSVar4->fields)._stringLength < 2) goto label_05e4b84a;
    value = System_String__Substring(pSVar4,1,(MethodInfo *)0x0);
  }
  System_Text_StringBuilder__Append_530ed80(result,value,(MethodInfo *)0x0);
label_05e4b84a:
  System_Text_StringBuilder__set_Length(word,0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$IsAcronym
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__IsAcronym (System_String_o* value, const MethodInfo* method);
// 0x5e4b870

bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__IsAcronym
               (System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_07548633 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ODM");
    il2cpp_codegen_initialize_runtime_metadata(&"TS");
    il2cpp_codegen_initialize_runtime_metadata(&"HUD");
    il2cpp_codegen_initialize_runtime_metadata(&"TPS");
    il2cpp_codegen_initialize_runtime_metadata(&"WOW");
    il2cpp_codegen_initialize_runtime_metadata(&"CL");
    il2cpp_codegen_initialize_runtime_metadata(&"FPS");
    il2cpp_codegen_initialize_runtime_metadata(&"KDR");
    il2cpp_codegen_initialize_runtime_metadata(&"UI");
    il2cpp_codegen_initialize_runtime_metadata(&"FOV");
    il2cpp_codegen_initialize_runtime_metadata(&"AOTTG");
    Il2CppMethodInitialized_07548633 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(value,(MethodInfo *)0x0);
  if (uVar2 < 0x5942b41b) {
    if (uVar2 < 0x256778e7) {
      if (uVar2 == 0xad61c8) {
        ppSVar3 = &"FPS";
      }
      else {
        if (uVar2 != 0x256778e6) {
          return false;
        }
        ppSVar3 = &"HUD";
      }
    }
    else if (uVar2 == 0x25f56a30) {
      ppSVar3 = &"TS";
    }
    else if (uVar2 == 0x345d4ece) {
      ppSVar3 = &"TPS";
    }
    else {
      if (uVar2 != 0x5942b41a) {
        return false;
      }
      ppSVar3 = &"AOTTG";
    }
  }
  else if (uVar2 < 0x82da261b) {
    if (uVar2 == 0x82da261a) {
      ppSVar3 = &"CL";
    }
    else if (uVar2 == 0x65239864) {
      ppSVar3 = &"WOW";
    }
    else {
      if (uVar2 != 0x7bf3b2fb) {
        return false;
      }
      ppSVar3 = &"UI";
    }
  }
  else if (uVar2 == 0xadc8a7c8) {
    ppSVar3 = &"KDR";
  }
  else if (uVar2 == 0xe91aa979) {
    ppSVar3 = &"ODM";
  }
  else {
    if (uVar2 != 0xf3cda0fc) {
      return false;
    }
    ppSVar3 = &"FOV";
  }
  bVar1 = System_String__op_Equality(value,*ppSVar3,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  return false;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$JoinPath
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__JoinPath (System_String_o* first, System_String_o* second, const MethodInfo* method);
// 0x5e4b570

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__JoinPath
          (System_String_o *first,System_String_o *second,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07548634 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" > ");
    Il2CppMethodInitialized_07548634 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(first,(MethodInfo *)0x0);
  if (bVar1) {
    if (second == (System_String_o *)0x0) {
      second = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
  }
  else {
    bVar1 = System_String__IsNullOrEmpty(second,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = System_String__Concat_5301f10(first," > ",second,(MethodInfo *)0x0);
      return pSVar2;
    }
    second = first;
  }
  return second;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$JoinWords
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__JoinWords (System_String_array* parts, const MethodInfo* method);
// 0x5e4b630

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__JoinWords
          (System_String_array *parts,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int32_t iVar3;
  System_Text_StringBuilder_o *__this;
  ulong uVar4;
  System_String_o *pSVar5;
  int iVar6;
  ulong uVar7;
  
  if (Il2CppMethodInitialized_07548635 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_07548635 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  if (parts != (System_String_array *)0x0) {
    iVar6 = (int)parts->max_length;
    uVar4 = parts->max_length & 0xffffffff;
    if (__this == (System_Text_StringBuilder_o *)0x0) {
      if (iVar6 < 1) goto label_05e4b74b;
      uVar7 = 0;
      do {
        if (uVar4 <= uVar7) goto label_05e4b746;
        bVar2 = System_String__IsNullOrWhiteSpace(parts->m_Items[uVar7],(MethodInfo *)0x0);
        if (!bVar2) goto label_05e4b74b;
        uVar7 = uVar7 + 1;
        uVar1 = (uint)parts->max_length;
        uVar4 = (ulong)uVar1;
      } while ((long)uVar7 < (long)(int)uVar1);
    }
    else {
      if (iVar6 < 1) goto label_05e4b72b;
      uVar7 = 0;
      do {
        if (uVar4 <= uVar7) {
label_05e4b746:
          ThrowIndexOutOfRangeException();
        }
        bVar2 = System_String__IsNullOrWhiteSpace(parts->m_Items[uVar7],(MethodInfo *)0x0);
        if (!bVar2) {
          iVar3 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0);
          if (0 < iVar3) {
            System_Text_StringBuilder__Append_530f6a0(__this,0x20,(MethodInfo *)0x0);
          }
          if ((uint)parts->max_length <= uVar7) goto label_05e4b746;
          System_Text_StringBuilder__Append_530ed80(__this,parts->m_Items[uVar7],(MethodInfo *)0x0);
        }
        uVar7 = uVar7 + 1;
        uVar1 = (uint)parts->max_length;
        uVar4 = (ulong)uVar1;
      } while ((long)uVar7 < (long)(int)uVar1);
    }
    if (__this != (System_Text_StringBuilder_o *)0x0) {
label_05e4b72b:
      pSVar5 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar5;
    }
  }
label_05e4b74b:
  ThrowNullReferenceException();
}


