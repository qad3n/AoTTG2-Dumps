// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.AsyncLocalValueChangedArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
