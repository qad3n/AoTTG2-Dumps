using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000170")]
public interface IAsyncEndEditEventHandler<T> : IDisposable
{
	[Token(Token = "0x60008DD")]
	UniTask<T> OnEndEditAsync();
}
