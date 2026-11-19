// Type: Gilzoide.FlexUi.Yoga.YGValue
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gilzoide.FlexUi/Gilzoide.FlexUi.Yoga/YGValue.cs
// Prior real C# source: none
// --------------------------------

// Gilzoide.FlexUi.Yoga.YGValue$$.ctor
// il2cpp: void Gilzoide_FlexUi_Yoga_YGValue___ctor (Gilzoide_FlexUi_Yoga_YGValue_o __this, float value, int32_t unit, const MethodInfo* method);
// 0x5319c70

void Gilzoide_FlexUi_Yoga_YGValue___ctor
               (Gilzoide_FlexUi_Yoga_YGValue_o *__this,float value,int32_t unit,MethodInfo *method)

{
  (__this->fields).Value = value;
  (__this->fields).Unit = unit;
  return;
}


// Gilzoide.FlexUi.Yoga.YGValue$$Percent
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_Yoga_YGValue__Percent (float value, const MethodInfo* method);
// 0x5319c80

Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_Yoga_YGValue__Percent(float value,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)((ulong)(uint)value | 0x200000000);
}


// Gilzoide.FlexUi.Yoga.YGValue$$op_Implicit
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_Yoga_YGValue__op_Implicit (float value, const MethodInfo* method);
// 0x5319ca0

Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(float value,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)((ulong)(uint)value | 0x100000000);
}


// Gilzoide.FlexUi.Yoga.YGValue$$.cctor
// il2cpp: void Gilzoide_FlexUi_Yoga_YGValue___cctor (const MethodInfo* method);
// 0x5319cc0

void Gilzoide_FlexUi_Yoga_YGValue___cctor(MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGValue_c *pGVar1;
  
  if (Il2CppMethodInitialized_075425ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_075425ba = '\x01';
  }
  (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Zero).fields =
       (Gilzoide_FlexUi_Yoga_YGValue_Fields)0x100000000;
  pGVar1 = TypeInfo_Gilzoide_FlexUi_Yoga_YGValue;
  (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields =
       (Gilzoide_FlexUi_Yoga_YGValue_Fields)0x7fc00000;
  (pGVar1->static_fields->Auto).fields = (Gilzoide_FlexUi_Yoga_YGValue_Fields)0x37fc00000;
  return;
}


