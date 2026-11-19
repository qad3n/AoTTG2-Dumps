// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchFilterSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003B7")]
public struct BatchFilterSettings
{
	[Token(Token = "0x4000BCF")]
	[FieldOffset(Offset = "0x0")]
	public uint renderingLayerMask;

	[Token(Token = "0x4000BD0")]
	[FieldOffset(Offset = "0x4")]
	public int rendererPriority;

	[Token(Token = "0x4000BD1")]
	[FieldOffset(Offset = "0x8")]
	private ulong m_sceneCullingMask;

	[Token(Token = "0x4000BD2")]
	[FieldOffset(Offset = "0x10")]
	public byte layer;

	[Token(Token = "0x4000BD3")]
	[FieldOffset(Offset = "0x11")]
	private byte m_batchLayer;

	[Token(Token = "0x4000BD4")]
	[FieldOffset(Offset = "0x12")]
	private byte m_motionMode;

	[Token(Token = "0x4000BD5")]
	[FieldOffset(Offset = "0x13")]
	private byte m_shadowMode;

	[Token(Token = "0x4000BD6")]
	[FieldOffset(Offset = "0x14")]
	private byte m_receiveShadows;

	[Token(Token = "0x4000BD7")]
	[FieldOffset(Offset = "0x15")]
	private byte m_staticShadowCaster;

	[Token(Token = "0x4000BD8")]
	[FieldOffset(Offset = "0x16")]
	private byte m_allDepthSorted;

	[Token(Token = "0x4000BD9")]
	[FieldOffset(Offset = "0x17")]
	private byte m_isSceneCullingMaskSet;

	[Token(Token = "0x170003B4")]
	public byte batchLayer
	{
		[Token(Token = "0x6001729")]
		[Address(RVA = "0x6964C20", Offset = "0x6963C20", VA = "0x6964C20")]
		set
		{
		}
	}

	[Token(Token = "0x170003B5")]
	public MotionVectorGenerationMode motionMode
	{
		[Token(Token = "0x600172A")]
		[Address(RVA = "0x6964C30", Offset = "0x6963C30", VA = "0x6964C30")]
		set
		{
		}
	}

	[Token(Token = "0x170003B6")]
	public ShadowCastingMode shadowCastingMode
	{
		[Token(Token = "0x600172B")]
		[Address(RVA = "0x6964C40", Offset = "0x6963C40", VA = "0x6964C40")]
		set
		{
		}
	}

	[Token(Token = "0x170003B7")]
	public bool receiveShadows
	{
		[Token(Token = "0x600172C")]
		[Address(RVA = "0x6964C50", Offset = "0x6963C50", VA = "0x6964C50")]
		set
		{
		}
	}

	[Token(Token = "0x170003B8")]
	public bool staticShadowCaster
	{
		[Token(Token = "0x600172D")]
		[Address(RVA = "0x6964C60", Offset = "0x6963C60", VA = "0x6964C60")]
		set
		{
		}
	}

	[Token(Token = "0x170003B9")]
	public bool allDepthSorted
	{
		[Token(Token = "0x600172E")]
		[Address(RVA = "0x6964C70", Offset = "0x6963C70", VA = "0x6964C70")]
		set
		{
		}
	}
}
