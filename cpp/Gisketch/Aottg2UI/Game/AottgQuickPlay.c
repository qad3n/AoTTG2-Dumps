// Type: Gisketch.Aottg2UI.Game.AottgQuickPlay
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgQuickPlay.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgQuickPlay.RegionPing$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing___ctor (Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o* __this, Gisketch_Aottg2UI_Game_AottgServerRegion_o region, Photon_Realtime_Region_o* photonRegion, Photon_Realtime_RegionPinger_o* pinger, const MethodInfo* method);
// 0x58c8fc0

void Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing___ctor
               (Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o *__this,
               Gisketch_Aottg2UI_Game_AottgServerRegion_o region,Photon_Realtime_Region_o *photonRegion,
               Photon_Realtime_RegionPinger_o *pinger,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgServerRegion_o *pGVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Region.fields.LabelPoint.fields = region.fields.LabelPoint.fields;
  pGVar1 = &(__this->fields).Region;
  (pGVar1->fields).MaskArea.fields.m_XMin = region.fields.MaskArea.fields.m_XMin;
  (pGVar1->fields).MaskArea.fields.m_YMin = region.fields.MaskArea.fields.m_YMin;
  pGVar1 = &(__this->fields).Region;
  (pGVar1->fields).MaskArea.fields.m_Width = region.fields.MaskArea.fields.m_Width;
  (pGVar1->fields).MaskArea.fields.m_Height = region.fields.MaskArea.fields.m_Height;
  (__this->fields).Region.fields.Region = region.fields.Region;
  *(undefined4 *)&(__this->fields).Region.fields.field_0x14 = region.fields._20_4_;
  (__this->fields).Region.fields.MaskSprite = region.fields.MaskSprite;
  (__this->fields).Region.fields.Id = region.fields.Id;
  (__this->fields).Region.fields.Label = region.fields.Label;
  Il2CppCodeGenWriteBarrier((void **)&__this->fields);
  (__this->fields)._photonRegion = photonRegion;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._photonRegion);
  (__this->fields)._pinger = pinger;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pinger);
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.RegionPing$$get_Ms
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing__get_Ms (Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o* __this, const MethodInfo* method);
// 0x58c9ce0

int32_t Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing__get_Ms
                  (Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o *__this,MethodInfo *method)

