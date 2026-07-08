// Type: ApplicationManagers.SnapshotManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers/SnapshotManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ApplicationManagers/SnapshotManager.cs  [CHANGED since prior version]
// --------------------------------

// ApplicationManagers.SnapshotManager$$Init
// il2cpp: void ApplicationManagers_SnapshotManager__Init (const MethodInfo* method);
// 0x41a7870

void ApplicationManagers_SnapshotManager__Init(MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  
  if (DAT_05704cc4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_SnapshotManager_CreateSingleton_SnapshotManager);
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    DAT_05704cc4 = '\x01';
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = Utility_SingletonFactory__CreateSingleton<object>
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_SnapshotManager + 0xb8),MethodInfo_SnapshotManager_CreateSingleton_SnapshotManager);
  **(undefined8 **)(TypeInfo_SnapshotManager + 0xb8) = pIVar2;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_SnapshotManager + 0xb8));
  if (DAT_05704cc6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    DAT_05704cc6 = '\x01';
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x10),(MethodInfo *)0x0)
  ;
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    System_IO_Directory__Delete
              (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x10),1,(MethodInfo *)0x0);
  }
  return;
}


// ApplicationManagers.SnapshotManager$$OnApplicationQuit
// il2cpp: void ApplicationManagers_SnapshotManager__OnApplicationQuit (ApplicationManagers_SnapshotManager_o* __this, const MethodInfo* method);
// 0x41a7a60

void ApplicationManagers_SnapshotManager__OnApplicationQuit
               (ApplicationManagers_SnapshotManager_o *__this,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  
  if (DAT_05704cc5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    DAT_05704cc5 = '\x01';
    iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704cc6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    DAT_05704cc6 = '\x01';
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x10),(MethodInfo *)0x0)
  ;
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    System_IO_Directory__Delete
              (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x10),1,(MethodInfo *)0x0);
  }
  return;
}


// ApplicationManagers.SnapshotManager$$ClearTemp
// il2cpp: void ApplicationManagers_SnapshotManager__ClearTemp (const MethodInfo* method);
// 0x41a78f0

void ApplicationManagers_SnapshotManager__ClearTemp(MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704cc6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    DAT_05704cc6 = '\x01';
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x10),(MethodInfo *)0x0)
  ;
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    System_IO_Directory__Delete
              (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x10),1,(MethodInfo *)0x0);
  }
  return;
}


// ApplicationManagers.SnapshotManager$$GetFileName
// il2cpp: System_String_o* ApplicationManagers_SnapshotManager__GetFileName (int32_t snapshotId, const MethodInfo* method);
// 0x41a7ac0

System_String_o *
ApplicationManagers_SnapshotManager__GetFileName(int32_t snapshotId,MethodInfo *method)

