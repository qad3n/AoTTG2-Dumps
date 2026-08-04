// Type: Map.MapScriptSceneObject
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapScriptSceneObject.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptSceneObject.cs
// --------------------------------

// Map.MapScriptSceneObject$$.ctor
// il2cpp: void Map_MapScriptSceneObject___ctor (Map_MapScriptSceneObject_o* __this, const MethodInfo* method);
// 0x40b4a00

void Map_MapScriptSceneObject___ctor(Map_MapScriptSceneObject_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  Map_MapScriptBaseMaterial_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *method_00;
  
  if (g_data_057ac4ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapScriptComponent);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapScriptComponent);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBaseMaterial);
    il2cpp_runtime_helper_023445d0(&"Default");
    il2cpp_runtime_helper_023445d0(&"Scene");
    g_data_057ac4ea = '\x01';
  }
  if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)&(__this->fields).ScaleZ = **(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields).ScaleZ);
  if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  (__this->fields).CollideMode = *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30);
  il2cpp_runtime_helper_022b4080(&(__this->fields).CollideMode);
  method_00 = "Default";
  (__this->fields).CollideWith = (System_String_o *)"Default";
  il2cpp_runtime_helper_022b4080(&(__this->fields).CollideWith);
  __this_00 = (Map_MapScriptBaseMaterial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBaseMaterial);
  Map_MapScriptBaseMaterial___ctor(__this_00,method_00);
  (__this->fields).PhysicsMaterial = (System_String_o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).PhysicsMaterial,__this_00);
  __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapScriptComponent);
  System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_Map_MapScriptComponent);
  (__this->fields).Material = (Map_MapScriptBaseMaterial_o *)__this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Material,__this_01);
  if (g_data_057ac4e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Unnamed");
    g_data_057ac4e4 = '\x01';
  }
  (__this->fields).Asset = "None";
  il2cpp_runtime_helper_022b4080(&(__this->fields).Asset);
  *(undefined2 *)&(__this->fields).Active = 0x101;
  *(undefined1 *)((long)&(__this->fields).Active + 2) = 1;
  uVar1 = "Unnamed"._4_4_;
  (__this->fields).Visible = (undefined4)"Unnamed";
  (__this->fields).Networked = uVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Visible);
  (__this->fields).RotationY = 1.0;
  (__this->fields).RotationZ = 1.0;
  (__this->fields).ScaleX = 1.0;
  Utility_BaseCSVRow___ctor((Utility_BaseCSVRow_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = "Scene";
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


// Map.MapScriptSceneObject$$DeserializeValue
// il2cpp: Il2CppObject* Map_MapScriptSceneObject__DeserializeValue (Map_MapScriptSceneObject_o* __this, System_Type_o* t, System_String_o* value, const MethodInfo* method);
// 0x40b5fc0

Il2CppObject *
Map_MapScriptSceneObject__DeserializeValue
          (Map_MapScriptSceneObject_o *__this,System_Type_o *t,System_String_o *value,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  char cVar3;
  ushort separator;
  uint16_t uVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  int32_t iVar7;
  int32_t iVar8;
  int32_t iVar9;
  System_Type_o *pSVar10;
  Map_MapScriptBaseMaterial_o *pMVar11;
  Map_MapScriptBasicMaterial_o *__this_00;
  System_String_array *pSVar12;
  undefined8 *puVar13;
  Il2CppObject *extraout_RAX;
  System_RuntimeTypeHandle_Fields SVar14;
  long *plVar15;
  Il2CppObject *pIVar16;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_RuntimeTypeHandle_o SVar17;
  Map_MapScriptBasicMaterial_c *method_00;
  MethodInfo *method_01;
  System_RuntimeTypeHandle_o SVar18;
  long lVar19;
  float fVar20;
  System_RuntimeTypeHandle_Fields SStack_48;
  System_Type_o *pSStack_40;
  undefined8 uStack_38;
  Map_MapScriptSceneObject_o *pMStack_30;
  
  if (g_data_057ac4eb == '\0') {
    pMStack_30 = (Map_MapScriptSceneObject_o *)0x40b5fe6;
    il2cpp_runtime_helper_023445d0(&TypeRef_MapScriptBaseMaterial);
    g_data_057ac4eb = '\x01';
  }
  SVar17.fields.value = TypeRef_MapScriptBaseMaterial.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    pMStack_30 = (Map_MapScriptSceneObject_o *)0x40b6013;
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (Map_MapScriptBasicMaterial_c *)0x0;
  pMStack_30 = (Map_MapScriptSceneObject_o *)0x40b601d;
  SVar18.fields.value = SVar17.fields.value;
  pSVar10 = System_Type__GetTypeFromHandle(SVar17,(MethodInfo *)0x0);
  if (pSVar10 != (System_Type_o *)0x0) {
    pMStack_30 = (Map_MapScriptSceneObject_o *)0x40b6038;
    method_01 = (MethodInfo *)t;
    cVar3 = (*(pSVar10->klass->vtable)._22_IsAssignableFrom.methodPtr)
                      (pSVar10,t,(pSVar10->klass->vtable)._22_IsAssignableFrom.method);
    if (cVar3 != '\0') {
      pMVar11 = Map_MapScriptSceneObject__DeserializeMaterial(value,method_01);
      return (Il2CppObject *)pMVar11;
    }
    if (g_data_057ae8ee == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeRef_BaseCSVObject,t,value,0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
      il2cpp_runtime_helper_023445d0(&TypeRef_Color255);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
      il2cpp_runtime_helper_023445d0(&TypeRef_Vector2);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      il2cpp_runtime_helper_023445d0(&TypeRef_Vector3);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057ae8ee = '\x01';
    }
    SVar17.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_057b9c00 + 0x20);
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = System_Type__GetTypeFromHandle(SVar17,(MethodInfo *)0x0);
    bVar5 = System_Type__op_Equality(t,pSVar10,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (Il2CppObject *)value;
    }
    SVar17.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_057b9bb8 + 0x20);
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = System_Type__GetTypeFromHandle(SVar17,(MethodInfo *)0x0);
    bVar5 = System_Type__op_Equality(t,pSVar10,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      iVar6 = System_Int32__Parse(value,(MethodInfo *)0x0);
      SStack_48.value._0_4_ = (float)iVar6;
      lVar19 = g_data_057b9bb8;
      goto label_0448ea71;
    }
    SVar17.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_057b9be8 + 0x20);
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = System_Type__GetTypeFromHandle(SVar17,(MethodInfo *)0x0);
    bVar5 = System_Type__op_Equality(t,pSVar10,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      fVar20 = System_Single__Parse(value,(MethodInfo *)0x0);
      SStack_48.value._0_4_ = fVar20;
      lVar19 = g_data_057b9be8;
      goto label_0448ea71;
    }
    SVar17.fields.value = (System_RuntimeTypeHandle_Fields)(g_data_057b9b98 + 0x20);
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = System_Type__GetTypeFromHandle(SVar17,(MethodInfo *)0x0);
    bVar5 = System_Type__op_Equality(t,pSVar10,(MethodInfo *)0x0);
    SVar17 = TypeRef_BaseCSVObject;
    if ((char)bVar5 != '\0') {
      iVar6 = System_Int32__Parse(value,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = System_Convert__ToBoolean_3c1c650(iVar6,(MethodInfo *)0x0);
      SStack_48.value._0_1_ = (char)bVar5;
      lVar19 = g_data_057b9b98;
      goto label_0448ea71;
    }
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = System_Type__GetTypeFromHandle(SVar17,(MethodInfo *)0x0);
    if (pSVar10 == (System_Type_o *)0x0) {
label_0448eb80:
      SVar14 = SVar17.fields.value;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      cVar3 = (*(pSVar10->klass->vtable)._22_IsAssignableFrom.methodPtr)
                        (pSVar10,t,(pSVar10->klass->vtable)._22_IsAssignableFrom.method);
      SVar18 = TypeRef_Vector3;
      if (cVar3 != '\0') {
        SVar14.value = (intptr_t)System_Activator__CreateInstance_3ce7ba0(t,(MethodInfo *)0x0);
        if ((System_String_array *)SVar14.value != (System_String_array *)0x0) {
          pIVar2 = (((System_String_array *)SVar14.value)->obj).klass;
          bVar1 = (TypeInfo_BaseCSVObject->_2).naturalAligment;
          if ((bVar1 <= (pIVar2->_2).naturalAligment) &&
             ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseCSVObject)) {
            (*pIVar2->vtable[9].methodPtr)(SVar14.value,value,pIVar2->vtable[9].method);
            return &((System_String_array *)SVar14.value)->obj;
          }
          goto label_0448eb8a;
        }
        goto label_0448eb80;
      }
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = System_Type__GetTypeFromHandle(SVar18,(MethodInfo *)0x0);
      bVar5 = System_Type__op_Equality(t,pSVar10,(MethodInfo *)0x0);
      SVar17 = TypeRef_Vector2;
      if ((char)bVar5 != '\0') {
        uVar4 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)
                          (__this,(__this->klass->vtable)._6_get_StructDelimiter.method);
        SVar17 = SVar18;
        if ((value != (System_String_o *)0x0) &&
           (SVar14.value = (intptr_t)System_String__Split(value,uVar4,0,(MethodInfo *)0x0),
           (System_String_array *)SVar14.value != (System_String_array *)0x0)) {
          if ((int)((System_String_array *)SVar14.value)->max_length != 0) {
            fVar20 = System_Single__Parse(((System_String_array *)SVar14.value)->m_Items[0],(MethodInfo *)0x0)
            ;
            uStack_38 = (System_String_o *)CONCAT44(uStack_38._4_4_,fVar20);
            if (1 < (uint)((System_String_array *)SVar14.value)->max_length) {
              fVar20 = System_Single__Parse
                                 (((System_String_array *)SVar14.value)->m_Items[1],(MethodInfo *)0x0);
              uStack_38 = (System_String_o *)CONCAT44(fVar20,(undefined4)uStack_38);
              if (2 < (uint)((System_String_array *)SVar14.value)->max_length) {
                fVar20 = System_Single__Parse
                                   (((System_String_array *)SVar14.value)->m_Items[2],(MethodInfo *)0x0);
                SStack_48.value = (intptr_t)uStack_38;
                pSStack_40 = (System_Type_o *)CONCAT44(pSStack_40._4_4_,fVar20);
                plVar15 = &TypeInfo_Vector3;
label_0448ea6e:
                lVar19 = *plVar15;
label_0448ea71:
                pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(lVar19,&SStack_48);
                return pIVar16;
              }
            }
          }
          goto label_0448eb85;
        }
        goto label_0448eb80;
      }
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = System_Type__GetTypeFromHandle(SVar17,(MethodInfo *)0x0);
      bVar5 = System_Type__op_Equality(t,pSVar10,(MethodInfo *)0x0);
      SVar18 = TypeRef_Color255;
      if ((char)bVar5 == '\0') {
        if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar10 = System_Type__GetTypeFromHandle(SVar18,(MethodInfo *)0x0);
        bVar5 = System_Type__op_Equality(t,pSVar10,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return (Il2CppObject *)0x0;
        }
        uVar4 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)
                          (__this,(__this->klass->vtable)._6_get_StructDelimiter.method);
        SVar17.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)0;
        if ((value == (System_String_o *)0x0) ||
           (SVar14.value = (intptr_t)System_String__Split(value,uVar4,0,(MethodInfo *)0x0),
           (System_String_array *)SVar14.value == (System_String_array *)0x0)) goto label_0448eb80;
        if (((int)((System_String_array *)SVar14.value)->max_length != 0) &&
           (((iVar6 = System_Int32__Parse(((System_String_array *)SVar14.value)->m_Items[0],(MethodInfo *)0x0)
             , 1 < (uint)((System_String_array *)SVar14.value)->max_length &&
             (iVar7 = System_Int32__Parse(((System_String_array *)SVar14.value)->m_Items[1],(MethodInfo *)0x0)
             , 2 < (uint)((System_String_array *)SVar14.value)->max_length)) &&
            (iVar8 = System_Int32__Parse(((System_String_array *)SVar14.value)->m_Items[2],(MethodInfo *)0x0),
            3 < (uint)((System_String_array *)SVar14.value)->max_length)))) {
          iVar9 = System_Int32__Parse(((System_String_array *)SVar14.value)->m_Items[3],(MethodInfo *)0x0);
          pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
          System_Object___ctor(pIVar16,(MethodInfo *)0x0);
          *(int32_t *)&pIVar16[1].klass = iVar6;
          *(int32_t *)((long)&pIVar16[1].klass + 4) = iVar7;
          *(int32_t *)&pIVar16[1].monitor = iVar8;
          *(int32_t *)((long)&pIVar16[1].monitor + 4) = iVar9;
          return pIVar16;
        }
      }
      else {
        uVar4 = (*(__this->klass->vtable)._6_get_StructDelimiter.methodPtr)
                          (__this,(__this->klass->vtable)._6_get_StructDelimiter.method);
        if ((value == (System_String_o *)0x0) ||
           (SVar14.value = (intptr_t)System_String__Split(value,uVar4,0,(MethodInfo *)0x0),
           (System_String_array *)SVar14.value == (System_String_array *)0x0)) goto label_0448eb80;
        if ((int)((System_String_array *)SVar14.value)->max_length != 0) {
          fVar20 = System_Single__Parse(((System_String_array *)SVar14.value)->m_Items[0],(MethodInfo *)0x0);
          uStack_38 = (System_String_o *)CONCAT44(uStack_38._4_4_,fVar20);
          if (1 < (uint)((System_String_array *)SVar14.value)->max_length) {
            fVar20 = System_Single__Parse(((System_String_array *)SVar14.value)->m_Items[1],(MethodInfo *)0x0)
            ;
            SStack_48.value = CONCAT44(fVar20,(int)uStack_38);
            plVar15 = &TypeInfo_Vector2;
            goto label_0448ea6e;
          }
        }
      }
    }
