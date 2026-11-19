// Type: Gisketch.Aottg2UI.AottgUiScale
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI/AottgUiScale.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.AottgUiScale$$Value
// il2cpp: float Gisketch_Aottg2UI_AottgUiScale__Value (int32_t preset, const MethodInfo* method);
// 0x531b150

float Gisketch_Aottg2UI_AottgUiScale__Value(int32_t preset,MethodInfo *method)

{
  if ((uint)preset < 5) {
    return *(float *)(&g_data_01010910 + (long)preset * 4);
  }
  return 1.0;
}


// Gisketch.Aottg2UI.AottgUiScale$$Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_AottgUiScale__Label (int32_t preset, const MethodInfo* method);
// 0x531e060

System_String_o * Gisketch_Aottg2UI_AottgUiScale__Label(int32_t preset,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_075427c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    Il2CppMethodInitialized_075427c4 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_AottgUiScale->static_fields->Labels;
  }
  else {
    pSVar2 = *(System_String_array **)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale)->static_fields;
  }
  if (pSVar2 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((uint)pSVar2->max_length <= (uint)preset) {
    ThrowIndexOutOfRangeException();
  }
  return pSVar2->m_Items[preset];
}


// Gisketch.Aottg2UI.AottgUiScale$$TryParseLabel
// il2cpp: bool Gisketch_Aottg2UI_AottgUiScale__TryParseLabel (System_String_o* label, int32_t* preset, const MethodInfo* method);
// 0x531e0f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531e132: nop word ptr cs:[rax + rax]
// asm:   0x531e1ad: jmp 0x531e140

bool Gisketch_Aottg2UI_AottgUiScale__TryParseLabel(System_String_o *label,int32_t *preset,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_array *pSVar3;
  int32_t iVar4;
  long lVar5;
  ulong uVar6;
  
  if (Il2CppMethodInitialized_075427c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    Il2CppMethodInitialized_075427c5 = '\x01';
  }
  uVar6 = 0;
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor;
  do {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    }
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_AottgUiScale->static_fields->Labels;
    if (pSVar3 == (System_String_array *)0x0) {
label_0531e1cc:
      ThrowNullReferenceException();
    }
    lVar5 = (long)(int)pSVar3->max_length;
    if (lVar5 <= (long)uVar6) {
      iVar4 = 2;
      goto label_0531e1b9;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
      pSVar3 = TypeInfo_Gisketch_Aottg2UI_AottgUiScale->static_fields->Labels;
      if (pSVar3 == (System_String_array *)0x0) goto label_0531e1cc;
    }
    if ((uint)pSVar3->max_length <= uVar6) {
      ThrowIndexOutOfRangeException();
    }
    bVar2 = System_String__op_Equality(pSVar3->m_Items[uVar6],label,(MethodInfo *)0x0);
    if (bVar2) {
      iVar4 = (int32_t)uVar6;
label_0531e1b9:
      *preset = iVar4;
      return (long)uVar6 < lVar5;
    }
    uVar6 = uVar6 + 1;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor;
  } while( true );
}


// Gisketch.Aottg2UI.AottgUiScale$$Clamp
// il2cpp: float Gisketch_Aottg2UI_AottgUiScale__Clamp (float scale, const MethodInfo* method);
// 0x531b270

float Gisketch_Aottg2UI_AottgUiScale__Clamp(float scale,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 1.5;
  if (scale <= 1.5) {
    fVar1 = scale;
  }
  return (float)(~-(uint)(0.5 <= scale) & 0x3f000000 | (uint)fVar1 & -(uint)(0.5 <= scale));
}


// Gisketch.Aottg2UI.AottgUiScale$$AppliedValue
// il2cpp: float Gisketch_Aottg2UI_AottgUiScale__AppliedValue (float scale, const MethodInfo* method);
// 0x531b040

float Gisketch_Aottg2UI_AottgUiScale__AppliedValue(float scale,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_075427c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    Il2CppMethodInitialized_075427c6 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
  }
  fVar2 = 1.5;
  if (scale <= 1.5) {
    fVar2 = scale;
  }
  fVar1 = (float)(-(uint)(0.5 <= scale) & (uint)(fVar2 + -0.5));
  fVar2 = 1.0;
  if (fVar1 <= 1.0) {
    fVar2 = fVar1;
  }
  fVar2 = (float)(-(uint)(0.0 <= fVar1) & (uint)fVar2);
  fVar1 = 0.0;
  if (0.0 <= fVar2) {
    fVar1 = fVar2;
  }
  return fVar1 * 0.40000004 + 0.8;
}


