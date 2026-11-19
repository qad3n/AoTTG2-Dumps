// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.SkyboxCustomSkinPart
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/SkyboxCustomSkinPart.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/SkyboxCustomSkinPart.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/CustomSkins/SkyboxCustomSkinPart.c (CustomSkins.SkyboxCustomSkinPart$$.ctor): clean


		base(loader, null, rendererId, maxSize, textureScale, false);
		this._skyboxMaterial = skyboxMaterial;
		this._textureName = textureName;
		return;
	}

	[Token(Token = "0x6001827")]
	[Address(RVA = "0x5865110", Offset = "0x5864110", VA = "0x5865110", Slot = "4")]
	protected override bool IsValidPart()
	{
		// Lifted from source/cpp/CustomSkins/SkyboxCustomSkinPart.c (CustomSkins.SkyboxCustomSkinPart$$IsValidPart): clean
		Material x;
		bool bVar1;

		x = this._skyboxMaterial;
		bVar1 = ((Object)x != null);
		return bVar1;
	}

	[Token(Token = "0x6001828")]
	[Address(RVA = "0x5865160", Offset = "0x5864160", VA = "0x5865160", Slot = "5")]
	protected override void DisableRenderers()
	{
		// Lifted from source/cpp/CustomSkins/SkyboxCustomSkinPart.c (CustomSkins.SkyboxCustomSkinPart$$DisableRenderers): clean
		return;
	}

	[Token(Token = "0x6001829")]
	[Address(RVA = "0x5865170", Offset = "0x5864170", VA = "0x5865170", Slot = "6")]
	protected override void SetMaterial(Material material)
	{
		// Lifted from source/cpp/CustomSkins/SkyboxCustomSkinPart.c (CustomSkins.SkyboxCustomSkinPart$$SetMaterial): clean
		Material __this_00;
		String name;
		Texture value;

		if (material != null) {
			__this_00 = this._skyboxMaterial;
			name = this._textureName;
			value = material.GetTexture(name);
			if (__this_00 != null) {
				__this_00.SetTexture(name, value);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600182A")]
	[Address(RVA = "0x58651B0", Offset = "0x58641B0", VA = "0x58651B0", Slot = "8")]
	protected override Material SetNewTexture(Texture2D texture)
	{
		// Lifted from source/cpp/CustomSkins/SkyboxCustomSkinPart.c (CustomSkins.SkyboxCustomSkinPart$$SetNewTexture): clean
		Material __this_00;

		if (texture != null) {
			texture.wrapMode = 1;
			__this_00 = SkyboxCustomSkinLoader.CreateSkyboxMaterial();
			if (__this_00 != null) {
				__this_00.SetTexture(this._textureName, (Texture)texture);
				this.SetMaterial(__this_00);
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}
}
