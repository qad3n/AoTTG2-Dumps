// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Channel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200001A")]
public static class Channel
{
	[Token(Token = "0x60000A3")]
	public static Channel<T> CreateSingleConsumerUnbounded<T>()
	{
		return null;
	}
}
[Token(Token = "0x200001B")]
public abstract class Channel<TWrite, TRead>
{
	[Token(Token = "0x17000015")]
	public ChannelReader<TRead> Reader
	{
		[Token(Token = "0x60000A4")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000A5")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public ChannelWriter<TWrite> Writer
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

	[Token(Token = "0x60000A8")]
	public static implicit operator ChannelReader<TRead>(Channel<TWrite, TRead> channel)
	{
		return null;
	}

	[Token(Token = "0x60000A9")]
	public static implicit operator ChannelWriter<TWrite>(Channel<TWrite, TRead> channel)
	{
		return null;
	}

	[Token(Token = "0x60000AA")]
	protected Channel()
	{
	}
}
[Token(Token = "0x200001C")]
public abstract class Channel<T> : Channel<T, T>
{
	[Token(Token = "0x60000AB")]
	protected Channel()
	{
	}
}
