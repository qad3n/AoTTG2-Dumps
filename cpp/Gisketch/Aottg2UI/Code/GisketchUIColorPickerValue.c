// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchUIColorPickerValue.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, uint8_t r, uint8_t g, uint8_t b, uint8_t a, const MethodInfo* method);
// 0x5377040

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *__this,uint8_t r,uint8_t g,uint8_t b,
               uint8_t a,MethodInfo *method)

{
  undefined1 auVar1 [13];
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  uint7 uVar6;
  ulong uVar7;
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  uint5 uVar10;
  undefined7 in_register_00000009;
  uint uVar11;
  undefined7 in_register_00000011;
  undefined7 in_register_00000031;
  undefined7 in_register_00000081;
  undefined1 uVar13;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  int iVar15;
  UnityEngine_Color_o rgbColor;
  
  (__this->fields).R = r;
  (__this->fields).G = g;
  (__this->fields).B = b;
  (__this->fields).A = a;
  uVar11 = (int)CONCAT71(in_register_00000011,g) << 8 | (uint)CONCAT71(in_register_00000031,r);
  uVar13 = (undefined1)(uVar11 >> 8);
  uVar7 = (ulong)CONCAT12(uVar13,(short)uVar11) & 0xffffffffffff00ff;
  auVar3._8_4_ = 0;
  auVar3._0_8_ = uVar7;
  auVar3[0xc] = (char)(uVar11 >> 0x18);
  auVar4[8] = (char)(uVar11 >> 0x10);
  auVar4._0_8_ = uVar7;
  auVar4[9] = 0;
  auVar4._10_3_ = auVar3._10_3_;
  auVar8._5_8_ = 0;
  auVar8._0_5_ = auVar4._8_5_;
  auVar5[4] = uVar13;
  auVar5._0_4_ = (uint)uVar7;
  auVar5[5] = 0;
  auVar5._6_7_ = SUB137(auVar8 << 0x40,6);
  auVar12._0_4_ = (float)((uint)uVar7 & 0xffff);
  auVar12._4_4_ = (float)auVar5._4_4_;
  auVar12._8_4_ = (float)auVar4._8_4_;
  auVar12._12_4_ = (float)(uint3)(auVar3._10_3_ >> 0x10);
  auVar12 = divps(auVar12,_DAT_01009880);
  uVar11 = (int)CONCAT71(in_register_00000081,a) << 8 | (uint)CONCAT71(in_register_00000009,b);
  uVar6 = (uint7)(ushort)uVar11 & 0xffffffffff00ff;
  auVar1._7_5_ = 0;
  auVar1._0_7_ = uVar6;
  auVar1[0xc] = (char)(uVar11 >> 0x18);
  uVar10 = CONCAT32(auVar1._10_3_,(ushort)(byte)(uVar11 >> 0x10));
  auVar9._5_8_ = 0;
  auVar9._0_5_ = uVar10;
  iVar15 = (int)uVar6;
  auVar2[4] = (char)(uVar11 >> 8);
  auVar2._0_4_ = iVar15;
  auVar2[5] = 0;
  auVar2._6_7_ = SUB137(auVar9 << 0x40,6);
  auVar14._0_4_ = (float)iVar15;
  auVar14._4_4_ = (float)auVar2._4_4_;
  auVar14._8_4_ = (float)(int)uVar10;
  auVar14._12_4_ = (float)(uint3)(auVar1._10_3_ >> 0x10);
  auVar14 = divps(auVar14,_DAT_01009880);
  rgbColor.fields._0_8_ = auVar12._0_8_;
  rgbColor.fields._8_8_ = auVar14._0_8_;
  UnityEngine_Color__RGBToHSV
            (rgbColor,&(__this->fields).H,&(__this->fields).S,&(__this->fields).V,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, uint8_t r, uint8_t g, uint8_t b, uint8_t a, float h, float s, float v, const MethodInfo* method);
// 0x5378680

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue___ctor_5278680
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *__this,uint8_t r,uint8_t g,uint8_t b,
               uint8_t a,float h,float s,float v,MethodInfo *method)

