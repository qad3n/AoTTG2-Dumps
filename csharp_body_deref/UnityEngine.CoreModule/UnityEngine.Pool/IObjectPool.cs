using Il2CppDummyDll;

namespace UnityEngine.Pool;

[Token(Token = "0x200028E")]
public interface IObjectPool<T> where T : class
{
	[Token(Token = "0x6000DD8")]
	void Release(T element);
}
