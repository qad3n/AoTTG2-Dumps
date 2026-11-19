// Type: MapEditor.RulerMeasurement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/MapEditor/RulerMeasurement.cs
// Prior real C# source: none
// --------------------------------

// MapEditor.RulerMeasurement$$get_Length
// il2cpp: float MapEditor_RulerMeasurement__get_Length (MapEditor_RulerMeasurement_o* __this, const MethodInfo* method);
// 0x5db6a00

float MapEditor_RulerMeasurement__get_Length(MapEditor_RulerMeasurement_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint32_t uVar6;
  float fVar7;
  
  uVar2 = (__this->fields).Origin.fields.x;
  uVar4 = (__this->fields).Origin.fields.y;
  fVar7 = (__this->fields).Origin.fields.z;
  uVar3 = (__this->fields).End.fields.x;
  uVar5 = (__this->fields).End.fields.y;
  fVar1 = (__this->fields).End.fields.z;
  if (Il2CppMethodInitialized_0753e7b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7b7 = '\x01';
    uVar6 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar6 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar6 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar7 = fVar7 - fVar1;
  fVar7 = ((float)uVar4 - (float)uVar5) * ((float)uVar4 - (float)uVar5) +
          ((float)uVar2 - (float)uVar3) * ((float)uVar2 - (float)uVar3) + fVar7 * fVar7;
  if (fVar7 < 0.0) {
    fVar7 = sqrtf(fVar7);
    return fVar7;
  }
  return SQRT(fVar7);
}


// MapEditor.RulerMeasurement$$.ctor
// il2cpp: void MapEditor_RulerMeasurement___ctor (MapEditor_RulerMeasurement_o* __this, const MethodInfo* method);
// 0x5db6af0

void MapEditor_RulerMeasurement___ctor(MapEditor_RulerMeasurement_o *__this,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  
  if (Il2CppMethodInitialized_0754812d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_0754812d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(__this_00,0xff,0xd2,0x28,0xff,(MethodInfo *)0x0);
  (__this->fields).Color = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Color);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


