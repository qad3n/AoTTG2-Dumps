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

[Token(Token = "0x20003D0")]
internal class WeaponTrailCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x4001381")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private List<MeleeWeaponTrail> _weaponTrails;

	[Token(Token = "0x600182E")]
	[Address(RVA = "0x5861540", Offset = "0x5860540", VA = "0x5861540")]
	public WeaponTrailCustomSkinPart(BaseCustomSkinLoader loader, List<MeleeWeaponTrail> weaponTrails, string rendererId, int maxSize, [Optional] Vector2? textureScale)
	{
	}

	[Token(Token = "0x600182F")]
	[Address(RVA = "0x5865340", Offset = "0x5864340", VA = "0x5865340", Slot = "4")]
	protected override bool IsValidPart()
	{
		return default(bool);
	}

	[Token(Token = "0x6001830")]
	[Address(RVA = "0x58653D0", Offset = "0x58643D0", VA = "0x58653D0", Slot = "5")]
	protected override void DisableRenderers()
	{
	}

	[Token(Token = "0x6001831")]
	[Address(RVA = "0x5865440", Offset = "0x5864440", VA = "0x5865440", Slot = "6")]
	protected override void SetMaterial(Material material)
	{
	}

	[Token(Token = "0x6001832")]
	[Address(RVA = "0x5865590", Offset = "0x5864590", VA = "0x5865590", Slot = "8")]
	protected override Material SetNewTexture(Texture2D texture)
	{
		return null;
	}
}
