using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x2000257")]
public class StrongBox<T> : IStrongBox
{
	[Token(Token = "0x400044A")]
	[FieldOffset(Offset = "0x0")]
	public T Value;

	[Token(Token = "0x1700025C")]
	private object System_002ERuntime_002ECompilerServices_002EIStrongBox_002EValue
	{
		[Token(Token = "0x6000BA2")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000BA3")]
		set
		{
		}
	}

	[Token(Token = "0x6000BA0")]
	public StrongBox()
	{
	}

	[Token(Token = "0x6000BA1")]
	public StrongBox(T value)
	{
	}
}
