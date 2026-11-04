// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RawDepthHistory
// Update status: NEW in this game update
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
	[Address(RVA = "0x2C3CCF0", Offset = "0x2C3B2F0", VA = "0x182C3CCF0", Slot = "5")]
	public override void OnCreate(BufferedRTHandleSystem owner, uint typeId)
	{
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x2C3CB40", Offset = "0x2C3B140", VA = "0x182C3CB40")]
	public RTHandle GetCurrentTexture(int eyeIndex = 0)
	{
		return null;
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x2C3CBD0", Offset = "0x2C3B1D0", VA = "0x182C3CBD0")]
	public RTHandle GetPreviousTexture(int eyeIndex = 0)
	{
		return null;
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x2C3CC20", Offset = "0x2C3B220", VA = "0x182C3CC20")]
	private bool IsAllocated()
	{
		return default(bool);
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x2C3D3A0", Offset = "0x2C3B9A0", VA = "0x182C3D3A0")]
	private bool IsDirty(ref RenderTextureDescriptor desc)
	{
		return default(bool);
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x2C3D1C0", Offset = "0x2C3B7C0", VA = "0x182C3D1C0")]
	private void Alloc(ref RenderTextureDescriptor desc, bool xrMultipassEnabled)
	{
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x2C3CD60", Offset = "0x2C3B360", VA = "0x182C3CD60", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x2C3D360", Offset = "0x2C3B960", VA = "0x182C3D360")]
	internal RenderTextureDescriptor GetHistoryDescriptor(ref RenderTextureDescriptor cameraDesc)
	{
		return default(RenderTextureDescriptor);
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x2C3D420", Offset = "0x2C3BA20", VA = "0x182C3D420")]
	internal bool Update(ref RenderTextureDescriptor cameraDesc, bool xrMultipassEnabled)
	{
		return default(bool);
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x2C3D7A0", Offset = "0x2C3BDA0", VA = "0x182C3D7A0")]
	public RawDepthHistory()
	{
	}
}
