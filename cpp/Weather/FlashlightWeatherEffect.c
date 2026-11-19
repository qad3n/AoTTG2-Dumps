// Type: Weather.FlashlightWeatherEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Weather/FlashlightWeatherEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/FlashlightWeatherEffect.cs
// --------------------------------

// Weather.FlashlightWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_FlashlightWeatherEffect__get__positionOffset (Weather_FlashlightWeatherEffect_o* __this, const MethodInfo* method);
// 0x5853e60

UnityEngine_Vector3_o
Weather_FlashlightWeatherEffect__get__positionOffset
          (Weather_FlashlightWeatherEffect_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Vector3_o UVar4;
  
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar3->upVector).fields.x;
  uVar2 = (pUVar3->upVector).fields.y;
  UVar4.fields.x = (float)uVar1 * 0.0;
  UVar4.fields.y = (float)uVar2 * 0.0;
  UVar4.fields.z = (pUVar3->upVector).fields.z * 0.0;
  return (UnityEngine_Vector3_o)UVar4.fields;
}


// Weather.FlashlightWeatherEffect$$Randomize
// il2cpp: void Weather_FlashlightWeatherEffect__Randomize (Weather_FlashlightWeatherEffect_o* __this, const MethodInfo* method);
// 0x5853eb0

void Weather_FlashlightWeatherEffect__Randomize(Weather_FlashlightWeatherEffect_o *__this,MethodInfo *method)

{
  return;
}


// Weather.FlashlightWeatherEffect$$Setup
// il2cpp: void Weather_FlashlightWeatherEffect__Setup (Weather_FlashlightWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x5853ec0

void Weather_FlashlightWeatherEffect__Setup
               (Weather_FlashlightWeatherEffect_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  UnityEngine_Light_o **targetAddress;
  UnityEngine_Light_o *pUVar1;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_0754506a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInChildren_Light)
    ;
    Il2CppMethodInitialized_0754506a = '\x01';
    method = extraout_RDX;
  }
  Weather_BaseWeatherEffect__Setup((Weather_ThunderWeatherEffect_o *)__this,parent,method);
  pUVar1 = UnityEngine_Component__GetComponentInChildren_object__34b09d0
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B09D0 *)MethodInfo_UnityEngine_Component_GetComponentInChildren_Light);
  targetAddress = &(__this->fields)._light;
  (__this->fields)._light = pUVar1;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar1 = (__this->fields)._light;
  if (pUVar1 != (UnityEngine_Light_o *)0x0) {
    UnityEngine_Light__set_range(pUVar1,120.0,(MethodInfo *)0x0);
    if (*targetAddress != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_intensity(*targetAddress,1.0,(MethodInfo *)0x0);
      if (*targetAddress != (UnityEngine_Light_o *)0x0) {
        UnityEngine_Light__set_spotAngle(*targetAddress,60.0,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._22_SetColor.methodPtr)
                  (__this,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),
                   (__this->klass->vtable)._22_SetColor.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Weather.FlashlightWeatherEffect$$SetColor
// il2cpp: void Weather_FlashlightWeatherEffect__SetColor (Weather_FlashlightWeatherEffect_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x5853f90

void Weather_FlashlightWeatherEffect__SetColor
               (Weather_FlashlightWeatherEffect_o *__this,UnityEngine_Color_o color,MethodInfo *method)

{
  UnityEngine_Light_o *__this_00;
  
  __this_00 = (__this->fields)._light;
  if (__this_00 == (UnityEngine_Light_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Light__set_color(__this_00,color,(MethodInfo *)0x0);
  return;
}


// Weather.FlashlightWeatherEffect$$LateUpdate
// il2cpp: void Weather_FlashlightWeatherEffect__LateUpdate (Weather_FlashlightWeatherEffect_o* __this, const MethodInfo* method);
// 0x5853fb0

void Weather_FlashlightWeatherEffect__LateUpdate(Weather_FlashlightWeatherEffect_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Light_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  bool bVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o value_00;
  float fStack_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_0754506b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754506b = '\x01';
  }
  pUVar1 = (__this->fields)._parent;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar2 = (__this->fields)._light;
  if (bVar4) {
    if (pUVar2 != (UnityEngine_Light_o *)0x0) {
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
        if (!bVar4) {
          pUVar2 = (__this->fields)._light;
          if (pUVar2 == (UnityEngine_Light_o *)0x0) goto label_05854157;
          pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
          if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_05854157;
          UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
        }
        pUVar1 = (__this->fields)._parent;
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = (__this->fields)._transform;
          value = UnityEngine_Transform__get_rotation(pUVar1,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_rotation(pUVar3,value,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._parent;
            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
              pUVar3 = (__this->fields)._transform;
              UVar6 = UnityEngine_Transform__get_position(pUVar1,(MethodInfo *)0x0);
              pUVar1 = (__this->fields)._parent;
              if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                UVar7 = UnityEngine_Transform__get_forward(pUVar1,(MethodInfo *)0x0);
                if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                  fStack_28 = UVar6.fields.x;
                  fStack_24 = UVar6.fields.y;
                  value_00.fields.y = fStack_24 + UVar7.fields.y * -0.1;
                  value_00.fields.x = fStack_28 + UVar7.fields.x * -0.1;
                  value_00.fields.z = UVar6.fields.z + UVar7.fields.z * -0.1;
                  UnityEngine_Transform__set_position(pUVar3,value_00,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  else if (pUVar2 != (UnityEngine_Light_o *)0x0) {
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
      if (!bVar4) {
        return;
      }
      pUVar2 = (__this->fields)._light;
      if (pUVar2 != (UnityEngine_Light_o *)0x0) {
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_05854157:
  ThrowNullReferenceException();
}


// Weather.FlashlightWeatherEffect$$.ctor
// il2cpp: void Weather_FlashlightWeatherEffect___ctor (Weather_FlashlightWeatherEffect_o* __this, const MethodInfo* method);
// 0x5854160

void Weather_FlashlightWeatherEffect___ctor(Weather_FlashlightWeatherEffect_o *__this,MethodInfo *method)

{
  Weather_BaseWeatherEffect___ctor((Weather_SnowWeatherEffect_o *)__this,method);
  return;
}