label_0448eb85:
    il2cpp_runtime_helper_022b2ca0();
label_0448eb8a:
    il2cpp_runtime_helper_022b2fd0(SVar14.value);
    if (g_data_057ae8ef == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Type_List_1_System_Reflection_FieldI);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Type_List_FieldInfo);
      g_data_057ae8ef = '\x01';
    }
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Type_List_FieldInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(__this_01,MethodInfo_Dictionary_2_System_Type_List_1_System_Reflection_FieldI);
    *(System_Collections_Generic_Dictionary_object__object__o **)TypeInfo_BaseCSVObject->static_fields = __this_01;
    pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(TypeInfo_BaseCSVObject->static_fields,__this_01);
    return pIVar16;
  }
  pMStack_30 = (Map_MapScriptSceneObject_o *)0x40b606c;
  il2cpp_runtime_helper_022b2c90();
  SStack_48 = SVar17.fields.value;
  pSStack_40 = t;
  uStack_38 = value;
  pMStack_30 = __this;
  if (g_data_057ac4ec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectShader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBaseMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptDefaultTiledMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptLegacyMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptReflectiveMaterial);
    g_data_057ac4ec = '\x01';
  }
  __this_00 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBaseMaterial);
  Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)__this_00,(MethodInfo *)method_00);
  if (__this_00 != (Map_MapScriptBasicMaterial_o *)0x0) {
    method_00 = (Map_MapScriptBasicMaterial_c *)
                (((Map_MapScriptBaseMaterial_c *)__this_00->klass)->vtable)._4_get_Delimiter.method;
    separator = (*(((Map_MapScriptBaseMaterial_c *)__this_00->klass)->vtable)._4_get_Delimiter.methodPtr)
                          (__this_00);
    if (SVar18.fields.value != 0) {
      method_00 = (Map_MapScriptBasicMaterial_c *)(ulong)separator;
      pMVar11 = (Map_MapScriptBaseMaterial_o *)SVar18.fields.value;
      pSVar12 = System_String__Split((System_String_o *)SVar18.fields.value,separator,0,(MethodInfo *)0x0);
      if (pSVar12 != (System_String_array *)0x0) {
        if ((int)pSVar12->max_length == 0) {
          il2cpp_runtime_helper_022b2ca0();
          if (g_data_057a9c86 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a9c86 = '\x01';
          }
          pMVar11[1].klass = *(Map_MapScriptBaseMaterial_c **)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8);
          Map_MapScriptBaseMaterial___ctor(pMVar11,(MethodInfo *)method_00);
          return extraout_RAX;
        }
        __this = (Map_MapScriptSceneObject_o *)pSVar12->m_Items[0];
        if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = *(Map_MapScriptBasicMaterial_c **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x18);
        bVar5 = System_String__op_Equality
                          ((System_String_o *)__this,(System_String_o *)method_00,(MethodInfo *)0x0);
        t = (System_Type_o *)&TypeInfo_MapObjectShader;
        if ((char)bVar5 == '\0') {
          if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          method_00 = *(Map_MapScriptBasicMaterial_c **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x20);
          bVar5 = System_String__op_Equality
                            ((System_String_o *)__this,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') goto label_040b619d;
          if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          method_00 = *(Map_MapScriptBasicMaterial_c **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x10);
          bVar5 = System_String__op_Equality
                            ((System_String_o *)__this,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            puVar13 = &TypeInfo_MapScriptDefaultTiledMaterial;
            goto label_040b621b;
          }
          if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          method_00 = *(Map_MapScriptBasicMaterial_c **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x28);
          bVar5 = System_String__op_Equality
                            ((System_String_o *)__this,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') goto label_040b6313;
          __this_00 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptReflectiveMaterial);
          if (g_data_057ac4ef == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
            g_data_057ac4ef = '\x01';
          }
          __this = (Map_MapScriptSceneObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
          Utility_Color255___ctor_4388b90((Utility_Color255_o *)__this,(MethodInfo *)0x0);
          __this_00[1].klass = (Map_MapScriptBasicMaterial_c *)__this;
          method_00 = (Map_MapScriptBasicMaterial_c *)__this;
          il2cpp_runtime_helper_022b4080(__this_00 + 1);
          Map_MapScriptBasicMaterial___ctor(__this_00,(MethodInfo *)method_00);
        }
        else {
label_040b619d:
          __this_00 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
          Map_MapScriptBasicMaterial___ctor(__this_00,(MethodInfo *)method_00);
        }
        if (__this_00 != (Map_MapScriptBasicMaterial_o *)0x0) goto label_040b61c0;
      }
    }
  }
  do {
    il2cpp_runtime_helper_022b2c90();
label_040b6313:
    if (*(int *)&(t->klass->_2).field_0x1c == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = Map_MapObjectShader__IsLegacyShader((System_String_o *)__this,(MethodInfo *)method_00);
    if ((char)bVar5 == '\0') break;
    puVar13 = &TypeInfo_MapScriptLegacyMaterial;
label_040b621b:
    __this_00 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_helper_023052d0(*puVar13);
    if (g_data_057a9c86 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a9c86 = '\x01';
    }
    (__this_00->fields).Texture = *(System_String_o **)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8);
    Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)__this_00,(MethodInfo *)method_00);
  } while (__this_00 == (Map_MapScriptBasicMaterial_o *)0x0);
