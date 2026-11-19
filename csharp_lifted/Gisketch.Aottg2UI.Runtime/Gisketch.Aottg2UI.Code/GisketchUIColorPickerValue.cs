// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerValue.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x20000A1")]
public readonly struct GisketchUIColorPickerValue
{
	[Token(Token = "0x400036F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public readonly byte R;

	[Token(Token = "0x4000370")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
	public readonly byte G;

	[Token(Token = "0x4000371")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
	public readonly byte B;

	[Token(Token = "0x4000372")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3")]
	public readonly byte A;

	[Token(Token = "0x4000373")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public readonly float H;

	[Token(Token = "0x4000374")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly float S;

	[Token(Token = "0x4000375")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public readonly float V;

	[Token(Token = "0x17000093")]
	public Color32 Color32
	{
		[Token(Token = "0x60004F6")]
		[Address(RVA = "0x5278520", Offset = "0x5277520", VA = "0x5278520")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerValue.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$get_Color32): 1 lines keep C-only constructs
			return (Color32)(Color32)(*(_union_53531)&this.fields)._at_rgba;
		}
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x5277040", Offset = "0x5276040", VA = "0x5277040")]
	public GisketchUIColorPickerValue(byte r, byte g, byte b, byte a)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerValue.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$.ctor): 52 lines keep C-only constructs
		byte[] auVar1 = new byte[13];
		byte[] auVar2 = new byte[13];
		byte[] auVar3 = new byte[13];
		byte[] auVar4 = new byte[13];
		byte[] auVar5 = new byte[13];
		uint7 uVar6;
		ulong uVar7;
		byte[] auVar8 = new byte[13];
		byte[] auVar9 = new byte[13];
		uint5 uVar10;
		undefined7 in_register_00000009;
		uint uVar11;
		undefined7 in_register_00000011;
		undefined7 in_register_00000031;
		undefined7 in_register_00000081;
		byte uVar13;
		byte[] auVar12 = new byte[16];
		byte[] auVar14 = new byte[16];
		int iVar15;
		Color rgbColor;

		this.R = r;
		this.G = g;
		this.B = b;
		this.A = a;
		uVar11 = (int)CONCAT71(in_register_00000011, g) << 8 | (uint)CONCAT71(in_register_00000031, r);
		uVar13 = (undefined1)(uVar11 >> 8);
		uVar7 = (ulong)CONCAT12(uVar13, (short)uVar11) & 0xffffffffffff00ff;
		auVar3._8_4_ = 0;
		auVar3._0_8_ = uVar7;
		auVar3[0xc] = (char)(uVar11 >> 0x18);
		auVar4[8] = (char)(uVar11 >> 0x10);
		auVar4._0_8_ = uVar7;
		auVar4[9] = 0;
		auVar4._10_3_ = auVar3._10_3_;
		auVar8._5_8_ = 0;
		auVar8._0_5_ = auVar4._8_5_;
		auVar5[4] = uVar13;
		auVar5._0_4_ = (uint)uVar7;
		auVar5[5] = 0;
		auVar5._6_7_ = SUB137(auVar8 << 0x40, 6);
		auVar12._0_4_ = (float)((uint)uVar7 & 0xffff);
		auVar12._4_4_ = (float)auVar5._4_4_;
		auVar12._8_4_ = (float)auVar4._8_4_;
		auVar12._12_4_ = (float)(uint3)(auVar3._10_3_ >> 0x10);
		auVar12 = divps(auVar12, _DAT_01009880);
		uVar11 = (int)CONCAT71(in_register_00000081, a) << 8 | (uint)CONCAT71(in_register_00000009, b);
		uVar6 = (uint7)(ushort)uVar11 & 0xffffffffff00ff;
		auVar1._7_5_ = 0;
		auVar1._0_7_ = uVar6;
		auVar1[0xc] = (char)(uVar11 >> 0x18);
		uVar10 = CONCAT32(auVar1._10_3_, (ushort)(byte)(uVar11 >> 0x10));
		auVar9._5_8_ = 0;
		auVar9._0_5_ = uVar10;
		iVar15 = (int)uVar6;
		auVar2[4] = (char)(uVar11 >> 8);
		auVar2._0_4_ = iVar15;
		auVar2[5] = 0;
		auVar2._6_7_ = SUB137(auVar9 << 0x40, 6);
		auVar14._0_4_ = (float)iVar15;
		auVar14._4_4_ = (float)auVar2._4_4_;
		auVar14._8_4_ = (float)(int)uVar10;
		auVar14._12_4_ = (float)(uint3)(auVar1._10_3_ >> 0x10);
		auVar14 = divps(auVar14, _DAT_01009880);
		rgbColor._0_8_ = auVar12._0_8_;
		rgbColor._8_8_ = auVar14._0_8_;
		Color.RGBToHSV(rgbColor, ref this.H, ref this.S, ref this.V);
		return;
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x5278680", Offset = "0x5277680", VA = "0x5278680")]
	private GisketchUIColorPickerValue(byte r, byte g, byte b, byte a, float h, float s, float v)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerValue.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$.ctor): 10 lines keep C-only constructs
		float fVar1;
		uint in_XMM0_Db;
		uint in_XMM1_Db;
		byte[] auVar2 = new byte[16];

		this.R = r;
		this.G = g;
		this.B = b;
		this.A = a;
		fVar1 = floorf(h);
		auVar2._4_4_ = s;
		auVar2._0_4_ = h - fVar1;
		auVar2._8_4_ = in_XMM0_Db;
		auVar2._12_4_ = in_XMM1_Db;
		auVar2 = minps(_DAT_01005870, auVar2);
		this.H = (float)(-(uint)(0.0 <= h - fVar1) & auVar2._0_4_);
		this.S = (float)(-(uint)(0.0 <= s) & auVar2._4_4_);
		fVar1 = 1.0;
		if (v <= 1.0) {
			fVar1 = v;
		}
		this.V = (float)(-(uint)(0.0 <= v) & (uint)fVar1);
		return;
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x5273530", Offset = "0x5272530", VA = "0x5273530")]
	public string ToHex(bool alpha)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerValue.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$ToHex): 37 lines keep C-only constructs
		ushort uVar1;
		uint uVar2;
		byte[] auVar3 = new byte[13];
		byte[] auVar4 = new byte[13];
		byte[] auVar5 = new byte[13];
		ulong uVar6;
		uint3 uVar7;
		byte[] auVar8 = new byte[13];
		String pSVar9;
		byte[] auVar10 = new byte[16];
		byte[] auVar11 = new byte[16];
		Color UStack_20;

		uVar2._0_1_ = this.R;
		uVar2._1_1_ = this.G;
		uVar2._2_1_ = this.B;
		uVar2._3_1_ = this.A;
		uVar7 = CONCAT12(uVar2._1_1_, (short)uVar2);
		uVar6 = (ulong)uVar7 & 0xffffffffffff00ff;
		auVar3._8_4_ = 0;
		auVar3._0_8_ = uVar6;
		auVar3[0xc] = uVar2._3_1_;
		auVar4[8] = uVar2._2_1_;
		auVar4._0_8_ = uVar6;
		auVar4[9] = 0;
		auVar4._10_3_ = auVar3._10_3_;
		auVar8._5_8_ = 0;
		auVar8._0_5_ = auVar4._8_5_;
		auVar5[4] = uVar2._1_1_;
		auVar5._0_4_ = (uint)uVar6;
		auVar5[5] = 0;
		auVar5._6_7_ = SUB137(auVar8 << 0x40, 6);
		auVar10._0_4_ = (float)((uint)uVar6 & 0xffff);
		auVar10._4_4_ = (float)auVar5._4_4_;
		auVar10._8_4_ = (float)auVar4._8_4_;
		auVar10._12_4_ = (float)(uint3)(auVar3._10_3_ >> 0x10);
		auVar10 = divps(auVar10, _DAT_01009880);
		uVar1._0_1_ = this.B;
		uVar1._1_1_ = this.A;
		auVar11._0_4_ = (float)(uVar1 & 0xff);
		auVar11._4_4_ = (float)(byte)uVar1._1_1_;
		auVar11._8_8_ = 0;
		auVar11 = divps(auVar11, _DAT_01009880);
		UStack_20._0_8_ = auVar10._0_8_;
		UStack_20._8_8_ = auVar11._0_8_;
		if (alpha) {
			pSVar9 = ColorUtility.ToHtmlStringRGBA(ref UStack_20);
		}
		else {
			pSVar9 = ColorUtility.ToHtmlStringRGB(ref UStack_20);
		}
		pSVar9 = String.Concat("#", pSVar9);
		return pSVar9;
	}

	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x5277EB0", Offset = "0x5276EB0", VA = "0x5277EB0")]
	public GisketchUIColorPickerValue WithRgb(byte r, byte g, byte b)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerValue.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$WithRgb): 52 lines keep C-only constructs
		byte[] auVar1 = new byte[13];
		byte[] auVar2 = new byte[13];
		byte[] auVar3 = new byte[13];
		byte[] auVar4 = new byte[13];
		byte[] auVar5 = new byte[13];
		uint7 uVar6;
		ulong uVar7;
		byte[] auVar8 = new byte[13];
		byte[] auVar9 = new byte[13];
		uint5 uVar10;
		undefined7 in_register_00000009;
		uint uVar11;
		undefined7 in_register_00000011;
		undefined7 in_register_00000031;
		byte uVar13;
		byte[] auVar12 = new byte[16];
		byte[] auVar14 = new byte[16];
		int iVar15;
		Color rgbColor;
		GisketchUIColorPickerValue GStack_18;

		GStack_18.A = this.A;
		GStack_18.G = g;
		GStack_18.R = r;
		GStack_18.B = b;
		GStack_18._4_12_ = SUB1612((byte[])0x0, 4);
		uVar11 = (int)CONCAT71(in_register_00000011, g) << 8 | (uint)CONCAT71(in_register_00000031, r);
		uVar13 = (undefined1)(uVar11 >> 8);
		uVar7 = (ulong)CONCAT12(uVar13, (short)uVar11) & 0xffffffffffff00ff;
		auVar3._8_4_ = 0;
		auVar3._0_8_ = uVar7;
		auVar3[0xc] = (char)(uVar11 >> 0x18);
		auVar4[8] = (char)(uVar11 >> 0x10);
		auVar4._0_8_ = uVar7;
		auVar4[9] = 0;
		auVar4._10_3_ = auVar3._10_3_;
		auVar8._5_8_ = 0;
		auVar8._0_5_ = auVar4._8_5_;
		auVar5[4] = uVar13;
		auVar5._0_4_ = (uint)uVar7;
		auVar5[5] = 0;
		auVar5._6_7_ = SUB137(auVar8 << 0x40, 6);
		auVar12._0_4_ = (float)((uint)uVar7 & 0xffff);
		auVar12._4_4_ = (float)auVar5._4_4_;
		auVar12._8_4_ = (float)auVar4._8_4_;
		auVar12._12_4_ = (float)(uint3)(auVar3._10_3_ >> 0x10);
		auVar12 = divps(auVar12, _DAT_01009880);
		uVar11 = (uint)GStack_18.A << 8 | (uint)CONCAT71(in_register_00000009, b);
		uVar6 = (uint7)(ushort)uVar11 & 0xffffffffff00ff;
		auVar1._7_5_ = 0;
		auVar1._0_7_ = uVar6;
		auVar1[0xc] = (char)((uint7)in_register_00000009 >> 0x10);
		uVar10 = CONCAT32(auVar1._10_3_, (ushort)(byte)((uint7)in_register_00000009 >> 8));
		auVar9._5_8_ = 0;
		auVar9._0_5_ = uVar10;
		iVar15 = (int)uVar6;
		auVar2[4] = (char)(uVar11 >> 8);
		auVar2._0_4_ = iVar15;
		auVar2[5] = 0;
		auVar2._6_7_ = SUB137(auVar9 << 0x40, 6);
		auVar14._0_4_ = (float)iVar15;
		auVar14._4_4_ = (float)auVar2._4_4_;
		auVar14._8_4_ = (float)(int)uVar10;
		auVar14._12_4_ = (float)(uint3)(auVar1._10_3_ >> 0x10);
		auVar14 = divps(auVar14, _DAT_01009880);
		rgbColor._0_8_ = auVar12._0_8_;
		rgbColor._8_8_ = auVar14._0_8_;
		Color.RGBToHSV(rgbColor, ref GStack_18.H, ref GStack_18.S, ref GStack_18.V);
		return (GisketchUIColorPickerValue)GStack_18;
	}

	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x5278700", Offset = "0x5277700", VA = "0x5278700")]
	public GisketchUIColorPickerValue WithAlpha(byte a)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerValue.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$WithAlpha): 9 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		byte bVar3;
		byte bVar4;
		byte bVar5;
		ulong uVar6;
		undefined3 in_register_00000031;
		float fVar7;
		float fVar8;
		byte[] auVar9 = new byte[16];
		GisketchUIColorPickerValue GVar10;

		bVar3 = this.R;
		bVar4 = this.G;
		bVar5 = this.B;
		fVar8 = this.H;
		fVar7 = floorf(fVar8);
		fVar8 = fVar8 - fVar7;
		fVar7 = 1.0;
		if (fVar8 <= 1.0) {
			fVar7 = fVar8;
		}
		uVar1 = this.S;
		uVar2 = this.V;
		auVar9._4_4_ = uVar2;
		auVar9._0_4_ = uVar1;
		auVar9._8_8_ = 0;
		auVar9 = minps(_DAT_01005870, auVar9);
		GVar10.S = -(uint)(0.0 <= (float)uVar1) & auVar9._0_4_;
		GVar10.V = -(uint)(0.0 <= (float)uVar2) & auVar9._4_4_;
		uVar6 = (ulong)bVar4 << 8 |(ulong)bVar5 << 0x10 |(ulong)CONCAT31(in_register_00000031, a) << 0x18 |(ulong)(-(uint)(0.0 <= fVar8) & (uint)fVar7) << 0x20 | (ulong)bVar3;
		GVar10.R = (char)uVar6;
		GVar10.G = (char)(uVar6 >> 8);
		GVar10.B = (char)(uVar6 >> 0x10);
		GVar10.A = (char)(uVar6 >> 0x18);
		GVar10.H = (float)(int)(uVar6 >> 0x20);
		return (GisketchUIColorPickerValue)GVar10;
	}

	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x52787A0", Offset = "0x52777A0", VA = "0x52787A0")]
	public GisketchUIColorPickerValue WithHue(float h)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerValue.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$WithHue): 14 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		byte bVar3;
		byte uVar4;
		byte uVar5;
		byte uVar6;
		float fVar7;
		byte[] auVar8 = new byte[12];
		byte[] auVar9 = new byte[16];
		float S;
		float V;
		Color UVar10;
		GisketchUIColorPickerValue GVar11;
		float fStack_44;
		float fStack_38;

		bVar3 = this.A;
		fVar7 = floorf(h);
		fVar7 = h - fVar7;
		auVar8 = ZEXT812(0x3f800000);
		if (fVar7 <= auVar8._0_4_) {
			auVar8._4_8_ = auVar8._4_8_;
			auVar8._0_4_ = fVar7;
		}
		fVar7 = (float)(-(uint)(0.0 <= fVar7) & auVar8._0_4_);
		uVar1 = this.S;
		uVar2 = this.V;
		auVar9._4_4_ = uVar2;
		auVar9._0_4_ = uVar1;
		auVar9._8_8_ = 0;
		auVar9 = minps(_DAT_01005870, auVar9);
		S = (float)(-(uint)(0.0 <= (float)uVar1) & auVar9._0_4_);
		V = (float)(-(uint)(0.0 <= (float)uVar2) & auVar9._4_4_);
		UVar10 = Color.HSVToRGB(fVar7, S, V, true);
		uVar4 = GisketchUIColorPickerValue.ToByte(UVar10.r);
		fStack_44 = UVar10.g;
		uVar5 = GisketchUIColorPickerValue.ToByte(fStack_44);
		fStack_38 = UVar10.b;
		uVar6 = GisketchUIColorPickerValue.ToByte(fStack_38);
		GVar11._0_8_ =(ulong)uVar4 |(ulong)uVar5 << 8 | (ulong)uVar6 << 0x10 | (ulong)bVar3 << 0x18 | (ulong)(uint)fVar7 << 0x20;
		GVar11.V = V;
		GVar11.S = S;
		return (GisketchUIColorPickerValue)GVar11;
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x5278970", Offset = "0x5277970", VA = "0x5278970")]
	public GisketchUIColorPickerValue WithSaturationValue(float s, float v)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerValue.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$WithSaturationValue): 17 lines keep C-only constructs
		byte bVar1;
		byte uVar2;
		byte uVar3;
		byte uVar4;
		float fVar5;
		uint in_XMM0_Db;
		byte[] auVar6 = new byte[12];
		uint in_XMM1_Db;
		byte[] auVar7 = new byte[16];
		float fVar8;
		float V;
		Color UVar9;
		GisketchUIColorPickerValue GVar10;
		float fStack_58;
		float fStack_24;

		fVar8 = this.H;
		bVar1 = this.A;
		fVar5 = floorf(fVar8);
		fVar8 = fVar8 - fVar5;
		auVar6 = ZEXT812(0x3f800000);
		if (fVar8 <= auVar6._0_4_) {
			auVar6._4_8_ = auVar6._4_8_;
			auVar6._0_4_ = fVar8;
		}
		fVar8 = (float)(-(uint)(0.0 <= fVar8) & auVar6._0_4_);
		auVar7._4_4_ = v;
		auVar7._0_4_ = s;
		auVar7._8_4_ = in_XMM0_Db;
		auVar7._12_4_ = in_XMM1_Db;
		auVar7 = minps(_DAT_01005870, auVar7);
		fVar5 = (float)(-(uint)(0.0 <= s) & auVar7._0_4_);
		V = (float)(-(uint)(0.0 <= v) & auVar7._4_4_);
		UVar9 = Color.HSVToRGB(fVar8, fVar5, V, true);
		uVar2 = GisketchUIColorPickerValue.ToByte(UVar9.r);
		fStack_24 = UVar9.g;
		uVar3 = GisketchUIColorPickerValue.ToByte(fStack_24);
		fStack_58 = UVar9.b;
		uVar4 = GisketchUIColorPickerValue.ToByte(fStack_58);
		GVar10._0_8_ =(ulong)uVar2 |(ulong)uVar3 << 8 | (ulong)uVar4 << 0x10 | (ulong)bVar1 << 0x18 | (ulong)(uint)fVar8 << 0x20;
		GVar10.V = V;
		GVar10.S = fVar5;
		return (GisketchUIColorPickerValue)GVar10;
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x5278880", Offset = "0x5277880", VA = "0x5278880")]
	public static GisketchUIColorPickerValue FromHsv(float h, float s, float v, byte a)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerValue.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$FromHsv): 18 lines keep C-only constructs
		byte uVar1;
		byte uVar2;
		byte uVar3;
		undefined7 in_register_00000039;
		float fVar4;
		byte[] auVar5 = new byte[12];
		uint in_XMM1_Db;
		byte[] auVar6 = new byte[16];
		uint in_XMM2_Db;
		float S;
		float V;
		Color UVar7;
		GisketchUIColorPickerValue GVar8;
		float fStack_58;
		float fStack_24;

		fVar4 = floorf(h);
		fVar4 = h - fVar4;
		auVar5 = ZEXT812(0x3f800000);
		if (fVar4 <= auVar5._0_4_) {
			auVar5._4_8_ = auVar5._4_8_;
			auVar5._0_4_ = fVar4;
		}
		fVar4 = (float)(-(uint)(0.0 <= fVar4) & auVar5._0_4_);
		auVar6._4_4_ = v;
		auVar6._0_4_ = s;
		auVar6._8_4_ = in_XMM1_Db;
		auVar6._12_4_ = in_XMM2_Db;
		auVar6 = minps(_DAT_01005870, auVar6);
		S = (float)(-(uint)(0.0 <= s) & auVar6._0_4_);
		V = (float)(-(uint)(0.0 <= v) & auVar6._4_4_);
		UVar7 = Color.HSVToRGB(fVar4, S, V, true);
		uVar1 = GisketchUIColorPickerValue.ToByte(UVar7.r);
		fStack_24 = UVar7.g;
		uVar2 = GisketchUIColorPickerValue.ToByte(fStack_24);
		fStack_58 = UVar7.b;
		uVar3 = GisketchUIColorPickerValue.ToByte(fStack_58);
		GVar8._0_8_ =(ulong)uVar1 |(ulong)uVar2 << 8 |(ulong)uVar3 << 0x10 |(CONCAT71(in_register_00000039, a) & 0xffffffff) << 0x18 | (ulong)(uint)fVar4 << 0x20;
		GVar8.V = V;
		GVar8.S = S;
		return (GisketchUIColorPickerValue)GVar8;
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x5272470", Offset = "0x5271470", VA = "0x5272470")]
	public static string Normalize(string text, bool alpha, [Optional] string fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerValue.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$Normalize): 79 lines keep C-only constructs
		byte[] auVar1 = new byte[15];
		byte[] auVar2 = new byte[14];
		byte[] auVar3 = new byte[15];
		byte[] auVar4 = new byte[15];
		byte[] auVar5 = new byte[15];
		byte[] auVar6 = new byte[14];
		byte[] auVar7 = new byte[15];
		byte[] auVar8 = new byte[15];
		byte[] auVar9 = new byte[15];
		byte[] auVar10 = new byte[15];
		unkuint9 Var11;
		byte[] auVar12 = new byte[15];
		byte[] auVar13 = new byte[11];
		byte[] auVar14 = new byte[15];
		byte[] auVar15 = new byte[14];
		uint6 uVar16;
		byte[] auVar17 = new byte[11];
		bool bVar18;
		String str1;
		String* ppSVar19;
		byte[] auVar20 = new byte[16];
		byte[] auVar21 = new byte[16];
		byte[] auVar22 = new byte[16];
		GisketchUIColorPickerValue local_38;
		Color local_28;

		local_38.R = 0;
		local_38.G = 0;
		local_38.B = 0;
		local_38.A = 0;
		local_38.H = 0.0;
		local_38.S = 0.0;
		local_38.V = 0.0;
		bVar18 = GisketchUIColorPickerValue.TryParse(text, alpha, ref local_38);
		if (bVar18) {
			auVar20._4_4_ = local_38.S;
			auVar20._8_4_ = local_38.V;
			auVar20._0_4_ = local_38.H;
			auVar20._12_4_ = 0;
			auVar20 = auVar20 << 0x20;
			auVar1[0xd] = 0;
			auVar1._0_13_ = auVar20._0_13_;
			auVar1[0xe] = (char)((uint)local_38.H >> 0x18);
			auVar3[0xc] = (char)((uint)local_38.H >> 0x10);
			auVar3._0_12_ = auVar20._0_12_;
			auVar3._13_2_ = auVar1._13_2_;
			auVar4[0xb] = 0;
			auVar4._0_11_ = auVar20._0_11_;
			auVar4._12_3_ = auVar3._12_3_;
			auVar5[10] = (char)((uint)local_38.H >> 8);
			auVar5._0_10_ = auVar20._0_10_;
			auVar5._11_4_ = auVar4._11_4_;
			auVar7[9] = 0;
			auVar7._0_9_ = auVar20._0_9_;
			auVar7._10_5_ = auVar5._10_5_;
			auVar17[4] = SUB41(local_38.H, 0);
			auVar17._0_4_ = local_38.H;
			auVar17._5_6_ = auVar7._9_6_;
			auVar10._7_8_ = 0;
			auVar10._0_7_ = auVar17._4_7_;
			Var11 = CONCAT81(SUB158(auVar10 << 0x40, 7), local_38.A);
			auVar12._9_6_ = 0;
			auVar12._0_9_ = Var11;
			auVar13._1_10_ = SUB1510(auVar12 << 0x30, 5);
			auVar13[0] = local_38.B;
			auVar14._11_4_ = 0;
			auVar14._0_11_ = auVar13;
			auVar8[2] = local_38.G;
			auVar8[0] = local_38.R;
			auVar8[1] = local_38.G;
			auVar8._3_12_ = SUB1512(auVar14 << 0x20, 3);
			auVar9[1] = 0;
			auVar9[0] = local_38.R;
			auVar9._2_13_ = auVar8._2_13_;
			auVar2._10_2_ = 0;
			auVar2._0_10_ = auVar9._0_10_;
			auVar2._12_2_ = (short)Var11;
			uVar16 = CONCAT42(auVar2._10_4_, auVar13._0_2_);
			auVar15._6_8_ = 0;
			auVar15._0_6_ = uVar16;
			auVar6._4_2_ = auVar8._2_2_;
			auVar6._0_4_ = auVar9._0_4_;
			auVar6._6_8_ = SUB148(auVar15 << 0x40, 6);
			auVar22._0_4_ = (float)(auVar9._0_4_ & 0xffff);
			auVar22._4_4_ = (float)auVar6._4_4_;
			auVar22._8_4_ = (float)(int)uVar16;
			auVar22._12_4_ = (float)(auVar2._10_4_ >> 0x10);
			auVar20 = divps(auVar22, _DAT_01009880);
			auVar21._0_4_ = (float)((ushort)local_38._2_2_ & 0xff);
			auVar21._4_4_ = (float)local_38.A;
			auVar21._8_8_ = 0;
			auVar22 = divps(auVar21, _DAT_01009880);
			local_28._0_8_ = auVar20._0_8_;
			local_28._8_8_ = auVar22._0_8_;
			if (alpha) {
				str1 = ColorUtility.ToHtmlStringRGBA(ref local_28);
			}
			else {
				str1 = ColorUtility.ToHtmlStringRGB(ref local_28);
			}
			fallback = String.Concat("#", str1);
		}
		else if (fallback == null) {
			if (alpha) {
				ppSVar19 = &"#FFFFFFFF";
			}
			else {
				ppSVar19 = &"#FFFFFF";
			}
			fallback = *ppSVar19;
		}
		return fallback;
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x5278120", Offset = "0x5277120", VA = "0x5278120")]
	public static string FilterHexInput(string text, bool alpha)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerValue.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$FilterHexInput): clean
		ushort uVar1;
		Char[] val;
		String pSVar2;
		long lVar3;
		int iVar4;
		uint length;
		uint length_00;

		length_00 = (uint)alpha * 2 + 6;
		val = (Char[])new char[length_00];
		if ((text == null) &&(text = (String)**(long*)(g_data_07556758 + 0xb8), text == null)) {
	label_0537829e: ;
			throw new NullReferenceException();
		}
		iVar4 = text._stringLength;
		if (val == null) {
			if (0 < iVar4) {
				iVar4 = 0;
				do {
					uVar1 = text.get_Chars(iVar4);
					uVar1 = Char.ToUpperInvariant(uVar1);
					if ((uVar1 != 0x23) && ((0xfff5 < (ushort)(uVar1 - 0x3a) || (0xfff9 < (ushort)(uVar1 - 0x47))))) goto label_0537829e;
					iVar4 = iVar4 + 1;
				} while (iVar4 < text._stringLength);
			}
			length = 0;
		}
		else {
			length = 0;
			if (0 < iVar4) {
				iVar4 = 1;
				do {
					uVar1 = text.get_Chars(iVar4 + -1);
					uVar1 = Char.ToUpperInvariant(uVar1);
					if ((uVar1 != 0x23) && ((0xfff5 < (ushort)(uVar1 - 0x3a) || (0xfff9 < (ushort)(uVar1 - 0x47))))) {
						if ((uint)val.Length <= length) {
							throw new IndexOutOfRangeException();
						}
						lVar3 = (long)(int)length;
						length = length + 1;
						val[lVar3] = uVar1;
					}
				} while ((iVar4 < text._stringLength) && (iVar4 = iVar4 + 1, (int)length < (int)length_00));
			}
		}
		pSVar2 = 0x0.CreateString(val, 0, length);
		pSVar2 = String.Concat("#", pSVar2);
		return pSVar2;
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x5276DA0", Offset = "0x5275DA0", VA = "0x5276DA0")]
	public static bool TryParse(string text, bool alpha, out GisketchUIColorPickerValue value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerValue.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$TryParse): 12 lines keep C-only constructs
		int iVar1;
		byte uVar2;
		byte uVar3;
		byte uVar4;
		byte bVar5;
		String pSVar6;
		String pSVar7;
		CultureInfo pSVar8;
		byte[] auVar9 = new byte[16];
		byte[] auVar10 = new byte[16];
		Color rgbColor;
		float fStack_4c;
		float fStack_48;
		float[] afStack_44 = new float[2];
		int local_3c;
		GisketchUIColorPickerValue local_38;

		pSVar6 = GisketchUIColorPickerValue.FilterHexInput(text, alpha);
		value.R = 0;
		value.G = 0;
		value.B = 0;
		value.A = 0;
		value.H = 0.0;
		value.S = 0.0;
		value.V = 0.0;
		if (pSVar6 == null) {
			throw new NullReferenceException();
		}
		local_3c = (uint)alpha * 2 + 7;
		iVar1 = pSVar6._stringLength;
		if (iVar1 == local_3c) {
			pSVar7 = pSVar6.Substring(1, 2);
			pSVar8 = CultureInfo.InvariantCulture;
			uVar2 = Byte.Parse(pSVar7, 0x203, (IFormatProvider)pSVar8);
			local_38 = value;
			pSVar7 = pSVar6.Substring(3, 2);
			pSVar8 = CultureInfo.InvariantCulture;
			uVar3 = Byte.Parse(pSVar7, 0x203, (IFormatProvider)pSVar8);
			pSVar7 = pSVar6.Substring(5, 2);
			pSVar8 = CultureInfo.InvariantCulture;
			uVar4 = Byte.Parse(pSVar7, 0x203, (IFormatProvider)pSVar8);
			bVar5 = 0xff;
			if (alpha) {
				pSVar6 = pSVar6.Substring(7, 2);
				pSVar8 = CultureInfo.InvariantCulture;
				bVar5 = Byte.Parse(pSVar6, 0x203, (IFormatProvider)pSVar8);
			}
			afStack_44[0] = 0.0;
			fStack_4c = 0.0;
			fStack_48 = 0.0;
			auVar9._0_4_ = (float)uVar2;
			auVar9._4_4_ = (float)uVar3;
			auVar9._8_8_ = 0;
			auVar9 = divps(auVar9, _DAT_01009880);
			auVar10._0_4_ = (float)uVar4;
			auVar10._4_4_ = (float)bVar5;
			auVar10._8_8_ = 0;
			auVar10 = divps(auVar10, _DAT_01009880);
			rgbColor._0_8_ = auVar9._0_8_;
			rgbColor._8_8_ = auVar10._0_8_;
			Color.RGBToHSV(rgbColor, ref fStack_4c, ref fStack_48, afStack_44);
			local_38.R = uVar2;
			local_38.G = uVar3;
			local_38.B = uVar4;
			local_38.A = bVar5;
			local_38.H = fStack_4c;
			local_38.S = fStack_48;
			local_38.V = afStack_44[0];
		}
		return iVar1 == local_3c;
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x5278530", Offset = "0x5277530", VA = "0x5278530")]
	public static bool TryParseByte(string text, out byte value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerValue.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$TryParseByte): clean
		bool bVar1;
		CultureInfo provider;
		int iVar2;
		int iVar3;
		int local_1c;

		local_1c = 0;
		*value = 0;
		provider = CultureInfo.InvariantCulture;
		bVar1 = Int32.TryParse(text, 7, (IFormatProvider)provider, ref local_1c);
		if (bVar1) {
			iVar2 = 0xff;
			if (local_1c < 0xff) {
				iVar2 = local_1c;
			}
			iVar3 = 0;
			if (0 < iVar2) {
				iVar3 = iVar2;
			}
			*value = (uint8_t)iVar3;
		}
		return bVar1;
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x5278650", Offset = "0x5277650", VA = "0x5278650")]
	private static Color ToColor(byte r, byte g, byte b, byte a)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerValue.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$ToColor): 10 lines keep C-only constructs
		byte in_CH;
		byte in_DH;
		byte in_register_00000031;
		undefined3 in_register_00000039;
		byte[] auVar1 = new byte[16];
		Color UVar2;

		auVar1._0_4_ = (float)CONCAT31(in_register_00000039, r);
		auVar1._4_4_ = (float)CONCAT11(in_register_00000031, g);
		auVar1._8_4_ = (float)CONCAT11(in_DH, b);
		auVar1._12_4_ = (float)CONCAT11(in_CH, a);
		UVar2 = (Color)divps(auVar1, _DAT_010052a0);
		return (Color)UVar2;
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x5278B90", Offset = "0x5277B90", VA = "0x5278B90")]
	private static byte ParseByte(string value, int start)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerValue.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$ParseByte): clean
		byte uVar1;
		String s;
		CultureInfo provider;

		if (value == null) {
			throw new NullReferenceException();
		}
		s = value.Substring(start, 2);
		provider = CultureInfo.InvariantCulture;
		uVar1 = Byte.Parse(s, 0x203, (IFormatProvider)provider);
		return uVar1;
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x5278A60", Offset = "0x5277A60", VA = "0x5278A60")]
	private static byte ToByte(float value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerValue.c (Gisketch.Aottg2UI.Code.GisketchUIColorPickerValue$$ToByte): 6 lines keep C-only constructs
		uint uVar1;
		double dVar2;
		double dVar3;
		MethodInfo in_RSI;
		MethodInfo method_00;
		float fVar4;
		Il2CppMethodPointer local_20;
		byte[] local_18 = new byte[16];

		fVar4 = 1.0;
		if (value <= 1.0) {
			fVar4 = value;
		}
		local_18 = ZEXT416(-(uint)(0.0 <= value) & (uint)(fVar4 * 255.0));
		if (Il2CppMethodInitialized_07541320 == false) {
			Il2CppMethodInitialized_07541320 = true;
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		dVar2 = (double)(float)local_18._0_4_;
		method_00 = (MethodInfo)&local_20;
		dVar3 = modf(dVar2, (double)method_00, in_RSI);
		if (0.0 <= (float)local_18._0_4_) {
			if ((dVar3 != 0.5) || (NAN(dVar3))) {
				dVar2 = floor(dVar2 + 0.5, method_00);
				return (uint8_t)(int)dVar2;
			}
			if (((long)(double)local_20 & 1U) != 0) {
				return (uint8_t)(int)((double)local_20 + 1.0);
			}
		}
		else {
			if ((dVar3 != -0.5) || (NAN(dVar3))) {
				dVar2 = ceil(dVar2 + -0.5, method_00);
				return (uint8_t)(int)dVar2;
			}
			if (((long)(double)local_20 & 1U) != 0) {
				local_20 = (Il2CppMethodPointer)((double)local_20 + -1.0);
			}
		}
		return (uint8_t)(int)(double)local_20;
	}
}
