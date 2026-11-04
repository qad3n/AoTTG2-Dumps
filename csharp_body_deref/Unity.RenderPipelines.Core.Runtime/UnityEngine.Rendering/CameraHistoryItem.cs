// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CameraHistoryItem
// Update status: NEW in this game update
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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x1B7BED0", Offset = "0x1B7A4D0", VA = "0x181B7BED0", Slot = "5")]
	public virtual void OnCreate(BufferedRTHandleSystem owner, uint typeId)
	{
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x2ABA7B0", Offset = "0x2AB8DB0", VA = "0x182ABA7B0")]
	protected int MakeId(uint index)
	{
		return default(int);
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x2ABA660", Offset = "0x2AB8C60", VA = "0x182ABA660")]
	protected RTHandle AllocHistoryFrameRT(int id, int count, ref RenderTextureDescriptor desc, string name = "")
	{
		return null;
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x2ABA6D0", Offset = "0x2AB8CD0", VA = "0x182ABA6D0")]
	protected RTHandle AllocHistoryFrameRT(int id, int count, ref RenderTextureDescriptor desc, FilterMode filterMode, string name = "")
	{
		return null;
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x2ABA7C0", Offset = "0x2AB8DC0", VA = "0x182ABA7C0")]
	protected void ReleaseHistoryFrameRT(int id)
	{
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x2ABA780", Offset = "0x2AB8D80", VA = "0x182ABA780")]
	protected RTHandle GetPreviousFrameRT(int id)
	{
		return null;
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x2ABA750", Offset = "0x2AB8D50", VA = "0x182ABA750")]
	protected RTHandle GetCurrentFrameRT(int id)
	{
		return null;
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x2ABA7E0", Offset = "0x2AB8DE0", VA = "0x182ABA7E0")]
	protected CameraHistoryItem()
	{
	}
}
