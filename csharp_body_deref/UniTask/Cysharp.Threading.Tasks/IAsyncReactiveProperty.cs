using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000008")]
public interface IAsyncReactiveProperty<T> : IReadOnlyAsyncReactiveProperty<T>, IUniTaskAsyncEnumerable<T>
{
	[Token(Token = "0x17000005")]
	new T Value
	{
		[Token(Token = "0x600001A")]
		get;
		[Token(Token = "0x600001B")]
		set;
	}
}
