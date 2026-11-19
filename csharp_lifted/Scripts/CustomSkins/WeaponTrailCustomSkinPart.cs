// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.WeaponTrailCustomSkinPart
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/WeaponTrailCustomSkinPart.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/WeaponTrailCustomSkinPart.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/CustomSkins/WeaponTrailCustomSkinPart.c (CustomSkins.WeaponTrailCustomSkinPart$$.ctor): clean


		base(loader, null, rendererId, maxSize, textureScale, true);
		this._weaponTrails = weaponTrails;
		return;
	}

	[Token(Token = "0x600182F")]
	[Address(RVA = "0x5865340", Offset = "0x5864340", VA = "0x5865340", Slot = "4")]
	protected override bool IsValidPart()
	{
		// Lifted from source/cpp/CustomSkins/WeaponTrailCustomSkinPart.c (CustomSkins.WeaponTrailCustomSkinPart$$IsValidPart): clean
		List<MeleeWeaponTrail> __this_00;
		bool bVar1;
		MeleeWeaponTrail x;

		__this_00 = this._weaponTrails;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		if (__this_00._size < 1) {
			return false;
		}
		x = __this_00.get_Item(0);
		bVar1 = ((Object)x != null);
		return bVar1;
	}

	[Token(Token = "0x6001830")]
	[Address(RVA = "0x58653D0", Offset = "0x58643D0", VA = "0x58653D0", Slot = "5")]
	protected override void DisableRenderers()
	{
		// Lifted from source/cpp/CustomSkins/WeaponTrailCustomSkinPart.c (CustomSkins.WeaponTrailCustomSkinPart$$DisableRenderers): clean
		this.SetMaterial(MaterialCache.TransparentMaterial);
		return;
	}

	[Token(Token = "0x6001831")]
	[Address(RVA = "0x5865440", Offset = "0x5864440", VA = "0x5865440", Slot = "6")]
	protected override void SetMaterial(Material material)
	{
		// Lifted from source/cpp/CustomSkins/WeaponTrailCustomSkinPart.c (CustomSkins.WeaponTrailCustomSkinPart$$SetMaterial): 2 lines keep C-only constructs
		List<MeleeWeaponTrail> __this_00;
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_20;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		__this_00 = this._weaponTrails;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_48 = __this_00.GetEnumerator();
		local_20 = (byte)&local_48;
		while(true) {
			bVar1 = local_48.MoveNext();
			if (!bVar1) {
				local_48.Dispose();
				return;
			}
			if ((MeleeWeaponTrail)local_48._current == null) break;
			local_48._current.SetMaterial(material);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001832")]
	[Address(RVA = "0x5865590", Offset = "0x5864590", VA = "0x5865590", Slot = "8")]
	protected override Material SetNewTexture(Texture2D texture)
	{
		// Lifted from source/cpp/CustomSkins/WeaponTrailCustomSkinPart.c (CustomSkins.WeaponTrailCustomSkinPart$$SetNewTexture): clean
		Vector2 UVar1;
		Vector2 UVar2;
		List<MeleeWeaponTrail> __this_00;
		Material source;
		MeleeWeaponTrail pMVar3;
		Material __this_01;
		float fVar4;
		float fVar6;
		Vector2 UVar5;
		Vector2 value;

		__this_00 = this._weaponTrails;
		if (__this_00 != null) {
			pMVar3 = __this_00.get_Item(0);
			if (pMVar3 != null) {
				source = pMVar3._material;
				__this_01 = new Material(source);
				if (__this_01 != null) {
					__this_01.mainTexture = (Texture)texture;
					UVar1 = this._textureScale;
					UVar2 = this._defaultTextureScale;
					fVar4 = UVar1.x - UVar2.x;
					fVar6 = UVar1.y - UVar2.y;
					if (9.9999994e-11 <= fVar6 * fVar6 + fVar4 * fVar4) {
						UVar5 = __this_01.mainTextureScale;
						UVar1 = this._textureScale;
						value.x = UVar5.x * UVar1.x;
						value.y = UVar5.y * UVar1.y;
						__this_01.mainTextureScale = value;
					}
					this.SetMaterial(__this_01);
					return __this_01;
				}
			}
		}
		throw new NullReferenceException();
	}
}
