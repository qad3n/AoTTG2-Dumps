// Type: Gisketch.Aottg2UI.AottgUiScale
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI/AottgUiScale.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.AottgUiScale$$Value
// il2cpp: float Gisketch_Aottg2UI_AottgUiScale__Value (int32_t preset, const MethodInfo* method);
// 0x1818831a0

float Gisketch_Aottg2UI_AottgUiScale__Value(int32_t preset,MethodInfo *method)

{
  if (preset == 0) {
    return 0.5;
  }
  if (preset == 1) {
    return 0.75;
  }
  if (preset != 2) {
    if (preset == 3) {
      return 1.25;
    }
    if (preset == 4) {
      return 1.5;
    }
  }
  return 1.0;
}


// Gisketch.Aottg2UI.AottgUiScale$$Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_AottgUiScale__Label (int32_t preset, const MethodInfo* method);
// 0x181882ef0

System_String_o * Gisketch_Aottg2UI_AottgUiScale__Label(int32_t preset,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_184341e83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    Il2CppMethodInitialized_184341e83 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_AottgUiScale->static_fields->Labels;
  if (pSVar1 != (System_String_array *)0x0) {
    if ((uint)preset < (uint)pSVar1->max_length) {
      return pSVar1->m_Items[preset];
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.AottgUiScale$$TryParseLabel
// il2cpp: bool Gisketch_Aottg2UI_AottgUiScale__TryParseLabel (System_String_o* label, int32_t* preset, const MethodInfo* method);
// 0x1818830a0

bool Gisketch_Aottg2UI_AottgUiScale__TryParseLabel(System_String_o *label,int32_t *preset,MethodInfo *method)

{
  System_String_array *pSVar1;
  bool bVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184341e84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    Il2CppMethodInitialized_184341e84 = '\x01';
  }
  uVar3 = 0;
  while( true ) {
    if ((TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_AottgUiScale->static_fields->Labels;
    if (pSVar1 == (System_String_array *)0x0) break;
    if ((int)pSVar1->max_length <= (int)uVar3) {
      *preset = 2;
      return false;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_AottgUiScale->static_fields->Labels;
    if (pSVar1 == (System_String_array *)0x0) break;
    if ((uint)pSVar1->max_length <= uVar3) {
      ThrowIndexOutOfRangeException();
    }
    bVar2 = System_String__op_Equality(pSVar1->m_Items[(int)uVar3],label,(MethodInfo *)0x0);
    if (bVar2) {
      *preset = uVar3;
      return true;
    }
    uVar3 = uVar3 + 1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.AottgUiScale$$Clamp
// il2cpp: float Gisketch_Aottg2UI_AottgUiScale__Clamp (float scale, const MethodInfo* method);
// 0x181882ed0

float Gisketch_Aottg2UI_AottgUiScale__Clamp(float scale,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 0.5;
  if ((scale < 0.5) || (fVar1 = 1.5, 1.5 < scale)) {
    scale = fVar1;
  }
  return scale;
}


// Gisketch.Aottg2UI.AottgUiScale$$AppliedValue
// il2cpp: float Gisketch_Aottg2UI_AottgUiScale__AppliedValue (float scale, const MethodInfo* method);
// 0x181882e20

float Gisketch_Aottg2UI_AottgUiScale__AppliedValue(float scale,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_184341e85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    Il2CppMethodInitialized_184341e85 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
  }
  if (scale < 0.5) {
    fVar1 = 0.5;
  }
  else {
    fVar1 = 1.5;
    if (scale <= 1.5) {
      fVar1 = scale;
    }
  }
  fVar1 = fVar1 - 0.5;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  else if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  else if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  return fVar1 * 0.40000004 + 0.8;
}


// Gisketch.Aottg2UI.AottgUiScale$$ReferenceResolution
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution (int32_t preset, const MethodInfo* method);
// 0x181882fe0

UnityEngine_Vector2_o Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution(int32_t preset,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  
  if (Il2CppMethodInitialized_184341e86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    Il2CppMethodInitialized_184341e86 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
  }
  if (preset == 0) {
    UVar1 = Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution_1882f60(0.5,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)UVar1.fields;
  }
  if (preset == 1) {
    UVar1 = Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution_1882f60(0.75,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)UVar1.fields;
  }
  if (preset != 2) {
    if (preset == 3) {
      UVar1 = Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution_1882f60(1.25,(MethodInfo *)0x0);
      return (UnityEngine_Vector2_o)UVar1.fields;
    }
    if (preset == 4) {
      UVar1 = Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution_1882f60(1.5,(MethodInfo *)0x0);
      return (UnityEngine_Vector2_o)UVar1.fields;
    }
  }
  UVar1 = Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution_1882f60(1.0,(MethodInfo *)0x0);
  return (UnityEngine_Vector2_o)UVar1.fields;
}


// Gisketch.Aottg2UI.AottgUiScale$$ReferenceResolution
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution (float scale, const MethodInfo* method);
// 0x181882f60

UnityEngine_Vector2_o
Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution_1882f60(float scale,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_184341e87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    Il2CppMethodInitialized_184341e87 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
  }
  fVar2 = Gisketch_Aottg2UI_AottgUiScale__AppliedValue(scale,(MethodInfo *)0x0);
  UVar1.y = 1080.0 / fVar2;
  UVar1.x = 1920.0 / fVar2;
  return (UnityEngine_Vector2_o)UVar1;
}


// Gisketch.Aottg2UI.AottgUiScale$$.cctor
// il2cpp: void Gisketch_Aottg2UI_AottgUiScale___cctor (const MethodInfo* method);
// 0x1818831f0

void Gisketch_Aottg2UI_AottgUiScale___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *value;
  
  if (Il2CppMethodInitialized_184341e88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Large");
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Very Large");
    il2cpp_codegen_initialize_runtime_metadata(&"Small");
    il2cpp_codegen_initialize_runtime_metadata(&"Very Small");
    Il2CppMethodInitialized_184341e88 = '\x01';
  }
  value = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  pSVar1 = "Very Small";
  if (value != (System_String_array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0] = "Very Small";
      Il2CppCodeGenWriteBarrier(value->m_Items,pSVar1);
      pSVar1 = "Small";
      if (1 < (uint)value->max_length) {
        value->m_Items[1] = "Small";
        Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar1);
        pSVar1 = "Normal";
        if (2 < (uint)value->max_length) {
          value->m_Items[2] = "Normal";
          Il2CppCodeGenWriteBarrier(value->m_Items + 2,pSVar1);
          pSVar1 = "Large";
          if (3 < (uint)value->max_length) {
            value->m_Items[3] = "Large";
            Il2CppCodeGenWriteBarrier(value->m_Items + 3,pSVar1);
            pSVar1 = "Very Large";
            if (4 < (uint)value->max_length) {
              value->m_Items[4] = "Very Large";
              Il2CppCodeGenWriteBarrier(value->m_Items + 4,pSVar1);
              TypeInfo_Gisketch_Aottg2UI_AottgUiScale->static_fields->Labels = value;
              Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale->static_fields->Labels,value)
              ;
              return;
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


