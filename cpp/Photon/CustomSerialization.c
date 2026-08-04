// Type: Photon.CustomSerialization
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Photon/CustomSerialization.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/CustomSerialization.cs
// --------------------------------

// Photon.CustomSerialization$$Init
// il2cpp: void Photon_CustomSerialization__Init (const MethodInfo* method);
// 0x4481e90

void Photon_CustomSerialization__Init(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar2;
  long lVar3;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *__this;
  System_Type_o *key;
  Il2CppClass *pIVar6;
  MethodInfo_304BE20 *pMVar7;
  MethodInfo_304BE20 *pMVar8;
  Il2CppClass *extraout_RDX;
  uint8_t uVar9;
  uint8_t key_00;
  
  if (g_data_057ae899 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_Color);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_DeserializeColor);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_SerializeColor);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeserializeMethod);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonPeer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SerializeMethod);
    g_data_057ae899 = '\x01';
  }
  handle.fields.value = TypeRef_Color.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  key = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  pIVar6 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_SerializeMethod);
  ExitGames_Client_Photon_SerializeMethod___ctor();
  pMVar7 = (MethodInfo_304BE20 *)il2cpp_runtime_helper_023052d0(TypeInfo_DeserializeMethod);
  ExitGames_Client_Photon_DeserializeMethod___ctor();
  if (*(int *)(TypeInfo_PhotonPeer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057abbfd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Protocol);
    g_data_057abbfd = '\x01';
  }
  if (*(int *)(TypeInfo_Protocol + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar9 = 'C';
  key_00 = 'C';
  pMVar8 = pMVar7;
  if (g_data_057abc06 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomType);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Protocol);
    g_data_057abc06 = '\x01';
    iVar1 = *(int *)(TypeInfo_Protocol + 0xe4);
    key_00 = uVar9;
  }
  else {
    iVar1 = *(int *)(TypeInfo_Protocol + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = *(System_Collections_Generic_Dictionary_byte__object__o **)(*(long *)(TypeInfo_Protocol + 0xb8) + 8);
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_byte__object__o **)(*(long *)(TypeInfo_Protocol + 0xb8) + 8);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    key_00 = 'C';
    bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(pSVar2,'C',MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_Protocol + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_Protocol + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)
                         **(undefined8 **)(TypeInfo_Protocol + 0xb8),(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar4 != '\0') {
        return;
      }
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomType);
      System_Object___ctor(pIVar5,(MethodInfo *)0x0);
      pIVar5[1].monitor = key;
      il2cpp_runtime_helper_022b4080(&pIVar5[1].monitor,key);
      *(undefined1 *)&pIVar5[1].klass = 0x43;
      pIVar5[2].klass = pIVar6;
      il2cpp_runtime_helper_022b4080(pIVar5 + 2,pIVar6);
      pIVar5[2].monitor = pMVar7;
      il2cpp_runtime_helper_022b4080(&pIVar5[2].monitor);
      key_00 = (uint8_t)pMVar7;
      if (*(int *)(TypeInfo_Protocol + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_byte__object__o **)(*(long *)(TypeInfo_Protocol + 0xb8) + 8)
      ;
      if (pSVar2 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
        pMVar8 = MethodInfo_Void_Add;
        key_00 = 'C';
        System_Collections_Generic_Dictionary_byte__object___Add(pSVar2,'C',pIVar5,MethodInfo_Void_Add);
        if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_Protocol + 0xb8)
            != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_Protocol + 0xb8),(Il2CppObject *)key,pIVar5,MethodInfo_Void_Add);
          return;
        }
      }
    }
  }
  pIVar5 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057abbfe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Protocol);
    g_data_057abbfe = '\x01';
  }
  if (*(int *)(TypeInfo_Protocol + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057abc07 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomType);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Protocol);
    g_data_057abc07 = '\x01';
    iVar1 = *(int *)(TypeInfo_Protocol + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Protocol + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = *(System_Collections_Generic_Dictionary_byte__object__o **)(*(long *)(TypeInfo_Protocol + 0xb8) + 8);
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_byte__object__o **)(*(long *)(TypeInfo_Protocol + 0xb8) + 8);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(pSVar2,key_00,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_Protocol + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_Protocol + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)
                         **(undefined8 **)(TypeInfo_Protocol + 0xb8),pIVar5,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar4 != '\0') {
        return;
      }
      __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomType);
      System_Object___ctor(__this,(MethodInfo *)0x0);
      __this[1].monitor = pIVar5;
      il2cpp_runtime_helper_022b4080(&__this[1].monitor,pIVar5);
      *(uint8_t *)&__this[1].klass = key_00;
      __this[3].klass = extraout_RDX;
      il2cpp_runtime_helper_022b4080(__this + 3,extraout_RDX);
      __this[3].monitor = pMVar8;
      il2cpp_runtime_helper_022b4080(&__this[3].monitor,pMVar8);
      if (*(int *)(TypeInfo_Protocol + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_byte__object__o **)(*(long *)(TypeInfo_Protocol + 0xb8) + 8)
      ;
      if (pSVar2 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
        System_Collections_Generic_Dictionary_byte__object___Add(pSVar2,key_00,__this,MethodInfo_Void_Add);
        if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_Protocol + 0xb8)
            != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_Protocol + 0xb8),pIVar5,__this,MethodInfo_Void_Add);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057abbff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonPeer);
    g_data_057abbff = '\x01';
  }
  lVar3 = *(long *)(TypeInfo_PhotonPeer + 0xb8);
  *(undefined2 *)(lVar3 + 0x10) = 0;
  *(undefined1 *)(lVar3 + 0x12) = 0;
  *(undefined4 *)(lVar3 + 0x14) = 0x4b0;
  *(undefined1 *)(lVar3 + 0x18) = 0;
  return;
}