{
  Photon_Realtime_Region_o *pPVar1;
  
  pPVar1 = (__this->fields)._photonRegion;
  if (pPVar1 == (Photon_Realtime_Region_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pPVar1->fields)._Ping_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.RegionPing$$get_Done
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing__get_Done (Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o* __this, const MethodInfo* method);
// 0x58c9d00

bool Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing__get_Done
               (Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o *__this,MethodInfo *method)

{
  Photon_Realtime_RegionPinger_o *pPVar1;
  
  pPVar1 = (__this->fields)._pinger;
  if (pPVar1 == (Photon_Realtime_RegionPinger_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pPVar1->fields)._Done_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay___c___cctor (const MethodInfo* method);
// 0x58c9d20

void Gisketch_Aottg2UI_Game_AottgQuickPlay___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754543b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c);
    Il2CppMethodInitialized_0754543b = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgQuickPlay___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay___c___ctor (Gisketch_Aottg2UI_Game_AottgQuickPlay___c_o* __this, const MethodInfo* method);
// 0x58c9d90

void Gisketch_Aottg2UI_Game_AottgQuickPlay___c___ctor
               (Gisketch_Aottg2UI_Game_AottgQuickPlay___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c$$<FindNearbyRegions>b__28_1
// il2cpp: Gisketch_Aottg2UI_Game_AottgServerRegion_o Gisketch_Aottg2UI_Game_AottgQuickPlay___c___FindNearbyRegions_b__28_1 (Gisketch_Aottg2UI_Game_AottgQuickPlay___c_o* __this, Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o* ping, const MethodInfo* method);
// 0x58c9da0

Gisketch_Aottg2UI_Game_AottgServerRegion_o *
Gisketch_Aottg2UI_Game_AottgQuickPlay___c___FindNearbyRegions_b__28_1
          (Gisketch_Aottg2UI_Game_AottgServerRegion_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Game_AottgQuickPlay___c_o *__this,
          Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o *ping,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Game_AottgServerRegion_o *pGVar4;
  Gisketch_Aottg2UI_Game_AottgServerRegion_o *pGVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int32_t iVar9;
  undefined4 uVar10;
  
  if (ping == (Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__return_storage_ptr__->fields).LabelPoint.fields = (ping->fields).Region.fields.LabelPoint.fields;
  pSVar1 = (ping->fields).Region.fields.Id;
  pSVar2 = (ping->fields).Region.fields.Label;
  iVar9 = (ping->fields).Region.fields.Region;
  uVar10 = *(undefined4 *)&(ping->fields).Region.fields.field_0x14;
  pSVar3 = (ping->fields).Region.fields.MaskSprite;
  pGVar4 = &(ping->fields).Region;
  fVar6 = (pGVar4->fields).MaskArea.fields.m_YMin;
  pGVar5 = &(ping->fields).Region;
  fVar7 = (pGVar5->fields).MaskArea.fields.m_Width;
  fVar8 = (pGVar5->fields).MaskArea.fields.m_Height;
  (__return_storage_ptr__->fields).MaskArea.fields.m_XMin = (pGVar4->fields).MaskArea.fields.m_XMin;
  (__return_storage_ptr__->fields).MaskArea.fields.m_YMin = fVar6;
  (__return_storage_ptr__->fields).MaskArea.fields.m_Width = fVar7;
  (__return_storage_ptr__->fields).MaskArea.fields.m_Height = fVar8;
  (__return_storage_ptr__->fields).Region = iVar9;
  *(undefined4 *)&(__return_storage_ptr__->fields).field_0x14 = uVar10;
  (__return_storage_ptr__->fields).MaskSprite = pSVar3;
  (__return_storage_ptr__->fields).Id = pSVar1;
  (__return_storage_ptr__->fields).Label = pSVar2;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c$$<StartPings>b__30_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay___c___StartPings_b__30_0 (Gisketch_Aottg2UI_Game_AottgQuickPlay___c_o* __this, Photon_Realtime_Region_o* __, const MethodInfo* method);
// 0x58c9dd0

void Gisketch_Aottg2UI_Game_AottgQuickPlay___c___StartPings_b__30_0
               (Gisketch_Aottg2UI_Game_AottgQuickPlay___c_o *__this,Photon_Realtime_Region_o *__,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c$$<WaitForPings>b__31_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgQuickPlay___c___WaitForPings_b__31_0 (Gisketch_Aottg2UI_Game_AottgQuickPlay___c_o* __this, Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o* ping, const MethodInfo* method);
// 0x58c9de0

bool Gisketch_Aottg2UI_Game_AottgQuickPlay___c___WaitForPings_b__31_0
               (Gisketch_Aottg2UI_Game_AottgQuickPlay___c_o *__this,
               Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o *ping,MethodInfo *method)

{
  Photon_Realtime_RegionPinger_o *pPVar1;
  
  if ((ping == (Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o *)0x0) ||
     (pPVar1 = (ping->fields)._pinger, pPVar1 == (Photon_Realtime_RegionPinger_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pPVar1->fields)._Done_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c$$<Reachable>b__32_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgQuickPlay___c___Reachable_b__32_0 (Gisketch_Aottg2UI_Game_AottgQuickPlay___c_o* __this, Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o* ping, const MethodInfo* method);
// 0x58c9e00

bool Gisketch_Aottg2UI_Game_AottgQuickPlay___c___Reachable_b__32_0
               (Gisketch_Aottg2UI_Game_AottgQuickPlay___c_o *__this,
               Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o *ping,MethodInfo *method)

{
  int iVar1;
  Photon_Realtime_RegionPinger_o *pPVar2;
  Photon_Realtime_Region_o *pPVar3;
  
  if (Il2CppMethodInitialized_0754543c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Realtime_RegionPinger);
    Il2CppMethodInitialized_0754543c = '\x01';
  }
  if ((ping != (Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o *)0x0) &&
     (pPVar2 = (ping->fields)._pinger, pPVar2 != (Photon_Realtime_RegionPinger_o *)0x0)) {
    if ((pPVar2->fields)._Done_k__BackingField == false) {
      return false;
    }
    pPVar3 = (ping->fields)._photonRegion;
    if (pPVar3 != (Photon_Realtime_Region_o *)0x0) {
      iVar1 = (pPVar3->fields)._Ping_k__BackingField;
      if ((TypeInfo_Photon_Realtime_RegionPinger->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Realtime_RegionPinger);
      }
      return iVar1 < TypeInfo_Photon_Realtime_RegionPinger->static_fields->PingWhenFailed;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c$$<Reachable>b__32_1
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgQuickPlay___c___Reachable_b__32_1 (Gisketch_Aottg2UI_Game_AottgQuickPlay___c_o* __this, Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o* ping, const MethodInfo* method);
// 0x58c9e90

int32_t Gisketch_Aottg2UI_Game_AottgQuickPlay___c___Reachable_b__32_1
                  (Gisketch_Aottg2UI_Game_AottgQuickPlay___c_o *__this,
                  Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o *ping,MethodInfo *method)

{
  Photon_Realtime_Region_o *pPVar1;
  
  if ((ping == (Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o *)0x0) ||
     (pPVar1 = (ping->fields)._photonRegion, pPVar1 == (Photon_Realtime_Region_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pPVar1->fields)._Ping_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c$$<HostGame>b__39_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgQuickPlay___c___HostGame_b__39_0 (Gisketch_Aottg2UI_Game_AottgQuickPlay___c_o* __this, Map_Experience_o* item, const MethodInfo* method);
// 0x58c9eb0

bool Gisketch_Aottg2UI_Game_AottgQuickPlay___c___HostGame_b__39_0
               (Gisketch_Aottg2UI_Game_AottgQuickPlay___c_o *__this,Map_Experience_o *item,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_0754543d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Casual");
    il2cpp_codegen_initialize_runtime_metadata(&"VS Titans");
    il2cpp_codegen_initialize_runtime_metadata(&"Waves");
    Il2CppMethodInitialized_0754543d = '\x01';
  }
  if (item == (Map_Experience_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__op_Equality((item->fields).Category,"Casual",(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = System_String__op_Equality((item->fields).SubCategory,"VS Titans",(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = System_String__op_Equality((item->fields).Name,"Waves",(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass26_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_0___ctor (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x58c9f40

void Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_0___ctor
               (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass26_0$$<QuickPlay>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_0___QuickPlay_b__0 (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_0_o* __this, bool result, const MethodInfo* method);
// 0x58c9f50

void Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_0___QuickPlay_b__0
               (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_0_o *__this,bool result,
               MethodInfo *method)

{
  (__this->fields).inLobby = result;
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass26_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_1___ctor (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_1_o* __this, const MethodInfo* method);
// 0x58c9f60

void Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_1___ctor
               (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass26_1$$<QuickPlay>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_1___QuickPlay_b__1 (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_1_o* __this, bool result, const MethodInfo* method);
// 0x58c9f70

void Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_1___QuickPlay_b__1
               (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_1_o *__this,bool result,
               MethodInfo *method)

{
  (__this->fields).joined = result;
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass28_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass28_0___ctor (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass28_0_o* __this, const MethodInfo* method);
// 0x58c9f80

void Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass28_0___ctor
               (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass28_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass28_0$$<FindNearbyRegions>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass28_0___FindNearbyRegions_b__0 (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass28_0_o* __this, Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o* ping, const MethodInfo* method);
// 0x58c9f90

bool Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass28_0___FindNearbyRegions_b__0
               (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass28_0_o *__this,
               Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o *ping,MethodInfo *method)

{
  System_Collections_Generic_List_AottgQuickPlay_RegionPing__o *__this_00;
  Photon_Realtime_Region_o *pPVar1;
  Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o *pGVar2;
  
  if (Il2CppMethodInitialized_0754543e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgQuickPlay_RegionPing_get_Item);
    Il2CppMethodInitialized_0754543e = '\x01';
  }
  __this_00 = (__this->fields).reachable;
  if (__this_00 != (System_Collections_Generic_List_AottgQuickPlay_RegionPing__o *)0x0) {
    pGVar2 = (Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o *)
             System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,0,
                        (MethodInfo_395CF20 *)
                        MethodInfo_System_Collections_Generic_List_AottgQuickPlay_RegionPing_get_Item);
    if (pGVar2 == ping) {
      return true;
    }
    if ((ping != (Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o *)0x0) &&
       (pPVar1 = (ping->fields)._photonRegion, pPVar1 != (Photon_Realtime_Region_o *)0x0)) {
      return (pPVar1->fields)._Ping_k__BackingField < 0x97;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass30_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass30_0___ctor (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x58c8fb0

void Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass30_0___ctor
               (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass30_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass30_0$$<StartPings>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass30_0___StartPings_b__1 (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass30_0_o* __this, Il2CppObject* __, const MethodInfo* method);
// 0x58ca010

void Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass30_0___StartPings_b__1
               (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass30_0_o *__this,Il2CppObject *__,
               MethodInfo *method)

{
  Photon_Realtime_RegionPinger_o *__this_00;
  
  __this_00 = (__this->fields).pinger;
  if (__this_00 == (Photon_Realtime_RegionPinger_o *)0x0) {
    ThrowNullReferenceException();
  }
  Photon_Realtime_RegionPinger__Start(__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass37_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass37_0___ctor (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass37_0_o* __this, const MethodInfo* method);
// 0x58c9660

void Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass37_0___ctor
               (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass37_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass37_0$$<PickRoom>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass37_0___PickRoom_b__0 (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass37_0_o* __this, Photon_Realtime_RoomInfo_o* room, const MethodInfo* method);
// 0x58ca030
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ca06a: jmp 0x58ca0bf
// asm:   0x58ca119: cmp byte ptr [rip + 0x1c7b345], 0
// asm:   0x58ca120: je 0x58ca1e4

bool Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass37_0___PickRoom_b__0
               (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass37_0_o *__this,
               Photon_Realtime_RoomInfo_o *room,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar2;
  System_String_o *a;
  Photon_Realtime_RoomInfo_o *pPVar3;
  
  pPVar3 = room;
  if (Il2CppMethodInitialized_0754543f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    Il2CppMethodInitialized_0754543f = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    bVar2 = Gisketch_Aottg2UI_Game_AottgRoomList__IsValid(room,(MethodInfo *)pPVar3);
  }
  else {
    bVar2 = Gisketch_Aottg2UI_Game_AottgRoomList__IsValid(room,(MethodInfo *)pPVar3);
  }
  if (bVar2) {
    if ((room == (Photon_Realtime_RoomInfo_o *)0x0) ||
       (__this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).tried,
       __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) {
      ThrowNullReferenceException();
    }
    bVar2 = System_Collections_Generic_HashSet_object___Contains
                      (__this_00,(Il2CppObject *)(room->fields).name,
                       (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    if (((!bVar2) && ((room->fields).isOpen != false)) &&
       ((room->fields)._PlayerCount_k__BackingField < (room->fields).maxPlayers)) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
      }
      if (Il2CppMethodInitialized_07545465 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
        il2cpp_codegen_initialize_runtime_metadata(&"");
        Il2CppMethodInitialized_07545465 = '\x01';
        uVar1 = (TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = (((Il2CppClass *)TypeInfo_GameManagers_RoomProperty)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
      }
      a = PhotonExtensions__GetStringProperty_5751c40
                    (room,TypeInfo_GameManagers_RoomProperty->static_fields->PasswordHash,
                     "",(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality
                        (a,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
      if (bVar2) {
        if ((__this->fields).loggedIn != false) {
          return true;
        }
        if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
        }
        bVar2 = PhotonExtensions__GetBoolProperty_5751cd0
                          (room,TypeInfo_GameManagers_RoomProperty->static_fields->AccountRequired,false,
                           (MethodInfo *)0x0);
        return !bVar2;
      }
      return false;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass38_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass38_0___ctor (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass38_0_o* __this, const MethodInfo* method);
// 0x58ca3e0

void Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass38_0___ctor
               (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass38_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass38_0$$<Host>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass38_0___Host_b__0 (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass38_0_o* __this, bool result, const MethodInfo* method);
// 0x58ca3f0

void Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass38_0___Host_b__0
               (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass38_0_o *__this,bool result,
               MethodInfo *method)

{
  (__this->fields).inLobby = result;
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<ConnectToLobby>d__34$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34___ctor (Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x58c93b0

void Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34___ctor
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<ConnectToLobby>d__34$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34_o* __this, const MethodInfo* method);
// 0x58ca400

void Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34_o *__this,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<ConnectToLobby>d__34$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34__MoveNext (Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34_o* __this, const MethodInfo* method);
// 0x58ca410
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ca48a: jmp 0x58ca539

bool Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34__MoveNext
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_MultiplayerSettings_o *pSVar2;
  System_Action_bool__o *pSVar3;
  bool bVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07545440 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07545440 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
  }
  else {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
label_058ca4dc:
      fVar5 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
      if (fVar5 < (__this->fields)._deadline_5__2) {
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
          bVar4 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
          if (bVar4) goto label_058ca50b;
        }
        else {
          bVar4 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
          if (bVar4) {
label_058ca50b:
            (__this->fields).__2__current = (Il2CppObject *)0x0;
            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
            (__this->fields).__1__state = 1;
            return true;
          }
        }
      }
    }
    else {
      if (iVar1 != 0) {
        return false;
      }
      (__this->fields).__1__state = -1;
      fVar5 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
      (__this->fields)._deadline_5__2 = fVar5 + 12.0;
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        bVar4 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
        if (bVar4) goto label_058ca4b8;
      }
      else {
        bVar4 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
        if (bVar4) {
label_058ca4b8:
          pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
          if (pSVar2 == (Settings_MultiplayerSettings_o *)0x0) goto label_058ca5f7;
          Settings_MultiplayerSettings__Disconnect(pSVar2,(MethodInfo *)0x0);
          goto label_058ca4dc;
        }
      }
    }
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
    if (pSVar2 == (Settings_MultiplayerSettings_o *)0x0) goto label_058ca5f7;
    Settings_MultiplayerSettings__ConnectServer(pSVar2,(__this->fields).region,(MethodInfo *)0x0);
  }
  fVar5 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
  if (fVar5 < (__this->fields)._deadline_5__2) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      bVar4 = Photon_Pun_PhotonNetwork__get_InLobby((MethodInfo *)0x0);
    }
    else {
      bVar4 = Photon_Pun_PhotonNetwork__get_InLobby((MethodInfo *)0x0);
    }
    if (!bVar4) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 2;
      return true;
    }
  }
  pSVar3 = (__this->fields).done;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar4 = Photon_Pun_PhotonNetwork__get_InLobby((MethodInfo *)0x0);
  if (pSVar3 != (System_Action_bool__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,bVar4,(pSVar3->fields).method);
    return false;
  }
label_058ca5f7:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<ConnectToLobby>d__34$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34_o* __this, const MethodInfo* method);
// 0x58ca600

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<ConnectToLobby>d__34$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34_o* __this, const MethodInfo* method);
// 0x58ca610

void Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_ConnectToLobby_d__34_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<ConnectToLobby>d__34$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34_o* __this, const MethodInfo* method);
// 0x58ca650

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<FindNearbyRegions>d__28$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28___ctor (Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x58c8f90

void Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28___ctor
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<FindNearbyRegions>d__28$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28_o* __this, const MethodInfo* method);
// 0x58ca660

void Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28_o *__this,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<FindNearbyRegions>d__28$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28__MoveNext (Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28_o* __this, const MethodInfo* method);
// 0x58ca670
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ca88e: cmp byte ptr [rip + 0x1c7ab99], 0
// asm:   0x58ca895: jne 0x58ca8aa
// asm:   0x58ca93e: jmp 0x58cab89
// asm:   0x58caa95: jmp 0x58caab0
// asm:   0x58cab84: jmp 0x58ca8aa

bool Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28__MoveNext
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28_o *__this,MethodInfo *method)

{
  int iVar1;
  uint32_t uVar2;
  System_Collections_Generic_List_AottgServerRegion__o *__this_00;
  Il2CppObject *object;
  Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass28_0_o *pGVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31_o *pGVar5;
  System_Collections_Generic_List_AottgQuickPlay_RegionPing__o *pSVar6;
  System_Func_AottgQuickPlay_RegionPing__bool__o *__this_01;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  Gisketch_Aottg2UI_Game_AottgQuickPlay___c_StaticFields *pGVar7;
  System_Func_T__TResult__o *__this_02;
  System_Collections_Generic_IEnumerable_TResult__o *collection;
  Gisketch_Aottg2UI_Game_AottgQuickPlay_c *pGVar8;
  Il2CppClass *klass;
  float fVar9;
  
  if (Il2CppMethodInitialized_07545441 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_AottgQuickPlay_RegionPing_AottgServerRegion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Where_AottgQuickPlay_RegionPing);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_AottgQuickPlay_RegionPing_AottgServerRegion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_AottgQuickPlay_RegionPing_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgServerRegion_AddRange);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgQuickPlay_RegionPing_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c_FindNearbyRegions_b__28_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass28_0_FindNearbyRegions_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass28_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c);
    il2cpp_codegen_initialize_runtime_metadata(&"FindingRegion");
    il2cpp_codegen_initialize_runtime_metadata(&"information");
    Il2CppMethodInitialized_07545441 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    pGVar3 = (__this->fields).__8__1;
    pGVar8 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    }
    pSVar6 = Gisketch_Aottg2UI_Game_AottgQuickPlay__Reachable((MethodInfo *)pGVar8);
    if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass28_0_o *)0x0) goto label_058cab89;
    (pGVar3->fields).reachable = pSVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).reachable);
    pGVar3 = (__this->fields).__8__1;
    if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass28_0_o *)0x0) goto label_058cab89;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return false;
      }
      (__this->fields).__1__state = -1;
      pGVar3 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass28_0);
      System_Object___ctor((Il2CppObject *)pGVar3,(MethodInfo *)0x0);
      (__this->fields).__8__1 = pGVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__8__1);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
      }
      pSVar4 = "FindingRegion";
      if (Il2CppMethodInitialized_07545439 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.QuickPlay.");
        Il2CppMethodInitialized_07545439 = '\x01';
      }
      pSVar4 = System_String__Concat_52f0320("MainMenu.QuickPlay.",pSVar4,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar4 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar4,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgQuickPlay__Toast
                (2,"information",pSVar4,(MethodInfo *)&"information");
      if (Il2CppMethodInitialized_0754542c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
        Il2CppMethodInitialized_0754542c = '\x01';
      }
      fVar9 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
      }
      klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay;
      fVar9 = fVar9 - TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->static_fields->_pingStartedAt;
      (__this->fields)._cached_5__2 = fVar9 < 60.0;
      if (60.0 <= fVar9) {
        if ((((Gisketch_Aottg2UI_Game_AottgQuickPlay_c *)klass)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(klass);
        }
        Gisketch_Aottg2UI_Game_AottgQuickPlay__StartPings((MethodInfo *)klass);
        uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor;
        klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay;
      }
      else {
        uVar2 = (((Gisketch_Aottg2UI_Game_AottgQuickPlay_c *)klass)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init(klass);
      }
      if (Il2CppMethodInitialized_0754542e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_WaitForPings_d__31);
        Il2CppMethodInitialized_0754542e = '\x01';
      }
      pGVar5 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_WaitForPings_d__31);
      System_Object___ctor((Il2CppObject *)pGVar5,(MethodInfo *)0x0);
      (pGVar5->fields).__1__state = 0;
      (__this->fields).__2__current = (Il2CppObject *)pGVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
    (__this->fields).__1__state = -1;
    pGVar3 = (__this->fields).__8__1;
    pGVar8 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    }
    pSVar6 = Gisketch_Aottg2UI_Game_AottgQuickPlay__Reachable((MethodInfo *)pGVar8);
    if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass28_0_o *)0x0) goto label_058cab89;
    (pGVar3->fields).reachable = pSVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).reachable);
    pGVar3 = (__this->fields).__8__1;
    if ((pGVar3 == (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass28_0_o *)0x0) ||
       (pSVar6 = (pGVar3->fields).reachable,
       pSVar6 == (System_Collections_Generic_List_AottgQuickPlay_RegionPing__o *)0x0)) goto label_058cab89;
    if (((pSVar6->fields)._size == 0 & (__this->fields)._cached_5__2) != 0) {
      pGVar8 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
      }
      Gisketch_Aottg2UI_Game_AottgQuickPlay__StartPings((MethodInfo *)pGVar8);
      if (Il2CppMethodInitialized_0754542e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_WaitForPings_d__31);
        Il2CppMethodInitialized_0754542e = '\x01';
      }
      pGVar5 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_WaitForPings_d__31);
      System_Object___ctor((Il2CppObject *)pGVar5,(MethodInfo *)0x0);
      (pGVar5->fields).__1__state = 0;
      (__this->fields).__2__current = (Il2CppObject *)pGVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 2;
      return true;
    }
  }
  __this_00 = (__this->fields).regions;
  pSVar6 = (pGVar3->fields).reachable;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_AottgQuickPlay_RegionPing_bool);
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this_01,(Il2CppObject *)pGVar3,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass28_0_FindNearbyRegions_b__0,
             (MethodInfo_4F19300 *)0x0);
  source = System_Linq_Enumerable__Where_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar6,
                      (System_Func_TSource__bool__o *)__this_01,
                      (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_AottgQuickPlay_RegionPing)
  ;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c);
    pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
    __this_02 = (System_Func_T__TResult__o *)pGVar7->__9__28_1;
  }
  else {
    pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
    __this_02 = (System_Func_T__TResult__o *)pGVar7->__9__28_1;
  }
  if (__this_02 == (System_Func_T__TResult__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c)->_2).cctor_finished_or_no_cctor ==
        0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c);
      pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
    }
    object = (Il2CppObject *)pGVar7->__9;
    __this_02 = (System_Func_T__TResult__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Func_AottgQuickPlay_RegionPing_AottgServerRegion);
    System_Func_object__AottgServerRegion____ctor
              (__this_02,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c_FindNearbyRegions_b__28_1,
               (MethodInfo_4F18F70 *)0x0);
    pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
    pGVar7->__9__28_1 = (System_Func_AottgQuickPlay_RegionPing__AottgServerRegion__o *)__this_02;
    Il2CppCodeGenWriteBarrier(&pGVar7->__9__28_1);
  }
  collection = System_Linq_Enumerable__Select_object__AottgServerRegion_
                         (source,(System_Func_TSource__TResult__o *)__this_02,
                          (MethodInfo_34F54F0 *)
                          MethodInfo_System_Linq_Enumerable_Select_AottgQuickPlay_RegionPing_AottgServerRegion
                         );
  if (__this_00 != (System_Collections_Generic_List_AottgServerRegion__o *)0x0) {
    System_Collections_Generic_List_AottgServerRegion___AddRange
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_51CECF0 *)MethodInfo_System_Collections_Generic_List_AottgServerRegion_AddRange);
    return false;
  }
label_058cab89:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<FindNearbyRegions>d__28$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28_o* __this, const MethodInfo* method);
// 0x58cab90

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<FindNearbyRegions>d__28$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28_o* __this, const MethodInfo* method);
// 0x58caba0

void Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_FindNearbyRegions_d__28_System_Collections_IEnumerator_Res
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<FindNearbyRegions>d__28$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28_o* __this, const MethodInfo* method);
// 0x58cabe0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<Host>d__38$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38___ctor (Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x58c96d0

void Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38___ctor
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<Host>d__38$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38_o* __this, const MethodInfo* method);
// 0x58cabf0

void Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38_o *__this,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<Host>d__38$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38__MoveNext (Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38_o* __this, const MethodInfo* method);
// 0x58cac00
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58caea0: lea rax, [rip + 0x1a0d219]  ; "ConnectFailed"
// asm:   0x58caea7: mov rbx, qword ptr [rax]
// asm:   0x58caeaa: cmp byte ptr [rip + 0x1c7a588], 0
// asm:   0x58caeb1: jne 0x58caed2
// asm:   0x58caf23: lea rax, [rip + 0x1a1316e]  ; "HostFailed"
// asm:   0x58caf2a: mov rbx, qword ptr [rax]
// asm:   0x58caf2d: cmp byte ptr [rip + 0x1c7a505], 0
// asm:   0x58caf3a: jmp 0x58caed2

