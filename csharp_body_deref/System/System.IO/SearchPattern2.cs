// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.SearchPattern2
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200028C")]
internal class SearchPattern2
{
	[Token(Token = "0x200028D")]
	private class Op
	{
		[Token(Token = "0x400090E")]
		[FieldOffset(Offset = "0x10")]
		public OpCode Code;

		[Token(Token = "0x400090F")]
		[FieldOffset(Offset = "0x18")]
		public string Argument;

		[Token(Token = "0x4000910")]
		[FieldOffset(Offset = "0x20")]
		public Op Next;

		[Token(Token = "0x60011E7")]
		[Address(RVA = "0x2904D90", Offset = "0x2903390", VA = "0x182904D90")]
		public Op(OpCode code)
		{
		}
	}

	[Token(Token = "0x200028E")]
	private enum OpCode
	{
		[Token(Token = "0x4000912")]
		ExactString,
		[Token(Token = "0x4000913")]
		AnyChar,
		[Token(Token = "0x4000914")]
		AnyString,
		[Token(Token = "0x4000915")]
		End,
		[Token(Token = "0x4000916")]
		True
	}

	[Token(Token = "0x4000908")]
	[FieldOffset(Offset = "0x10")]
	private Op ops;

	[Token(Token = "0x4000909")]
	[FieldOffset(Offset = "0x18")]
	private bool ignore;

	[Token(Token = "0x400090A")]
	[FieldOffset(Offset = "0x19")]
	private bool hasWildcard;

	[Token(Token = "0x400090B")]
	[FieldOffset(Offset = "0x20")]
	private string pattern;

	[Token(Token = "0x400090C")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly char[] WildcardChars;

	[Token(Token = "0x400090D")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly char[] InvalidChars;

	[Token(Token = "0x170003AB")]
	public bool HasWildcard
	{
		[Token(Token = "0x60011E4")]
		[Address(RVA = "0xE8F450", Offset = "0xE8DA50", VA = "0x180E8F450")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60011E2")]
	[Address(RVA = "0x29055A0", Offset = "0x2903BA0", VA = "0x1829055A0")]
	public SearchPattern2(string pattern)
	{
	}

	[Token(Token = "0x60011E3")]
	[Address(RVA = "0x2905550", Offset = "0x2903B50", VA = "0x182905550")]
	public SearchPattern2(string pattern, bool ignore)
	{
	}

	[Token(Token = "0x60011E5")]
	[Address(RVA = "0x2905090", Offset = "0x2903690", VA = "0x182905090")]
	private void Compile(string pattern)
	{
	}
}
