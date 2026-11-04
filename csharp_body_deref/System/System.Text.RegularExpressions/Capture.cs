// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.Capture
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000DC")]
public class Capture
{
	[Token(Token = "0x170000BB")]
	public int Index
	{
		[Token(Token = "0x6000468")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000469")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		private protected set
		{
		}
	}

	[Token(Token = "0x170000BC")]
	public int Length
	{
		[Token(Token = "0x600046A")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600046B")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		[CompilerGenerated]
		private protected set
		{
		}
	}

	[Token(Token = "0x170000BD")]
	internal string Text
	{
		[Token(Token = "0x600046C")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600046D")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		private protected set
		{
		}
	}

	[Token(Token = "0x170000BE")]
	public string Value
	{
		[Token(Token = "0x600046E")]
		[Address(RVA = "0x2849890", Offset = "0x2847E90", VA = "0x182849890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x28498F0", Offset = "0x2847EF0", VA = "0x1828498F0")]
	internal Capture(string text, int index, int length)
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x2849890", Offset = "0x2847E90", VA = "0x182849890", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x2849720", Offset = "0x2847D20", VA = "0x182849720")]
	internal ReadOnlySpan<char> GetLeftSubstring()
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x28497C0", Offset = "0x2847DC0", VA = "0x1828497C0")]
	internal ReadOnlySpan<char> GetRightSubstring()
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x28498C0", Offset = "0x2847EC0", VA = "0x1828498C0")]
	internal Capture()
	{
	}
}
