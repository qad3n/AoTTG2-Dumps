// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SHCoefficients
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001AD")]
public struct SHCoefficients : IEquatable<SHCoefficients>
{
	[Token(Token = "0x4000856")]
	[FieldOffset(Offset = "0x0")]
	public Vector4 SHAr;

	[Token(Token = "0x4000857")]
	[FieldOffset(Offset = "0x10")]
	public Vector4 SHAg;

	[Token(Token = "0x4000858")]
	[FieldOffset(Offset = "0x20")]
	public Vector4 SHAb;

	[Token(Token = "0x4000859")]
	[FieldOffset(Offset = "0x30")]
	public Vector4 SHBr;

	[Token(Token = "0x400085A")]
	[FieldOffset(Offset = "0x40")]
	public Vector4 SHBg;

	[Token(Token = "0x400085B")]
	[FieldOffset(Offset = "0x50")]
	public Vector4 SHBb;

	[Token(Token = "0x400085C")]
	[FieldOffset(Offset = "0x60")]
	public Vector4 SHC;

	[Token(Token = "0x400085D")]
	[FieldOffset(Offset = "0x70")]
	public Vector4 ProbesOcclusion;

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x2B49DF0", Offset = "0x2B483F0", VA = "0x182B49DF0")]
	public SHCoefficients(SphericalHarmonicsL2 sh)
	{
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x2B49D80", Offset = "0x2B48380", VA = "0x182B49D80")]
	public SHCoefficients(SphericalHarmonicsL2 sh, Vector4 probesOcclusion)
	{
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x2B49B50", Offset = "0x2B48150", VA = "0x182B49B50")]
	private static Vector4 GetSHA(SphericalHarmonicsL2 sh, int i)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x2B49C30", Offset = "0x2B48230", VA = "0x182B49C30")]
	private static Vector4 GetSHB(SphericalHarmonicsL2 sh, int i)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x2B49CF0", Offset = "0x2B482F0", VA = "0x182B49CF0")]
	private static Vector4 GetSHC(SphericalHarmonicsL2 sh)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x2B495D0", Offset = "0x2B47BD0", VA = "0x182B495D0", Slot = "4")]
	public bool Equals(SHCoefficients other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x2B498E0", Offset = "0x2B47EE0", VA = "0x182B498E0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x2B499E0", Offset = "0x2B47FE0", VA = "0x182B499E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x2B4A390", Offset = "0x2B48990", VA = "0x182B4A390")]
	public static bool operator ==(SHCoefficients left, SHCoefficients right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x2B4A3F0", Offset = "0x2B489F0", VA = "0x182B4A3F0")]
	public static bool operator !=(SHCoefficients left, SHCoefficients right)
	{
		return default(bool);
	}
}
