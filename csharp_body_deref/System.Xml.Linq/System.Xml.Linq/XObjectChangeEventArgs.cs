using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x2000021")]
public class XObjectChangeEventArgs : EventArgs
{
	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x10")]
	private XObjectChange _objectChange;

	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x0")]
	public static readonly XObjectChangeEventArgs Add;

	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x8")]
	public static readonly XObjectChangeEventArgs Remove;

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x10")]
	public static readonly XObjectChangeEventArgs Name;

	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x18")]
	public static readonly XObjectChangeEventArgs Value;

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x43459C0", Offset = "0x43459C0", VA = "0x43459C0")]
	public XObjectChangeEventArgs(XObjectChange objectChange)
	{
	}
}
