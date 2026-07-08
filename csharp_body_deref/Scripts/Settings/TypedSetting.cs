using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000C2")]
internal abstract class TypedSetting<T> : BaseSetting
{
	[Token(Token = "0x400048F")]
	[FieldOffset(Offset = "0x0")]
	protected T DefaultValue;

	[Token(Token = "0x4000490")]
	[FieldOffset(Offset = "0x0")]
	protected T _value;

	[Token(Token = "0x170000A0")]
	public T Value
	{
		[Token(Token = "0x60003F5")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x60003F6")]
		set
		{
		}
	}

	[Token(Token = "0x60003F7")]
	public TypedSetting()
	{
	}

	[Token(Token = "0x60003F8")]
	public TypedSetting(T defaultValue)
	{
	}

	[Token(Token = "0x60003F9")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x60003FA")]
	protected virtual T SanitizeValue(T value)
	{
		return (T)null;
	}

	[Token(Token = "0x60003FB")]
	public override string ToString()
	{
		return null;
	}
}