{
  float fVar1;
  undefined4 in_XMM0_Db;
  undefined4 in_XMM1_Db;
  undefined1 auVar2 [16];
  
  (__this->fields).R = r;
  (__this->fields).G = g;
  (__this->fields).B = b;
  (__this->fields).A = a;
  fVar1 = floorf(h);
  auVar2._4_4_ = s;
  auVar2._0_4_ = h - fVar1;
  auVar2._8_4_ = in_XMM0_Db;
  auVar2._12_4_ = in_XMM1_Db;
  auVar2 = minps(_DAT_01005870,auVar2);
  (__this->fields).H = (float)(-(uint)(0.0 <= h - fVar1) & auVar2._0_4_);
  (__this->fields).S = (float)(-(uint)(0.0 <= s) & auVar2._4_4_);
  fVar1 = 1.0;
  if (v <= 1.0) {
    fVar1 = v;
  }
  (__this->fields).V = (float)(-(uint)(0.0 <= v) & (uint)fVar1);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$get_Color32
// il2cpp: UnityEngine_Color32_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__get_Color32 (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, const MethodInfo* method);
// 0x5378520

UnityEngine_Color32_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__get_Color32
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *__this,MethodInfo *method)

{
  return (UnityEngine_Color32_Fields)(UnityEngine_Color32_Fields)(*(_union_53531 *)&__this->fields)._at_rgba;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$ToHex
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToHex (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, bool alpha, const MethodInfo* method);
// 0x5373530

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToHex
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *__this,bool alpha,MethodInfo *method)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  ulong uVar6;
  uint3 uVar7;
  undefined1 auVar8 [13];
  System_String_o *pSVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  UnityEngine_Color_Fields UStack_20;
  
  if (Il2CppMethodInitialized_07542a90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_07542a90 = '\x01';
  }
  uVar2._0_1_ = (__this->fields).R;
  uVar2._1_1_ = (__this->fields).G;
  uVar2._2_1_ = (__this->fields).B;
  uVar2._3_1_ = (__this->fields).A;
  uVar7 = CONCAT12(uVar2._1_1_,(short)uVar2);
  uVar6 = (ulong)uVar7 & 0xffffffffffff00ff;
  auVar3._8_4_ = 0;
  auVar3._0_8_ = uVar6;
  auVar3[0xc] = uVar2._3_1_;
  auVar4[8] = uVar2._2_1_;
  auVar4._0_8_ = uVar6;
  auVar4[9] = 0;
  auVar4._10_3_ = auVar3._10_3_;
  auVar8._5_8_ = 0;
  auVar8._0_5_ = auVar4._8_5_;
  auVar5[4] = uVar2._1_1_;
  auVar5._0_4_ = (uint)uVar6;
  auVar5[5] = 0;
  auVar5._6_7_ = SUB137(auVar8 << 0x40,6);
  auVar10._0_4_ = (float)((uint)uVar6 & 0xffff);
  auVar10._4_4_ = (float)auVar5._4_4_;
  auVar10._8_4_ = (float)auVar4._8_4_;
  auVar10._12_4_ = (float)(uint3)(auVar3._10_3_ >> 0x10);
  auVar10 = divps(auVar10,_DAT_01009880);
  uVar1._0_1_ = (__this->fields).B;
  uVar1._1_1_ = (__this->fields).A;
  auVar11._0_4_ = (float)(uVar1 & 0xff);
  auVar11._4_4_ = (float)(byte)uVar1._1_1_;
  auVar11._8_8_ = 0;
  auVar11 = divps(auVar11,_DAT_01009880);
  UStack_20._0_8_ = auVar10._0_8_;
  UStack_20._8_8_ = auVar11._0_8_;
  if (alpha) {
    pSVar9 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0
                       ((UnityEngine_Color_o *)&UStack_20,(MethodInfo *)0x0);
  }
  else {
    pSVar9 = UnityEngine_ColorUtility__ToHtmlStringRGB_68fde50
                       ((UnityEngine_Color_o *)&UStack_20,(MethodInfo *)0x0);
  }
  pSVar9 = System_String__Concat_52f0320("#",pSVar9,(MethodInfo *)0x0);
  return pSVar9;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$WithRgb
// il2cpp: Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithRgb (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, uint8_t r, uint8_t g, uint8_t b, const MethodInfo* method);
// 0x5377eb0

Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithRgb
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *__this,uint8_t r,uint8_t g,uint8_t b,
          MethodInfo *method)

