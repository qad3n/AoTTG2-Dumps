// Type: Controllers.HorseController
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Controllers/HorseController.cs
// Prior real C# source: none
// --------------------------------

// Controllers.HorseController$$get_Order
// il2cpp: int32_t Controllers_HorseController__get_Order (Controllers_HorseController_o* __this, const MethodInfo* method);
// 0x180546860

int32_t
Controllers_HorseController__get_Order(Controllers_HorseController_o* __this, MethodInfo* method)

{
  return (__this->fields)._Order_k__BackingField;
}


// Controllers.HorseController$$set_Order
// il2cpp: void Controllers_HorseController__set_Order (Controllers_HorseController_o* __this, int32_t value, const MethodInfo* method);
// 0x180560b20

void
Controllers_HorseController__set_Order(Controllers_HorseController_o* __this, int32_t value, MethodInfo* method)

{
  (__this->fields)._Order_k__BackingField = value;
  return;
}


// Controllers.HorseController$$get_TargetViewId
// il2cpp: int32_t Controllers_HorseController__get_TargetViewId (Controllers_HorseController_o* __this, const MethodInfo* method);
// 0x1808e79a0

int32_t
Controllers_HorseController__get_TargetViewId(Controllers_HorseController_o* __this, MethodInfo* method)

{
  return (__this->fields)._TargetViewId_k__BackingField;
}


// Controllers.HorseController$$set_TargetViewId
// il2cpp: void Controllers_HorseController__set_TargetViewId (Controllers_HorseController_o* __this, int32_t value, const MethodInfo* method);
// 0x180d23ee0

void
Controllers_HorseController__set_TargetViewId(Controllers_HorseController_o* __this, int32_t value, MethodInfo* method)

{
  (__this->fields)._TargetViewId_k__BackingField = value;
  return;
}


// Controllers.HorseController$$get_Destination
// il2cpp: UnityEngine_Vector3_o Controllers_HorseController__get_Destination (Controllers_HorseController_o* __this, const MethodInfo* method);
// 0x18111ad10

UnityEngine_Vector3_o
Controllers_HorseController__get_Destination(Controllers_HorseController_o* __this, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields)._Destination_k__BackingField.fields.z;
  fVar2 = (__this->fields)._Destination_k__BackingField.fields.y;
  (__return_storage_ptr__->fields).x = (__this->fields)._Destination_k__BackingField.fields.x;
  (__return_storage_ptr__->fields).y = fVar2;
  (__return_storage_ptr__->fields).z = fVar1;
  return __return_storage_ptr__;
}


// Controllers.HorseController$$set_Destination
// il2cpp: void Controllers_HorseController__set_Destination (Controllers_HorseController_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x18111c9d0

void
Controllers_HorseController__set_Destination(Controllers_HorseController_o* __this, UnityEngine_Vector3_o value, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (value->fields).y;
  fVar1 = (value->fields).z;
  (__this->fields).m_Value.fields.y = (value->fields).x;
  (__this->fields).m_Value.fields.z = fVar2;
  *(float *)&(*(uint64_t *)((char *)__this + 0x20)) = fVar1;
  return;
}


// Controllers.HorseController$$get_StoppingDistance
// il2cpp: float Controllers_HorseController__get_StoppingDistance (Controllers_HorseController_o* __this, const MethodInfo* method);
// 0x1818a4260

float
Controllers_HorseController__get_StoppingDistance(Controllers_HorseController_o* __this, MethodInfo* method)

{
  return (__this->fields)._StoppingDistance_k__BackingField;
}


// Controllers.HorseController$$set_StoppingDistance
// il2cpp: void Controllers_HorseController__set_StoppingDistance (Controllers_HorseController_o* __this, float value, const MethodInfo* method);
// 0x1818a4270

void
Controllers_HorseController__set_StoppingDistance(Controllers_HorseController_o* __this, float value, MethodInfo* method)

{
  (__this->fields)._StoppingDistance_k__BackingField = value;
  return;
}


// Controllers.HorseController$$get_Direction
// il2cpp: UnityEngine_Vector3_o Controllers_HorseController__get_Direction (Controllers_HorseController_o* __this, const MethodInfo* method);
// 0x1820fe3b0

