using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001C9")]
public readonly struct AsyncLocalValueChangedArgs<T>
{
	[Token(Token = "0x400092B")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private readonly T _003CPreviousValue_003Ek__BackingField;

	[Token(Token = "0x400092D")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private readonly bool _003CThreadContextChanged_003Ek__BackingField;

	[Token(Token = "0x17000198")]
	public T CurrentValue
	{
		[Token(Token = "0x600115C")]
		[CompilerGenerated]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x600115D")]
	internal AsyncLocalValueChangedArgs(T previousValue, T currentValue, bool contextChanged)
	{
	}
}
