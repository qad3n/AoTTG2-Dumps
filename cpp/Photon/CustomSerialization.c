// Type: Photon.CustomSerialization
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Photon/CustomSerialization.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ApplicationManagers/CustomSerialization.cs  [CHANGED since prior version]
// --------------------------------

// Photon.CustomSerialization$$Init
// il2cpp: void Photon_CustomSerialization__Init (const MethodInfo* method);
// 0x414ee80

void Photon_CustomSerialization__Init(MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_o *customType;
  ExitGames_Client_Photon_SerializeMethod_o *serializeMethod;
  ExitGames_Client_Photon_DeserializeMethod_o *constructor;
  
  if (DAT_057049d3 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_Color);
    il2cpp_init_method_metadata(&MethodInfo_Object_DeserializeColor);
    il2cpp_init_method_metadata(&MethodInfo_Byte___SerializeColor);
    il2cpp_init_method_metadata(&TypeInfo_DeserializeMethod);
    il2cpp_init_method_metadata(&TypeInfo_PhotonPeer);
    il2cpp_init_method_metadata(&TypeInfo_SerializeMethod);
    DAT_057049d3 = '\x01';
  }
  handle.fields.value = TypeRef_Color.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  customType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  serializeMethod = (ExitGames_Client_Photon_SerializeMethod_o *)il2cpp_runtime_glue(TypeInfo_SerializeMethod);
  ExitGames_Client_Photon_SerializeMethod___ctor();
  constructor = (ExitGames_Client_Photon_DeserializeMethod_o *)il2cpp_runtime_glue(TypeInfo_DeserializeMethod);
  ExitGames_Client_Photon_DeserializeMethod___ctor();
  if (*(int *)(TypeInfo_PhotonPeer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ExitGames_Client_Photon_PhotonPeer__RegisterType
            (customType,'C',serializeMethod,constructor,(MethodInfo *)0x0);
  return;
}


// Photon.CustomSerialization$$Register
// il2cpp: void Photon_CustomSerialization__Register (const MethodInfo* method);
// 0x414ee90

void Photon_CustomSerialization__Register(MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_o *customType;
  ExitGames_Client_Photon_SerializeMethod_o *serializeMethod;
  ExitGames_Client_Photon_DeserializeMethod_o *constructor;
  
  if (DAT_057049d3 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_Color);
    il2cpp_init_method_metadata(&MethodInfo_Object_DeserializeColor);
    il2cpp_init_method_metadata(&MethodInfo_Byte___SerializeColor);
    il2cpp_init_method_metadata(&TypeInfo_DeserializeMethod);
    il2cpp_init_method_metadata(&TypeInfo_PhotonPeer);
    il2cpp_init_method_metadata(&TypeInfo_SerializeMethod);
    DAT_057049d3 = '\x01';
  }
  handle.fields.value = TypeRef_Color.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  customType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  serializeMethod = (ExitGames_Client_Photon_SerializeMethod_o *)il2cpp_runtime_glue(TypeInfo_SerializeMethod);
  ExitGames_Client_Photon_SerializeMethod___ctor();
  constructor = (ExitGames_Client_Photon_DeserializeMethod_o *)il2cpp_runtime_glue(TypeInfo_DeserializeMethod);
  ExitGames_Client_Photon_DeserializeMethod___ctor();
  if (*(int *)(TypeInfo_PhotonPeer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ExitGames_Client_Photon_PhotonPeer__RegisterType
            (customType,'C',serializeMethod,constructor,(MethodInfo *)0x0);
  return;
}


// Photon.CustomSerialization$$DeserializeColor
// il2cpp: Il2CppObject* Photon_CustomSerialization__DeserializeColor (System_Byte_array* data, const MethodInfo* method);
// 0x414efb0

Il2CppObject *
Photon_CustomSerialization__DeserializeColor(System_Byte_array *data,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if (DAT_057049d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color);
    DAT_057049d4 = '\x01';
  }
  if (data != (System_Byte_array *)0x0) {
    uVar1 = (uint)data->max_length;
    if ((((uVar1 != 0) && (uVar1 != 1)) && (2 < uVar1)) && (uVar1 != 3)) {
      local_18 = (float)data->m_Items[0] / 255.0;
      local_14 = (float)data->m_Items[1] / 255.0;
      local_10 = (float)data->m_Items[2] / 255.0;
      local_c = (float)data->m_Items[3] / 255.0;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Color,&local_18);
      return pIVar2;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Photon.CustomSerialization$$SerializeColor
// il2cpp: System_Byte_array* Photon_CustomSerialization__SerializeColor (Il2CppObject* obj, const MethodInfo* method);
// 0x414f070

System_Byte_array * Photon_CustomSerialization__SerializeColor(Il2CppObject *obj,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  System_Byte_array *pSVar7;
  
  if (DAT_057049d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_byte);
    il2cpp_init_method_metadata(&TypeInfo_Color);
    DAT_057049d5 = '\x01';
  }
  if (obj != (Il2CppObject *)0x0) {
    if ((obj->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_Color + 0x40)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(obj);
    }
    pfVar6 = (float *)il2cpp_glue_022c7330(obj);
    fVar1 = *pfVar6;
    fVar2 = pfVar6[1];
    fVar3 = pfVar6[2];
    fVar4 = pfVar6[3];
    pSVar7 = (System_Byte_array *)il2cpp_glue_02274930(TypeInfo_byte,4);
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
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Photon.CustomSerialization$$.ctor
// il2cpp: void Photon_CustomSerialization___ctor (Photon_CustomSerialization_o* __this, const MethodInfo* method);
// 0x414f190

void Photon_CustomSerialization___ctor(Photon_CustomSerialization_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


