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

[Token(Token = "0x2000375")]
internal class WeaponTrailCustomSkinPart : BaseCustomSkinPart
{
	[Token(Token = "0x40011F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private List<MeleeWeaponTrail> _weaponTrails;

	[Token(Token = "0x60015CB")]
	[Address(RVA = "0x1E9B270", Offset = "0x1E99870", VA = "0x181E9B270")]
	public WeaponTrailCustomSkinPart(BaseCustomSkinLoader loader, List<MeleeWeaponTrail> weaponTrails, string rendererId, int maxSize, [Optional] Vector2? textureScale)
	{
	}

	[Token(Token = "0x60015CC")]
	[Address(RVA = "0x1E9AF60", Offset = "0x1E99560", VA = "0x181E9AF60", Slot = "4")]
	protected override bool IsValidPart()
	{
		return default(bool);
	}

	[Token(Token = "0x60015CD")]
	[Address(RVA = "0x1E9AEF0", Offset = "0x1E994F0", VA = "0x181E9AEF0", Slot = "5")]
	protected override void DisableRenderers()
	{
	}

	[Token(Token = "0x60015CE")]
	[Address(RVA = "0x1E9B000", Offset = "0x1E99600", VA = "0x181E9B000", Slot = "6")]
	protected override void SetMaterial(Material material)
	{
	}

	[Token(Token = "0x60015CF")]
	[Address(RVA = "0x1E9B130", Offset = "0x1E99730", VA = "0x181E9B130", Slot = "8")]
	protected override Material SetNewTexture(Texture2D texture)
	{
		return null;
	}
}
