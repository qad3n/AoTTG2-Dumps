// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.LightData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001E1")]
public struct LightData
{
	[Token(Token = "0x4000A5E")]
	[FieldOffset(Offset = "0x0")]
	private ContextContainer frameData;

	[Token(Token = "0x1700027B")]
	internal UniversalLightData universalLightData
	{
		[Token(Token = "0x6000A8A")]
		[Address(RVA = "0x2CC4900", Offset = "0x2CC2F00", VA = "0x182CC4900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027C")]
	public unsafe ref int mainLightIndex
	{
		[Token(Token = "0x6000A8B")]
		[Address(RVA = "0x2CC4630", Offset = "0x2CC2C30", VA = "0x182CC4630")]
		get
		{
			return ref *(int*)null;
		}
	}

	[Token(Token = "0x1700027D")]
	public unsafe ref int additionalLightsCount
	{
		[Token(Token = "0x6000A8C")]
		[Address(RVA = "0x2CC45E0", Offset = "0x2CC2BE0", VA = "0x182CC45E0")]
		get
		{
			return ref *(int*)null;
		}
	}

	[Token(Token = "0x1700027E")]
	public unsafe ref int maxPerObjectAdditionalLightsCount
	{
		[Token(Token = "0x6000A8D")]
		[Address(RVA = "0x2CC4680", Offset = "0x2CC2C80", VA = "0x182CC4680")]
		get
		{
			return ref *(int*)null;
		}
	}

	[Token(Token = "0x1700027F")]
	public unsafe ref NativeArray<VisibleLight> visibleLights
	{
		[Token(Token = "0x6000A8E")]
		[Address(RVA = "0x2CC4950", Offset = "0x2CC2F50", VA = "0x182CC4950")]
		get
		{
			return ref *(NativeArray<VisibleLight>*)null;
		}
	}

	[Token(Token = "0x17000280")]
	public unsafe ref bool shadeAdditionalLightsPerVertex
	{
		[Token(Token = "0x6000A8F")]
		[Address(RVA = "0x2CC47C0", Offset = "0x2CC2DC0", VA = "0x182CC47C0")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000281")]
	public unsafe ref bool supportsMixedLighting
	{
		[Token(Token = "0x6000A90")]
		[Address(RVA = "0x2CC48B0", Offset = "0x2CC2EB0", VA = "0x182CC48B0")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000282")]
	public unsafe ref bool reflectionProbeBoxProjection
	{
		[Token(Token = "0x6000A91")]
		[Address(RVA = "0x2CC4770", Offset = "0x2CC2D70", VA = "0x182CC4770")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000283")]
	public unsafe ref bool reflectionProbeBlending
	{
		[Token(Token = "0x6000A92")]
		[Address(RVA = "0x2CC4720", Offset = "0x2CC2D20", VA = "0x182CC4720")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000284")]
	public unsafe ref bool reflectionProbeAtlas
	{
		[Token(Token = "0x6000A93")]
		[Address(RVA = "0x2CC46D0", Offset = "0x2CC2CD0", VA = "0x182CC46D0")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000285")]
	public unsafe ref bool supportsLightLayers
	{
		[Token(Token = "0x6000A94")]
		[Address(RVA = "0x2CC4860", Offset = "0x2CC2E60", VA = "0x182CC4860")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000286")]
	public unsafe ref bool supportsAdditionalLights
	{
		[Token(Token = "0x6000A95")]
		[Address(RVA = "0x2CC4810", Offset = "0x2CC2E10", VA = "0x182CC4810")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
	internal LightData(ContextContainer frameData)
	{
	}
}
