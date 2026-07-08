using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002ED")]
public class PropertyChangingEventArgs : EventArgs
{
	[Token(Token = "0x4000E29")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _propertyName;

	[Token(Token = "0x17000438")]
	public virtual string PropertyName
	{
		[Token(Token = "0x60012DF")]
		[Address(RVA = "0x4587C20", Offset = "0x4587C20", VA = "0x4587C20", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012DE")]
	[Address(RVA = "0x4587BB0", Offset = "0x4587BB0", VA = "0x4587BB0")]
	public PropertyChangingEventArgs(string propertyName)
	{
	}
}
