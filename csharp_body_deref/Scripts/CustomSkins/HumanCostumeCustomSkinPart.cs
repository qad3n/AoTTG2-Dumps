// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.HumanCostumeCustomSkinPart
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/HumanCostumeCustomSkinPart.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/HumanCostumeCustomSkinPart.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x2000256")]
internal class HumanCostumeCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x6000E56")]
	[Address(RVA = "0x3F91890", Offset = "0x3F91890", VA = "0x3F91890")]
	public HumanCostumeCustomSkinPart(BaseCustomSkinLoader loader, List<Renderer> renderers, string rendererId, int maxSize, [Optional] Vector2? textureScale)
	{
	}

	[Token(Token = "0x6000E57")]
	[Address(RVA = "0x3F94BA0", Offset = "0x3F94BA0", VA = "0x3F94BA0", Slot = "7")]
	protected override Material SetNewTexture(Texture2D texture)
	{
		return null;
	}
}
