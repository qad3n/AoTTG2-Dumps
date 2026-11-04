// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.TaaHistory
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000E0")]
public sealed class TaaHistory : CameraHistoryItem
{
	[Token(Token = "0x400052B")]
	[FieldOffset(Offset = "0x20")]
	private int[] m_TaaAccumulationTextureIds;

	[Token(Token = "0x400052C")]
	[FieldOffset(Offset = "0x28")]
	private int[] m_TaaAccumulationVersions;

	[Token(Token = "0x400052D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] m_TaaAccumulationNames;

	[Token(Token = "0x400052E")]
	[FieldOffset(Offset = "0x30")]
	private RenderTextureDescriptor m_Descriptor;

	[Token(Token = "0x400052F")]
	[FieldOffset(Offset = "0x68")]
	private Hash128 m_DescKey;

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x2C3CCF0", Offset = "0x2C3B2F0", VA = "0x182C3CCF0", Slot = "5")]
	public override void OnCreate(BufferedRTHandleSystem owner, uint typeId)
	{
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x2C405F0", Offset = "0x2C3EBF0", VA = "0x182C405F0", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x2C404C0", Offset = "0x2C3EAC0", VA = "0x182C404C0")]
	public RTHandle GetAccumulationTexture(int eyeIndex = 0)
	{
		return null;
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x2C40500", Offset = "0x2C3EB00", VA = "0x182C40500")]
	public int GetAccumulationVersion(int eyeIndex = 0)
	{
		return default(int);
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x2C406A0", Offset = "0x2C3ECA0", VA = "0x182C406A0")]
	internal void SetAccumulationVersion(int eyeIndex, int version)
	{
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x2C405B0", Offset = "0x2C3EBB0", VA = "0x182C405B0")]
	private bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x2C40530", Offset = "0x2C3EB30", VA = "0x182C40530")]
	private bool IsDirty(ref RenderTextureDescriptor desc)
	{
		return default(bool);
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x2C40320", Offset = "0x2C3E920", VA = "0x182C40320")]
	private void Alloc(ref RenderTextureDescriptor desc, bool xrMultipassEnabled)
	{
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x2C406D0", Offset = "0x2C3ECD0", VA = "0x182C406D0")]
	internal bool Update(ref RenderTextureDescriptor cameraDesc, bool xrMultipassEnabled = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x2C40A80", Offset = "0x2C3F080", VA = "0x182C40A80")]
	public TaaHistory()
	{
	}
}
