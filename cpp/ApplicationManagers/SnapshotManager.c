// Type: ApplicationManagers.SnapshotManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/SnapshotManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/SnapshotManager.cs
// --------------------------------

// ApplicationManagers.SnapshotManager$$Init
// il2cpp: void ApplicationManagers_SnapshotManager__Init (const MethodInfo* method);
// 0x44c0830

void ApplicationManagers_SnapshotManager__Init(MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  
  if (g_data_057aea92 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SnapshotManager_CreateSingleton_SnapshotManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    g_data_057aea92 = '\x01';
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar2 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_SnapshotManager + 0xb8),MethodInfo_SnapshotManager_CreateSingleton_SnapshotManager);
  **(undefined8 **)(TypeInfo_SnapshotManager + 0xb8) = pIVar2;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_SnapshotManager + 0xb8));
  if (g_data_057aea94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    g_data_057aea94 = '\x01';
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x10),(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_IO_Directory__Delete
              (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x10),1,(MethodInfo *)0x0);
  }
  return;
}


// ApplicationManagers.SnapshotManager$$OnApplicationQuit
// il2cpp: void ApplicationManagers_SnapshotManager__OnApplicationQuit (ApplicationManagers_SnapshotManager_o* __this, const MethodInfo* method);
// 0x44c0a20

void ApplicationManagers_SnapshotManager__OnApplicationQuit
               (ApplicationManagers_SnapshotManager_o *__this,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  
  if (g_data_057aea93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    g_data_057aea93 = '\x01';
    iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aea94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    g_data_057aea94 = '\x01';
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x10),(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_IO_Directory__Delete
              (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x10),1,(MethodInfo *)0x0);
  }
  return;
}


// ApplicationManagers.SnapshotManager$$ClearTemp
// il2cpp: void ApplicationManagers_SnapshotManager__ClearTemp (const MethodInfo* method);
// 0x44c08b0

void ApplicationManagers_SnapshotManager__ClearTemp(MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057aea94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    g_data_057aea94 = '\x01';
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x10),(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_IO_Directory__Delete
              (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x10),1,(MethodInfo *)0x0);
  }
  return;
}


// ApplicationManagers.SnapshotManager$$GetFileName
// il2cpp: System_String_o* ApplicationManagers_SnapshotManager__GetFileName (int32_t snapshotId, const MethodInfo* method);
// 0x44c0a80

System_String_o * ApplicationManagers_SnapshotManager__GetFileName(int32_t snapshotId,MethodInfo *method)