label_040b61c0:
  (*(((Map_MapScriptBaseMaterial_c *)__this_00->klass)->vtable)._9_Deserialize.methodPtr)
            (__this_00,SVar18.fields.value,
             (((Map_MapScriptBaseMaterial_c *)__this_00->klass)->vtable)._9_Deserialize.method);
  return (Il2CppObject *)__this_00;
}


// Map.MapScriptSceneObject$$DeserializeMaterial
// il2cpp: Map_MapScriptBaseMaterial_o* Map_MapScriptSceneObject__DeserializeMaterial (System_String_o* value, const MethodInfo* method);
// 0x40b6070

Map_MapScriptBaseMaterial_o *
Map_MapScriptSceneObject__DeserializeMaterial(System_String_o *value,MethodInfo *method)

{
  ushort separator;
  bool_conflict bVar1;
  Map_MapScriptBasicMaterial_o *__this;
  System_String_array *pSVar2;
  undefined8 *puVar3;
  Map_MapScriptBaseMaterial_o *extraout_RAX;
  Map_MapScriptBaseMaterial_o *__this_00;
  long *unaff_R12;
  Map_MapScriptBasicMaterial_c *unaff_R15;
  
  if (g_data_057ac4ec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectShader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBaseMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptDefaultTiledMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptLegacyMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptReflectiveMaterial);
    g_data_057ac4ec = '\x01';
  }
  __this = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBaseMaterial);
  Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)__this,method);
  if (__this != (Map_MapScriptBasicMaterial_o *)0x0) {
    method = (((Map_MapScriptBaseMaterial_c *)__this->klass)->vtable)._4_get_Delimiter.method;
    separator = (*(((Map_MapScriptBaseMaterial_c *)__this->klass)->vtable)._4_get_Delimiter.methodPtr)(__this)
    ;
    if (value != (System_String_o *)0x0) {
      method = (MethodInfo *)(ulong)separator;
      __this_00 = (Map_MapScriptBaseMaterial_o *)value;
      pSVar2 = System_String__Split(value,separator,0,(MethodInfo *)0x0);
      if (pSVar2 != (System_String_array *)0x0) {
        if ((int)pSVar2->max_length == 0) {
          il2cpp_runtime_helper_022b2ca0();
          if (g_data_057a9c86 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a9c86 = '\x01';
          }
          __this_00[1].klass = *(Map_MapScriptBaseMaterial_c **)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8);
          Map_MapScriptBaseMaterial___ctor(__this_00,method);
          return extraout_RAX;
        }
        unaff_R15 = (Map_MapScriptBasicMaterial_c *)pSVar2->m_Items[0];
        unaff_R12 = &TypeInfo_MapObjectShader;
        if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method = *(MethodInfo **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x18);
        bVar1 = System_String__op_Equality
                          ((System_String_o *)unaff_R15,(System_String_o *)method,(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          method = *(MethodInfo **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x20);
          bVar1 = System_String__op_Equality
                            ((System_String_o *)unaff_R15,(System_String_o *)method,(MethodInfo *)0x0);
          if ((char)bVar1 != '\0') goto label_040b619d;
          if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          method = *(MethodInfo **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x10);
          bVar1 = System_String__op_Equality
                            ((System_String_o *)unaff_R15,(System_String_o *)method,(MethodInfo *)0x0);
          if ((char)bVar1 != '\0') {
            puVar3 = &TypeInfo_MapScriptDefaultTiledMaterial;
            goto label_040b621b;
          }
          if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          method = *(MethodInfo **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x28);
          bVar1 = System_String__op_Equality
                            ((System_String_o *)unaff_R15,(System_String_o *)method,(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') goto label_040b6313;
          __this = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptReflectiveMaterial);
          if (g_data_057ac4ef == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
            g_data_057ac4ef = '\x01';
          }
          unaff_R15 = (Map_MapScriptBasicMaterial_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
          Utility_Color255___ctor_4388b90((Utility_Color255_o *)unaff_R15,(MethodInfo *)0x0);
          __this[1].klass = unaff_R15;
          method = (MethodInfo *)unaff_R15;
          il2cpp_runtime_helper_022b4080(__this + 1);
          Map_MapScriptBasicMaterial___ctor(__this,method);
        }
        else {
label_040b619d:
          __this = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
          Map_MapScriptBasicMaterial___ctor(__this,method);
        }
        if (__this != (Map_MapScriptBasicMaterial_o *)0x0) goto label_040b61c0;
      }
    }
  }
  do {
    il2cpp_runtime_helper_022b2c90();
label_040b6313:
    if (*(int *)(*unaff_R12 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = Map_MapObjectShader__IsLegacyShader((System_String_o *)unaff_R15,method);
    if ((char)bVar1 == '\0') break;
    puVar3 = &TypeInfo_MapScriptLegacyMaterial;
label_040b621b:
    __this = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_helper_023052d0(*puVar3);
    if (g_data_057a9c86 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a9c86 = '\x01';
    }
    (__this->fields).Texture = *(System_String_o **)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8);
    Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)__this,method);
  } while (__this == (Map_MapScriptBasicMaterial_o *)0x0);
label_040b61c0:
  (*(((Map_MapScriptBaseMaterial_c *)__this->klass)->vtable)._9_Deserialize.methodPtr)
            (__this,value,(((Map_MapScriptBaseMaterial_c *)__this->klass)->vtable)._9_Deserialize.method);
  return (Map_MapScriptBaseMaterial_o *)__this;
}


