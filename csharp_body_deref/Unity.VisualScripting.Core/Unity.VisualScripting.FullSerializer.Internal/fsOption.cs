using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer.Internal;

[Token(Token = "0x200021B")]
public struct fsOption<T>
{
	[Token(Token = "0x40009D8")]
	[FieldOffset(Offset = "0x0")]
	private bool _hasValue;

	[Token(Token = "0x40009D9")]
	[FieldOffset(Offset = "0x0")]
	private T _value;

	[Token(Token = "0x40009DA")]
	[FieldOffset(Offset = "0x0")]
	public static fsOption<T> Empty;

	[Token(Token = "0x17000219")]
	public bool HasValue
	{
		[Token(Token = "0x60012EA")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700021A")]
	public bool IsEmpty
	{
		[Token(Token = "0x60012EB")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700021B")]
	public T Value
	{
		[Token(Token = "0x60012EC")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x60012ED")]
	public fsOption(T value)
	{
	}
}
[Token(Token = "0x200021C")]
public static class fsOption
{
	[Token(Token = "0x60012EE")]
	public static fsOption<T> Just<T>(T value)
	{
		return default(fsOption<T>);
	}
}
