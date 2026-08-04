// Type: Gilzoide.FlexUi.Yoga.YGValue
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gilzoide.FlexUi/Gilzoide.FlexUi.Yoga/YGValue.cs
// Prior real C# source: none
// --------------------------------

// Gilzoide.FlexUi.Yoga.YGValue$$.ctor
// il2cpp: void Gilzoide_FlexUi_Yoga_YGValue___ctor (Gilzoide_FlexUi_Yoga_YGValue_o __this, float value, int32_t unit, const MethodInfo* method);
// 0x3b292d0

void Gilzoide_FlexUi_Yoga_YGValue___ctor
               (Gilzoide_FlexUi_Yoga_YGValue_o __this,float value,int32_t unit,MethodInfo *method)

{
  *(float *)__this.fields = value;
  *(int32_t *)((long)__this.fields + 4) = unit;
  return;
}


// Gilzoide.FlexUi.Yoga.YGValue$$Percent
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_Yoga_YGValue__Percent (float value, const MethodInfo* method);
// 0x3b292e0

Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_Yoga_YGValue__Percent(float value,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)((ulong)(uint)value | 0x200000000);
}


// Gilzoide.FlexUi.Yoga.YGValue$$op_Implicit
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_Yoga_YGValue__op_Implicit (float value, const MethodInfo* method);
// 0x3b29300

Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(float value,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)((ulong)(uint)value | 0x100000000);
}


// Gilzoide.FlexUi.Yoga.YGValue$$.cctor
// il2cpp: void Gilzoide_FlexUi_Yoga_YGValue___cctor (const MethodInfo* method);
// 0x3b29320

void Gilzoide_FlexUi_Yoga_YGValue___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057a9a02 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_YGValue);
    g_data_057a9a02 = '\x01';
  }
  **(undefined8 **)(TypeInfo_YGValue + 0xb8) = 0x100000000;
  lVar1 = TypeInfo_YGValue;
  *(undefined8 *)(*(long *)(TypeInfo_YGValue + 0xb8) + 8) = 0x7fc00000;
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x10) = 0x37fc00000;
  return;
}


