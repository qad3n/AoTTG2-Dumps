// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.CharEntityEncoderFallback
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200001C")]
internal class CharEntityEncoderFallback : EncoderFallback
{
	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x10")]
	private CharEntityEncoderFallbackBuffer fallbackBuffer;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x18")]
	private int[] textContentMarks;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x20")]
	private int endMarkPos;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x24")]
	private int curMarkPos;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x28")]
	private int startOffset;

	[Token(Token = "0x17000013")]
	public override int MaxCharCount
	{
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x847030", Offset = "0x845630", VA = "0x180847030", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000014")]
	internal int StartOffset
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		set
		{
		}
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	internal CharEntityEncoderFallback()
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x25D1CA0", Offset = "0x25D02A0", VA = "0x1825D1CA0", Slot = "4")]
	public override EncoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x25D1D40", Offset = "0x25D0340", VA = "0x1825D1D40")]
	internal void Reset(int[] textContentMarks, int endMarkPos)
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x25D1C40", Offset = "0x25D0240", VA = "0x1825D1C40")]
	internal bool CanReplaceAt(int index)
	{
		return default(bool);
	}
}
