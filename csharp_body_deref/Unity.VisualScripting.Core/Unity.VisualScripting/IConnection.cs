using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000032")]
public interface IConnection<out TSource, out TDestination>
{
	[Token(Token = "0x17000055")]
	TSource source
	{
		[Token(Token = "0x60001C1")]
		get;
	}

	[Token(Token = "0x17000056")]
	TDestination destination
	{
		[Token(Token = "0x60001C2")]
		get;
	}
}
