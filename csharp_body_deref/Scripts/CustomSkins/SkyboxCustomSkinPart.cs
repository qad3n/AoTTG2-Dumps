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

[Token(Token = "0x2000373")]
internal class SkyboxCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x40011F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Material _skyboxMaterial;

	[Token(Token = "0x40011F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string _textureName;

	[Token(Token = "0x60015C4")]
	[Address(RVA = "0x1E94520", Offset = "0x1E92B20", VA = "0x181E94520")]
	public SkyboxCustomSkinPart(BaseCustomSkinLoader loader, Material skyboxMaterial, string textureName, string rendererId, int maxSize, [Optional] Vector2? textureScale)
	{
	}

	[Token(Token = "0x60015C5")]
	[Address(RVA = "0x1E94400", Offset = "0x1E92A00", VA = "0x181E94400", Slot = "4")]
	protected override bool IsValidPart()
	{
		return default(bool);
	}

	[Token(Token = "0x60015C6")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	protected override void DisableRenderers()
	{
	}

	[Token(Token = "0x60015C7")]
	[Address(RVA = "0x1E94450", Offset = "0x1E92A50", VA = "0x181E94450", Slot = "6")]
	protected override void SetMaterial(Material material)
	{
	}

	[Token(Token = "0x60015C8")]
	[Address(RVA = "0x1E944A0", Offset = "0x1E92AA0", VA = "0x181E944A0", Slot = "8")]
	protected override Material SetNewTexture(Texture2D texture)
	{
		return null;
	}
}
