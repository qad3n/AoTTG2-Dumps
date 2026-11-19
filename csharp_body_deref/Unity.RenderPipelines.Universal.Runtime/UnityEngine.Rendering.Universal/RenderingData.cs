// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RenderingData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001E0")]
public struct RenderingData
{
	[Token(Token = "0x4000A59")]
	[FieldOffset(Offset = "0x0")]
	internal ContextContainer frameData;

	[Token(Token = "0x4000A5A")]
	[FieldOffset(Offset = "0x8")]
	public CameraData cameraData;

	[Token(Token = "0x4000A5B")]
	[FieldOffset(Offset = "0x10")]
	public LightData lightData;

	[Token(Token = "0x4000A5C")]
	[FieldOffset(Offset = "0x18")]
	public ShadowData shadowData;

	[Token(Token = "0x4000A5D")]
	[FieldOffset(Offset = "0x20")]
	public PostProcessingData postProcessingData;

	[Token(Token = "0x17000276")]
	internal UniversalRenderingData universalRenderingData
	{
		[Token(Token = "0x6000A84")]
		[Address(RVA = "0x66AE440", Offset = "0x66AD440", VA = "0x66AE440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000277")]
	public unsafe ref CullingResults cullResults
	{
		[Token(Token = "0x6000A85")]
		[Address(RVA = "0x66AE480", Offset = "0x66AD480", VA = "0x66AE480")]
		get
		{
			return ref *(CullingResults*)null;
		}
	}

	[Token(Token = "0x17000278")]
	public unsafe ref bool supportsDynamicBatching
	{
		[Token(Token = "0x6000A86")]
		[Address(RVA = "0x66AE4D0", Offset = "0x66AD4D0", VA = "0x66AE4D0")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000279")]
	public unsafe ref PerObjectData perObjectData
	{
		[Token(Token = "0x6000A87")]
		[Address(RVA = "0x66AE520", Offset = "0x66AD520", VA = "0x66AE520")]
		get
		{
			return ref *(PerObjectData*)null;
		}
	}

	[Token(Token = "0x1700027A")]
	public unsafe ref bool postProcessingEnabled
	{
		[Token(Token = "0x6000A88")]
		[Address(RVA = "0x66AE570", Offset = "0x66AD570", VA = "0x66AE570")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x6000A83")]
	[Address(RVA = "0x66AE380", Offset = "0x66AD380", VA = "0x66AE380")]
	internal RenderingData(ContextContainer frameData)
	{
	}
}
