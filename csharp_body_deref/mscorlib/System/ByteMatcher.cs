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

[Token(Token = "0x20001A2")]
internal class ByteMatcher
{
	[Token(Token = "0x40006F6")]
	[FieldOffset(Offset = "0x10")]
	private Hashtable map;

	[Token(Token = "0x40006F7")]
	[FieldOffset(Offset = "0x18")]
	private Hashtable starts;

	[Token(Token = "0x6001053")]
	[Address(RVA = "0x3D198E0", Offset = "0x3D198E0", VA = "0x3D198E0")]
	public void AddMapping(System.TermInfoStrings key, byte[] val)
	{
	}

	[Token(Token = "0x6001054")]
	[Address(RVA = "0x3D199E0", Offset = "0x3D199E0", VA = "0x3D199E0")]
	public void Sort()
	{
	}

	[Token(Token = "0x6001055")]
	[Address(RVA = "0x3D15A80", Offset = "0x3D15A80", VA = "0x3D15A80")]
	public bool StartsWith(int c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001056")]
	[Address(RVA = "0x3D15AD0", Offset = "0x3D15AD0", VA = "0x3D15AD0")]
	public System.TermInfoStrings Match(char[] buffer, int offset, int length, out int used)
	{
		return default(System.TermInfoStrings);
	}

	[Token(Token = "0x6001057")]
	[Address(RVA = "0x3D19820", Offset = "0x3D19820", VA = "0x3D19820")]
	public ByteMatcher()
	{
	}
}
