// Type: Map.MapLight
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapLight.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapLight.cs
// --------------------------------

// Map.MapLight$$.ctor
// il2cpp: void Map_MapLight___ctor (Map_MapLight_o* __this, UnityEngine_Light_o* light, bool isDaylight, const MethodInfo* method);
// 0x40a47e0

void Map_MapLight___ctor(Map_MapLight_o *__this,UnityEngine_Light_o *light,bool_conflict isDaylight,
                        MethodInfo *method)

{
  int iVar1;
  UnityEngine_Behaviour_o *pUVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_MonoBehaviour_o *__this_00;
  bool_conflict bVar4;
  UnityEngine_Transform_o *pUVar5;
  Il2CppObject *pIVar6;
  Events_OnPreLoadScene_o *value;
  Map_MapScriptBasicMaterial_o *__this_01;
  Utility_Color255_o *__this_02;
  UnityEngine_Light_o *pUVar7;
  MethodInfo *method_00;
  Map_MapLight_o *__this_03;
  UnityEngine_Light_o *x;
  long lVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  float fStack_70;
  float fStack_6c;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_03 = (Map_MapLight_o *)&__this->fields;
  (__this->fields).Light = light;
  pUVar7 = light;
  il2cpp_runtime_helper_022b4080();
  if (light != (UnityEngine_Light_o *)0x0) {
    fVar9 = UnityEngine_Light__get_intensity(light,(MethodInfo *)0x0);
    (__this->fields).MaxIntensity = fVar9;
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)light,(MethodInfo *)0x0);
    (__this->fields)._transform = pUVar5;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._transform,pUVar5);
    *(char *)&(__this->fields)._isDaylight = (char)isDaylight;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac495 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ac495 = '\x01';
  }
  pUVar5 = (__this_03->fields)._transform;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  x = (__this_03->fields).Light;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if ((char)(__this_03->fields)._isDaylight != '\0') {
    return;
  }
  if (pUVar7 != (UnityEngine_Light_o *)0x0) {
    UVar11 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pUVar7,(MethodInfo *)0x0);
    pUVar5 = (__this_03->fields)._transform;
    x = (UnityEngine_Light_o *)0x0;
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      UVar12 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
      if (g_data_057a68cb == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a68cb = '\x01';
      }
      fStack_70 = UVar11.fields.x;
      fStack_6c = UVar11.fields.y;
      fStack_70 = fStack_70 - UVar12.fields.x;
      fStack_6c = fStack_6c - UVar12.fields.y;
      fVar9 = UVar11.fields.z - UVar12.fields.z;
      x = TypeInfo_Math;
      if (*(int *)((long)&(TypeInfo_Math + 6)[1].klass + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar9 = fVar9 * fVar9 + fStack_6c * fStack_6c + fStack_70 * fStack_70;
      if (fVar9 < 0.0) {
        fVar9 = sqrtf(fVar9);
      }
      else {
        fVar9 = SQRT(fVar9);
      }
      lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
      if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x80), lVar8 != 0)) {
        iVar1 = *(int *)(lVar8 + 0x14);
        if ((0 < iVar1) && (fVar10 = (float)iVar1, fVar9 < fVar10)) {
          fVar10 = 2.0 - (fVar9 + fVar9) / fVar10;
          fVar9 = 1.0;
          if (fVar10 <= 1.0) {
            fVar9 = fVar10;
          }
          Map_MapLight__UpdateIntensity
                    (__this_03,
                     (float)(-(uint)(0.0 <= fVar10) & (uint)fVar9) * (__this_03->fields).MaxIntensity,
                     method_00);
          return;
        }
        pUVar7 = (__this_03->fields).Light;
        x = (UnityEngine_Light_o *)0x0;
        if (pUVar7 != (UnityEngine_Light_o *)0x0) {
          bVar4 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pUVar7,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            return;
          }
          pUVar7 = (__this_03->fields).Light;
          x = (UnityEngine_Light_o *)0x0;
          if (pUVar7 != (UnityEngine_Light_o *)0x0) {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar7,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  fVar9 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UnityEngine_Behaviour_o *)(x->fields).m_CachedPtr;
  if (pUVar2 != (UnityEngine_Behaviour_o *)0x0) {
    bVar4 = UnityEngine_Behaviour__get_enabled(pUVar2,(MethodInfo *)0x0);
    if ((fVar9 != 0.0) || (NAN(fVar9))) {
      if ((char)bVar4 == '\0') {
        pUVar2 = (UnityEngine_Behaviour_o *)(x->fields).m_CachedPtr;
        if (pUVar2 == (UnityEngine_Behaviour_o *)0x0) goto label_040a4b41;
        UnityEngine_Behaviour__set_enabled(pUVar2,1,(MethodInfo *)0x0);
      }
      pUVar7 = (UnityEngine_Light_o *)(x->fields).m_CachedPtr;
      if (pUVar7 != (UnityEngine_Light_o *)0x0) {
        fVar10 = UnityEngine_Light__get_intensity(pUVar7,(MethodInfo *)0x0);
        if ((fVar10 == fVar9) && (!NAN(fVar10) && !NAN(fVar9))) {
          return;
        }
        pUVar7 = (UnityEngine_Light_o *)(x->fields).m_CachedPtr;
        if (pUVar7 != (UnityEngine_Light_o *)0x0) {
          UnityEngine_Light__set_intensity(pUVar7,fVar9,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      if ((char)bVar4 == '\0') {
        return;
      }
      pUVar2 = (UnityEngine_Behaviour_o *)(x->fields).m_CachedPtr;
      if (pUVar2 != (UnityEngine_Behaviour_o *)0x0) {
        UnityEngine_Behaviour__set_enabled(pUVar2,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_040a4b41:
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac496 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac496 = '\x01';
  }
  pUVar3 = *(UnityEngine_Object_o **)(lVar8 + 0x20);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pUVar3 = *(UnityEngine_Object_o **)(lVar8 + 0x10);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (*(UnityEngine_Behaviour_o **)(lVar8 + 0x10) == (UnityEngine_Behaviour_o *)0x0) {
label_040a4c0b:
        lVar8 = 0;
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac497 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ac497 = '\x01';
        }
        pUVar3 = *(UnityEngine_Object_o **)(lVar8 + 0x20);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          pUVar3 = *(UnityEngine_Object_o **)(lVar8 + 0x10);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            if (*(UnityEngine_Behaviour_o **)(lVar8 + 0x10) != (UnityEngine_Behaviour_o *)0x0) {
              UnityEngine_Behaviour__set_enabled
                        (*(UnityEngine_Behaviour_o **)(lVar8 + 0x10),1,(MethodInfo *)0x0);
              return;
            }
            il2cpp_runtime_helper_022b2c90();
            if (g_data_057ac498 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
              il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
              il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBasicMaterial);
              il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
              il2cpp_runtime_helper_023445d0(&MethodInfo_MapLoader_CreateSingleton_MapLoader);
              il2cpp_runtime_helper_023445d0(&"Transparent");
              g_data_057ac498 = '\x01';
            }
            if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar6 = Utility_SingletonFactory__CreateSingleton_object_
                               (*(Il2CppObject **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60),MethodInfo_MapLoader_CreateSingleton_MapLoader);
            lVar8 = *(long *)(TypeInfo_MapLoader + 0xb8);
            *(Il2CppObject **)(lVar8 + 0x60) = pIVar6;
            il2cpp_runtime_helper_022b4080(lVar8 + 0x60);
            value = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
            Events_OnPreLoadScene___ctor();
            Events_EventManager__add_OnPreLoadScene(value,(MethodInfo *)0x0);
            __this_01 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
            Map_MapScriptBasicMaterial___ctor(__this_01,(MethodInfo *)0x0);
            if (__this_01 != (Map_MapScriptBasicMaterial_o *)0x0) {
              (__this_01->fields).Shader = "Transparent";
              il2cpp_runtime_helper_022b4080(&__this_01->fields);
              __this_02 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
              Utility_Color255___ctor(__this_02,0x7e,0xff,0xff,0x50,(MethodInfo *)0x0);
              (__this_01->fields).Color = __this_02;
              il2cpp_runtime_helper_022b4080(&(__this_01->fields).Color,__this_02);
              lVar8 = *(long *)(TypeInfo_MapLoader + 0xb8);
              *(Map_MapScriptBasicMaterial_o **)(lVar8 + 0x70) = __this_01;
              il2cpp_runtime_helper_022b4080(lVar8 + 0x70,__this_01);
              return;
            }
            il2cpp_runtime_helper_022b2c90();
            if (g_data_057ac499 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
              g_data_057ac499 = '\x01';
              iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_runtime_helper_02337ed0();
              __this_00 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60);
            }
            else {
              __this_00 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60);
            }
            if (__this_00 == (UnityEngine_MonoBehaviour_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057ac49a == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
                g_data_057ac49a = '\x01';
              }
              if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x68) =
                   *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x68) + 1;
              return;
            }
            UnityEngine_MonoBehaviour__StopAllCoroutines(__this_00,(MethodInfo *)0x0);
            lVar8 = *(long *)(TypeInfo_MapLoader + 0xb8);
            *(undefined1 *)(lVar8 + 0x80) = 0;
            *(undefined8 *)(lVar8 + 0x88) = 0;
            il2cpp_runtime_helper_022b4080(lVar8 + 0x88,0);
            return;
          }
        }
        return;
      }
      bVar4 = UnityEngine_Behaviour__get_enabled
                        (*(UnityEngine_Behaviour_o **)(lVar8 + 0x10),(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(UnityEngine_Behaviour_o **)(lVar8 + 0x10) == (UnityEngine_Behaviour_o *)0x0) goto label_040a4c0b;
        UnityEngine_Behaviour__set_enabled(*(UnityEngine_Behaviour_o **)(lVar8 + 0x10),0,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Map.MapLight$$UpdateCull
// il2cpp: void Map_MapLight__UpdateCull (Map_MapLight_o* __this, UnityEngine_Transform_o* cameraPosition, const MethodInfo* method);
// 0x40a4840

void Map_MapLight__UpdateCull
               (Map_MapLight_o *__this,UnityEngine_Transform_o *cameraPosition,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Light_o *pUVar3;
  UnityEngine_Behaviour_o *pUVar4;
  UnityEngine_Object_o *pUVar5;
  UnityEngine_MonoBehaviour_o *__this_00;
  bool_conflict bVar6;
  Il2CppObject *pIVar7;
  Events_OnPreLoadScene_o *value;
  Map_MapScriptBasicMaterial_o *__this_01;
  Utility_Color255_o *__this_02;
  MethodInfo *method_00;
  UnityEngine_Light_o *pUVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  float local_58;
  float fStack_54;
  
  if (g_data_057ac495 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ac495 = '\x01';
  }
  pUVar2 = (__this->fields)._transform;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  pUVar8 = (__this->fields).Light;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  if ((char)(__this->fields)._isDaylight != '\0') {
    return;
  }
  if (cameraPosition != (UnityEngine_Transform_o *)0x0) {
    UVar12 = UnityEngine_Transform__get_position(cameraPosition,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._transform;
    pUVar8 = (UnityEngine_Light_o *)0x0;
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      UVar13 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
      if (g_data_057a68cb == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a68cb = '\x01';
      }
      local_58 = UVar12.fields.x;
      fStack_54 = UVar12.fields.y;
      local_58 = local_58 - UVar13.fields.x;
      fStack_54 = fStack_54 - UVar13.fields.y;
      fVar10 = UVar12.fields.z - UVar13.fields.z;
      pUVar8 = TypeInfo_Math;
      if (*(int *)((long)&(TypeInfo_Math + 6)[1].klass + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar10 = fVar10 * fVar10 + fStack_54 * fStack_54 + local_58 * local_58;
      if (fVar10 < 0.0) {
        fVar10 = sqrtf(fVar10);
      }
      else {
        fVar10 = SQRT(fVar10);
      }
      lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
      if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x80), lVar9 != 0)) {
        iVar1 = *(int *)(lVar9 + 0x14);
        if ((0 < iVar1) && (fVar11 = (float)iVar1, fVar10 < fVar11)) {
          fVar11 = 2.0 - (fVar10 + fVar10) / fVar11;
          fVar10 = 1.0;
          if (fVar11 <= 1.0) {
            fVar10 = fVar11;
          }
          Map_MapLight__UpdateIntensity
                    (__this,(float)(-(uint)(0.0 <= fVar11) & (uint)fVar10) * (__this->fields).MaxIntensity,
                     method_00);
          return;
        }
        pUVar3 = (__this->fields).Light;
        pUVar8 = (UnityEngine_Light_o *)0x0;
        if (pUVar3 != (UnityEngine_Light_o *)0x0) {
          bVar6 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pUVar3,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            return;
          }
          pUVar3 = (__this->fields).Light;
          pUVar8 = (UnityEngine_Light_o *)0x0;
          if (pUVar3 != (UnityEngine_Light_o *)0x0) {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar3,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  fVar10 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar4 = (UnityEngine_Behaviour_o *)(pUVar8->fields).m_CachedPtr;
  if (pUVar4 != (UnityEngine_Behaviour_o *)0x0) {
    bVar6 = UnityEngine_Behaviour__get_enabled(pUVar4,(MethodInfo *)0x0);
    if ((fVar10 != 0.0) || (NAN(fVar10))) {
      if ((char)bVar6 == '\0') {
        pUVar4 = (UnityEngine_Behaviour_o *)(pUVar8->fields).m_CachedPtr;
        if (pUVar4 == (UnityEngine_Behaviour_o *)0x0) goto label_040a4b41;
        UnityEngine_Behaviour__set_enabled(pUVar4,1,(MethodInfo *)0x0);
      }
      pUVar3 = (UnityEngine_Light_o *)(pUVar8->fields).m_CachedPtr;
      if (pUVar3 != (UnityEngine_Light_o *)0x0) {
        fVar11 = UnityEngine_Light__get_intensity(pUVar3,(MethodInfo *)0x0);
        if ((fVar11 == fVar10) && (!NAN(fVar11) && !NAN(fVar10))) {
          return;
        }
        pUVar8 = (UnityEngine_Light_o *)(pUVar8->fields).m_CachedPtr;
        if (pUVar8 != (UnityEngine_Light_o *)0x0) {
          UnityEngine_Light__set_intensity(pUVar8,fVar10,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      if ((char)bVar6 == '\0') {
        return;
      }
      pUVar4 = (UnityEngine_Behaviour_o *)(pUVar8->fields).m_CachedPtr;
      if (pUVar4 != (UnityEngine_Behaviour_o *)0x0) {
        UnityEngine_Behaviour__set_enabled(pUVar4,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_040a4b41:
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac496 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac496 = '\x01';
  }
  pUVar5 = *(UnityEngine_Object_o **)(lVar9 + 0x20);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pUVar5 = *(UnityEngine_Object_o **)(lVar9 + 0x10);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      if (*(UnityEngine_Behaviour_o **)(lVar9 + 0x10) == (UnityEngine_Behaviour_o *)0x0) {
label_040a4c0b:
        lVar9 = 0;
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac497 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ac497 = '\x01';
        }
        pUVar5 = *(UnityEngine_Object_o **)(lVar9 + 0x20);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar6 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          pUVar5 = *(UnityEngine_Object_o **)(lVar9 + 0x10);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar6 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            if (*(UnityEngine_Behaviour_o **)(lVar9 + 0x10) != (UnityEngine_Behaviour_o *)0x0) {
              UnityEngine_Behaviour__set_enabled
                        (*(UnityEngine_Behaviour_o **)(lVar9 + 0x10),1,(MethodInfo *)0x0);
              return;
            }
            il2cpp_runtime_helper_022b2c90();
            if (g_data_057ac498 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
              il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
              il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBasicMaterial);
              il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
              il2cpp_runtime_helper_023445d0(&MethodInfo_MapLoader_CreateSingleton_MapLoader);
              il2cpp_runtime_helper_023445d0(&"Transparent");
              g_data_057ac498 = '\x01';
            }
            if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar7 = Utility_SingletonFactory__CreateSingleton_object_
                               (*(Il2CppObject **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60),MethodInfo_MapLoader_CreateSingleton_MapLoader);
            lVar9 = *(long *)(TypeInfo_MapLoader + 0xb8);
            *(Il2CppObject **)(lVar9 + 0x60) = pIVar7;
            il2cpp_runtime_helper_022b4080(lVar9 + 0x60);
            value = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
            Events_OnPreLoadScene___ctor();
            Events_EventManager__add_OnPreLoadScene(value,(MethodInfo *)0x0);
            __this_01 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
            Map_MapScriptBasicMaterial___ctor(__this_01,(MethodInfo *)0x0);
            if (__this_01 != (Map_MapScriptBasicMaterial_o *)0x0) {
              (__this_01->fields).Shader = "Transparent";
              il2cpp_runtime_helper_022b4080(&__this_01->fields);
              __this_02 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
              Utility_Color255___ctor(__this_02,0x7e,0xff,0xff,0x50,(MethodInfo *)0x0);
              (__this_01->fields).Color = __this_02;
              il2cpp_runtime_helper_022b4080(&(__this_01->fields).Color,__this_02);
              lVar9 = *(long *)(TypeInfo_MapLoader + 0xb8);
              *(Map_MapScriptBasicMaterial_o **)(lVar9 + 0x70) = __this_01;
              il2cpp_runtime_helper_022b4080(lVar9 + 0x70,__this_01);
              return;
            }
            il2cpp_runtime_helper_022b2c90();
            if (g_data_057ac499 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
              g_data_057ac499 = '\x01';
              iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_runtime_helper_02337ed0();
              __this_00 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60);
            }
            else {
              __this_00 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60);
            }
            if (__this_00 == (UnityEngine_MonoBehaviour_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057ac49a == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
                g_data_057ac49a = '\x01';
              }
              if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x68) =
                   *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x68) + 1;
              return;
            }
            UnityEngine_MonoBehaviour__StopAllCoroutines(__this_00,(MethodInfo *)0x0);
            lVar9 = *(long *)(TypeInfo_MapLoader + 0xb8);
            *(undefined1 *)(lVar9 + 0x80) = 0;
            *(undefined8 *)(lVar9 + 0x88) = 0;
            il2cpp_runtime_helper_022b4080(lVar9 + 0x88,0);
            return;
          }
        }
        return;
      }
      bVar6 = UnityEngine_Behaviour__get_enabled
                        (*(UnityEngine_Behaviour_o **)(lVar9 + 0x10),(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (*(UnityEngine_Behaviour_o **)(lVar9 + 0x10) == (UnityEngine_Behaviour_o *)0x0) goto label_040a4c0b;
        UnityEngine_Behaviour__set_enabled(*(UnityEngine_Behaviour_o **)(lVar9 + 0x10),0,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Map.MapLight$$MinimapDisableLight
// il2cpp: bool Map_MapLight__MinimapDisableLight (Map_MapLight_o* __this, const MethodInfo* method);
// 0x40a4b50

bool_conflict Map_MapLight__MinimapDisableLight(Map_MapLight_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *x;
  UnityEngine_Light_o *pUVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_MonoBehaviour_o *__this_00;
  bool_conflict bVar3;
  bool_conflict extraout_EAX;
  int iVar4;
  Il2CppObject *pIVar5;
  Events_OnPreLoadScene_o *value;
  Map_MapScriptBasicMaterial_o *__this_01;
  Utility_Color255_o *__this_02;
  long lVar6;
  bool_conflict bVar7;
  
  if (g_data_057ac496 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac496 = '\x01';
  }
  x = (__this->fields)._transform;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = 0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar1 = (__this->fields).Light;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = 0;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pUVar1 = (__this->fields).Light;
      if (pUVar1 == (UnityEngine_Light_o *)0x0) {
label_040a4c0b:
        lVar6 = 0;
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac497 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ac497 = '\x01';
        }
        pUVar2 = *(UnityEngine_Object_o **)(lVar6 + 0x20);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          pUVar2 = *(UnityEngine_Object_o **)(lVar6 + 0x10);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            if (*(UnityEngine_Behaviour_o **)(lVar6 + 0x10) != (UnityEngine_Behaviour_o *)0x0) {
              UnityEngine_Behaviour__set_enabled
                        (*(UnityEngine_Behaviour_o **)(lVar6 + 0x10),1,(MethodInfo *)0x0);
              return extraout_EAX;
            }
            il2cpp_runtime_helper_022b2c90();
            if (g_data_057ac498 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
              il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
              il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBasicMaterial);
              il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
              il2cpp_runtime_helper_023445d0(&MethodInfo_MapLoader_CreateSingleton_MapLoader);
              il2cpp_runtime_helper_023445d0(&"Transparent");
              g_data_057ac498 = '\x01';
            }
            if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar5 = Utility_SingletonFactory__CreateSingleton_object_
                               (*(Il2CppObject **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60),MethodInfo_MapLoader_CreateSingleton_MapLoader);
            lVar6 = *(long *)(TypeInfo_MapLoader + 0xb8);
            *(Il2CppObject **)(lVar6 + 0x60) = pIVar5;
            il2cpp_runtime_helper_022b4080(lVar6 + 0x60);
            value = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
            Events_OnPreLoadScene___ctor();
            Events_EventManager__add_OnPreLoadScene(value,(MethodInfo *)0x0);
            __this_01 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
            Map_MapScriptBasicMaterial___ctor(__this_01,(MethodInfo *)0x0);
            if (__this_01 == (Map_MapScriptBasicMaterial_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057ac499 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
                g_data_057ac499 = '\x01';
                iVar4 = *(int *)(TypeInfo_MapLoader + 0xe4);
              }
              else {
                iVar4 = *(int *)(TypeInfo_MapLoader + 0xe4);
              }
              if (iVar4 == 0) {
                il2cpp_runtime_helper_02337ed0();
                __this_00 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60);
              }
              else {
                __this_00 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60);
              }
              if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
                UnityEngine_MonoBehaviour__StopAllCoroutines(__this_00,(MethodInfo *)0x0);
                lVar6 = *(long *)(TypeInfo_MapLoader + 0xb8);
                *(undefined1 *)(lVar6 + 0x80) = 0;
                *(undefined8 *)(lVar6 + 0x88) = 0;
                bVar3 = il2cpp_runtime_helper_022b4080(lVar6 + 0x88,0);
                return bVar3;
              }
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057ac49a == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
                g_data_057ac49a = '\x01';
              }
              if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              iVar4 = *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x68) + 1;
              *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x68) = iVar4;
              return iVar4;
            }
            (__this_01->fields).Shader = "Transparent";
            il2cpp_runtime_helper_022b4080(&__this_01->fields);
            __this_02 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
            Utility_Color255___ctor(__this_02,0x7e,0xff,0xff,0x50,(MethodInfo *)0x0);
            (__this_01->fields).Color = __this_02;
            il2cpp_runtime_helper_022b4080(&(__this_01->fields).Color,__this_02);
            lVar6 = *(long *)(TypeInfo_MapLoader + 0xb8);
            *(Map_MapScriptBasicMaterial_o **)(lVar6 + 0x70) = __this_01;
            bVar3 = il2cpp_runtime_helper_022b4080(lVar6 + 0x70,__this_01);
            return bVar3;
          }
        }
        return bVar3;
      }
      bVar7 = 0;
      bVar3 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pUVar1,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pUVar1 = (__this->fields).Light;
        if (pUVar1 == (UnityEngine_Light_o *)0x0) goto label_040a4c0b;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1,0,(MethodInfo *)0x0);
        bVar7 = 1;
      }
    }
  }
  return bVar7;
}