bool Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38__MoveNext
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38_o *__this,MethodInfo *method)

{
  int iVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Settings_InGameSet_o *pSVar4;
  Settings_MultiplayerSettings_o *__this_00;
  bool bVar5;
  Settings_InGameSet_o *pSVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass38_0_o *pGVar8;
  System_Action_bool__o *__this_01;
  Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34_o *__this_02;
  MethodInfo *method_00;
  Il2CppClass *klass;
  Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass38_0_o **targetAddress;
  
  if (Il2CppMethodInitialized_07545442 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass38_0_Host_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass38_0);
    il2cpp_codegen_initialize_runtime_metadata(&"HostFailed");
    il2cpp_codegen_initialize_runtime_metadata(&"Hosting");
    il2cpp_codegen_initialize_runtime_metadata(&"information");
    il2cpp_codegen_initialize_runtime_metadata(&"ConnectFailed");
    Il2CppMethodInitialized_07545442 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    pGVar8 = (__this->fields).__8__1;
    if (pGVar8 == (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass38_0_o *)0x0) goto label_058cb051;
    if ((pGVar8->fields).inLobby == false) {
      pSVar7 = "ConnectFailed";
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
        pSVar7 = "ConnectFailed";
      }
    }
    else {
      targetAddress = &(__this->fields).__8__1;
      *targetAddress = (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass38_0_o *)0x0;
      Il2CppCodeGenWriteBarrier(targetAddress);
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor;
      klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay;
joined_r0x058cae71:
      TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay = (Gisketch_Aottg2UI_Game_AottgQuickPlay_c *)klass;
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init(klass);
      }
      pSVar6 = Gisketch_Aottg2UI_Game_AottgQuickPlay__HostGame((MethodInfo *)klass);
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor;
      if (pSVar6 != (Settings_InGameSet_o *)0x0) {
        if (uVar2 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
        }
        pSVar7 = "Hosting";
        if (Il2CppMethodInitialized_07545439 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
          il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.QuickPlay.");
          Il2CppMethodInitialized_07545439 = '\x01';
        }
        pSVar7 = System_String__Concat_52f0320("MainMenu.QuickPlay.",pSVar7,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar7,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgQuickPlay__Toast
                  (2,"information",pSVar7,(MethodInfo *)&"information");
        pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
        if (pSVar4 != (Settings_InGameSet_o *)0x0) {
          (*(pSVar4->klass->vtable)._10_Copy.methodPtr)
                    (pSVar4,(Settings_BaseSetting_o *)pSVar6,(pSVar4->klass->vtable)._10_Copy.method);
          pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
          if (pSVar4 != (Settings_InGameSet_o *)0x0) {
            (*(pSVar4->klass->vtable)._10_Copy.methodPtr)
                      (pSVar4,(Settings_BaseSetting_o *)pSVar6,(pSVar4->klass->vtable)._10_Copy.method);
            ApplicationManagers_MusicManager__PlayEffect((MethodInfo *)0x0);
            ApplicationManagers_MusicManager__PlayTransition((MethodInfo *)0x0);
            __this_00 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
            if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
              Settings_MultiplayerSettings__StartRoom(__this_00,(MethodInfo *)0x0);
              return false;
            }
          }
        }
        goto label_058cb051;
      }
      pSVar7 = "HostFailed";
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
        pSVar7 = "HostFailed";
      }
    }
    if (Il2CppMethodInitialized_07545439 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.QuickPlay.");
      Il2CppMethodInitialized_07545439 = '\x01';
    }
    pSVar7 = System_String__Concat_52f0320("MainMenu.QuickPlay.",pSVar7,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    bVar5 = false;
    method_00 = (MethodInfo *)0x0;
    pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar7,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgQuickPlay__Fail(pSVar7,method_00);
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields).inRegionLobby != false) {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        bVar5 = Photon_Pun_PhotonNetwork__get_InLobby((MethodInfo *)0x0);
      }
      else {
        bVar5 = Photon_Pun_PhotonNetwork__get_InLobby((MethodInfo *)0x0);
      }
      if (bVar5) {
        uVar2 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay)->_2).
                cctor_finished_or_no_cctor;
        klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay;
        goto joined_r0x058cae71;
      }
    }
    pGVar8 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass38_0);
    System_Object___ctor((Il2CppObject *)pGVar8,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pGVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__8__1);
    pGVar8 = (__this->fields).__8__1;
    if (pGVar8 == (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass38_0_o *)0x0) {
label_058cb051:
      ThrowNullReferenceException();
    }
    (pGVar8->fields).inLobby = false;
    iVar3 = (__this->fields).region;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool);
    System_Action_bool____ctor
              (__this_01,(Il2CppObject *)pGVar8,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass38_0_Host_b__0,
               (MethodInfo_4A7F1E0 *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    }
    if (Il2CppMethodInitialized_07545431 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_ConnectToLobby_d__34);
      Il2CppMethodInitialized_07545431 = '\x01';
    }
    __this_02 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_ConnectToLobby_d__34)
    ;
    System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    (__this_02->fields).__1__state = 0;
    (__this_02->fields).region = iVar3;
    (__this_02->fields).done = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).done);
    (__this->fields).__2__current = (Il2CppObject *)__this_02;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    bVar5 = true;
  }
  return bVar5;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<Host>d__38$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38_o* __this, const MethodInfo* method);
// 0x58cb060

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<Host>d__38$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38_o* __this, const MethodInfo* method);
// 0x58cb070

void Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_Host_d__38_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<Host>d__38$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38_o* __this, const MethodInfo* method);
// 0x58cb0b0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<QuickPlay>d__26$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26___ctor (Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x58c8f00

void Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26___ctor
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<QuickPlay>d__26$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26_o* __this, const MethodInfo* method);
// 0x58cb0c0

void Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26_o *__this,MethodInfo *method)

