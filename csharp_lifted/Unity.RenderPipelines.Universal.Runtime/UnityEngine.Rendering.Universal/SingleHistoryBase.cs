// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.SingleHistoryBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000DE")]
internal abstract class SingleHistoryBase : CameraHistoryItem
{
	[Token(Token = "0x4000527")]
	[FieldOffset(Offset = "0x1C")]
	private int m_Id;

	[Token(Token = "0x4000528")]
	[FieldOffset(Offset = "0x20")]
	private RenderTextureDescriptor m_Descriptor;

	[Token(Token = "0x4000529")]
	[FieldOffset(Offset = "0x58")]
	private Hash128 m_DescKey;

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x66433D0", Offset = "0x66423D0", VA = "0x66433D0", Slot = "5")]
	public override void OnCreate(BufferedRTHandleSystem owner, uint typeId)
	{
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x66433F0", Offset = "0x66423F0", VA = "0x66433F0")]
	public RTHandle GetTexture(int frameIndex = 0)
	{
		return null;
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x6643440", Offset = "0x6642440", VA = "0x6643440")]
	public RTHandle GetCurrentTexture()
	{
		return null;
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x6643450", Offset = "0x6642450", VA = "0x6643450")]
	public RTHandle GetPreviousTexture()
	{
		return null;
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x6643490", Offset = "0x6642490", VA = "0x6643490")]
	internal bool IsAllocated()
	{
		return default(bool);
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x66434D0", Offset = "0x66424D0", VA = "0x66434D0")]
	internal bool IsDirty(ref RenderTextureDescriptor desc)
	{
		return default(bool);
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x6643530", Offset = "0x6642530", VA = "0x6643530")]
	private void Alloc(ref RenderTextureDescriptor desc)
	{
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x66435F0", Offset = "0x66425F0", VA = "0x66435F0", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x6643600", Offset = "0x6642600", VA = "0x6643600")]
	internal bool Update(ref RenderTextureDescriptor cameraDesc)
	{
		return default(bool);
	}

	[Token(Token = "0x6000621")]
	protected abstract int GetHistoryFrameCount();

	[Token(Token = "0x6000622")]
	protected abstract string GetHistoryName();

	[Token(Token = "0x6000623")]
	protected abstract RenderTextureDescriptor GetHistoryDescriptor(ref RenderTextureDescriptor cameraDesc);

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x66437D0", Offset = "0x66427D0", VA = "0x66437D0")]
	protected SingleHistoryBase()
	{
	}
}
