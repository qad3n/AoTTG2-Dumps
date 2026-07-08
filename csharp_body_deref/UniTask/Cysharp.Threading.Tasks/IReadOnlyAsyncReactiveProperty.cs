using System.Runtime.InteropServices;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000007")]
public interface IReadOnlyAsyncReactiveProperty<T> : IUniTaskAsyncEnumerable<T>
{
	[Token(Token = "0x17000004")]
	T Value
	{
		[Token(Token = "0x6000017")]
		get;
	}

	[Token(Token = "0x6000018")]
	IUniTaskAsyncEnumerable<T> WithoutCurrent();

	[Token(Token = "0x6000019")]
	UniTask<T> WaitAsync([Optional] CancellationToken cancellationToken);
}
