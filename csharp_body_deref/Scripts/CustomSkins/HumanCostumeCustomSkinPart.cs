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

[Token(Token = "0x20003CC")]
internal class HumanCostumeCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x6001821")]
	[Address(RVA = "0x5861520", Offset = "0x5860520", VA = "0x5861520")]
	public HumanCostumeCustomSkinPart(BaseCustomSkinLoader loader, List<Renderer> renderers, string rendererId, int maxSize, [Optional] Vector2? textureScale)
	{
	}

	[Token(Token = "0x6001822")]
	[Address(RVA = "0x5864F60", Offset = "0x5863F60", VA = "0x5864F60", Slot = "7")]
	protected override Material CreateMaterial()
	{
		return null;
	}
}