{
  undefined1 auVar1 [13];
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  uint7 uVar6;
  ulong uVar7;
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  uint5 uVar10;
  undefined7 in_register_00000009;
  uint uVar11;
  undefined7 in_register_00000011;
  undefined7 in_register_00000031;
  undefined1 uVar13;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  int iVar15;
  UnityEngine_Color_o rgbColor;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStack_18;
  
  GStack_18.A = (__this->fields).A;
  GStack_18.G = g;
  GStack_18.R = r;
  GStack_18.B = b;
  GStack_18._4_12_ = SUB1612((undefined1  [16])0x0,4);
  uVar11 = (int)CONCAT71(in_register_00000011,g) << 8 | (uint)CONCAT71(in_register_00000031,r);
  uVar13 = (undefined1)(uVar11 >> 8);
  uVar7 = (ulong)CONCAT12(uVar13,(short)uVar11) & 0xffffffffffff00ff;
  auVar3._8_4_ = 0;
  auVar3._0_8_ = uVar7;
  auVar3[0xc] = (char)(uVar11 >> 0x18);
  auVar4[8] = (char)(uVar11 >> 0x10);
  auVar4._0_8_ = uVar7;
  auVar4[9] = 0;
  auVar4._10_3_ = auVar3._10_3_;
  auVar8._5_8_ = 0;
  auVar8._0_5_ = auVar4._8_5_;
  auVar5[4] = uVar13;
  auVar5._0_4_ = (uint)uVar7;
  auVar5[5] = 0;
  auVar5._6_7_ = SUB137(auVar8 << 0x40,6);
  auVar12._0_4_ = (float)((uint)uVar7 & 0xffff);
  auVar12._4_4_ = (float)auVar5._4_4_;
  auVar12._8_4_ = (float)auVar4._8_4_;
  auVar12._12_4_ = (float)(uint3)(auVar3._10_3_ >> 0x10);
  auVar12 = divps(auVar12,_DAT_01009880);
  uVar11 = (uint)GStack_18.A << 8 | (uint)CONCAT71(in_register_00000009,b);
  uVar6 = (uint7)(ushort)uVar11 & 0xffffffffff00ff;
  auVar1._7_5_ = 0;
  auVar1._0_7_ = uVar6;
  auVar1[0xc] = (char)((uint7)in_register_00000009 >> 0x10);
  uVar10 = CONCAT32(auVar1._10_3_,(ushort)(byte)((uint7)in_register_00000009 >> 8));
  auVar9._5_8_ = 0;
  auVar9._0_5_ = uVar10;
  iVar15 = (int)uVar6;
  auVar2[4] = (char)(uVar11 >> 8);
  auVar2._0_4_ = iVar15;
  auVar2[5] = 0;
  auVar2._6_7_ = SUB137(auVar9 << 0x40,6);
  auVar14._0_4_ = (float)iVar15;
  auVar14._4_4_ = (float)auVar2._4_4_;
  auVar14._8_4_ = (float)(int)uVar10;
  auVar14._12_4_ = (float)(uint3)(auVar1._10_3_ >> 0x10);
  auVar14 = divps(auVar14,_DAT_01009880);
  rgbColor.fields._0_8_ = auVar12._0_8_;
  rgbColor.fields._8_8_ = auVar14._0_8_;
  UnityEngine_Color__RGBToHSV(rgbColor,&GStack_18.H,&GStack_18.S,&GStack_18.V,(MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o)GStack_18;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$WithAlpha
// il2cpp: Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithAlpha (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, uint8_t a, const MethodInfo* method);
// 0x5378700

Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithAlpha
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *__this,uint8_t a,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  undefined3 in_register_00000031;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o GVar10;
  
  bVar3 = (__this->fields).R;
  bVar4 = (__this->fields).G;
  bVar5 = (__this->fields).B;
  fVar8 = (__this->fields).H;
  fVar7 = floorf(fVar8);
  fVar8 = fVar8 - fVar7;
  fVar7 = 1.0;
  if (fVar8 <= 1.0) {
    fVar7 = fVar8;
  }
  uVar1 = (__this->fields).S;
  uVar2 = (__this->fields).V;
  auVar9._4_4_ = uVar2;
  auVar9._0_4_ = uVar1;
  auVar9._8_8_ = 0;
  auVar9 = minps(_DAT_01005870,auVar9);
  GVar10.fields.S = -(uint)(0.0 <= (float)uVar1) & auVar9._0_4_;
  GVar10.fields.V = -(uint)(0.0 <= (float)uVar2) & auVar9._4_4_;
  uVar6 = (ulong)bVar4 << 8 |
          (ulong)bVar5 << 0x10 |
          (ulong)CONCAT31(in_register_00000031,a) << 0x18 |
          (ulong)(-(uint)(0.0 <= fVar8) & (uint)fVar7) << 0x20 | (ulong)bVar3;
  GVar10.fields.R = (char)uVar6;
  GVar10.fields.G = (char)(uVar6 >> 8);
  GVar10.fields.B = (char)(uVar6 >> 0x10);
  GVar10.fields.A = (char)(uVar6 >> 0x18);
  GVar10.fields.H = (float)(int)(uVar6 >> 0x20);
  return (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o)GVar10.fields;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$WithHue
// il2cpp: Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithHue (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, float h, const MethodInfo* method);
// 0x53787a0

Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithHue
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *__this,float h,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint8_t uVar4;
  uint8_t uVar5;
  uint8_t uVar6;
  MethodInfo *method_00;
  float fVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [16];
  float S;
  float V;
  UnityEngine_Color_o UVar10;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o GVar11;
  float fStack_44;
  float fStack_38;
  
  bVar3 = (__this->fields).A;
  fVar7 = floorf(h);
  fVar7 = h - fVar7;
  auVar8 = ZEXT812(0x3f800000);
  if (fVar7 <= auVar8._0_4_) {
    auVar8._4_8_ = auVar8._4_8_;
    auVar8._0_4_ = fVar7;
  }
  fVar7 = (float)(-(uint)(0.0 <= fVar7) & auVar8._0_4_);
  uVar1 = (__this->fields).S;
  uVar2 = (__this->fields).V;
  auVar9._4_4_ = uVar2;
  auVar9._0_4_ = uVar1;
  auVar9._8_8_ = 0;
  auVar9 = minps(_DAT_01005870,auVar9);
  S = (float)(-(uint)(0.0 <= (float)uVar1) & auVar9._0_4_);
  V = (float)(-(uint)(0.0 <= (float)uVar2) & auVar9._4_4_);
  method_00 = (MethodInfo *)0x1;
  UVar10 = UnityEngine_Color__HSVToRGB_68fcb80(fVar7,S,V,true,(MethodInfo *)0x0);
  uVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar10.fields.r,method_00);
  fStack_44 = UVar10.fields.g;
  uVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_44,method_00);
  fStack_38 = UVar10.fields.b;
  uVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_38,method_00);
  GVar11.fields._0_8_ =
       (ulong)uVar4 |
       (ulong)uVar5 << 8 | (ulong)uVar6 << 0x10 | (ulong)bVar3 << 0x18 | (ulong)(uint)fVar7 << 0x20;
  GVar11.fields.V = V;
  GVar11.fields.S = S;
  return (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o)GVar11.fields;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$WithSaturationValue
