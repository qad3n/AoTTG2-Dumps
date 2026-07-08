// Type: Gisketch.Aottg2UI.Game.AottgExternalLinks
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgExternalLinks.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgExternalLinks$$TryShow
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgExternalLinks__TryShow (System_String_o* url, const MethodInfo* method);
// 0x4174db0

bool_conflict
Gisketch_Aottg2UI_Game_AottgExternalLinks__TryShow(System_String_o *url,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  bool_conflict bVar2;
  
  if (DAT_05704af1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704af1 = '\x01';
  }
  if (DAT_05704b2c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgExternalLinkDialogHost);
    DAT_05704b2c = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AottgExternalLinkDialogHost + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = 0;
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar2 = 0;
    bVar1 = System_String__IsNullOrWhiteSpace(url,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      method_00 = extraout_RDX;
      if (DAT_05704b2c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_AottgExternalLinkDialogHost);
        DAT_05704b2c = '\x01';
        method_00 = extraout_RDX_00;
      }
      if ((Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *)
          **(undefined8 **)(TypeInfo_AottgExternalLinkDialogHost + 0xb8) ==
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Show
                ((Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *)
                 **(undefined8 **)(TypeInfo_AottgExternalLinkDialogHost + 0xb8),url,method_00);
      bVar2 = 1;
    }
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinks$$Show
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinks__Show (System_String_o* url, const MethodInfo* method);
// 0x4174dc0

void Gisketch_Aottg2UI_Game_AottgExternalLinks__Show(System_String_o *url,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704afb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&"No AoTTG external link dialog host is available.");
    DAT_05704afb = '\x01';
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__ShowUrl(url,method);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__IsNullOrWhiteSpace(url,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Debug__LogWarning("No AoTTG external link dialog host is available.",(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinks$$Show
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinks__Show (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* url, const MethodInfo* method);
// 0x4174e40

void Gisketch_Aottg2UI_Game_AottgExternalLinks__Show
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *url,
               MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704afb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&"No AoTTG external link dialog host is available.");
    DAT_05704afb = '\x01';
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__ShowUrl(url,method);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__IsNullOrWhiteSpace(url,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Debug__LogWarning("No AoTTG external link dialog host is available.",(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


