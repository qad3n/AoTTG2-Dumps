// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.TextureSlotManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004D2")]
internal class TextureSlotManager
{
	[Token(Token = "0x4000F9F")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly int k_SlotCount;

	[Token(Token = "0x4000FA0")]
	[FieldOffset(Offset = "0x4")]
	internal static readonly int k_SlotSize;

	[Token(Token = "0x4000FA1")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly int[] slotIds;

	[Token(Token = "0x4000FA2")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly int textureTableId;

	[Token(Token = "0x4000FA3")]
	[FieldOffset(Offset = "0x10")]
	private TextureId[] m_Textures;

	[Token(Token = "0x4000FA4")]
	[FieldOffset(Offset = "0x18")]
	private int[] m_Tickets;

	[Token(Token = "0x4000FA5")]
	[FieldOffset(Offset = "0x20")]
	private int m_CurrentTicket;

	[Token(Token = "0x4000FA6")]
	[FieldOffset(Offset = "0x24")]
	private int m_FirstUsedTicket;

	[Token(Token = "0x4000FA7")]
	[FieldOffset(Offset = "0x28")]
	private Vector4[] m_GpuTextures;

	[Token(Token = "0x4000FA9")]
	[FieldOffset(Offset = "0x38")]
	internal TextureRegistry textureRegistry;

	[Token(Token = "0x1700078C")]
	public int FreeSlots
	{
		[Token(Token = "0x6001DE4")]
		[Address(RVA = "0x4FA83F0", Offset = "0x4FA83F0", VA = "0x4FA83F0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001DE5")]
		[Address(RVA = "0x4FA8400", Offset = "0x4FA8400", VA = "0x4FA8400")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001DDE")]
	[Address(RVA = "0x4FA7D00", Offset = "0x4FA7D00", VA = "0x4FA7D00")]
	static TextureSlotManager()
	{
	}

	[Token(Token = "0x6001DDF")]
	[Address(RVA = "0x4FA7E50", Offset = "0x4FA7E50", VA = "0x4FA7E50")]
	public TextureSlotManager()
	{
	}

	[Token(Token = "0x6001DE0")]
	[Address(RVA = "0x4FA8000", Offset = "0x4FA8000", VA = "0x4FA8000")]
	public void Reset()
	{
	}

	[Token(Token = "0x6001DE1")]
	[Address(RVA = "0x4FA8250", Offset = "0x4FA8250", VA = "0x4FA8250")]
	public void StartNewBatch()
	{
	}

	[Token(Token = "0x6001DE2")]
	[Address(RVA = "0x4FA82B0", Offset = "0x4FA82B0", VA = "0x4FA82B0")]
	public int IndexOf(TextureId id)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE3")]
	[Address(RVA = "0x4FA83B0", Offset = "0x4FA83B0", VA = "0x4FA83B0")]
	public void MarkUsed(int slotIndex)
	{
	}

	[Token(Token = "0x6001DE6")]
	[Address(RVA = "0x4FA8410", Offset = "0x4FA8410", VA = "0x4FA8410")]
	public int FindOldestSlot()
	{
		return default(int);
	}

	[Token(Token = "0x6001DE7")]
	[Address(RVA = "0x4FA84F0", Offset = "0x4FA84F0", VA = "0x4FA84F0")]
	public void Bind(TextureId id, float sdfScale, float sharpness, int slot, MaterialPropertyBlock mat)
	{
	}

	[Token(Token = "0x6001DE8")]
	[Address(RVA = "0x4FA8120", Offset = "0x4FA8120", VA = "0x4FA8120")]
	public void SetGpuData(int slotIndex, TextureId id, int textureWidth, int textureHeight, float sdfScale, float sharpness)
	{
	}
}
