using System.Runtime.InteropServices;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000030")]
public interface IUniTaskAsyncEnumerable<out T>
{
	[Token(Token = "0x600010A")]
	IUniTaskAsyncEnumerator<T> GetAsyncEnumerator([Optional] CancellationToken cancellationToken);
}