{
  uint uVar1;
  
  uVar1 = (__this->fields).__1__state + 3;
  if ((7 < uVar1) || ((0xe1U >> (uVar1 & 0x1f) & 1) == 0)) {
    return;
  }
  if (Il2CppMethodInitialized_07545444 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AottgServerRegion_Dispose);
    Il2CppMethodInitialized_07545444 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_AottgServerRegion___Dispose
            (&(__this->fields).__7__wrap3,
             (MethodInfo_4C25410 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_AottgServerRegion_Dispose);
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<QuickPlay>d__26$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26__MoveNext (Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26_o* __this, const MethodInfo* method);
// 0x58cb120
// eh: try 0x58cb321..0x58cbf02 -> pad 0x58cbf54 (+51 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58cbf75..0x58cbf7a -> pad 0x58cbf95 cleanup
// eh: try 0x58cbf98..0x58cbfa5 -> pad 0x58cbfad catch (...) [compiler noexcept guard]
// asm: 65 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58cbf02: jmp 0x58cbf5a
// asm:   0x58cbf04: jmp 0x58cbf5a
// asm:   0x58cbf06: jmp 0x58cbf5a
// asm:   0x58cbf08: jmp 0x58cbf5a
// asm:   0x58cbf0a: jmp 0x58cbf5a
// asm:   0x58cbf0c: jmp 0x58cbf5a
// asm:   0x58cbf0e: jmp 0x58cbf5a
// asm:   0x58cbf10: jmp 0x58cbf5a
// asm:   0x58cbf12: jmp 0x58cbf5a
// asm:   0x58cbf14: jmp 0x58cbf5a
// asm:   0x58cbf16: jmp 0x58cbf5a
// asm:   0x58cbf18: jmp 0x58cbf5a
// asm:   0x58cbf1a: jmp 0x58cbf5a
// asm:   0x58cbf1c: jmp 0x58cbf5a
// asm:   0x58cbf1e: jmp 0x58cbf5a
// asm:   0x58cbf20: jmp 0x58cbf5a
// asm:   0x58cbf22: jmp 0x58cbf5a
// asm:   0x58cbf24: jmp 0x58cbf5a
// asm:   0x58cbf26: jmp 0x58cbf5a
// asm:   0x58cbf28: jmp 0x58cbf5a
// asm:   0x58cbf2a: jmp 0x58cbf5a
// asm:   0x58cbf2c: jmp 0x58cbf5a
// asm:   0x58cbf2e: jmp 0x58cbf5a
// asm:   0x58cbf30: jmp 0x58cbf5a
// asm:   0x58cbf32: jmp 0x58cbf5a
// asm:   0x58cbf34: jmp 0x58cbf5a
// asm:   0x58cbf36: jmp 0x58cbf5a
// asm:   0x58cbf38: jmp 0x58cbf5a
// asm:   0x58cbf3a: jmp 0x58cbf5a
// asm:   0x58cbf3c: jmp 0x58cbf5a
// asm:   0x58cbf3e: jmp 0x58cbf5a
// asm:   0x58cbf40: jmp 0x58cbf5a
// asm:   0x58cbf42: jmp 0x58cbf5a
// asm:   0x58cbf44: jmp 0x58cbf5a
// asm:   0x58cbf46: jmp 0x58cbf5a
// asm:   0x58cbf48: jmp 0x58cbf5a
// asm:   0x58cbf4a: jmp 0x58cbf5a
// asm:   0x58cbf4c: jmp 0x58cbf5a
// asm:   0x58cbf4e: jmp 0x58cbf5a
// asm:   0x58cbf50: jmp 0x58cbf5a
// asm:   0x58cbf52: jmp 0x58cbf5a
// asm:   0x58cbf54: jmp 0x58cbf5a
// asm:   0x58cbf56: jmp 0x58cbf5a
// asm:   0x58cbf58: jmp 0x58cbf5a
// asm:   0x58cbf5a: mov rbx, rax
// asm:   0x58cbf5d: cmp edx, 1
// asm:   0x58cbf60: jne 0x58cbf98
// asm:   0x58cbf62: mov rdi, rbx
// asm:   0x58cbf65: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58cbf6a: mov rbx, qword ptr [rax]
// asm:   0x58cbf6d: mov qword ptr [rsp + 0x90], rbx
// asm:   0x58cbf75: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58cbf7a: test rbx, rbx
// asm:   0x58cbf7d: je 0x58cb96a
// asm:   0x58cbf83: mov rdi, qword ptr [rsp + 0x38]
// asm:   0x58cbf88: call 0x2fd0730  ; il2cpp_runtime_helper_02fd0730()
// asm:   0x58cbf8d: mov rdi, rbx
// asm:   0x58cbf90: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58cbf95: mov rbx, rax
// asm:   0x58cbf98: lea rdi, [rsp + 0x90]
// asm:   0x58cbfa0: call 0x2fd0260  ; il2cpp_runtime_helper_02fd0260()
// asm:   0x58cbfa5: mov rdi, rbx
// asm:   0x58cbfa8: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58cbfad: mov rdi, rax
// asm:   0x58cbfb0: call 0x2ab61e0  ; __clang_call_terminate()

bool Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26__MoveNext
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_Nullable_MultiplayerRegion__Fields *pSVar2;
  uint uVar3;
  int32_t iVar4;
  Gisketch_Aottg2UI_Game_AottgQuickPlay_o *pGVar5;
  Gisketch_Aottg2UI_Game_AottgServerRegion_array *pGVar6;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Settings_MultiplayerSettings_o *__this_01;
  System_Collections_Generic_List_AottgServerRegion__o *pSVar7;
  System_Nullable_MultiplayerRegion__Fields SVar8;
  System_String_o *pSVar9;
  undefined8 uVar10;
  Gisketch_Aottg2UI_Game_AottgServerRegion_o item;
  Gisketch_Aottg2UI_Game_AottgServerRegion_o *pGVar11;
  System_Collections_Generic_List_Enumerator_AottgServerRegion__o *pSVar12;
  Gisketch_Aottg2UI_Game_AottgServerRegion_Fields *pGVar13;
  Gisketch_Aottg2UI_Game_AottgServerRegion_o *pGVar14;
  float fVar15;
  undefined4 uVar16;
  bool bVar17;
  int iVar18;
  MethodInfo *pMVar19;
  System_Collections_Generic_HashSet_string__o *pSVar20;
  Photon_Realtime_RoomInfo_o *room;
  System_String_o *pSVar21;
  Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35_o *__this_02;
  Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_1_o *pGVar22;
  Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33_o *__this_03;
  Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_0_o *pGVar23;
  System_String_o *pSVar24;
  System_Action_bool__o *pSVar25;
  Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34_o *__this_04;
  Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38_o *__this_05;
  Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28_o *__this_06;
  Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_1_o **targetAddress;
  Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26_o *pGVar26;
  Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26_o *pGStack_120;
  undefined1 auStack_118 [32];
  System_String_o *pSStack_f8;
  System_String_o *pSStack_f0;
  UnityEngine_Vector2_Fields UStack_e8;
  UnityEngine_Vector2_Fields UStack_e0;
  UnityEngine_Vector2_Fields UStack_d8;
  undefined8 uStack_c8;
  Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26_o **ppGStack_c0;
  undefined1 auStack_b8 [16];
  System_String_o *pSStack_a8;
  System_String_o *pSStack_a0;
  System_String_o *pSStack_98;
  System_String_o *pSStack_90;
  UnityEngine_Vector2_Fields UStack_88;
  UnityEngine_Vector2_Fields UStack_80;
  UnityEngine_Vector2_Fields UStack_78;
  System_Nullable_MultiplayerRegion__Fields SStack_68;
  System_Nullable_MultiplayerRegion__Fields SStack_60;
  System_String_o *pSStack_58;
  System_String_o *pSStack_50;
  System_String_o *pSStack_48;
  System_String_o *pSStack_40;
  UnityEngine_Vector2_Fields UStack_38;
  UnityEngine_Vector2_Fields UStack_30;
  
  pGStack_120 = __this;
  if (Il2CppMethodInitialized_07545443 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AottgServerRegion_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AottgServerRegion_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgServerRegion_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgServerRegion_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgServerRegion_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgServerRegion_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgServerRegion_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AottgServerRegion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Nullable_MultiplayerRegion_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_MultiplayerRegion_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_MultiplayerRegion_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_AottgServerRegion_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_AottgServerRegion_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass26_0_QuickPlay_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass26_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass26_1_QuickPlay_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass26_1);
    il2cpp_codegen_initialize_runtime_metadata(&"NoServer");
    il2cpp_codegen_initialize_runtime_metadata(&"Joining");
    il2cpp_codegen_initialize_runtime_metadata(&"information");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Searching");
    Il2CppMethodInitialized_07545443 = '\x01';
  }
  UStack_38.x = 0.0;
  UStack_38.y = 0.0;
  UStack_30.x = 0.0;
  UStack_30.y = 0.0;
  pSStack_48 = (System_String_o *)0x0;
  pSStack_40 = (System_String_o *)0x0;
  pSStack_58 = (System_String_o *)0x0;
  pSStack_50 = (System_String_o *)0x0;
  SStack_68.hasValue = false;
  SStack_68._1_3_ = 0;
  SStack_68.value = 0;
  SStack_60.hasValue = false;
  SStack_60._1_3_ = 0;
  SStack_60.value = 0;
  uStack_c8 = 0;
  ppGStack_c0 = &pGStack_120;
  uVar3 = (__this->fields).__1__state;
  if (5 < uVar3) {
    return false;
  }
  pGVar5 = (__this->fields).__4__this;
  switch(uVar3) {
  case 0:
    (__this->fields).__1__state = -1;
    pMVar19 = (MethodInfo *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgServerRegion);
    System_Collections_Generic_List_AottgServerRegion____ctor
              ((System_Collections_Generic_List_AottgServerRegion__o *)pMVar19,
               (MethodInfo_51CDF60 *)MethodInfo_System_Collections_Generic_List_AottgServerRegion_ctor);
    (pGStack_120->fields)._regions_5__2 = (System_Collections_Generic_List_AottgServerRegion__o *)pMVar19;
    Il2CppCodeGenWriteBarrier(&(pGStack_120->fields)._regions_5__2);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    }
    Gisketch_Aottg2UI_Game_AottgQuickPlay__ChosenRegion
              ((System_Nullable_AottgServerRegion__o *)auStack_118,pMVar19);
    UStack_38 = UStack_e8;
    UStack_30 = UStack_e0;
    pSStack_48 = pSStack_f8;
    pSStack_40 = pSStack_f0;
    pSStack_58 = (System_String_o *)auStack_118._16_8_;
    pSStack_50 = (System_String_o *)auStack_118._24_8_;
    SStack_68.hasValue = (bool)auStack_118[0];
    SStack_68._1_3_ = auStack_118._1_3_;
    SStack_68.value = auStack_118._4_4_;
    SVar8 = SStack_68;
    SStack_60.hasValue = (bool)auStack_118[8];
    SStack_60._1_3_ = auStack_118._9_3_;
    SStack_60.value = auStack_118._12_4_;
    SStack_68.hasValue = auStack_118[0];
    pSVar7 = (pGStack_120->fields)._regions_5__2;
    SStack_68 = SVar8;
    if (SStack_68.hasValue == false) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
      }
      if (Il2CppMethodInitialized_0754542b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_FindNearbyRegions_d__28);
        Il2CppMethodInitialized_0754542b = '\x01';
      }
      __this_06 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_FindNearbyRegions_d__28);
      System_Object___ctor((Il2CppObject *)__this_06,(MethodInfo *)0x0);
      (__this_06->fields).__1__state = 0;
      (__this_06->fields).regions = pSVar7;
      Il2CppCodeGenWriteBarrier(&(__this_06->fields).regions);
      (pGStack_120->fields).__2__current = (Il2CppObject *)__this_06;
      Il2CppCodeGenWriteBarrier(&(pGStack_120->fields).__2__current);
      (pGStack_120->fields).__1__state = 1;
      return true;
    }
    System_Nullable_AottgServerRegion___get_Value
              ((Gisketch_Aottg2UI_Game_AottgServerRegion_o *)auStack_118,
               (System_Nullable_AottgServerRegion__o *)&SStack_68,
               (MethodInfo_3CCE140 *)MethodInfo_System_Nullable_AottgServerRegion_get_Value);
    pMVar19 = MethodInfo_System_Collections_Generic_List_AottgServerRegion_Add;
    UStack_88 = UStack_e8;
    pSStack_98 = pSStack_f8;
    pSStack_90 = pSStack_f0;
    pSStack_a8 = (System_String_o *)auStack_118._16_8_;
    pSStack_a0 = (System_String_o *)auStack_118._24_8_;
    auStack_b8._0_8_ = auStack_118._0_8_;
    auStack_b8._8_8_ = auStack_118._8_8_;
    if (pSVar7 == (System_Collections_Generic_List_AottgServerRegion__o *)0x0) {
label_058cbed0:
      ThrowNullReferenceException();
    }
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar6 = (pSVar7->fields)._items;
    if (pGVar6 == (Gisketch_Aottg2UI_Game_AottgServerRegion_array *)0x0) goto label_058cbed0;
    uVar3 = (pSVar7->fields)._size;
    if (uVar3 < (uint)pGVar6->max_length) {
      (pSVar7->fields)._size = uVar3 + 1;
      pGVar6->m_Items[(int)uVar3].fields.LabelPoint.fields = UStack_e8;
      pGVar13 = &pGVar6->m_Items[(int)uVar3].fields;
      *(System_String_o **)&(pGVar13->MaskArea).fields = pSStack_f8;
      *(System_String_o **)&(pGVar13->MaskArea).fields.m_Width = pSStack_f0;
      pGVar13 = &pGVar6->m_Items[(int)uVar3].fields;
      *(undefined8 *)&pGVar13->Region = auStack_118._16_8_;
      pGVar13->MaskSprite = (System_String_o *)auStack_118._24_8_;
      pSVar2 = (System_Nullable_MultiplayerRegion__Fields *)(pGVar6->m_Items + (int)uVar3);
      pSVar2->hasValue = (bool)auStack_118[0];
      *(undefined3 *)&pSVar2->field_0x1 = auStack_118._1_3_;
      pSVar2->value = auStack_118._4_4_;
      pSVar2[1].hasValue = (bool)auStack_118[8];
      *(undefined3 *)&pSVar2[1].field_0x1 = auStack_118._9_3_;
      pSVar2[1].value = auStack_118._12_4_;
      Il2CppCodeGenWriteBarrier((void **)(pGVar6->m_Items + (int)uVar3));
    }
    else {
      item.fields.Label = (System_String_o *)auStack_118._8_8_;
      item.fields.Id = (System_String_o *)auStack_118._0_8_;
      item.fields._16_8_ = auStack_118._16_8_;
      item.fields.MaskSprite = (System_String_o *)auStack_118._24_8_;
      item.fields.MaskArea.fields._0_8_ = pSStack_f8;
      item.fields.MaskArea.fields._8_8_ = pSStack_f0;
      item.fields.LabelPoint.fields = UStack_e8;
      System_Collections_Generic_List_AottgServerRegion___AddWithResize
                (pSVar7,item,(MethodInfo_51CE9A0 *)pMVar19->klass->rgctx_data[0xe].method);
    }
    pSVar7 = (pGStack_120->fields)._regions_5__2;
    __this = pGStack_120;
    break;
  case 1:
    (__this->fields).__1__state = -1;
    pSVar7 = (__this->fields)._regions_5__2;
    break;
  case 2:
    (__this->fields).__1__state = -3;
    pGVar23 = (__this->fields).__8__1;
    if (pGVar23 == (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_0_o *)0x0) {
      ThrowNullReferenceException();
    }
    pGVar26 = __this;
    if ((pGVar23->fields).inLobby != false) {
      auStack_118[0] = false;
      auStack_118._1_3_ = 0;
      auStack_118._4_4_ = 0;
      System_Nullable_Int32Enum____ctor
                ((System_Nullable_Int32Enum__o *)auStack_118,(__this->fields)._region_5__5.fields.Region,
                 (MethodInfo_3CD4F60 *)MethodInfo_System_Nullable_MultiplayerRegion_ctor);
      (pGStack_120->fields)._lobbyRegion_5__3.fields =
           (System_Nullable_MultiplayerRegion__Fields)auStack_118._0_8_;
      pSVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
      System_Collections_Generic_HashSet_object____ctor
                ((System_Collections_Generic_HashSet_object__o *)pSVar20,
                 (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
      (pGStack_120->fields)._tried_5__6 = pSVar20;
      Il2CppCodeGenWriteBarrier(&(pGStack_120->fields)._tried_5__6);
      (pGStack_120->fields)._attempt_5__7 = 0;
label_058cb9a2:
      pGVar22 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass26_1);
      System_Object___ctor((Il2CppObject *)pGVar22,(MethodInfo *)0x0);
      (pGStack_120->fields).__8__2 = pGVar22;
      Il2CppCodeGenWriteBarrier(&(pGStack_120->fields).__8__2);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
      }
      if (Il2CppMethodInitialized_07545430 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_WaitForRoomList_d__33);
        Il2CppMethodInitialized_07545430 = '\x01';
      }
      __this_03 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_WaitForRoomList_d__33);
      System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
      (__this_03->fields).__1__state = 0;
      (pGStack_120->fields).__2__current = (Il2CppObject *)__this_03;
      Il2CppCodeGenWriteBarrier(&(pGStack_120->fields).__2__current);
      (pGStack_120->fields).__1__state = 3;
      return true;
    }
    goto label_058cbaa9;
  case 3:
    (__this->fields).__1__state = -3;
    pSVar20 = (__this->fields)._tried_5__6;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    }
    room = Gisketch_Aottg2UI_Game_AottgQuickPlay__PickRoom(pSVar20,method);
    if (room != (Photon_Realtime_RoomInfo_o *)0x0) {
      __this_00 = (System_Collections_Generic_HashSet_object__o *)(pGStack_120->fields)._tried_5__6;
      if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_object___Add
                (__this_00,(Il2CppObject *)(room->fields).name,
                 (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
      }
      pSVar24 = "Joining";
      if (Il2CppMethodInitialized_07545439 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.QuickPlay.");
        Il2CppMethodInitialized_07545439 = '\x01';
      }
      pSVar24 = System_String__Concat_52f0320("MainMenu.QuickPlay.",pSVar24,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pMVar19 = (MethodInfo *)0x0;
      pSVar24 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar24,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
      }
      pSVar21 = Gisketch_Aottg2UI_Game_AottgRoomList__RoomTitle(room,pMVar19);
      pSVar24 = System_String__Format(pSVar24,(Il2CppObject *)pSVar21,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgQuickPlay__Toast
                (2,"information",pSVar24,(MethodInfo *)&"information");
      __this_01 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
      pSVar24 = (room->fields).name;
      if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
      }
      pSVar21 = PhotonExtensions__GetStringProperty_5751c40
                          (room,TypeInfo_GameManagers_RoomProperty->static_fields->Name,"",
                           (MethodInfo *)0x0);
      if (__this_01 == (Settings_MultiplayerSettings_o *)0x0) {
        ThrowNullReferenceException();
      }
      Settings_MultiplayerSettings__JoinRoom
                (__this_01,pSVar24,pSVar21,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                 (MethodInfo *)0x0);
      pGVar22 = (pGStack_120->fields).__8__2;
      if (pGVar22 == (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_1_o *)0x0) {
        ThrowNullReferenceException();
      }
      (pGVar22->fields).joined = false;
      pSVar25 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool);
      System_Action_bool____ctor
                (pSVar25,(Il2CppObject *)pGVar22,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass26_1_QuickPlay_b__1
                 ,(MethodInfo_4A7F1E0 *)0x0);
      if (Il2CppMethodInitialized_07545432 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_WaitForJoin_d__35);
        Il2CppMethodInitialized_07545432 = '\x01';
      }
      __this_02 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_WaitForJoin_d__35);
      System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      (__this_02->fields).__1__state = 0;
      (__this_02->fields).done = pSVar25;
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).done);
      (pGStack_120->fields).__2__current = (Il2CppObject *)__this_02;
      Il2CppCodeGenWriteBarrier(&(pGStack_120->fields).__2__current);
      (pGStack_120->fields).__1__state = 4;
      return true;
    }
    goto label_058cba50;
  case 4:
    (__this->fields).__1__state = -3;
    pGVar22 = (__this->fields).__8__2;
    if (pGVar22 == (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_1_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pGVar22->fields).joined != false) {
      if (Il2CppMethodInitialized_07545444 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_Enumerator_AottgServerRegion_Dispose);
        Il2CppMethodInitialized_07545444 = '\x01';
      }
      (__this->fields).__1__state = -1;
      System_Collections_Generic_List_Enumerator_AottgServerRegion___Dispose
                (&(__this->fields).__7__wrap3,
                 (MethodInfo_4C25410 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_AottgServerRegion_Dispose);
      return false;
    }
    targetAddress = &(__this->fields).__8__2;
    *targetAddress = (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_1_o *)0x0;
    Il2CppCodeGenWriteBarrier(targetAddress);
    iVar18 = (pGStack_120->fields)._attempt_5__7 + 1;
    (pGStack_120->fields)._attempt_5__7 = iVar18;
    if (iVar18 < 3) goto label_058cb9a2;
