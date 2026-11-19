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
	[Address(RVA = "0x65368A0", Offset = "0x65358A0", VA = "0x65368A0")]
	public SHCoefficients(SphericalHarmonicsL2 sh)
	{
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x65370F0", Offset = "0x65360F0", VA = "0x65370F0")]
	public SHCoefficients(SphericalHarmonicsL2 sh, Vector4 probesOcclusion)
	{
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x6536F50", Offset = "0x6535F50", VA = "0x6536F50")]
	private static Vector4 GetSHA(SphericalHarmonicsL2 sh, int i)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x6536FF0", Offset = "0x6535FF0", VA = "0x6536FF0")]
	private static Vector4 GetSHB(SphericalHarmonicsL2 sh, int i)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x6537080", Offset = "0x6536080", VA = "0x6537080")]
	private static Vector4 GetSHC(SphericalHarmonicsL2 sh)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x6537190", Offset = "0x6536190", VA = "0x6537190", Slot = "4")]
	public bool Equals(SHCoefficients other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x6537470", Offset = "0x6536470", VA = "0x6537470", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x65377C0", Offset = "0x65367C0", VA = "0x65377C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x6537930", Offset = "0x6536930", VA = "0x6537930")]
	public static bool operator ==(SHCoefficients left, SHCoefficients right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x6537A30", Offset = "0x6536A30", VA = "0x6537A30")]
	public static bool operator !=(SHCoefficients left, SHCoefficients right)
	{
		return default(bool);
	}
}
