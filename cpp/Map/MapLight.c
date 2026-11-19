// Type: Map.MapLight
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapLight.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapLight.cs
// --------------------------------

// Map.MapLight$$.ctor
// il2cpp: void Map_MapLight___ctor (Map_MapLight_o* __this, UnityEngine_Light_o* light, bool isDaylight, const MethodInfo* method);
// 0x598f550

void Map_MapLight___ctor(Map_MapLight_o *__this,UnityEngine_Light_o *light,bool isDaylight,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  float fVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Light = light;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Light);
  if (light == (UnityEngine_Light_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar2 = UnityEngine_Light__get_intensity(light,(MethodInfo *)0x0);
  (__this->fields).MaxIntensity = fVar2;
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)light,(MethodInfo *)0x0);
  (__this->fields)._transform = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._transform);
  (__this->fields)._isDaylight = isDaylight;
  return;
}


// Map.MapLight$$UpdateCull
// il2cpp: void Map_MapLight__UpdateCull (Map_MapLight_o* __this, UnityEngine_Vector3_o cameraPosition, float lightDistance, const MethodInfo* method);
// 0x598f5b0

void Map_MapLight__UpdateCull
               (Map_MapLight_o *__this,UnityEngine_Vector3_o cameraPosition,float lightDistance,
               MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Light_o *pUVar2;
  bool bVar3;
  MethodInfo *method_00;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  float local_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07545a2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545a2a = '\x01';
  }
  pUVar1 = (__this->fields)._transform;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pUVar2 = (__this->fields).Light;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((!bVar3) && ((__this->fields)._isDaylight == false)) {
      if (lightDistance <= 0.0) {
        pUVar2 = (__this->fields).Light;
        if (pUVar2 != (UnityEngine_Light_o *)0x0) {
          bVar3 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pUVar2,(MethodInfo *)0x0);
          if (!bVar3) {
            return;
          }
          pUVar2 = (__this->fields).Light;
          if (pUVar2 != (UnityEngine_Light_o *)0x0) {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        pUVar1 = (__this->fields)._transform;
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          UVar6 = UnityEngine_Transform__get_position(pUVar1,(MethodInfo *)0x0);
          local_28 = cameraPosition.fields.x;
          fStack_24 = cameraPosition.fields.y;
          fStack_24 = fStack_24 - UVar6.fields.y;
          fVar5 = cameraPosition.fields.z - UVar6.fields.z;
          local_28 = local_28 - UVar6.fields.x;
          fVar5 = fStack_24 * fStack_24 + local_28 * local_28 + fVar5 * fVar5;
          if (lightDistance * lightDistance <= fVar5) {
            fVar5 = 0.0;
          }
          else {
            if (fVar5 < 0.0) {
              fVar5 = sqrtf(fVar5);
            }
            else {
              fVar5 = SQRT(fVar5);
            }
            fVar4 = 4.0 - (fVar5 * 4.0) / lightDistance;
            fVar5 = 1.0;
            if (fVar4 <= 1.0) {
              fVar5 = fVar4;
            }
            fVar5 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5) * (__this->fields).MaxIntensity;
          }
          Map_MapLight__UpdateIntensity(__this,fVar5,method_00);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Map.MapLight$$MinimapDisableLight
// il2cpp: bool Map_MapLight__MinimapDisableLight (Map_MapLight_o* __this, const MethodInfo* method);
// 0x598f800

bool Map_MapLight__MinimapDisableLight(Map_MapLight_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *x;
  UnityEngine_Light_o *pUVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07545a2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545a2b = '\x01';
  }
  x = (__this->fields)._transform;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = false;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pUVar1 = (__this->fields).Light;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = false;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pUVar1 = (__this->fields).Light;
      if (pUVar1 == (UnityEngine_Light_o *)0x0) {
label_0598f8bb:
        ThrowNullReferenceException();
      }
      bVar3 = false;
      bVar2 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pUVar1,(MethodInfo *)0x0);
      if (bVar2) {
        pUVar1 = (__this->fields).Light;
        if (pUVar1 == (UnityEngine_Light_o *)0x0) goto label_0598f8bb;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,false,(MethodInfo *)0x0);
        bVar3 = true;
      }
    }
  }
  return bVar3;
}


// Map.MapLight$$MinimapEnableLight
// il2cpp: void Map_MapLight__MinimapEnableLight (Map_MapLight_o* __this, const MethodInfo* method);
// 0x598f8c0

void Map_MapLight__MinimapEnableLight(Map_MapLight_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *x;
  UnityEngine_Light_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07545a2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545a2c = '\x01';
  }
  x = (__this->fields)._transform;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pUVar1 = (__this->fields).Light;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pUVar1 = (__this->fields).Light;
      if (pUVar1 == (UnityEngine_Light_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,true,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Map.MapLight$$UpdateIntensity
// il2cpp: void Map_MapLight__UpdateIntensity (Map_MapLight_o* __this, float intensity, const MethodInfo* method);
// 0x598f750

void Map_MapLight__UpdateIntensity(Map_MapLight_o *__this,float intensity,MethodInfo *method)

{
  UnityEngine_Light_o *pUVar1;
  bool bVar2;
  float fVar3;
  
  pUVar1 = (__this->fields).Light;
  if ((intensity != 0.0) || (NAN(intensity))) {
    if (pUVar1 != (UnityEngine_Light_o *)0x0) {
      bVar2 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pUVar1,(MethodInfo *)0x0);
      if (!bVar2) {
        pUVar1 = (__this->fields).Light;
        if (pUVar1 == (UnityEngine_Light_o *)0x0) goto label_0598f7f7;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,true,(MethodInfo *)0x0);
      }
      pUVar1 = (__this->fields).Light;
      if (pUVar1 != (UnityEngine_Light_o *)0x0) {
        fVar3 = UnityEngine_Light__get_intensity(pUVar1,(MethodInfo *)0x0);
        if ((fVar3 == intensity) && (!NAN(fVar3) && !NAN(intensity))) {
          return;
        }
        pUVar1 = (__this->fields).Light;
        if (pUVar1 != (UnityEngine_Light_o *)0x0) {
          UnityEngine_Light__set_intensity(pUVar1,intensity,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else if (pUVar1 != (UnityEngine_Light_o *)0x0) {
    bVar2 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pUVar1,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    pUVar1 = (__this->fields).Light;
    if (pUVar1 != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,false,(MethodInfo *)0x0);
      return;
    }
  }
label_0598f7f7:
  ThrowNullReferenceException();
}


