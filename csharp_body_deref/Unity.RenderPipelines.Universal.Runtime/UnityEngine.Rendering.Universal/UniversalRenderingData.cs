// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderingData
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6641BB0", Offset = "0x6640BB0", VA = "0x6641BB0")]
		[CompilerGenerated]
		get
		{
			return default(RenderingMode);
		}
		[Token(Token = "0x60005B3")]
		[Address(RVA = "0x6641BC0", Offset = "0x6640BC0", VA = "0x6641BC0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000193")]
	public LayerMask prepassLayerMask
	{
		[Token(Token = "0x60005B4")]
		[Address(RVA = "0x6641BD0", Offset = "0x6640BD0", VA = "0x6641BD0")]
		[CompilerGenerated]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x60005B5")]
		[Address(RVA = "0x6641BE0", Offset = "0x6640BE0", VA = "0x6641BE0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000194")]
	public LayerMask opaqueLayerMask
	{
		[Token(Token = "0x60005B6")]
		[Address(RVA = "0x6641BF0", Offset = "0x6640BF0", VA = "0x6641BF0")]
		[CompilerGenerated]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x60005B7")]
		[Address(RVA = "0x6641C00", Offset = "0x6640C00", VA = "0x6641C00")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000195")]
	public LayerMask transparentLayerMask
	{
		[Token(Token = "0x60005B8")]
		[Address(RVA = "0x6641C10", Offset = "0x6640C10", VA = "0x6641C10")]
		[CompilerGenerated]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x60005B9")]
		[Address(RVA = "0x6641C20", Offset = "0x6640C20", VA = "0x6641C20")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000196")]
	public bool stencilLodCrossFadeEnabled
	{
		[Token(Token = "0x60005BA")]
		[Address(RVA = "0x6641C30", Offset = "0x6640C30", VA = "0x6641C30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005BB")]
		[Address(RVA = "0x6641C40", Offset = "0x6640C40", VA = "0x6641C40")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x6641C50", Offset = "0x6640C50", VA = "0x6641C50", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x6641CA0", Offset = "0x6640CA0", VA = "0x6641CA0")]
	public UniversalRenderingData()
	{
	}
}
