// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ShadowCastersCullingInfos
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003A8")]
public struct ShadowCastersCullingInfos
{
	[Token(Token = "0x4000B88")]
	[FieldOffset(Offset = "0x0")]
	public NativeArray<ShadowSplitData> splitBuffer;

	[Token(Token = "0x4000B89")]
	[FieldOffset(Offset = "0x10")]
	public NativeArray<LightShadowCasterCullingInfo> perLightInfos;
}
