// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchUIColorPickerValue.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, uint8_t r, uint8_t g, uint8_t b, uint8_t a, const MethodInfo* method);
// 0x3b03080

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this,uint8_t r,uint8_t g,
               uint8_t b,uint8_t a,MethodInfo *method)

{
  undefined7 in_register_00000009;
  undefined7 in_register_00000011;
  undefined7 in_register_00000031;
  uint8_t *puVar1;
  undefined3 in_register_00000081;
  UnityEngine_Color_o rgbColor;
  
  puVar1 = __this.fields._0_8_;
  *puVar1 = r;
  puVar1[1] = g;
  puVar1[2] = b;
  rgbColor.fields.r = (float)(int)CONCAT71(in_register_00000031,r) / 255.0;
  rgbColor.fields.g = (float)(int)CONCAT71(in_register_00000011,g) / 255.0;
  puVar1[3] = a;
  rgbColor.fields.b = (float)(int)CONCAT71(in_register_00000009,b) / 255.0;
  rgbColor.fields.a = (float)CONCAT31(in_register_00000081,a) / 255.0;
  UnityEngine_Color__RGBToHSV
            (rgbColor,(float *)(puVar1 + 4),(float *)(puVar1 + 8),(float *)(puVar1 + 0xc),
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, uint8_t r, uint8_t g, uint8_t b, uint8_t a, float h, float s, float v, const MethodInfo* method);
// 0x3b046e0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this,uint8_t r,uint8_t g,
               uint8_t b,uint8_t a,float h,float s,float v,MethodInfo *method)

{
  uint8_t *puVar1;
  float fVar2;
  float fVar3;
  
  puVar1 = __this.fields._0_8_;
  *puVar1 = r;
  puVar1[1] = g;
  puVar1[2] = b;
  puVar1[3] = a;
  fVar2 = floorf(__this.fields.S);
  fVar2 = __this.fields.S - fVar2;
  fVar3 = 1.0;
  if (fVar2 <= 1.0) {
    fVar3 = fVar2;
  }
  *(uint *)(puVar1 + 4) = -(uint)(0.0 <= fVar2) & (uint)fVar3;
  fVar3 = 1.0;
  if (h <= 1.0) {
    fVar3 = h;
  }
  *(uint *)(puVar1 + 8) = -(uint)(0.0 <= h) & (uint)fVar3;
  fVar3 = 1.0;
  if (s <= 1.0) {
    fVar3 = s;
  }
  *(uint *)(puVar1 + 0xc) = -(uint)(0.0 <= s) & (uint)fVar3;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$get_Color32
// il2cpp: UnityEngine_Color32_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__get_Color32 (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, const MethodInfo* method);
// 0x3b04570

UnityEngine_Color32_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__get_Color32
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this,MethodInfo *method)

