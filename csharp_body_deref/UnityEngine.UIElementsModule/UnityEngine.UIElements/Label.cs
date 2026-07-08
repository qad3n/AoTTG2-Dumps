using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000BB")]
public class Label : TextElement
{
	[Token(Token = "0x20000BC")]
	public new class UxmlFactory : UxmlFactory<Label, UxmlTraits>
	{
		[Token(Token = "0x6000535")]
		[Address(RVA = "0x4C21580", Offset = "0x4C21580", VA = "0x4C21580")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000BD")]
	public new class UxmlTraits : TextElement.UxmlTraits
	{
		[Token(Token = "0x6000536")]
		[Address(RVA = "0x4C215C0", Offset = "0x4C215C0", VA = "0x4C215C0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000307")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x4C21500", Offset = "0x4C21500", VA = "0x4C21500")]
	public Label()
	{
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x4C16420", Offset = "0x4C16420", VA = "0x4C16420")]
	public Label(string text)
	{
	}
}
