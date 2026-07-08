// Type: Gilzoide.FlexUi.Yoga.YGValue
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gilzoide.FlexUi/Gilzoide.FlexUi.Yoga/YGValue.cs
// Prior source: NEW in this update
// --------------------------------

// Gilzoide.FlexUi.Yoga.YGValue$$.ctor
// il2cpp: void Gilzoide_FlexUi_Yoga_YGValue___ctor (Gilzoide_FlexUi_Yoga_YGValue_o __this, float value, int32_t unit, const MethodInfo* method);
// 0x3ac0080

void Gilzoide_FlexUi_Yoga_YGValue___ctor
               (Gilzoide_FlexUi_Yoga_YGValue_o __this,float value,int32_t unit,MethodInfo *method)

{
  *(float *)__this.fields = value;
  *(int32_t *)((long)__this.fields + 4) = unit;
  return;
}


// Gilzoide.FlexUi.Yoga.YGValue$$Percent
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_Yoga_YGValue__Percent (float value, const MethodInfo* method);
// 0x3ac0090

Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_Yoga_YGValue__Percent(float value,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)((ulong)(uint)value | 0x200000000);
}


// Gilzoide.FlexUi.Yoga.YGValue$$op_Implicit
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gilzoide_FlexUi_Yoga_YGValue__op_Implicit (float value, const MethodInfo* method);
// 0x3ac00b0

Gilzoide_FlexUi_Yoga_YGValue_o
Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(float value,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)((ulong)(uint)value | 0x100000000);
}


// Gilzoide.FlexUi.Yoga.YGValue$$.cctor
// il2cpp: void Gilzoide_FlexUi_Yoga_YGValue___cctor (const MethodInfo* method);
// 0x3ac00d0

void Gilzoide_FlexUi_Yoga_YGValue___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_057010e9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_YGValue);
    DAT_057010e9 = '\x01';
  }
  **(undefined8 **)(TypeInfo_YGValue + 0xb8) = 0x100000000;
  lVar1 = TypeInfo_YGValue;
  *(undefined8 *)(*(long *)(TypeInfo_YGValue + 0xb8) + 8) = 0x7fc00000;
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x10) = 0x37fc00000;
  return;
}


