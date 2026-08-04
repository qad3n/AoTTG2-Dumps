// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.LooseAssemblyName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000ED")]
public struct LooseAssemblyName
{
	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0x0")]
	public readonly string name;

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x4CC1E80", Offset = "0x4CC1E80", VA = "0x4CC1E80")]
	public LooseAssemblyName(string name)
	{
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x4CC1EE0", Offset = "0x4CC1EE0", VA = "0x4CC1EE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x4CC1F40", Offset = "0x4CC1F40", VA = "0x4CC1F40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x4CC1F80", Offset = "0x4CC1F80", VA = "0x4CC1F80")]
	public static bool operator ==(LooseAssemblyName a, LooseAssemblyName b)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x4CC2020", Offset = "0x4CC2020", VA = "0x4CC2020")]
	public static bool operator !=(LooseAssemblyName a, LooseAssemblyName b)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x4CC20C0", Offset = "0x4CC20C0", VA = "0x4CC20C0")]
	public static implicit operator LooseAssemblyName(string name)
	{
		return default(LooseAssemblyName);
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x4CC2140", Offset = "0x4CC2140", VA = "0x4CC2140")]
	public static implicit operator string(LooseAssemblyName name)
	{
		return null;
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x4CC2150", Offset = "0x4CC2150", VA = "0x4CC2150")]
	public static explicit operator LooseAssemblyName(AssemblyName strongAssemblyName)
	{
		return default(LooseAssemblyName);
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x4CC21E0", Offset = "0x4CC21E0", VA = "0x4CC21E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
