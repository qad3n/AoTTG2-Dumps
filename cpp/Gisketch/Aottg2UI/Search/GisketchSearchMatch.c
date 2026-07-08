// Type: Gisketch.Aottg2UI.Search.GisketchSearchMatch
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Search/GisketchSearchMatch.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Search.GisketchSearchMatch$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchMatch___ctor (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o __this, int32_t score, int32_t displayStart, int32_t displayLength, System_String_o* hiddenText, System_Int32_array* displayIndices, const MethodInfo* method);
// 0x3ae1780

void Gisketch_Aottg2UI_Search_GisketchSearchMatch___ctor
               (Gisketch_Aottg2UI_Search_GisketchSearchMatch_o __this,int32_t score,
               int32_t displayStart,int32_t displayLength,System_String_o *hiddenText,
               System_Int32_array *displayIndices,MethodInfo *method)

{
  undefined4 in_register_0000003c;
  int32_t *piVar1;
  
  piVar1 = (int32_t *)CONCAT44(in_register_0000003c,score);
  *piVar1 = displayStart;
  piVar1[1] = displayLength;
  piVar1[2] = (int32_t)hiddenText;
  if (displayIndices == (System_Int32_array *)0x0) {
    displayIndices = (System_Int32_array *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  *(System_Int32_array **)(piVar1 + 4) = displayIndices;
  il2cpp_runtime_glue(piVar1 + 4,displayIndices);
  *(MethodInfo **)(piVar1 + 6) = method;
  il2cpp_runtime_glue(piVar1 + 6,method);
  return;
}


