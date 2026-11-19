// ==================== AoTTG2 cross-reference ====================
// Type: Utility.Color255
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/Color255.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Color255.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x200091B")]
public class Color255
{
	[Token(Token = "0x4002DE9")]
	[FieldOffset(Offset = "0x10")]
	public int R;

	[Token(Token = "0x4002DEA")]
	[FieldOffset(Offset = "0x14")]
	public int G;

	[Token(Token = "0x4002DEB")]
	[FieldOffset(Offset = "0x18")]
	public int B;

	[Token(Token = "0x4002DEC")]
	[FieldOffset(Offset = "0x1C")]
	public int A;

	[Token(Token = "0x6005641")]
	[Address(RVA = "0x5CE7730", Offset = "0x5CE6730", VA = "0x5CE7730")]
	public Color255(int r, int g, int b, int a = 255)
	{
		// Lifted from source/cpp/Utility/Color255.c (Utility.Color255$$.ctor): clean
		base();
		this.R = r;
		this.G = g;
		this.B = b;
		this.A = a;
		return;
	}

	[Token(Token = "0x6005642")]
	[Address(RVA = "0x5CE7770", Offset = "0x5CE6770", VA = "0x5CE7770")]
	public Color255()
	{
		// Lifted from source/cpp/Utility/Color255.c (Utility.Color255$$.ctor): clean
		base();
		this.R = 0xff;
		this.G = 0xff;
		this.B = 0xff;
		this.A = 0xff;
		return;
	}

	[Token(Token = "0x6005643")]
	[Address(RVA = "0x5CE7790", Offset = "0x5CE6790", VA = "0x5CE7790")]
	public Color255(Color color)
	{
		// Lifted from source/cpp/Utility/Color255.c (Utility.Color255$$.ctor): clean
		float local_28;
		float fStack_24;

		base();
		local_28 = color.r;
		fStack_24 = color.g;
		this.R = (int)(local_28 * 255.0);
		this.G = (int)(fStack_24 * 255.0);
		this.B = (int)(color.b * 255.0);
		this.A = (int)(color.a * 255.0);
		return;
	}

	[Token(Token = "0x6005644")]
	[Address(RVA = "0x5CE77D0", Offset = "0x5CE67D0", VA = "0x5CE77D0")]
	public Color ToColor()
	{
		// Lifted from source/cpp/Utility/Color255.c (Utility.Color255$$ToColor): 6 lines keep C-only constructs
		byte[] auVar1 = new byte[16];
		Color UVar2;

		auVar1._0_4_ = (float)this.R;
		auVar1._4_4_ = (float)this.G;
		auVar1._8_4_ = (float)this.B;
		auVar1._12_4_ = (float)this.A;
		UVar2 = (Color)divps(auVar1, _DAT_010052a0);
		return (Color)UVar2;
	}

	[Token(Token = "0x6005645")]
	[Address(RVA = "0x5CE77F0", Offset = "0x5CE67F0", VA = "0x5CE77F0")]
	public static Color255 Lerp(Color255 from, Color255 to, float t)
	{
		// Lifted from source/cpp/Utility/Color255.c (Utility.Color255$$Lerp): clean
		int iVar1;
		int iVar2;
		int iVar3;
		int iVar4;
		Color255 __this;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;

		if ((from == null) || (to == null)) {
			throw new NullReferenceException();
		}
		fVar9 = 1.0;
		if (t <= 1.0) {
			fVar9 = t;
		}
		fVar9 = (float)(-(uint)(0.0 <= t) & (uint)fVar9);
		iVar1 = to.R;
		iVar2 = to.G;
		iVar3 = to.B;
		iVar4 = to.A;
		fVar5 = (float)from.R;
		fVar6 = (float)from.G;
		fVar7 = (float)from.B;
		fVar8 = (float)from.A;
		__this = new Color255();
		__this.R = (int)(fVar9 * ((float)iVar1 - fVar5) + fVar5);
		__this.G = (int)(fVar9 * ((float)iVar2 - fVar6) + fVar6);
		__this.B = (int)(fVar9 * ((float)iVar3 - fVar7) + fVar7);
		__this.A = (int)(fVar9 * ((float)iVar4 - fVar8) + fVar8);
		return __this;
	}

	[Token(Token = "0x6005646")]
	[Address(RVA = "0x5CE78A0", Offset = "0x5CE68A0", VA = "0x5CE78A0")]
	public static Color255 Gradient(GradientColorKey[] colorKeys, GradientAlphaKey[] alphakeys, GradientMode mode, float t)
	{
		// Lifted from source/cpp/Utility/Color255.c (Utility.Color255$$Gradient): clean
		Gradient __this;
		Color255 __this_00;
		Color UVar1;
		float local_38;
		float fStack_34;

		__this = new Gradient();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.SetKeys(colorKeys, alphakeys);
		UVar1 = __this.Evaluate(t);
		__this_00 = new Color255();
		local_38 = UVar1.r;
		fStack_34 = UVar1.g;
		__this_00.R = (int)(local_38 * 255.0);
		__this_00.G = (int)(fStack_34 * 255.0);
		__this_00.B = (int)(UVar1.b * 255.0);
		__this_00.A = (int)(UVar1.a * 255.0);
		return __this_00;
	}

	[Token(Token = "0x6005647")]
	[Address(RVA = "0x5CE7970", Offset = "0x5CE6970", VA = "0x5CE7970", Slot = "0")]
	public override bool Equals(object obj)
	{
		// Lifted from source/cpp/Utility/Color255.c (Utility.Color255$$Equals): 2 lines keep C-only constructs
		byte bVar1;

		if (obj != null) {
			bVar1 = (typeof(Color255)._2).typeHierarchyDepth;
			if ((((bVar1 <= (obj.klass._2).typeHierarchyDepth) &&((obj.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Color255))) &&(this.R == *(int)&obj[1].klass)) &&((this.G == *(int)((long)&obj[1].klass + 4) &&(this.B == *(int)&obj[1].monitor)))) {
				return this.A == *(int)((long)&obj[1].monitor + 4);
			}
		}
		return false;
	}

	[Token(Token = "0x6005648")]
	[Address(RVA = "0x5CE7A00", Offset = "0x5CE6A00", VA = "0x5CE7A00", Slot = "2")]
	public override int GetHashCode()
	{
		// Lifted from source/cpp/Utility/Color255.c (Utility.Color255$$GetHashCode): clean
		int iVar1;
		ValueTuple<T1, T2, T3, T4> local_28;

		local_28.Item1 = null;
		local_28.Item2 = null;
		local_28 = new ValueTuple<int, int, int, int>(this.R, this.G, this.B, this.A);
		local_28.Item3 = local_28.Item1;
		local_28.Item4 = local_28.Item2;
		return iVar1;
	}
}
