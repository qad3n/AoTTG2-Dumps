// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.RegexTree
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000BD")]
internal sealed class RegexTree
{
	[Token(Token = "0x400036A")]
	[FieldOffset(Offset = "0x10")]
	public readonly RegexNode Root;

	[Token(Token = "0x400036B")]
	[FieldOffset(Offset = "0x18")]
	public readonly Hashtable Caps;

	[Token(Token = "0x400036C")]
	[FieldOffset(Offset = "0x20")]
	public readonly int[] CapNumList;

	[Token(Token = "0x400036D")]
	[FieldOffset(Offset = "0x28")]
	public readonly int CapTop;

	[Token(Token = "0x400036E")]
	[FieldOffset(Offset = "0x30")]
	public readonly Hashtable CapNames;

	[Token(Token = "0x400036F")]
	[FieldOffset(Offset = "0x38")]
	public readonly string[] CapsList;

	[Token(Token = "0x4000370")]
	[FieldOffset(Offset = "0x40")]
	public readonly RegexOptions Options;

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x491A0E0", Offset = "0x491A0E0", VA = "0x491A0E0")]
	internal RegexTree(RegexNode root, Hashtable caps, int[] capNumList, int capTop, Hashtable capNames, string[] capsList, RegexOptions options)
	{
	}
}
