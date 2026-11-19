// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.GeometryPoolEntryInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x200002C")]
internal struct GeometryPoolEntryInfo
{
	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x0")]
	public bool valid;

	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0x4")]
	public uint refCount;

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x6780970", Offset = "0x677F970", VA = "0x6780970")]
	public static GeometryPoolEntryInfo NewDefault()
	{
		return default(GeometryPoolEntryInfo);
	}
}
