// Type: UI.ChatDisplayLineComposer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/ChatDisplayLineComposer.cs
// Prior real C# source: none
// --------------------------------

// UI.ChatDisplayLineComposer$$ComposePlayerLine
// il2cpp: System_String_o* UI_ChatDisplayLineComposer__ComposePlayerLine (GameManagers_ChatManager_ChatDisplayLine_o line, UI_ChatDisplayNameRange_o* nameRange, float extraNameReservePixels, const MethodInfo* method);
// 0x43a6a10

System_String_o *
UI_ChatDisplayLineComposer__ComposePlayerLine
          (GameManagers_ChatManager_ChatDisplayLine_o line,UI_ChatDisplayNameRange_o *nameRange,
          float extraNameReservePixels,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  UI_ChatDisplayNameRange_Fields UVar6;
  System_Globalization_CultureInfo_o *method_00;
  System_String_o *pSVar7;
  System_String_array *values;
  System_String_o *pSVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float __this;
  float local_3c;
  System_String_o *local_38;
  
  local_3c = extraNameReservePixels;
  if (g_data_057ae337 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"0.###");
    il2cpp_runtime_helper_023445d0(&"\">");
    il2cpp_runtime_helper_023445d0(&"<space=");
    il2cpp_runtime_helper_023445d0(&"<link=\"");
    il2cpp_runtime_helper_023445d0(&"</link>");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057ae337 = '\x01';
  }
  pSVar8 = line.fields.TimeText;
  if (line.fields.TimeText == (System_String_o *)0x0) {
    pSVar8 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
  }
  pSVar3 = line.fields.IdText;
  if (line.fields.IdText == (System_String_o *)0x0) {
    pSVar3 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
  }
  pSVar2 = line.fields.SenderName;
  if (line.fields.SenderName == (System_String_o *)0x0) {
    pSVar2 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
  }
  pSVar7 = line.fields.BodyText;
  if (line.fields.BodyText == (System_String_o *)0x0) {
    pSVar7 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
  }
  pSVar5 = System_Int32__ToString((int)&line + 0x30,(MethodInfo *)0x0);
  pSVar5 = System_String__Concat_3af7150("<link=\"",pSVar5,"\">",(MethodInfo *)0x0);
  if ((((pSVar8 != (System_String_o *)0x0) && (pSVar5 != (System_String_o *)0x0)) &&
      (pSVar3 != (System_String_o *)0x0)) && (pSVar2 != (System_String_o *)0x0)) {
    UVar6.SourceStartIndex =
         (pSVar8->fields)._stringLength + (pSVar5->fields)._stringLength + (pSVar3->fields)._stringLength;
    UVar6.SourceEndIndex = (pSVar2->fields)._stringLength + UVar6.SourceStartIndex;
    nameRange->fields = UVar6;
    local_38 = pSVar7;
    if (extraNameReservePixels <= 0.0) {
      pSVar7 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar7 = System_Single__ToString_3ccd050
                         (__this,(System_String_o *)&local_3c,"0.###",(MethodInfo *)method_00);
      pSVar7 = System_String__Concat_3af7150("<space=",pSVar7,">",(MethodInfo *)0x0);
    }
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,7);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = pSVar8;
        il2cpp_runtime_helper_022b4080(values->m_Items,pSVar8);
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = pSVar5;
          il2cpp_runtime_helper_022b4080(values->m_Items + 1,pSVar5);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = pSVar3;
            il2cpp_runtime_helper_022b4080(values->m_Items + 2,pSVar3);
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = pSVar2;
              il2cpp_runtime_helper_022b4080(values->m_Items + 3,pSVar2);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = pSVar7;
                il2cpp_runtime_helper_022b4080(values->m_Items + 4,pSVar7);
                if (5 < (uint)values->max_length) {
                  values->m_Items[5] = "</link>";
                  il2cpp_runtime_helper_022b4080(values->m_Items + 5);
                  if (6 < (uint)values->max_length) {
                    values->m_Items[6] = local_38;
                    il2cpp_runtime_helper_022b4080(values->m_Items + 6);
                    pSVar8 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                    return pSVar8;
                  }
                }
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae338 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    g_data_057ae338 = '\x01';
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ChatManager + 0xe4);
  }
  if (iVar1 != 0) {
    iVar4 = GameManagers_ChatManager__get_MaxLines((MethodInfo *)0x0);
    return (System_String_o *)CONCAT44(extraout_var,iVar4);
  }
  il2cpp_runtime_helper_02337ed0();
  iVar4 = GameManagers_ChatManager__get_MaxLines((MethodInfo *)0x0);
  return (System_String_o *)CONCAT44(extraout_var_00,iVar4);
}


