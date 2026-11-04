// Type: Gisketch.Aottg2UI.Search.GisketchSearchMatch
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Search/GisketchSearchMatch.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Search.GisketchSearchMatch$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchMatch___ctor (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o __this, int32_t score, int32_t displayStart, int32_t displayLength, System_String_o* hiddenText, System_Int32_array* displayIndices, const MethodInfo* method);
// 0x1818b1eb0

void Gisketch_Aottg2UI_Search_GisketchSearchMatch___ctor
               (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o *__this,int32_t score,int32_t displayStart,
               int32_t displayLength,System_String_o *hiddenText,System_Int32_array *displayIndices,
               MethodInfo *method)

{
  (__this->fields).Score = score;
  (__this->fields).DisplayStart = displayStart;
  (__this->fields).DisplayLength = displayLength;
  if (hiddenText == (System_String_o *)0x0) {
    hiddenText = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields).HiddenText = hiddenText;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HiddenText,hiddenText);
  (__this->fields).DisplayIndices = displayIndices;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DisplayIndices,displayIndices);
  return;
}


