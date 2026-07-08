using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000171")]
public interface IAsyncEndTextSelectionEventHandler<T> : IDisposable
{
	[Token(Token = "0x60008DE")]
	UniTask<T> OnEndTextSelectionAsync();
}
