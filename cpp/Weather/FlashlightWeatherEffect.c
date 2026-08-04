// Type: Weather.FlashlightWeatherEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/FlashlightWeatherEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/FlashlightWeatherEffect.cs
// --------------------------------

// Weather.FlashlightWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_FlashlightWeatherEffect__get__positionOffset (Weather_FlashlightWeatherEffect_o* __this, const MethodInfo* method);
// 0x406a4f0

UnityEngine_Vector3_o
Weather_FlashlightWeatherEffect__get__positionOffset
          (Weather_FlashlightWeatherEffect_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector3_o UVar2;
  
  if (g_data_057a6844 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a6844 = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  UVar2.fields.x = (float)uVar1 * 0.0;
  UVar2.fields.y = (float)((ulong)uVar1 >> 0x20) * 0.0;
  UVar2.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 0.0;
  return (UnityEngine_Vector3_o)UVar2.fields;
}


// Weather.FlashlightWeatherEffect$$Randomize
// il2cpp: void Weather_FlashlightWeatherEffect__Randomize (Weather_FlashlightWeatherEffect_o* __this, const MethodInfo* method);
// 0x406a540

void Weather_FlashlightWeatherEffect__Randomize(Weather_FlashlightWeatherEffect_o *__this,MethodInfo *method)

{
  return;
}


// Weather.FlashlightWeatherEffect$$Setup
// il2cpp: void Weather_FlashlightWeatherEffect__Setup (Weather_FlashlightWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x406a550

void Weather_FlashlightWeatherEffect__Setup
               (Weather_FlashlightWeatherEffect_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  UnityEngine_Light_o **ppUVar1;
  UnityEngine_Transform_o *pUVar2;
  undefined8 uVar3;
  bool_conflict bVar4;
  bool_conflict bVar5;
  UnityEngine_Light_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  long lVar8;
  UnityEngine_Light_c *pUVar9;
  undefined8 in_XMM1_Qa;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o value;
  UnityEngine_Color_o value_00;
  UnityEngine_Quaternion_o value_01;
  float fStack_48;
  float fStack_44;
  
  if (g_data_057ac2e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Light_GetComponentInChildren_Light);
    g_data_057ac2e2 = '\x01';
    method = extraout_RDX;
  }
  Weather_BaseWeatherEffect__Setup((Weather_ThunderWeatherEffect_o *)__this,parent,method);
  pUVar6 = (UnityEngine_Light_o *)
           UnityEngine_Component__GetComponentInChildren_object__24e7d50
                     ((UnityEngine_Component_o *)__this,MethodInfo_Light_GetComponentInChildren_Light);
  ppUVar1 = &(__this->fields)._light;
  (__this->fields)._light = pUVar6;
  il2cpp_runtime_helper_022b4080(ppUVar1);
  pUVar6 = (__this->fields)._light;
  if (pUVar6 != (UnityEngine_Light_o *)0x0) {
    UnityEngine_Light__set_range(pUVar6,120.0,(MethodInfo *)0x0);
    if (*ppUVar1 != (UnityEngine_Light_o *)0x0) {
      UnityEngine_Light__set_intensity(*ppUVar1,1.0,(MethodInfo *)0x0);
      if (*ppUVar1 != (UnityEngine_Light_o *)0x0) {
        UnityEngine_Light__set_spotAngle(*ppUVar1,60.0,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._22_SetColor.methodPtr)
                  (0,0x3f80000000000000,__this,(__this->klass->vtable)._22_SetColor.method);
        return;
      }
    }
  }
  lVar8 = 0;
  uVar3 = il2cpp_runtime_helper_022b2c90();
  pUVar6 = *(UnityEngine_Light_o **)(lVar8 + 0x70);
  if (pUVar6 != (UnityEngine_Light_o *)0x0) {
    value_00.fields.b = (float)(int)in_XMM1_Qa;
    value_00.fields.a = (float)(int)((ulong)in_XMM1_Qa >> 0x20);
    value_00.fields.r = (float)(int)uVar3;
    value_00.fields.g = (float)(int)((ulong)uVar3 >> 0x20);
    UnityEngine_Light__set_color(pUVar6,value_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac2e3 = '\x01';
  }
  pUVar9 = pUVar6[1].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar9 = (UnityEngine_Light_c *)pUVar6[3].fields.m_CachedPtr;
  if (pUVar9 != (UnityEngine_Light_c *)0x0) {
    method_00 = (MethodInfo *)0x0;
    pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar7,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        if ((char)bVar5 == '\0') {
          return;
        }
        pUVar9 = (UnityEngine_Light_c *)pUVar6[3].fields.m_CachedPtr;
        if (pUVar9 != (UnityEngine_Light_c *)0x0) {
          method_00 = (MethodInfo *)0x0;
          pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar7,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        if ((char)bVar5 == '\0') {
          pUVar9 = (UnityEngine_Light_c *)pUVar6[3].fields.m_CachedPtr;
          if (pUVar9 == (UnityEngine_Light_c *)0x0) goto label_0406a7c6;
          method_00 = (MethodInfo *)0x0;
          pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_0406a7c6;
          method_00 = (MethodInfo *)0x1;
          UnityEngine_GameObject__SetActive(pUVar7,1,(MethodInfo *)0x0);
        }
        pUVar9 = pUVar6[1].klass;
        if (pUVar9 != (UnityEngine_Light_c *)0x0) {
          pUVar2 = pUVar6[1].monitor;
          method_00 = (MethodInfo *)0x0;
          value_01 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)pUVar9,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            method_00 = (MethodInfo *)0x0;
            UnityEngine_Transform__set_rotation(pUVar2,value_01,(MethodInfo *)0x0);
            pUVar9 = (UnityEngine_Light_c *)0x0;
            if (pUVar6[1].klass != (UnityEngine_Light_c *)0x0) {
              pUVar2 = pUVar6[1].monitor;
              method_00 = (MethodInfo *)0x0;
              UVar10 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)pUVar6[1].klass,(MethodInfo *)0x0);
              pUVar9 = pUVar6[1].klass;
              if (pUVar9 != (UnityEngine_Light_c *)0x0) {
                method_00 = (MethodInfo *)0x0;
                UVar11 = UnityEngine_Transform__get_forward
                                   ((UnityEngine_Transform_o *)pUVar9,(MethodInfo *)0x0);
                if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                  fStack_48 = UVar10.fields.x;
                  fStack_44 = UVar10.fields.y;
                  value.fields.y = fStack_44 + UVar11.fields.y * -0.1;
                  value.fields.x = fStack_48 + UVar11.fields.x * -0.1;
                  value.fields.z = UVar10.fields.z + UVar11.fields.z * -0.1;
                  UnityEngine_Transform__set_position(pUVar2,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_0406a7c6:
  il2cpp_runtime_helper_022b2c90();
  Weather_BaseWeatherEffect___ctor((Weather_SnowWeatherEffect_o *)pUVar9,method_00);
  return;
}


// Weather.FlashlightWeatherEffect$$SetColor
// il2cpp: void Weather_FlashlightWeatherEffect__SetColor (Weather_FlashlightWeatherEffect_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x406a620

void Weather_FlashlightWeatherEffect__SetColor
               (Weather_FlashlightWeatherEffect_o *__this,UnityEngine_Color_o color,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *pUVar4;
  MethodInfo *method_00;
  UnityEngine_Light_o *__this_00;
  UnityEngine_Light_c *pUVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o value_00;
  float fStack_30;
  float fStack_2c;
  
  __this_00 = (__this->fields)._light;
  if (__this_00 != (UnityEngine_Light_o *)0x0) {
    UnityEngine_Light__set_color(__this_00,color,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac2e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac2e3 = '\x01';
  }
  pUVar5 = __this_00[1].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Light_c *)__this_00[3].fields.m_CachedPtr;
  if (pUVar5 != (UnityEngine_Light_c *)0x0) {
    method_00 = (MethodInfo *)0x0;
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if ((char)bVar3 == '\0') {
          return;
        }
        pUVar5 = (UnityEngine_Light_c *)__this_00[3].fields.m_CachedPtr;
        if (pUVar5 != (UnityEngine_Light_c *)0x0) {
          method_00 = (MethodInfo *)0x0;
          pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        if ((char)bVar3 == '\0') {
          pUVar5 = (UnityEngine_Light_c *)__this_00[3].fields.m_CachedPtr;
          if (pUVar5 == (UnityEngine_Light_c *)0x0) goto label_0406a7c6;
          method_00 = (MethodInfo *)0x0;
          pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
          if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_0406a7c6;
          method_00 = (MethodInfo *)0x1;
          UnityEngine_GameObject__SetActive(pUVar4,1,(MethodInfo *)0x0);
        }
        pUVar5 = __this_00[1].klass;
        if (pUVar5 != (UnityEngine_Light_c *)0x0) {
          pUVar1 = __this_00[1].monitor;
          method_00 = (MethodInfo *)0x0;
          value_00 = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)pUVar5,(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            method_00 = (MethodInfo *)0x0;
            UnityEngine_Transform__set_rotation(pUVar1,value_00,(MethodInfo *)0x0);
            pUVar5 = (UnityEngine_Light_c *)0x0;
            if (__this_00[1].klass != (UnityEngine_Light_c *)0x0) {
              pUVar1 = __this_00[1].monitor;
              method_00 = (MethodInfo *)0x0;
              UVar6 = UnityEngine_Transform__get_position
                                ((UnityEngine_Transform_o *)__this_00[1].klass,(MethodInfo *)0x0);
              pUVar5 = __this_00[1].klass;
              if (pUVar5 != (UnityEngine_Light_c *)0x0) {
                method_00 = (MethodInfo *)0x0;
                UVar7 = UnityEngine_Transform__get_forward
                                  ((UnityEngine_Transform_o *)pUVar5,(MethodInfo *)0x0);
                if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                  fStack_30 = UVar6.fields.x;
                  fStack_2c = UVar6.fields.y;
                  value.fields.y = fStack_2c + UVar7.fields.y * -0.1;
                  value.fields.x = fStack_30 + UVar7.fields.x * -0.1;
                  value.fields.z = UVar6.fields.z + UVar7.fields.z * -0.1;
                  UnityEngine_Transform__set_position(pUVar1,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_0406a7c6:
  il2cpp_runtime_helper_022b2c90();
  Weather_BaseWeatherEffect___ctor((Weather_SnowWeatherEffect_o *)pUVar5,method_00);
  return;
}


// Weather.FlashlightWeatherEffect$$LateUpdate
// il2cpp: void Weather_FlashlightWeatherEffect__LateUpdate (Weather_FlashlightWeatherEffect_o* __this, const MethodInfo* method);
// 0x406a640

void Weather_FlashlightWeatherEffect__LateUpdate(Weather_FlashlightWeatherEffect_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Transform_o *__this_00;
  bool_conflict bVar2;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *pUVar4;
  MethodInfo *method_00;
  Weather_SnowWeatherEffect_o *__this_01;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o value_00;
  float fStack_28;
  float fStack_24;
  
  if (g_data_057ac2e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac2e3 = '\x01';
  }
  pUVar1 = (__this->fields)._parent;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  __this_01 = (Weather_SnowWeatherEffect_o *)(__this->fields)._light;
  if (__this_01 != (Weather_SnowWeatherEffect_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if ((char)bVar3 == '\0') {
          return;
        }
        __this_01 = (Weather_SnowWeatherEffect_o *)(__this->fields)._light;
        if (__this_01 != (Weather_SnowWeatherEffect_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        if ((char)bVar3 == '\0') {
          __this_01 = (Weather_SnowWeatherEffect_o *)(__this->fields)._light;
          if (__this_01 == (Weather_SnowWeatherEffect_o *)0x0) goto label_0406a7c6;
          method_00 = (MethodInfo *)0x0;
          pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_0406a7c6;
          method_00 = (MethodInfo *)0x1;
          UnityEngine_GameObject__SetActive(pUVar4,1,(MethodInfo *)0x0);
        }
        __this_01 = (Weather_SnowWeatherEffect_o *)(__this->fields)._parent;
        if (__this_01 != (Weather_SnowWeatherEffect_o *)0x0) {
          pUVar1 = (__this->fields)._transform;
          method_00 = (MethodInfo *)0x0;
          value_00 = UnityEngine_Transform__get_rotation
                               ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            method_00 = (MethodInfo *)0x0;
            UnityEngine_Transform__set_rotation(pUVar1,value_00,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._parent;
            __this_01 = (Weather_SnowWeatherEffect_o *)0x0;
            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
              __this_00 = (__this->fields)._transform;
              method_00 = (MethodInfo *)0x0;
              UVar5 = UnityEngine_Transform__get_position(pUVar1,(MethodInfo *)0x0);
              __this_01 = (Weather_SnowWeatherEffect_o *)(__this->fields)._parent;
              if (__this_01 != (Weather_SnowWeatherEffect_o *)0x0) {
                method_00 = (MethodInfo *)0x0;
                UVar6 = UnityEngine_Transform__get_forward
                                  ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
                if (__this_00 != (UnityEngine_Transform_o *)0x0) {
                  fStack_28 = UVar5.fields.x;
                  fStack_24 = UVar5.fields.y;
                  value.fields.y = fStack_24 + UVar6.fields.y * -0.1;
                  value.fields.x = fStack_28 + UVar6.fields.x * -0.1;
                  value.fields.z = UVar5.fields.z + UVar6.fields.z * -0.1;
                  UnityEngine_Transform__set_position(__this_00,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_0406a7c6:
  il2cpp_runtime_helper_022b2c90();
  Weather_BaseWeatherEffect___ctor(__this_01,method_00);
  return;
}


// Weather.FlashlightWeatherEffect$$.ctor
// il2cpp: void Weather_FlashlightWeatherEffect___ctor (Weather_FlashlightWeatherEffect_o* __this, const MethodInfo* method);
// 0x406a7d0

void Weather_FlashlightWeatherEffect___ctor(Weather_SnowWeatherEffect_o *__this,MethodInfo *method)

{
  Weather_BaseWeatherEffect___ctor(__this,method);
  return;
}


