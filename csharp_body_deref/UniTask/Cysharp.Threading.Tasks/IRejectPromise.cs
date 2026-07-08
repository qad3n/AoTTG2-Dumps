using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200011A")]
public interface IRejectPromise
{
	[Token(Token = "0x60006CF")]
	bool TrySetException(Exception exception);
}
