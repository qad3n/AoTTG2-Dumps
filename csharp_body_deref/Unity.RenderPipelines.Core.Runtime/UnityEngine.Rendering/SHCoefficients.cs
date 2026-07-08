using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000196")]
public struct SHCoefficients : IEquatable<SHCoefficients>
{
	[Token(Token = "0x400070E")]
	[FieldOffset(Offset = "0x0")]
	public Vector4 SHAr;

	[Token(Token = "0x400070F")]
	[FieldOffset(Offset = "0x10")]
	public Vector4 SHAg;

	[Token(Token = "0x4000710")]
	[FieldOffset(Offset = "0x20")]
	public Vector4 SHAb;

	[Token(Token = "0x4000711")]
	[FieldOffset(Offset = "0x30")]
	public Vector4 SHBr;

	[Token(Token = "0x4000712")]
	[FieldOffset(Offset = "0x40")]
	public Vector4 SHBg;

	[Token(Token = "0x4000713")]
	[FieldOffset(Offset = "0x50")]
	public Vector4 SHBb;

	[Token(Token = "0x4000714")]
	[FieldOffset(Offset = "0x60")]
	public Vector4 SHC;

	[Token(Token = "0x4000715")]
	[FieldOffset(Offset = "0x70")]
	public Vector4 ProbesOcclusion;

	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x48C95D0", Offset = "0x48C95D0", VA = "0x48C95D0")]
	public SHCoefficients(SphericalHarmonicsL2 sh)
	{
	}

	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x48C9E20", Offset = "0x48C9E20", VA = "0x48C9E20")]
	public SHCoefficients(SphericalHarmonicsL2 sh, Vector4 probesOcclusion)
	{
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x48C9C80", Offset = "0x48C9C80", VA = "0x48C9C80")]
	private static Vector4 GetSHA(SphericalHarmonicsL2 sh, int i)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000BA8")]
	[Address(RVA = "0x48C9D20", Offset = "0x48C9D20", VA = "0x48C9D20")]
	private static Vector4 GetSHB(SphericalHarmonicsL2 sh, int i)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x48C9DB0", Offset = "0x48C9DB0", VA = "0x48C9DB0")]
	private static Vector4 GetSHC(SphericalHarmonicsL2 sh)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x48C9EC0", Offset = "0x48C9EC0", VA = "0x48C9EC0", Slot = "4")]
	public bool Equals(SHCoefficients other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x48CA1A0", Offset = "0x48CA1A0", VA = "0x48CA1A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x48CA2D0", Offset = "0x48CA2D0", VA = "0x48CA2D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x48CA440", Offset = "0x48CA440", VA = "0x48CA440")]
	public static bool operator ==(SHCoefficients left, SHCoefficients right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x48CA4D0", Offset = "0x48CA4D0", VA = "0x48CA4D0")]
	public static bool operator !=(SHCoefficients left, SHCoefficients right)
	{
		return default(bool);
	}
}
