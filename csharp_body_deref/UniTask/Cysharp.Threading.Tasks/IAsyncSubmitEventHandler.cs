using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000175")]
public interface IAsyncSubmitEventHandler<T> : IDisposable
{
	[Token(Token = "0x60008E2")]
	UniTask<T> OnSubmitAsync();
}
