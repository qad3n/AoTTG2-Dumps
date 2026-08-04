// Type: Characters.Wagon
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/Wagon.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Horse/Wagon.cs
// --------------------------------

// Characters.Wagon$$Start
// il2cpp: void Characters_Wagon__Start (Characters_Wagon_o* __this, const MethodInfo* method);
// 0x42de240

void Characters_Wagon__Start(Characters_Wagon_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Rigidbody_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  long lVar4;
  
  if (g_data_057ade55 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    g_data_057ade55 = '\x01';
  }
  pUVar2 = (UnityEngine_Rigidbody_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Rigidbody_GetComponent_Rigidbody);
  (__this->fields).rigidbody = pUVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).rigidbody);
  pUVar1 = (__this->fields).leftWheel;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    (__this->fields).leftWheelTransform = pUVar3;
    il2cpp_runtime_helper_022b4080(&(__this->fields).leftWheelTransform);
    pUVar1 = (__this->fields).rightWheel;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
      (__this->fields).rightWheelTransform = pUVar3;
      il2cpp_runtime_helper_022b4080(&(__this->fields).rightWheelTransform,pUVar3);
      return;
    }
  }
  lVar4 = 0;
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)(lVar4 + 0x58) = 1;
  return;
}


// Characters.Wagon$$CheckGround
// il2cpp: void Characters_Wagon__CheckGround (Characters_Wagon_o* __this, const MethodInfo* method);
// 0x42de2d0

void Characters_Wagon__CheckGround(Characters_Wagon_o *__this,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields).grounded = 1;
  return;
}


// Characters.Wagon$$FixedUpdate
// il2cpp: void Characters_Wagon__FixedUpdate (Characters_Wagon_o* __this, const MethodInfo* method);
// 0x42de2e0

void Characters_Wagon__FixedUpdate(Characters_Wagon_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o **ppUVar1;
  UnityEngine_Object_o *x;
  bool_conflict bVar2;
  UnityEngine_Rigidbody_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_MonoBehaviour_o *__this_00;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  float local_60;
  float fStack_54;
  float local_48;
  float fStack_44;
  float fStack_24;
  
  if (g_data_057ade56 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ade56 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).rigidbody;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields).rigidbody;
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar3 = (UnityEngine_Rigidbody_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Rigidbody_GetComponent_Rigidbody);
    (__this->fields).rigidbody = pUVar3;
    il2cpp_runtime_helper_022b4080(ppUVar1,pUVar3);
    return;
  }
  *(undefined1 *)&(__this->fields).grounded = 1;
  pUVar4 = (__this->fields).leftWheelTransform;
  __this_00 = (UnityEngine_MonoBehaviour_o *)0x0;
  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
    UVar7 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (__this->fields).rightWheelTransform;
    __this_00 = (UnityEngine_MonoBehaviour_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      UVar8 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      if (g_data_057a68cb == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a68cb = '\x01';
      }
      local_48 = UVar7.fields.x;
      fStack_44 = UVar7.fields.y;
      local_48 = local_48 - UVar8.fields.x;
      fStack_44 = fStack_44 - UVar8.fields.y;
      fVar5 = UVar7.fields.z - UVar8.fields.z;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      local_60 = fVar5 * fVar5 + fStack_44 * fStack_44 + local_48 * local_48;
      if (local_60 < 0.0) {
        local_60 = sqrtf(local_60);
        pUVar4 = (__this->fields).leftWheelTransform;
        __this_00 = (UnityEngine_MonoBehaviour_o *)0x0;
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_042de5b4;
      }
      else {
        local_60 = SQRT(local_60);
        pUVar4 = (__this->fields).leftWheelTransform;
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
          __this_00 = (UnityEngine_MonoBehaviour_o *)0x0;
          goto label_042de5b4;
        }
      }
      UVar7 = UnityEngine_Transform__get_localScale(pUVar4,(MethodInfo *)0x0);
      pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      __this_00 = (UnityEngine_MonoBehaviour_o *)(__this->fields).rigidbody;
      if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UVar8 = UnityEngine_Rigidbody__get_velocity((UnityEngine_Rigidbody_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          UVar8 = UnityEngine_Transform__InverseTransformDirection(pUVar4,UVar8,(MethodInfo *)0x0);
          pUVar3 = *ppUVar1;
          __this_00 = (UnityEngine_MonoBehaviour_o *)0x0;
          if (pUVar3 != (UnityEngine_Rigidbody_o *)0x0) {
            UVar9 = UnityEngine_Rigidbody__get_angularVelocity(pUVar3,(MethodInfo *)0x0);
            fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            pUVar4 = (__this->fields).leftWheelTransform;
            __this_00 = (UnityEngine_MonoBehaviour_o *)0x0;
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              fStack_54 = UVar7.fields.y;
              fStack_24 = UVar9.fields.y;
              fStack_24 = local_60 * 0.5 * fStack_24;
              UnityEngine_Transform__Rotate_4e0a530
                        (pUVar4,fVar5 * ((UVar8.fields.z - fStack_24) / (fStack_54 * 0.5)) * 57.29578,0.0,0.0,
                         (MethodInfo *)0x0);
              pUVar4 = (__this->fields).rightWheelTransform;
              __this_00 = (UnityEngine_MonoBehaviour_o *)0x0;
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__Rotate_4e0a530
                          (pUVar4,fVar6 * ((UVar8.fields.z + fStack_24) / (fStack_54 * 0.5)) * 57.29578,0.0,
                           0.0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_042de5b4:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a694c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a694c = '\x01';
  }
  __this_00[1].fields.m_CancellationTokenSource =
       (System_Threading_CancellationTokenSource_o *)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// Characters.Wagon$$.ctor
// il2cpp: void Characters_Wagon___ctor (Characters_Wagon_o* __this, const MethodInfo* method);
// 0x42de5c0

void Characters_Wagon___ctor(Characters_Wagon_o *__this,MethodInfo *method)

{
  if (g_data_057a694c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a694c = '\x01';
  }
  (__this->fields).targetVelocity.fields = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


