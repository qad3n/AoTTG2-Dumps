// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchUIColorPickerValue.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, uint8_t r, uint8_t g, uint8_t b, uint8_t a, const MethodInfo* method);
// 0x3b6f040

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this,uint8_t r,uint8_t g,uint8_t b,
               uint8_t a,MethodInfo *method)

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
            (rgbColor,(float *)(puVar1 + 4),(float *)(puVar1 + 8),(float *)(puVar1 + 0xc),(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, uint8_t r, uint8_t g, uint8_t b, uint8_t a, float h, float s, float v, const MethodInfo* method);
// 0x3b706a0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue___ctor_3a706a0
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this,uint8_t r,uint8_t g,uint8_t b,
               uint8_t a,float h,float s,float v,MethodInfo *method)

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
// 0x3b70530

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
// 0x3b6b560

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToHex
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this,bool_conflict alpha,MethodInfo *method)

{
  System_String_o *pSVar1;
  byte *pbVar2;
  UnityEngine_Color_o color;
  
  pbVar2 = __this.fields._0_8_;
  if (g_data_057a9df8 == '\0') {
    il2cpp_runtime_helper_023445d0(__this.fields._8_8_);
    g_data_057a9df8 = '\x01';
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
                                 CONCAT44((float)pbVar2[1] / 255.0,(float)*pbVar2 / 255.0)),(MethodInfo *)0x0)
    ;
  }
  pSVar1 = System_String__Concat_3ae5ba0("#",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$WithRgb
// il2cpp: Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithRgb (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, uint8_t r, uint8_t g, uint8_t b, const MethodInfo* method);
// 0x3b6feb0

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
            (rgbColor,&fStack_14,(float *)&uStack_10,(float *)((long)&uStack_10 + 4),(MethodInfo *)0x0);
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
// 0x3b70730

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
// 0x3b707f0

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
  UVar10 = UnityEngine_Color__HSVToRGB_4de5b40(fVar9,fVar7,fVar8,1,(MethodInfo *)0x0);
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
// 0x3b70a00

Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithSaturationValue
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this,float s,float v,MethodInfo *method)

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
  UVar8 = UnityEngine_Color__HSVToRGB_4de5b40(fVar5,fVar7,fVar6,1,(MethodInfo *)0x0);
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
// 0x3b70900

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
  UVar7 = UnityEngine_Color__HSVToRGB_4de5b40(fVar6,fVar4,fVar5,1,(MethodInfo *)0x0);
  bVar1 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar7.fields.r,method_00);
  uStack_34 = UVar7.fields.g;
  bVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(uStack_34,method_00);
  uStack_28 = UVar7.fields.b;
  bVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(uStack_28,method_00);
  GVar8.fields._0_8_ =
       (ulong)bVar1 | (CONCAT71(in_register_00000039,a) & 0xffffffff) << 0x18 | (ulong)(uint)fVar6 << 0x20 |
       (ulong)bVar2 << 8 | (ulong)bVar3 << 0x10;
  GVar8.fields.V = fVar5;
  GVar8.fields.S = fVar4;
  return (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o)GVar8.fields;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$Normalize
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize (System_String_o* text, bool alpha, System_String_o* fallback, const MethodInfo* method);
// 0x3b6a4a0

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize
          (System_String_o *text,bool_conflict alpha,System_String_o *fallback,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *str1;
  undefined8 *puVar2;
  UnityEngine_Color_o color;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields local_28;
  
  if (g_data_057a9df9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    il2cpp_runtime_helper_023445d0(&"#FFFFFF");
    g_data_057a9df9 = '\x01';
  }
  local_28.R = '\0';
  local_28.G = '\0';
  local_28.B = '\0';
  local_28.A = '\0';
  local_28.H = 0.0;
  local_28.S = 0.0;
  local_28.V = 0.0;
  bVar1 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                    (text,alpha & 0xff,(Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&local_28,method
                    );
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
    if (g_data_057a9df8 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a9df8 = '\x01';
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
    fallback = System_String__Concat_3ae5ba0("#",str1,(MethodInfo *)0x0);
  }
  return fallback;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$FilterHexInput
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FilterHexInput (System_String_o* text, bool alpha, const MethodInfo* method);
// 0x3b70120

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FilterHexInput
          (System_String_o *text,bool_conflict alpha,MethodInfo *method)

{
  int iVar1;
  UnityEngine_GameObject_o *source;
  UnityEngine_Object_c *source_00;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint16_t uVar5;
  bool_conflict bVar6;
  System_Char_array *in_RAX;
  System_Char_array *pSVar7;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  System_String_o *pSVar8;
  undefined8 *puVar9;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  uint uVar10;
  long lVar12;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  ulong uVar13;
  uint length;
  int32_t index;
  ulong uVar14;
  UnityEngine_Object_o *x;
  ulong uVar15;
  uint uVar16;
  float fVar18;
  float fVar19;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields local_80;
  float local_70;
  float fStack_6c;
  undefined8 uStack_68;
  ulong uStack_58;
  System_String_o *pSStack_50;
  ulong uStack_48;
  ulong uStack_40;
  System_Char_array *local_38;
  MethodInfo *pMVar11;
  ulong uVar17;
  
  local_38 = in_RAX;
  if (g_data_057a9dfa == '\0') {
    uStack_40 = 0x3b70145;
    il2cpp_runtime_helper_023445d0(&TypeInfo_char);
    uStack_40 = 0x3b70151;
    il2cpp_runtime_helper_023445d0(&"#");
    g_data_057a9dfa = '\x01';
    method = extraout_RDX;
  }
  uVar16 = (alpha & 0xffU) * 2 + 6;
  uVar17 = (ulong)uVar16;
  uStack_40 = 0x3b70176;
  pSVar7 = (System_Char_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_char,uVar17,method);
  if ((text == (System_String_o *)0x0) &&
     (text = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), text == (System_String_o *)0x0)) {
label_03b702af:
    uStack_40 = 0x3b702b4;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar1 = (text->fields)._stringLength;
    local_38 = pSVar7;
    if (pSVar7 != (System_Char_array *)0x0) {
      length = 0;
      if (0 < iVar1) {
        uVar15 = 1;
        length = 0;
        do {
          iVar1 = (int)uVar15;
          uStack_40 = 0x3b701de;
          uVar5 = System_String__get_Chars(text,iVar1 + -1,(MethodInfo *)0x0);
          uVar13 = CONCAT62(extraout_var,uVar5) & 0xffffffff;
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            uStack_40 = 0x3b701f5;
            il2cpp_runtime_helper_02337ed0();
          }
          uVar14 = (ulong)uVar5;
          uStack_40 = 0x3b701ff;
          uVar5 = System_Char__ToUpperInvariant(uVar5,(MethodInfo *)0x0);
          if (uVar5 != 0x23) {
            iVar2 = (int)CONCAT62(extraout_var_00,uVar5);
            uVar10 = iVar2 - 0x30;
            if (((ushort)uVar10 < 10) || (uVar10 = iVar2 - 0x41, (ushort)uVar10 < 6)) {
              pMVar11 = (MethodInfo *)(ulong)uVar10;
              if ((uint)local_38->max_length <= length) {
                uStack_40 = 0x3b702ef;
                il2cpp_runtime_helper_022b2ca0();
                uStack_58 = uVar13;
                pSStack_50 = text;
                uStack_48 = uVar15;
                uStack_40 = uVar17;
                if (g_data_057a9def == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                  g_data_057a9def = '\x01';
                }
                local_80.R = '\0';
                local_80.G = '\0';
                local_80.B = '\0';
                local_80.A = '\0';
                local_80.H = 0.0;
                local_80.S = 0.0;
                local_80.V = 0.0;
                x = *(UnityEngine_Object_o **)(uVar14 + 0x68);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar6 == '\0') {
                  puVar9 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
                }
                else {
                  if (*(long *)(uVar14 + 0x68) == 0) {
                    il2cpp_runtime_helper_022b2c90();
                    pMVar11 = extraout_RDX_00;
                    if (g_data_057a9df0 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
                      g_data_057a9df0 = '\x01';
                      pMVar11 = extraout_RDX_01;
                    }
                    pSVar8 = x[1].monitor;
                    source_00 = x[2].klass;
                    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      pMVar11 = extraout_RDX_02;
                    }
                    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Cancel
                              (pSVar8,(UnityEngine_GameObject_o *)source_00,pMVar11);
                    pSVar8 = x[2].monitor;
                    if ((pSVar8 != (System_String_o *)0x0) && (pSVar8[5].fields != (System_String_Fields)0x0))
                    {
                      bVar6 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                                        ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)
                                         pSVar8[5].fields,1,(MethodInfo *)0x0);
                      return (System_String_o *)CONCAT44(extraout_var_03,bVar6);
                    }
                    return pSVar8;
                  }
                  puVar9 = (undefined8 *)(*(long *)(uVar14 + 0x68) + 0x220);
                }
                bVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                                  ((System_String_o *)*puVar9,(uint)*(byte *)(uVar14 + 0x28),
                                   (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&local_80,pMVar11);
                uVar3 = local_80._0_8_;
                pSVar8 = (System_String_o *)CONCAT44(extraout_var_01,bVar6);
                if ((char)bVar6 != '\0') {
                  pSVar8 = *(System_String_o **)(uVar14 + 0x20);
                  source = *(UnityEngine_GameObject_o **)(uVar14 + 0x30);
                  fVar18 = local_80.S;
                  fVar19 = local_80.V;
                  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                    local_70 = local_80.S;
                    fStack_6c = local_80.V;
                    uStack_68 = 0;
                    il2cpp_runtime_helper_02337ed0();
                    fVar18 = local_70;
                    fVar19 = fStack_6c;
                  }
                  uVar4 = local_80._0_8_;
                  value.fields.V = fVar19;
                  value.fields.S = fVar18;
                  local_80.R = (uint8_t)uVar3;
                  local_80.G = SUB81(uVar3,1);
                  local_80.B = SUB81(uVar3,2);
                  local_80.A = SUB81(uVar3,3);
                  local_80.H = SUB84(uVar3,4);
                  value.fields.R = local_80.R;
                  value.fields.G = local_80.G;
                  value.fields.B = local_80.B;
                  value.fields.A = local_80.A;
                  value.fields.H = local_80.H;
                  local_80._0_8_ = uVar4;
                  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Commit(pSVar8,value,source,pMVar11);
                  pSVar8 = *(System_String_o **)(uVar14 + 0x38);
                  if ((pSVar8 != (System_String_o *)0x0) && (pSVar8[5].fields != (System_String_Fields)0x0)) {
                    bVar6 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                                      ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)pSVar8[5].fields
                                       ,1,(MethodInfo *)0x0);
                    pSVar8 = (System_String_o *)CONCAT44(extraout_var_02,bVar6);
                  }
                }
                return pSVar8;
              }
              lVar12 = (long)(int)length;
              length = length + 1;
              local_38->m_Items[lVar12] = uVar5;
            }
          }
        } while (((int)length < (int)uVar16) &&
                (uVar15 = (ulong)(iVar1 + 1), iVar1 < (text->fields)._stringLength));
      }
      goto label_03b702b6;
    }
    index = 0;
    length = 0;
    if (iVar1 < 1) goto label_03b702b6;
    do {
      uStack_40 = 0x3b70276;
      uVar5 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        uStack_40 = 0x3b7028d;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_40 = 0x3b70297;
      uVar5 = System_Char__ToUpperInvariant(uVar5,(MethodInfo *)0x0);
      if ((uVar5 != 0x23) && (((ushort)(uVar5 - 0x30) < 10 || ((ushort)(uVar5 - 0x41) < 6))))
      goto label_03b702af;
      index = index + 1;
    } while (index < (text->fields)._stringLength);
  }
  length = 0;