{
  UnityEngine_Color32_Fields UVar1;
  
  UVar1.r = '\0';
  UVar1.g = '\0';
  UVar1.b = '\0';
  UVar1.a = '\0';
  UVar1.rgba = *__this.fields._0_8_;
  return (UnityEngine_Color32_o)UVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$ToHex
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToHex (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, bool alpha, const MethodInfo* method);
// 0x3aff610

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToHex
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this,bool_conflict alpha,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  byte *pbVar2;
  UnityEngine_Color_o color;
  
  pbVar2 = __this.fields._0_8_;
  if (DAT_057014ca == '\0') {
    il2cpp_init_method_metadata(__this.fields._8_8_);
    DAT_057014ca = '\x01';
  }
  if ((char)alpha == '\0') {
    color.fields.b = (float)pbVar2[2] / 255.0;
    color.fields.a = (float)pbVar2[3] / 255.0;
    color.fields.r = (float)*pbVar2 / 255.0;
    color.fields.g = (float)pbVar2[1] / 255.0;
    pSVar1 = UnityEngine_ColorUtility__ToHtmlStringRGB(color,(MethodInfo *)0x0);
  }
  else {
    pSVar1 = UnityEngine_ColorUtility__ToHtmlStringRGBA
                       ((UnityEngine_Color_o)
                        CONCAT88(CONCAT44((float)pbVar2[3] / 255.0,(float)pbVar2[2] / 255.0),
                                 CONCAT44((float)pbVar2[1] / 255.0,(float)*pbVar2 / 255.0)),
                        (MethodInfo *)0x0);
  }
  pSVar1 = System_String__Concat("#",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$WithRgb
// il2cpp: Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithRgb (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, uint8_t r, uint8_t g, uint8_t b, const MethodInfo* method);
// 0x3b03ef0

Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithRgb
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this,uint8_t r,uint8_t g,uint8_t b,
          MethodInfo *method)

{
  byte bVar1;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GVar2;
  undefined7 in_register_00000009;
  undefined7 in_register_00000011;
  undefined7 in_register_00000031;
  UnityEngine_Color_o rgbColor;
  float fStack_14;
  undefined8 uStack_10;
  
  bVar1 = *(byte *)(__this.fields._0_8_ + 3);
  fStack_14 = 0.0;
  uStack_10 = 0;
  rgbColor.fields.r = (float)(int)CONCAT71(in_register_00000031,r) / 255.0;
  rgbColor.fields.b = (float)(int)CONCAT71(in_register_00000009,b) / 255.0;
  rgbColor.fields.a = (float)bVar1 / 255.0;
  rgbColor.fields.g = (float)(int)CONCAT71(in_register_00000011,g) / 255.0;
  UnityEngine_Color__RGBToHSV
            (rgbColor,&fStack_14,(float *)&uStack_10,(float *)((long)&uStack_10 + 4),
             (MethodInfo *)0x0);
  GVar2.G = g;
  GVar2.R = r;
  GVar2.B = b;
  GVar2.A = bVar1;
  GVar2.H = fStack_14;
  GVar2.S = (float)(undefined4)uStack_10;
  GVar2.V = (float)uStack_10._4_4_;
  return (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o)GVar2;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$WithAlpha
// il2cpp: Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithAlpha (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, uint8_t a, const MethodInfo* method);
// 0x3b04770

Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithAlpha
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this,uint8_t a,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  undefined3 in_register_00000031;
  byte *pbVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o GVar11;
  
  pbVar6 = __this.fields._0_8_;
  bVar2 = *pbVar6;
  bVar3 = pbVar6[1];
  bVar4 = pbVar6[2];
  fVar10 = *(float *)(pbVar6 + 4);
  fVar9 = *(float *)(pbVar6 + 8);
  fVar1 = *(float *)(pbVar6 + 0xc);
  fVar7 = floorf(fVar10);
  fVar10 = fVar10 - fVar7;
  fVar7 = 1.0;
  if (fVar10 <= 1.0) {
    fVar7 = fVar10;
  }
  fVar8 = 1.0;
  if (fVar9 <= 1.0) {
    fVar8 = fVar9;
  }
  GVar11.fields.S = -(uint)(0.0 <= fVar9) & (uint)fVar8;
  fVar9 = 1.0;
  if (fVar1 <= 1.0) {
    fVar9 = fVar1;
  }
  uVar5 = (ulong)bVar3 << 8 | (ulong)CONCAT31(in_register_00000031,a) << 0x18 | (ulong)bVar2 |
          (ulong)bVar4 << 0x10 | (ulong)(-(uint)(0.0 <= fVar10) & (uint)fVar7) << 0x20;
  GVar11.fields.V = (float)(-(uint)(0.0 <= fVar1) & (uint)fVar9);
  GVar11.fields.R = (char)uVar5;
  GVar11.fields.G = (char)(uVar5 >> 8);
  GVar11.fields.B = (char)(uVar5 >> 0x10);
  GVar11.fields.A = (char)(uVar5 >> 0x18);
  GVar11.fields.H = (float)(int)(uVar5 >> 0x20);
  return (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o)GVar11.fields;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$WithHue
// il2cpp: Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithHue (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, float h, const MethodInfo* method);
// 0x3b04830

Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithHue
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this,float h,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  MethodInfo *method_00;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Color_o UVar10;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o GVar11;
  undefined4 uStack_34;
  undefined4 uStack_28;
  
  lVar6 = __this.fields._0_8_;
  fVar8 = *(float *)(lVar6 + 8);
  fVar1 = *(float *)(lVar6 + 0xc);
  bVar2 = *(byte *)(lVar6 + 3);
  fVar7 = floorf(__this.fields.S);
  fVar7 = __this.fields.S - fVar7;
  fVar9 = 1.0;
  if (fVar7 <= 1.0) {
    fVar9 = fVar7;
  }
  fVar9 = (float)(-(uint)(0.0 <= fVar7) & (uint)fVar9);
  fVar7 = 1.0;
  if (fVar8 <= 1.0) {
    fVar7 = fVar8;
  }
  fVar7 = (float)(-(uint)(0.0 <= fVar8) & (uint)fVar7);
  fVar8 = 1.0;
  if (fVar1 <= 1.0) {
    fVar8 = fVar1;
  }
  fVar8 = (float)(-(uint)(0.0 <= fVar1) & (uint)fVar8);
  method_00 = (MethodInfo *)0x1;
  UVar10 = UnityEngine_Color__HSVToRGB(fVar9,fVar7,fVar8,1,(MethodInfo *)0x0);
  bVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar10.fields.r,method_00);
  uStack_34 = UVar10.fields.g;
  bVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(uStack_34,method_00);
  uStack_28 = UVar10.fields.b;
  bVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(uStack_28,method_00);
  GVar11.fields._0_8_ =
       (ulong)bVar3 | (ulong)bVar2 << 0x18 | (ulong)(uint)fVar9 << 0x20 | (ulong)bVar4 << 8 |
       (ulong)bVar5 << 0x10;
  GVar11.fields.V = fVar8;
  GVar11.fields.S = fVar7;
  return (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o)GVar11.fields;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$WithSaturationValue
// il2cpp: Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithSaturationValue (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, float s, float v, const MethodInfo* method);
// 0x3b04a40

Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithSaturationValue
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this,float s,float v,
          MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  MethodInfo *method_00;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Color_o UVar8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o GVar9;
  undefined4 uStack_48;
  undefined4 uStack_34;
  undefined4 uStack_28;
  
  fVar7 = *(float *)(__this.fields._0_8_ + 4);
  bVar1 = *(byte *)(__this.fields._0_8_ + 3);
  fVar5 = floorf(fVar7);
  fVar7 = fVar7 - fVar5;
  fVar5 = 1.0;
  if (fVar7 <= 1.0) {
    fVar5 = fVar7;
  }
  fVar5 = (float)(-(uint)(0.0 <= fVar7) & (uint)fVar5);
  uStack_48 = __this.fields.S;
  fVar7 = 1.0;
  if (uStack_48 <= 1.0) {
    fVar7 = uStack_48;
  }
  fVar7 = (float)(-(uint)(0.0 <= uStack_48) & (uint)fVar7);
  fVar6 = 1.0;
  if (s <= 1.0) {
    fVar6 = s;
  }
  fVar6 = (float)(-(uint)(0.0 <= s) & (uint)fVar6);
  method_00 = (MethodInfo *)0x1;
  UVar8 = UnityEngine_Color__HSVToRGB(fVar5,fVar7,fVar6,1,(MethodInfo *)0x0);
  bVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar8.fields.r,method_00);
  uStack_34 = UVar8.fields.g;
  bVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(uStack_34,method_00);
  uStack_28 = UVar8.fields.b;
  bVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(uStack_28,method_00);
  GVar9.fields._0_8_ =
       (ulong)bVar2 | (ulong)bVar1 << 0x18 | (ulong)bVar3 << 8 | (ulong)bVar4 << 0x10 |
       (ulong)(uint)fVar5 << 0x20;
  GVar9.fields.V = fVar6;
  GVar9.fields.S = fVar7;
  return (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o)GVar9.fields;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$FromHsv
