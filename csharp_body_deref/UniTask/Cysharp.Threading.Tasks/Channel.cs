using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200001C")]
public static class Channel
{
	[Token(Token = "0x60000A5")]
	public static Channel<T> CreateSingleConsumerUnbounded<T>()
	{
		return null;
	}
}
[Token(Token = "0x200001D")]
public abstract class Channel<TWrite, TRead>
{
	[Token(Token = "0x17000015")]
	public ChannelReader<TRead> Reader
	{
		[Token(Token = "0x60000A6")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000A7")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public ChannelWriter<TWrite> Writer
	{
		[Token(Token = "0x60000A8")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000A9")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x60000AA")]
	public static implicit operator ChannelReader<TRead>(Channel<TWrite, TRead> channel)
	{
		return null;
	}

	[Token(Token = "0x60000AB")]
	public static implicit operator ChannelWriter<TWrite>(Channel<TWrite, TRead> channel)
	{
		return null;
	}

	[Token(Token = "0x60000AC")]
	protected Channel()
	{
	}
}
[Token(Token = "0x200001E")]
public abstract class Channel<T> : Channel<T, T>
{
	[Token(Token = "0x60000AD")]
	protected Channel()
	{
	}
}
