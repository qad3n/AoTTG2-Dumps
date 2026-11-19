// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LightShadowCasterCullingInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200037B")]
public struct LightShadowCasterCullingInfo
{
	[Token(Token = "0x4000A65")]
	[FieldOffset(Offset = "0x0")]
	public RangeInt splitRange;

	[Token(Token = "0x4000A66")]
	[FieldOffset(Offset = "0x8")]
	public BatchCullingProjectionType projectionType;

	[Token(Token = "0x4000A67")]
	[FieldOffset(Offset = "0xC")]
	public ushort splitExclusionMask;
}
