using System.Runtime.InteropServices;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200011B")]
public interface ICancelPromise
{
	[Token(Token = "0x60006D0")]
	bool TrySetCanceled([Optional] CancellationToken cancellationToken);
}
