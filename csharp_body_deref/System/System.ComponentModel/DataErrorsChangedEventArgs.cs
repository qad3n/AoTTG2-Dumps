using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002E7")]
public class DataErrorsChangedEventArgs : EventArgs
{
	[Token(Token = "0x4000E27")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _propertyName;

	[Token(Token = "0x17000435")]
	public virtual string PropertyName
	{
		[Token(Token = "0x60012CF")]
		[Address(RVA = "0x45879C0", Offset = "0x45879C0", VA = "0x45879C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012CE")]
	[Address(RVA = "0x4587950", Offset = "0x4587950", VA = "0x4587950")]
	public DataErrorsChangedEventArgs(string propertyName)
	{
	}
}
