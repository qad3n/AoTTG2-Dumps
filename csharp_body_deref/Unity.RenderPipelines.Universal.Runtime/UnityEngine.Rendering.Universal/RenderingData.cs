// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RenderingData
// Update status: NEW in this game update
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
		[Address(RVA = "0x2CC5FB0", Offset = "0x2CC45B0", VA = "0x182CC5FB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000277")]
	public unsafe ref CullingResults cullResults
	{
		[Token(Token = "0x6000A85")]
		[Address(RVA = "0x2CC5E70", Offset = "0x2CC4470", VA = "0x182CC5E70")]
		get
		{
			return ref *(CullingResults*)null;
		}
	}

	[Token(Token = "0x17000278")]
	public unsafe ref bool supportsDynamicBatching
	{
		[Token(Token = "0x6000A86")]
		[Address(RVA = "0x2CC5F60", Offset = "0x2CC4560", VA = "0x182CC5F60")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x17000279")]
	public unsafe ref PerObjectData perObjectData
	{
		[Token(Token = "0x6000A87")]
		[Address(RVA = "0x2CC5EC0", Offset = "0x2CC44C0", VA = "0x182CC5EC0")]
		get
		{
			return ref *(PerObjectData*)null;
		}
	}

	[Token(Token = "0x1700027A")]
	public unsafe ref bool postProcessingEnabled
	{
		[Token(Token = "0x6000A88")]
		[Address(RVA = "0x2CC5F10", Offset = "0x2CC4510", VA = "0x182CC5F10")]
		get
		{
			return ref *(bool*)null;
		}
	}

	[Token(Token = "0x6000A83")]
	[Address(RVA = "0x2CC5DB0", Offset = "0x2CC43B0", VA = "0x182CC5DB0")]
	internal RenderingData(ContextContainer frameData)
	{
	}
}
