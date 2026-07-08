// Type: Characters.Wagon
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/Wagon.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Horse/Wagon.cs  [CHANGED since prior version]
// --------------------------------

// Characters.Wagon$$Start
// il2cpp: void Characters_Wagon__Start (Characters_Wagon_o* __this, const MethodInfo* method);
// 0x3fd1980

void Characters_Wagon__Start(Characters_Wagon_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Rigidbody_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  
  if (DAT_057040e7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    DAT_057040e7 = '\x01';
  }
  pUVar2 = (UnityEngine_Rigidbody_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_Rigidbody_GetComponent_Rigidbody);
  (__this->fields).rigidbody = pUVar2;
  il2cpp_runtime_glue(&(__this->fields).rigidbody);
  pUVar1 = (__this->fields).leftWheel;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    (__this->fields).leftWheelTransform = pUVar3;
    il2cpp_runtime_glue(&(__this->fields).leftWheelTransform);
    pUVar1 = (__this->fields).rightWheel;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
      (__this->fields).rightWheelTransform = pUVar3;
      il2cpp_runtime_glue(&(__this->fields).rightWheelTransform,pUVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Wagon$$CheckGround
// il2cpp: void Characters_Wagon__CheckGround (Characters_Wagon_o* __this, const MethodInfo* method);
// 0x3fd1a10

void Characters_Wagon__CheckGround(Characters_Wagon_o *__this,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields).grounded = 1;
  return;
}


// Characters.Wagon$$FixedUpdate
// il2cpp: void Characters_Wagon__FixedUpdate (Characters_Wagon_o* __this, const MethodInfo* method);
// 0x3fd1a20

void Characters_Wagon__FixedUpdate(Characters_Wagon_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o **ppUVar1;
  UnityEngine_Object_o *x;
  bool_conflict bVar2;
  UnityEngine_Rigidbody_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  float fStack_54;
  float local_48;
  float fStack_44;
  float fStack_24;
  
  if (DAT_057040e8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057040e8 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).rigidbody;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields).rigidbody;
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    *(undefined1 *)&(__this->fields).grounded = 1;
    pUVar4 = (__this->fields).leftWheelTransform;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar8 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).rightWheelTransform;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UVar9 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
        if (DAT_056fdea6 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fdea6 = '\x01';
        }
        local_48 = UVar8.fields.x;
        fStack_44 = UVar8.fields.y;
        local_48 = local_48 - UVar9.fields.x;
        fStack_44 = fStack_44 - UVar9.fields.y;
        fVar5 = UVar8.fields.z - UVar9.fields.z;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_init_class();
        }
        fVar5 = fVar5 * fVar5 + fStack_44 * fStack_44 + local_48 * local_48;
        if (fVar5 < 0.0) {
          fVar5 = sqrtf(fVar5);
          pUVar4 = (__this->fields).leftWheelTransform;
        }
        else {
          fVar5 = SQRT(fVar5);
          pUVar4 = (__this->fields).leftWheelTransform;
        }
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          UVar8 = UnityEngine_Transform__get_localScale(pUVar4,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pUVar3 = (__this->fields).rigidbody;
          if ((pUVar3 != (UnityEngine_Rigidbody_o *)0x0) &&
             (UVar9 = UnityEngine_Rigidbody__get_velocity(pUVar3,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_Transform_o *)0x0)) {
            UVar9 = UnityEngine_Transform__InverseTransformDirection(pUVar4,UVar9,(MethodInfo *)0x0)
            ;
            pUVar3 = *ppUVar1;
            if (pUVar3 != (UnityEngine_Rigidbody_o *)0x0) {
              UVar10 = UnityEngine_Rigidbody__get_angularVelocity(pUVar3,(MethodInfo *)0x0);
              fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
              fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
              pUVar4 = (__this->fields).leftWheelTransform;
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                fStack_54 = UVar8.fields.y;
                fStack_24 = UVar10.fields.y;
                fStack_24 = fVar5 * 0.5 * fStack_24;
                UnityEngine_Transform__Rotate
                          (pUVar4,fVar6 * ((UVar9.fields.z - fStack_24) / (fStack_54 * 0.5)) *
                                  57.29578,0.0,0.0,(MethodInfo *)0x0);
                pUVar4 = (__this->fields).rightWheelTransform;
                if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__Rotate
                            (pUVar4,fVar7 * ((UVar9.fields.z + fStack_24) / (fStack_54 * 0.5)) *
                                    57.29578,0.0,0.0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar3 = (UnityEngine_Rigidbody_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_Rigidbody_GetComponent_Rigidbody);
  (__this->fields).rigidbody = pUVar3;
  il2cpp_runtime_glue(ppUVar1,pUVar3);
  return;
}


// Characters.Wagon$$.ctor
// il2cpp: void Characters_Wagon___ctor (Characters_Wagon_o* __this, const MethodInfo* method);
// 0x3fd1d00

void Characters_Wagon___ctor(Characters_Wagon_o *__this,MethodInfo *method)

{
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
  }
  (__this->fields).targetVelocity.fields = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