// il2cpp: Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FromHsv (float h, float s, float v, uint8_t a, const MethodInfo* method);
// 0x3b04940

Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FromHsv
          (float h,float s,float v,uint8_t a,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined7 in_register_00000039;
  MethodInfo *method_00;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Color_o UVar7;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o GVar8;
  undefined4 uStack_34;
  undefined4 uStack_28;
  
  fVar4 = floorf(h);
  fVar4 = h - fVar4;
  fVar6 = 1.0;
  if (fVar4 <= 1.0) {
    fVar6 = fVar4;
  }
  fVar6 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar6);
  fVar4 = 1.0;
  if (s <= 1.0) {
    fVar4 = s;
  }
  fVar4 = (float)(-(uint)(0.0 <= s) & (uint)fVar4);
  fVar5 = 1.0;
  if (v <= 1.0) {
    fVar5 = v;
  }
  fVar5 = (float)(-(uint)(0.0 <= v) & (uint)fVar5);
  method_00 = (MethodInfo *)0x1;
  UVar7 = UnityEngine_Color__HSVToRGB(fVar6,fVar4,fVar5,1,(MethodInfo *)0x0);
  bVar1 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar7.fields.r,method_00);
  uStack_34 = UVar7.fields.g;
  bVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(uStack_34,method_00);
  uStack_28 = UVar7.fields.b;
  bVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(uStack_28,method_00);
  GVar8.fields._0_8_ =
       (ulong)bVar1 |
       (CONCAT71(in_register_00000039,a) & 0xffffffff) << 0x18 | (ulong)(uint)fVar6 << 0x20 |
       (ulong)bVar2 << 8 | (ulong)bVar3 << 0x10;
  GVar8.fields.V = fVar5;
  GVar8.fields.S = fVar4;
  return (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o)GVar8.fields;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$Normalize
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize (System_String_o* text, bool alpha, System_String_o* fallback, const MethodInfo* method);
// 0x3afe590

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize
          (System_String_o *text,bool_conflict alpha,System_String_o *fallback,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *str1;
  undefined8 *puVar2;
  UnityEngine_Color_o color;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields local_28;
  
  if (DAT_057014cb == '\0') {
    il2cpp_init_method_metadata(&"#FFFFFFFF");
    il2cpp_init_method_metadata(&"#FFFFFF");
    DAT_057014cb = '\x01';
  }
  local_28.R = '\0';
  local_28.G = '\0';
  local_28.B = '\0';
  local_28.A = '\0';
  local_28.H = 0.0;
  local_28.S = 0.0;
  local_28.V = 0.0;
  bVar1 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                    (text,alpha & 0xff,
                     (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&local_28,method);
  if ((char)bVar1 == '\0') {
    if (fallback == (System_String_o *)0x0) {
      if ((char)alpha == '\0') {
        puVar2 = &"#FFFFFF";
      }
      else {
        puVar2 = &"#FFFFFFFF";
      }
      fallback = (System_String_o *)*puVar2;
    }
  }
  else {
    if (DAT_057014ca == '\0') {
      il2cpp_init_method_metadata();
      DAT_057014ca = '\x01';
    }
    if ((char)alpha == '\0') {
      color.fields.g = (float)local_28.G / 255.0;
      color.fields.r = (float)local_28.R / 255.0;
      color.fields.b = (float)local_28.B / 255.0;
      color.fields.a = (float)local_28.A / 255.0;
      str1 = UnityEngine_ColorUtility__ToHtmlStringRGB(color,(MethodInfo *)0x0);
    }
    else {
      str1 = UnityEngine_ColorUtility__ToHtmlStringRGBA
                       ((UnityEngine_Color_o)
                        CONCAT88(CONCAT44((float)local_28.A / 255.0,(float)local_28.B / 255.0),
                                 CONCAT44((float)local_28.G / 255.0,(float)local_28.R / 255.0)),
                        (MethodInfo *)0x0);
    }
    fallback = System_String__Concat("#",str1,(MethodInfo *)0x0);
  }
  return fallback;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$FilterHexInput
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FilterHexInput (System_String_o* text, bool alpha, const MethodInfo* method);
// 0x3b04160

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FilterHexInput
          (System_String_o *text,bool_conflict alpha,MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  System_Char_array *val;
  System_String_o *pSVar3;
  long lVar4;
  MethodInfo *extraout_RDX;
  uint index;
  int iVar5;
  int iVar6;
  
  if (DAT_057014cc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_char);
    il2cpp_init_method_metadata(&"#");
    DAT_057014cc = '\x01';
    method = extraout_RDX;
  }
  iVar6 = (alpha & 0xffU) * 2 + 6;
  val = (System_Char_array *)il2cpp_glue_02274930(TypeInfo_char,iVar6,method);
  if ((text == (System_String_o *)0x0) &&
     (text = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8), text == (System_String_o *)0x0)) {
LAB_03b042ef:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar5 = (text->fields)._stringLength;
  if (val == (System_Char_array *)0x0) {
    index = 0;
    if (0 < iVar5) {
      do {
        uVar2 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
        if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        uVar2 = System_Char__ToUpperInvariant(uVar2,(MethodInfo *)0x0);
        if ((uVar2 != 0x23) && (((ushort)(uVar2 - 0x30) < 10 || ((ushort)(uVar2 - 0x41) < 6))))
        goto LAB_03b042ef;
        index = index + 1;
      } while ((int)index < (text->fields)._stringLength);
      index = 0;
    }
  }
  else {
    index = 0;
    if (0 < iVar5) {
      iVar5 = 1;
      do {
        uVar2 = System_String__get_Chars(text,iVar5 + -1,(MethodInfo *)0x0);
        if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        uVar2 = System_Char__ToUpperInvariant(uVar2,(MethodInfo *)0x0);
        if ((uVar2 != 0x23) && (((ushort)(uVar2 - 0x30) < 10 || ((ushort)(uVar2 - 0x41) < 6)))) {
          if ((uint)val->max_length <= index) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          lVar4 = (long)(int)index;
          index = index + 1;
          val->m_Items[lVar4] = uVar2;
        }
      } while (((int)index < iVar6) &&
              (bVar1 = iVar5 < (text->fields)._stringLength, iVar5 = iVar5 + 1, bVar1));
    }
  }
  pSVar3 = System_String__CreateString((System_String_o *)0x0,val,0,index,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat("#",pSVar3,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$TryParse
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse (System_String_o* text, bool alpha, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o* value, const MethodInfo* method);
// 0x3b02e00

bool_conflict
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
          (System_String_o *text,bool_conflict alpha,
          Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *value,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_Globalization_CultureInfo_o *pSVar8;
  undefined8 extraout_RAX;
  UnityEngine_Color_o rgbColor;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  pSVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FilterHexInput
                     (text,alpha,(MethodInfo *)value);
  (value->fields).R = '\0';
  (value->fields).G = '\0';
  (value->fields).B = '\0';
  (value->fields).A = '\0';
  (value->fields).H = 0.0;
  (value->fields).S = 0.0;
  (value->fields).V = 0.0;
  if (pSVar6 != (System_String_o *)0x0) {
    if ((pSVar6->fields)._stringLength == (alpha & 0xffU) * 2 + 7) {
      if (DAT_057014ce == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
        DAT_057014ce = '\x01';
      }
      pSVar7 = System_String__Substring(pSVar6,1,2,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar1 = System_Byte__Parse(pSVar7,0x203,(System_IFormatProvider_o *)pSVar8,(MethodInfo *)0x0);
      if (DAT_057014ce == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
        DAT_057014ce = '\x01';
      }
      pSVar7 = System_String__Substring(pSVar6,3,2,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar2 = System_Byte__Parse(pSVar7,0x203,(System_IFormatProvider_o *)pSVar8,(MethodInfo *)0x0);
      if (DAT_057014ce == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
        DAT_057014ce = '\x01';
      }
      pSVar7 = System_String__Substring(pSVar6,5,2,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar3 = System_Byte__Parse(pSVar7,0x203,(System_IFormatProvider_o *)pSVar8,(MethodInfo *)0x0);
      bVar4 = 0xff;
      if ((char)alpha != '\0') {
        if (DAT_057014ce == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
          DAT_057014ce = '\x01';
        }
        pSVar6 = System_String__Substring(pSVar6,7,2,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        bVar4 = System_Byte__Parse(pSVar6,0x203,(System_IFormatProvider_o *)pSVar8,(MethodInfo *)0x0
                                  );
      }
      fStack_34 = 0.0;
      fStack_3c = 0.0;
      fStack_38 = 0.0;
      rgbColor.fields.r = (float)bVar1 / 255.0;
      rgbColor.fields.b = (float)bVar3 / 255.0;
      rgbColor.fields.a = (float)bVar4 / 255.0;
      rgbColor.fields.g = (float)bVar2 / 255.0;
      UnityEngine_Color__RGBToHSV(rgbColor,&fStack_3c,&fStack_38,&fStack_34,(MethodInfo *)0x0);
      (value->fields).R = bVar1;
      (value->fields).G = bVar2;
      (value->fields).B = bVar3;
      (value->fields).A = bVar4;
      (value->fields).H = fStack_3c;
      (value->fields).S = fStack_38;
      (value->fields).V = fStack_34;
      bVar5 = (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
    }
    else {
      bVar5 = 0;
    }
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$TryParseByte
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParseByte (System_String_o* text, uint8_t* value, const MethodInfo* method);
// 0x3b04580

bool_conflict
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParseByte
          (System_String_o *text,uint8_t *value,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Globalization_CultureInfo_o *provider;
  uint uVar2;
  bool_conflict bVar3;
  uint local_1c;
  ulong uVar4;
  
  if (DAT_057014cd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
    DAT_057014cd = '\x01';
  }
  local_1c = 0;
  *value = '\0';
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar4 = 0;
  bVar3 = 0;
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar1 = System_Int32__TryParse
                    (text,7,(System_IFormatProvider_o *)provider,(int32_t *)&local_1c,
                     (MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    uVar2 = 0xff;
    if ((int)local_1c < 0x100) {
      uVar2 = local_1c;
    }
    if (0 < (int)uVar2) {
      uVar4 = (ulong)uVar2;
    }
    *value = (uint8_t)uVar4;
    bVar3 = (bool_conflict)CONCAT71((int7)(uVar4 >> 8),1);
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$ToColor
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToColor (uint8_t r, uint8_t g, uint8_t b, uint8_t a, const MethodInfo* method);
// 0x3b046b0

UnityEngine_Color_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToColor
          (uint8_t r,uint8_t g,uint8_t b,uint8_t a,MethodInfo *method)

{
  undefined3 in_register_00000009;
  undefined3 in_register_00000011;
  undefined3 in_register_00000031;
  undefined3 in_register_00000039;
  UnityEngine_Color_o UVar1;
  
  UVar1.fields.r = (float)CONCAT31(in_register_00000039,r) / 255.0;
  UVar1.fields.g = (float)CONCAT31(in_register_00000031,g) / 255.0;
  UVar1.fields.b = (float)CONCAT31(in_register_00000011,b) / 255.0;
  UVar1.fields.a = (float)CONCAT31(in_register_00000009,a) / 255.0;
  return (UnityEngine_Color_o)UVar1.fields;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$ParseByte
// il2cpp: uint8_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ParseByte (System_String_o* value, int32_t start, const MethodInfo* method);
// 0x3b04c70

uint8_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ParseByte
                  (System_String_o *value,int32_t start,MethodInfo *method)

{
  uint8_t uVar1;
  System_String_o *s;
  System_Globalization_CultureInfo_o *provider;
  
  if (DAT_057014ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
    DAT_057014ce = '\x01';
  }
  if (value != (System_String_o *)0x0) {
    s = System_String__Substring(value,start,2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      il2cpp_init_class();
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    uVar1 = System_Byte__Parse(s,0x203,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$ToByte
// il2cpp: uint8_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte (float value, const MethodInfo* method);
// 0x3b04b40

uint8_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(float value,MethodInfo *method)

{
  int iVar1;
  double dVar2;
  double dVar3;
  MethodInfo *in_RSI;
  MethodInfo *method_00;
  float fVar4;
  undefined1 local_20 [8];
  undefined1 local_18 [16];
  
  fVar4 = 1.0;
  if (value <= 1.0) {
    fVar4 = value;
  }
  local_18 = ZEXT416(-(uint)(0.0 <= value) & (uint)(fVar4 * 255.0));
  if (DAT_056ff244 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056ff244 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  dVar2 = (double)(float)local_18._0_4_;
  method_00 = (MethodInfo *)local_20;
  dVar3 = modf(dVar2,(double *)method_00,in_RSI);
  if (0.0 <= (float)local_18._0_4_) {
    if ((dVar3 != 0.5) || (NAN(dVar3))) {
      dVar2 = floor(dVar2 + 0.5,method_00);
      return (uint8_t)(int)dVar2;
    }
    if (((long)(double)local_20 & 1U) != 0) {
      local_20 = (undefined1  [8])((double)local_20 + 1.0);
    }
  }
  else {
    if ((dVar3 != -0.5) || (NAN(dVar3))) {
      dVar2 = ceil(dVar2 + -0.5,method_00);
      return (uint8_t)(int)dVar2;
    }
    if (((long)(double)local_20 & 1U) != 0) {
      return (uint8_t)(int)((double)local_20 + -1.0);
    }
  }
  return (uint8_t)(int)(double)local_20;
}


