using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x2000223")]
internal class WeaponTrailCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x4000BE6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private List<MeleeWeaponTrail> _weaponTrails;

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x4144700", Offset = "0x4144700", VA = "0x4144700")]
	public WeaponTrailCustomSkinPart(BaseCustomSkinLoader loader, List<MeleeWeaponTrail> weaponTrails, string rendererId, int maxSize, [Optional] Vector2? textureScale)
	{
	}

	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x4148060", Offset = "0x4148060", VA = "0x4148060", Slot = "4")]
	protected override bool IsValidPart()
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC8")]
	[Address(RVA = "0x41480F0", Offset = "0x41480F0", VA = "0x41480F0", Slot = "5")]
	protected override void DisableRenderers()
	{
	}

	[Token(Token = "0x6000CC9")]
	[Address(RVA = "0x4148160", Offset = "0x4148160", VA = "0x4148160", Slot = "6")]
	protected override void SetMaterial(Material material)
	{
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x41482C0", Offset = "0x41482C0", VA = "0x41482C0", Slot = "7")]
	protected override Material SetNewTexture(Texture2D texture)
	{
		return null;
	}
}
