// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.OcclusionCullingSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000031")]
public struct OcclusionCullingSettings
{
	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x0")]
	public int viewInstanceID;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x4")]
	public OcclusionTest occlusionTest;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x8")]
	public int instanceMultiplier;

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x65C1E00", Offset = "0x65C0E00", VA = "0x65C1E00")]
	public OcclusionCullingSettings(int viewInstanceID, OcclusionTest occlusionTest)
	{
	}
}
