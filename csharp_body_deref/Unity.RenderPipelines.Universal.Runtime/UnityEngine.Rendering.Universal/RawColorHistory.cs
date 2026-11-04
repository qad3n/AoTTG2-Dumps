// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RawColorHistory
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000DC")]
public sealed class RawColorHistory : CameraHistoryItem
{
	[Token(Token = "0x400051F")]
	[FieldOffset(Offset = "0x20")]
	private int[] m_Ids;

	[Token(Token = "0x4000520")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] m_Names;

	[Token(Token = "0x4000521")]
	[FieldOffset(Offset = "0x28")]
	private RenderTextureDescriptor m_Descriptor;

	[Token(Token = "0x4000522")]
	[FieldOffset(Offset = "0x60")]
	private Hash128 m_DescKey;

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x2C3CCF0", Offset = "0x2C3B2F0", VA = "0x182C3CCF0", Slot = "5")]
	public override void OnCreate(BufferedRTHandleSystem owner, uint typeId)
	{
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x2C3CB40", Offset = "0x2C3B140", VA = "0x182C3CB40")]
	public RTHandle GetCurrentTexture(int eyeIndex = 0)
	{
		return null;
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x2C3CBD0", Offset = "0x2C3B1D0", VA = "0x182C3CBD0")]
	public RTHandle GetPreviousTexture(int eyeIndex = 0)
	{
		return null;
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x2C3CC20", Offset = "0x2C3B220", VA = "0x182C3CC20")]
	private bool IsAllocated()
	{
		return default(bool);
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x2C3CC70", Offset = "0x2C3B270", VA = "0x182C3CC70")]
	private bool IsDirty(ref RenderTextureDescriptor desc)
	{
		return default(bool);
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x2C3C9A0", Offset = "0x2C3AFA0", VA = "0x182C3C9A0")]
	private void Alloc(ref RenderTextureDescriptor desc, bool xrMultipassEnabled)
	{
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x2C3CD60", Offset = "0x2C3B360", VA = "0x182C3CD60", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x2C3CB90", Offset = "0x2C3B190", VA = "0x182C3CB90")]
	internal RenderTextureDescriptor GetHistoryDescriptor(ref RenderTextureDescriptor cameraDesc)
	{
		return default(RenderTextureDescriptor);
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x2C3CDD0", Offset = "0x2C3B3D0", VA = "0x182C3CDD0")]
	internal bool Update(ref RenderTextureDescriptor cameraDesc, bool xrMultipassEnabled = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x2C3D160", Offset = "0x2C3B760", VA = "0x182C3D160")]
	public RawColorHistory()
	{
	}
}