label_058cba50:
    (pGStack_120->fields).__8__1 = (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_0_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(pGStack_120->fields).__8__1);
    (pGStack_120->fields)._tried_5__6 = (System_Collections_Generic_HashSet_string__o *)0x0;
    Il2CppCodeGenWriteBarrier(&(pGStack_120->fields)._tried_5__6);
    pGVar11 = &(pGStack_120->fields)._region_5__5;
    (pGVar11->fields).MaskArea.fields.m_XMin = 0.0;
    (pGVar11->fields).MaskArea.fields.m_YMin = 0.0;
    pGVar11 = &(pGStack_120->fields)._region_5__5;
    (pGVar11->fields).MaskArea.fields.m_Width = 0.0;
    (pGVar11->fields).MaskArea.fields.m_Height = 0.0;
    *(undefined8 *)&(pGStack_120->fields)._region_5__5.fields.Region = 0;
    (pGStack_120->fields)._region_5__5.fields.MaskSprite = (System_String_o *)0x0;
    (pGStack_120->fields)._region_5__5.fields.Id = (System_String_o *)0x0;
    (pGStack_120->fields)._region_5__5.fields.Label = (System_String_o *)0x0;
    (pGStack_120->fields)._region_5__5.fields.LabelPoint.fields = (UnityEngine_Vector2_Fields)0x0;
    pGVar26 = pGStack_120;
    goto label_058cbaa9;
  case 5:
    (__this->fields).__1__state = -1;
    return false;
  }
  if (pSVar7 == (System_Collections_Generic_List_AottgServerRegion__o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pSVar7->fields)._size == 0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay)->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    }
    pSVar24 = "NoServer";
    if (Il2CppMethodInitialized_07545439 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.QuickPlay.");
      Il2CppMethodInitialized_07545439 = '\x01';
    }
    pSVar24 = System_String__Concat_52f0320("MainMenu.QuickPlay.",pSVar24,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pMVar19 = (MethodInfo *)0x0;
    pSVar24 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar24,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgQuickPlay__Fail(pSVar24,pMVar19);
    return false;
  }
  (__this->fields)._lobbyRegion_5__3.fields = (System_Nullable_MultiplayerRegion__Fields)0x0;
  System_Collections_Generic_List_AottgServerRegion___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_b8,pSVar7,
             (MethodInfo_51CFBB0 *)MethodInfo_System_Collections_Generic_List_AottgServerRegion_GetEnumerator)
  ;
  UStack_d8 = UStack_78;
  UStack_e8 = UStack_88;
  UStack_e0 = UStack_80;
  pSStack_f8 = pSStack_98;
  pSStack_f0 = pSStack_90;
  auStack_118._16_8_ = pSStack_a8;
  auStack_118._24_8_ = pSStack_a0;
  auStack_118._0_8_ = auStack_b8._0_8_;
  auStack_118._8_8_ = auStack_b8._8_8_;
  (pGStack_120->fields).__7__wrap3.fields._current.fields.LabelPoint.fields = UStack_78;
  *(UnityEngine_Vector2_Fields *)&(pGStack_120->fields).__7__wrap3.fields._current.fields.MaskArea.fields =
       UStack_88;
  *(UnityEngine_Vector2_Fields *)
   ((long)&(pGStack_120->fields).__7__wrap3.fields._current.fields.MaskArea.fields + 8) = UStack_80;
  *(System_String_o **)&(pGStack_120->fields).__7__wrap3.fields._current.fields.Region = pSStack_98;
  (pGStack_120->fields).__7__wrap3.fields._current.fields.MaskSprite = pSStack_90;
  (pGStack_120->fields).__7__wrap3.fields._current.fields.Id = pSStack_a8;
  (pGStack_120->fields).__7__wrap3.fields._current.fields.Label = pSStack_a0;
  (pGStack_120->fields).__7__wrap3.fields._list = (System_Collections_Generic_List_T__o *)auStack_b8._0_8_;
  (pGStack_120->fields).__7__wrap3.fields._index = auStack_b8._8_4_;
  (pGStack_120->fields).__7__wrap3.fields._version = auStack_b8._12_4_;
  Il2CppCodeGenWriteBarrier((void **)&(pGStack_120->fields).__7__wrap3);
  (pGStack_120->fields).__1__state = -3;
  pGVar26 = pGStack_120;
label_058cbaa9:
  bVar17 = System_Collections_Generic_List_Enumerator_AottgServerRegion___MoveNext
                     (&(pGVar26->fields).__7__wrap3,
                      (MethodInfo_4C25420 *)
                      MethodInfo_System_Collections_Generic_List_Enumerator_AottgServerRegion_MoveNext);
  pGVar26 = pGStack_120;
  if (bVar17) {
    (pGStack_120->fields)._region_5__5.fields.LabelPoint.fields =
         (pGStack_120->fields).__7__wrap3.fields._current.fields.LabelPoint.fields;
    pSVar24 = (pGStack_120->fields).__7__wrap3.fields._current.fields.Id;
    pSVar21 = (pGStack_120->fields).__7__wrap3.fields._current.fields.Label;
    pSVar12 = &(pGStack_120->fields).__7__wrap3;
    iVar4 = (pSVar12->fields)._current.fields.Region;
    uVar16 = *(undefined4 *)&(pSVar12->fields)._current.fields.field_0x14;
    pSVar9 = (pGStack_120->fields).__7__wrap3.fields._current.fields.MaskSprite;
    pGVar14 = &(pGStack_120->fields).__7__wrap3.fields._current;
    fVar15 = (pGVar14->fields).MaskArea.fields.m_YMin;
    uVar10 = *(undefined8 *)
              ((long)&(pGStack_120->fields).__7__wrap3.fields._current.fields.MaskArea.fields + 8);
    pGVar11 = &(pGStack_120->fields)._region_5__5;
    (pGVar11->fields).MaskArea.fields.m_XMin = (pGVar14->fields).MaskArea.fields.m_XMin;
    (pGVar11->fields).MaskArea.fields.m_YMin = fVar15;
    *(undefined8 *)&(pGStack_120->fields)._region_5__5.fields.MaskArea.fields.m_Width = uVar10;
    (pGStack_120->fields)._region_5__5.fields.Region = iVar4;
    *(undefined4 *)&(pGStack_120->fields)._region_5__5.fields.field_0x14 = uVar16;
    (pGStack_120->fields)._region_5__5.fields.MaskSprite = pSVar9;
    (pGStack_120->fields)._region_5__5.fields.Id = pSVar24;
    (pGStack_120->fields)._region_5__5.fields.Label = pSVar21;
    Il2CppCodeGenWriteBarrier((void **)&(pGStack_120->fields)._region_5__5);
    pGVar23 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass26_0);
    System_Object___ctor((Il2CppObject *)pGVar23,(MethodInfo *)0x0);
    (pGStack_120->fields).__8__1 = pGVar23;
    Il2CppCodeGenWriteBarrier(&(pGStack_120->fields).__8__1);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    }
    pSVar24 = "Searching";
    if (Il2CppMethodInitialized_07545439 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.QuickPlay.");
      Il2CppMethodInitialized_07545439 = '\x01';
    }
    pSVar24 = System_String__Concat_52f0320("MainMenu.QuickPlay.",pSVar24,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar24 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar24,(MethodInfo *)0x0);
    pSVar24 = System_String__Format
                        (pSVar24,(Il2CppObject *)(pGStack_120->fields)._region_5__5.fields.Label,
                         (MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgQuickPlay__Toast
              (2,"information",pSVar24,(MethodInfo *)&"information");
    pGVar23 = (pGStack_120->fields).__8__1;
    if (pGVar23 == (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass26_0_o *)0x0) {
      ThrowNullReferenceException();
    }
    (pGVar23->fields).inLobby = false;
    iVar4 = (pGStack_120->fields)._region_5__5.fields.Region;
    pSVar25 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool);
    System_Action_bool____ctor
              (pSVar25,(Il2CppObject *)pGVar23,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass26_0_QuickPlay_b__0,
               (MethodInfo_4A7F1E0 *)0x0);
    if (Il2CppMethodInitialized_07545431 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_ConnectToLobby_d__34);
      Il2CppMethodInitialized_07545431 = '\x01';
    }
    __this_04 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_ConnectToLobby_d__34)
    ;
    System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
    (__this_04->fields).__1__state = 0;
    (__this_04->fields).region = iVar4;
    (__this_04->fields).done = pSVar25;
    Il2CppCodeGenWriteBarrier(&(__this_04->fields).done);
    (pGStack_120->fields).__2__current = (Il2CppObject *)__this_04;
    Il2CppCodeGenWriteBarrier(&(pGStack_120->fields).__2__current);
    (pGStack_120->fields).__1__state = 2;
  }
  else {
    if (Il2CppMethodInitialized_07545444 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_AottgServerRegion_Dispose);
      Il2CppMethodInitialized_07545444 = '\x01';
    }
    (pGVar26->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_AottgServerRegion___Dispose
              (&(pGVar26->fields).__7__wrap3,
               (MethodInfo_4C25410 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_AottgServerRegion_Dispose);
    pGVar11 = &(pGStack_120->fields).__7__wrap3.fields._current;
    (pGVar11->fields).MaskArea.fields.m_XMin = 0.0;
    (pGVar11->fields).MaskArea.fields.m_YMin = 0.0;
    *(undefined8 *)((long)&(pGStack_120->fields).__7__wrap3.fields._current.fields.MaskArea.fields + 8) = 0;
    *(undefined8 *)&(pGStack_120->fields).__7__wrap3.fields._current.fields.Region = 0;
    (pGStack_120->fields).__7__wrap3.fields._current.fields.MaskSprite = (System_String_o *)0x0;
    (pGStack_120->fields).__7__wrap3.fields._current.fields.Id = (System_String_o *)0x0;
    (pGStack_120->fields).__7__wrap3.fields._current.fields.Label = (System_String_o *)0x0;
    (pGStack_120->fields).__7__wrap3.fields._list = (System_Collections_Generic_List_T__o *)0x0;
    (pGStack_120->fields).__7__wrap3.fields._index = 0;
    (pGStack_120->fields).__7__wrap3.fields._version = 0;
    (pGStack_120->fields).__7__wrap3.fields._current.fields.LabelPoint.fields =
         (UnityEngine_Vector2_Fields)0x0;
    pSVar7 = (pGStack_120->fields)._regions_5__2;
    if (pSVar7 == (System_Collections_Generic_List_AottgServerRegion__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_AottgServerRegion___get_Item
              ((Gisketch_Aottg2UI_Game_AottgServerRegion_o *)auStack_118,pSVar7,0,
               (MethodInfo_51CE570 *)MethodInfo_System_Collections_Generic_List_AottgServerRegion_get_Item);
    pSVar7 = (pGStack_120->fields)._regions_5__2;
    if (pSVar7 == (System_Collections_Generic_List_AottgServerRegion__o *)0x0) {
      ThrowNullReferenceException();
    }
    uVar16 = auStack_118._16_4_;
    SVar8 = (pGStack_120->fields)._lobbyRegion_5__3.fields;
    System_Collections_Generic_List_AottgServerRegion___get_Item
              ((Gisketch_Aottg2UI_Game_AottgServerRegion_o *)auStack_118,pSVar7,0,
               (MethodInfo_51CE570 *)MethodInfo_System_Collections_Generic_List_AottgServerRegion_get_Item);
    if (pGVar5 == (Gisketch_Aottg2UI_Game_AottgQuickPlay_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar17 = auStack_118._16_4_ == SVar8.value;
    if (Il2CppMethodInitialized_07545435 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_Host_d__38);
      Il2CppMethodInitialized_07545435 = '\x01';
    }
    __this_05 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_Host_d__38);
    System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
    (__this_05->fields).__1__state = 0;
    (__this_05->fields).region = uVar16;
    (__this_05->fields).inRegionLobby = SVar8.hasValue != false && bVar17;
    (pGStack_120->fields).__2__current = (Il2CppObject *)__this_05;
    Il2CppCodeGenWriteBarrier(&(pGStack_120->fields).__2__current);
    (pGStack_120->fields).__1__state = 5;
  }
  return true;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<QuickPlay>d__26$$<>m__Finally1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26____m__Finally1 (Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26_o* __this, const MethodInfo* method);
// 0x58cc060

void Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26____m__Finally1
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545444 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AottgServerRegion_Dispose);
    Il2CppMethodInitialized_07545444 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_AottgServerRegion___Dispose
            (&(__this->fields).__7__wrap3,
             (MethodInfo_4C25410 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_AottgServerRegion_Dispose);
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<QuickPlay>d__26$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26_o* __this, const MethodInfo* method);
// 0x58cc0a0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<QuickPlay>d__26$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26_o* __this, const MethodInfo* method);
// 0x58cc0b0

void Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_QuickPlay_d__26_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<QuickPlay>d__26$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26_o* __this, const MethodInfo* method);
// 0x58cc0f0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<RunQuickPlay>d__25$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25___ctor (Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x58c8e70

void Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25___ctor
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<RunQuickPlay>d__25$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25_o* __this, const MethodInfo* method);
// 0x58cc100

void Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25_o *__this,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<RunQuickPlay>d__25$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25__MoveNext (Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25_o* __this, const MethodInfo* method);
// 0x58cc110

bool Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25__MoveNext
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25_o *__this,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Game_AottgQuickPlay_o *pGVar2;
  Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26_o *__this_00;
  
  iVar1 = (__this->fields).__1__state;
  pGVar2 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgQuickPlay_o *)0x0) {
label_058cc1d9:
      ThrowNullReferenceException();
    }
    if (Il2CppMethodInitialized_07545429 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_QuickPlay_d__26);
      Il2CppMethodInitialized_07545429 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_QuickPlay_d__26);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    (__this_00->fields).__4__this = pGVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgQuickPlay_o *)0x0) goto label_058cc1d9;
    (pGVar2->fields)._routine = (UnityEngine_Coroutine_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields)._routine);
  }
  return iVar1 == 0;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<RunQuickPlay>d__25$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25_o* __this, const MethodInfo* method);
// 0x58cc1e0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<RunQuickPlay>d__25$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25_o* __this, const MethodInfo* method);
// 0x58cc1f0

void Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_RunQuickPlay_d__25_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<RunQuickPlay>d__25$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25_o* __this, const MethodInfo* method);
// 0x58cc230

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForJoin>d__35$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35___ctor (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x58c9440

void Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35___ctor
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForJoin>d__35$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35_o* __this, const MethodInfo* method);
// 0x58cc240

void Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35_o *__this,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForJoin>d__35$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35__MoveNext (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35_o* __this, const MethodInfo* method);
// 0x58cc250
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58cc2e6: jmp 0x58cc39d
// asm:   0x58cc350: jmp 0x58cc3dd

