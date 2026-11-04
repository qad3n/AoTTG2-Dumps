// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsSearchContext.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o __this, System_String_o* screenTitle, System_String_o* categoryId, System_String_o* categoryTitle, System_String_o* groupId, System_String_o* groupTitle, const MethodInfo* method);
// 0x182393430
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18239346f: mov rax, qword ptr [rip + 0x1cfe59a]  ; "Settings"
// asm:   0x182393476: jmp 0x182393482

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *__this,
               System_String_o *screenTitle,System_String_o *categoryId,System_String_o *categoryTitle,
               System_String_o *groupId,System_String_o *groupTitle,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347b10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Settings");
    Il2CppMethodInitialized_184347b10 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(screenTitle,(MethodInfo *)0x0);
  pSVar2 = "Settings";
  if (!bVar1) {
    pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase
                       (screenTitle,(MethodInfo *)0x0);
  }
  (__this->fields).ScreenTitle = pSVar2;
  Il2CppCodeGenWriteBarrier((void **)__this,pSVar2);
  if (categoryId == (System_String_o *)0x0) {
    categoryId = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields).CategoryId = categoryId;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CategoryId,categoryId);
  pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase
                     (categoryTitle,(MethodInfo *)0x0);
  (__this->fields).CategoryTitle = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CategoryTitle,pSVar2);
  if (groupId == (System_String_o *)0x0) {
    groupId = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields).GroupId = groupId;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GroupId,groupId);
  pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase
                     (groupTitle,(MethodInfo *)0x0);
  (__this->fields).GroupTitle = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GroupTitle,pSVar2);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$get_HasCategory
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_HasCategory (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o __this, const MethodInfo* method);
// 0x182393530

bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_HasCategory
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields).CategoryId,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$get_SectionId
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_SectionId (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o __this, const MethodInfo* method);
// 0x180adc170

System_String_o*
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_SectionId(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o __this, MethodInfo* method)

{
  return (__this->fields)._Value_k__BackingField;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$get_SectionTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_SectionTitle (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o __this, const MethodInfo* method);
// 0x182393550

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_SectionTitle
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *value;
  
  pSVar2 = (__this->fields).CategoryTitle;
  value = (__this->fields).GroupTitle;
  if (Il2CppMethodInitialized_184347b14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" > ");
    Il2CppMethodInitialized_184347b14 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar1) {
      return pSVar2;
    }
    pSVar2 = System_String__Concat_1969b70(pSVar2," > ",value,(MethodInfo *)0x0);
    return pSVar2;
  }
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  return value;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$get_GroupSearchTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_GroupSearchTitle (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o __this, const MethodInfo* method);
// 0x182393520

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_GroupSearchTitle
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__get_SectionTitle
                     (__this,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$ForGroup
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__ForGroup (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o __this, System_String_o* groupId, System_String_o* groupTitle, const MethodInfo* method);
// 0x182392bd0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182392c2a: mov rax, qword ptr [rip + 0x1cfeddf]  ; "Settings"
// asm:   0x182392c31: jmp 0x182392c3d

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__ForGroup
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *__this,System_String_o *groupId,
          System_String_o *groupTitle,MethodInfo *method)

{
  System_String_o *value;
  System_String_o *value_00;
  System_String_o *pSVar1;
  System_String_o *value_01;
  bool bVar2;
  
  pSVar1 = (__this->fields).ScreenTitle;
  value_01 = (__this->fields).CategoryId;
  bVar2 = Il2CppMethodInitialized_184347b10 == '\0';
  value = (__this->fields).CategoryTitle;
  (__return_storage_ptr__->fields).ScreenTitle = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).CategoryId = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).CategoryTitle = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).GroupId = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).GroupTitle = (System_String_o *)0x0;
  if (bVar2) {
    il2cpp_codegen_initialize_runtime_metadata(&"Settings");
    Il2CppMethodInitialized_184347b10 = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
  value_00 = "Settings";
  if (!bVar2) {
    value_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase
                         (pSVar1,(MethodInfo *)0x0);
  }
  (__return_storage_ptr__->fields).ScreenTitle = value_00;
  Il2CppCodeGenWriteBarrier((void **)__return_storage_ptr__,value_00);
  if (value_01 == (System_String_o *)0x0) {
    value_01 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__return_storage_ptr__->fields).CategoryId = value_01;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).CategoryId,value_01);
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase(value,(MethodInfo *)0x0);
  (__return_storage_ptr__->fields).CategoryTitle = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).CategoryTitle,pSVar1);
  if (groupId == (System_String_o *)0x0) {
    groupId = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__return_storage_ptr__->fields).GroupId = groupId;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).GroupId,groupId);
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase
                     (groupTitle,(MethodInfo *)0x0);
  (__return_storage_ptr__->fields).GroupTitle = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).GroupTitle,pSVar1);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Title (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o __this, System_String_o* value, const MethodInfo* method);
