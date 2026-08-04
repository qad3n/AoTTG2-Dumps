// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.SkyboxCustomSkinPart
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/SkyboxCustomSkinPart.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/SkyboxCustomSkinPart.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x2000258")]
internal class SkyboxCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x4000CBD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Material _skyboxMaterial;

	[Token(Token = "0x4000CBE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string _textureName;

	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x3F92450", Offset = "0x3F92450", VA = "0x3F92450")]
	public SkyboxCustomSkinPart(BaseCustomSkinLoader loader, Material skyboxMaterial, string textureName, string rendererId, int maxSize, [Optional] Vector2? textureScale)
	{
	}

	[Token(Token = "0x6000E5B")]
	[Address(RVA = "0x3F94F50", Offset = "0x3F94F50", VA = "0x3F94F50", Slot = "4")]
	protected override bool IsValidPart()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E5C")]
	[Address(RVA = "0x3F94FA0", Offset = "0x3F94FA0", VA = "0x3F94FA0", Slot = "5")]
	protected override void DisableRenderers()
	{
	}

	[Token(Token = "0x6000E5D")]
	[Address(RVA = "0x3F94FB0", Offset = "0x3F94FB0", VA = "0x3F94FB0", Slot = "6")]
	protected override void SetMaterial(Material material)
	{
	}

	[Token(Token = "0x6000E5E")]
	[Address(RVA = "0x3F94FF0", Offset = "0x3F94FF0", VA = "0x3F94FF0", Slot = "7")]
	protected override Material SetNewTexture(Texture2D texture)
	{
		return null;
	}
}