bool Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35__MoveNext
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Action_bool__o *pSVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07545445 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07545445 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    fVar5 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
    (__this->fields)._start_5__2 = fVar5;
  }
  fVar5 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
  if ((__this->fields)._start_5__2 + 8.0 <= fVar5) goto label_058cc39d;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar3 = Photon_Pun_PhotonNetwork__get_InRoom((MethodInfo *)0x0);
  }
  else {
    bVar3 = Photon_Pun_PhotonNetwork__get_InRoom((MethodInfo *)0x0);
  }
  if (bVar3) goto label_058cc39d;
  fVar5 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
  if (fVar5 <= (__this->fields)._start_5__2 + 1.0) goto label_058cc3dd;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    if (Il2CppMethodInitialized_07545433 != '\0') goto label_058cc338;
label_058cc363:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07545433 = '\x01';
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_058cc344;
label_058cc382:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    uVar4 = Photon_Pun_PhotonNetwork__get_NetworkClientState((MethodInfo *)0x0);
  }
  else {
    if (Il2CppMethodInitialized_07545433 == '\0') goto label_058cc363;
label_058cc338:
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_058cc382;
label_058cc344:
    uVar4 = Photon_Pun_PhotonNetwork__get_NetworkClientState((MethodInfo *)0x0);
  }
  if ((0xf < uVar4) || ((0xc010U >> (uVar4 & 0x1f) & 1) == 0)) {
label_058cc3dd:
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    return true;
  }
label_058cc39d:
  pSVar2 = (__this->fields).done;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_InRoom((MethodInfo *)0x0);
  if (pSVar2 == (System_Action_bool__o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,bVar3,(pSVar2->fields).method);
  return false;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForJoin>d__35$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35_o* __this, const MethodInfo* method);
// 0x58cc410

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForJoin>d__35$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35_o* __this, const MethodInfo* method);
// 0x58cc420

void Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_WaitForJoin_d__35_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForJoin>d__35$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35_o* __this, const MethodInfo* method);
// 0x58cc460

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForPings>d__31$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31___ctor (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x58c9080

void Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31___ctor
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForPings>d__31$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31_o* __this, const MethodInfo* method);
// 0x58cc470

void Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31_o *__this,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForPings>d__31$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31__MoveNext (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31_o* __this, const MethodInfo* method);
// 0x58cc480
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58cc59e: jmp 0x58cc5b9
// asm:   0x58cc6b0: lea rdi, [r15 + 0x18]
// asm:   0x58cc6b4: mov qword ptr [r15 + 0x18], 0
// asm:   0x58cc6bc: xor esi, esi
// asm:   0x58cc6be: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x58cc6c3: mov dword ptr [r15 + 0x10], 1
// asm:   0x58cc6cb: mov bl, 1
// asm:   0x58cc6cd: jmp 0x58cc65c

bool Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31__MoveNext
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_AottgQuickPlay_RegionPing__o *pSVar2;
  Il2CppObject *object;
  int32_t iVar3;
  Gisketch_Aottg2UI_Game_AottgQuickPlay_StaticFields *pGVar4;
  Gisketch_Aottg2UI_Game_AottgQuickPlay___c_StaticFields *pGVar5;
  System_Func_AottgQuickPlay_RegionPing__bool__o *__this_00;
  float fVar6;
  
  if (Il2CppMethodInitialized_07545446 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Count_AottgQuickPlay_RegionPing);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_AottgQuickPlay_RegionPing_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgQuickPlay_RegionPing_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c_WaitForPings_b__31_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c);
    Il2CppMethodInitialized_07545446 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    (__this->fields)._firstDoneAt_5__2 = -1.0;
  }
  fVar6 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
  }
  pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->static_fields;
  if (fVar6 < pGVar4->_pingStartedAt + 4.0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->static_fields;
    }
    pSVar2 = pGVar4->Pings;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c);
      pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
      __this_00 = pGVar5->__9__31_0;
    }
    else {
      pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
      __this_00 = pGVar5->__9__31_0;
    }
    if (__this_00 == (System_Func_AottgQuickPlay_RegionPing__bool__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c)->_2).cctor_finished_or_no_cctor
          == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c);
        pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
      }
      object = (Il2CppObject *)pGVar5->__9;
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_AottgQuickPlay_RegionPing_bool);
      System_Func_object__bool____ctor
                ((System_Func_object__bool__o *)__this_00,object,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c_WaitForPings_b__31_0,
                 (MethodInfo_4F19300 *)0x0);
      pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
      pGVar5->__9__31_0 = __this_00;
      Il2CppCodeGenWriteBarrier(&pGVar5->__9__31_0);
    }
    iVar3 = System_Linq_Enumerable__Count_object__34e8070
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                       (System_Func_TSource__bool__o *)__this_00,
                       (MethodInfo_34E8070 *)MethodInfo_System_Linq_Enumerable_Count_AottgQuickPlay_RegionPing
                      );
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    }
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->static_fields->Pings;
    if (pSVar2 == (System_Collections_Generic_List_AottgQuickPlay_RegionPing__o *)0x0) {
      ThrowNullReferenceException();
    }
    if (iVar3 != (pSVar2->fields)._size) {
      fVar6 = (__this->fields)._firstDoneAt_5__2;
      if ((0 < iVar3) && (fVar6 < 0.0)) {
        fVar6 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
        (__this->fields)._firstDoneAt_5__2 = fVar6;
      }
      if ((0.0 <= fVar6) &&
         (fVar6 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0),
         (__this->fields)._firstDoneAt_5__2 + 0.75 < fVar6)) {
        return false;
      }
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForPings>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31_o* __this, const MethodInfo* method);
// 0x58cc6e0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForPings>d__31$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31_o* __this, const MethodInfo* method);
// 0x58cc6f0

void Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_WaitForPings_d__31_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForPings>d__31$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31_o* __this, const MethodInfo* method);
// 0x58cc730

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForRoomList>d__33$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33___ctor (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x58c9320

void Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33___ctor
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForRoomList>d__33$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33_o* __this, const MethodInfo* method);
// 0x58cc740

void Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33_o *__this,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForRoomList>d__33$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33__MoveNext (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33_o* __this, const MethodInfo* method);
// 0x58cc750
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58cc7ed: jmp 0x58cc838

bool Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33__MoveNext
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_07545447 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MainMenuGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07545447 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
label_058cc7b7:
    fVar4 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
    if ((__this->fields)._deadline_5__2 <= fVar4) {
      return false;
    }
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      bVar3 = Photon_Pun_PhotonNetwork__get_InLobby((MethodInfo *)0x0);
      if (bVar3) goto label_058cc7ff;
    }
    else {
      bVar3 = Photon_Pun_PhotonNetwork__get_InLobby((MethodInfo *)0x0);
      if (bVar3) {
label_058cc7ff:
        if ((TypeInfo_GameManagers_MainMenuGameManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
          cVar1 = TypeInfo_GameManagers_MainMenuGameManager->static_fields->RoomListReceived;
        }
        else {
          cVar1 = TypeInfo_GameManagers_MainMenuGameManager->static_fields->RoomListReceived;
        }
        if (cVar1 != '\0') goto label_058cc81f;
      }
    }
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    bVar3 = true;
  }
  else {
    if (iVar2 == 0) {
      (__this->fields).__1__state = -1;
      fVar4 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
      (__this->fields)._deadline_5__2 = fVar4 + 1.5;
      goto label_058cc7b7;
    }
label_058cc81f:
    bVar3 = false;
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForRoomList>d__33$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33_o* __this, const MethodInfo* method);
// 0x58cc860

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForRoomList>d__33$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33_o* __this, const MethodInfo* method);
// 0x58cc870

void Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_WaitForRoomList_d__33_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForRoomList>d__33$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33_o* __this, const MethodInfo* method);
// 0x58cc8b0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$get_IsRunning
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgQuickPlay__get_IsRunning (const MethodInfo* method);
// 0x58c82e0

bool Gisketch_Aottg2UI_Game_AottgQuickPlay__get_IsRunning(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgQuickPlay_o *pGVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07545423 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545423 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = false;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    }
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->static_fields->_instance;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgQuickPlay_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar3 = (pGVar1->fields)._routine != (UnityEngine_Coroutine_o *)0x0;
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$Prewarm
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__Prewarm (const MethodInfo* method);
// 0x58c83a0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58c842c: cmp byte ptr [rip + 0x1c7cff9], 0
// asm:   0x58c8433: jne 0x58c8448
// asm:   0x58c84ae: jmp 0x58c8448

void Gisketch_Aottg2UI_Game_AottgQuickPlay__Prewarm(MethodInfo *method)

{
  uint32_t uVar1;
  MethodInfo *in_RSI;
  Gisketch_Aottg2UI_Game_AottgQuickPlay_c *method_00;
  float fVar2;
  System_Nullable_AottgServerRegion__o local_48;
  
  if (Il2CppMethodInitialized_07545424 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_AottgServerRegion_get_HasValue);
    Il2CppMethodInitialized_07545424 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    Gisketch_Aottg2UI_Game_AottgQuickPlay__ChosenRegion(&local_48,in_RSI);
  }
  else {
    Gisketch_Aottg2UI_Game_AottgQuickPlay__ChosenRegion(&local_48,in_RSI);
  }
  if (local_48.fields.hasValue == false) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay)->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    }
    if (Il2CppMethodInitialized_0754542c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
      Il2CppMethodInitialized_0754542c = '\x01';
    }
    fVar2 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    }
    if (60.0 <= fVar2 - TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->static_fields->_pingStartedAt) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
        method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
        Gisketch_Aottg2UI_Game_AottgQuickPlay__StartPings((MethodInfo *)method_00);
        return;
      }
      Gisketch_Aottg2UI_Game_AottgQuickPlay__StartPings
                ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$Begin
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__Begin (const MethodInfo* method);
// 0x58c8bf0

void Gisketch_Aottg2UI_Game_AottgQuickPlay__Begin(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgQuickPlay_o *pGVar1;
  Gisketch_Aottg2UI_Game_AottgQuickPlay_StaticFields *pGVar2;
  bool bVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545425 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_AottgQuickPlay)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545425 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    __this = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
    if (__this == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_058c8d01;
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_058c8d01;
    method_00 = (MethodInfo *)
                UnityEngine_GameObject__AddComponent_object_
                          (__this_00,
                           (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_AottgQuickPlay
                          );
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    }
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->static_fields;
    pGVar2->_instance = (Gisketch_Aottg2UI_Game_AottgQuickPlay_o *)method_00;
    Il2CppCodeGenWriteBarrier(&pGVar2->_instance);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->static_fields->_instance;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgQuickPlay_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgQuickPlay__Run(pGVar1,method_00);
    return;
  }
label_058c8d01:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$Cancel
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__Cancel (const MethodInfo* method);
// 0x58c7670

void Gisketch_Aottg2UI_Game_AottgQuickPlay__Cancel(MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgQuickPlay_o *pGVar2;
  
  if (Il2CppMethodInitialized_07545426 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545426 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->static_fields->_instance;
  if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgQuickPlay_o *)0x0) {
    if ((pGVar2->fields)._routine == (UnityEngine_Coroutine_o *)0x0) {
      return;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->static_fields->_instance;
      if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgQuickPlay_o *)0x0) goto label_058c777d;
    }
    UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
              ((UnityEngine_MonoBehaviour_o *)pGVar2,(pGVar2->fields)._routine,(MethodInfo *)0x0);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->static_fields->_instance;
    if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgQuickPlay_o *)0x0) {
      (pGVar2->fields)._routine = (UnityEngine_Coroutine_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields)._routine);
      return;
    }
  }
label_058c777d:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$Run
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__Run (Gisketch_Aottg2UI_Game_AottgQuickPlay_o* __this, const MethodInfo* method);
// 0x58c8d10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58c8df7: jmp 0x58c8d5c

void Gisketch_Aottg2UI_Game_AottgQuickPlay__Run
               (Gisketch_Aottg2UI_Game_AottgQuickPlay_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25_o *__this_00;
  UnityEngine_Coroutine_o *pUVar2;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07545427 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    Il2CppMethodInitialized_07545427 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay = (Gisketch_Aottg2UI_Game_AottgQuickPlay_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    Gisketch_Aottg2UI_Game_AottgQuickPlay__Cancel((MethodInfo *)klass);
  }
  else {
    Gisketch_Aottg2UI_Game_AottgQuickPlay__Cancel((MethodInfo *)klass);
  }
  if (Il2CppMethodInitialized_07545428 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_RunQuickPlay_d__25);
    Il2CppMethodInitialized_07545428 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_RunQuickPlay_d__25);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  pUVar2 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                     ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                      (MethodInfo *)0x0);
  (__this->fields)._routine = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._routine);
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$RunQuickPlay
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay (Gisketch_Aottg2UI_Game_AottgQuickPlay_o* __this, const MethodInfo* method);
// 0x58c8e00

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay
          (Gisketch_Aottg2UI_Game_AottgQuickPlay_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgQuickPlay__RunQuickPlay_d__25_o *__this_00;
  
  if (Il2CppMethodInitialized_07545428 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_RunQuickPlay_d__25);
    Il2CppMethodInitialized_07545428 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_RunQuickPlay_d__25);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$QuickPlay
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay (Gisketch_Aottg2UI_Game_AottgQuickPlay_o* __this, const MethodInfo* method);
// 0x58c8e90

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay
          (Gisketch_Aottg2UI_Game_AottgQuickPlay_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgQuickPlay__QuickPlay_d__26_o *__this_00;
  
  if (Il2CppMethodInitialized_07545429 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_QuickPlay_d__26);
    Il2CppMethodInitialized_07545429 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_QuickPlay_d__26);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$ChosenRegion
// il2cpp: System_Nullable_AottgServerRegion__o Gisketch_Aottg2UI_Game_AottgQuickPlay__ChosenRegion (const MethodInfo* method);
// 0x58c84c0

System_Nullable_AottgServerRegion__o *
Gisketch_Aottg2UI_Game_AottgQuickPlay__ChosenRegion
          (System_Nullable_AottgServerRegion__o *__return_storage_ptr__,MethodInfo *method)

