// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.IAsyncReactiveProperty
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
