using Il2CppDummyDll;

namespace Newtonsoft.Json;

[Token(Token = "0x2000015")]
public interface IArrayPool<T> where T : notnull
{
	[Token(Token = "0x6000015")]
	T[] Rent(int minimumLength);

	[Token(Token = "0x6000016")]
	void Return(T[]? array);
}