// Photon.CustomSerialization$$Register
// il2cpp: void Photon_CustomSerialization__Register (const MethodInfo* method);
// 0x4481ea0

void Photon_CustomSerialization__Register(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar2;
  long lVar3;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *__this;
  System_Type_o *key;
  Il2CppClass *pIVar6;
  MethodInfo_304BE20 *pMVar7;
  MethodInfo_304BE20 *pMVar8;
  Il2CppClass *extraout_RDX;
  uint8_t uVar9;
  uint8_t key_00;
  
  if (g_data_057ae899 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_Color);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_DeserializeColor);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_SerializeColor);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeserializeMethod);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonPeer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SerializeMethod);
    g_data_057ae899 = '\x01';
  }
  handle.fields.value = TypeRef_Color.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  key = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  pIVar6 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_SerializeMethod);
  ExitGames_Client_Photon_SerializeMethod___ctor();
  pMVar7 = (MethodInfo_304BE20 *)il2cpp_runtime_helper_023052d0(TypeInfo_DeserializeMethod);
  ExitGames_Client_Photon_DeserializeMethod___ctor();
  if (*(int *)(TypeInfo_PhotonPeer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057abbfd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Protocol);
    g_data_057abbfd = '\x01';
  }
  if (*(int *)(TypeInfo_Protocol + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar9 = 'C';
  key_00 = 'C';
  pMVar8 = pMVar7;
  if (g_data_057abc06 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomType);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Protocol);
    g_data_057abc06 = '\x01';
    iVar1 = *(int *)(TypeInfo_Protocol + 0xe4);
    key_00 = uVar9;
  }
  else {
    iVar1 = *(int *)(TypeInfo_Protocol + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = *(System_Collections_Generic_Dictionary_byte__object__o **)(*(long *)(TypeInfo_Protocol + 0xb8) + 8);
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_byte__object__o **)(*(long *)(TypeInfo_Protocol + 0xb8) + 8);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    key_00 = 'C';
    bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(pSVar2,'C',MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_Protocol + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_Protocol + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)
                         **(undefined8 **)(TypeInfo_Protocol + 0xb8),(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar4 != '\0') {
        return;
      }
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomType);
      System_Object___ctor(pIVar5,(MethodInfo *)0x0);
      pIVar5[1].monitor = key;
      il2cpp_runtime_helper_022b4080(&pIVar5[1].monitor,key);
      *(undefined1 *)&pIVar5[1].klass = 0x43;
      pIVar5[2].klass = pIVar6;
      il2cpp_runtime_helper_022b4080(pIVar5 + 2,pIVar6);
      pIVar5[2].monitor = pMVar7;
      il2cpp_runtime_helper_022b4080(&pIVar5[2].monitor);
      key_00 = (uint8_t)pMVar7;
      if (*(int *)(TypeInfo_Protocol + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_byte__object__o **)(*(long *)(TypeInfo_Protocol + 0xb8) + 8)
      ;
      if (pSVar2 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
        pMVar8 = MethodInfo_Void_Add;
        key_00 = 'C';
        System_Collections_Generic_Dictionary_byte__object___Add(pSVar2,'C',pIVar5,MethodInfo_Void_Add);
        if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_Protocol + 0xb8)
            != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_Protocol + 0xb8),(Il2CppObject *)key,pIVar5,MethodInfo_Void_Add);
          return;
        }
      }
    }
  }
  pIVar5 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057abbfe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Protocol);
    g_data_057abbfe = '\x01';
  }
  if (*(int *)(TypeInfo_Protocol + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057abc07 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomType);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Protocol);
    g_data_057abc07 = '\x01';
    iVar1 = *(int *)(TypeInfo_Protocol + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Protocol + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = *(System_Collections_Generic_Dictionary_byte__object__o **)(*(long *)(TypeInfo_Protocol + 0xb8) + 8);
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_byte__object__o **)(*(long *)(TypeInfo_Protocol + 0xb8) + 8);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey(pSVar2,key_00,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_Protocol + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_Protocol + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)
                         **(undefined8 **)(TypeInfo_Protocol + 0xb8),pIVar5,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar4 != '\0') {
        return;
      }
      __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomType);
      System_Object___ctor(__this,(MethodInfo *)0x0);
      __this[1].monitor = pIVar5;
      il2cpp_runtime_helper_022b4080(&__this[1].monitor,pIVar5);
      *(uint8_t *)&__this[1].klass = key_00;
      __this[3].klass = extraout_RDX;
      il2cpp_runtime_helper_022b4080(__this + 3,extraout_RDX);
      __this[3].monitor = pMVar8;
      il2cpp_runtime_helper_022b4080(&__this[3].monitor,pMVar8);
      if (*(int *)(TypeInfo_Protocol + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_byte__object__o **)(*(long *)(TypeInfo_Protocol + 0xb8) + 8)
      ;
      if (pSVar2 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
        System_Collections_Generic_Dictionary_byte__object___Add(pSVar2,key_00,__this,MethodInfo_Void_Add);
        if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_Protocol + 0xb8)
            != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_Protocol + 0xb8),pIVar5,__this,MethodInfo_Void_Add);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057abbff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonPeer);
    g_data_057abbff = '\x01';
  }
  lVar3 = *(long *)(TypeInfo_PhotonPeer + 0xb8);
  *(undefined2 *)(lVar3 + 0x10) = 0;
  *(undefined1 *)(lVar3 + 0x12) = 0;
  *(undefined4 *)(lVar3 + 0x14) = 0x4b0;
  *(undefined1 *)(lVar3 + 0x18) = 0;
  return;
}


