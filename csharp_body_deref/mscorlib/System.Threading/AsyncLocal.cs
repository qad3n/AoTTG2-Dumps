// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.AsyncLocal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001CA")]
public sealed class AsyncLocal<T> : System.Threading.IAsyncLocal
{
	[Token(Token = "0x40008E9")]
	[FieldOffset(Offset = "0x0")]
	private readonly Action<AsyncLocalValueChangedArgs<T>> m_valueChangedHandler;

	[Token(Token = "0x17000198")]
	public T Value
	{
		[Token(Token = "0x6001189")]
		set
		{
		}
	}

	[Token(Token = "0x6001188")]
	public AsyncLocal(Action<AsyncLocalValueChangedArgs<T>> valueChangedHandler)
	{
	}

	[Token(Token = "0x600118A")]
	private void System_002EThreading_002EIAsyncLocal_002EOnValueChanged(object previousValueObj, object currentValueObj, bool contextChanged)
	{
	}
}
