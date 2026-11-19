// Type: Photon.CustomSerialization
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Photon/CustomSerialization.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/CustomSerialization.cs
// --------------------------------

// Photon.CustomSerialization$$Init
// il2cpp: void Photon_CustomSerialization__Init (const MethodInfo* method);
// 0x5ddc380

void Photon_CustomSerialization__Init(MethodInfo *method)

{
  Photon_CustomSerialization__Register(method);
  return;
}


// Photon.CustomSerialization$$Register
// il2cpp: void Photon_CustomSerialization__Register (const MethodInfo* method);
// 0x5ddc390

void Photon_CustomSerialization__Register(MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_o *customType;
  ExitGames_Client_Photon_SerializeMethod_o *__this;
  ExitGames_Client_Photon_DeserializeMethod_o *__this_00;
  
  if (Il2CppMethodInitialized_07548254 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Color);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Photon_CustomSerialization_DeserializeColor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Photon_CustomSerialization_SerializeColor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ExitGames_Client_Photon_DeserializeMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ExitGames_Client_Photon_PhotonPeer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ExitGames_Client_Photon_SerializeMethod);
    Il2CppMethodInitialized_07548254 = '\x01';
  }
  handle = TypeRef_UnityEngine_Color;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  customType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ExitGames_Client_Photon_SerializeMethod);
  ExitGames_Client_Photon_SerializeMethod___ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Photon_CustomSerialization_SerializeColor,
             (MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ExitGames_Client_Photon_DeserializeMethod);
  ExitGames_Client_Photon_DeserializeMethod___ctor
            (__this_00,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Photon_CustomSerialization_DeserializeColor,
             (MethodInfo *)0x0);
  if ((TypeInfo_ExitGames_Client_Photon_PhotonPeer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ExitGames_Client_Photon_PhotonPeer);
  }
  ExitGames_Client_Photon_PhotonPeer__RegisterType(customType,0x43,__this,__this_00,(MethodInfo *)0x0);
  return;
}


// Photon.CustomSerialization$$DeserializeColor
// il2cpp: Il2CppObject* Photon_CustomSerialization__DeserializeColor (System_Byte_array* data, const MethodInfo* method);
// 0x5ddc4b0

Il2CppObject * Photon_CustomSerialization__DeserializeColor(System_Byte_array *data,MethodInfo *method)

{
  uint uVar1;
  undefined1 auVar2 [14];
  undefined4 uVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [11];
  undefined1 auVar6 [11];
  undefined1 auVar7 [11];
  uint5 uVar8;
  undefined1 auVar9 [11];
  undefined1 auVar10 [11];
  undefined1 auVar11 [14];
  uint6 uVar12;
  Il2CppObject *pIVar13;
  undefined1 auVar14 [16];
  undefined1 local_18 [16];
  
  if (Il2CppMethodInitialized_07548255 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    Il2CppMethodInitialized_07548255 = '\x01';
  }
  if (data == (System_Byte_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (uint)data->max_length;
  if ((((uVar1 == 0) || (uVar1 == 1)) || (uVar1 < 3)) || (uVar1 == 3)) {
    ThrowIndexOutOfRangeException();
  }
  uVar3 = *(undefined4 *)data->m_Items;
  uVar8 = CONCAT41(SUB114(ZEXT811(0),7),(char)((uint)uVar3 >> 0x18));
  auVar9._5_6_ = 0;
  auVar9._0_5_ = uVar8;
  auVar5[4] = (char)((uint)uVar3 >> 0x10);
  auVar5._0_4_ = uVar3;
  auVar5._5_6_ = SUB116(auVar9 << 0x30,5);
  auVar10._7_4_ = 0;
  auVar10._0_7_ = auVar5._4_7_;
  auVar6[2] = (char)((uint)uVar3 >> 8);
  auVar6._0_2_ = (ushort)uVar3;
  auVar6._3_8_ = SUB118(auVar10 << 0x20,3);
  auVar7._2_9_ = auVar6._2_9_;
  auVar7._0_2_ = (ushort)uVar3 & 0xff;
  auVar2._10_2_ = 0;
  auVar2._0_10_ = auVar7._0_10_;
  auVar2._12_2_ = (short)uVar8;
  uVar12 = CONCAT42(auVar2._10_4_,auVar5._4_2_);
  auVar11._6_8_ = 0;
  auVar11._0_6_ = uVar12;
  auVar4._4_2_ = auVar6._2_2_;
  auVar4._0_4_ = auVar7._0_4_;
  auVar4._6_8_ = SUB148(auVar11 << 0x40,6);
  auVar14._0_4_ = (float)(auVar7._0_4_ & 0xffff);
  auVar14._4_4_ = (float)auVar4._4_4_;
  auVar14._8_4_ = (float)(int)uVar12;
  auVar14._12_4_ = (float)(auVar2._10_4_ >> 0x10);
  local_18 = divps(auVar14,_DAT_010052a0);
  pIVar13 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Color,local_18);
  return pIVar13;
}


// Photon.CustomSerialization$$SerializeColor
// il2cpp: System_Byte_array* Photon_CustomSerialization__SerializeColor (Il2CppObject* obj, const MethodInfo* method);
// 0x5ddc550

System_Byte_array * Photon_CustomSerialization__SerializeColor(Il2CppObject *obj,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  System_Byte_array *pSVar7;
  
  if (Il2CppMethodInitialized_07548256 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    Il2CppMethodInitialized_07548256 = '\x01';
  }
  if (obj != (Il2CppObject *)0x0) {
    if ((obj->klass->_1).element_class != (TypeInfo_UnityEngine_Color->_1).element_class) {
      il2cpp_codegen_raise_invalid_cast_exception(obj);
    }
    pfVar6 = il2cpp_vm_Object_Unbox(obj);
    fVar1 = *pfVar6;
    fVar2 = pfVar6[1];
    fVar3 = pfVar6[2];
    fVar4 = pfVar6[3];
    pSVar7 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,4);
    if (pSVar7 != (System_Byte_array *)0x0) {
      uVar5 = (uint)pSVar7->max_length;
      if ((((uVar5 == 0) || (pSVar7->m_Items[0] = (uint8_t)(int)(fVar1 * 255.0), uVar5 == 1)) ||
          (pSVar7->m_Items[1] = (uint8_t)(int)(fVar2 * 255.0), uVar5 < 3)) ||
         (pSVar7->m_Items[2] = (uint8_t)(int)(fVar3 * 255.0), uVar5 == 3)) {
        ThrowIndexOutOfRangeException();
      }
      pSVar7->m_Items[3] = (uint8_t)(int)(fVar4 * 255.0);
      return pSVar7;
    }
  }
  ThrowNullReferenceException();
}


// Photon.CustomSerialization$$.ctor
// il2cpp: void Photon_CustomSerialization___ctor (Photon_CustomSerialization_o* __this, const MethodInfo* method);
// 0x5ddc670

void Photon_CustomSerialization___ctor(Photon_CustomSerialization_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


