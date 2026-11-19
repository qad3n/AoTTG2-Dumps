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

[Token(Token = "0x20003CB")]
internal class HookCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x400137B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private float _tiling;

	[Token(Token = "0x600181E")]
	[Address(RVA = "0x5861580", Offset = "0x5860580", VA = "0x5861580")]
	public HookCustomSkinPart(BaseCustomSkinLoader loader, List<Renderer> renderers, string rendererId, int maxSize, float tiling, [Optional] Vector2? textureScale)
	{
	}

	[Token(Token = "0x600181F")]
	[Address(RVA = "0x5864CE0", Offset = "0x5863CE0", VA = "0x5864CE0", Slot = "6")]
	protected override void SetMaterial(Material material)
	{
	}

	[Token(Token = "0x6001820")]
	[Address(RVA = "0x5864E70", Offset = "0x5863E70", VA = "0x5864E70", Slot = "8")]
	protected override Material SetNewTexture(Texture2D texture)
	{
		return null;
	}
}
