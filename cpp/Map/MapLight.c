// Type: Map.MapLight
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Map/MapLight.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapLight.cs
// --------------------------------

// Map.MapLight$$.ctor
// il2cpp: void Map_MapLight___ctor (Map_MapLight_o* __this, UnityEngine_Light_o* light, bool isDaylight, const MethodInfo* method);
// 0x181ea83d0

void Map_MapLight___ctor(Map_MapLight_o *__this,UnityEngine_Light_o *light,bool isDaylight,MethodInfo *method)

{
  UnityEngine_Transform_o *value;
  float fVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Light = light;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Light,light);
  if (light != (UnityEngine_Light_o *)0x0) {
    fVar1 = UnityEngine_Light__get_intensity(light,(MethodInfo *)0x0);
    (__this->fields).MaxIntensity = fVar1;
    value = UnityEngine_Component__get_transform((UnityEngine_Component_o *)light,(MethodInfo *)0x0);
    (__this->fields)._transform = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._transform,value);
    (__this->fields)._isDaylight = isDaylight;
    return;
  }
  ThrowNullReferenceException();
}


// Map.MapLight$$UpdateCull
// il2cpp: void Map_MapLight__UpdateCull (Map_MapLight_o* __this, UnityEngine_Vector3_o cameraPosition, float lightDistance, const MethodInfo* method);
// 0x181ea81a0

void Map_MapLight__UpdateCull
               (Map_MapLight_o *__this,UnityEngine_Vector3_o *cameraPosition,float lightDistance,
               MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Light_o *x;
  bool bVar2;
  UnityEngine_Vector3_o *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o local_38 [4];
  
  if (Il2CppMethodInitialized_184345099 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345099 = '\x01';
  }
  pUVar1 = (__this->fields)._transform;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  x = (__this->fields).Light;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((__this->fields)._isDaylight != false) {
    return;
  }
  if (0.0 < lightDistance) {
    pUVar1 = (__this->fields)._transform;
    if (pUVar1 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar3 = UnityEngine_Transform__get_position(local_38,pUVar1,(MethodInfo *)0x0);
    fVar6 = (cameraPosition->fields).y - (pUVar3->fields).y;
    fVar4 = (cameraPosition->fields).z - (pUVar3->fields).z;
    fVar5 = (cameraPosition->fields).x - (pUVar3->fields).x;
    fVar4 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
    if (fVar4 < lightDistance * lightDistance) {
      if (fVar4 < 0.0) {
        fVar4 = (float)il2cpp_runtime_helper_1804fa7a0(fVar4);
      }
      else {
        fVar4 = SQRT(fVar4);
      }
      fVar5 = 4.0 - (fVar4 * 4.0) / lightDistance;
      fVar4 = 0.0;
      if ((0.0 <= fVar5) && (fVar4 = 1.0, fVar5 <= 1.0)) {
        fVar4 = fVar5;
      }
      fVar4 = fVar4 * (__this->fields).MaxIntensity;
      goto label_181ea82f4;
    }
  }
  fVar4 = 0.0;
label_181ea82f4:
  Map_MapLight__UpdateIntensity(__this,fVar4,(MethodInfo *)0x0);
  return;
}


// Map.MapLight$$MinimapDisableLight
// il2cpp: bool Map_MapLight__MinimapDisableLight (Map_MapLight_o* __this, const MethodInfo* method);
// 0x181ea8020

bool Map_MapLight__MinimapDisableLight(Map_MapLight_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *x;
  UnityEngine_Light_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434509a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434509a = '\x01';
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
      if (pUVar1 != (UnityEngine_Light_o *)0x0) {
        bVar2 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pUVar1,(MethodInfo *)0x0);
        if (!bVar2) {
          return false;
        }
        pUVar1 = (__this->fields).Light;
        if (pUVar1 != (UnityEngine_Light_o *)0x0) {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,false,(MethodInfo *)0x0);
          return true;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Map.MapLight$$MinimapEnableLight
// il2cpp: void Map_MapLight__MinimapEnableLight (Map_MapLight_o* __this, const MethodInfo* method);
// 0x181ea80f0

void Map_MapLight__MinimapEnableLight(Map_MapLight_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *x;
  UnityEngine_Light_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434509b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434509b = '\x01';
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
    }
  }
  return;
}


// Map.MapLight$$UpdateIntensity
// il2cpp: void Map_MapLight__UpdateIntensity (Map_MapLight_o* __this, float intensity, const MethodInfo* method);
// 0x181ea8320

void Map_MapLight__UpdateIntensity(Map_MapLight_o *__this,float intensity,MethodInfo *method)

{
  UnityEngine_Light_o *pUVar1;
  bool bVar2;
  float fVar3;
  
  pUVar1 = (__this->fields).Light;
  if (pUVar1 != (UnityEngine_Light_o *)0x0) {
    if (intensity == 0.0) {
      bVar2 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pUVar1,(MethodInfo *)0x0);
      if (bVar2) {
        pUVar1 = (__this->fields).Light;
        if (pUVar1 == (UnityEngine_Light_o *)0x0) goto label_181ea83c4;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,false,(MethodInfo *)0x0);
      }
      return;
    }
    bVar2 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pUVar1,(MethodInfo *)0x0);
    if (!bVar2) {
      pUVar1 = (__this->fields).Light;
      if (pUVar1 == (UnityEngine_Light_o *)0x0) goto label_181ea83c4;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,true,(MethodInfo *)0x0);
    }
    pUVar1 = (__this->fields).Light;
    if (pUVar1 != (UnityEngine_Light_o *)0x0) {
      fVar3 = UnityEngine_Light__get_intensity(pUVar1,(MethodInfo *)0x0);
      if (fVar3 == intensity) {
        return;
      }
      pUVar1 = (__this->fields).Light;
      if (pUVar1 != (UnityEngine_Light_o *)0x0) {
        UnityEngine_Light__set_intensity(pUVar1,intensity,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_181ea83c4:
  ThrowNullReferenceException();
}


