// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.Sources.IValueTaskSource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks.Sources;

[Token(Token = "0x200026E")]
public interface IValueTaskSource
{
	[Token(Token = "0x600154A")]
	ValueTaskSourceStatus GetStatus(short token);

	[Token(Token = "0x600154B")]
	void OnCompleted(Action<object> continuation, object state, short token, ValueTaskSourceOnCompletedFlags flags);

	[Token(Token = "0x600154C")]
	void GetResult(short token);
}
[Token(Token = "0x200026F")]
public interface IValueTaskSource<out TResult>
{
	[Token(Token = "0x600154D")]
	ValueTaskSourceStatus GetStatus(short token);

	[Token(Token = "0x600154E")]
	void OnCompleted(Action<object> continuation, object state, short token, ValueTaskSourceOnCompletedFlags flags);

	[Token(Token = "0x600154F")]
	TResult GetResult(short token);
}
