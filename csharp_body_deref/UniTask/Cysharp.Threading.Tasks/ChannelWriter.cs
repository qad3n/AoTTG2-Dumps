using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000021")]
public abstract class ChannelWriter<T>
{
	[Token(Token = "0x60000B7")]
	public abstract bool TryWrite(T item);

	[Token(Token = "0x60000B8")]
	public abstract bool TryComplete([Optional] Exception error);

	[Token(Token = "0x60000B9")]
	public void Complete([Optional] Exception error)
	{
	}

	[Token(Token = "0x60000BA")]
	protected ChannelWriter()
	{
	}
}
