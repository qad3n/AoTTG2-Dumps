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
	[Address(RVA = "0x4BEE640", Offset = "0x4BEE640", VA = "0x4BEE640")]
	public SHCoefficients(SphericalHarmonicsL2 sh)
	{
	}

	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x4BEEE90", Offset = "0x4BEEE90", VA = "0x4BEEE90")]
	public SHCoefficients(SphericalHarmonicsL2 sh, Vector4 probesOcclusion)
	{
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x4BEECF0", Offset = "0x4BEECF0", VA = "0x4BEECF0")]
	private static Vector4 GetSHA(SphericalHarmonicsL2 sh, int i)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000BA8")]
	[Address(RVA = "0x4BEED90", Offset = "0x4BEED90", VA = "0x4BEED90")]
	private static Vector4 GetSHB(SphericalHarmonicsL2 sh, int i)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x4BEEE20", Offset = "0x4BEEE20", VA = "0x4BEEE20")]
	private static Vector4 GetSHC(SphericalHarmonicsL2 sh)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x4BEEF30", Offset = "0x4BEEF30", VA = "0x4BEEF30", Slot = "4")]
	public bool Equals(SHCoefficients other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x4BEF210", Offset = "0x4BEF210", VA = "0x4BEF210", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x4BEF340", Offset = "0x4BEF340", VA = "0x4BEF340", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x4BEF4B0", Offset = "0x4BEF4B0", VA = "0x4BEF4B0")]
	public static bool operator ==(SHCoefficients left, SHCoefficients right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x4BEF540", Offset = "0x4BEF540", VA = "0x4BEF540")]
	public static bool operator !=(SHCoefficients left, SHCoefficients right)
	{
		return default(bool);
	}
}