{
  Settings_MultiplayerSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UnityEngine_Vector2_Fields UVar3;
  System_String_o *pSVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  Gisketch_Aottg2UI_Game_AottgServerRegion_o value;
  undefined8 uVar9;
  undefined8 uVar10;
  Gisketch_Aottg2UI_Game_AottgServerRegion_Fields *pGVar11;
  Gisketch_Aottg2UI_Game_AottgServerRegion_Fields *pGVar12;
  Gisketch_Aottg2UI_Game_AottgServerRegion_o *pGVar13;
  Gisketch_Aottg2UI_Game_AottgServerRegion_array *pGVar14;
  uint uVar15;
  
  if (Il2CppMethodInitialized_0754542a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_AottgServerRegion_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_0754542a = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
  if ((pSVar1 == (Settings_MultiplayerSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).QuickPlayRegion, pSVar2 == (Settings_IntSetting_o *)0x0)) {
label_058c8643:
    ThrowNullReferenceException();
  }
  uVar15 = (pSVar2->fields)._value - 1;
  if (-1 < (int)uVar15) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion);
    }
    pGVar14 = TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion->static_fields->All;
    if (pGVar14 == (Gisketch_Aottg2UI_Game_AottgServerRegion_array *)0x0) goto label_058c8643;
    if ((int)uVar15 < (int)pGVar14->max_length) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion);
        pGVar14 = TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion->static_fields->All;
        if (pGVar14 == (Gisketch_Aottg2UI_Game_AottgServerRegion_array *)0x0) goto label_058c8643;
      }
      if ((uint)pGVar14->max_length <= uVar15) {
        ThrowIndexOutOfRangeException();
      }
      UVar3 = pGVar14->m_Items[uVar15].fields.LabelPoint.fields;
      uVar9 = pGVar14->m_Items[uVar15].fields.Id;
      uVar10 = pGVar14->m_Items[uVar15].fields.Label;
      value.fields.Label = (System_String_o *)uVar10;
      value.fields.Id = (System_String_o *)uVar9;
      pGVar11 = &pGVar14->m_Items[uVar15].fields;
      pSVar4 = pGVar11->MaskSprite;
      pGVar12 = &pGVar14->m_Items[uVar15].fields;
      uVar5 = (pGVar12->MaskArea).fields.m_XMin;
      uVar6 = (pGVar12->MaskArea).fields.m_YMin;
      value.fields.MaskArea.fields.m_YMin = (float)uVar6;
      value.fields.MaskArea.fields.m_XMin = (float)uVar5;
      uVar7 = (pGVar12->MaskArea).fields.m_Width;
      uVar8 = (pGVar12->MaskArea).fields.m_Height;
      value.fields.MaskArea.fields.m_Height = (float)uVar8;
      value.fields.MaskArea.fields.m_Width = (float)uVar7;
      pGVar13 = &(__return_storage_ptr__->fields).value;
      (pGVar13->fields).MaskArea.fields.m_Width = 0.0;
      (pGVar13->fields).MaskArea.fields.m_Height = 0.0;
      (__return_storage_ptr__->fields).value.fields.LabelPoint.fields = (UnityEngine_Vector2_Fields)0x0;
      (__return_storage_ptr__->fields).value.fields.MaskSprite = (System_String_o *)0x0;
      pGVar13 = &(__return_storage_ptr__->fields).value;
      (pGVar13->fields).MaskArea.fields.m_XMin = 0.0;
      (pGVar13->fields).MaskArea.fields.m_YMin = 0.0;
      (__return_storage_ptr__->fields).value.fields.Label = (System_String_o *)0x0;
      *(undefined8 *)&(__return_storage_ptr__->fields).value.fields.Region = 0;
      *(undefined8 *)&__return_storage_ptr__->fields = 0;
      (__return_storage_ptr__->fields).value.fields.Id = (System_String_o *)0x0;
      value.fields.Region = pGVar11->Region;
      value.fields._20_4_ = *(undefined4 *)&pGVar11->field_0x14;
      value.fields.MaskSprite = pSVar4;
      value.fields.LabelPoint.fields = UVar3;
      System_Nullable_AottgServerRegion____ctor
                (__return_storage_ptr__,value,
                 (MethodInfo_3CCE0F0 *)MethodInfo_System_Nullable_AottgServerRegion_ctor);
      return __return_storage_ptr__;
    }
  }
  pGVar13 = &(__return_storage_ptr__->fields).value;
  (pGVar13->fields).MaskArea.fields.m_Width = 0.0;
  (pGVar13->fields).MaskArea.fields.m_Height = 0.0;
  (__return_storage_ptr__->fields).value.fields.LabelPoint.fields = (UnityEngine_Vector2_Fields)0x0;
  (__return_storage_ptr__->fields).value.fields.MaskSprite = (System_String_o *)0x0;
  pGVar13 = &(__return_storage_ptr__->fields).value;
  (pGVar13->fields).MaskArea.fields.m_XMin = 0.0;
  (pGVar13->fields).MaskArea.fields.m_YMin = 0.0;
  (__return_storage_ptr__->fields).value.fields.Label = (System_String_o *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->fields).value.fields.Region = 0;
  *(undefined8 *)&__return_storage_ptr__->fields = 0;
  (__return_storage_ptr__->fields).value.fields.Id = (System_String_o *)0x0;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$FindNearbyRegions
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions (System_Collections_Generic_List_AottgServerRegion__o* regions, const MethodInfo* method);
// 0x58c8f20

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions
          (System_Collections_Generic_List_AottgServerRegion__o *regions,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgQuickPlay__FindNearbyRegions_d__28_o *__this;
  
  if (Il2CppMethodInitialized_0754542b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_FindNearbyRegions_d__28);
    Il2CppMethodInitialized_0754542b = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_FindNearbyRegions_d__28);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).regions = regions;
  Il2CppCodeGenWriteBarrier(&(__this->fields).regions);
  return (System_Collections_IEnumerator_o *)__this;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$PingsFresh
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgQuickPlay__PingsFresh (const MethodInfo* method);
// 0x58c8650

bool Gisketch_Aottg2UI_Game_AottgQuickPlay__PingsFresh(MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_0754542c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    Il2CppMethodInitialized_0754542c = '\x01';
  }
  fVar1 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
  }
  return fVar1 - TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->static_fields->_pingStartedAt < 60.0;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$StartPings
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__StartPings (const MethodInfo* method);
// 0x58c86c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58c89ef: jmp 0x58c8a18

void Gisketch_Aottg2UI_Game_AottgQuickPlay__StartPings(MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  uint uVar3;
  Settings_MultiplayerSettings_o *pSVar4;
  System_Collections_Generic_List_AottgQuickPlay_RegionPing__o *pSVar5;
  Gisketch_Aottg2UI_Game_AottgServerRegion_array *pGVar6;
  System_String_o *code;
  System_String_o *pSVar7;
  System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *__this;
  Il2CppObject *object;
  Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_array *pGVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  Gisketch_Aottg2UI_Game_AottgServerRegion_o *pGVar13;
  MethodInfo *pMVar14;
  int iVar15;
  ulong uVar16;
  System_Threading_WaitCallback_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass30_0_o *pGVar17;
  System_String_o *pSVar18;
  System_String_o *str2;
  Photon_Realtime_Region_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgQuickPlay___c_StaticFields *pGVar19;
  System_Action_Region__o *__this_02;
  Photon_Realtime_RegionPinger_o *pPVar20;
  Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_o *__this_03;
  ulong uVar21;
  undefined8 *puVar22;
  float fVar23;
  
  if (Il2CppMethodInitialized_0754542d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Region);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgQuickPlay_RegionPing_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgQuickPlay_RegionPing_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Realtime_RegionPinger);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Realtime_Region);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c_StartPings_b__30_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass30_0_StartPings_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass30_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Threading_WaitCallback);
    il2cpp_codegen_initialize_runtime_metadata(&":");
    Il2CppMethodInitialized_0754542d = '\x01';
  }
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
  }
  pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->static_fields->Pings;
  if (pSVar5 != (System_Collections_Generic_List_AottgQuickPlay_RegionPing__o *)0x0) {
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar2 = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    if (0 < iVar2) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    fVar23 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->static_fields->_pingStartedAt = fVar23;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion);
    }
    pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion->static_fields->All;
    if (pGVar6 != (Gisketch_Aottg2UI_Game_AottgServerRegion_array *)0x0) {
      iVar15 = (int)pGVar6->max_length;
      if (pSVar4 == (Settings_MultiplayerSettings_o *)0x0) {
        if (0 < iVar15) {
          pGVar17 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass30_0);
          System_Object___ctor((Il2CppObject *)pGVar17,(MethodInfo *)0x0);
          ThrowNullReferenceException();
        }
      }
      else if (0 < iVar15) {
        uVar16 = pGVar6->max_length & 0xffffffff;
        puVar22 = (undefined8 *)&pGVar6->m_Items[0].fields.field_0x14;
        uVar21 = 0;
        do {
          if (uVar16 <= uVar21) {
            ThrowIndexOutOfRangeException();
          }
          code = *(System_String_o **)((long)puVar22 + -0x14);
          pSVar7 = *(System_String_o **)((long)puVar22 + -0xc);
          iVar2 = *(int32_t *)((long)puVar22 + -4);
          fVar23 = *(float *)(puVar22 + 4);
          uVar9 = puVar22[2];
          uVar10 = puVar22[3];
          uVar11 = *puVar22;
          uVar12 = puVar22[1];
          pGVar17 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass30_0);
          System_Object___ctor((Il2CppObject *)pGVar17,(MethodInfo *)0x0);
          __this = (pSVar4->fields).PublicAddresses;
          if (__this == (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)0x0)
          goto label_058c8bc3;
          pSVar18 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,iVar2,
                               (MethodInfo_4A54F30 *)
                               MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_get_Item
                              );
          str2 = System_Int32__ToString(&(pSVar4->fields).DefaultPort,(MethodInfo *)0x0);
          pSVar18 = System_String__Concat_5301f10(pSVar18,":",str2,(MethodInfo *)0x0);
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Photon_Realtime_Region);
          Photon_Realtime_Region___ctor(__this_01,code,pSVar18,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c)
            ;
            pGVar19 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
            __this_02 = pGVar19->__9__30_0;
          }
          else {
            pGVar19 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
            __this_02 = pGVar19->__9__30_0;
          }
          if (__this_02 == (System_Action_Region__o *)0x0) {
            if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c)->_2).
                cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c);
              pGVar19 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
            }
            object = (Il2CppObject *)pGVar19->__9;
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Region);
            System_Action_object____ctor
                      ((System_Action_object__o *)__this_02,object,
                       (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c_StartPings_b__30_0,
                       (MethodInfo_4A81BE0 *)0x0);
            pGVar19 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
            pGVar19->__9__30_0 = __this_02;
            Il2CppCodeGenWriteBarrier(&pGVar19->__9__30_0);
          }
          pPVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Photon_Realtime_RegionPinger);
          Photon_Realtime_RegionPinger___ctor(pPVar20,__this_01,__this_02,(MethodInfo *)0x0);
          if (pGVar17 == (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass30_0_o *)0x0)
          goto label_058c8bc3;
          (pGVar17->fields).pinger = pPVar20;
          Il2CppCodeGenWriteBarrier(&(pGVar17->fields).pinger);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
          }
          pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->static_fields->Pings;
          pPVar20 = (pGVar17->fields).pinger;
          __this_03 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing);
          System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
          (__this_03->fields).Region.fields.Id = code;
          (__this_03->fields).Region.fields.Label = pSVar7;
          (__this_03->fields).Region.fields.Region = iVar2;
          *(undefined8 *)&(__this_03->fields).Region.fields.field_0x14 = uVar11;
          *(undefined8 *)((long)&(__this_03->fields).Region.fields.MaskSprite + 4) = uVar12;
          pGVar13 = &(__this_03->fields).Region;
          (pGVar13->fields).MaskArea.fields.m_YMin = (float)(int)uVar9;
          (pGVar13->fields).MaskArea.fields.m_Width = (float)(int)((ulong)uVar9 >> 0x20);
          *(undefined8 *)&(__this_03->fields).Region.fields.MaskArea.fields.m_Height = uVar10;
          (__this_03->fields).Region.fields.LabelPoint.fields.y = fVar23;
          Il2CppCodeGenWriteBarrier((void **)&__this_03->fields);
          (__this_03->fields)._photonRegion = __this_01;
          Il2CppCodeGenWriteBarrier(&(__this_03->fields)._photonRegion);
          (__this_03->fields)._pinger = pPVar20;
          Il2CppCodeGenWriteBarrier(&(__this_03->fields)._pinger);
          pMVar14 = MethodInfo_System_Collections_Generic_List_AottgQuickPlay_RegionPing_Add;
          if (pSVar5 == (System_Collections_Generic_List_AottgQuickPlay_RegionPing__o *)0x0)
          goto label_058c8bc3;
          piVar1 = &(pSVar5->fields)._version;
          *piVar1 = *piVar1 + 1;
          pGVar8 = (pSVar5->fields)._items;
          if (pGVar8 == (Gisketch_Aottg2UI_Game_AottgQuickPlay_RegionPing_array *)0x0) goto label_058c8bc3;
          uVar3 = (pSVar5->fields)._size;
          if (uVar3 < (uint)pGVar8->max_length) {
            (pSVar5->fields)._size = uVar3 + 1;
            pGVar8->m_Items[(int)uVar3] = __this_03;
            Il2CppCodeGenWriteBarrier(pGVar8->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_03,
                       (MethodInfo_395D230 *)pMVar14->klass->rgctx_data[0xe].method);
          }
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Threading_WaitCallback);
          System_Threading_WaitCallback___ctor
                    (__this_00,(Il2CppObject *)pGVar17,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass30_0_StartPings_b__1,
                     (MethodInfo *)0x0);
          System_Threading_ThreadPool__QueueUserWorkItem_553cc30(__this_00,(MethodInfo *)0x0);
          uVar21 = uVar21 + 1;
          uVar3 = (uint)pGVar6->max_length;
          uVar16 = (ulong)uVar3;
          puVar22 = puVar22 + 7;
        } while ((long)uVar21 < (long)(int)uVar3);
      }
      return;
    }
  }
