// Type: Gilzoide.FlexUi.FoldoutHeaderAttribute
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gilzoide.FlexUi/Gilzoide.FlexUi/FoldoutHeaderAttribute.cs
// Prior source: NEW in this update
// --------------------------------

// Gilzoide.FlexUi.FoldoutHeaderAttribute$$get_Title
// il2cpp: System_String_o* Gilzoide_FlexUi_FoldoutHeaderAttribute__get_Title (Gilzoide_FlexUi_FoldoutHeaderAttribute_o* __this, const MethodInfo* method);
// 0x3abcd40

System_String_o *
Gilzoide_FlexUi_FoldoutHeaderAttribute__get_Title
          (Gilzoide_FlexUi_FoldoutHeaderAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._Title_k__BackingField;
}


// Gilzoide.FlexUi.FoldoutHeaderAttribute$$.ctor
// il2cpp: void Gilzoide_FlexUi_FoldoutHeaderAttribute___ctor (Gilzoide_FlexUi_FoldoutHeaderAttribute_o* __this, System_String_o* title, const MethodInfo* method);
// 0x3abcd50

void Gilzoide_FlexUi_FoldoutHeaderAttribute___ctor
               (Gilzoide_FlexUi_FoldoutHeaderAttribute_o *__this,System_String_o *title,
               MethodInfo *method)

{
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Title_k__BackingField = title;
  il2cpp_runtime_glue(&__this->fields,title);
  return;
}


