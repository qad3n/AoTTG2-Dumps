// Type: Gilzoide.FlexUi.Yoga.YGValue
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gilzoide.FlexUi/Gilzoide.FlexUi.Yoga/YGValue.cs
// Prior real C# source: none
// --------------------------------

// Gilzoide.FlexUi.Yoga.YGValue$$.ctor
// il2cpp: void Gilzoide_FlexUi_Yoga_YGValue___ctor (Gilzoide_FlexUi_Yoga_YGValue_o __this, float value, int32_t unit, const MethodInfo* method);
// 0x181381b80

void Gilzoide_FlexUi_Yoga_YGValue___ctor
               (Gilzoide_FlexUi_Yoga_YGValue_o *__this,float value,int32_t unit,MethodInfo *method)

{
  (__this->fields).Value = value;
  (__this->fields).Unit = unit;
  return;
}


// Gilzoide.FlexUi.Yoga.YGValue$$Percent
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_Yoga_YGValue__Percent (float value, const MethodInfo* method);
// 0x181880a40

Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_Yoga_YGValue__Percent(float value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar1;
  
  GVar1.Unit = 2;
  GVar1.Value = value;
  return (Gilzoide_FlexUi_Yoga_YGValue_o)GVar1;
}


// Gilzoide.FlexUi.Yoga.YGValue$$op_Implicit
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_Yoga_YGValue__op_Implicit (float value, const MethodInfo* method);
// 0x181880b00

Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(float value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar1;
  
  GVar1.Unit = 1;
  GVar1.Value = value;
  return (Gilzoide_FlexUi_Yoga_YGValue_o)GVar1;
}


// Gilzoide.FlexUi.Yoga.YGValue$$.cctor
// il2cpp: void Gilzoide_FlexUi_Yoga_YGValue___cctor (const MethodInfo* method);
// 0x181880a60

void Gilzoide_FlexUi_Yoga_YGValue___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184341c7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_184341c7a = '\x01';
  }
  (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Zero).fields =
       (Gilzoide_FlexUi_Yoga_YGValue_Fields)0x100000000;
  (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields =
       (Gilzoide_FlexUi_Yoga_YGValue_Fields)0x7fc00000;
  (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Auto).fields =
       (Gilzoide_FlexUi_Yoga_YGValue_Fields)0x37fc00000;
  return;
}


