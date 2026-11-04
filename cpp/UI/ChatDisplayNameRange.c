// Type: UI.ChatDisplayNameRange
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ChatDisplayNameRange.cs
// Prior real C# source: none
// --------------------------------

// UI.ChatDisplayNameRange$$.ctor
// il2cpp: void UI_ChatDisplayNameRange___ctor (UI_ChatDisplayNameRange_o __this, int32_t sourceStartIndex, int32_t sourceEndIndex, const MethodInfo* method);
// 0x180acca30

void
UI_ChatDisplayNameRange___ctor(UI_ChatDisplayNameRange_o __this, int32_t sourceStartIndex, int32_t sourceEndIndex, MethodInfo* method)

{
  (__this->fields).tileX = tileX;
  (__this->fields).tileZ = tileZ;
  return;
}


// UI.ChatDisplayNameRange$$get_IsValid
// il2cpp: bool UI_ChatDisplayNameRange__get_IsValid (UI_ChatDisplayNameRange_o __this, const MethodInfo* method);
// 0x182228c50

bool UI_ChatDisplayNameRange__get_IsValid(UI_ChatDisplayNameRange_o *__this,MethodInfo *method)

{
  if ((__this->fields).SourceStartIndex < 0) {
    return false;
  }
  return (__this->fields).SourceStartIndex < (__this->fields).SourceEndIndex;
}


// UI.ChatDisplayNameRange$$ContainsSourceIndex
// il2cpp: bool UI_ChatDisplayNameRange__ContainsSourceIndex (UI_ChatDisplayNameRange_o __this, int32_t index, const MethodInfo* method);
// 0x182228c40

bool UI_ChatDisplayNameRange__ContainsSourceIndex
               (UI_ChatDisplayNameRange_o *__this,int32_t index,MethodInfo *method)

{
  if (index < (__this->fields).SourceStartIndex) {
    return false;
  }
  return index < (__this->fields).SourceEndIndex;
}