// 0x182393410

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Title
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *__this,System_String_o *value,
          MethodInfo *method)

{
  if (value != (System_String_o *)0x0) {
    return value;
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$Keywords
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Keywords (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o __this, System_String_o* value, const MethodInfo* method);
// 0x182393030

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Keywords
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *__this,System_String_o *value,
          MethodInfo *method)

{
  Il2CppClass *pIVar1;
  bool bVar2;
  int32_t iVar3;
  Il2CppObject *pIVar4;
  System_Runtime_Serialization_ObjectHolder_o *__this_00;
  System_String_o *pSVar5;
  uint uVar6;
  
  if (Il2CppMethodInitialized_184347b11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_184347b11 = '\x01';
  }
  pIVar4 = SZArrayNew(TypeInfo_string_array,4);
  if (pIVar4 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar4[1].monitor != 0) {
      pIVar1 = (Il2CppClass *)(__this->fields).ScreenTitle;
      pIVar4[2].klass = pIVar1;
      Il2CppCodeGenWriteBarrier(&pIVar4[2].klass,pIVar1);
      if (1 < *(uint *)&pIVar4[1].monitor) {
        pSVar5 = (__this->fields).CategoryTitle;
        pIVar4[2].monitor = pSVar5;
        Il2CppCodeGenWriteBarrier(&pIVar4[2].monitor,pSVar5);
        if (2 < *(uint *)&pIVar4[1].monitor) {
          pIVar1 = (Il2CppClass *)(__this->fields).GroupTitle;
          pIVar4[3].klass = pIVar1;
          Il2CppCodeGenWriteBarrier(&pIVar4[3].klass,pIVar1);
          if (3 < *(uint *)&pIVar4[1].monitor) {
            pIVar4[3].monitor = value;
            Il2CppCodeGenWriteBarrier(&pIVar4[3].monitor,value);
            if (Il2CppMethodInitialized_184347b15 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
              Il2CppMethodInitialized_184347b15 = '\x01';
            }
            __this_00 = (System_Runtime_Serialization_ObjectHolder_o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
            System_Text_StringBuilder___ctor((System_Text_StringBuilder_o *)__this_00,(MethodInfo *)0x0);
            for (uVar6 = 0; (int)uVar6 < *(int *)&pIVar4[1].monitor; uVar6 = uVar6 + 1) {
              if (*(uint *)&pIVar4[1].monitor <= uVar6) goto label_1823931b1;
              bVar2 = System_String__IsNullOrWhiteSpace
                                ((System_String_o *)(&pIVar4[2].klass)[(int)uVar6],(MethodInfo *)0x0);
              if (!bVar2) {
                if (__this_00 == (System_Runtime_Serialization_ObjectHolder_o *)0x0) goto label_1823931ab;
                iVar3 = System_Text_StringBuilder__get_Length
                                  (__this_00,(MethodInfo *)0x0);
                if (0 < iVar3) {
                  System_Text_StringBuilder__Append_197e090
                            ((System_Text_StringBuilder_o *)__this_00,0x20,(MethodInfo *)0x0);
                }
                if (*(uint *)&pIVar4[1].monitor <= uVar6) goto label_1823931b1;
                System_Text_StringBuilder__Append_197dca0
                          ((System_Text_StringBuilder_o *)__this_00,
                           (System_String_o *)(&pIVar4[2].klass)[(int)uVar6],(MethodInfo *)0x0);
              }
            }
            if (__this_00 != (System_Runtime_Serialization_ObjectHolder_o *)0x0) {
              pSVar5 = (System_String_o *)
                       (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                                 (__this_00,(__this_00->klass->vtable)._3_ToString.method);
              return pSVar5;
            }
            goto label_1823931ab;
          }
        }
      }
    }
label_1823931b1:
    ThrowIndexOutOfRangeException();
  }
label_1823931ab:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$TitleCase
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase (System_String_o* value, const MethodInfo* method);
// 0x1823931c0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823932a1: mov rcx, rdi
// asm:   0x1823932a4: jmp 0x1823932b2
// asm:   0x1823932a6: test rbx, rbx
// asm:   0x1823932af: mov rcx, rbx
// asm:   0x182393395: mov rdx, rbp

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__TitleCase
          (System_String_o *value,MethodInfo *method)

{
  System_Runtime_Serialization_ObjectHolder_o *__this;
  bool bVar1;
  uint16_t uVar2;
  System_Runtime_Serialization_ObjectHolder_o *__this_00;
  System_Runtime_Serialization_ObjectHolder_o *__this_01;
  System_String_o *pSVar3;
  System_String_o *value_00;
  int32_t iVar4;
  
  if (Il2CppMethodInitialized_184347b12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_184347b12 = '\x01';
  }
  bVar1 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (value == (System_String_o *)0x0) goto label_182393407;
  iVar4 = (value->fields)._stringLength;
  __this_00 = (System_Runtime_Serialization_ObjectHolder_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor_1980e60((System_Text_StringBuilder_o *)__this_00,iVar4,(MethodInfo *)0x0);
  __this_01 = (System_Runtime_Serialization_ObjectHolder_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor((System_Text_StringBuilder_o *)__this_01,(MethodInfo *)0x0);
  for (iVar4 = 0; iVar4 < (value->fields)._stringLength; iVar4 = iVar4 + 1) {
    uVar2 = System_String__get_Chars(value,iVar4,(MethodInfo *)0x0);
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    bVar1 = System_Char__IsLetterOrDigit(uVar2,(MethodInfo *)0x0);
    __this = __this_01;
    if (!bVar1) {
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__AppendWord
                ((System_Text_StringBuilder_o *)__this_00,(System_Text_StringBuilder_o *)__this_01,
                 (MethodInfo *)0x0);
      __this = __this_00;
    }
    if (__this == (System_Runtime_Serialization_ObjectHolder_o *)0x0) goto label_182393407;
    System_Text_StringBuilder__Append_197e090((System_Text_StringBuilder_o *)__this,uVar2,(MethodInfo *)0x0);
  }
  if (__this_01 == (System_Runtime_Serialization_ObjectHolder_o *)0x0) goto label_182393407;
  iVar4 = System_Text_StringBuilder__get_Length(__this_01,(MethodInfo *)0x0);
  if (iVar4 != 0) {
    pSVar3 = (System_String_o *)(*(__this_01->klass->vtable)._3_ToString.methodPtr)(__this_01);
    if (pSVar3 == (System_String_o *)0x0) goto label_182393407;
    value_00 = System_String__ToUpperInvariant(pSVar3,(MethodInfo *)0x0);
    bVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__IsAcronym(value_00,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      if (__this_00 == (System_Runtime_Serialization_ObjectHolder_o *)0x0) goto label_182393407;
label_182393398:
      System_Text_StringBuilder__Append_197dca0
                ((System_Text_StringBuilder_o *)__this_00,value_00,(MethodInfo *)0x0);
    }
    else {
      pSVar3 = System_String__ToLowerInvariant(pSVar3,(MethodInfo *)0x0);
      if (pSVar3 == (System_String_o *)0x0) goto label_182393407;
      uVar2 = System_String__get_Chars(pSVar3,0,(MethodInfo *)0x0);
      if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e48);
      }
      uVar2 = System_Char__ToUpperInvariant(uVar2,(MethodInfo *)0x0);
      if (__this_00 == (System_Runtime_Serialization_ObjectHolder_o *)0x0) goto label_182393407;
      System_Text_StringBuilder__Append_197e090
                ((System_Text_StringBuilder_o *)__this_00,uVar2,(MethodInfo *)0x0);
      if (1 < (pSVar3->fields)._stringLength) {
        value_00 = System_String__Substring(pSVar3,1,(MethodInfo *)0x0);
        goto label_182393398;
      }
    }
    System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)__this_01,0,(MethodInfo *)0x0);
  }
  if ((__this_00 != (System_Runtime_Serialization_ObjectHolder_o *)0x0) &&
     (pSVar3 = (*(((System_Text_StringBuilder_c *)__this_00->klass)->vtable)._3_ToString.methodPtr)
                         (__this_00,
                          (((System_Text_StringBuilder_c *)__this_00->klass)->vtable)._3_ToString.method),
     pSVar3 != (System_String_o *)0x0)) {
    pSVar3 = System_String__Trim(pSVar3,(MethodInfo *)0x0);
    return pSVar3;
  }
label_182393407:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$AppendWord
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__AppendWord (System_Text_StringBuilder_o* result, System_Text_StringBuilder_o* word, const MethodInfo* method);
// 0x182392ac0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182392b9c: mov rdx, rbp

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__AppendWord
               (System_Text_StringBuilder_o *result,System_Text_StringBuilder_o *word,MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  System_String_o *value;
  
  if (word == (System_Text_StringBuilder_o *)0x0) {
label_182392bc0:
    ThrowNullReferenceException();
  }
  iVar3 = System_Runtime_Serialization_ObjectHolder__get_TotalDependentObjects
                    ((System_Runtime_Serialization_ObjectHolder_o *)word,(MethodInfo *)0x0);
  if (iVar3 == 0) {
    return;
  }
  pSVar4 = (*(word->klass->vtable)._3_ToString.methodPtr)(word,(word->klass->vtable)._3_ToString.method);
  if (pSVar4 == (System_String_o *)0x0) goto label_182392bc0;
  value = System_String__ToUpperInvariant(pSVar4,(MethodInfo *)0x0);
  bVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__IsAcronym(value,(MethodInfo *)0x0);
  if (bVar1) {
    if (result == (System_Text_StringBuilder_o *)0x0) goto label_182392bc0;
  }
  else {
    pSVar4 = System_String__ToLowerInvariant(pSVar4,(MethodInfo *)0x0);
    if (pSVar4 == (System_String_o *)0x0) goto label_182392bc0;
    uVar2 = System_String__get_Chars(pSVar4,0,(MethodInfo *)0x0);
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    uVar2 = System_Char__ToUpperInvariant(uVar2,(MethodInfo *)0x0);
    if (result == (System_Text_StringBuilder_o *)0x0) goto label_182392bc0;
    System_Text_StringBuilder__Append_197e090(result,uVar2,(MethodInfo *)0x0);
    if ((pSVar4->fields)._stringLength < 2) goto label_182392baa;
    value = System_String__Substring(pSVar4,1,(MethodInfo *)0x0);
  }
  System_Text_StringBuilder__Append_197dca0(result,value,(MethodInfo *)0x0);
label_182392baa:
  System_Text_StringBuilder__set_Length(word,0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$IsAcronym
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__IsAcronym (System_String_o* value, const MethodInfo* method);
// 0x182392ce0
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182392da0: mov rdx, qword ptr [rip + 0x1d430c1]  ; "KDR"
// asm:   0x182392da7: jmp 0x182392e31
// asm:   0x182392db3: mov rdx, qword ptr [rip + 0x1d115de]  ; "ODM"
// asm:   0x182392dba: jmp 0x182392e31
// asm:   0x182392dc3: mov rdx, qword ptr [rip + 0x1d4c9fe]  ; "FOV"
// asm:   0x182392dca: jmp 0x182392e31
// asm:   0x182392dd3: mov rdx, qword ptr [rip + 0x1d26476]  ; "WOW"
// asm:   0x182392dda: jmp 0x182392e56
// asm:   0x182392de3: mov rdx, qword ptr [rip + 0x1cf4c6e]  ; "UI"
// asm:   0x182392dea: jmp 0x182392e31
// asm:   0x182392df3: mov rdx, qword ptr [rip + 0x1d4633e]  ; "CL"
// asm:   0x182392dfa: jmp 0x182392e31
// asm:   0x182392e0a: mov rdx, qword ptr [rip + 0x1d34767]  ; "TS"
// asm:   0x182392e11: jmp 0x182392e31
// asm:   0x182392e1a: mov rdx, qword ptr [rip + 0x1d342f7]  ; "TPS"
// asm:   0x182392e21: jmp 0x182392e31
// asm:   0x182392e2a: mov rdx, qword ptr [rip + 0x1cec927]  ; "AOTTG"
// asm:   0x182392e4f: mov rdx, qword ptr [rip + 0x1d4d04a]  ; "FPS"

bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__IsAcronym
               (System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347b13 == '\0') {
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
    Il2CppMethodInitialized_184347b13 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(value,(MethodInfo *)0x0);
  if (uVar2 < 0x5942b41b) {
    if (uVar2 < 0x256778e7) {
      pSVar3 = "FPS";
      if (uVar2 != 0xad61c8) {
        if (uVar2 != 0x256778e6) {
          return false;
        }
        bVar1 = System_String__op_Equality(value,"HUD",(MethodInfo *)0x0);
        return bVar1;
      }
label_182392e56:
      bVar1 = System_String__op_Equality(value,pSVar3,(MethodInfo *)0x0);
      if (!bVar1) {
        return false;
      }
      return true;
    }
    pSVar3 = "TS";
    if (((uVar2 != 0x25f56a30) && (pSVar3 = "TPS", uVar2 != 0x345d4ece)) &&
       (pSVar3 = "AOTTG", uVar2 != 0x5942b41a)) {
      return false;
    }
  }
  else if (uVar2 < 0x82da261b) {
    pSVar3 = "WOW";
    if (uVar2 == 0x65239864) goto label_182392e56;
    pSVar3 = "UI";
    if ((uVar2 != 0x7bf3b2fb) && (pSVar3 = "CL", uVar2 != 0x82da261a)) {
      return false;
    }
  }
  else {
    pSVar3 = "KDR";
    if (((uVar2 != 0xadc8a7c8) && (pSVar3 = "ODM", uVar2 != 0xe91aa979)) &&
       (pSVar3 = "FOV", uVar2 != 0xf3cda0fc)) {
      return false;
    }
  }
  bVar1 = System_String__op_Equality(value,pSVar3,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  return true;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$JoinPath
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__JoinPath (System_String_o* first, System_String_o* second, const MethodInfo* method);
// 0x182392ea0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__JoinPath
          (System_String_o *first,System_String_o *second,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347b14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" > ");
    Il2CppMethodInitialized_184347b14 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(first,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__IsNullOrEmpty(second,(MethodInfo *)0x0);
    if (bVar1) {
      return first;
    }
    pSVar2 = System_String__Concat_1969b70(first," > ",second,(MethodInfo *)0x0);
    return pSVar2;
  }
  if (second == (System_String_o *)0x0) {
    second = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  return second;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$JoinWords
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__JoinWords (System_String_array* parts, const MethodInfo* method);
// 0x182392f40

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__JoinWords
          (System_String_array *parts,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Runtime_Serialization_ObjectHolder_o *__this;
  System_String_o *pSVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184347b15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_184347b15 = '\x01';
  }
  __this = (System_Runtime_Serialization_ObjectHolder_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor((System_Text_StringBuilder_o *)__this,(MethodInfo *)0x0);
  if (parts != (System_String_array *)0x0) {
    for (uVar4 = 0; (int)uVar4 < (int)parts->max_length; uVar4 = uVar4 + 1) {
      if ((uint)parts->max_length <= uVar4) {
label_182393024:
        ThrowIndexOutOfRangeException();
      }
      bVar1 = System_String__IsNullOrWhiteSpace(parts->m_Items[(int)uVar4],(MethodInfo *)0x0);
      if (!bVar1) {
        if (__this == (System_Runtime_Serialization_ObjectHolder_o *)0x0) goto label_18239301e;
        iVar2 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0)
        ;
        if (0 < iVar2) {
          System_Text_StringBuilder__Append_197e090
                    ((System_Text_StringBuilder_o *)__this,0x20,(MethodInfo *)0x0);
        }
        if ((uint)parts->max_length <= uVar4) goto label_182393024;
        System_Text_StringBuilder__Append_197dca0
                  ((System_Text_StringBuilder_o *)__this,parts->m_Items[(int)uVar4],(MethodInfo *)0x0);
      }
    }
    if (__this != (System_Runtime_Serialization_ObjectHolder_o *)0x0) {
      pSVar3 = (System_String_o *)
               (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar3;
    }
  }
label_18239301e:
  ThrowNullReferenceException();
}


