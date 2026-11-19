// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RawDepthHistory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000DD")]
public sealed class RawDepthHistory : CameraHistoryItem
{
	[Token(Token = "0x4000523")]
	[FieldOffset(Offset = "0x20")]
	private int[] m_Ids;

	[Token(Token = "0x4000524")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] m_Names;

	[Token(Token = "0x4000525")]
	[FieldOffset(Offset = "0x28")]
	private RenderTextureDescriptor m_Descriptor;

	[Token(Token = "0x4000526")]
	[FieldOffset(Offset = "0x60")]
	private Hash128 m_DescKey;

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x6642F70", Offset = "0x6641F70", VA = "0x6642F70", Slot = "5")]
	public override void OnCreate(BufferedRTHandleSystem owner, uint typeId)
	{
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x66331F0", Offset = "0x66321F0", VA = "0x66331F0")]
	public RTHandle GetCurrentTexture(int eyeIndex = 0)
	{
		return null;
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x6642FE0", Offset = "0x6641FE0", VA = "0x6642FE0")]
	public RTHandle GetPreviousTexture(int eyeIndex = 0)
	{
		return null;
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x6643020", Offset = "0x6642020", VA = "0x6643020")]
	private bool IsAllocated()
	{
		return default(bool);
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x6643060", Offset = "0x6642060", VA = "0x6643060")]
	private bool IsDirty(ref RenderTextureDescriptor desc)
	{
		return default(bool);
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x66430C0", Offset = "0x66420C0", VA = "0x66430C0")]
	private void Alloc(ref RenderTextureDescriptor desc, bool xrMultipassEnabled)
	{
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x6643220", Offset = "0x6642220", VA = "0x6643220", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x6643280", Offset = "0x6642280", VA = "0x6643280")]
	internal RenderTextureDescriptor GetHistoryDescriptor(ref RenderTextureDescriptor cameraDesc)
	{
		return default(RenderTextureDescriptor);
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x6639900", Offset = "0x6638900", VA = "0x6639900")]
	internal bool Update(ref RenderTextureDescriptor cameraDesc, bool xrMultipassEnabled)
	{
		return default(bool);
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x66432B0", Offset = "0x66422B0", VA = "0x66432B0")]
	public RawDepthHistory()
	{
	}
}
