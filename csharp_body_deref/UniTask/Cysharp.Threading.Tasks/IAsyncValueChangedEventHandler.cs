using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200016F")]
public interface IAsyncValueChangedEventHandler<T> : IDisposable
{
	[Token(Token = "0x60008DC")]
	UniTask<T> OnValueChangedAsync();
}
