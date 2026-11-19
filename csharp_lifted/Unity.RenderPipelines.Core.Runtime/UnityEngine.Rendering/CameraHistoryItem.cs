// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CameraHistoryItem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200001A")]
public abstract class CameraHistoryItem : ContextItem
{
	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x10")]
	private BufferedRTHandleSystem m_owner;

	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x18")]
	private uint m_TypeId;

	[Token(Token = "0x1700002A")]
	protected BufferedRTHandleSystem storage
	{
		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x64B2BF0", Offset = "0x64B1BF0", VA = "0x64B2BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x64B2BD0", Offset = "0x64B1BD0", VA = "0x64B2BD0", Slot = "5")]
	public virtual void OnCreate(BufferedRTHandleSystem owner, uint typeId)
	{
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x64B2C00", Offset = "0x64B1C00", VA = "0x64B2C00")]
	protected int MakeId(uint index)
	{
		return default(int);
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x64B2C10", Offset = "0x64B1C10", VA = "0x64B2C10")]
	protected RTHandle AllocHistoryFrameRT(int id, int count, ref RenderTextureDescriptor desc, string name = "")
	{
		return null;
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x64B2C60", Offset = "0x64B1C60", VA = "0x64B2C60")]
	protected RTHandle AllocHistoryFrameRT(int id, int count, ref RenderTextureDescriptor desc, FilterMode filterMode, string name = "")
	{
		return null;
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x64B2CD0", Offset = "0x64B1CD0", VA = "0x64B2CD0")]
	protected void ReleaseHistoryFrameRT(int id)
	{
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x64B2CF0", Offset = "0x64B1CF0", VA = "0x64B2CF0")]
	protected RTHandle GetPreviousFrameRT(int id)
	{
		return null;
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x64B2CB0", Offset = "0x64B1CB0", VA = "0x64B2CB0")]
	protected RTHandle GetCurrentFrameRT(int id)
	{
		return null;
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x64B2D10", Offset = "0x64B1D10", VA = "0x64B2D10")]
	protected CameraHistoryItem()
	{
	}
}
