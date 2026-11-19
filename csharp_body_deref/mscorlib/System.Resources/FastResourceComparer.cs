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

[Token(Token = "0x20004BE")]
internal sealed class FastResourceComparer : IComparer, IEqualityComparer, IComparer<string>, IEqualityComparer<string>
{
	[Token(Token = "0x40012D0")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly System.Resources.FastResourceComparer Default;

	[Token(Token = "0x60023A5")]
	[Address(RVA = "0x53CD410", Offset = "0x53CC410", VA = "0x53CD410", Slot = "6")]
	public int GetHashCode(object key)
	{
		return default(int);
	}

	[Token(Token = "0x60023A6")]
	[Address(RVA = "0x53CD530", Offset = "0x53CC530", VA = "0x53CD530", Slot = "9")]
	public int GetHashCode(string key)
	{
		return default(int);
	}

	[Token(Token = "0x60023A7")]
	[Address(RVA = "0x53CD4D0", Offset = "0x53CC4D0", VA = "0x53CD4D0")]
	internal static int HashFunction(string key)
	{
		return default(int);
	}

	[Token(Token = "0x60023A8")]
	[Address(RVA = "0x53CD5E0", Offset = "0x53CC5E0", VA = "0x53CD5E0", Slot = "4")]
	public int Compare(object a, object b)
	{
		return default(int);
	}

	[Token(Token = "0x60023A9")]
	[Address(RVA = "0x53CD630", Offset = "0x53CC630", VA = "0x53CD630", Slot = "7")]
	public int Compare(string a, string b)
	{
		return default(int);
	}

	[Token(Token = "0x60023AA")]
	[Address(RVA = "0x53CD640", Offset = "0x53CC640", VA = "0x53CD640", Slot = "8")]
	public bool Equals(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x60023AB")]
	[Address(RVA = "0x53CD650", Offset = "0x53CC650", VA = "0x53CD650", Slot = "5")]
	public new bool Equals(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x60023AC")]
	[Address(RVA = "0x53CD6A0", Offset = "0x53CC6A0", VA = "0x53CD6A0")]
	public static int CompareOrdinal(string a, byte[] bytes, int bCharLength)
	{
		return default(int);
	}

	[Token(Token = "0x60023AD")]
	[Address(RVA = "0x53CD750", Offset = "0x53CC750", VA = "0x53CD750")]
	public static int CompareOrdinal(byte[] bytes, int aCharLength, string b)
	{
		return default(int);
	}

	[Token(Token = "0x60023AE")]
	[Address(RVA = "0x53CD850", Offset = "0x53CC850", VA = "0x53CD850")]
	internal unsafe static int CompareOrdinal(byte* a, int byteLen, string b)
	{
		return default(int);
	}

	[Token(Token = "0x60023AF")]
	[Address(RVA = "0x53CD8E0", Offset = "0x53CC8E0", VA = "0x53CD8E0")]
	public FastResourceComparer()
	{
	}
}
