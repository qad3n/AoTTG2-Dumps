// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.Capture
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x200009D")]
public class Capture
{
	[Token(Token = "0x1700008C")]
	public int Index
	{
		[Token(Token = "0x60002B4")]
		[Address(RVA = "0x49016A0", Offset = "0x49016A0", VA = "0x49016A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002B5")]
		[Address(RVA = "0x49016B0", Offset = "0x49016B0", VA = "0x49016B0")]
		[CompilerGenerated]
		private protected set
		{
		}
	}

	[Token(Token = "0x1700008D")]
	public int Length
	{
		[Token(Token = "0x60002B6")]
		[Address(RVA = "0x49016C0", Offset = "0x49016C0", VA = "0x49016C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002B7")]
		[Address(RVA = "0x49016D0", Offset = "0x49016D0", VA = "0x49016D0")]
		[CompilerGenerated]
		private protected set
		{
		}
	}

	[Token(Token = "0x1700008E")]
	internal string Text
	{
		[Token(Token = "0x60002B8")]
		[Address(RVA = "0x49016E0", Offset = "0x49016E0", VA = "0x49016E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002B9")]
		[Address(RVA = "0x49016F0", Offset = "0x49016F0", VA = "0x49016F0")]
		[CompilerGenerated]
		private protected set
		{
		}
	}

	[Token(Token = "0x1700008F")]
	public string Value
	{
		[Token(Token = "0x60002BA")]
		[Address(RVA = "0x4901700", Offset = "0x4901700", VA = "0x4901700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x4901660", Offset = "0x4901660", VA = "0x4901660")]
	internal Capture(string text, int index, int length)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x4901720", Offset = "0x4901720", VA = "0x4901720", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x4901740", Offset = "0x4901740", VA = "0x4901740")]
	internal ReadOnlySpan<char> GetLeftSubstring()
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x49017B0", Offset = "0x49017B0", VA = "0x49017B0")]
	internal ReadOnlySpan<char> GetRightSubstring()
	{
		return default(ReadOnlySpan<char>);
	}
}
