using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000172")]
public interface IAsyncTextSelectionEventHandler<T> : IDisposable
{
	[Token(Token = "0x60008DF")]
	UniTask<T> OnTextSelectionAsync();
}
