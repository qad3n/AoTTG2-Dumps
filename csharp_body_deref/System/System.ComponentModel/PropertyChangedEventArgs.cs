using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002EB")]
public class PropertyChangedEventArgs : EventArgs
{
	[Token(Token = "0x4000E28")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _propertyName;

	[Token(Token = "0x17000437")]
	public virtual string PropertyName
	{
		[Token(Token = "0x60012D9")]
		[Address(RVA = "0x4587A40", Offset = "0x4587A40", VA = "0x4587A40", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012D8")]
	[Address(RVA = "0x45879D0", Offset = "0x45879D0", VA = "0x45879D0")]
	public PropertyChangedEventArgs(string propertyName)
	{
	}
}
