// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.SingleHistoryBase
// Update status: NEW in this game update
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
	[FieldOffset(Offset = "0x20")]
	private int m_Id;

	[Token(Token = "0x4000528")]
	[FieldOffset(Offset = "0x24")]
	private RenderTextureDescriptor m_Descriptor;

	[Token(Token = "0x4000529")]
	[FieldOffset(Offset = "0x58")]
	private Hash128 m_DescKey;

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x2C3FE20", Offset = "0x2C3E420", VA = "0x182C3FE20", Slot = "5")]
	public override void OnCreate(BufferedRTHandleSystem owner, uint typeId)
	{
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x2C3FCE0", Offset = "0x2C3E2E0", VA = "0x182C3FCE0")]
	public RTHandle GetTexture(int frameIndex = 0)
	{
		return null;
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x2C3FC80", Offset = "0x2C3E280", VA = "0x182C3FC80")]
	public RTHandle GetCurrentTexture()
	{
		return null;
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x2C3FC90", Offset = "0x2C3E290", VA = "0x182C3FC90")]
	public RTHandle GetPreviousTexture()
	{
		return null;
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x2C3FD40", Offset = "0x2C3E340", VA = "0x182C3FD40")]
	internal bool IsAllocated()
	{
		return default(bool);
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x2C3FDA0", Offset = "0x2C3E3A0", VA = "0x182C3FDA0")]
	internal bool IsDirty(ref RenderTextureDescriptor desc)
	{
		return default(bool);
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x2C3FBC0", Offset = "0x2C3E1C0", VA = "0x182C3FBC0")]
	private void Alloc(ref RenderTextureDescriptor desc)
	{
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x2C3FE50", Offset = "0x2C3E450", VA = "0x182C3FE50", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x2C3FE60", Offset = "0x2C3E460", VA = "0x182C3FE60")]
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
	[Address(RVA = "0x2C40070", Offset = "0x2C3E670", VA = "0x182C40070")]
	protected SingleHistoryBase()
	{
	}
}
