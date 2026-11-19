// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.TitanCustomSkinPart
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomSkins/TitanCustomSkinPart.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x20003CF")]
internal class TitanCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x4001380")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly Transform _rendererRoot;

	[Token(Token = "0x600182B")]
	[Address(RVA = "0x5862E50", Offset = "0x5861E50", VA = "0x5862E50")]
	public TitanCustomSkinPart(BaseCustomSkinLoader loader, List<Renderer> renderers, string rendererId, int maxSize, [Optional] Transform rendererRoot)
	{
	}

	[Token(Token = "0x600182C")]
	[Address(RVA = "0x5865220", Offset = "0x5864220", VA = "0x5865220", Slot = "4")]
	protected override bool IsValidPart()
	{
		return default(bool);
	}

	[Token(Token = "0x600182D")]
	[Address(RVA = "0x58652B0", Offset = "0x58642B0", VA = "0x58652B0", Slot = "8")]
	protected override Material SetNewTexture(Texture2D texture)
	{
		return null;
	}
}