// Photon.CustomSerialization$$DeserializeColor
// il2cpp: Il2CppObject* Photon_CustomSerialization__DeserializeColor (System_Byte_array* data, const MethodInfo* method);
// 0x4481fc0

Il2CppObject * Photon_CustomSerialization__DeserializeColor(System_Byte_array *data,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  Il2CppObject *pIVar6;
  float *pfVar7;
  Il2CppObject *extraout_RAX;
  System_Byte_array *__this;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  __this = data;
  if (g_data_057ae89a == '\0') {
    __this = (System_Byte_array *)&TypeInfo_Color;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae89a = '\x01';
  }
  if (data != (System_Byte_array *)0x0) {
    uVar5 = (uint)data->max_length;
    if ((((uVar5 != 0) && (uVar5 != 1)) && (2 < uVar5)) && (uVar5 != 3)) {
      local_18 = (float)data->m_Items[0] / 255.0;
      local_14 = (float)data->m_Items[1] / 255.0;
      local_10 = (float)data->m_Items[2] / 255.0;
      local_c = (float)data->m_Items[3] / 255.0;
      pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Color,&local_18);
      return pIVar6;
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae89b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    g_data_057ae89b = '\x01';
  }
  if (__this != (System_Byte_array *)0x0) {
    if ((((__this->obj).klass)->_1).element_class != *(Il2CppClass **)(TypeInfo_Color + 0x40))
    goto label_04482198;
    pfVar7 = (float *)il2cpp_runtime_helper_02305440(__this);
    fVar1 = *pfVar7;
    fVar2 = pfVar7[1];
    fVar3 = pfVar7[2];
    fVar4 = pfVar7[3];
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
    if (pIVar6 != (Il2CppObject *)0x0) {
      uVar5 = *(uint *)&pIVar6[1].monitor;
      if (uVar5 != 0) {
        *(char *)&pIVar6[2].klass = (char)(int)(fVar1 * 255.0);
        if (uVar5 != 1) {
          *(char *)((long)&pIVar6[2].klass + 1) = (char)(int)(fVar2 * 255.0);
          if (2 < uVar5) {
            *(char *)((long)&pIVar6[2].klass + 2) = (char)(int)(fVar3 * 255.0);
            if (uVar5 != 3) {
              *(char *)((long)&pIVar6[2].klass + 3) = (char)(int)(fVar4 * 255.0);
              return pIVar6;
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04482198:
  il2cpp_runtime_helper_022b2fd0();
  System_Object___ctor(&__this->obj,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Photon.CustomSerialization$$SerializeColor
// il2cpp: System_Byte_array* Photon_CustomSerialization__SerializeColor (Il2CppObject* obj, const MethodInfo* method);
// 0x4482080

System_Byte_array * Photon_CustomSerialization__SerializeColor(Il2CppObject *obj,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  System_Byte_array *pSVar7;
  System_Byte_array *extraout_RAX;
  
  if (g_data_057ae89b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    g_data_057ae89b = '\x01';
  }
  if (obj != (Il2CppObject *)0x0) {
    if ((obj->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_Color + 0x40)) goto label_04482198;
    pfVar6 = (float *)il2cpp_runtime_helper_02305440(obj);
    fVar1 = *pfVar6;
    fVar2 = pfVar6[1];
    fVar3 = pfVar6[2];
    fVar4 = pfVar6[3];
    pSVar7 = (System_Byte_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
    if (pSVar7 != (System_Byte_array *)0x0) {
      uVar5 = (uint)pSVar7->max_length;
      if (uVar5 != 0) {
        pSVar7->m_Items[0] = (uint8_t)(int)(fVar1 * 255.0);
        if (uVar5 != 1) {
          pSVar7->m_Items[1] = (uint8_t)(int)(fVar2 * 255.0);
          if (2 < uVar5) {
            pSVar7->m_Items[2] = (uint8_t)(int)(fVar3 * 255.0);
            if (uVar5 != 3) {
              pSVar7->m_Items[3] = (uint8_t)(int)(fVar4 * 255.0);
              return pSVar7;
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04482198:
  il2cpp_runtime_helper_022b2fd0();
  System_Object___ctor(obj,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Photon.CustomSerialization$$.ctor
// il2cpp: void Photon_CustomSerialization___ctor (Photon_CustomSerialization_o* __this, const MethodInfo* method);
// 0x44821a0

void Photon_CustomSerialization___ctor(Photon_CustomSerialization_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