UnityEngine_Vector3_o
Controllers_HorseController__get_Direction(Controllers_HorseController_o* __this, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields)._Direction_k__BackingField.fields.z;
  fVar2 = (__this->fields)._Direction_k__BackingField.fields.y;
  (__return_storage_ptr__->fields).x = (__this->fields)._Direction_k__BackingField.fields.x;
  (__return_storage_ptr__->fields).y = fVar2;
  (__return_storage_ptr__->fields).z = fVar1;
  return __return_storage_ptr__;
}


// Controllers.HorseController$$set_Direction
// il2cpp: void Controllers_HorseController__set_Direction (Controllers_HorseController_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x1820fe3d0

void
Controllers_HorseController__set_Direction(Controllers_HorseController_o* __this, UnityEngine_Vector3_o value, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (value->fields).y;
  fVar1 = (value->fields).z;
  (__this->fields)._Direction_k__BackingField.fields.x = (value->fields).x;
  (__this->fields)._Direction_k__BackingField.fields.y = fVar2;
  (__this->fields)._Direction_k__BackingField.fields.z = fVar1;
  return;
}


// Controllers.HorseController$$get_Moving
// il2cpp: bool Controllers_HorseController__get_Moving (Controllers_HorseController_o* __this, const MethodInfo* method);
// 0x180ab9f70

bool
Controllers_HorseController__get_Moving(Controllers_HorseController_o* __this, MethodInfo* method)

{
  return (__this->fields)._Moving_k__BackingField;
}


// Controllers.HorseController$$set_Moving
// il2cpp: void Controllers_HorseController__set_Moving (Controllers_HorseController_o* __this, bool value, const MethodInfo* method);
// 0x180ab9f80

void
Controllers_HorseController__set_Moving(Controllers_HorseController_o* __this, bool value, MethodInfo* method)

{
  (__this->fields)._Moving_k__BackingField = value;
  return;
}


// Controllers.HorseController$$get_Running
// il2cpp: bool Controllers_HorseController__get_Running (Controllers_HorseController_o* __this, const MethodInfo* method);
// 0x181d9bae0

bool
Controllers_HorseController__get_Running(Controllers_HorseController_o* __this, MethodInfo* method)

{
  return (__this->fields)._Running_k__BackingField;
}


// Controllers.HorseController$$set_Running
// il2cpp: void Controllers_HorseController__set_Running (Controllers_HorseController_o* __this, bool value, const MethodInfo* method);
// 0x1820fe3e0

void Controllers_HorseController__set_Running
               (Controllers_HorseController_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._Running_k__BackingField = value;
  return;
}


// Controllers.HorseController$$get_WantsRecall
// il2cpp: bool Controllers_HorseController__get_WantsRecall (Controllers_HorseController_o* __this, const MethodInfo* method);
// 0x181d9bad0

bool
Controllers_HorseController__get_WantsRecall(Controllers_HorseController_o* __this, MethodInfo* method)

{
  return (__this->fields)._WantsRecall_k__BackingField;
}


// Controllers.HorseController$$set_WantsRecall
// il2cpp: void Controllers_HorseController__set_WantsRecall (Controllers_HorseController_o* __this, bool value, const MethodInfo* method);
// 0x1820fe3f0

void Controllers_HorseController__set_WantsRecall
               (Controllers_HorseController_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._WantsRecall_k__BackingField = value;
  return;
}


// Controllers.HorseController$$get_Revision
// il2cpp: int32_t Controllers_HorseController__get_Revision (Controllers_HorseController_o* __this, const MethodInfo* method);
// 0x18172e4a0

int32_t
Controllers_HorseController__get_Revision(Controllers_HorseController_o* __this, MethodInfo* method)

{
  return (__this->fields)._Revision_k__BackingField;
}


// Controllers.HorseController$$set_Revision
// il2cpp: void Controllers_HorseController__set_Revision (Controllers_HorseController_o* __this, int32_t value, const MethodInfo* method);
// 0x181a40490

