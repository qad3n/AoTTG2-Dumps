// Type: Weather.FlashlightWeatherEffect
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/FlashlightWeatherEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/FlashlightWeatherEffect.cs
// --------------------------------

// Weather.FlashlightWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_FlashlightWeatherEffect__get__positionOffset (Weather_FlashlightWeatherEffect_o* __this, const MethodInfo* method);
// 0x181da1240

UnityEngine_Vector3_o
Weather_FlashlightWeatherEffect__get__positionOffset(Weather_FlashlightWeatherEffect_o* __this, MethodInfo* method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  
  if (Il2CppMethodInitialized_18433de5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5c = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar3->upVector).fields.y;
  uVar2 = (pUVar3->upVector).fields.z;
  (__return_storage_ptr__->fields).x = (pUVar3->upVector).fields.x * 0.0;
  (__return_storage_ptr__->fields).y = (float)uVar1 * 0.0;
  (__return_storage_ptr__->fields).z = (float)uVar2 * 0.0;
  return __return_storage_ptr__;
}


// Weather.FlashlightWeatherEffect$$Randomize
// il2cpp: void Weather_FlashlightWeatherEffect__Randomize (Weather_FlashlightWeatherEffect_o* __this, const MethodInfo* method);
// 0x180547020

void
Weather_FlashlightWeatherEffect__Randomize(Weather_FlashlightWeatherEffect_o* __this, MethodInfo* method)

{
  return;
}


// Weather.FlashlightWeatherEffect$$Setup
// il2cpp: void Weather_FlashlightWeatherEffect__Setup (Weather_FlashlightWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x181da1150

