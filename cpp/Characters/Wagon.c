// Type: Characters.Wagon
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/Wagon.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Horse/Wagon.cs
// --------------------------------

// Characters.Wagon$$Start
// il2cpp: void Characters_Wagon__Start (Characters_Wagon_o* __this, const MethodInfo* method);
// 0x182161760

void Characters_Wagon__Start(Characters_Wagon_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Rigidbody_o *value;
  UnityEngine_Transform_o *pUVar2;
  
  if (Il2CppMethodInitialized_184346c56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Rigidbody);
    Il2CppMethodInitialized_184346c56 = '\x01';
  }
  value = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)__this,
                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Rigidbody);
  (__this->fields).rigidbody = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).rigidbody,value);
  pUVar1 = (__this->fields).leftWheel;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    (__this->fields).leftWheelTransform = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).leftWheelTransform,pUVar2);
    pUVar1 = (__this->fields).rightWheel;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
      (__this->fields).rightWheelTransform = pUVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).rightWheelTransform,pUVar2);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.Wagon$$CheckGround
// il2cpp: void Characters_Wagon__CheckGround (Characters_Wagon_o* __this, const MethodInfo* method);
// 0x182161420

void
Characters_Wagon__CheckGround(Characters_Wagon_o* __this, MethodInfo* method)

{
  (__this->fields).grounded = true;
  return;
}


// Characters.Wagon$$FixedUpdate
// il2cpp: void Characters_Wagon__FixedUpdate (Characters_Wagon_o* __this, const MethodInfo* method);
// 0x182161430

void Characters_Wagon__FixedUpdate(Characters_Wagon_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Rigidbody_o *pUVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector3_o local_78 [9];
  
  if (Il2CppMethodInitialized_184346c57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c57 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).rigidbody;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pUVar4 = (__this->fields).leftWheelTransform;
    (__this->fields).grounded = true;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__get_position
                         ((UnityEngine_Vector3_o *)&local_88,pUVar4,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).rightWheelTransform;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        fVar10 = (pUVar3->fields).x;
        fVar9 = (pUVar3->fields).y;
        fVar11 = (pUVar3->fields).z;
        pUVar3 = UnityEngine_Transform__get_position
                           ((UnityEngine_Vector3_o *)&local_88,pUVar4,(MethodInfo *)0x0);
        fVar6 = (pUVar3->fields).x;
        fVar7 = (pUVar3->fields).y;
        fVar1 = (pUVar3->fields).z;
        if (Il2CppMethodInitialized_18433dee7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_18433dee7 = '\x01';
        }
        fVar10 = fVar10 - fVar6;
        fVar9 = fVar9 - fVar7;
        fVar11 = fVar11 - fVar1;
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        dVar8 = (double)(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11);
        if (dVar8 < 0.0) {
          dVar8 = sqrt(dVar8);
        }
        else {
          dVar8 = SQRT(dVar8);
        }
        pUVar4 = (__this->fields).leftWheelTransform;
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = UnityEngine_Transform__get_localScale
                             ((UnityEngine_Vector3_o *)&local_88,pUVar4,(MethodInfo *)0x0);
          fVar10 = (pUVar3->fields).y * 0.5;
          pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pUVar5 = (__this->fields).rigidbody;
          if (pUVar5 != (UnityEngine_Rigidbody_o *)0x0) {
            pUVar3 = UnityEngine_Rigidbody__get_linearVelocity(local_78,pUVar5,(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              local_88.x = (pUVar3->fields).x;
              local_88.y = (pUVar3->fields).y;
              local_88.z = (pUVar3->fields).z;
              pUVar3 = UnityEngine_Transform__InverseTransformDirection
                                 (local_78,pUVar4,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
              pUVar5 = (__this->fields).rigidbody;
              if (pUVar5 != (UnityEngine_Rigidbody_o *)0x0) {
                fVar9 = (pUVar3->fields).z;
                pUVar3 = UnityEngine_Rigidbody__get_angularVelocity(local_78,pUVar5,(MethodInfo *)0x0);
                fVar11 = (pUVar3->fields).y;
                fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                pUVar4 = (__this->fields).leftWheelTransform;
                if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__Rotate_2f59e60
                            (pUVar4,fVar6 * ((fVar9 - (float)dVar8 * 0.5 * fVar11) / fVar10) * 57.29578,0.0,
                             0.0,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields).rightWheelTransform;
                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__Rotate_2f59e60
                              (pUVar4,fVar7 * (((float)dVar8 * 0.5 * fVar11 + fVar9) / fVar10) * 57.29578,0.0,
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
  pUVar5 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Rigidbody);
  (__this->fields).rigidbody = pUVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).rigidbody,pUVar5);
  return;
}


// Characters.Wagon$$.ctor
// il2cpp: void Characters_Wagon___ctor (Characters_Wagon_o* __this, const MethodInfo* method);
// 0x1821617f0

void Characters_Wagon___ctor(Characters_Wagon_o *__this,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_18433e3c9 = '\x01';
  }
  fVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
  (__this->fields).targetVelocity.fields.x =
       (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
  (__this->fields).targetVelocity.fields.y = fVar1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


