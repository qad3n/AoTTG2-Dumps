// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Bindings.ManagedSpanWrapper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x2000242")]
[UnityEngine.Bindings.VisibleToOtherModules]
internal readonly ref struct ManagedSpanWrapper
{
	[Token(Token = "0x4000748")]
	[FieldOffset(Offset = "0x0")]
	public unsafe readonly void* begin;

	[Token(Token = "0x4000749")]
	[FieldOffset(Offset = "0x8")]
	public readonly int length;

	[Token(Token = "0x6001194")]
	[Address(RVA = "0x69280A0", Offset = "0x69270A0", VA = "0x69280A0")]
	public unsafe ManagedSpanWrapper(void* begin, int length)
	{
	}
}
