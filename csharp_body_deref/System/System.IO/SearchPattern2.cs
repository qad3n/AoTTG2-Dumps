using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200036B")]
internal class SearchPattern2
{
	[Token(Token = "0x200036C")]
	private class Op
	{
		[Token(Token = "0x4000F96")]
		[FieldOffset(Offset = "0x10")]
		public OpCode Code;

		[Token(Token = "0x4000F97")]
		[FieldOffset(Offset = "0x18")]
		public string Argument;

		[Token(Token = "0x4000F98")]
		[FieldOffset(Offset = "0x20")]
		public Op Next;

		[Token(Token = "0x60016E3")]
		[Address(RVA = "0x45CA150", Offset = "0x45CA150", VA = "0x45CA150")]
		public Op(OpCode code)
		{
		}
	}

	[Token(Token = "0x200036D")]
	private enum OpCode
	{
		[Token(Token = "0x4000F9A")]
		ExactString,
		[Token(Token = "0x4000F9B")]
		AnyChar,
		[Token(Token = "0x4000F9C")]
		AnyString,
		[Token(Token = "0x4000F9D")]
		End,
		[Token(Token = "0x4000F9E")]
		True
	}

	[Token(Token = "0x4000F90")]
	[FieldOffset(Offset = "0x10")]
	private Op ops;

	[Token(Token = "0x4000F91")]
	[FieldOffset(Offset = "0x18")]
	private bool ignore;

	[Token(Token = "0x4000F92")]
	[FieldOffset(Offset = "0x19")]
	private bool hasWildcard;

	[Token(Token = "0x4000F93")]
	[FieldOffset(Offset = "0x20")]
	private string pattern;

	[Token(Token = "0x4000F94")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly char[] WildcardChars;

	[Token(Token = "0x4000F95")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly char[] InvalidChars;

	[Token(Token = "0x1700050B")]
	public bool HasWildcard
	{
		[Token(Token = "0x60016E0")]
		[Address(RVA = "0x45CA140", Offset = "0x45CA140", VA = "0x45CA140")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60016DE")]
	[Address(RVA = "0x45C8510", Offset = "0x45C8510", VA = "0x45C8510")]
	public SearchPattern2(string pattern)
	{
	}

	[Token(Token = "0x60016DF")]
	[Address(RVA = "0x45C9D10", Offset = "0x45C9D10", VA = "0x45C9D10")]
	public SearchPattern2(string pattern, bool ignore)
	{
	}

	[Token(Token = "0x60016E1")]
	[Address(RVA = "0x45C9D50", Offset = "0x45C9D50", VA = "0x45C9D50")]
	private void Compile(string pattern)
	{
	}
}