// il2cpp: Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithSaturationValue (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, float s, float v, const MethodInfo* method);
// 0x5378970

Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithSaturationValue
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *__this,float s,float v,MethodInfo *method)

{
  byte bVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  MethodInfo *method_00;
  float fVar5;
  undefined4 in_XMM0_Db;
  undefined1 auVar6 [12];
  undefined4 in_XMM1_Db;
  undefined1 auVar7 [16];
  float fVar8;
  float V;
  UnityEngine_Color_o UVar9;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o GVar10;
  float fStack_58;
  float fStack_24;
  
  fVar8 = (__this->fields).H;
  bVar1 = (__this->fields).A;
  fVar5 = floorf(fVar8);
  fVar8 = fVar8 - fVar5;
  auVar6 = ZEXT812(0x3f800000);
  if (fVar8 <= auVar6._0_4_) {
    auVar6._4_8_ = auVar6._4_8_;
    auVar6._0_4_ = fVar8;
  }
  fVar8 = (float)(-(uint)(0.0 <= fVar8) & auVar6._0_4_);
  auVar7._4_4_ = v;
  auVar7._0_4_ = s;
  auVar7._8_4_ = in_XMM0_Db;
  auVar7._12_4_ = in_XMM1_Db;
  auVar7 = minps(_DAT_01005870,auVar7);
  fVar5 = (float)(-(uint)(0.0 <= s) & auVar7._0_4_);
  V = (float)(-(uint)(0.0 <= v) & auVar7._4_4_);
  method_00 = (MethodInfo *)0x1;
  UVar9 = UnityEngine_Color__HSVToRGB_68fcb80(fVar8,fVar5,V,true,(MethodInfo *)0x0);
  uVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar9.fields.r,method_00);
  fStack_24 = UVar9.fields.g;
  uVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_24,method_00);
  fStack_58 = UVar9.fields.b;
  uVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_58,method_00);
  GVar10.fields._0_8_ =
       (ulong)uVar2 |
       (ulong)uVar3 << 8 | (ulong)uVar4 << 0x10 | (ulong)bVar1 << 0x18 | (ulong)(uint)fVar8 << 0x20;
  GVar10.fields.V = V;
  GVar10.fields.S = fVar5;
  return (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o)GVar10.fields;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$FromHsv