// Map.MapLight$$MinimapEnableLight
// il2cpp: void Map_MapLight__MinimapEnableLight (Map_MapLight_o* __this, const MethodInfo* method);
// 0x40a4c10

void Map_MapLight__MinimapEnableLight(Map_MapLight_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Transform_o *x;
  UnityEngine_Light_o *pUVar2;
  long lVar3;
  UnityEngine_MonoBehaviour_o *__this_00;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  Events_OnPreLoadScene_o *value;
  Map_MapScriptBasicMaterial_o *__this_01;
  Utility_Color255_o *__this_02;
  
  if (g_data_057ac497 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac497 = '\x01';
  }
  x = (__this->fields)._transform;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pUVar2 = (__this->fields).Light;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      pUVar2 = (__this->fields).Light;
      if (pUVar2 != (UnityEngine_Light_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,1,(MethodInfo *)0x0);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac498 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBasicMaterial);
        il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
        il2cpp_runtime_helper_023445d0(&MethodInfo_MapLoader_CreateSingleton_MapLoader);
        il2cpp_runtime_helper_023445d0(&"Transparent");
        g_data_057ac498 = '\x01';
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar5 = Utility_SingletonFactory__CreateSingleton_object_
                         (*(Il2CppObject **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60),MethodInfo_MapLoader_CreateSingleton_MapLoader);
      lVar3 = *(long *)(TypeInfo_MapLoader + 0xb8);
      *(Il2CppObject **)(lVar3 + 0x60) = pIVar5;
      il2cpp_runtime_helper_022b4080(lVar3 + 0x60);
      value = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
      Events_OnPreLoadScene___ctor();
      Events_EventManager__add_OnPreLoadScene(value,(MethodInfo *)0x0);
      __this_01 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
      Map_MapScriptBasicMaterial___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 == (Map_MapScriptBasicMaterial_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac499 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
          g_data_057ac499 = '\x01';
          iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_00 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60);
        }
        else {
          __this_00 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60);
        }
        if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
          UnityEngine_MonoBehaviour__StopAllCoroutines(__this_00,(MethodInfo *)0x0);
          lVar3 = *(long *)(TypeInfo_MapLoader + 0xb8);
          *(undefined1 *)(lVar3 + 0x80) = 0;
          *(undefined8 *)(lVar3 + 0x88) = 0;
          il2cpp_runtime_helper_022b4080(lVar3 + 0x88,0);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac49a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
          g_data_057ac49a = '\x01';
        }
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x68) = *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x68) + 1;
        return;
      }
      (__this_01->fields).Shader = "Transparent";
      il2cpp_runtime_helper_022b4080(&__this_01->fields);
      __this_02 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
      Utility_Color255___ctor(__this_02,0x7e,0xff,0xff,0x50,(MethodInfo *)0x0);
      (__this_01->fields).Color = __this_02;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).Color,__this_02);
      lVar3 = *(long *)(TypeInfo_MapLoader + 0xb8);
      *(Map_MapScriptBasicMaterial_o **)(lVar3 + 0x70) = __this_01;
      il2cpp_runtime_helper_022b4080(lVar3 + 0x70,__this_01);
      return;
    }
  }
  return;
}


