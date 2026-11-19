// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.SearchPattern2
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200024D")]
internal class SearchPattern2
{
	[Token(Token = "0x200024E")]
	private class Op
	{
		[Token(Token = "0x400083F")]
		[FieldOffset(Offset = "0x10")]
		public OpCode Code;

		[Token(Token = "0x4000840")]
		[FieldOffset(Offset = "0x18")]
		public string Argument;

		[Token(Token = "0x4000841")]
		[FieldOffset(Offset = "0x20")]
		public Op Next;

		[Token(Token = "0x6001027")]
		[Address(RVA = "0x628B5F0", Offset = "0x628A5F0", VA = "0x628B5F0")]
		public Op(OpCode code)
		{
		}
	}

	[Token(Token = "0x200024F")]
	private enum OpCode
	{
		[Token(Token = "0x4000843")]
		ExactString,
		[Token(Token = "0x4000844")]
		AnyChar,
		[Token(Token = "0x4000845")]
		AnyString,
		[Token(Token = "0x4000846")]
		End,
		[Token(Token = "0x4000847")]
		True
	}

	[Token(Token = "0x4000839")]
	[FieldOffset(Offset = "0x10")]
	private Op ops;

	[Token(Token = "0x400083A")]
	[FieldOffset(Offset = "0x18")]
	private bool ignore;

	[Token(Token = "0x400083B")]
	[FieldOffset(Offset = "0x19")]
	private bool hasWildcard;

	[Token(Token = "0x400083C")]
	[FieldOffset(Offset = "0x20")]
	private string pattern;

	[Token(Token = "0x400083D")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly char[] WildcardChars;

	[Token(Token = "0x400083E")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly char[] InvalidChars;

	[Token(Token = "0x1700037C")]
	public bool HasWildcard
	{
		[Token(Token = "0x6001024")]
		[Address(RVA = "0x628B5E0", Offset = "0x628A5E0", VA = "0x628B5E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001022")]
	[Address(RVA = "0x62898E0", Offset = "0x62888E0", VA = "0x62898E0")]
	public SearchPattern2(string pattern)
	{
	}

	[Token(Token = "0x6001023")]
	[Address(RVA = "0x628B160", Offset = "0x628A160", VA = "0x628B160")]
	public SearchPattern2(string pattern, bool ignore)
	{
	}

	[Token(Token = "0x6001025")]
	[Address(RVA = "0x628B1A0", Offset = "0x628A1A0", VA = "0x628B1A0")]
	private void Compile(string pattern)
	{
	}
}
