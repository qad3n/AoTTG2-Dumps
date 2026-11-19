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
		[Address(RVA = "0x61DDE30", Offset = "0x61DCE30", VA = "0x61DDE30")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002B5")]
		[Address(RVA = "0x61DDE40", Offset = "0x61DCE40", VA = "0x61DDE40")]
		[CompilerGenerated]
		private protected set
		{
		}
	}

	[Token(Token = "0x1700008D")]
	public int Length
	{
		[Token(Token = "0x60002B6")]
		[Address(RVA = "0x61DDE50", Offset = "0x61DCE50", VA = "0x61DDE50")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002B7")]
		[Address(RVA = "0x61DDE60", Offset = "0x61DCE60", VA = "0x61DDE60")]
		[CompilerGenerated]
		private protected set
		{
		}
	}

	[Token(Token = "0x1700008E")]
	internal string Text
	{
		[Token(Token = "0x60002B8")]
		[Address(RVA = "0x61DDE70", Offset = "0x61DCE70", VA = "0x61DDE70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002B9")]
		[Address(RVA = "0x61DDE80", Offset = "0x61DCE80", VA = "0x61DDE80")]
		[CompilerGenerated]
		private protected set
		{
		}
	}

	[Token(Token = "0x1700008F")]
	public string Value
	{
		[Token(Token = "0x60002BA")]
		[Address(RVA = "0x61DDE90", Offset = "0x61DCE90", VA = "0x61DDE90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x61DDDF0", Offset = "0x61DCDF0", VA = "0x61DDDF0")]
	internal Capture(string text, int index, int length)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x61DDEB0", Offset = "0x61DCEB0", VA = "0x61DDEB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x61DDED0", Offset = "0x61DCED0", VA = "0x61DDED0")]
	internal ReadOnlySpan<char> GetLeftSubstring()
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x61DDF40", Offset = "0x61DCF40", VA = "0x61DDF40")]
	internal ReadOnlySpan<char> GetRightSubstring()
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x61DDFC0", Offset = "0x61DCFC0", VA = "0x61DDFC0")]
	internal Capture()
	{
	}
}
