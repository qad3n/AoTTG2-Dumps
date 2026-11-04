// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Internal.PooledDelegate
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x2000233")]
internal sealed class PooledDelegate<T> : ITaskPoolNode<PooledDelegate<T>>
{
	[Token(Token = "0x4000679")]
	[FieldOffset(Offset = "0x0")]
	private static TaskPool<PooledDelegate<T>> pool;

	[Token(Token = "0x400067A")]
	[FieldOffset(Offset = "0x0")]
	private PooledDelegate<T> nextNode;

	[Token(Token = "0x400067B")]
	[FieldOffset(Offset = "0x0")]
	private readonly Action<T> runDelegate;

	[Token(Token = "0x400067C")]
	[FieldOffset(Offset = "0x0")]
	private Action continuation;

	[Token(Token = "0x17000078")]
	public unsafe ref PooledDelegate<T> NextNode
	{
		[Token(Token = "0x6000CE8")]
		get
		{
			return ref *(PooledDelegate<T>*)null;
		}
	}

	[Token(Token = "0x6000CE9")]
	static PooledDelegate()
	{
	}

	[Token(Token = "0x6000CEA")]
	private PooledDelegate()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CEB")]
	public static Action<T> Create(Action continuation)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CEC")]
	private void Run(T _)
	{
	}
}
