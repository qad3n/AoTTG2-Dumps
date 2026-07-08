using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000031")]
public interface IUniTaskAsyncEnumerator<out T> : IUniTaskAsyncDisposable
{
	[Token(Token = "0x17000023")]
	T Current
	{
		[Token(Token = "0x600010B")]
		get;
	}

	[Token(Token = "0x600010C")]
	UniTask<bool> MoveNextAsync();
}
