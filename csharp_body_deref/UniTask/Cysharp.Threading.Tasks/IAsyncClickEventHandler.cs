using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200016E")]
public interface IAsyncClickEventHandler : IDisposable
{
	[Token(Token = "0x60008DB")]
	UniTask OnClickAsync();
}
