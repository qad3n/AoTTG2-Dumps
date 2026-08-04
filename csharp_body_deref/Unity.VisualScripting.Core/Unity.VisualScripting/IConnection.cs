// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.IConnection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000032")]
public interface IConnection<out TSource, out TDestination>
{
	[Token(Token = "0x17000055")]
	TSource source
	{
		[Token(Token = "0x60001C1")]
		get;
	}

	[Token(Token = "0x17000056")]
	TDestination destination
	{
		[Token(Token = "0x60001C2")]
		get;
	}
}
