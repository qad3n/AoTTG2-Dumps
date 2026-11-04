// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.TextureSlotManager
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005DC")]
internal class TextureSlotManager
{
	[Token(Token = "0x40015C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly int k_MaxSlotCount;

	[Token(Token = "0x40015C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	internal static readonly int k_SlotSize;

	[Token(Token = "0x40015C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static int[] slotIds;

	[Token(Token = "0x40015C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static readonly int textureTableId;

	[Token(Token = "0x40015CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private TextureId[] m_Textures;

	[Token(Token = "0x40015CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int[] m_LastUseTime;

	[Token(Token = "0x40015CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int m_CurrentTime;

	[Token(Token = "0x40015CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private int m_BatchTime;

	[Token(Token = "0x40015CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Vector4[] m_GpuTextures;

	[Token(Token = "0x40015CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int m_SlotCount;

	[Token(Token = "0x40015D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal TextureRegistry textureRegistry;

	[Token(Token = "0x17000AA8")]
	public int FreeSlots
	{
		[Token(Token = "0x6002B7A")]
		[Address(RVA = "0x16EF8A0", Offset = "0x16EDEA0", VA = "0x1816EF8A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002B7B")]
		[Address(RVA = "0x16EFA10", Offset = "0x16EE010", VA = "0x1816EFA10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002B73")]
	[Address(RVA = "0x31B2A90", Offset = "0x31B1090", VA = "0x1831B2A90")]
	static TextureSlotManager()
	{
	}

	[Token(Token = "0x6002B74")]
	[Address(RVA = "0x31B2C00", Offset = "0x31B1200", VA = "0x1831B2C00")]
	public TextureSlotManager()
	{
	}

	[Token(Token = "0x6002B75")]
	[Address(RVA = "0x31B2720", Offset = "0x31B0D20", VA = "0x1831B2720")]
	public void Reset()
	{
	}

	[Token(Token = "0x6002B76")]
	[Address(RVA = "0x31B2970", Offset = "0x31B0F70", VA = "0x1831B2970")]
	private void Unbind(int first, int count = 1)
	{
	}

	[Token(Token = "0x6002B77")]
	[Address(RVA = "0x31B2930", Offset = "0x31B0F30", VA = "0x1831B2930")]
	public void StartNewBatch(int slotCount)
	{
	}

	[Token(Token = "0x6002B78")]
	[Address(RVA = "0x31B2600", Offset = "0x31B0C00", VA = "0x1831B2600")]
	public int IndexOf(TextureId id)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002B79")]
	[Address(RVA = "0x31B26C0", Offset = "0x31B0CC0", VA = "0x1831B26C0")]
	public void MarkUsed(int slotIndex)
	{
	}

	[Token(Token = "0x6002B7C")]
	[Address(RVA = "0x31B2580", Offset = "0x31B0B80", VA = "0x1831B2580")]
	public int FindOldestSlot()
	{
		return default(int);
	}

	[Token(Token = "0x6002B7D")]
	[Address(RVA = "0x31B2270", Offset = "0x31B0870", VA = "0x1831B2270")]
	public void Bind(TextureId id, float sdfScale, float sharpness, bool isPremultiplied, int slot, MaterialPropertyBlock mat, [Optional] CommandList commandList)
	{
	}

	[Token(Token = "0x6002B7E")]
	[Address(RVA = "0x31B2790", Offset = "0x31B0D90", VA = "0x1831B2790")]
	public void SetGpuData(int slotIndex, TextureId id, int textureWidth, int textureHeight, float sdfScale, float sharpness, bool isPremultiplied)
	{
	}
}