void
Controllers_HorseController__set_Revision(Controllers_HorseController_o* __this, int32_t value, MethodInfo* method)

{
  (__this->fields)._Revision_k__BackingField = value;
  return;
}


// Controllers.HorseController$$TrySetOrder
// il2cpp: bool Controllers_HorseController__TrySetOrder (Controllers_HorseController_o* __this, int32_t order, int32_t targetViewId, UnityEngine_Vector3_o destination, float stoppingDistance, bool hasAuthority, bool alive, bool mounted, const MethodInfo* method);
// 0x1820fe1e0

bool Controllers_HorseController__TrySetOrder
               (Controllers_HorseController_o *__this,int32_t order,int32_t targetViewId,
               UnityEngine_Vector3_o *destination,float stoppingDistance,bool hasAuthority,bool alive,
               bool mounted,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_Fields local_18 [2];
  
  if (((((((!hasAuthority) || (!alive)) || (3 < (uint)order)) ||
        (((0x7f800000 < (uint)ABS(stoppingDistance) || (ABS(stoppingDistance) == INFINITY)) ||
         ((stoppingDistance < 0.5 ||
          ((fVar2 = (destination->fields).x, 0x7f800000 < (uint)ABS(fVar2) || (ABS(fVar2) == INFINITY))))))))
       || (fVar2 = (destination->fields).y, 0x7f800000 < (uint)ABS(fVar2))) ||
      (((ABS(fVar2) == INFINITY || (fVar2 = (destination->fields).z, 0x7f800000 < (uint)ABS(fVar2))) ||
       (ABS(fVar2) == INFINITY)))) ||
     ((((order == 1 || (order == 2)) && (targetViewId < 1)) || ((mounted && ((order == 2 || (order == 3)))))))
     ) {
    return false;
  }
  if ((__this->fields)._Order_k__BackingField == order) {
    iVar1 = 0;
    if (order - 1U < 2) {
      iVar1 = targetViewId;
    }
    if ((((__this->fields)._TargetViewId_k__BackingField == iVar1) &&
        (fVar3 = (__this->fields)._Destination_k__BackingField.fields.x - (destination->fields).x,
        fVar4 = (__this->fields)._Destination_k__BackingField.fields.y - (destination->fields).y,
        fVar2 = (__this->fields)._Destination_k__BackingField.fields.z - (destination->fields).z,
        fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 < 9.9999994e-11)) &&
       ((__this->fields)._StoppingDistance_k__BackingField == stoppingDistance)) {
      return true;
    }
  }
  local_18[0].x = (destination->fields).x;
  local_18[0].y = (destination->fields).y;
  local_18[0].z = (destination->fields).z;
  Controllers_HorseController__ApplyOrder
            (__this,order,targetViewId,(UnityEngine_Vector3_o *)local_18,stoppingDistance,(MethodInfo *)0x0);
  return true;
}


// Controllers.HorseController$$ApplyOrder
// il2cpp: void Controllers_HorseController__ApplyOrder (Controllers_HorseController_o* __this, int32_t order, int32_t targetViewId, UnityEngine_Vector3_o destination, float stoppingDistance, const MethodInfo* method);
// 0x1820fdc50

void Controllers_HorseController__ApplyOrder
               (Controllers_HorseController_o *__this,int32_t order,int32_t targetViewId,
               UnityEngine_Vector3_o *destination,float stoppingDistance,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  float fVar4;
  float fVar5;
  int32_t iVar6;
  
  (__this->fields)._Order_k__BackingField = order;
  iVar6 = 0;
  if (order - 1U < 2) {
    iVar6 = targetViewId;
  }
  fVar4 = (destination->fields).x;
  fVar5 = (destination->fields).y;
  (__this->fields)._TargetViewId_k__BackingField = iVar6;
  fVar2 = (destination->fields).z;
  (__this->fields)._Destination_k__BackingField.fields.x = fVar4;
  (__this->fields)._Destination_k__BackingField.fields.y = fVar5;
  (__this->fields)._StoppingDistance_k__BackingField = stoppingDistance;
  (__this->fields)._Destination_k__BackingField.fields.z = fVar2;
  (__this->fields)._Running_k__BackingField = false;
  (__this->fields)._WantsRecall_k__BackingField = false;
  (__this->fields)._Moving_k__BackingField = false;
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar4 = (pUVar3->zeroVector).fields.x;
  fVar5 = (pUVar3->zeroVector).fields.y;
  fVar2 = (pUVar3->zeroVector).fields.z;
  piVar1 = &(__this->fields)._Revision_k__BackingField;
  *piVar1 = *piVar1 + 1;
  (__this->fields)._Direction_k__BackingField.fields.x = fVar4;
  (__this->fields)._Direction_k__BackingField.fields.y = fVar5;
  (__this->fields)._Direction_k__BackingField.fields.z = fVar2;
  (__this->fields)._recallTime = 0.0;
  return;
}


