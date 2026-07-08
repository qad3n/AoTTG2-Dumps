using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x2000478")]
public interface ICriticalNotifyCompletion : INotifyCompletion
{
	[Token(Token = "0x600227C")]
	void UnsafeOnCompleted(Action continuation);
}
