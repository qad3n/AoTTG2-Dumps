// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalLightData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000D5")]
public class UniversalLightData : ContextItem
{
	[Token(Token = "0x40004D3")]
	[FieldOffset(Offset = "0x10")]
	public int mainLightIndex;

	[Token(Token = "0x40004D4")]
	[FieldOffset(Offset = "0x14")]
	public int additionalLightsCount;

	[Token(Token = "0x40004D5")]
	[FieldOffset(Offset = "0x18")]
	public int maxPerObjectAdditionalLightsCount;

	[Token(Token = "0x40004D6")]
	[FieldOffset(Offset = "0x20")]
	public NativeArray<VisibleLight> visibleLights;

	[Token(Token = "0x40004D7")]
	[FieldOffset(Offset = "0x30")]
	public bool shadeAdditionalLightsPerVertex;

	[Token(Token = "0x40004D8")]
	[FieldOffset(Offset = "0x31")]
	public bool supportsMixedLighting;

	[Token(Token = "0x40004D9")]
	[FieldOffset(Offset = "0x32")]
	public bool reflectionProbeBoxProjection;

	[Token(Token = "0x40004DA")]
	[FieldOffset(Offset = "0x33")]
	public bool reflectionProbeBlending;

	[Token(Token = "0x40004DB")]
	[FieldOffset(Offset = "0x34")]
	public bool reflectionProbeAtlas;

	[Token(Token = "0x40004DC")]
	[FieldOffset(Offset = "0x35")]
	public bool supportsLightLayers;

	[Token(Token = "0x40004DD")]
	[FieldOffset(Offset = "0x36")]
	public bool supportsAdditionalLights;

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x2C41AB0", Offset = "0x2C400B0", VA = "0x182C41AB0", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public UniversalLightData()
	{
	}
}
