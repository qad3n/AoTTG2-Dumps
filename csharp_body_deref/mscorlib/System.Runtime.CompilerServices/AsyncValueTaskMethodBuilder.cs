// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000465")]
public struct AsyncValueTaskMethodBuilder
{
	[Token(Token = "0x40012F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private AsyncTaskMethodBuilder _methodBuilder;

	[Token(Token = "0x40012F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool _haveResult;

	[Token(Token = "0x40012F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19")]
	private bool _useBuilder;
}
[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000466")]
public struct AsyncValueTaskMethodBuilder<TResult>
{
	[Token(Token = "0x40012F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private AsyncTaskMethodBuilder<TResult> _methodBuilder;

	[Token(Token = "0x40012F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private TResult _result;

	[Token(Token = "0x40012F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private bool _haveResult;

	[Token(Token = "0x40012F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private bool _useBuilder;

	[Token(Token = "0x17000467")]
	public ValueTask<TResult> Task
	{
		[Token(Token = "0x6002255")]
		get
		{
			return default(ValueTask<TResult>);
		}
	}

	[Token(Token = "0x6002250")]
	public static AsyncValueTaskMethodBuilder<TResult> Create()
	{
		return default(AsyncValueTaskMethodBuilder<TResult>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002251")]
	public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x6002252")]
	public void SetStateMachine(IAsyncStateMachine stateMachine)
	{
	}

	[Token(Token = "0x6002253")]
	public void SetResult(TResult result)
	{
	}

	[Token(Token = "0x6002254")]
	public void SetException(Exception exception)
	{
	}

	[Token(Token = "0x6002256")]
	public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}
}
