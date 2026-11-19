// Type: Gisketch.Aottg2UI.Code.GisketchGridPickerItem
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchGridPickerItem.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchGridPickerItem$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerItem___ctor (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o __this, System_String_o* key, System_String_o* label, System_String_o* sprite, System_String_o* keywords, const MethodInfo* method);
// 0x536cb20

void Gisketch_Aottg2UI_Code_GisketchGridPickerItem___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *__this,System_String_o *key,
               System_String_o *label,System_String_o *sprite,System_String_o *keywords,MethodInfo *method)

{
  (__this->fields).Key = key;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields).Label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Label);
  (__this->fields).Sprite = sprite;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Sprite);
  (__this->fields).Keywords = keywords;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Keywords);
  return;
}


