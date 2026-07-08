using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x2000222")]
internal class SkyboxCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x4000BE4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Material _skyboxMaterial;

	[Token(Token = "0x4000BE5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string _textureName;

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x41452C0", Offset = "0x41452C0", VA = "0x41452C0")]
	public SkyboxCustomSkinPart(BaseCustomSkinLoader loader, Material skyboxMaterial, string textureName, string rendererId, int maxSize, [Optional] Vector2? textureScale)
	{
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x4147EF0", Offset = "0x4147EF0", VA = "0x4147EF0", Slot = "4")]
	protected override bool IsValidPart()
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x4147F40", Offset = "0x4147F40", VA = "0x4147F40", Slot = "5")]
	protected override void DisableRenderers()
	{
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x4147F50", Offset = "0x4147F50", VA = "0x4147F50", Slot = "6")]
	protected override void SetMaterial(Material material)
	{
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x4147F90", Offset = "0x4147F90", VA = "0x4147F90", Slot = "7")]
	protected override Material SetNewTexture(Texture2D texture)
	{
		return null;
	}
}
