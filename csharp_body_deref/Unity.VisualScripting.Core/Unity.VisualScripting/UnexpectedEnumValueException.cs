using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000067")]
public class UnexpectedEnumValueException<T> : Exception
{
	[Token(Token = "0x1700009B")]
	public T Value
	{
		[Token(Token = "0x60002BC")]
		[CompilerGenerated]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x60002BD")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60002BB")]
	public UnexpectedEnumValueException(T value)
	{
	}
}
