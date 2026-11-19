// Type: Characters.Wagon
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/Wagon.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Horse/Wagon.cs
// --------------------------------

// Characters.Wagon$$Start
// il2cpp: void Characters_Wagon__Start (Characters_Wagon_o* __this, const MethodInfo* method);
// 0x5bf34a0

void Characters_Wagon__Start(Characters_Wagon_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Rigidbody_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  
  if (Il2CppMethodInitialized_07547626 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Rigidbody);
    Il2CppMethodInitialized_07547626 = '\x01';
  }
  pUVar2 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Rigidbody);
  (__this->fields).rigidbody = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).rigidbody);
  pUVar1 = (__this->fields).leftWheel;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    (__this->fields).leftWheelTransform = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).leftWheelTransform);
    pUVar1 = (__this->fields).rightWheel;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
      (__this->fields).rightWheelTransform = pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).rightWheelTransform);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.Wagon$$CheckGround
// il2cpp: void Characters_Wagon__CheckGround (Characters_Wagon_o* __this, const MethodInfo* method);
// 0x5bf3530

void Characters_Wagon__CheckGround(Characters_Wagon_o *__this,MethodInfo *method)

{
  (__this->fields).grounded = true;
  return;
}


// Characters.Wagon$$FixedUpdate
// il2cpp: void Characters_Wagon__FixedUpdate (Characters_Wagon_o* __this, const MethodInfo* method);
// 0x5bf3540

void Characters_Wagon__FixedUpdate(Characters_Wagon_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o **targetAddress;
  UnityEngine_Object_o *x;
  bool bVar1;
  UnityEngine_Rigidbody_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  float local_38;
  float fStack_34;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07547627 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547627 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).rigidbody;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields).rigidbody;
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Rigidbody);
    (__this->fields).rigidbody = pUVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
    return;
  }
  (__this->fields).grounded = true;
  pUVar3 = (__this->fields).leftWheelTransform;
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    UVar7 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).rightWheelTransform;
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      UVar8 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e7b7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e7b7 = '\x01';
      }
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar4 = UVar7.fields.z - UVar8.fields.z;
      local_38 = UVar7.fields.x;
      fStack_34 = UVar7.fields.y;
      local_38 = local_38 - UVar8.fields.x;
      fStack_34 = fStack_34 - UVar8.fields.y;
      fVar4 = fVar4 * fVar4 + fStack_34 * fStack_34 + local_38 * local_38;
      if (fVar4 < 0.0) {
        fVar4 = sqrtf(fVar4);
      }
      else {
        fVar4 = SQRT(fVar4);
      }
      pUVar3 = (__this->fields).leftWheelTransform;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UVar7 = UnityEngine_Transform__get_localScale(pUVar3,(MethodInfo *)0x0);
        pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar2 = (__this->fields).rigidbody;
        if (pUVar2 != (UnityEngine_Rigidbody_o *)0x0) {
          UVar8 = UnityEngine_Rigidbody__get_linearVelocity(pUVar2,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            UVar8 = UnityEngine_Transform__InverseTransformDirection(pUVar3,UVar8,(MethodInfo *)0x0);
            pUVar2 = *targetAddress;
            if (pUVar2 != (UnityEngine_Rigidbody_o *)0x0) {
              UVar9 = UnityEngine_Rigidbody__get_angularVelocity(pUVar2,(MethodInfo *)0x0);
              fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
              fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
              pUVar3 = (__this->fields).leftWheelTransform;
              if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                fStack_34 = UVar7.fields.y;
                fStack_24 = UVar9.fields.y;
                fStack_24 = fVar4 * 0.5 * fStack_24;
                UnityEngine_Transform__Rotate_692dd90
                          (pUVar3,fVar5 * ((UVar8.fields.z - fStack_24) / (fStack_34 * 0.5)) * 57.29578,0.0,
                           0.0,(MethodInfo *)0x0);
                pUVar3 = (__this->fields).rightWheelTransform;
                if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__Rotate_692dd90
                            (pUVar3,fVar6 * ((UVar8.fields.z + fStack_24) / (fStack_34 * 0.5)) * 57.29578,0.0,
                             0.0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.Wagon$$.ctor
// il2cpp: void Characters_Wagon___ctor (Characters_Wagon_o* __this, const MethodInfo* method);
// 0x5bf37f0

void Characters_Wagon___ctor(Characters_Wagon_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  (__this->fields).targetVelocity.fields = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


