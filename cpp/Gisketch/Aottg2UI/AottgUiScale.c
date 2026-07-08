// Type: Gisketch.Aottg2UI.AottgUiScale
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI/AottgUiScale.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.AottgUiScale$$Value
// il2cpp: float Gisketch_Aottg2UI_AottgUiScale__Value (int32_t preset, const MethodInfo* method);
// 0x3ac1500

float Gisketch_Aottg2UI_AottgUiScale__Value(int32_t preset,MethodInfo *method)

{
  if ((uint)preset < 5) {
    return *(float *)(&DAT_00d0b750 + (long)preset * 4);
  }
  return 1.0;
}


// Gisketch.Aottg2UI.AottgUiScale$$Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_AottgUiScale__Label (int32_t preset, const MethodInfo* method);
// 0x3ac4440

System_String_o * Gisketch_Aottg2UI_AottgUiScale__Label(int32_t preset,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_057012f1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgUiScale);
    DAT_057012f1 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgUiScale + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgUiScale + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = **(long **)(TypeInfo_AottgUiScale + 0xb8);
  }
  else {
    lVar2 = **(long **)(TypeInfo_AottgUiScale + 0xb8);
  }
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= (uint)preset) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    return *(System_String_o **)(lVar2 + 0x20 + (long)preset * 8);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.AottgUiScale$$TryParseLabel
// il2cpp: bool Gisketch_Aottg2UI_AottgUiScale__TryParseLabel (System_String_o* label, int32_t* preset, const MethodInfo* method);
// 0x3ac44d0

bool_conflict
Gisketch_Aottg2UI_AottgUiScale__TryParseLabel
          (System_String_o *label,int32_t *preset,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  long lVar3;
  ulong uVar4;
  
  if (DAT_057012f2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgUiScale);
    DAT_057012f2 = '\x01';
  }
  uVar4 = 0;
  iVar1 = *(int *)(TypeInfo_AottgUiScale + 0xe4);
  do {
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    lVar3 = **(long **)(TypeInfo_AottgUiScale + 0xb8);
    if (lVar3 == 0) {
LAB_03ac459a:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar4) {
      uVar4 = 2;
      bVar2 = 0;
      goto LAB_03ac458b;
    }
    if (*(int *)(TypeInfo_AottgUiScale + 0xe4) == 0) {
      il2cpp_init_class();
      lVar3 = **(long **)(TypeInfo_AottgUiScale + 0xb8);
      if (lVar3 == 0) goto LAB_03ac459a;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar2 = System_String__op_Equality
                      (*(System_String_o **)(lVar3 + 0x20 + uVar4 * 8),label,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      bVar2 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar2 >> 8),1);
LAB_03ac458b:
      *preset = (int32_t)uVar4;
      return bVar2;
    }
    uVar4 = uVar4 + 1;
    iVar1 = *(int *)(TypeInfo_AottgUiScale + 0xe4);
  } while( true );
}


// Gisketch.Aottg2UI.AottgUiScale$$Clamp
// il2cpp: float Gisketch_Aottg2UI_AottgUiScale__Clamp (float scale, const MethodInfo* method);
// 0x3ac1620

float Gisketch_Aottg2UI_AottgUiScale__Clamp(float scale,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 1.5;
  if (scale <= 1.5) {
    fVar1 = scale;
  }
  return (float)(~-(uint)(0.75 <= scale) & 0x3f400000 | (uint)fVar1 & -(uint)(0.75 <= scale));
}


// Gisketch.Aottg2UI.AottgUiScale$$ReferenceResolution
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution (int32_t preset, const MethodInfo* method);
// 0x3ac45b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UnityEngine_Vector2_o
Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution(int32_t preset,MethodInfo *method)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  
  if (DAT_057012f3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgUiScale);
    DAT_057012f3 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgUiScale + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgUiScale + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if ((uint)preset < 5) {
    uVar3 = *(undefined4 *)(&DAT_00d0b750 + (long)preset * 4);
  }
  else {
    uVar3 = 0x3f800000;
  }
  if (DAT_057012f4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgUiScale);
    DAT_057012f4 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgUiScale + 0xe4) == 0) {
    il2cpp_init_class();
  }
  auVar2._4_4_ = uVar3;
  auVar2._0_4_ = uVar3;
  auVar2._8_8_ = 0;
  auVar2 = divps(_DAT_00cd09a0,auVar2);
  return (UnityEngine_Vector2_o)auVar2._0_8_;
}


// Gisketch.Aottg2UI.AottgUiScale$$ReferenceResolution
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution (float scale, const MethodInfo* method);
// 0x3ac1810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UnityEngine_Vector2_o
Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution(float scale,MethodInfo *method)

{
  undefined1 auVar1 [12];
  undefined1 in_register_00001204 [12];
  undefined1 auVar2 [16];
  
  if (DAT_057012f4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgUiScale);
    DAT_057012f4 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgUiScale + 0xe4) == 0) {
    il2cpp_init_class();
  }
  auVar1 = ZEXT812(0x3fc00000);
  if (scale <= 1.5) {
    auVar1._4_8_ = 0;
    auVar1._0_4_ = scale;
  }
  auVar2._0_4_ = ~-(uint)(0.75 <= scale) & 0x3f400000 | auVar1._0_4_ & -(uint)(0.75 <= scale);
  auVar2._4_4_ = auVar2._0_4_;
  auVar2._8_4_ = auVar1._8_4_ & in_register_00001204._4_4_;
  auVar2._12_4_ = 0;
  auVar2 = divps(_DAT_00cd09a0,auVar2);
  return (UnityEngine_Vector2_o)auVar2._0_8_;
}


// Gisketch.Aottg2UI.AottgUiScale$$.cctor
// il2cpp: void Gisketch_Aottg2UI_AottgUiScale___cctor (const MethodInfo* method);
// 0x3ac4680

void Gisketch_Aottg2UI_AottgUiScale___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_057012f5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgUiScale);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"Large");
    il2cpp_init_method_metadata(&"Normal");
    il2cpp_init_method_metadata(&"Very Large");
    il2cpp_init_method_metadata(&"Small");
    il2cpp_init_method_metadata(&"Very Small");
    DAT_057012f5 = '\x01';
  }
  lVar1 = il2cpp_glue_02274930(TypeInfo_string,5);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x20) = "Very Small";
      il2cpp_runtime_glue(lVar1 + 0x20);
      if (1 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x28) = "Small";
        il2cpp_runtime_glue(lVar1 + 0x28);
        if (2 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x30) = "Normal";
          il2cpp_runtime_glue(lVar1 + 0x30);
          if (3 < *(uint *)(lVar1 + 0x18)) {
            *(undefined8 *)(lVar1 + 0x38) = "Large";
            il2cpp_runtime_glue(lVar1 + 0x38);
            if (4 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x40) = "Very Large";
              il2cpp_runtime_glue(lVar1 + 0x40);
              **(long **)(TypeInfo_AottgUiScale + 0xb8) = lVar1;
              il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgUiScale + 0xb8),lVar1);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


