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

[Token(Token = "0x2000370")]
internal class HookCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x40011EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private float _tiling;

	[Token(Token = "0x60015BC")]
	[Address(RVA = "0x1E8B090", Offset = "0x1E89690", VA = "0x181E8B090")]
	public HookCustomSkinPart(BaseCustomSkinLoader loader, List<Renderer> renderers, string rendererId, int maxSize, float tiling, [Optional] Vector2? textureScale)
	{
	}

	[Token(Token = "0x60015BD")]
	[Address(RVA = "0x1E8AE40", Offset = "0x1E89440", VA = "0x181E8AE40", Slot = "6")]
	protected override void SetMaterial(Material material)
	{
	}

	[Token(Token = "0x60015BE")]
	[Address(RVA = "0x1E8AF90", Offset = "0x1E89590", VA = "0x181E8AF90", Slot = "8")]
	protected override Material SetNewTexture(Texture2D texture)
	{
		return null;
	}
}