// Controllers.HorseController$$Tick
// il2cpp: void Controllers_HorseController__Tick (Controllers_HorseController_o* __this, UnityEngine_Vector3_o position, UnityEngine_Vector3_o velocity, bool grounded, bool mounted, System_Nullable_Vector3__o targetPosition, bool recallEnabled, float deltaTime, const MethodInfo* method);
// 0x1820fdd50
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820fe15a: mov dword ptr [rbx + 0x3c], r15d
// asm:   0x1820fe15e: jmp 0x1820fe0fb
// asm:   0x1820fe1cc: mov word ptr [rbx + 0x34], r15w
// asm:   0x1820fe1d1: mov dword ptr [rbx + 0x3c], r15d
// asm:   0x1820fe1d5: jmp 0x1820fe106

void Controllers_HorseController__Tick
               (Controllers_HorseController_o *__this,UnityEngine_Vector3_o *position,
               UnityEngine_Vector3_o *velocity,bool grounded,bool mounted,
               System_Nullable_Vector3__o *targetPosition,bool recallEnabled,float deltaTime,
               MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_o local_78 [8];
  
  if (Il2CppMethodInitialized_184346abb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_Value);
    Il2CppMethodInitialized_184346abb = '\x01';
  }
  (__this->fields)._WantsRecall_k__BackingField = false;
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar10 = (pUVar5->zeroVector).fields.z;
  fVar2 = (pUVar5->zeroVector).fields.y;
  (__this->fields)._Direction_k__BackingField.fields.x = (pUVar5->zeroVector).fields.x;
  (__this->fields)._Direction_k__BackingField.fields.y = fVar2;
  (__this->fields)._Direction_k__BackingField.fields.z = fVar10;
  iVar4 = (__this->fields)._Order_k__BackingField;
  if (mounted) {
    if ((iVar4 == 2) || (iVar4 == 3)) {
      (__this->fields)._Order_k__BackingField = 0;
      (__this->fields)._TargetViewId_k__BackingField = 0;
      fVar12 = (position->fields).y;
      fVar10 = (__this->fields)._StoppingDistance_k__BackingField;
      fVar2 = (position->fields).z;
      (__this->fields)._Destination_k__BackingField.fields.x = (position->fields).x;
      (__this->fields)._Destination_k__BackingField.fields.y = fVar12;
      (__this->fields)._Destination_k__BackingField.fields.z = fVar2;
      (__this->fields)._StoppingDistance_k__BackingField = fVar10;
      (__this->fields)._Running_k__BackingField = false;
      (__this->fields)._WantsRecall_k__BackingField = false;
      (__this->fields)._Moving_k__BackingField = false;
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar2 = (pUVar5->zeroVector).fields.x;
      fVar12 = (pUVar5->zeroVector).fields.y;
      fVar10 = (pUVar5->zeroVector).fields.z;
      piVar1 = &(__this->fields)._Revision_k__BackingField;
      *piVar1 = *piVar1 + 1;
      (__this->fields)._Direction_k__BackingField.fields.x = fVar2;
      (__this->fields)._Direction_k__BackingField.fields.y = fVar12;
      (__this->fields)._Direction_k__BackingField.fields.z = fVar10;
    }
  }
  else if (iVar4 != 0) {
    if ((iVar4 != 3) && ((targetPosition->fields).hasValue == false)) {
      (__this->fields)._Order_k__BackingField = 0;
      (__this->fields)._TargetViewId_k__BackingField = 0;
      fVar12 = (position->fields).y;
      fVar10 = (__this->fields)._StoppingDistance_k__BackingField;
      fVar2 = (position->fields).z;
      (__this->fields)._Destination_k__BackingField.fields.x = (position->fields).x;
      (__this->fields)._Destination_k__BackingField.fields.y = fVar12;
      (__this->fields)._Destination_k__BackingField.fields.z = fVar2;
      (__this->fields)._StoppingDistance_k__BackingField = fVar10;
      (__this->fields)._Running_k__BackingField = false;
      (__this->fields)._WantsRecall_k__BackingField = false;
      (__this->fields)._Moving_k__BackingField = false;
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar2 = (pUVar5->zeroVector).fields.x;
      fVar12 = (pUVar5->zeroVector).fields.y;
      fVar10 = (pUVar5->zeroVector).fields.z;
      piVar1 = &(__this->fields)._Revision_k__BackingField;
      *piVar1 = *piVar1 + 1;
      (__this->fields)._Direction_k__BackingField.fields.x = fVar2;
      (__this->fields)._Direction_k__BackingField.fields.y = fVar12;
      (__this->fields)._Direction_k__BackingField.fields.z = fVar10;
      (__this->fields)._recallTime = 0.0;
      return;
    }
    if (iVar4 == 3) {
      local_78[0].fields.x = (__this->fields)._Destination_k__BackingField.fields.x;
      local_78[0].fields.y = (__this->fields)._Destination_k__BackingField.fields.y;
      local_78[0].fields.z = (__this->fields)._Destination_k__BackingField.fields.z;
    }
    else {
      System_Nullable_Vector3___get_Value
                (local_78,targetPosition,(MethodInfo_AE2C50 *)MethodInfo_System_Nullable_Vector3_get_Value);
    }
    local_78[0].fields.y = local_78[0].fields.y - (position->fields).y;
    fVar2 = local_78[0].fields.x - (position->fields).x;
    fVar12 = local_78[0].fields.z - (position->fields).z;
    fVar11 = ABS(local_78[0].fields.y);
    local_78[0].fields.x = fVar2;
    local_78[0].fields.z = fVar12;
    fVar7 = (float)il2cpp_runtime_helper_180546a40(local_78,0);
    local_78[0].fields.y = 0.0;
    fVar8 = (float)il2cpp_runtime_helper_180546a40(local_78,0);
    fVar10 = (__this->fields)._StoppingDistance_k__BackingField;
    if (((__this->fields)._Order_k__BackingField == 1) && ((__this->fields)._Moving_k__BackingField == false))
    {
      fVar3 = 2.0;
    }
    else {
      fVar3 = 0.0;
    }
    bVar6 = fVar3 + fVar10 < fVar8;
    (__this->fields)._Moving_k__BackingField = bVar6;
    (__this->fields)._Running_k__BackingField = bVar6 && 20.0 <= fVar8;
    if ((__this->fields)._Moving_k__BackingField == false) {
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar2 = (pUVar5->zeroVector).fields.x;
      fVar3 = (pUVar5->zeroVector).fields.y;
      fVar12 = (pUVar5->zeroVector).fields.z;
    }
    else {
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar9 = (float)il2cpp_runtime_helper_180546a40(local_78,0);
      if (fVar9 <= 1e-05) {
        pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar2 = (pUVar5->zeroVector).fields.x;
        fVar3 = (pUVar5->zeroVector).fields.y;
        fVar12 = (pUVar5->zeroVector).fields.z;
      }
      else {
        fVar2 = fVar2 / fVar9;
        fVar3 = 0.0 / fVar9;
        fVar12 = fVar12 / fVar9;
      }
    }
    (__this->fields)._Direction_k__BackingField.fields.x = fVar2;
    (__this->fields)._Direction_k__BackingField.fields.y = fVar3;
    (__this->fields)._Direction_k__BackingField.fields.z = fVar12;
    if (fVar8 <= fVar10 && fVar11 <= 3.0) {
      bVar6 = (__this->fields)._Order_k__BackingField != 1;
    }
    else {
      bVar6 = false;
    }
    if (((bVar6 & grounded) != 0) &&
       (fVar10 = (velocity->fields).x, fVar2 = (velocity->fields).y, fVar12 = (velocity->fields).z,
       fVar2 * fVar2 + fVar10 * fVar10 + fVar12 * fVar12 < 1.0)) {
      fVar10 = (__this->fields)._StoppingDistance_k__BackingField;
      (__this->fields)._Order_k__BackingField = 0;
      (__this->fields)._TargetViewId_k__BackingField = 0;
      fVar12 = (position->fields).y;
      fVar2 = (position->fields).z;
      (__this->fields)._Destination_k__BackingField.fields.x = (position->fields).x;
      (__this->fields)._Destination_k__BackingField.fields.y = fVar12;
      (__this->fields)._Destination_k__BackingField.fields.z = fVar2;
      (__this->fields)._StoppingDistance_k__BackingField = fVar10;
      (__this->fields)._Running_k__BackingField = false;
      (__this->fields)._WantsRecall_k__BackingField = false;
      (__this->fields)._Moving_k__BackingField = false;
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar2 = (pUVar5->zeroVector).fields.x;
      fVar12 = (pUVar5->zeroVector).fields.y;
      fVar10 = (pUVar5->zeroVector).fields.z;
      piVar1 = &(__this->fields)._Revision_k__BackingField;
      *piVar1 = *piVar1 + 1;
      (__this->fields)._Direction_k__BackingField.fields.x = fVar2;
      (__this->fields)._Direction_k__BackingField.fields.y = fVar12;
      (__this->fields)._Direction_k__BackingField.fields.z = fVar10;
      (__this->fields)._recallTime = 0.0;
      return;
    }
    if ((recallEnabled) && ((__this->fields)._Order_k__BackingField != 3)) {
      fVar10 = (__this->fields)._StoppingDistance_k__BackingField;
      fVar2 = 20.0;
      if (20.0 <= fVar10) {
        fVar2 = fVar10;
      }
      if (fVar2 < fVar7) {
        fVar10 = deltaTime + (__this->fields)._recallTime;
        (__this->fields)._recallTime = fVar10;
        if (fVar10 < 10.0) {
          return;
        }
        (__this->fields)._WantsRecall_k__BackingField = true;
      }
    }
    (__this->fields)._recallTime = 0.0;
    return;
  }
  (__this->fields)._Moving_k__BackingField = false;
  (__this->fields)._Running_k__BackingField = false;
  (__this->fields)._recallTime = 0.0;
  return;
}