void Weather_FlashlightWeatherEffect__Setup
               (Weather_FlashlightWeatherEffect_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  UnityEngine_Light_o *pUVar1;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184344912 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInChildren_Light)
    ;
    Il2CppMethodInitialized_184344912 = '\x01';
  }
  Weather_BaseWeatherEffect__Setup((Weather_BaseWeatherEffect_o *)__this,parent,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__GetComponentInChildren_object__664b50
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_664B50 *)MethodInfo_UnityEngine_Component_GetComponentInChildren_Light);
  (__this->fields)._light = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._light,pUVar1);
  pUVar1 = (__this->fields)._light;
  if (pUVar1 != (UnityEngine_Light_o *)0x0) {
    UnityEngine_Light__set_range(pUVar1,120.0,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._light;
    if (pUVar1 != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_intensity(pUVar1,1.0,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._light;
      if (pUVar1 != (UnityEngine_Light_o *)0x0) {
        UnityEngine_Light__set_spotAngle(pUVar1,60.0,(MethodInfo *)0x0);
        local_18.r = 0.0;
        local_18.g = 0.0;
        local_18.b = 0.0;
        local_18.a = 1.0;
        (*(__this->klass->vtable)._22_SetColor.methodPtr)
                  (__this,(UnityEngine_Color_o *)&local_18,(__this->klass->vtable)._22_SetColor.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Weather.FlashlightWeatherEffect$$SetColor
// il2cpp: void Weather_FlashlightWeatherEffect__SetColor (Weather_FlashlightWeatherEffect_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x181da1120

void Weather_FlashlightWeatherEffect__SetColor
               (Weather_FlashlightWeatherEffect_o *__this,UnityEngine_Color_o *color,MethodInfo *method)

{
  UnityEngine_Light_o *__this_00;
  UnityEngine_Color_Fields local_18;
  
  __this_00 = (__this->fields)._light;
  if (__this_00 != (UnityEngine_Light_o *)0x0) {
    local_18.r = (color->fields).r;
    local_18.g = (color->fields).g;
    local_18.b = (color->fields).b;
    local_18.a = (color->fields).a;
    UnityEngine_Light__set_color(__this_00,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Weather.FlashlightWeatherEffect$$LateUpdate
// il2cpp: void Weather_FlashlightWeatherEffect__LateUpdate (Weather_FlashlightWeatherEffect_o* __this, const MethodInfo* method);
// 0x181da0f40
// asm: 12 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181da10d8: xorps xmm0, xmm0
// asm:   0x181da10db: lea rdx, [rsp + 0x20]
// asm:   0x181da10e0: movsd xmm0, xmm7
// asm:   0x181da10e4: xor r8d, r8d
// asm:   0x181da10e7: movsd qword ptr [rsp + 0x20], xmm0
// asm:   0x181da10ed: mov rcx, rdi
// asm:   0x181da10f0: movss xmm0, dword ptr [rax + 8]
// asm:   0x181da10f5: mulss xmm0, dword ptr [rip + 0x15b8533]
// asm:   0x181da10fd: subss xmm6, xmm0
// asm:   0x181da1101: movss dword ptr [rsp + 0x28], xmm6
// asm:   0x181da1107: call 0x182f5c390  ; UnityEngine_Transform__set_position()
// asm:   0x181da110c: jmp 0x181da0ff2

void Weather_FlashlightWeatherEffect__LateUpdate(Weather_FlashlightWeatherEffect_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Light_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  bool bVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_Quaternion_o *pUVar11;
  UnityEngine_Vector3_o *pUVar12;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_Fields local_38 [3];
  
  if (Il2CppMethodInitialized_184344913 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344913 = '\x01';
  }
  pUVar6 = (__this->fields)._parent;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar7 = (__this->fields)._light;
  if (pUVar7 != (UnityEngine_Light_o *)0x0) {
    if (bVar9) {
      pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
        bVar9 = UnityEngine_GameObject__get_activeSelf(pUVar10,(MethodInfo *)0x0);
        if (!bVar9) {
          pUVar7 = (__this->fields)._light;
          if ((pUVar7 == (UnityEngine_Light_o *)0x0) ||
             (pUVar10 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
             pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto label_181da1111;
          UnityEngine_GameObject__SetActive(pUVar10,true,(MethodInfo *)0x0);
        }
        pUVar6 = (__this->fields)._parent;
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          pUVar8 = (__this->fields)._transform;
          pUVar11 = UnityEngine_Transform__get_rotation
                              ((UnityEngine_Quaternion_o *)local_38,pUVar6,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            local_38[0].x = (pUVar11->fields).x;
            local_38[0].y = (pUVar11->fields).y;
            local_38[0].z = (pUVar11->fields).z;
            local_38[0].w = (pUVar11->fields).w;
            UnityEngine_Transform__set_rotation(pUVar8,(UnityEngine_Quaternion_o *)local_38,(MethodInfo *)0x0)
            ;
            pUVar6 = (__this->fields)._parent;
            if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
              pUVar8 = (__this->fields)._transform;
              pUVar12 = UnityEngine_Transform__get_position
                                  ((UnityEngine_Vector3_o *)&local_48,pUVar6,(MethodInfo *)0x0);
              pUVar6 = (__this->fields)._parent;
              if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                uVar2 = (pUVar12->fields).x;
                uVar4 = (pUVar12->fields).y;
                fVar1 = (pUVar12->fields).z;
                pUVar12 = UnityEngine_Transform__get_forward
                                    ((UnityEngine_Vector3_o *)local_38,pUVar6,(MethodInfo *)0x0);
                uVar3 = (pUVar12->fields).x;
                uVar5 = (pUVar12->fields).y;
                if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                  local_48.y = (float)uVar4 - (float)uVar5 * 0.1;
                  local_48.x = (float)uVar2 - (float)uVar3 * 0.1;
                  local_48.z = fVar1 - (pUVar12->fields).z * 0.1;
                  UnityEngine_Transform__set_position
                            (pUVar8,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
    else {
      pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
        bVar9 = UnityEngine_GameObject__get_activeSelf(pUVar10,(MethodInfo *)0x0);
        if (!bVar9) {
          return;
        }
        pUVar7 = (__this->fields)._light;
        if ((pUVar7 != (UnityEngine_Light_o *)0x0) &&
           (pUVar10 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
           pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_181da1111:
  ThrowNullReferenceException();
}


// Weather.FlashlightWeatherEffect$$.ctor
// il2cpp: void Weather_FlashlightWeatherEffect___ctor (Weather_FlashlightWeatherEffect_o* __this, const MethodInfo* method);
// 0x181da1230

void
Weather_FlashlightWeatherEffect___ctor(Weather_FlashlightWeatherEffect_o* __this, MethodInfo* method)

{
  Weather_BaseWeatherEffect___ctor((Weather_BaseWeatherEffect_o *)__this,(MethodInfo *)0x0);
  return;
}


