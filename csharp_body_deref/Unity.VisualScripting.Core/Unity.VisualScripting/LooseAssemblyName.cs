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
	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x0")]
	public readonly string name;

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x2DB22B0", Offset = "0x2DB08B0", VA = "0x182DB22B0")]
	public LooseAssemblyName(string name)
	{
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x2DB21E0", Offset = "0x2DB07E0", VA = "0x182DB21E0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x2DB2270", Offset = "0x2DB0870", VA = "0x182DB2270", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x2DB2320", Offset = "0x2DB0920", VA = "0x182DB2320")]
	public static bool operator ==(LooseAssemblyName a, LooseAssemblyName b)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x2DB24F0", Offset = "0x2DB0AF0", VA = "0x182DB24F0")]
	public static bool operator !=(LooseAssemblyName a, LooseAssemblyName b)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x2DB2470", Offset = "0x2DB0A70", VA = "0x182DB2470")]
	public static implicit operator LooseAssemblyName(string name)
	{
		return default(LooseAssemblyName);
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
	public static implicit operator string(LooseAssemblyName name)
	{
		return null;
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x2DB23E0", Offset = "0x2DB09E0", VA = "0x182DB23E0")]
	public static explicit operator LooseAssemblyName(AssemblyName strongAssemblyName)
	{
		return default(LooseAssemblyName);
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
