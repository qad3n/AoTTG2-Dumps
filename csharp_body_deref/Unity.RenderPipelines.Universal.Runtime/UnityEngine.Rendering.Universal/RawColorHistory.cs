// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RawColorHistory
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x6642B00", Offset = "0x6641B00", VA = "0x6642B00", Slot = "5")]
	public override void OnCreate(BufferedRTHandleSystem owner, uint typeId)
	{
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x66331B0", Offset = "0x66321B0", VA = "0x66331B0")]
	public RTHandle GetCurrentTexture(int eyeIndex = 0)
	{
		return null;
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x6642B70", Offset = "0x6641B70", VA = "0x6642B70")]
	public RTHandle GetPreviousTexture(int eyeIndex = 0)
	{
		return null;
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x6642BB0", Offset = "0x6641BB0", VA = "0x6642BB0")]
	private bool IsAllocated()
	{
		return default(bool);
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x6642BF0", Offset = "0x6641BF0", VA = "0x6642BF0")]
	private bool IsDirty(ref RenderTextureDescriptor desc)
	{
		return default(bool);
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x6642C50", Offset = "0x6641C50", VA = "0x6642C50")]
	private void Alloc(ref RenderTextureDescriptor desc, bool xrMultipassEnabled)
	{
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x6642DB0", Offset = "0x6641DB0", VA = "0x6642DB0", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x6642E10", Offset = "0x6641E10", VA = "0x6642E10")]
	internal RenderTextureDescriptor GetHistoryDescriptor(ref RenderTextureDescriptor cameraDesc)
	{
		return default(RenderTextureDescriptor);
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x66397B0", Offset = "0x66387B0", VA = "0x66397B0")]
	internal bool Update(ref RenderTextureDescriptor cameraDesc, bool xrMultipassEnabled = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x6642E50", Offset = "0x6641E50", VA = "0x6642E50")]
	public RawColorHistory()
	{
	}
}