label_058c8bc3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$WaitForPings
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings (const MethodInfo* method);
// 0x58c9030

System_Collections_IEnumerator_o * Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForPings_d__31_o *__this;
  
  if (Il2CppMethodInitialized_0754542e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_WaitForPings_d__31);
    Il2CppMethodInitialized_0754542e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_WaitForPings_d__31);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  return (System_Collections_IEnumerator_o *)__this;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$Reachable
// il2cpp: System_Collections_Generic_List_AottgQuickPlay_RegionPing__o* Gisketch_Aottg2UI_Game_AottgQuickPlay__Reachable (const MethodInfo* method);
// 0x58c90a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58c916d: jmp 0x58c9188
// asm:   0x58c921d: jmp 0x58c9238

System_Collections_Generic_List_AottgQuickPlay_RegionPing__o *
Gisketch_Aottg2UI_Game_AottgQuickPlay__Reachable(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Func_AottgQuickPlay_RegionPing__bool__o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  Gisketch_Aottg2UI_Game_AottgQuickPlay___c_StaticFields *pGVar2;
  System_Func_AottgQuickPlay_RegionPing__int__o *__this_00;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_AottgQuickPlay_RegionPing__o *pSVar3;
  
  if (Il2CppMethodInitialized_0754542f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderBy_AottgQuickPlay_RegionPing_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToList_AottgQuickPlay_RegionPing);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Where_AottgQuickPlay_RegionPing);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_AottgQuickPlay_RegionPing_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_AottgQuickPlay_RegionPing_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c_Reachable_b__32_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c_Reachable_b__32_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c);
    Il2CppMethodInitialized_0754542f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
  }
  pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->static_fields->Pings;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
    __this = pGVar2->__9__32_0;
  }
  else {
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
    __this = pGVar2->__9__32_0;
  }
  if (__this == (System_Func_AottgQuickPlay_RegionPing__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c)->_2).cctor_finished_or_no_cctor ==
        0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pGVar2->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_AottgQuickPlay_RegionPing_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c_Reachable_b__32_0,
               (MethodInfo_4F19300 *)0x0);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
    pGVar2->__9__32_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar2->__9__32_0);
  }
  source = System_Linq_Enumerable__Where_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                      (System_Func_TSource__bool__o *)__this,
                      (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_AottgQuickPlay_RegionPing)
  ;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
    __this_00 = pGVar2->__9__32_1;
  }
  else {
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
    __this_00 = pGVar2->__9__32_1;
  }
  if (__this_00 == (System_Func_AottgQuickPlay_RegionPing__int__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c)->_2).cctor_finished_or_no_cctor ==
        0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pGVar2->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_AottgQuickPlay_RegionPing_int);
    System_Func_object__int____ctor
              ((System_Func_object__int__o *)__this_00,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c_Reachable_b__32_1,
               (MethodInfo_4F198F0 *)0x0);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
    pGVar2->__9__32_1 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar2->__9__32_1);
  }
  source_00 = System_Linq_Enumerable__OrderBy_object__int_
                        (source,(System_Func_TSource__TKey__o *)__this_00,
                         (MethodInfo_34F1DD0 *)
                         MethodInfo_System_Linq_Enumerable_OrderBy_AottgQuickPlay_RegionPing_int);
  pSVar3 = (System_Collections_Generic_List_AottgQuickPlay_RegionPing__o *)
           System_Linq_Enumerable__ToList_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_AottgQuickPlay_RegionPing
                     );
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$WaitForRoomList
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList (const MethodInfo* method);
// 0x58c92d0

System_Collections_IEnumerator_o * Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForRoomList_d__33_o *__this;
  
  if (Il2CppMethodInitialized_07545430 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_WaitForRoomList_d__33);
    Il2CppMethodInitialized_07545430 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_WaitForRoomList_d__33);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  return (System_Collections_IEnumerator_o *)__this;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$ConnectToLobby
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby (int32_t region, System_Action_bool__o* done, const MethodInfo* method);
// 0x58c9340

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby
          (int32_t region,System_Action_bool__o *done,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgQuickPlay__ConnectToLobby_d__34_o *__this;
  
  if (Il2CppMethodInitialized_07545431 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_ConnectToLobby_d__34);
    Il2CppMethodInitialized_07545431 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_ConnectToLobby_d__34);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).region = region;
  (__this->fields).done = done;
  Il2CppCodeGenWriteBarrier(&(__this->fields).done);
  return (System_Collections_IEnumerator_o *)__this;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$WaitForJoin
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin (System_Action_bool__o* done, const MethodInfo* method);
// 0x58c93d0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin(System_Action_bool__o *done,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgQuickPlay__WaitForJoin_d__35_o *__this;
  
  if (Il2CppMethodInitialized_07545432 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_WaitForJoin_d__35);
    Il2CppMethodInitialized_07545432 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_WaitForJoin_d__35);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).done = done;
  Il2CppCodeGenWriteBarrier(&(__this->fields).done);
  return (System_Collections_IEnumerator_o *)__this;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$IsJoining
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgQuickPlay__IsJoining (const MethodInfo* method);
// 0x58c9460

bool Gisketch_Aottg2UI_Game_AottgQuickPlay__IsJoining(MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_07545433 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07545433 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  iVar1 = Photon_Pun_PhotonNetwork__get_NetworkClientState((MethodInfo *)0x0);
  return iVar1 - 0x10U < 0xfffffffe && iVar1 != 4;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$PickRoom
// il2cpp: Photon_Realtime_RoomInfo_o* Gisketch_Aottg2UI_Game_AottgQuickPlay__PickRoom (System_Collections_Generic_HashSet_string__o* tried, const MethodInfo* method);
// 0x58c94b0

Photon_Realtime_RoomInfo_o *
Gisketch_Aottg2UI_Game_AottgQuickPlay__PickRoom
          (System_Collections_Generic_HashSet_string__o *tried,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass37_0_o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *source;
  System_Func_RoomInfo__bool__o *__this_01;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Object_array *pSVar3;
  
  if (Il2CppMethodInitialized_07545434 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_get_Values);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_RoomInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_RoomInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_RoomInfo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MainMenuGameManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass37_0_PickRoom_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass37_0);
    Il2CppMethodInitialized_07545434 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass37_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgQuickPlay___c__DisplayClass37_0_o *)0x0) {
    (__this_00->fields).tried = tried;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).tried);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    (__this_00->fields).loggedIn = bVar1;
    if ((TypeInfo_GameManagers_MainMenuGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_GameManagers_MainMenuGameManager->static_fields->RoomList;
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      source = System_Collections_Generic_Dictionary_object__object___get_Values
                         (__this,(MethodInfo_4AAD2A0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_get_Values);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_RoomInfo_bool);
      System_Func_object__bool____ctor
                ((System_Func_object__bool__o *)__this_01,(Il2CppObject *)__this_00,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass37_0_PickRoom_b__0,
                 (MethodInfo_4F19300 *)0x0);
      source_00 = System_Linq_Enumerable__Where_object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             (System_Func_TSource__bool__o *)__this_01,
                             (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_RoomInfo);
      pSVar3 = System_Linq_Enumerable__ToArray_object_
                         (source_00,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_RoomInfo);
      if (pSVar3 != (System_Object_array *)0x0) {
        if (pSVar3->max_length == 0) {
          return (Photon_Realtime_RoomInfo_o *)0x0;
        }
        uVar2 = UnityEngine_Random__Range_690e2b0(0,(int32_t)pSVar3->max_length,(MethodInfo *)0x0);
        if ((uint)pSVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        return (Photon_Realtime_RoomInfo_o *)pSVar3->m_Items[(int)uVar2];
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$Host
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgQuickPlay__Host (Gisketch_Aottg2UI_Game_AottgQuickPlay_o* __this, int32_t region, bool inRegionLobby, const MethodInfo* method);
// 0x58c9670

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgQuickPlay__Host
          (Gisketch_Aottg2UI_Game_AottgQuickPlay_o *__this,int32_t region,bool inRegionLobby,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgQuickPlay__Host_d__38_o *__this_00;
  
  if (Il2CppMethodInitialized_07545435 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_Host_d__38);
    Il2CppMethodInitialized_07545435 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_Host_d__38);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).region = region;
  (__this_00->fields).inRegionLobby = inRegionLobby;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$HostGame
// il2cpp: Settings_InGameSet_o* Gisketch_Aottg2UI_Game_AottgQuickPlay__HostGame (const MethodInfo* method);
// 0x58c96f0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58c97db: jmp 0x58c9821
// asm:   0x58c98d9: cmp byte ptr [rip + 0x1c7b9ed], 0
// asm:   0x58c98e0: je 0x58c991a
// asm:   0x58c98ff: jmp 0x58c99eb

Settings_InGameSet_o * Gisketch_Aottg2UI_Game_AottgQuickPlay__HostGame(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_Experience__o *source;
  Il2CppObject *object;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameGeneralSettings_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_InGameMiscSettings_o *pSVar5;
  Settings_BoolSetting_o *__this;
  bool bVar6;
  Gisketch_Aottg2UI_Game_AottgQuickPlay___c_StaticFields *pGVar7;
  System_Func_Experience__bool__o *__this_00;
  Map_Experience_o *experience;
  
  if (Il2CppMethodInitialized_07545436 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_Experience_71a84e8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Experience_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c_HostGame_b__39_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c);
    il2cpp_codegen_initialize_runtime_metadata(&"FoodForTitan");
    Il2CppMethodInitialized_07545436 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__Begin(1,true,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_075454e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075454e6 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  source = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c);
    pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
    __this_00 = pGVar7->__9__39_0;
  }
  else {
    pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
    __this_00 = pGVar7->__9__39_0;
  }
  if (__this_00 == (System_Func_Experience__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c)->_2).cctor_finished_or_no_cctor ==
        0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c);
      pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
    }
    object = (Il2CppObject *)pGVar7->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Experience_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c_HostGame_b__39_0,
               (MethodInfo_4F19300 *)0x0);
    pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c->static_fields;
    pGVar7->__9__39_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar7->__9__39_0);
  }
  experience = System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                          (System_Func_TSource__bool__o *)__this_00,
                          (MethodInfo_34ED9E0 *)
                          MethodInfo_System_Linq_Enumerable_FirstOrDefault_Experience_71a84e8);
  if (experience == (Map_Experience_o *)0x0) {
    return (Settings_InGameSet_o *)0x0;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectExperience(experience,(MethodInfo *)0x0);
  bVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_CanStart((MethodInfo *)0x0);
  if (!bVar6) {
    return (Settings_InGameSet_o *)0x0;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    pSVar2 = *(Settings_InGameSet_o **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
              0x40);
  }
  if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).General, pSVar3 != (Settings_InGameGeneralSettings_o *)0x0)) &&
     (pSVar4 = (pSVar3->fields).RoomName, pSVar4 != (Settings_StringSetting_o *)0x0)) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)"FoodForTitan",
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar3 = (pSVar2->fields).General;
    if ((pSVar3 != (Settings_InGameGeneralSettings_o *)0x0) &&
       (pSVar4 = (pSVar3->fields).Password, pSVar4 != (Settings_StringSetting_o *)0x0)) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pSVar5 = (pSVar2->fields).Misc;
      if ((pSVar5 != (Settings_InGameMiscSettings_o *)0x0) &&
         (__this = (pSVar5->fields).AccountRequired, __this != (Settings_BoolSetting_o *)0x0)) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)__this,false,
                   (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        return pSVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$Fail
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__Fail (System_String_o* message, const MethodInfo* method);
// 0x58c99f0

void Gisketch_Aottg2UI_Game_AottgQuickPlay__Fail(System_String_o *message,MethodInfo *method)

{
  Settings_MultiplayerSettings_o *__this;
  bool bVar1;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_07545437 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"exclamation");
    Il2CppMethodInitialized_07545437 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
  }
  Gisketch_Aottg2UI_Game_AottgQuickPlay__Toast(0,"exclamation",message,in_RCX);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar1 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
  }
  else {
    bVar1 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
  }
  if (bVar1) {
    __this = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
    if (__this == (Settings_MultiplayerSettings_o *)0x0) {
      ThrowNullReferenceException();
    }
    Settings_MultiplayerSettings__Disconnect(__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$Toast
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay__Toast (int32_t variant, System_String_o* icon, System_String_o* message, const MethodInfo* method);
// 0x58c9ac0

void Gisketch_Aottg2UI_Game_AottgQuickPlay__Toast
               (int32_t variant,System_String_o *icon,System_String_o *message,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  System_String_o *title;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_07545438 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgToastDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.QuickPlay.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer.quick-play");
    Il2CppMethodInitialized_07545438 = '\x01';
  }
  __this = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  title = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.QuickPlay.Title",(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgToastDefinition);
  Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor
            (__this_00,variant,icon,title,message,"multiplayer.quick-play",(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_GisketchUIRoot__ShowToast(__this,__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgQuickPlay__Text (System_String_o* item, const MethodInfo* method);
// 0x58c9bb0

System_String_o * Gisketch_Aottg2UI_Game_AottgQuickPlay__Text(System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545439 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.QuickPlay.");
    Il2CppMethodInitialized_07545439 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320("MainMenu.QuickPlay.",item,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay___ctor (Gisketch_Aottg2UI_Game_AottgQuickPlay_o* __this, const MethodInfo* method);
// 0x58c9c30

void Gisketch_Aottg2UI_Game_AottgQuickPlay___ctor
               (Gisketch_Aottg2UI_Game_AottgQuickPlay_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgQuickPlay$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgQuickPlay___cctor (const MethodInfo* method);
// 0x58c9c40

void Gisketch_Aottg2UI_Game_AottgQuickPlay___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_AottgQuickPlay_RegionPing__o *__this;
  
  if (Il2CppMethodInitialized_0754543a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgQuickPlay_RegionPing_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_AottgQuickPlay_RegionPing);
    Il2CppMethodInitialized_0754543a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgQuickPlay_RegionPing);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_AottgQuickPlay_RegionPing_ctor);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->static_fields->Pings = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->static_fields->Pings);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->static_fields->_pingStartedAt = -INFINITY;
  return;
}


