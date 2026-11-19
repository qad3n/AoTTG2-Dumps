// ==================== AoTTG2 cross-reference ====================
// Type: System.ByteMatcher
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001A5")]
internal class ByteMatcher
{
	[Token(Token = "0x40006B8")]
	[FieldOffset(Offset = "0x10")]
	private Hashtable map;

	[Token(Token = "0x40006B9")]
	[FieldOffset(Offset = "0x18")]
	private Hashtable starts;

	[Token(Token = "0x6001081")]
	[Address(RVA = "0x551CC80", Offset = "0x551BC80", VA = "0x551CC80")]
	public void AddMapping(System.TermInfoStrings key, byte[] val)
	{
	}

	[Token(Token = "0x6001082")]
	[Address(RVA = "0x551CD80", Offset = "0x551BD80", VA = "0x551CD80")]
	public void Sort()
	{
	}

	[Token(Token = "0x6001083")]
	[Address(RVA = "0x5518CB0", Offset = "0x5517CB0", VA = "0x5518CB0")]
	public bool StartsWith(int c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001084")]
	[Address(RVA = "0x5518D00", Offset = "0x5517D00", VA = "0x5518D00")]
	public System.TermInfoStrings Match(char[] buffer, int offset, int length, out int used)
	{
		return default(System.TermInfoStrings);
	}

	[Token(Token = "0x6001085")]
	[Address(RVA = "0x551CBB0", Offset = "0x551BBB0", VA = "0x551CBB0")]
	public ByteMatcher()
	{
	}
}
