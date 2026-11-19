// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.HumanHairCustomSkinPart
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/HumanHairCustomSkinPart.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/HumanHairCustomSkinPart.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x20003CD")]
internal class HumanHairCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x400137C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string _hairTexture;

	[Token(Token = "0x400137D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly HumanSetup _setup;

	[Token(Token = "0x6001823")]
	[Address(RVA = "0x58614C0", Offset = "0x58604C0", VA = "0x58614C0")]
	public HumanHairCustomSkinPart(BaseCustomSkinLoader loader, List<Renderer> renderers, string rendererId, int maxSize, HumanSetup setup, string hairTexture, [Optional] Vector2? textureScale)
	{
		// Lifted from source/cpp/CustomSkins/HumanHairCustomSkinPart.c (CustomSkins.HumanHairCustomSkinPart$$.ctor): clean


		base(loader, renderers, rendererId, maxSize, textureScale, true);
		this._hairTexture = hairTexture;
		this._setup = setup;
		return;
	}

	[Token(Token = "0x6001824")]
	[Address(RVA = "0x5864FC0", Offset = "0x5863FC0", VA = "0x5864FC0", Slot = "6")]
	protected override void SetMaterial(Material material)
	{
		// Lifted from source/cpp/CustomSkins/HumanHairCustomSkinPart.c (CustomSkins.HumanHairCustomSkinPart$$SetMaterial): clean
		HumanSetup pCVar1;
		bool bVar2;

		this.SetMaterial(material);
		pCVar1 = this._setup;
		bVar2 = ((Object)pCVar1 != null);
		if (bVar2) {
			pCVar1 = this._setup;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			pCVar1.RefreshHairMaterials();
			return;
		}
		return;
	}

	[Token(Token = "0x6001825")]
	[Address(RVA = "0x5865050", Offset = "0x5864050", VA = "0x5865050", Slot = "7")]
	protected override Material CreateMaterial()
	{
		// Lifted from source/cpp/CustomSkins/HumanHairCustomSkinPart.c (CustomSkins.HumanHairCustomSkinPart$$CreateMaterial): clean
		String texture;
		bool bVar1;
		Material pUVar2;
		Material __this_00;
		MethodInfo method_00;

		method_00 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
		bVar1 = (this._hairTexture == (String)method_00);
		if (bVar1) {
			pUVar2 = this.CreateMaterial();
			return pUVar2;
		}
		texture = this._hairTexture;
		pUVar2 = HumanSetupMaterials.GetHairMaterial(texture);
		__this_00 = new Material(pUVar2);
		return __this_00;
	}
}
