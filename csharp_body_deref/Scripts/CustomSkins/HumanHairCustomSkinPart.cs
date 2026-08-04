// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.HumanHairCustomSkinPart
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/HumanHairCustomSkinPart.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/HumanHairCustomSkinPart.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x2000257")]
internal class HumanHairCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x4000CBC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string _hairTexture;

	[Token(Token = "0x6000E58")]
	[Address(RVA = "0x3F91850", Offset = "0x3F91850", VA = "0x3F91850")]
	public HumanHairCustomSkinPart(BaseCustomSkinLoader loader, List<Renderer> renderers, string rendererId, int maxSize, string hairTexture, [Optional] Vector2? textureScale)
	{
	}

	[Token(Token = "0x6000E59")]
	[Address(RVA = "0x3F94D60", Offset = "0x3F94D60", VA = "0x3F94D60", Slot = "7")]
	protected override Material SetNewTexture(Texture2D texture)
	{
		return null;
	}
}
