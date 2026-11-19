// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.LightData
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x66AE5D0", Offset = "0x66AD5D0", VA = "0x66AE5D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027C")]
	public unsafe ref int mainLightIndex
	{
		[Token(Token = "0x6000A8B")]
		[Address(RVA = "0x66AE610", Offset = "0x66AD610", VA = "0x66AE610")]
		get
		{
			return ref *(int*)null;
		}
	}

	[Token(Token = "0x1700027D")]
	public unsafe ref int additionalLightsCount
	{
		[Token(Token = "0x6000A8C")]
		[Address(RVA = "0x66AE660", Offset = "0x66AD660", VA = "0x66AE660")]
		get
		{
			return ref *(int*)null;
		}
	}

	[Token(Token = "0x1700027E")]
	public unsafe ref int maxPerObjectAdditionalLightsCount
	{
		[Token(Token = "0x6000A8D")]
		[Address(RVA = "0x66AE6B0", Offset = "0x66AD6B0", VA = "0x66AE6B0")]
		get
		{
			return ref *(int*)null;
		}
	}

	[Token(Token = "0x1700027F")]
	public unsafe ref NativeArray<VisibleLight> visibleLights
	{
		[Token(Token = "0x6000A8E")]
		[Address(RVA = "0x66AE700", Offset = "0x66AD700", VA = "0x66AE700")]
		get
		{
			return ref *(NativeArray<VisibleLight>*)null;
		}
	}

	[Token(Token = "0x17000280")]
	public unsafe ref bool shadeAdditionalLightsPerVertex
	{
		[Token(Token = "0x6000A8F")]
		[Address(RVA = "0x66AE750", Offset = "0x66AD750", VA = "0x66AE750")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000281")]
	public unsafe ref bool supportsMixedLighting
	{
		[Token(Token = "0x6000A90")]
		[Address(RVA = "0x66AE7A0", Offset = "0x66AD7A0", VA = "0x66AE7A0")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000282")]
	public unsafe ref bool reflectionProbeBoxProjection
	{
		[Token(Token = "0x6000A91")]
		[Address(RVA = "0x66AE7F0", Offset = "0x66AD7F0", VA = "0x66AE7F0")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000283")]
	public unsafe ref bool reflectionProbeBlending
	{
		[Token(Token = "0x6000A92")]
		[Address(RVA = "0x66AE840", Offset = "0x66AD840", VA = "0x66AE840")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000284")]
	public unsafe ref bool reflectionProbeAtlas
	{
		[Token(Token = "0x6000A93")]
		[Address(RVA = "0x66AE890", Offset = "0x66AD890", VA = "0x66AE890")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000285")]
	public unsafe ref bool supportsLightLayers
	{
		[Token(Token = "0x6000A94")]
		[Address(RVA = "0x66AE8E0", Offset = "0x66AD8E0", VA = "0x66AE8E0")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000286")]
	public unsafe ref bool supportsAdditionalLights
	{
		[Token(Token = "0x6000A95")]
		[Address(RVA = "0x66AE930", Offset = "0x66AD930", VA = "0x66AE930")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x66AE5C0", Offset = "0x66AD5C0", VA = "0x66AE5C0")]
	internal LightData(ContextContainer frameData)
	{
	}
}