// Map.MapLight$$UpdateIntensity
// il2cpp: void Map_MapLight__UpdateIntensity (Map_MapLight_o* __this, float intensity, const MethodInfo* method);
// 0x40a4aa0

void Map_MapLight__UpdateIntensity(Map_MapLight_o *__this,float intensity,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Light_o *pUVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_MonoBehaviour_o *__this_00;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  Events_OnPreLoadScene_o *value;
  Map_MapScriptBasicMaterial_o *__this_01;
  Utility_Color255_o *__this_02;
  long lVar6;
  float fVar7;
  
  pUVar2 = (__this->fields).Light;
  if (pUVar2 != (UnityEngine_Light_o *)0x0) {
    bVar4 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pUVar2,(MethodInfo *)0x0);
    if ((intensity != 0.0) || (NAN(intensity))) {
      if ((char)bVar4 == '\0') {
        pUVar2 = (__this->fields).Light;
        if (pUVar2 == (UnityEngine_Light_o *)0x0) goto label_040a4b41;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,1,(MethodInfo *)0x0);
      }
      pUVar2 = (__this->fields).Light;
      if (pUVar2 != (UnityEngine_Light_o *)0x0) {
        fVar7 = UnityEngine_Light__get_intensity(pUVar2,(MethodInfo *)0x0);
        if ((fVar7 == intensity) && (!NAN(fVar7) && !NAN(intensity))) {
          return;
        }
        pUVar2 = (__this->fields).Light;
        if (pUVar2 != (UnityEngine_Light_o *)0x0) {
          UnityEngine_Light__set_intensity(pUVar2,intensity,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      if ((char)bVar4 == '\0') {
        return;
      }
      pUVar2 = (__this->fields).Light;
      if (pUVar2 != (UnityEngine_Light_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar2,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_040a4b41:
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac496 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac496 = '\x01';
  }
  pUVar3 = *(UnityEngine_Object_o **)(lVar6 + 0x20);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pUVar3 = *(UnityEngine_Object_o **)(lVar6 + 0x10);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (*(UnityEngine_Behaviour_o **)(lVar6 + 0x10) == (UnityEngine_Behaviour_o *)0x0) {
label_040a4c0b:
        lVar6 = 0;
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ac497 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ac497 = '\x01';
        }
        pUVar3 = *(UnityEngine_Object_o **)(lVar6 + 0x20);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          pUVar3 = *(UnityEngine_Object_o **)(lVar6 + 0x10);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            if (*(UnityEngine_Behaviour_o **)(lVar6 + 0x10) != (UnityEngine_Behaviour_o *)0x0) {
              UnityEngine_Behaviour__set_enabled
                        (*(UnityEngine_Behaviour_o **)(lVar6 + 0x10),1,(MethodInfo *)0x0);
              return;
            }
            il2cpp_runtime_helper_022b2c90();
            if (g_data_057ac498 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
              il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
              il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBasicMaterial);
              il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
              il2cpp_runtime_helper_023445d0(&MethodInfo_MapLoader_CreateSingleton_MapLoader);
              il2cpp_runtime_helper_023445d0(&"Transparent");
              g_data_057ac498 = '\x01';
            }
            if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar5 = Utility_SingletonFactory__CreateSingleton_object_
                               (*(Il2CppObject **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60),MethodInfo_MapLoader_CreateSingleton_MapLoader);
            lVar6 = *(long *)(TypeInfo_MapLoader + 0xb8);
            *(Il2CppObject **)(lVar6 + 0x60) = pIVar5;
            il2cpp_runtime_helper_022b4080(lVar6 + 0x60);
            value = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
            Events_OnPreLoadScene___ctor();
            Events_EventManager__add_OnPreLoadScene(value,(MethodInfo *)0x0);
            __this_01 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
            Map_MapScriptBasicMaterial___ctor(__this_01,(MethodInfo *)0x0);
            if (__this_01 != (Map_MapScriptBasicMaterial_o *)0x0) {
              (__this_01->fields).Shader = "Transparent";
              il2cpp_runtime_helper_022b4080(&__this_01->fields);
              __this_02 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
              Utility_Color255___ctor(__this_02,0x7e,0xff,0xff,0x50,(MethodInfo *)0x0);
              (__this_01->fields).Color = __this_02;
              il2cpp_runtime_helper_022b4080(&(__this_01->fields).Color,__this_02);
              lVar6 = *(long *)(TypeInfo_MapLoader + 0xb8);
              *(Map_MapScriptBasicMaterial_o **)(lVar6 + 0x70) = __this_01;
              il2cpp_runtime_helper_022b4080(lVar6 + 0x70,__this_01);
              return;
            }
            il2cpp_runtime_helper_022b2c90();
            if (g_data_057ac499 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
              g_data_057ac499 = '\x01';
              iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_runtime_helper_02337ed0();
              __this_00 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60);
            }
            else {
              __this_00 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60);
            }
            if (__this_00 == (UnityEngine_MonoBehaviour_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057ac49a == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
                g_data_057ac49a = '\x01';
              }
              if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x68) =
                   *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x68) + 1;
              return;
            }
            UnityEngine_MonoBehaviour__StopAllCoroutines(__this_00,(MethodInfo *)0x0);
            lVar6 = *(long *)(TypeInfo_MapLoader + 0xb8);
            *(undefined1 *)(lVar6 + 0x80) = 0;
            *(undefined8 *)(lVar6 + 0x88) = 0;
            il2cpp_runtime_helper_022b4080(lVar6 + 0x88,0);
            return;
          }
        }
        return;
      }
      bVar4 = UnityEngine_Behaviour__get_enabled
                        (*(UnityEngine_Behaviour_o **)(lVar6 + 0x10),(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(UnityEngine_Behaviour_o **)(lVar6 + 0x10) == (UnityEngine_Behaviour_o *)0x0) goto label_040a4c0b;
        UnityEngine_Behaviour__set_enabled(*(UnityEngine_Behaviour_o **)(lVar6 + 0x10),0,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


