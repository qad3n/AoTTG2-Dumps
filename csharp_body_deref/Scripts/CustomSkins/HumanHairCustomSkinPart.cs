// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.HumanHairCustomSkinPart
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000372")]
internal class HumanHairCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x40011F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string _hairTexture;

	[Token(Token = "0x40011F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly HumanSetup _setup;

	[Token(Token = "0x60015C1")]
	[Address(RVA = "0x1E8B2D0", Offset = "0x1E898D0", VA = "0x181E8B2D0")]
	public HumanHairCustomSkinPart(BaseCustomSkinLoader loader, List<Renderer> renderers, string rendererId, int maxSize, HumanSetup setup, string hairTexture, [Optional] Vector2? textureScale)
	{
	}

	[Token(Token = "0x60015C2")]
	[Address(RVA = "0x1E8B240", Offset = "0x1E89840", VA = "0x181E8B240", Slot = "6")]
	protected override void SetMaterial(Material material)
	{
	}

	[Token(Token = "0x60015C3")]
	[Address(RVA = "0x1E8B180", Offset = "0x1E89780", VA = "0x181E8B180", Slot = "7")]
	protected override Material CreateMaterial()
	{
		return null;
	}
}
