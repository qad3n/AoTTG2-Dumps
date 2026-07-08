using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000173")]
public interface IAsyncDeselectEventHandler<T> : IDisposable
{
	[Token(Token = "0x60008E0")]
	UniTask<T> OnDeselectAsync();
}
