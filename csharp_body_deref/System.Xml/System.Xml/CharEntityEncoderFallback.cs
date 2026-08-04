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
		[Address(RVA = "0x4687E30", Offset = "0x4687E30", VA = "0x4687E30", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000014")]
	internal int StartOffset
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x4687E40", Offset = "0x4687E40", VA = "0x4687E40")]
		set
		{
		}
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x4687D10", Offset = "0x4687D10", VA = "0x4687D10")]
	internal CharEntityEncoderFallback()
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x4687D20", Offset = "0x4687D20", VA = "0x4687D20", Slot = "4")]
	public override EncoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x4687E50", Offset = "0x4687E50", VA = "0x4687E50")]
	internal void Reset(int[] textContentMarks, int endMarkPos)
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x4687E80", Offset = "0x4687E80", VA = "0x4687E80")]
	internal bool CanReplaceAt(int index)
	{
		return default(bool);
	}
}
