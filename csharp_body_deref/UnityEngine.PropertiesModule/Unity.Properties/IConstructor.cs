// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.IConstructor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000032")]
internal interface IConstructor
{
	[Token(Token = "0x1700002B")]
	InstantiationKind InstantiationKind
	{
		[Token(Token = "0x6000161")]
		get;
	}
}
[Token(Token = "0x2000033")]
internal interface IConstructor<out T> : IConstructor
{
	[Token(Token = "0x6000162")]
	T Instantiate();
}
