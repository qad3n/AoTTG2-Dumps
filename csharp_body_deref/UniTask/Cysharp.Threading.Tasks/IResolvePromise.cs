using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000118")]
public interface IResolvePromise
{
	[Token(Token = "0x60006CD")]
	bool TrySetResult();
}
[Token(Token = "0x2000119")]
public interface IResolvePromise<T>
{
	[Token(Token = "0x60006CE")]
	bool TrySetResult(T value);
}
