// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ShadowCastersCullingInfos
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x200037C")]
public struct ShadowCastersCullingInfos
{
	[Token(Token = "0x4000A68")]
	[FieldOffset(Offset = "0x0")]
	public NativeArray<ShadowSplitData> splitBuffer;

	[Token(Token = "0x4000A69")]
	[FieldOffset(Offset = "0x10")]
	public NativeArray<LightShadowCasterCullingInfo> perLightInfos;
}
