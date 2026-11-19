// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.HumanHairCustomSkinPart
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/HumanHairCustomSkinPart.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/HumanHairCustomSkinPart.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
	}

	[Token(Token = "0x6001824")]
	[Address(RVA = "0x5864FC0", Offset = "0x5863FC0", VA = "0x5864FC0", Slot = "6")]
	protected override void SetMaterial(Material material)
	{
	}

	[Token(Token = "0x6001825")]
	[Address(RVA = "0x5865050", Offset = "0x5864050", VA = "0x5865050", Slot = "7")]
	protected override Material CreateMaterial()
	{
		return null;
	}
}