// Gisketch.Aottg2UI.AottgUiScale$$ReferenceResolution
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution (int32_t preset, const MethodInfo* method);
// 0x531e1e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531e1ff: cmp ebx, 4
// asm:   0x531e202: ja 0x531e249

UnityEngine_Vector2_o Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution(int32_t preset,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *klass;
  UnityEngine_Vector2_o UVar2;
  
  if (Il2CppMethodInitialized_075427c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    Il2CppMethodInitialized_075427c7 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale;
  }
  TypeInfo_Gisketch_Aottg2UI_AottgUiScale = (Gisketch_Aottg2UI_AottgUiScale_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
  }
  if ((uint)preset < 5) {
    UVar2 = Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution_521b3d0
                      (*(float *)(&g_data_01010910 + (long)preset * 4),(MethodInfo *)klass);
    return (UnityEngine_Vector2_o)UVar2.fields;
  }
  UVar2 = Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution_521b3d0(1.0,(MethodInfo *)klass);
  return (UnityEngine_Vector2_o)UVar2.fields;
}


// Gisketch.Aottg2UI.AottgUiScale$$ReferenceResolution
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution (float scale, const MethodInfo* method);
// 0x531b3d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531b3fd: cmp byte ptr [rip + 0x22273c2], 0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution_521b3d0(float scale,MethodInfo *method)

{
  uint32_t uVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_075427c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    Il2CppMethodInitialized_075427c8 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
  }
  if (Il2CppMethodInitialized_075427c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    Il2CppMethodInitialized_075427c6 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
  }
  auVar2 = ZEXT812(0x3fc00000);
  if (scale <= auVar2._0_4_) {
    auVar2._4_8_ = auVar2._4_8_;
    auVar2._0_4_ = scale;
  }
  fVar5 = (float)(-(uint)(0.5 <= scale) & (uint)(auVar2._0_4_ + -0.5));
  auVar3 = ZEXT812(0x3f800000);
  if (fVar5 <= auVar3._0_4_) {
    auVar3._4_8_ = auVar3._4_8_;
    auVar3._0_4_ = fVar5;
  }
  fVar6 = (float)(-(uint)(0.0 <= fVar5) & auVar3._0_4_);
  fVar5 = 0.0;
  if (0.0 <= fVar6) {
    fVar5 = fVar6;
  }
  fVar5 = fVar5 * 0.40000004 + 0.8;
  auVar4._4_4_ = fVar5;
  auVar4._0_4_ = fVar5;
  auVar4._8_4_ = fVar5;
  auVar4._12_4_ = fVar5;
  auVar4 = divps(_DAT_0100a420,auVar4);
  return (UnityEngine_Vector2_o)auVar4._0_8_;
}


// Gisketch.Aottg2UI.AottgUiScale$$.cctor
// il2cpp: void Gisketch_Aottg2UI_AottgUiScale___cctor (const MethodInfo* method);
// 0x531e260

void Gisketch_Aottg2UI_AottgUiScale___cctor(MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_075427c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Large");
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Very Large");
    il2cpp_codegen_initialize_runtime_metadata(&"Small");
    il2cpp_codegen_initialize_runtime_metadata(&"Very Small");
    Il2CppMethodInitialized_075427c9 = '\x01';
  }
  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  if (pSVar1 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = "Very Small";
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    if ((pSVar1->max_length & 0xfffffffe) != 0) {
      pSVar1->m_Items[1] = "Small";
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
      if (2 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[2] = "Normal";
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2);
        if ((pSVar1->max_length & 0xfffffffc) != 0) {
          pSVar1->m_Items[3] = "Large";
          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 3);
          if (4 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[4] = "Very Large";
            Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 4);
            TypeInfo_Gisketch_Aottg2UI_AottgUiScale->static_fields->Labels = pSVar1;
            Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale->static_fields->Labels);
            return;
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


