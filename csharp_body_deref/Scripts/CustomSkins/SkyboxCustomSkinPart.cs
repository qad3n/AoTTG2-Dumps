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

[Token(Token = "0x20003CE")]
internal class SkyboxCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x400137E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Material _skyboxMaterial;

	[Token(Token = "0x400137F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string _textureName;

	[Token(Token = "0x6001826")]
	[Address(RVA = "0x58620B0", Offset = "0x58610B0", VA = "0x58620B0")]
	public SkyboxCustomSkinPart(BaseCustomSkinLoader loader, Material skyboxMaterial, string textureName, string rendererId, int maxSize, [Optional] Vector2? textureScale)
	{
	}

	[Token(Token = "0x6001827")]
	[Address(RVA = "0x5865110", Offset = "0x5864110", VA = "0x5865110", Slot = "4")]
	protected override bool IsValidPart()
	{
		return default(bool);
	}

	[Token(Token = "0x6001828")]
	[Address(RVA = "0x5865160", Offset = "0x5864160", VA = "0x5865160", Slot = "5")]
	protected override void DisableRenderers()
	{
	}

	[Token(Token = "0x6001829")]
	[Address(RVA = "0x5865170", Offset = "0x5864170", VA = "0x5865170", Slot = "6")]
	protected override void SetMaterial(Material material)
	{
	}

	[Token(Token = "0x600182A")]
	[Address(RVA = "0x58651B0", Offset = "0x58641B0", VA = "0x58651B0", Slot = "8")]
	protected override Material SetNewTexture(Texture2D texture)
	{
		return null;
	}
}
