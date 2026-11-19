// Type: UI.ChatDisplayLineComposer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ChatDisplayLineComposer.cs
// Prior real C# source: none
// --------------------------------

// UI.ChatDisplayLineComposer$$ComposePlayerLine
// il2cpp: System_String_o* UI_ChatDisplayLineComposer__ComposePlayerLine (GameManagers_ChatManager_ChatDisplayLine_o line, UI_ChatDisplayNameRange_o* nameRange, float extraNameReservePixels, const MethodInfo* method);
// 0x5d08650
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d08680: mov r13, qword ptr [rbp + 0x10]
// asm:   0x5d08684: test r13, r13
// asm:   0x5d08687: je 0x5d08861

System_String_o *
UI_ChatDisplayLineComposer__ComposePlayerLine
          (GameManagers_ChatManager_ChatDisplayLine_o line,UI_ChatDisplayNameRange_o *nameRange,
          float extraNameReservePixels,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  UI_ChatDisplayNameRange_Fields UVar6;
  System_Globalization_CultureInfo_o *provider;
  System_String_array *values;
  System_String_o *pSVar7;
  float local_44;
  System_String_o *local_40;
  UI_ChatDisplayNameRange_Fields *local_38;
  
  local_44 = extraNameReservePixels;
  local_38 = &nameRange->fields;
  if (Il2CppMethodInitialized_07547d34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"0.###");
    il2cpp_codegen_initialize_runtime_metadata(&"\">");
    il2cpp_codegen_initialize_runtime_metadata(&"<space=");
    il2cpp_codegen_initialize_runtime_metadata(&"<link=\"");
    il2cpp_codegen_initialize_runtime_metadata(&"</link>");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_07547d34 = '\x01';
  }
  if (line.fields.TimeText == (System_String_o *)0x0) {
    pSVar7 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8);
  }
  else {
    pSVar7 = line.fields.TimeText;
  }
  if (line.fields.IdText == (System_String_o *)0x0) {
    pSVar2 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8);
  }
  else {
    pSVar2 = line.fields.IdText;
  }
  if (line.fields.SenderName == (System_String_o *)0x0) {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText)->_2).
            cctor_finished_or_no_cctor;
    pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText)->_2).
            cctor_finished_or_no_cctor;
    pSVar3 = line.fields.SenderName;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
  }
  pSVar3 = Gisketch_Aottg2UI_Styling_GisketchArabicText__ToVisual(pSVar3,false,(MethodInfo *)0x0);
  if (line.fields.BodyText == (System_String_o *)0x0) {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor;
    pSVar4 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor;
    pSVar4 = line.fields.BodyText;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
  }
  pSVar4 = Gisketch_Aottg2UI_Styling_GisketchArabicText__ToVisual(pSVar4,false,(MethodInfo *)0x0);
  pSVar5 = System_Int32__ToString(&line.fields.SenderID,(MethodInfo *)0x0);
  pSVar5 = System_String__Concat_5301f10("<link=\"",pSVar5,"\">",(MethodInfo *)0x0)
  ;
  if ((((pSVar7 != (System_String_o *)0x0) && (pSVar5 != (System_String_o *)0x0)) &&
      (pSVar2 != (System_String_o *)0x0)) && (pSVar3 != (System_String_o *)0x0)) {
    UVar6.SourceStartIndex =
         (pSVar7->fields)._stringLength + (pSVar2->fields)._stringLength + (pSVar5->fields)._stringLength;
    UVar6.SourceEndIndex = (pSVar3->fields)._stringLength + UVar6.SourceStartIndex;
    *local_38 = UVar6;
    local_40 = pSVar4;
    if (extraNameReservePixels <= 0.0) {
      pSVar4 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    else {
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar4 = System_Single__ToString_54d0ad0
                         (&local_44,"0.###",(System_IFormatProvider_o *)provider,
                          (MethodInfo *)0x0);
      pSVar4 = System_String__Concat_5301f10
                         ("<space=",pSVar4,">",(MethodInfo *)0x0);
    }
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,7);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = pSVar7;
        Il2CppCodeGenWriteBarrier(values->m_Items);
        if ((values->max_length & 0xfffffffe) != 0) {
          values->m_Items[1] = pSVar5;
          Il2CppCodeGenWriteBarrier(values->m_Items + 1);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = pSVar2;
            Il2CppCodeGenWriteBarrier(values->m_Items + 2);
            if ((values->max_length & 0xfffffffc) != 0) {
              values->m_Items[3] = pSVar3;
              Il2CppCodeGenWriteBarrier(values->m_Items + 3);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = pSVar4;
                Il2CppCodeGenWriteBarrier(values->m_Items + 4);
                if (5 < (uint)values->max_length) {
                  values->m_Items[5] = "</link>";
                  Il2CppCodeGenWriteBarrier(values->m_Items + 5);
                  if (6 < (uint)values->max_length) {
                    values->m_Items[6] = local_40;
                    Il2CppCodeGenWriteBarrier(values->m_Items + 6);
                    pSVar7 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
                    return pSVar7;
                  }
                }
              }
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


