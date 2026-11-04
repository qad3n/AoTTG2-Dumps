// Type: Photon.CustomSerialization
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Photon/CustomSerialization.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/CustomSerialization.cs
// --------------------------------

// Photon.CustomSerialization$$Init
// il2cpp: void Photon_CustomSerialization__Init (const MethodInfo* method);
// 0x182334bf0

void
Photon_CustomSerialization__Init(MethodInfo* method)

{
  Il2CppType *handle;
  System_Type_o *customType;
  ExitGames_Client_Photon_SerializeMethod_o *serializeMethod;
  ExitGames_Client_Photon_DeserializeMethod_o *__this;
  
  if (Il2CppMethodInitialized_1843477bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Color);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Photon_CustomSerialization_DeserializeColor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Photon_CustomSerialization_SerializeColor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ExitGames_Client_Photon_DeserializeMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ExitGames_Client_Photon_PhotonPeer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ExitGames_Client_Photon_SerializeMethod);
    Il2CppMethodInitialized_1843477bc = '\x01';
  }
  handle = TypeRef_UnityEngine_Color;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  customType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  serializeMethod = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ExitGames_Client_Photon_SerializeMethod)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)serializeMethod,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Photon_CustomSerialization_SerializeColor,(MethodInfo_16E67D0 *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ExitGames_Client_Photon_DeserializeMethod);
  ExitGames_Client_Photon_DeserializeMethod___ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Photon_CustomSerialization_DeserializeColor,
             (MethodInfo *)0x0);
  if ((TypeInfo_ExitGames_Client_Photon_PhotonPeer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ExitGames_Client_Photon_PhotonPeer);
  }
  ExitGames_Client_Photon_PhotonPeer__RegisterType(customType,'C',serializeMethod,__this,(MethodInfo *)0x0);
  return;
}


// Photon.CustomSerialization$$Register
// il2cpp: void Photon_CustomSerialization__Register (const MethodInfo* method);
// 0x182334bf0

void Photon_CustomSerialization__Register(MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_o *customType;
  ExitGames_Client_Photon_SerializeMethod_o *serializeMethod;
  ExitGames_Client_Photon_DeserializeMethod_o *__this;
  
  if (Il2CppMethodInitialized_1843477bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Color);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Photon_CustomSerialization_DeserializeColor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Photon_CustomSerialization_SerializeColor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ExitGames_Client_Photon_DeserializeMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ExitGames_Client_Photon_PhotonPeer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ExitGames_Client_Photon_SerializeMethod);
    Il2CppMethodInitialized_1843477bc = '\x01';
  }
  handle = TypeRef_UnityEngine_Color;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  customType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  serializeMethod = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ExitGames_Client_Photon_SerializeMethod)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)serializeMethod,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Photon_CustomSerialization_SerializeColor,(MethodInfo_16E67D0 *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ExitGames_Client_Photon_DeserializeMethod);
  ExitGames_Client_Photon_DeserializeMethod___ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Photon_CustomSerialization_DeserializeColor,
             (MethodInfo *)0x0);
  if ((TypeInfo_ExitGames_Client_Photon_PhotonPeer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ExitGames_Client_Photon_PhotonPeer);
  }
  ExitGames_Client_Photon_PhotonPeer__RegisterType(customType,'C',serializeMethod,__this,(MethodInfo *)0x0);
  return;
}


// Photon.CustomSerialization$$DeserializeColor
// il2cpp: Il2CppObject* Photon_CustomSerialization__DeserializeColor (System_Byte_array* data, const MethodInfo* method);
// 0x182334b20

Il2CppObject * Photon_CustomSerialization__DeserializeColor(System_Byte_array *data,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if (Il2CppMethodInitialized_1843477bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    Il2CppMethodInitialized_1843477bd = '\x01';
  }
  if (data != (System_Byte_array *)0x0) {
    if (((((int)data->max_length != 0) &&
         (local_18 = (float)data->m_Items[0] / 255.0, 1 < (uint)data->max_length)) &&
        (local_14 = (float)data->m_Items[1] / 255.0, 2 < (uint)data->max_length)) &&
       (local_10 = (float)data->m_Items[2] / 255.0, 3 < (uint)data->max_length)) {
      local_c = (float)data->m_Items[3] / 255.0;
      pIVar1 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Color,&local_18);
      return pIVar1;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Photon.CustomSerialization$$SerializeColor
// il2cpp: System_Byte_array* Photon_CustomSerialization__SerializeColor (Il2CppObject* obj, const MethodInfo* method);
// 0x182334d10

System_Byte_array * Photon_CustomSerialization__SerializeColor(Il2CppObject *obj,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  System_Byte_array *pSVar6;
  
  if (Il2CppMethodInitialized_1843477be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    Il2CppMethodInitialized_1843477be = '\x01';
  }
  if (obj != (Il2CppObject *)0x0) {
    if ((obj->klass->_1).element_class != (TypeInfo_UnityEngine_Color->_1).element_class) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pfVar5 = il2cpp_object_unbox(obj);
    fVar1 = *pfVar5;
    fVar2 = pfVar5[1];
    fVar3 = pfVar5[2];
    fVar4 = pfVar5[3];
    pSVar6 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,4);
    if (pSVar6 != (System_Byte_array *)0x0) {
      if (((((int)pSVar6->max_length != 0) &&
           (pSVar6->m_Items[0] = (uint8_t)(int)(fVar1 * 255.0), 1 < (uint)pSVar6->max_length)) &&
          (pSVar6->m_Items[1] = (uint8_t)(int)(fVar2 * 255.0), 2 < (uint)pSVar6->max_length)) &&
         (pSVar6->m_Items[2] = (uint8_t)(int)(fVar3 * 255.0), 3 < (uint)pSVar6->max_length)) {
        pSVar6->m_Items[3] = (uint8_t)(int)(fVar4 * 255.0);
        return pSVar6;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Photon.CustomSerialization$$.ctor
// il2cpp: void Photon_CustomSerialization___ctor (Photon_CustomSerialization_o* __this, const MethodInfo* method);
// 0x18054c890

void
Photon_CustomSerialization___ctor(Photon_CustomSerialization_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