{
  System_String_o *str1;
  System_String_o *pSVar1;
  int32_t local_c;
  
  local_c = snapshotId;
  if (g_data_057aea95 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    g_data_057aea95 = '\x01';
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = *(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x18);
  str1 = System_Int32__ToString((int32_t)&local_c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_3ae5ba0(pSVar1,str1,(MethodInfo *)0x0);
  return pSVar1;
}


// ApplicationManagers.SnapshotManager$$AddSnapshot
// il2cpp: void ApplicationManagers_SnapshotManager__AddSnapshot (UnityEngine_Texture2D_o* texture, int32_t damage, const MethodInfo* method);
// 0x44c0af0

void ApplicationManagers_SnapshotManager__AddSnapshot
               (UnityEngine_Texture2D_o *texture,int32_t damage,MethodInfo *method)

{
  long lVar1;
  char cVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  System_String_o *str1;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_Byte_array *bytes;
  long *plVar7;
  undefined8 uVar8;
  Il2CppObject *arg0;
  long lVar9;
  long *plVar10;
  int val1;
  MethodInfo *method_00;
  undefined1 auVar11 [12];
  undefined4 local_2c;
  
  if (g_data_057aea96 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057aea96 = '\x01';
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x10),(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_IO_Directory__CreateDirectory
              (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x10),(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x10);
  local_2c = *(undefined4 *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x24);
  if (g_data_057aea95 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    g_data_057aea95 = '\x01';
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x18);
  str1 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
  pSVar5 = System_String__Concat_3ae5ba0(pSVar5,str1,(MethodInfo *)0x0);
  method_00 = "/";
  pSVar6 = System_String__Concat_3af7150(pSVar6,(System_String_o *)"/",pSVar5,(MethodInfo *)0x0);
  bytes = ApplicationManagers_SnapshotManager__SerializeSnapshot(texture,method_00);
  System_IO_File__WriteAllBytes(pSVar6,bytes,(MethodInfo *)0x0);
  lVar9 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
  lVar1 = *(long *)(lVar9 + 0x30);
  if (lVar1 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(uint *)(lVar9 + 0x24) < *(uint *)(lVar1 + 0x18)) {
    *(int32_t *)(lVar1 + 0x20 + (long)(int)*(uint *)(lVar9 + 0x24) * 4) = damage;
    *(int *)(lVar9 + 0x24) = *(int *)(lVar9 + 0x24) + 1;
    iVar4 = *(int32_t *)(lVar9 + 0x20);
    val1 = *(int *)(lVar9 + 0x28) + 1;
    *(int *)(lVar9 + 0x28) = val1;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar4 = System_Math__Min_3cb7d70(val1,iVar4,(MethodInfo *)0x0);
    lVar1 = TypeInfo_SnapshotManager;
    lVar9 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
    *(int32_t *)(lVar9 + 0x28) = iVar4;
    if (*(int *)(lVar9 + 0x24) < *(int *)(lVar9 + 0x20)) {
      return;
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar9 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
    }
    *(undefined4 *)(lVar9 + 0x24) = 0;
    return;
  }
  auVar11 = il2cpp_runtime_helper_022b2ca0();
  uVar8 = auVar11._0_8_;
  if (auVar11._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(uVar8);
    uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    cVar2 = il2cpp_runtime_helper_0233e000(uVar8,*(undefined8 *)*plVar7);
    if (cVar2 == '\0') {
      plVar10 = (long *)__cxa_allocate_exception(8);
      *plVar10 = *plVar7;
      __cxa_throw(plVar10,&PTR_PTR_05215060,0);
    }
    plVar7 = (long *)*plVar7;
    __cxa_end_catch();
    if (plVar7 != (long *)0x0) {
      arg0 = (Il2CppObject *)(**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
      pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Exception while adding snapshot: {0}");
      pSVar6 = System_String__Format(pSVar6,arg0,(MethodInfo *)0x0);
      lVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
      if (*(int *)(lVar9 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar9);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
      return;
    }
    uVar8 = il2cpp_runtime_helper_022b2c90();
    __cxa_end_catch();
  }
  _Unwind_Resume(uVar8);
}


// ApplicationManagers.SnapshotManager$$SerializeSnapshot
// il2cpp: System_Byte_array* ApplicationManagers_SnapshotManager__SerializeSnapshot (UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x44c0e30

System_Byte_array *
ApplicationManagers_SnapshotManager__SerializeSnapshot(UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  int32_t iVar3;
  bool_conflict bVar4;
  UnityEngine_Color32_array *pUVar5;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  System_Byte_array *extraout_RAX;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  System_String_o *pSVar13;
  System_Byte_array *pSVar14;
  System_Byte_array *pSVar15;
  
  pSVar14 = (System_Byte_array *)texture;
  if (g_data_057aea97 == '\0') {
    pSVar14 = (System_Byte_array *)&TypeInfo_byte;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea97 = '\x01';
  }
  if ((texture == (UnityEngine_Texture2D_o *)0x0) ||
     (pSVar14 = (System_Byte_array *)texture,
     pUVar5 = UnityEngine_Texture2D__GetPixels32_4dd8ab0(texture,(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_Color32_array *)0x0)) goto label_044c1023;
  pSVar6 = (System_Byte_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,(int)pUVar5->max_length * 3 + 8);
  uVar2 = (*(texture->klass->vtable)._5_get_width.methodPtr)(texture);
  pSVar14 = (System_Byte_array *)(ulong)uVar2;
  pSVar7 = System_BitConverter__GetBytes_3c14840(uVar2,(MethodInfo *)0x0);
  if (pSVar7 == (System_Byte_array *)0x0) goto label_044c1023;
  iVar8 = (int)pSVar7->max_length;
  if (pSVar6 == (System_Byte_array *)0x0) {
    uVar11 = 0;
    if (0 < iVar8) goto label_044c1023;
  }
  else if (iVar8 < 1) {
    uVar11 = 0;
  }
  else {
    uVar9 = pSVar7->max_length & 0xffffffff;
    uVar11 = 0;
    do {
      if ((uVar9 <= uVar11) || ((uint)pSVar6->max_length <= uVar11)) goto label_044c101e;
      pSVar6->m_Items[uVar11] = pSVar7->m_Items[uVar11];
      uVar11 = uVar11 + 1;
      uVar2 = (uint)pSVar7->max_length;
      uVar9 = (ulong)uVar2;
    } while ((long)uVar11 < (long)(int)uVar2);
  }
  uVar2 = (*(texture->klass->vtable)._7_get_height.methodPtr)(texture);
  pSVar14 = (System_Byte_array *)(ulong)uVar2;
  pSVar7 = System_BitConverter__GetBytes_3c14840(uVar2,(MethodInfo *)0x0);
  if (pSVar7 == (System_Byte_array *)0x0) goto label_044c1023;
  iVar8 = (int)pSVar7->max_length;
  if (pSVar6 == (System_Byte_array *)0x0) {
    if (0 < iVar8) goto label_044c1023;
label_044c0f9a:
    uVar2 = (uint)pUVar5->max_length;
  }
  else {
    if (iVar8 < 1) goto label_044c0f9a;
    uVar12 = pSVar7->max_length & 0xffffffff;
    pSVar14 = (System_Byte_array *)(uVar11 & 0xffffffff);
    uVar9 = 0;
    do {
      if ((uVar12 <= uVar9) || (uVar2 = (int)uVar11 + (int)uVar9, (uint)pSVar6->max_length <= uVar2))
      goto label_044c101e;
      pSVar6->m_Items[(int)uVar2] = pSVar7->m_Items[uVar9];
      uVar9 = uVar9 + 1;
      uVar2 = (uint)pSVar7->max_length;
      uVar12 = (ulong)uVar2;
    } while ((long)uVar9 < (long)(int)uVar2);
    uVar11 = (ulong)(uint)((int)uVar11 + (int)uVar9);
    uVar2 = (uint)pUVar5->max_length;
  }
  if (0 < (int)uVar2) {
    if (pSVar6 == (System_Byte_array *)0x0) {
label_044c1023:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aea98 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Color32);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
        g_data_057aea98 = '\x01';
      }
      uVar2 = System_BitConverter__ToInt32(pSVar14,0,(MethodInfo *)0x0);
      pSVar13 = (System_String_o *)(ulong)uVar2;
      iVar3 = System_BitConverter__ToInt32(pSVar14,4,(MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
      pSVar6 = pSVar7;
      UnityEngine_Texture2D___ctor_4dd9130
                ((UnityEngine_Texture2D_o *)pSVar7,uVar2,iVar3,3,0,(MethodInfo *)0x0);
      if (pSVar14 != (System_Byte_array *)0x0) {
        pSVar13 = (System_String_o *)(ulong)(uint)(((int)pSVar14->max_length + -8) / 3);
        pSVar6 = TypeInfo_Color32;
        pUVar5 = (UnityEngine_Color32_array *)il2cpp_runtime_helper_022b2a40();
        if (pUVar5 != (UnityEngine_Color32_array *)0x0) {
          uVar2 = (uint)pUVar5->max_length;
          pSVar15 = (System_Byte_array *)(ulong)uVar2;
          if (pSVar15 != (System_Byte_array *)0x0 && -1 < (long)pSVar15 << 0x20) {
            pSVar13 = (System_String_o *)0xa;
            pSVar6 = (System_Byte_array *)0x0;
            do {
              uVar1 = (uint)pSVar13;
              uVar10 = (uint)pSVar14->max_length;
              if ((((uVar10 <= uVar1 - 2) || (uVar10 <= uVar1 - 1)) || (uVar10 <= uVar1)) ||
                 (pSVar15 <= pSVar6)) {
                il2cpp_runtime_helper_022b2ca0();
                goto label_044c1197;
              }
              (&pUVar5->m_Items[0].fields.rgba)[(long)pSVar6] =
                   (uint)pSVar14->m_Items[(int)(uVar1 - 1)] << 8 |
                   (uint)pSVar14->m_Items[(int)uVar1] << 0x10 | (uint)pSVar14->m_Items[(int)(uVar1 - 2)] |
                   0xff000000;
              pSVar6 = (System_Byte_array *)((long)&(pSVar6->obj).klass + 1);
              pSVar13 = (System_String_o *)(ulong)(uVar1 + 3);
            } while ((long)pSVar6 < (long)(int)uVar2);
          }
          if (pSVar7 != (System_Byte_array *)0x0) {
            UnityEngine_Texture2D__SetPixels32_4dd9b90
                      ((UnityEngine_Texture2D_o *)pSVar7,pUVar5,(MethodInfo *)0x0);
            UnityEngine_Texture2D__Apply_4dd97c0((UnityEngine_Texture2D_o *)pSVar7,(MethodInfo *)0x0);
            return pSVar7;
          }
        }
      }
label_044c1197:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aea99 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
        il2cpp_runtime_helper_023445d0(&"/");
        g_data_057aea99 = '\x01';
      }
      if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = System_IO_Directory__Exists
                        (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 8),(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        System_IO_Directory__CreateDirectory
                  (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 8),(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar13 = System_String__Concat_3af7150
                          (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 8),"/",pSVar13,
                           (MethodInfo *)0x0);
      pSVar14 = UnityEngine_ImageConversion__EncodeToPNG((UnityEngine_Texture2D_o *)pSVar6,(MethodInfo *)0x0);
      System_IO_File__WriteAllBytes(pSVar13,pSVar14,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    uVar9 = 0;
    do {
      if ((uVar2 <= uVar9) || (uVar10 = (uint)uVar11, (uint)pSVar6->max_length <= uVar10)) goto label_044c101e;
      iVar3 = (&pUVar5->m_Items[0].fields.rgba)[uVar9];
      pSVar6->m_Items[(int)uVar10] = (uint8_t)iVar3;
      if ((uint)pSVar6->max_length <= uVar10 + 1) goto label_044c101e;
      pSVar14 = (System_Byte_array *)(long)(int)(uVar10 + 1);
      pSVar6->m_Items[(long)pSVar14] = (uint8_t)((uint)iVar3 >> 8);
      if ((uint)pSVar6->max_length <= uVar10 + 2) goto label_044c101e;
      pSVar6->m_Items[(int)(uVar10 + 2)] = (uint8_t)((uint)iVar3 >> 0x10);
      uVar9 = uVar9 + 1;
      uVar2 = (uint)pUVar5->max_length;
      uVar11 = (ulong)(uVar10 + 3);
    } while ((long)uVar9 < (long)(int)uVar2);
  }
  return pSVar6;
label_044c101e:
  il2cpp_runtime_helper_022b2ca0();
  goto label_044c1023;
}


// ApplicationManagers.SnapshotManager$$DeserializeSnapshot
// il2cpp: UnityEngine_Texture2D_o* ApplicationManagers_SnapshotManager__DeserializeSnapshot (System_Byte_array* bytes, const MethodInfo* method);
// 0x44c1030

UnityEngine_Texture2D_o *
ApplicationManagers_SnapshotManager__DeserializeSnapshot(System_Byte_array *bytes,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int32_t height;
  bool_conflict bVar4;
  UnityEngine_Texture2D_o *__this;
  UnityEngine_Color32_array *colors;
  System_Byte_array *bytes_00;
  UnityEngine_Texture2D_o *extraout_RAX;
  System_String_o *pSVar5;
  UnityEngine_Texture2D_o *tex;
  UnityEngine_Texture2D_o *pUVar6;
  
  if (g_data_057aea98 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    g_data_057aea98 = '\x01';
  }
  uVar3 = System_BitConverter__ToInt32(bytes,0,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)(ulong)uVar3;
  height = System_BitConverter__ToInt32(bytes,4,(MethodInfo *)0x0);
  __this = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
  tex = __this;
  UnityEngine_Texture2D___ctor_4dd9130(__this,uVar3,height,3,0,(MethodInfo *)0x0);
  if (bytes != (System_Byte_array *)0x0) {
    pSVar5 = (System_String_o *)(ulong)(uint)(((int)bytes->max_length + -8) / 3);
    tex = TypeInfo_Color32;
    colors = (UnityEngine_Color32_array *)il2cpp_runtime_helper_022b2a40();
    if (colors != (UnityEngine_Color32_array *)0x0) {
      uVar3 = (uint)colors->max_length;
      pUVar6 = (UnityEngine_Texture2D_o *)(ulong)uVar3;
      if (pUVar6 != (UnityEngine_Texture2D_o *)0x0 && -1 < (long)pUVar6 << 0x20) {
        pSVar5 = (System_String_o *)0xa;
        tex = (UnityEngine_Texture2D_o *)0x0;
        do {
          uVar2 = (uint)pSVar5;
          uVar1 = (uint)bytes->max_length;
          if ((((uVar1 <= uVar2 - 2) || (uVar1 <= uVar2 - 1)) || (uVar1 <= uVar2)) || (pUVar6 <= tex)) {
            il2cpp_runtime_helper_022b2ca0();
            goto label_044c1197;
          }
          (&colors->m_Items[0].fields.rgba)[(long)tex] =
               (uint)bytes->m_Items[(int)(uVar2 - 1)] << 8 |
               (uint)bytes->m_Items[(int)uVar2] << 0x10 | (uint)bytes->m_Items[(int)(uVar2 - 2)] | 0xff000000;
          tex = (UnityEngine_Texture2D_o *)((long)&tex->klass + 1);
          pSVar5 = (System_String_o *)(ulong)(uVar2 + 3);
        } while ((long)tex < (long)(int)uVar3);
      }
      if (__this != (UnityEngine_Texture2D_o *)0x0) {
        UnityEngine_Texture2D__SetPixels32_4dd9b90(__this,colors,(MethodInfo *)0x0);
        UnityEngine_Texture2D__Apply_4dd97c0(__this,(MethodInfo *)0x0);
        return __this;
      }
    }
  }
label_044c1197:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea99 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057aea99 = '\x01';
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 8),(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_IO_Directory__CreateDirectory
              (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 8),(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = System_String__Concat_3af7150
                     (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 8),"/",pSVar5,
                      (MethodInfo *)0x0);
  bytes_00 = UnityEngine_ImageConversion__EncodeToPNG(tex,(MethodInfo *)0x0);
  System_IO_File__WriteAllBytes(pSVar5,bytes_00,(MethodInfo *)0x0);
  return extraout_RAX;
}


// ApplicationManagers.SnapshotManager$$SaveSnapshotFinish
// il2cpp: void ApplicationManagers_SnapshotManager__SaveSnapshotFinish (UnityEngine_Texture2D_o* texture, System_String_o* fileName, const MethodInfo* method);
// 0x44c11a0

void ApplicationManagers_SnapshotManager__SaveSnapshotFinish
               (UnityEngine_Texture2D_o *texture,System_String_o *fileName,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *path;
  System_Byte_array *bytes;
  
  if (g_data_057aea99 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057aea99 = '\x01';
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 8),(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_IO_Directory__CreateDirectory
              (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 8),(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = System_String__Concat_3af7150
                   (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 8),"/",fileName,
                    (MethodInfo *)0x0);
  bytes = UnityEngine_ImageConversion__EncodeToPNG(texture,(MethodInfo *)0x0);
  System_IO_File__WriteAllBytes(path,bytes,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.SnapshotManager$$GetDamage
// il2cpp: int32_t ApplicationManagers_SnapshotManager__GetDamage (int32_t index, const MethodInfo* method);
// 0x44c1280

int32_t ApplicationManagers_SnapshotManager__GetDamage(int32_t index,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  System_String_o *str1;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_Byte_array *bytes;
  UnityEngine_Texture2D_o *pUVar5;
  long lVar6;
  int32_t iVar7;
  MethodInfo *method_00;
  int iVar8;
  long lVar9;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 *puStack_30;
  
  if (g_data_057aea9a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    g_data_057aea9a = '\x01';
    iVar8 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  else {
    iVar8 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  if (iVar8 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar6 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
    iVar8 = *(int *)(lVar6 + 0x28);
    lVar9 = TypeInfo_SnapshotManager;
  }
  else {
    lVar6 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
    iVar8 = *(int *)(lVar6 + 0x28);
    lVar9 = TypeInfo_SnapshotManager;
  }
  if (iVar8 <= index) {
    TypeInfo_SnapshotManager = lVar9;
    return 0;
  }
  TypeInfo_SnapshotManager = lVar9;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar6 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
  }
  iVar8 = (int)lVar9;
  lVar6 = *(long *)(lVar6 + 0x30);
  if (lVar6 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((uint)index < *(uint *)(lVar6 + 0x18)) {
    return *(int32_t *)(lVar6 + 0x20 + (long)index * 4);
  }
  uStack_40 = il2cpp_runtime_helper_022b2ca0();
  puStack_30 = &TypeInfo_SnapshotManager;
  uStack_38 = (ulong)(uint)index;
  if (g_data_057aea9b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057aea9b = '\x01';
    iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar6 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
    iVar1 = *(int *)(lVar6 + 0x28);
  }
  else {
    lVar6 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
    iVar1 = *(int *)(lVar6 + 0x28);
  }
  if (iVar8 < iVar1) {
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x10);
    }
    else {
      pSVar4 = *(System_String_o **)(lVar6 + 0x10);
    }
    uStack_40 = CONCAT44(iVar8,(undefined4)uStack_40);
    if (g_data_057aea95 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
      g_data_057aea95 = '\x01';
      iVar8 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
    }
    else {
      iVar8 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
    }
    if (iVar8 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = *(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x18);
    iVar7 = 0;
    str1 = System_Int32__ToString((int)&uStack_40 + 4,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_3ae5ba0(pSVar3,str1,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_3af7150(pSVar4,"/",pSVar3,(MethodInfo *)0x0);
    bVar2 = System_IO_File__Exists(pSVar4,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      method_00 = (MethodInfo *)0x0;
      bytes = System_IO_File__ReadAllBytes(pSVar4,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar5 = ApplicationManagers_SnapshotManager__DeserializeSnapshot(bytes,method_00);
      iVar7 = (int32_t)pUVar5;
    }
    return iVar7;
  }
  return 0;
}


// ApplicationManagers.SnapshotManager$$GetSnapshot
// il2cpp: UnityEngine_Texture2D_o* ApplicationManagers_SnapshotManager__GetSnapshot (int32_t index, const MethodInfo* method);
// 0x44c1340

UnityEngine_Texture2D_o * ApplicationManagers_SnapshotManager__GetSnapshot(int32_t index,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  undefined4 in_EAX;
  bool_conflict bVar3;
  System_String_o *str1;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_Byte_array *bytes;
  UnityEngine_Texture2D_o *pUVar6;
  MethodInfo *method_00;
  undefined8 uStack_28;
  
  uStack_28._0_4_ = in_EAX;
  if (g_data_057aea9b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057aea9b = '\x01';
    iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar2 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
    iVar1 = *(int *)(lVar2 + 0x28);
  }
  else {
    lVar2 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
    iVar1 = *(int *)(lVar2 + 0x28);
  }
  if (iVar1 <= index) {
    return (UnityEngine_Texture2D_o *)0x0;
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x10);
  }
  else {
    pSVar5 = *(System_String_o **)(lVar2 + 0x10);
  }
  uStack_28 = CONCAT44(index,(undefined4)uStack_28);
  if (g_data_057aea95 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    g_data_057aea95 = '\x01';
    iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x18);
  pUVar6 = (UnityEngine_Texture2D_o *)0x0;
  str1 = System_Int32__ToString((int)&uStack_28 + 4,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_3ae5ba0(pSVar4,str1,(MethodInfo *)0x0);
  pSVar5 = System_String__Concat_3af7150(pSVar5,"/",pSVar4,(MethodInfo *)0x0);
  bVar3 = System_IO_File__Exists(pSVar5,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    method_00 = (MethodInfo *)0x0;
    bytes = System_IO_File__ReadAllBytes(pSVar5,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar6 = ApplicationManagers_SnapshotManager__DeserializeSnapshot(bytes,method_00);
  }
  return pUVar6;
}


// ApplicationManagers.SnapshotManager$$GetLength
// il2cpp: int32_t ApplicationManagers_SnapshotManager__GetLength (const MethodInfo* method);
// 0x44c14e0

int32_t ApplicationManagers_SnapshotManager__GetLength(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aea9c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    g_data_057aea9c = '\x01';
    iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(int32_t *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(int32_t *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
}


// ApplicationManagers.SnapshotManager$$.ctor
// il2cpp: void ApplicationManagers_SnapshotManager___ctor (ApplicationManagers_SnapshotManager_o* __this, const MethodInfo* method);
// 0x44c1550

void ApplicationManagers_SnapshotManager___ctor
               (ApplicationManagers_SnapshotManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.SnapshotManager$$.cctor
// il2cpp: void ApplicationManagers_SnapshotManager___cctor (const MethodInfo* method);
// 0x44c1560

void ApplicationManagers_SnapshotManager___cctor(MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  undefined8 uVar3;
  
  if (g_data_057aea9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    il2cpp_runtime_helper_023445d0(&"Snapshot");
    il2cpp_runtime_helper_023445d0(&"/Temp");
    g_data_057aea9d = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x38);
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  pSVar2 = System_String__Concat_3ae5ba0
                     (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x38),"/Temp",
                      (MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
  *(System_String_o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar2);
  lVar1 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "Snapshot";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = 500;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  uVar3 = il2cpp_runtime_helper_022b2a40(TypeInfo_int,500);
  lVar1 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = uVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x30,uVar3);
  return;
}


