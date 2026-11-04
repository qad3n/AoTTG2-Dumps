// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.URPLightShadowCullingInfos
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001A7")]
internal struct URPLightShadowCullingInfos
{
	[Token(Token = "0x400092E")]
	[FieldOffset(Offset = "0x0")]
	public NativeArray<ShadowSliceData> slices;

	[Token(Token = "0x400092F")]
	[FieldOffset(Offset = "0x10")]
	public uint slicesValidMask;

	[Token(Token = "0x600091F")]
	[Address(RVA = "0x2CA2C10", Offset = "0x2CA1210", VA = "0x182CA2C10")]
	public readonly bool IsSliceValid(int i)
	{
		return default(bool);
	}
}
