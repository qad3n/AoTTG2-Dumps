using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x200021F")]
internal class HookCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x4000BE2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private float _tiling;

	[Token(Token = "0x6000CBA")]
	[Address(RVA = "0x4144740", Offset = "0x4144740", VA = "0x4144740")]
	public HookCustomSkinPart(BaseCustomSkinLoader loader, List<Renderer> renderers, string rendererId, int maxSize, float tiling, [Optional] Vector2? textureScale)
	{
	}

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x41478D0", Offset = "0x41478D0", VA = "0x41478D0", Slot = "6")]
	protected override void SetMaterial(Material material)
	{
	}

	[Token(Token = "0x6000CBC")]
	[Address(RVA = "0x4147A90", Offset = "0x4147A90", VA = "0x4147A90", Slot = "7")]
	protected override Material SetNewTexture(Texture2D texture)
	{
		return null;
	}
}