// Controllers.HorseController$$IsFinite
// il2cpp: bool Controllers_HorseController__IsFinite (float value, const MethodInfo* method);
// 0x181eac170

bool Controllers_HorseController__IsFinite(float value,MethodInfo *method)

{
  if (0x7f800000 < (uint)ABS(value)) {
    return false;
  }
  return ABS(value) != INFINITY;
}


// Controllers.HorseController$$IsFinite
// il2cpp: bool Controllers_HorseController__IsFinite (UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x1820fdce0

bool Controllers_HorseController__IsFinite_20fdce0(UnityEngine_Vector3_o *value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (value->fields).x;
  if (((((uint)ABS(fVar1) < 0x7f800001) && (ABS(fVar1) != INFINITY)) &&
      (fVar1 = (value->fields).y, (uint)ABS(fVar1) < 0x7f800001)) &&
     ((ABS(fVar1) != INFINITY && (fVar1 = (value->fields).z, (uint)ABS(fVar1) < 0x7f800001)))) {
    return ABS(fVar1) != INFINITY;
  }
  return false;
}


// Controllers.HorseController$$.ctor
// il2cpp: void Controllers_HorseController___ctor (Controllers_HorseController_o* __this, const MethodInfo* method);
// 0x1820fe3a0

void Controllers_HorseController___ctor(Controllers_HorseController_o *__this,MethodInfo *method)

{
  (__this->fields)._StoppingDistance_k__BackingField = 5.0;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


