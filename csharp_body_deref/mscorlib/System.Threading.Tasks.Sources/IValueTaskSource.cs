using Il2CppDummyDll;

namespace System.Threading.Tasks.Sources;

[Token(Token = "0x2000266")]
public interface IValueTaskSource
{
	[Token(Token = "0x6001507")]
	ValueTaskSourceStatus GetStatus(short token);

	[Token(Token = "0x6001508")]
	void OnCompleted(Action<object> continuation, object state, short token, ValueTaskSourceOnCompletedFlags flags);

	[Token(Token = "0x6001509")]
	void GetResult(short token);
}
[Token(Token = "0x2000267")]
public interface IValueTaskSource<out TResult>
{
	[Token(Token = "0x600150A")]
	ValueTaskSourceStatus GetStatus(short token);

	[Token(Token = "0x600150B")]
	void OnCompleted(Action<object> continuation, object state, short token, ValueTaskSourceOnCompletedFlags flags);

	[Token(Token = "0x600150C")]
	TResult GetResult(short token);
}
