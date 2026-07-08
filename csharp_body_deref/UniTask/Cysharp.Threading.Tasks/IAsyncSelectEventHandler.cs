using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000174")]
public interface IAsyncSelectEventHandler<T> : IDisposable
{
	[Token(Token = "0x60008E1")]
	UniTask<T> OnSelectAsync();
}
