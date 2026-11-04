// ==================== AoTTG2 cross-reference ====================
// Type: System.Resources.FastResourceComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Resources;

[Token(Token = "0x20004E5")]
internal sealed class FastResourceComparer : IComparer, IEqualityComparer, IComparer<string>, IEqualityComparer<string>
{
	[Token(Token = "0x4001370")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly System.Resources.FastResourceComparer Default;

	[Token(Token = "0x60023D7")]
	[Address(RVA = "0x1A44B10", Offset = "0x1A43110", VA = "0x181A44B10", Slot = "6")]
	public int GetHashCode(object key)
	{
		return default(int);
	}

	[Token(Token = "0x60023D8")]
	[Address(RVA = "0x1A44BC0", Offset = "0x1A431C0", VA = "0x181A44BC0", Slot = "9")]
	public int GetHashCode(string key)
	{
		return default(int);
	}

	[Token(Token = "0x60023D9")]
	[Address(RVA = "0x1A44C50", Offset = "0x1A43250", VA = "0x181A44C50")]
	internal static int HashFunction(string key)
	{
		return default(int);
	}

	[Token(Token = "0x60023DA")]
	[Address(RVA = "0x1A44A10", Offset = "0x1A43010", VA = "0x181A44A10", Slot = "4")]
	public int Compare(object a, object b)
	{
		return default(int);
	}

	[Token(Token = "0x60023DB")]
	[Address(RVA = "0x1A449F0", Offset = "0x1A42FF0", VA = "0x181A449F0", Slot = "7")]
	public int Compare(string a, string b)
	{
		return default(int);
	}

	[Token(Token = "0x60023DC")]
	[Address(RVA = "0x1A44AF0", Offset = "0x1A430F0", VA = "0x181A44AF0", Slot = "8")]
	public bool Equals(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x60023DD")]
	[Address(RVA = "0x1A44A80", Offset = "0x1A43080", VA = "0x181A44A80", Slot = "5")]
	public new bool Equals(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x60023DE")]
	[Address(RVA = "0x1A44910", Offset = "0x1A42F10", VA = "0x181A44910")]
	public static int CompareOrdinal(string a, byte[] bytes, int bCharLength)
	{
		return default(int);
	}

	[Token(Token = "0x60023DF")]
	[Address(RVA = "0x1A44770", Offset = "0x1A42D70", VA = "0x181A44770")]
	public static int CompareOrdinal(byte[] bytes, int aCharLength, string b)
	{
		return default(int);
	}

	[Token(Token = "0x60023E0")]
	[Address(RVA = "0x1A44860", Offset = "0x1A42E60", VA = "0x181A44860")]
	internal unsafe static int CompareOrdinal(byte* a, int byteLen, string b)
	{
		return default(int);
	}

	[Token(Token = "0x60023E1")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public FastResourceComparer()
	{
	}
}
