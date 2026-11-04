// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderingData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000D7")]
public class UniversalRenderingData : ContextItem
{
	[Token(Token = "0x40004E4")]
	[FieldOffset(Offset = "0x10")]
	public CullingResults cullResults;

	[Token(Token = "0x40004E5")]
	[FieldOffset(Offset = "0x20")]
	public bool supportsDynamicBatching;

	[Token(Token = "0x40004E6")]
	[FieldOffset(Offset = "0x24")]
	public PerObjectData perObjectData;

	[Token(Token = "0x17000192")]
	public RenderingMode renderingMode
	{
		[Token(Token = "0x60005B2")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		[CompilerGenerated]
		get
		{
			return default(RenderingMode);
		}
		[Token(Token = "0x60005B3")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000193")]
	public LayerMask prepassLayerMask
	{
		[Token(Token = "0x60005B4")]
		[Address(RVA = "0xB3E080", Offset = "0xB3C680", VA = "0x180B3E080")]
		[CompilerGenerated]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x60005B5")]
		[Address(RVA = "0xB3E0E0", Offset = "0xB3C6E0", VA = "0x180B3E0E0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000194")]
	public LayerMask opaqueLayerMask
	{
		[Token(Token = "0x60005B6")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		[CompilerGenerated]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x60005B7")]
		[Address(RVA = "0x1826560", Offset = "0x1824B60", VA = "0x181826560")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000195")]
	public LayerMask transparentLayerMask
	{
		[Token(Token = "0x60005B8")]
		[Address(RVA = "0x16EF8A0", Offset = "0x16EDEA0", VA = "0x1816EF8A0")]
		[CompilerGenerated]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x60005B9")]
		[Address(RVA = "0x16EFA10", Offset = "0x16EE010", VA = "0x1816EFA10")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000196")]
	public bool stencilLodCrossFadeEnabled
	{
		[Token(Token = "0x60005BA")]
		[Address(RVA = "0xF1D190", Offset = "0xF1B790", VA = "0x180F1D190")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005BB")]
		[Address(RVA = "0xF1D640", Offset = "0xF1BC40", VA = "0x180F1D640")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x2C4FDE0", Offset = "0x2C4E3E0", VA = "0x182C4FDE0", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public UniversalRenderingData()
	{
	}
}