// il2cpp: Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FromHsv (float h, float s, float v, uint8_t a, const MethodInfo* method);
// 0x5378880

Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FromHsv
          (float h,float s,float v,uint8_t a,MethodInfo *method)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  undefined7 in_register_00000039;
  MethodInfo *method_00;
  float fVar4;
  undefined1 auVar5 [12];
  undefined4 in_XMM1_Db;
  undefined1 auVar6 [16];
  undefined4 in_XMM2_Db;
  float S;
  float V;
  UnityEngine_Color_o UVar7;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o GVar8;
  float fStack_58;
  float fStack_24;
  
  fVar4 = floorf(h);
  fVar4 = h - fVar4;
  auVar5 = ZEXT812(0x3f800000);
  if (fVar4 <= auVar5._0_4_) {
    auVar5._4_8_ = auVar5._4_8_;
    auVar5._0_4_ = fVar4;
  }
  fVar4 = (float)(-(uint)(0.0 <= fVar4) & auVar5._0_4_);
  auVar6._4_4_ = v;
  auVar6._0_4_ = s;
  auVar6._8_4_ = in_XMM1_Db;
  auVar6._12_4_ = in_XMM2_Db;
  auVar6 = minps(_DAT_01005870,auVar6);
  S = (float)(-(uint)(0.0 <= s) & auVar6._0_4_);
  V = (float)(-(uint)(0.0 <= v) & auVar6._4_4_);
  method_00 = (MethodInfo *)0x1;
  UVar7 = UnityEngine_Color__HSVToRGB_68fcb80(fVar4,S,V,true,(MethodInfo *)0x0);
  uVar1 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar7.fields.r,method_00);
  fStack_24 = UVar7.fields.g;
  uVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_24,method_00);
  fStack_58 = UVar7.fields.b;
  uVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_58,method_00);
  GVar8.fields._0_8_ =
       (ulong)uVar1 |
       (ulong)uVar2 << 8 |
       (ulong)uVar3 << 0x10 |
       (CONCAT71(in_register_00000039,a) & 0xffffffff) << 0x18 | (ulong)(uint)fVar4 << 0x20;
  GVar8.fields.V = V;
  GVar8.fields.S = S;
  return (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o)GVar8.fields;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$Normalize
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize (System_String_o* text, bool alpha, System_String_o* fallback, const MethodInfo* method);
// 0x5372470

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize
          (System_String_o *text,bool alpha,System_String_o *fallback,MethodInfo *method)

