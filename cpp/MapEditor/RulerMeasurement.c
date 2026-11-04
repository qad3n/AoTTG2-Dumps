// Type: MapEditor.RulerMeasurement
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/MapEditor/RulerMeasurement.cs
// Prior real C# source: none
// --------------------------------

// MapEditor.RulerMeasurement$$get_Length
// il2cpp: float MapEditor_RulerMeasurement__get_Length (MapEditor_RulerMeasurement_o* __this, const MethodInfo* method);
// 0x1821fc4c0

float MapEditor_RulerMeasurement__get_Length(MapEditor_RulerMeasurement_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = (__this->fields).Origin.fields.y;
  fVar6 = (__this->fields).Origin.fields.x;
  fVar7 = (__this->fields).Origin.fields.z;
  fVar1 = (__this->fields).End.fields.x;
  fVar2 = (__this->fields).End.fields.y;
  fVar3 = (__this->fields).End.fields.z;
  if (Il2CppMethodInitialized_18433dee7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18433dee7 = '\x01';
  }
  fVar6 = fVar6 - fVar1;
  fVar5 = fVar5 - fVar2;
  fVar7 = fVar7 - fVar3;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar4 = (double)(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7);
  if (dVar4 < 0.0) {
    dVar4 = sqrt(dVar4);
  }
  else {
    dVar4 = SQRT(dVar4);
  }
  return (float)dVar4;
}


// MapEditor.RulerMeasurement$$.ctor
// il2cpp: void MapEditor_RulerMeasurement___ctor (MapEditor_RulerMeasurement_o* __this, const MethodInfo* method);
// 0x1821fc430

void MapEditor_RulerMeasurement___ctor(MapEditor_RulerMeasurement_o *__this,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  
  if (Il2CppMethodInitialized_184347054 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_184347054 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)__this_00,0xff,0xd2,0x28,0xff,
             (MethodInfo *)0x0);
  (__this->fields).Color = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Color,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


