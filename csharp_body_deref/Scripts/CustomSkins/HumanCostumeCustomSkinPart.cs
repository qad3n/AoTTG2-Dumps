// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.HumanCostumeCustomSkinPart
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomSkins/HumanCostumeCustomSkinPart.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/HumanCostumeCustomSkinPart.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x2000371")]
internal class HumanCostumeCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x60015BF")]
	[Address(RVA = "0x1E8B130", Offset = "0x1E89730", VA = "0x181E8B130")]
	public HumanCostumeCustomSkinPart(BaseCustomSkinLoader loader, List<Renderer> renderers, string rendererId, int maxSize, [Optional] Vector2? textureScale)
	{
	}

	[Token(Token = "0x60015C0")]
	[Address(RVA = "0x1E8B0F0", Offset = "0x1E896F0", VA = "0x181E8B0F0", Slot = "7")]
	protected override Material CreateMaterial()
	{
		return null;
	}
}
