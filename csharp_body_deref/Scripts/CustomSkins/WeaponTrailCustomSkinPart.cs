// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.WeaponTrailCustomSkinPart
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/WeaponTrailCustomSkinPart.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/WeaponTrailCustomSkinPart.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x2000259")]
internal class WeaponTrailCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x4000CBF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private List<MeleeWeaponTrail> _weaponTrails;

	[Token(Token = "0x6000E5F")]
	[Address(RVA = "0x3F918B0", Offset = "0x3F918B0", VA = "0x3F918B0")]
	public WeaponTrailCustomSkinPart(BaseCustomSkinLoader loader, List<MeleeWeaponTrail> weaponTrails, string rendererId, int maxSize, [Optional] Vector2? textureScale)
	{
	}

	[Token(Token = "0x6000E60")]
	[Address(RVA = "0x3F950C0", Offset = "0x3F950C0", VA = "0x3F950C0", Slot = "4")]
	protected override bool IsValidPart()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E61")]
	[Address(RVA = "0x3F95150", Offset = "0x3F95150", VA = "0x3F95150", Slot = "5")]
	protected override void DisableRenderers()
	{
	}

	[Token(Token = "0x6000E62")]
	[Address(RVA = "0x3F951C0", Offset = "0x3F951C0", VA = "0x3F951C0", Slot = "6")]
	protected override void SetMaterial(Material material)
	{
	}

	[Token(Token = "0x6000E63")]
	[Address(RVA = "0x3F95320", Offset = "0x3F95320", VA = "0x3F95320", Slot = "7")]
	protected override Material SetNewTexture(Texture2D texture)
	{
		return null;
	}
}
