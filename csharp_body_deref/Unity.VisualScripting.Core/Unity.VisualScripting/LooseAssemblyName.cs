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
	[Address(RVA = "0x499D2B0", Offset = "0x499D2B0", VA = "0x499D2B0")]
	public LooseAssemblyName(string name)
	{
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x499D310", Offset = "0x499D310", VA = "0x499D310", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x499D370", Offset = "0x499D370", VA = "0x499D370", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x499D3B0", Offset = "0x499D3B0", VA = "0x499D3B0")]
	public static bool operator ==(LooseAssemblyName a, LooseAssemblyName b)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x499D450", Offset = "0x499D450", VA = "0x499D450")]
	public static bool operator !=(LooseAssemblyName a, LooseAssemblyName b)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x499D4F0", Offset = "0x499D4F0", VA = "0x499D4F0")]
	public static implicit operator LooseAssemblyName(string name)
	{
		return default(LooseAssemblyName);
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x499D570", Offset = "0x499D570", VA = "0x499D570")]
	public static implicit operator string(LooseAssemblyName name)
	{
		return null;
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x499D580", Offset = "0x499D580", VA = "0x499D580")]
	public static explicit operator LooseAssemblyName(AssemblyName strongAssemblyName)
	{
		return default(LooseAssemblyName);
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x499D610", Offset = "0x499D610", VA = "0x499D610", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