label_03b702b6:
  uStack_40 = 0x3b702c8;
  pSVar8 = System_String__CreateString_3afdbe0((System_String_o *)0x0,local_38,0,length,(MethodInfo *)0x0);
  pSVar8 = System_String__Concat_3ae5ba0("#",pSVar8,(MethodInfo *)0x0);
  return pSVar8;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$TryParse
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse (System_String_o* text, bool alpha, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o* value, const MethodInfo* method);
// 0x3b6edc0

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
  bool_conflict extraout_EAX;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_Globalization_CultureInfo_o *pSVar8;
  undefined8 extraout_RAX;
  int iVar9;
  int extraout_EDX;
  int in_R8D;
  UnityEngine_Color_o rgbColor;
  UnityEngine_Color_o rgbColor_00;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  iVar9 = (int)method;
  bVar5 = alpha;
  pSVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FilterHexInput(text,alpha,(MethodInfo *)value);
  (value->fields).R = '\0';
  (value->fields).G = '\0';
  (value->fields).B = '\0';
  (value->fields).A = '\0';
  (value->fields).H = 0.0;
  (value->fields).S = 0.0;
  (value->fields).V = 0.0;
  if (pSVar6 != (System_String_o *)0x0) {
    if ((pSVar6->fields)._stringLength == (alpha & 0xffU) * 2 + 7) {
      if (g_data_057a9dfc == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        g_data_057a9dfc = '\x01';
      }
      pSVar7 = System_String__Substring_3af8da0(pSVar6,1,2,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar1 = System_Byte__Parse_3c17540(pSVar7,0x203,(System_IFormatProvider_o *)pSVar8,(MethodInfo *)0x0);
      if (g_data_057a9dfc == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        g_data_057a9dfc = '\x01';
      }
      pSVar7 = System_String__Substring_3af8da0(pSVar6,3,2,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar2 = System_Byte__Parse_3c17540(pSVar7,0x203,(System_IFormatProvider_o *)pSVar8,(MethodInfo *)0x0);
      if (g_data_057a9dfc == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        g_data_057a9dfc = '\x01';
      }
      pSVar7 = System_String__Substring_3af8da0(pSVar6,5,2,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar3 = System_Byte__Parse_3c17540(pSVar7,0x203,(System_IFormatProvider_o *)pSVar8,(MethodInfo *)0x0);
      bVar4 = 0xff;
      if ((char)alpha != '\0') {
        if (g_data_057a9dfc == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
          g_data_057a9dfc = '\x01';
        }
        pSVar6 = System_String__Substring_3af8da0(pSVar6,7,2,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        bVar4 = System_Byte__Parse_3c17540(pSVar6,0x203,(System_IFormatProvider_o *)pSVar8,(MethodInfo *)0x0);
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
  il2cpp_runtime_helper_022b2c90();
  *(char *)&text->klass = (char)bVar5;
  *(char *)((long)&text->klass + 1) = (char)extraout_EDX;
  *(char *)((long)&text->klass + 2) = (char)iVar9;
  rgbColor_00.fields.r = (float)bVar5 / 255.0;
  *(char *)((long)&text->klass + 3) = (char)in_R8D;
  rgbColor_00.fields.b = (float)iVar9 / 255.0;
  rgbColor_00.fields.a = (float)in_R8D / 255.0;
  rgbColor_00.fields.g = (float)extraout_EDX / 255.0;
  UnityEngine_Color__RGBToHSV
            (rgbColor_00,(float *)((long)&text->klass + 4),(float *)&text->monitor,
             (float *)((long)&text->monitor + 4),(MethodInfo *)0x0);
  return extraout_EAX;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$TryParseByte
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParseByte (System_String_o* text, uint8_t* value, const MethodInfo* method);
// 0x3b70540

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
  
  if (g_data_057a9dfb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    g_data_057a9dfb = '\x01';
  }
  local_1c = 0;
  *value = '\0';
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar4 = 0;
  bVar3 = 0;
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar1 = System_Int32__TryParse_3cb4bf0
                    (text,7,(System_IFormatProvider_o *)provider,(int32_t *)&local_1c,(MethodInfo *)0x0);
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
// 0x3b70670

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
// 0x3b70c30

uint8_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ParseByte
                  (System_String_o *value,int32_t start,MethodInfo *method)

{
  uint8_t uVar1;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar2;
  
  pSVar2 = value;
  if (g_data_057a9dfc == '\0') {
    pSVar2 = (System_String_o *)&TypeInfo_CultureInfo;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9dfc = '\x01';
  }
  if (value != (System_String_o *)0x0) {
    pSVar2 = System_String__Substring_3af8da0(value,start,2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    uVar1 = System_Byte__Parse_3c17540(pSVar2,0x203,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
    return uVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  return *(uint8_t *)&pSVar2[6].klass;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$ToByte
// il2cpp: uint8_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte (float value, const MethodInfo* method);
// 0x3b70b00

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
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
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


