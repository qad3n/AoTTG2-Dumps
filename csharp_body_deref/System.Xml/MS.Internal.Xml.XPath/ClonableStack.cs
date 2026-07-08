using System.Collections.Generic;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x2000293")]
internal sealed class ClonableStack<T> : List<T>
{
	[Token(Token = "0x6001AA5")]
	public ClonableStack()
	{
	}

	[Token(Token = "0x6001AA6")]
	private ClonableStack(IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x6001AA7")]
	public void Push(T value)
	{
	}

	[Token(Token = "0x6001AA8")]
	public T Pop()
	{
		return (T)null;
	}

	[Token(Token = "0x6001AA9")]
	public T Peek()
	{
		return (T)null;
	}

	[Token(Token = "0x6001AAA")]
	public ClonableStack<T> Clone()
	{
		return null;
	}
}