{
  System_String_o *str1;
  System_String_o *pSVar1;
  int32_t local_c;
  
  local_c = snapshotId;
  if (DAT_05704cc7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    DAT_05704cc7 = '\x01';
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = *(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x18);
  str1 = System_Int32__ToString((int32_t)&local_c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,str1,(MethodInfo *)0x0);
  return pSVar1;
}


// ApplicationManagers.SnapshotManager$$AddSnapshot
// il2cpp: void ApplicationManagers_SnapshotManager__AddSnapshot (UnityEngine_Texture2D_o* texture, int32_t damage, const MethodInfo* method);
// 0x41a7b30

void ApplicationManagers_SnapshotManager__AddSnapshot
               (UnityEngine_Texture2D_o *texture,int32_t damage,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  System_String_o *str1;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_Byte_array *bytes;
  long lVar6;
  int val1;
  MethodInfo *method_00;
  undefined4 local_2c;
  
  if (DAT_05704cc8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    il2cpp_init_method_metadata(&"/");
    DAT_05704cc8 = '\x01';
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x10),(MethodInfo *)0x0)
  ;
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    System_IO_Directory__CreateDirectory
              (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x10),(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x10);
  local_2c = *(undefined4 *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x24);
  if (DAT_05704cc7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    DAT_05704cc7 = '\x01';
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x18);
  str1 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat(pSVar4,str1,(MethodInfo *)0x0);
  method_00 = "/";
  pSVar5 = System_String__Concat(pSVar5,(System_String_o *)"/",pSVar4,(MethodInfo *)0x0);
  bytes = ApplicationManagers_SnapshotManager__SerializeSnapshot(texture,method_00);
  System_IO_File__WriteAllBytes(pSVar5,bytes,(MethodInfo *)0x0);
  lVar6 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
  lVar1 = *(long *)(lVar6 + 0x30);
  if (lVar1 != 0) {
    if (*(uint *)(lVar6 + 0x24) < *(uint *)(lVar1 + 0x18)) {
      *(int32_t *)(lVar1 + 0x20 + (long)(int)*(uint *)(lVar6 + 0x24) * 4) = damage;
      *(int *)(lVar6 + 0x24) = *(int *)(lVar6 + 0x24) + 1;
      iVar3 = *(int32_t *)(lVar6 + 0x20);
      val1 = *(int *)(lVar6 + 0x28) + 1;
      *(int *)(lVar6 + 0x28) = val1;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      iVar3 = System_Math__Min(val1,iVar3,(MethodInfo *)0x0);
      lVar1 = TypeInfo_SnapshotManager;
      lVar6 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
      *(int32_t *)(lVar6 + 0x28) = iVar3;
      if (*(int *)(lVar6 + 0x20) <= *(int *)(lVar6 + 0x24)) {
        if (*(int *)(lVar1 + 0xe4) == 0) {
          il2cpp_init_class();
          lVar6 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
        }
        *(undefined4 *)(lVar6 + 0x24) = 0;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.SnapshotManager$$SerializeSnapshot
// il2cpp: System_Byte_array* ApplicationManagers_SnapshotManager__SerializeSnapshot (UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x41a7e70

System_Byte_array *
ApplicationManagers_SnapshotManager__SerializeSnapshot
          (UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_Color32_array *pUVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  
  if (DAT_05704cc9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_byte);
    DAT_05704cc9 = '\x01';
  }
  if ((texture == (UnityEngine_Texture2D_o *)0x0) ||
     (pUVar2 = UnityEngine_Texture2D__GetPixels32(texture,(MethodInfo *)0x0),
     pUVar2 == (UnityEngine_Color32_array *)0x0)) goto LAB_041a8063;
  pSVar3 = (System_Byte_array *)il2cpp_glue_02274930(TypeInfo_byte,(int)pUVar2->max_length * 3 + 8);
  iVar1 = (*(texture->klass->vtable)._5_get_width.methodPtr)(texture);
  pSVar4 = System_BitConverter__GetBytes(iVar1,(MethodInfo *)0x0);
  if (pSVar4 == (System_Byte_array *)0x0) goto LAB_041a8063;
  iVar5 = (int)pSVar4->max_length;
  if (pSVar3 == (System_Byte_array *)0x0) {
    uVar8 = 0;
    if (0 < iVar5) goto LAB_041a8063;
  }
  else if (iVar5 < 1) {
    uVar8 = 0;
  }
  else {
    uVar6 = pSVar4->max_length & 0xffffffff;
    uVar8 = 0;
    do {
      if ((uVar6 <= uVar8) || ((uint)pSVar3->max_length <= uVar8)) goto LAB_041a805e;
      pSVar3->m_Items[uVar8] = pSVar4->m_Items[uVar8];
      uVar8 = uVar8 + 1;
      uVar9 = (uint)pSVar4->max_length;
      uVar6 = (ulong)uVar9;
    } while ((long)uVar8 < (long)(int)uVar9);
  }
  iVar1 = (*(texture->klass->vtable)._7_get_height.methodPtr)(texture);
  pSVar4 = System_BitConverter__GetBytes(iVar1,(MethodInfo *)0x0);
  if (pSVar4 == (System_Byte_array *)0x0) goto LAB_041a8063;
  iVar5 = (int)pSVar4->max_length;
  if (pSVar3 == (System_Byte_array *)0x0) {
    if (0 < iVar5) goto LAB_041a8063;
LAB_041a7fda:
    uVar9 = (uint)pUVar2->max_length;
  }
  else {
    if (iVar5 < 1) goto LAB_041a7fda;
    uVar10 = pSVar4->max_length & 0xffffffff;
    uVar6 = 0;
    do {
      if ((uVar10 <= uVar6) || (uVar9 = (int)uVar8 + (int)uVar6, (uint)pSVar3->max_length <= uVar9))
      goto LAB_041a805e;
      pSVar3->m_Items[(int)uVar9] = pSVar4->m_Items[uVar6];
      uVar6 = uVar6 + 1;
      uVar9 = (uint)pSVar4->max_length;
      uVar10 = (ulong)uVar9;
    } while ((long)uVar6 < (long)(int)uVar9);
    uVar8 = (ulong)(uint)((int)uVar8 + (int)uVar6);
    uVar9 = (uint)pUVar2->max_length;
  }
  if (0 < (int)uVar9) {
    if (pSVar3 == (System_Byte_array *)0x0) {
LAB_041a8063:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar6 = 0;
    do {
      if ((uVar9 <= uVar6) || (uVar7 = (uint)uVar8, (uint)pSVar3->max_length <= uVar7)) {
LAB_041a805e:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar1 = (&pUVar2->m_Items[0].fields.rgba)[uVar6];
      pSVar3->m_Items[(int)uVar7] = (uint8_t)iVar1;
      if (((uint)pSVar3->max_length <= uVar7 + 1) ||
         (pSVar3->m_Items[(int)(uVar7 + 1)] = (uint8_t)((uint)iVar1 >> 8),
         (uint)pSVar3->max_length <= uVar7 + 2)) goto LAB_041a805e;
      pSVar3->m_Items[(int)(uVar7 + 2)] = (uint8_t)((uint)iVar1 >> 0x10);
      uVar6 = uVar6 + 1;
      uVar9 = (uint)pUVar2->max_length;
      uVar8 = (ulong)(uVar7 + 3);
    } while ((long)uVar6 < (long)(int)uVar9);
  }
  return pSVar3;
}


// ApplicationManagers.SnapshotManager$$DeserializeSnapshot
// il2cpp: UnityEngine_Texture2D_o* ApplicationManagers_SnapshotManager__DeserializeSnapshot (System_Byte_array* bytes, const MethodInfo* method);
// 0x41a8070

UnityEngine_Texture2D_o *
ApplicationManagers_SnapshotManager__DeserializeSnapshot
          (System_Byte_array *bytes,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  int32_t width;
  int32_t height;
  UnityEngine_Texture2D_o *__this;
  UnityEngine_Color32_array *colors;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (DAT_05704cca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color32);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    DAT_05704cca = '\x01';
  }
  width = System_BitConverter__ToInt32(bytes,0,(MethodInfo *)0x0);
  height = System_BitConverter__ToInt32(bytes,4,(MethodInfo *)0x0);
  __this = (UnityEngine_Texture2D_o *)il2cpp_runtime_glue(TypeInfo_Texture2D);
  UnityEngine_Texture2D___ctor(__this,width,height,3,0,(MethodInfo *)0x0);
  if (bytes != (System_Byte_array *)0x0) {
    colors = (UnityEngine_Color32_array *)
             il2cpp_glue_02274930(TypeInfo_Color32,((int)bytes->max_length + -8) / 3);
    if (colors != (UnityEngine_Color32_array *)0x0) {
      uVar1 = (uint)colors->max_length;
      uVar5 = (ulong)uVar1;
      if (uVar5 != 0 && -1 < (long)(uVar5 << 0x20)) {
        uVar3 = 10;
        uVar4 = 0;
        do {
          uVar2 = (uint)bytes->max_length;
          if ((((uVar2 <= uVar3 - 2) || (uVar2 <= uVar3 - 1)) || (uVar2 <= uVar3)) ||
             (uVar5 <= uVar4)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          (&colors->m_Items[0].fields.rgba)[uVar4] =
               (uint)bytes->m_Items[(int)(uVar3 - 1)] << 8 |
               (uint)bytes->m_Items[(int)uVar3] << 0x10 | (uint)bytes->m_Items[(int)(uVar3 - 2)] |
               0xff000000;
          uVar4 = uVar4 + 1;
          uVar3 = uVar3 + 3;
        } while ((long)uVar4 < (long)(int)uVar1);
      }
      if (__this != (UnityEngine_Texture2D_o *)0x0) {
        UnityEngine_Texture2D__SetPixels32(__this,colors,(MethodInfo *)0x0);
        UnityEngine_Texture2D__Apply(__this,(MethodInfo *)0x0);
        return __this;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.SnapshotManager$$SaveSnapshotFinish
// il2cpp: void ApplicationManagers_SnapshotManager__SaveSnapshotFinish (UnityEngine_Texture2D_o* texture, System_String_o* fileName, const MethodInfo* method);
// 0x41a81e0

void ApplicationManagers_SnapshotManager__SaveSnapshotFinish
               (UnityEngine_Texture2D_o *texture,System_String_o *fileName,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *path;
  System_Byte_array *bytes;
  
  if (DAT_05704ccb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    il2cpp_init_method_metadata(&"/");
    DAT_05704ccb = '\x01';
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 8),(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    System_IO_Directory__CreateDirectory
              (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 8),(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = System_String__Concat
                   (*(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 8),"/",fileName,
                    (MethodInfo *)0x0);
  bytes = UnityEngine_ImageConversion__EncodeToPNG(texture,(MethodInfo *)0x0);
  System_IO_File__WriteAllBytes(path,bytes,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.SnapshotManager$$GetDamage
// il2cpp: int32_t ApplicationManagers_SnapshotManager__GetDamage (int32_t index, const MethodInfo* method);
// 0x41a82c0

int32_t ApplicationManagers_SnapshotManager__GetDamage(int32_t index,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_05704ccc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    DAT_05704ccc = '\x01';
    iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
    iVar1 = *(int *)(lVar2 + 0x28);
  }
  else {
    lVar2 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
    iVar1 = *(int *)(lVar2 + 0x28);
  }
  if (index < iVar1) {
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar2 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
    }
    lVar2 = *(long *)(lVar2 + 0x30);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(uint *)(lVar2 + 0x18) <= (uint)index) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    return *(int32_t *)(lVar2 + 0x20 + (long)index * 4);
  }
  return 0;
}


// ApplicationManagers.SnapshotManager$$GetSnapshot
// il2cpp: UnityEngine_Texture2D_o* ApplicationManagers_SnapshotManager__GetSnapshot (int32_t index, const MethodInfo* method);
// 0x41a8380

UnityEngine_Texture2D_o *
ApplicationManagers_SnapshotManager__GetSnapshot(int32_t index,MethodInfo *method)

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
  if (DAT_05704ccd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    il2cpp_init_method_metadata(&"/");
    DAT_05704ccd = '\x01';
    iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
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
    il2cpp_init_class();
    pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x10);
  }
  else {
    pSVar5 = *(System_String_o **)(lVar2 + 0x10);
  }
  uStack_28 = CONCAT44(index,(undefined4)uStack_28);
  if (DAT_05704cc7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    DAT_05704cc7 = '\x01';
    iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x18);
  pUVar6 = (UnityEngine_Texture2D_o *)0x0;
  str1 = System_Int32__ToString((int)&uStack_28 + 4,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat(pSVar4,str1,(MethodInfo *)0x0);
  pSVar5 = System_String__Concat(pSVar5,"/",pSVar4,(MethodInfo *)0x0);
  bVar3 = System_IO_File__Exists(pSVar5,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    method_00 = (MethodInfo *)0x0;
    bytes = System_IO_File__ReadAllBytes(pSVar5,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar6 = ApplicationManagers_SnapshotManager__DeserializeSnapshot(bytes,method_00);
  }
  return pUVar6;
}


// ApplicationManagers.SnapshotManager$$GetLength
// il2cpp: int32_t ApplicationManagers_SnapshotManager__GetLength (const MethodInfo* method);
// 0x41a8520

int32_t ApplicationManagers_SnapshotManager__GetLength(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704cce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    DAT_05704cce = '\x01';
    iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_SnapshotManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(int32_t *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(int32_t *)(*(long *)(TypeInfo_SnapshotManager + 0xb8) + 0x28);
}


// ApplicationManagers.SnapshotManager$$.ctor
// il2cpp: void ApplicationManagers_SnapshotManager___ctor (ApplicationManagers_SnapshotManager_o* __this, const MethodInfo* method);
// 0x41a8590

void ApplicationManagers_SnapshotManager___ctor
               (ApplicationManagers_SnapshotManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.SnapshotManager$$.cctor
// il2cpp: void ApplicationManagers_SnapshotManager___cctor (const MethodInfo* method);
// 0x41a85a0

void ApplicationManagers_SnapshotManager___cctor(MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  undefined8 uVar3;
  
  if (DAT_05704ccf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    il2cpp_init_method_metadata(&"Snapshot");
    il2cpp_init_method_metadata(&"/Temp");
    DAT_05704ccf = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x38);
  il2cpp_runtime_glue(lVar1 + 8);
  pSVar2 = System_String__Concat
                     (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x38),"/Temp",
                      (MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
  *(System_String_o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x10,pSVar2);
  lVar1 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "Snapshot";
  il2cpp_runtime_glue(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = 500;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  uVar3 = il2cpp_glue_02274930(TypeInfo_int,500);
  lVar1 = *(long *)(TypeInfo_SnapshotManager + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = uVar3;
  il2cpp_runtime_glue(lVar1 + 0x30,uVar3);
  return;
}


