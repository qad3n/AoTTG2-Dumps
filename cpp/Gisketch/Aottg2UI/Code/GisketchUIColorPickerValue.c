// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchUIColorPickerValue.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, uint8_t r, uint8_t g, uint8_t b, uint8_t a, const MethodInfo* method);
// 0x1818f0d90

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *__this,uint8_t r,uint8_t g,uint8_t b,
               uint8_t a,MethodInfo *method)

{
  UnityEngine_Color_o local_18;
  
  (__this->fields).R = r;
  (__this->fields).G = g;
  (__this->fields).B = b;
  (__this->fields).A = a;
  local_18.fields.r = (float)r / 255.0;
  local_18.fields.g = (float)g / 255.0;
  local_18.fields.b = (float)b / 255.0;
  local_18.fields.a = (float)a / 255.0;
  UnityEngine_Color__RGBToHSV
            (&local_18,&(__this->fields).H,&(__this->fields).S,&(__this->fields).V,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, uint8_t r, uint8_t g, uint8_t b, uint8_t a, float h, float s, float v, const MethodInfo* method);
// 0x1818f0e30

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue___ctor_18f0e30
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *__this,uint8_t r,uint8_t g,uint8_t b,
               uint8_t a,float h,float s,float v,MethodInfo *method)

{
  float fVar1;
  
  (__this->fields).R = r;
  (__this->fields).G = g;
  (__this->fields).B = b;
  (__this->fields).A = a;
  fVar1 = (float)il2cpp_runtime_helper_1804f4110(h);
  fVar1 = h - fVar1;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  else if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  (__this->fields).H = fVar1;
  if (s < 0.0) {
    s = 0.0;
  }
  else if (1.0 < s) {
    s = 1.0;
  }
  (__this->fields).S = s;
  if (0.0 <= v) {
    if (v <= 1.0) {
      (__this->fields).V = v;
      return;
    }
    (__this->fields).V = 1.0;
    return;
  }
  (__this->fields).V = 0.0;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$get_Color32
// il2cpp: UnityEngine_Color32_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__get_Color32 (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, const MethodInfo* method);
// 0x18057aed0

UnityEngine_Color32_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__get_Color32(Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, MethodInfo* method)

{
  return (__this->fields).m_Id;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$ToHex
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToHex (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, bool alpha, const MethodInfo* method);
// 0x1818f0820

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToHex
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *__this,bool alpha,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_184342111 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_184342111 = '\x01';
  }
  local_18.fields.r = (float)(__this->fields).R / 255.0;
  local_18.fields.a = (float)(__this->fields).A / 255.0;
  local_18.fields.g = (float)(__this->fields).G / 255.0;
  local_18.fields.b = (float)(__this->fields).B / 255.0;
  if (alpha) {
    pSVar1 = UnityEngine_ColorUtility__ToHtmlStringRGBA_2f00800(&local_18,(MethodInfo *)0x0);
  }
  else {
    pSVar1 = UnityEngine_ColorUtility__ToHtmlStringRGB(&local_18,(MethodInfo *)0x0);
  }
  pSVar1 = System_String__Concat_1969e50("#",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$WithRgb
// il2cpp: Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithRgb (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, uint8_t r, uint8_t g, uint8_t b, const MethodInfo* method);
// 0x1818f0d00

Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithRgb
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *__this,uint8_t r,uint8_t g,uint8_t b,
          MethodInfo *method)

{
  uint8_t a;
  
  a = (__this->fields).A;
  (__return_storage_ptr__->fields).R = '\0';
  (__return_storage_ptr__->fields).G = '\0';
  (__return_storage_ptr__->fields).B = '\0';
  (__return_storage_ptr__->fields).A = '\0';
  (__return_storage_ptr__->fields).H = 0.0;
  (__return_storage_ptr__->fields).S = 0.0;
  (__return_storage_ptr__->fields).V = 0.0;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue___ctor(__return_storage_ptr__,r,g,b,a,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$WithAlpha
// il2cpp: Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithAlpha (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, uint8_t a, const MethodInfo* method);
// 0x1818f0c60

Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithAlpha
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *__this,uint8_t a,MethodInfo *method)

{
  float v;
  float s;
  float h;
  uint8_t r;
  uint8_t g;
  uint8_t b;
  
  v = (__this->fields).V;
  s = (__this->fields).S;
  h = (__this->fields).H;
  r = (__this->fields).R;
  g = (__this->fields).G;
  b = (__this->fields).B;
  (__return_storage_ptr__->fields).R = '\0';
  (__return_storage_ptr__->fields).G = '\0';
  (__return_storage_ptr__->fields).B = '\0';
  (__return_storage_ptr__->fields).A = '\0';
  (__return_storage_ptr__->fields).H = 0.0;
  (__return_storage_ptr__->fields).S = 0.0;
  (__return_storage_ptr__->fields).V = 0.0;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue___ctor_18f0e30
            (__return_storage_ptr__,r,g,b,a,h,s,v,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$WithHue
// il2cpp: Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithHue (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, float h, const MethodInfo* method);
// 0x1818f0cc0

Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithHue
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *__this,float h,MethodInfo *method)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *pGVar7;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o local_18;
  
  pGVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FromHsv
                     (&local_18,h,(__this->fields).S,(__this->fields).V,(__this->fields).A,(MethodInfo *)0x0);
  uVar1 = (pGVar7->fields).G;
  uVar2 = (pGVar7->fields).B;
  uVar3 = (pGVar7->fields).A;
  fVar4 = (pGVar7->fields).H;
  fVar5 = (pGVar7->fields).S;
  fVar6 = (pGVar7->fields).V;
  (__return_storage_ptr__->fields).R = (pGVar7->fields).R;
  (__return_storage_ptr__->fields).G = uVar1;
  (__return_storage_ptr__->fields).B = uVar2;
  (__return_storage_ptr__->fields).A = uVar3;
  (__return_storage_ptr__->fields).H = fVar4;
  (__return_storage_ptr__->fields).S = fVar5;
  (__return_storage_ptr__->fields).V = fVar6;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$WithSaturationValue
// il2cpp: Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithSaturationValue (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o __this, float s, float v, const MethodInfo* method);
// 0x1818f0d50

Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__WithSaturationValue
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *__this,float s,float v,MethodInfo *method)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *pGVar7;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o local_18;
  
  pGVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FromHsv
                     (&local_18,(__this->fields).H,s,v,(__this->fields).A,(MethodInfo *)0x0);
  uVar1 = (pGVar7->fields).G;
  uVar2 = (pGVar7->fields).B;
  uVar3 = (pGVar7->fields).A;
  fVar4 = (pGVar7->fields).H;
  fVar5 = (pGVar7->fields).S;
  fVar6 = (pGVar7->fields).V;
  (__return_storage_ptr__->fields).R = (pGVar7->fields).R;
  (__return_storage_ptr__->fields).G = uVar1;
  (__return_storage_ptr__->fields).B = uVar2;
  (__return_storage_ptr__->fields).A = uVar3;
  (__return_storage_ptr__->fields).H = fVar4;
  (__return_storage_ptr__->fields).S = fVar5;
  (__return_storage_ptr__->fields).V = fVar6;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$FromHsv
// il2cpp: Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FromHsv (float h, float s, float v, uint8_t a, const MethodInfo* method);
// 0x1818f0470
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818f04ec: movaps xmm2, xmm10
// asm:   0x1818f04f0: jmp 0x1818f04fa
// asm:   0x1818f0506: movaps xmm3, xmm11
// asm:   0x1818f050a: jmp 0x1818f0514

Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FromHsv
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *__return_storage_ptr__,float h,float s,float v
          ,uint8_t a,MethodInfo *method)

{
  uint8_t r;
  uint8_t g;
  uint8_t b;
  UnityEngine_Color_o *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Color_o local_88 [8];
  
  fVar2 = (float)il2cpp_runtime_helper_1804f4110(h);
  fVar2 = h - fVar2;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  if (s < 0.0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = s;
    if (1.0 < s) {
      fVar3 = 1.0;
    }
  }
  if (v < 0.0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = v;
    if (1.0 < v) {
      fVar4 = 1.0;
    }
  }
  pUVar1 = UnityEngine_Color__HSVToRGB_2f01e90(local_88,fVar2,fVar3,fVar4,true,(MethodInfo *)0x0);
  fVar2 = (pUVar1->fields).r;
  fVar3 = (pUVar1->fields).g;
  fVar4 = (pUVar1->fields).b;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  r = il2cpp_runtime_helper_181290af0(fVar2 * 255.0,0);
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  else if (1.0 < fVar3) {
    fVar3 = 1.0;
  }
  g = il2cpp_runtime_helper_181290af0(fVar3 * 255.0,0);
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
  }
  else if (1.0 < fVar4) {
    fVar4 = 1.0;
  }
  b = il2cpp_runtime_helper_181290af0(fVar4 * 255.0,0);
  (__return_storage_ptr__->fields).R = '\0';
  (__return_storage_ptr__->fields).G = '\0';
  (__return_storage_ptr__->fields).B = '\0';
  (__return_storage_ptr__->fields).A = '\0';
  (__return_storage_ptr__->fields).H = 0.0;
  (__return_storage_ptr__->fields).S = 0.0;
  (__return_storage_ptr__->fields).V = 0.0;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue___ctor_18f0e30
            (__return_storage_ptr__,r,g,b,a,h,s,v,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$Normalize
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize (System_String_o* text, bool alpha, System_String_o* fallback, const MethodInfo* method);
// 0x1818f0640
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818f06aa: mov rbx, qword ptr [rip + 0x27ba03f]  ; "#FFFFFFFF"

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize
          (System_String_o *text,bool alpha,System_String_o *fallback,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields local_18;
  
  if (Il2CppMethodInitialized_184342112 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFF");
    Il2CppMethodInitialized_184342112 = '\x01';
  }
  local_18.R = '\0';
  local_18.G = '\0';
  local_18.B = '\0';
  local_18.A = '\0';
  local_18.H = 0.0;
  local_18.S = 0.0;
  local_18.V = 0.0;
  bVar1 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                    (text,alpha,(Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&local_18,
                     (MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToHex
                       ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&local_18,alpha,
                        (MethodInfo *)0x0);
    return pSVar2;
  }
  if ((fallback == (System_String_o *)0x0) && (fallback = "#FFFFFFFF", !alpha)) {
    return "#FFFFFF";
  }
  return fallback;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$FilterHexInput
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FilterHexInput (System_String_o* text, bool alpha, const MethodInfo* method);
// 0x1818f0320

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FilterHexInput
          (System_String_o *text,bool alpha,MethodInfo *method)

{
  uint16_t uVar1;
  System_Char_array *val;
  longlong lVar2;
  System_String_o *pSVar3;
  uint length;
  int32_t index;
  uint32_t length_00;
  
  if (Il2CppMethodInitialized_184342113 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_184342113 = '\x01';
  }
  length_00 = (uint)alpha * 2 + 6;
  val = (System_Char_array *)SZArrayNew(TypeInfo_char_array,length_00);
  if ((text == (System_String_o *)0x0) &&
     (text = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8), text == (System_String_o *)0x0)) {
label_1818f0459:
    ThrowNullReferenceException();
  }
  length = 0;
  index = 0;
  do {
    if (((text->fields)._stringLength <= index) || ((int)length_00 <= (int)length)) {
      pSVar3 = System_String__CreateString_196afe0((System_String_o *)0x0,val,0,length,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_1969e50("#",pSVar3,(MethodInfo *)0x0);
      return pSVar3;
    }
    uVar1 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    uVar1 = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
    if ((uVar1 != 0x23) && (((ushort)(uVar1 - 0x30) < 10 || ((ushort)(uVar1 - 0x41) < 6)))) {
      if (val == (System_Char_array *)0x0) goto label_1818f0459;
      if ((uint)val->max_length <= length) {
        ThrowIndexOutOfRangeException();
      }
      lVar2 = (longlong)(int)length;
      length = length + 1;
      val->m_Items[lVar2] = uVar1;
    }
    index = index + 1;
  } while( true );
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$TryParse
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse (System_String_o* text, bool alpha, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o* value, const MethodInfo* method);
// 0x1818f09a0

bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
               (System_String_o *text,bool alpha,Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *value,
               MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_Globalization_CultureInfo_o *pSVar7;
  undefined8 local_38;
  undefined8 uStack_30;
  UnityEngine_Color_o local_28;
  
  pSVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FilterHexInput(text,alpha,(MethodInfo *)0x0);
  (value->fields).R = '\0';
  (value->fields).G = '\0';
  (value->fields).B = '\0';
  (value->fields).A = '\0';
  (value->fields).H = 0.0;
  (value->fields).S = 0.0;
  (value->fields).V = 0.0;
  if (pSVar5 == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pSVar5->fields)._stringLength == (uint)alpha * 2 + 7) {
    if (Il2CppMethodInitialized_184342115 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
      Il2CppMethodInitialized_184342115 = '\x01';
    }
    pSVar6 = System_String__Substring_1972740(pSVar5,1,2,(MethodInfo *)0x0);
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    pSVar7 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    bVar1 = System_Byte__Parse_1a7aa80(pSVar6,0x203,(System_IFormatProvider_o *)pSVar7,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184342115 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
      Il2CppMethodInitialized_184342115 = '\x01';
    }
    pSVar6 = System_String__Substring_1972740(pSVar5,3,2,(MethodInfo *)0x0);
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    pSVar7 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    bVar2 = System_Byte__Parse_1a7aa80(pSVar6,0x203,(System_IFormatProvider_o *)pSVar7,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184342115 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
      Il2CppMethodInitialized_184342115 = '\x01';
    }
    pSVar6 = System_String__Substring_1972740(pSVar5,5,2,(MethodInfo *)0x0);
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    pSVar7 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    bVar3 = System_Byte__Parse_1a7aa80(pSVar6,0x203,(System_IFormatProvider_o *)pSVar7,(MethodInfo *)0x0);
    if (alpha) {
      if (Il2CppMethodInitialized_184342115 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
        Il2CppMethodInitialized_184342115 = '\x01';
      }
      pSVar5 = System_String__Substring_1972740(pSVar5,7,2,(MethodInfo *)0x0);
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      pSVar7 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar4 = System_Byte__Parse_1a7aa80(pSVar5,0x203,(System_IFormatProvider_o *)pSVar7,(MethodInfo *)0x0);
    }
    else {
      bVar4 = 0xff;
    }
    uStack_30 = 0;
    local_38._0_3_ = CONCAT12(bVar3,CONCAT11(bVar2,bVar1));
    local_38 = (ulonglong)CONCAT13(bVar4,(undefined3)local_38);
    local_28.fields.r = (float)bVar1 / 255.0;
    local_28.fields.b = (float)bVar3 / 255.0;
    local_28.fields.g = (float)bVar2 / 255.0;
    local_28.fields.a = (float)bVar4 / 255.0;
    UnityEngine_Color__RGBToHSV
              (&local_28,(float *)((longlong)&local_38 + 4),(float *)&uStack_30,
               (float *)((longlong)&uStack_30 + 4),(MethodInfo *)0x0);
    (value->fields).R = (undefined1)local_38;
    (value->fields).G = local_38._1_1_;
    (value->fields).B = local_38._2_1_;
    (value->fields).A = local_38._3_1_;
    (value->fields).H = (float)local_38._4_4_;
    (value->fields).S = (float)(undefined4)uStack_30;
    (value->fields).V = (float)uStack_30._4_4_;
    return true;
  }
  return false;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$TryParseByte
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParseByte (System_String_o* text, uint8_t* value, const MethodInfo* method);
// 0x1818f08e0

bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParseByte
               (System_String_o *text,uint8_t *value,MethodInfo *method)

{
  bool bVar1;
  System_Globalization_CultureInfo_o *provider;
  uint8_t uVar2;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184342114 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_184342114 = '\x01';
  }
  *value = '\0';
  local_res8[0] = 0;
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar1 = System_Int32__TryParse_1b29d60
                    (text,7,(System_IFormatProvider_o *)provider,local_res8,(MethodInfo *)0x0);
  if (bVar1) {
    if (0xff < local_res8[0]) {
      *value = 0xff;
      return true;
    }
    uVar2 = (uint8_t)local_res8[0];
    if (local_res8[0] < 0) {
      uVar2 = '\0';
    }
    *value = uVar2;
    return true;
  }
  return false;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$ToColor
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToColor (uint8_t r, uint8_t g, uint8_t b, uint8_t a, const MethodInfo* method);
// 0x1818f07c0

UnityEngine_Color_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToColor
          (UnityEngine_Color_o *__return_storage_ptr__,uint8_t r,uint8_t g,uint8_t b,uint8_t a,
          MethodInfo *method)

{
  (__return_storage_ptr__->fields).r = (float)r / 255.0;
  (__return_storage_ptr__->fields).g = (float)g / 255.0;
  (__return_storage_ptr__->fields).b = (float)b / 255.0;
  (__return_storage_ptr__->fields).a = (float)a / 255.0;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$ParseByte
// il2cpp: uint8_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ParseByte (System_String_o* value, int32_t start, const MethodInfo* method);
// 0x1818f0700

uint8_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ParseByte
                  (System_String_o *value,int32_t start,MethodInfo *method)

{
  uint8_t uVar1;
  System_String_o *s;
  System_Globalization_CultureInfo_o *provider;
  
  if (Il2CppMethodInitialized_184342115 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_184342115 = '\x01';
  }
  if (value != (System_String_o *)0x0) {
    s = System_String__Substring_1972740(value,start,2,(MethodInfo *)0x0);
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    uVar1 = System_Byte__Parse_1a7aa80(s,0x203,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
    return uVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$ToByte
// il2cpp: uint8_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte (float value, const MethodInfo* method);
// 0x1818f0790

uint8_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(float value,MethodInfo *method)

{
  uint8_t uVar1;
  
  if (value < 0.0) {
    value = 0.0;
  }
  else if (1.0 < value) {
    value = 1.0;
  }
  uVar1 = il2cpp_runtime_helper_181290af0(value * 255.0,0);
  return uVar1;
}