{
  undefined1 auVar1 [15];
  undefined1 auVar2 [14];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [14];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  unkuint9 Var11;
  undefined1 auVar12 [15];
  undefined1 auVar13 [11];
  undefined1 auVar14 [15];
  undefined1 auVar15 [14];
  uint6 uVar16;
  undefined1 auVar17 [11];
  bool bVar18;
  System_String_o *str1;
  System_String_o **ppSVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o local_38;
  UnityEngine_Color_Fields local_28;
  
  if (Il2CppMethodInitialized_07542a91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFF");
    Il2CppMethodInitialized_07542a91 = '\x01';
  }
  local_38.fields.R = 0;
  local_38.fields.G = 0;
  local_38.fields.B = 0;
  local_38.fields.A = 0;
  local_38.fields.H = 0.0;
  local_38.fields.S = 0.0;
  local_38.fields.V = 0.0;
  bVar18 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse(text,alpha,&local_38,method);
  if (bVar18) {
    if (Il2CppMethodInitialized_07542a90 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"#");
      Il2CppMethodInitialized_07542a90 = '\x01';
    }
    auVar20._4_4_ = local_38.fields.S;
    auVar20._8_4_ = local_38.fields.V;
    auVar20._0_4_ = local_38.fields.H;
    auVar20._12_4_ = 0;
    auVar20 = auVar20 << 0x20;
    auVar1[0xd] = 0;
    auVar1._0_13_ = auVar20._0_13_;
    auVar1[0xe] = (char)((uint)local_38.fields.H >> 0x18);
    auVar3[0xc] = (char)((uint)local_38.fields.H >> 0x10);
    auVar3._0_12_ = auVar20._0_12_;
    auVar3._13_2_ = auVar1._13_2_;
    auVar4[0xb] = 0;
    auVar4._0_11_ = auVar20._0_11_;
    auVar4._12_3_ = auVar3._12_3_;
    auVar5[10] = (char)((uint)local_38.fields.H >> 8);
    auVar5._0_10_ = auVar20._0_10_;
    auVar5._11_4_ = auVar4._11_4_;
    auVar7[9] = 0;
    auVar7._0_9_ = auVar20._0_9_;
    auVar7._10_5_ = auVar5._10_5_;
    auVar17[4] = SUB41(local_38.fields.H,0);
    auVar17._0_4_ = local_38.fields.H;
    auVar17._5_6_ = auVar7._9_6_;
    auVar10._7_8_ = 0;
    auVar10._0_7_ = auVar17._4_7_;
    Var11 = CONCAT81(SUB158(auVar10 << 0x40,7),local_38.fields.A);
    auVar12._9_6_ = 0;
    auVar12._0_9_ = Var11;
    auVar13._1_10_ = SUB1510(auVar12 << 0x30,5);
    auVar13[0] = local_38.fields.B;
    auVar14._11_4_ = 0;
    auVar14._0_11_ = auVar13;
    auVar8[2] = local_38.fields.G;
    auVar8[0] = local_38.fields.R;
    auVar8[1] = local_38.fields.G;
    auVar8._3_12_ = SUB1512(auVar14 << 0x20,3);
    auVar9[1] = 0;
    auVar9[0] = local_38.fields.R;
    auVar9._2_13_ = auVar8._2_13_;
    auVar2._10_2_ = 0;
    auVar2._0_10_ = auVar9._0_10_;
    auVar2._12_2_ = (short)Var11;
    uVar16 = CONCAT42(auVar2._10_4_,auVar13._0_2_);
    auVar15._6_8_ = 0;
    auVar15._0_6_ = uVar16;
    auVar6._4_2_ = auVar8._2_2_;
    auVar6._0_4_ = auVar9._0_4_;
    auVar6._6_8_ = SUB148(auVar15 << 0x40,6);
    auVar22._0_4_ = (float)(auVar9._0_4_ & 0xffff);
    auVar22._4_4_ = (float)auVar6._4_4_;
    auVar22._8_4_ = (float)(int)uVar16;
    auVar22._12_4_ = (float)(auVar2._10_4_ >> 0x10);
    auVar20 = divps(auVar22,_DAT_01009880);
    auVar21._0_4_ = (float)((ushort)local_38.fields._2_2_ & 0xff);
    auVar21._4_4_ = (float)local_38.fields.A;
    auVar21._8_8_ = 0;
    auVar22 = divps(auVar21,_DAT_01009880);
    local_28._0_8_ = auVar20._0_8_;
    local_28._8_8_ = auVar22._0_8_;
    if (alpha) {
      str1 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0
                       ((UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
    }
    else {
      str1 = UnityEngine_ColorUtility__ToHtmlStringRGB_68fde50
                       ((UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
    }
    fallback = System_String__Concat_52f0320("#",str1,(MethodInfo *)0x0);
  }
  else if (fallback == (System_String_o *)0x0) {
    if (alpha) {
      ppSVar19 = &"#FFFFFFFF";
    }
    else {
      ppSVar19 = &"#FFFFFF";
    }
    fallback = *ppSVar19;
  }
  return fallback;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$FilterHexInput
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FilterHexInput (System_String_o* text, bool alpha, const MethodInfo* method);
// 0x5378120
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x537823d: jmp 0x53782a6

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FilterHexInput
          (System_String_o *text,bool alpha,MethodInfo *method)

{
  uint16_t uVar1;
  System_Char_array *val;
  System_String_o *pSVar2;
  long lVar3;
  int iVar4;
  uint length;
  uint32_t length_00;
  
  if (Il2CppMethodInitialized_07542a92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_07542a92 = '\x01';
  }
  length_00 = (uint)alpha * 2 + 6;
  val = (System_Char_array *)SZArrayNew(TypeInfo_char_array,length_00);
  if ((text == (System_String_o *)0x0) &&
     (text = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), text == (System_String_o *)0x0)) {
label_0537829e:
    ThrowNullReferenceException();
  }
  iVar4 = (text->fields)._stringLength;
  if (val == (System_Char_array *)0x0) {
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        uVar1 = System_String__get_Chars(text,iVar4,(MethodInfo *)0x0);
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        uVar1 = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
        if ((uVar1 != 0x23) && ((0xfff5 < (ushort)(uVar1 - 0x3a) || (0xfff9 < (ushort)(uVar1 - 0x47)))))
        goto label_0537829e;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (text->fields)._stringLength);
    }
    length = 0;
  }
  else {
    length = 0;
    if (0 < iVar4) {
      iVar4 = 1;
      do {
        uVar1 = System_String__get_Chars(text,iVar4 + -1,(MethodInfo *)0x0);
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        uVar1 = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
        if ((uVar1 != 0x23) && ((0xfff5 < (ushort)(uVar1 - 0x3a) || (0xfff9 < (ushort)(uVar1 - 0x47))))) {
          if ((uint)val->max_length <= length) {
            ThrowIndexOutOfRangeException();
          }
          lVar3 = (long)(int)length;
          length = length + 1;
          val->m_Items[lVar3] = uVar1;
        }
      } while ((iVar4 < (text->fields)._stringLength) && (iVar4 = iVar4 + 1, (int)length < (int)length_00));
    }
  }
  pSVar2 = System_String__CreateString_5308ff0((System_String_o *)0x0,val,0,length,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_52f0320("#",pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$TryParse
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse (System_String_o* text, bool alpha, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o* value, const MethodInfo* method);
// 0x5376da0

bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
               (System_String_o *text,bool alpha,Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *value,
               MethodInfo *method)

{
  int iVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  byte bVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_Globalization_CultureInfo_o *pSVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  UnityEngine_Color_o rgbColor;
  float fStack_4c;
  float fStack_48;
  float afStack_44 [2];
  int local_3c;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *local_38;
  
  pSVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FilterHexInput(text,alpha,(MethodInfo *)value);
  (value->fields).R = 0;
  (value->fields).G = 0;
  (value->fields).B = 0;
  (value->fields).A = 0;
  (value->fields).H = 0.0;
  (value->fields).S = 0.0;
  (value->fields).V = 0.0;
  if (pSVar6 == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_3c = (uint)alpha * 2 + 7;
  iVar1 = (pSVar6->fields)._stringLength;
  if (iVar1 == local_3c) {
    if (Il2CppMethodInitialized_07542a94 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
      Il2CppMethodInitialized_07542a94 = '\x01';
    }
    pSVar7 = System_String__Substring_53042f0(pSVar6,1,2,(MethodInfo *)0x0);
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    uVar2 = System_Byte__Parse_541d4b0(pSVar7,0x203,(System_IFormatProvider_o *)pSVar8,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07542a94 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
      Il2CppMethodInitialized_07542a94 = '\x01';
    }
    local_38 = value;
    pSVar7 = System_String__Substring_53042f0(pSVar6,3,2,(MethodInfo *)0x0);
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    uVar3 = System_Byte__Parse_541d4b0(pSVar7,0x203,(System_IFormatProvider_o *)pSVar8,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07542a94 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
      Il2CppMethodInitialized_07542a94 = '\x01';
    }
    pSVar7 = System_String__Substring_53042f0(pSVar6,5,2,(MethodInfo *)0x0);
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    uVar4 = System_Byte__Parse_541d4b0(pSVar7,0x203,(System_IFormatProvider_o *)pSVar8,(MethodInfo *)0x0);
    bVar5 = 0xff;
    if (alpha) {
      if (Il2CppMethodInitialized_07542a94 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
        Il2CppMethodInitialized_07542a94 = '\x01';
      }
      pSVar6 = System_String__Substring_53042f0(pSVar6,7,2,(MethodInfo *)0x0);
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar5 = System_Byte__Parse_541d4b0(pSVar6,0x203,(System_IFormatProvider_o *)pSVar8,(MethodInfo *)0x0);
    }
    afStack_44[0] = 0.0;
    fStack_4c = 0.0;
    fStack_48 = 0.0;
    auVar9._0_4_ = (float)uVar2;
    auVar9._4_4_ = (float)uVar3;
    auVar9._8_8_ = 0;
    auVar9 = divps(auVar9,_DAT_01009880);
    auVar10._0_4_ = (float)uVar4;
    auVar10._4_4_ = (float)bVar5;
    auVar10._8_8_ = 0;
    auVar10 = divps(auVar10,_DAT_01009880);
    rgbColor.fields._0_8_ = auVar9._0_8_;
    rgbColor.fields._8_8_ = auVar10._0_8_;
    UnityEngine_Color__RGBToHSV(rgbColor,&fStack_4c,&fStack_48,afStack_44,(MethodInfo *)0x0);
    (local_38->fields).R = uVar2;
    (local_38->fields).G = uVar3;
    (local_38->fields).B = uVar4;
    (local_38->fields).A = bVar5;
    (local_38->fields).H = fStack_4c;
    (local_38->fields).S = fStack_48;
    (local_38->fields).V = afStack_44[0];
  }
  return iVar1 == local_3c;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$TryParseByte
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParseByte (System_String_o* text, uint8_t* value, const MethodInfo* method);
// 0x5378530

bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParseByte
               (System_String_o *text,uint8_t *value,MethodInfo *method)

{
  bool bVar1;
  System_Globalization_CultureInfo_o *provider;
  int iVar2;
  int iVar3;
  int32_t local_1c;
  
  if (Il2CppMethodInitialized_07542a93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_07542a93 = '\x01';
  }
  local_1c = 0;
  *value = 0;
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar1 = System_Int32__TryParse_54b7c80
                    (text,7,(System_IFormatProvider_o *)provider,&local_1c,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 0xff;
    if (local_1c < 0xff) {
      iVar2 = local_1c;
    }
    iVar3 = 0;
    if (0 < iVar2) {
      iVar3 = iVar2;
    }
    *value = (uint8_t)iVar3;
  }
  return bVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$ToColor
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToColor (uint8_t r, uint8_t g, uint8_t b, uint8_t a, const MethodInfo* method);
// 0x5378650

UnityEngine_Color_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToColor
          (uint8_t r,uint8_t g,uint8_t b,uint8_t a,MethodInfo *method)

{
  undefined1 in_CH;
  undefined1 in_DH;
  undefined1 in_register_00000031;
  undefined3 in_register_00000039;
  undefined1 auVar1 [16];
  UnityEngine_Color_Fields UVar2;
  
  auVar1._0_4_ = (float)CONCAT31(in_register_00000039,r);
  auVar1._4_4_ = (float)CONCAT11(in_register_00000031,g);
  auVar1._8_4_ = (float)CONCAT11(in_DH,b);
  auVar1._12_4_ = (float)CONCAT11(in_CH,a);
  UVar2 = (UnityEngine_Color_Fields)divps(auVar1,_DAT_010052a0);
  return (UnityEngine_Color_o)UVar2;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$ParseByte
// il2cpp: uint8_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ParseByte (System_String_o* value, int32_t start, const MethodInfo* method);
// 0x5378b90

uint8_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ParseByte
                  (System_String_o *value,int32_t start,MethodInfo *method)

{
  uint8_t uVar1;
  System_String_o *s;
  System_Globalization_CultureInfo_o *provider;
  
  if (Il2CppMethodInitialized_07542a94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_07542a94 = '\x01';
  }
  if (value == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  s = System_String__Substring_53042f0(value,start,2,(MethodInfo *)0x0);
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  uVar1 = System_Byte__Parse_541d4b0(s,0x203,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
  return uVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$ToByte
// il2cpp: uint8_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte (float value, const MethodInfo* method);
// 0x5378a60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5378b54: jmp 0x5378aa8

uint8_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(float value,MethodInfo *method)

{
  uint32_t uVar1;
  double dVar2;
  double dVar3;
  MethodInfo *in_RSI;
  MethodInfo *method_00;
  float fVar4;
  Il2CppMethodPointer local_20;
  undefined1 local_18 [16];
  
  fVar4 = 1.0;
  if (value <= 1.0) {
    fVar4 = value;
  }
  local_18 = ZEXT416(-(uint)(0.0 <= value) & (uint)(fVar4 * 255.0));
  if (Il2CppMethodInitialized_07541320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541320 = '\x01';
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar2 = (double)(float)local_18._0_4_;
  method_00 = (MethodInfo *)&local_20;
  dVar3 = modf(dVar2,(double *)method_00,in_RSI);
  if (0.0 <= (float)local_18._0_4_) {
    if ((dVar3 != 0.5) || (NAN(dVar3))) {
      dVar2 = floor(dVar2 + 0.5,method_00);
      return (uint8_t)(int)dVar2;
    }
    if (((long)(double)local_20 & 1U) != 0) {
      return (uint8_t)(int)((double)local_20 + 1.0);
    }
  }
  else {
    if ((dVar3 != -0.5) || (NAN(dVar3))) {
      dVar2 = ceil(dVar2 + -0.5,method_00);
      return (uint8_t)(int)dVar2;
    }
    if (((long)(double)local_20 & 1U) != 0) {
      local_20 = (Il2CppMethodPointer)((double)local_20 + -1.0);
    }
  }
  return (uint8_t)(int)(double)local_20;
}


