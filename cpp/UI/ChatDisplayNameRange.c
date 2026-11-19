// Type: UI.ChatDisplayNameRange
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/ChatDisplayNameRange.cs
// Prior real C# source: none
// --------------------------------

// UI.ChatDisplayNameRange$$.ctor
// il2cpp: void UI_ChatDisplayNameRange___ctor (UI_ChatDisplayNameRange_o __this, int32_t sourceStartIndex, int32_t sourceEndIndex, const MethodInfo* method);
// 0x5d08620

void UI_ChatDisplayNameRange___ctor
               (UI_ChatDisplayNameRange_o *__this,int32_t sourceStartIndex,int32_t sourceEndIndex,
               MethodInfo *method)

{
  (__this->fields).SourceStartIndex = sourceStartIndex;
  (__this->fields).SourceEndIndex = sourceEndIndex;
  return;
}


// UI.ChatDisplayNameRange$$get_IsValid
// il2cpp: bool UI_ChatDisplayNameRange__get_IsValid (UI_ChatDisplayNameRange_o __this, const MethodInfo* method);
// 0x5d08630

bool UI_ChatDisplayNameRange__get_IsValid(UI_ChatDisplayNameRange_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).SourceStartIndex;
  if (iVar1 < 0) {
    return false;
  }
  return iVar1 < (__this->fields).SourceEndIndex;
}


// UI.ChatDisplayNameRange$$ContainsSourceIndex
// il2cpp: bool UI_ChatDisplayNameRange__ContainsSourceIndex (UI_ChatDisplayNameRange_o __this, int32_t index, const MethodInfo* method);
// 0x5d08640

bool UI_ChatDisplayNameRange__ContainsSourceIndex
               (UI_ChatDisplayNameRange_o *__this,int32_t index,MethodInfo *method)

{
  if (index < (__this->fields).SourceStartIndex) {
    return false;
  }
  return index < (__this->fields).SourceEndIndex;
}


