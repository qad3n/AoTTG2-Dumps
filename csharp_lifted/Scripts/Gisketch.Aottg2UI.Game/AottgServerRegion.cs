// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgServerRegion
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgServerRegion.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002DE")]
public readonly struct AottgServerRegion
{
	[Token(Token = "0x4000E78")]
	private const string SpriteRoot = "UI/Sprites/ServerSelect/";

	[Token(Token = "0x4000E79")]
	[FieldOffset(Offset = "0x0")]
	public static readonly AottgServerRegion[] All;

	[Token(Token = "0x4000E7A")]
	[FieldOffset(Offset = "0x0")]
	public readonly string Id;

	[Token(Token = "0x4000E7B")]
	[FieldOffset(Offset = "0x8")]
	public readonly string Label;

	[Token(Token = "0x4000E7C")]
	[FieldOffset(Offset = "0x10")]
	public readonly MultiplayerRegion Region;

	[Token(Token = "0x4000E7D")]
	[FieldOffset(Offset = "0x18")]
	public readonly string MaskSprite;

	[Token(Token = "0x4000E7E")]
	[FieldOffset(Offset = "0x20")]
	public readonly Rect MaskArea;

	[Token(Token = "0x4000E7F")]
	[FieldOffset(Offset = "0x30")]
	public readonly Vector2 LabelPoint;

	[Token(Token = "0x170001F6")]
	public static string MapSprite
	{
		[Token(Token = "0x600115F")]
		[Address(RVA = "0x57D2870", Offset = "0x57D1870", VA = "0x57D2870")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerRegion.c (Gisketch.Aottg2UI.Game.AottgServerRegion$$get_MapSprite): clean
			return "UI/Sprites/ServerSelect/WorldMap";
		}
	}

	[Token(Token = "0x600115E")]
	[Address(RVA = "0x57D27C0", Offset = "0x57D17C0", VA = "0x57D27C0")]
	private AottgServerRegion(string id, string label, MultiplayerRegion region, string mask, Rect maskArea, Vector2 labelPoint)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerRegion.c (Gisketch.Aottg2UI.Game.AottgServerRegion$$.ctor): clean
		String pSVar1;
		float fStack_58;
		float fStack_54;

		this.Id = id;
		this.Label = label;
		this.Region = region;
		pSVar1 = String.Concat("UI/Sprites/ServerSelect/", mask);
		this.MaskSprite = pSVar1;
		fStack_58 = maskArea.m_XMin;
		fStack_54 = maskArea.m_YMin;
		this.MaskArea.m_XMin = fStack_58;
		this.MaskArea.m_YMin = fStack_54;
		this.MaskArea.m_Width = maskArea.m_Width;
		this.MaskArea.m_Height = maskArea.m_Height;
		this.LabelPoint = labelPoint;
		return;
	}

	[Token(Token = "0x6001160")]
	[Address(RVA = "0x57D28A0", Offset = "0x57D18A0", VA = "0x57D28A0")]
	private static Rect Area(float centerX, float centerY, float width, float height)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerRegion.c (Gisketch.Aottg2UI.Game.AottgServerRegion$$Area): clean
		Rect UVar1;

		UVar1.m_XMin = centerX + width * -0.5;
		UVar1.m_YMin = centerY + height * -0.5;
		UVar1.m_Height = height;
		UVar1.m_Width = width;
		return (Rect)UVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerRegion.c.

	// Gisketch.Aottg2UI.Game.AottgServerRegion$$.cctor: 9 lines keep C-only constructs
	static AottgServerRegion()
	{
		String pSVar1;
		String pSVar2;
		AottgServerRegion[] pGVar3;
		String local_140;
		String pSStack_138;
		ulong uStack_130;
		String pSStack_128;
		String local_108;
		String pSStack_100;
		ulong uStack_f8;
		String pSStack_f0;
		String local_d0;
		String pSStack_c8;
		ulong uStack_c0;
		String pSStack_b8;
		String local_98;
		String pSStack_90;
		ulong uStack_88;
		String pSStack_80;
		String local_60;
		String pSStack_58;
		ulong uStack_50;
		String pSStack_48;

		pGVar3 = (AottgServerRegion[])new AottgServerRegion[5];
		local_60 = "us";
		pSVar2 = "US";
		pSVar1 = "RegionNorthAmerica";
		pSStack_48 = null;
		pSStack_58 = null;
		uStack_50 = 0;
		pSStack_58 = pSVar2;
		uStack_50 = CONCAT44(uStack_50._4_4_, 1);
		pSStack_48 = String.Concat("UI/Sprites/ServerSelect/", pSVar1);
		if (pGVar3 == null) {
			throw new NullReferenceException();
		}
		if ((int)pGVar3.Length != 0) {
			pGVar3[0].LabelPoint = (Vector2)0x3f27ae143e54fdf4;
			pGVar3[0].MaskArea.m_XMin = -0.0025999993;
			pGVar3[0].MaskArea.m_YMin = 0.41075003;
			pGVar3[0].MaskArea.m_Width = 0.4474;
			pGVar3[0].MaskArea.m_Height = 0.5869;
			*(ulong)&pGVar3[0].Region = uStack_50;
			pGVar3[0].MaskSprite = pSStack_48;
			pGVar3[0].Id = local_60;
			pGVar3[0].Label = pSStack_58;
			local_98 = "sa";
			pSVar2 = "SA";
			pSVar1 = "RegionSouthAmerica";
			pSStack_80 = null;
			pSStack_90 = null;
			uStack_88 = 0;
			pSStack_90 = pSVar2;
			uStack_88 = CONCAT44(uStack_88._4_4_, 2);
			pSStack_80 = String.Concat("UI/Sprites/ServerSelect/", pSVar1);
			if ((pGVar3.Length & 0xfffffffe) != 0) {
				pGVar3[1].LabelPoint = (Vector2)0x3e9eb8523ea04189;
				pGVar3[1].MaskArea.m_XMin = 0.24814999;
				pGVar3[1].MaskArea.m_YMin = -0.010299996;
				pGVar3[1].MaskArea.m_Width = 0.1289;
				pGVar3[1].MaskArea.m_Height = 0.5006;
				*(ulong)&pGVar3[1].Region = uStack_88;
				pGVar3[1].MaskSprite = pSStack_80;
				pGVar3[1].Id = local_98;
				pGVar3[1].Label = pSStack_90;
				local_d0 = "eu";
				pSVar2 = "RegionEurope";
				pSVar1 = "EU";
				pSStack_b8 = null;
				pSStack_c8 = null;
				uStack_c0 = 0;
				pSStack_c8 = pSVar1;
				uStack_c0 = uStack_c0 & 0xffffffff00000000;
				pSStack_b8 = String.Concat("UI/Sprites/ServerSelect/", pSVar2);
				if (2 < (uint)pGVar3.Length) {
					pGVar3[2].LabelPoint = (Vector2)0x3f347ae13f020c4a;
					pGVar3[2].MaskArea.m_XMin = 0.41375;
					pGVar3[2].MaskArea.m_YMin = 0.5707;
					pGVar3[2].MaskArea.m_Width = 0.2607;
					pGVar3[2].MaskArea.m_Height = 0.429;
					*(ulong)&pGVar3[2].Region = uStack_c0;
					pGVar3[2].MaskSprite = pSStack_b8;
					pGVar3[2].Id = local_d0;
					pGVar3[2].Label = pSStack_c8;
					local_108 = "asia";
					pSVar2 = "RegionAsia";
					pSVar1 = "ASIA";
					pSStack_f0 = null;
					pSStack_100 = null;
					uStack_f8 = 0;
					pSStack_100 = pSVar1;
					uStack_f8 = CONCAT44(uStack_f8._4_4_, 3);
					pSStack_f0 = String.Concat("UI/Sprites/ServerSelect/", pSVar2);
					if ((pGVar3.Length & 0xfffffffc) != 0) {
						pGVar3[3].LabelPoint = (Vector2)0x3edc28f63f48f5c3;
						pGVar3[3].MaskArea.m_XMin = 0.64115;
						pGVar3[3].MaskArea.m_YMin = 0.05825001;
						pGVar3[3].MaskArea.m_Width = 0.3281;
						pGVar3[3].MaskArea.m_Height = 0.5541;
						*(ulong)&pGVar3[3].Region = uStack_f8;
						pGVar3[3].MaskSprite = pSStack_f0;
						pGVar3[3].Id = local_108;
						pGVar3[3].Label = pSStack_100;
						local_140 = "cn";
						pSVar2 = "RegionChina";
						pSVar1 = "CN";
						pSStack_128 = null;
						pSStack_138 = null;
						uStack_130 = 0;
						pSStack_138 = pSVar1;
						uStack_130 = CONCAT44(uStack_130._4_4_, 4);
						pSStack_128 = String.Concat("UI/Sprites/ServerSelect/", pSVar2);
						if (4 < (uint)pGVar3.Length) {
							pGVar3[4].LabelPoint = (Vector2)0x3f1ae1483f428f5c;
							pGVar3[4].MaskArea.m_XMin = 0.67434996;
							pGVar3[4].MaskArea.m_YMin = 0.4755;
							pGVar3[4].MaskArea.m_Width = 0.1719;
							pGVar3[4].MaskArea.m_Height = 0.2804;
							*(ulong)&pGVar3[4].Region = uStack_130;
							pGVar3[4].MaskSprite = pSStack_128;
							pGVar3[4].Id = local_140;
							pGVar3[4].Label = pSStack_138;
							AottgServerRegion.All = pGVar3;
							return;
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}
}
