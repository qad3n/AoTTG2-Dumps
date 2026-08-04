// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.HookCustomSkinPart
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/HookCustomSkinPart.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/HookCustomSkinPart.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x2000255")]
internal class HookCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x4000CBB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private float _tiling;

	[Token(Token = "0x6000E53")]
	[Address(RVA = "0x3F918F0", Offset = "0x3F918F0", VA = "0x3F918F0")]
	public HookCustomSkinPart(BaseCustomSkinLoader loader, List<Renderer> renderers, string rendererId, int maxSize, float tiling, [Optional] Vector2? textureScale)
	{
	}

	[Token(Token = "0x6000E54")]
	[Address(RVA = "0x3F94930", Offset = "0x3F94930", VA = "0x3F94930", Slot = "6")]
	protected override void SetMaterial(Material material)
	{
	}

	[Token(Token = "0x6000E55")]
	[Address(RVA = "0x3F94AF0", Offset = "0x3F94AF0", VA = "0x3F94AF0", Slot = "7")]
	protected override Material SetNewTexture(Texture2D texture)
	{
		return null;
	}
}
