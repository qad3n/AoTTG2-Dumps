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
		[Address(RVA = "0x4C80AC0", Offset = "0x4C80AC0", VA = "0x4C80AC0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001DE5")]
		[Address(RVA = "0x4C80AD0", Offset = "0x4C80AD0", VA = "0x4C80AD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001DDE")]
	[Address(RVA = "0x4C803D0", Offset = "0x4C803D0", VA = "0x4C803D0")]
	static TextureSlotManager()
	{
	}

	[Token(Token = "0x6001DDF")]
	[Address(RVA = "0x4C80520", Offset = "0x4C80520", VA = "0x4C80520")]
	public TextureSlotManager()
	{
	}

	[Token(Token = "0x6001DE0")]
	[Address(RVA = "0x4C806D0", Offset = "0x4C806D0", VA = "0x4C806D0")]
	public void Reset()
	{
	}

	[Token(Token = "0x6001DE1")]
	[Address(RVA = "0x4C80920", Offset = "0x4C80920", VA = "0x4C80920")]
	public void StartNewBatch()
	{
	}

	[Token(Token = "0x6001DE2")]
	[Address(RVA = "0x4C80980", Offset = "0x4C80980", VA = "0x4C80980")]
	public int IndexOf(TextureId id)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE3")]
	[Address(RVA = "0x4C80A80", Offset = "0x4C80A80", VA = "0x4C80A80")]
	public void MarkUsed(int slotIndex)
	{
	}

	[Token(Token = "0x6001DE6")]
	[Address(RVA = "0x4C80AE0", Offset = "0x4C80AE0", VA = "0x4C80AE0")]
	public int FindOldestSlot()
	{
		return default(int);
	}

	[Token(Token = "0x6001DE7")]
	[Address(RVA = "0x4C80BC0", Offset = "0x4C80BC0", VA = "0x4C80BC0")]
	public void Bind(TextureId id, float sdfScale, float sharpness, int slot, MaterialPropertyBlock mat)
	{
	}

	[Token(Token = "0x6001DE8")]
	[Address(RVA = "0x4C807F0", Offset = "0x4C807F0", VA = "0x4C807F0")]
	public void SetGpuData(int slotIndex, TextureId id, int textureWidth, int textureHeight, float sdfScale, float sharpness)
	{
	}
}
