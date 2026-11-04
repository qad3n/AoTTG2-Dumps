// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchFilterSettings
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200037B")]
public struct BatchFilterSettings
{
	[Token(Token = "0x4000A4B")]
	[FieldOffset(Offset = "0x0")]
	public uint renderingLayerMask;

	[Token(Token = "0x4000A4C")]
	[FieldOffset(Offset = "0x4")]
	public int rendererPriority;

	[Token(Token = "0x4000A4D")]
	[FieldOffset(Offset = "0x8")]
	private ulong m_sceneCullingMask;

	[Token(Token = "0x4000A4E")]
	[FieldOffset(Offset = "0x10")]
	public byte layer;

	[Token(Token = "0x4000A4F")]
	[FieldOffset(Offset = "0x11")]
	private byte m_batchLayer;

	[Token(Token = "0x4000A50")]
	[FieldOffset(Offset = "0x12")]
	private byte m_motionMode;

	[Token(Token = "0x4000A51")]
	[FieldOffset(Offset = "0x13")]
	private byte m_shadowMode;

	[Token(Token = "0x4000A52")]
	[FieldOffset(Offset = "0x14")]
	private byte m_receiveShadows;

	[Token(Token = "0x4000A53")]
	[FieldOffset(Offset = "0x15")]
	private byte m_staticShadowCaster;

	[Token(Token = "0x4000A54")]
	[FieldOffset(Offset = "0x16")]
	private byte m_allDepthSorted;

	[Token(Token = "0x4000A55")]
	[FieldOffset(Offset = "0x17")]
	private byte m_isSceneCullingMaskSet;

	[Token(Token = "0x17000322")]
	public byte batchLayer
	{
		[Token(Token = "0x6001573")]
		[Address(RVA = "0x1AE80B0", Offset = "0x1AE66B0", VA = "0x181AE80B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000323")]
	public MotionVectorGenerationMode motionMode
	{
		[Token(Token = "0x6001574")]
		[Address(RVA = "0x1C6C1B0", Offset = "0x1C6A7B0", VA = "0x181C6C1B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000324")]
	public ShadowCastingMode shadowCastingMode
	{
		[Token(Token = "0x6001575")]
		[Address(RVA = "0x2DD7CC0", Offset = "0x2DD62C0", VA = "0x182DD7CC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000325")]
	public bool receiveShadows
	{
		[Token(Token = "0x6001576")]
		[Address(RVA = "0x2F5FEF0", Offset = "0x2F5E4F0", VA = "0x182F5FEF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000326")]
	public bool staticShadowCaster
	{
		[Token(Token = "0x6001577")]
		[Address(RVA = "0x2F5FF00", Offset = "0x2F5E500", VA = "0x182F5FF00")]
		set
		{
		}
	}

	[Token(Token = "0x17000327")]
	public bool allDepthSorted
	{
		[Token(Token = "0x6001578")]
		[Address(RVA = "0x2F5FEE0", Offset = "0x2F5E4E0", VA = "0x182F5FEE0")]
		set
		{
		}
	}
}
