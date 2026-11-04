// Type: UI.ChatDisplayLineComposer
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ChatDisplayLineComposer.cs
// Prior real C# source: none
// --------------------------------

// UI.ChatDisplayLineComposer$$ComposePlayerLine
// il2cpp: System_String_o* UI_ChatDisplayLineComposer__ComposePlayerLine (GameManagers_ChatManager_ChatDisplayLine_o line, UI_ChatDisplayNameRange_o* nameRange, float extraNameReservePixels, const MethodInfo* method);
// 0x182228980

System_String_o *
UI_ChatDisplayLineComposer__ComposePlayerLine
          (GameManagers_ChatManager_ChatDisplayLine_o *line,UI_ChatDisplayNameRange_o *nameRange,
          float extraNameReservePixels,MethodInfo *method)

{
  System_String_o *value;
  System_String_o *value_00;
  System_String_o *value_01;
  UI_ChatDisplayNameRange_Fields UVar1;
  System_String_o *pSVar2;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar3;
  System_String_array *values;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  int iVar6;
  float local_res18 [2];
  
  local_res18[0] = extraNameReservePixels;
  if (Il2CppMethodInitialized_1843471c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"0.###");
    il2cpp_codegen_initialize_runtime_metadata(&"\">");
    il2cpp_codegen_initialize_runtime_metadata(&"<space=");
    il2cpp_codegen_initialize_runtime_metadata(&"<link=\"");
    il2cpp_codegen_initialize_runtime_metadata(&"</link>");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_1843471c4 = '\x01';
  }
  ppSVar5 = &(line->fields).TimeText;
  if ((line->fields).TimeText == (System_String_o *)0x0) {
    ppSVar5 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  pSVar4 = *ppSVar5;
  ppSVar5 = &(line->fields).IdText;
  if ((line->fields).IdText == (System_String_o *)0x0) {
    ppSVar5 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  value = *ppSVar5;
  ppSVar5 = &(line->fields).SenderName;
  if ((line->fields).SenderName == (System_String_o *)0x0) {
    ppSVar5 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  value_00 = *ppSVar5;
  ppSVar5 = &(line->fields).BodyText;
  if ((line->fields).BodyText == (System_String_o *)0x0) {
    ppSVar5 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  value_01 = *ppSVar5;
  pSVar2 = System_Int32__ToString(&(line->fields).SenderID,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_1969b70("<link=\"",pSVar2,"\">",(MethodInfo *)0x0)
  ;
  if ((((pSVar4 != (System_String_o *)0x0) && (pSVar2 != (System_String_o *)0x0)) &&
      (value != (System_String_o *)0x0)) && (value_00 != (System_String_o *)0x0)) {
    iVar6 = (value->fields)._stringLength + (pSVar4->fields)._stringLength + (pSVar2->fields)._stringLength;
    UVar1.SourceEndIndex = (value_00->fields)._stringLength + iVar6;
    UVar1.SourceStartIndex = iVar6;
    nameRange->fields = UVar1;
    if (local_res18[0] <= 0.0) {
      pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar3 = System_Single__ToString_1b4a0d0
                         (local_res18,"0.###",(System_IFormatProvider_o *)provider,
                          (MethodInfo *)0x0);
      pSVar3 = System_String__Concat_1969b70
                         ("<space=",pSVar3,">",(MethodInfo *)0x0);
    }
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,7);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = pSVar4;
        Il2CppCodeGenWriteBarrier(values->m_Items,pSVar4);
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = pSVar2;
          Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar2);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = value;
            Il2CppCodeGenWriteBarrier(values->m_Items + 2,value);
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = value_00;
              Il2CppCodeGenWriteBarrier(values->m_Items + 3,value_00);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = pSVar3;
                Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar3);
                pSVar4 = "</link>";
                if (5 < (uint)values->max_length) {
                  values->m_Items[5] = "</link>";
                  Il2CppCodeGenWriteBarrier(values->m_Items + 5,pSVar4);
                  if (6 < (uint)values->max_length) {
                    values->m_Items[6] = value_01;
                    Il2CppCodeGenWriteBarrier(values->m_Items + 6,value_01);
                    pSVar4 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
                    return pSVar4;
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


