// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.AsyncLocal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001F2")]
public sealed class AsyncLocal<T> : System.Threading.IAsyncLocal
{
	[Token(Token = "0x400098B")]
	[FieldOffset(Offset = "0x0")]
	private readonly Action<AsyncLocalValueChangedArgs<T>> m_valueChangedHandler;

	[Token(Token = "0x17000199")]
	public T Value
	{
		[Token(Token = "0x60011B2")]
		set
		{
		}
	}

	[Token(Token = "0x60011B1")]
	public AsyncLocal(Action<AsyncLocalValueChangedArgs<T>> valueChangedHandler)
	{
	}

	[Token(Token = "0x60011B3")]
	private void System_002EThreading_002EIAsyncLocal_002EOnValueChanged(object previousValueObj, object currentValueObj, bool contextChanged)
	{
	}
}
