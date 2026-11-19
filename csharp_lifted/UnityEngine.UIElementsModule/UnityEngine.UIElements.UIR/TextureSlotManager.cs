// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.TextureSlotManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005C7")]
internal class TextureSlotManager
{
	[Token(Token = "0x4001508")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly int k_MaxSlotCount;

	[Token(Token = "0x4001509")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	internal static readonly int k_SlotSize;

	[Token(Token = "0x400150A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static int[] slotIds;

	[Token(Token = "0x400150B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static readonly int textureTableId;

	[Token(Token = "0x400150C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private TextureId[] m_Textures;

	[Token(Token = "0x400150D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int[] m_LastUseTime;

	[Token(Token = "0x400150E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int m_CurrentTime;

	[Token(Token = "0x400150F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private int m_BatchTime;

	[Token(Token = "0x4001510")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Vector4[] m_GpuTextures;

	[Token(Token = "0x4001511")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int m_SlotCount;

	[Token(Token = "0x4001513")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal TextureRegistry textureRegistry;

	[Token(Token = "0x17000A9C")]
	public int FreeSlots
	{
		[Token(Token = "0x6002B19")]
		[Address(RVA = "0x6BAC8A0", Offset = "0x6BAB8A0", VA = "0x6BAC8A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002B1A")]
		[Address(RVA = "0x6BAC8B0", Offset = "0x6BAB8B0", VA = "0x6BAC8B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002B12")]
	[Address(RVA = "0x6BAC160", Offset = "0x6BAB160", VA = "0x6BAC160")]
	static TextureSlotManager()
	{
	}

	[Token(Token = "0x6002B13")]
	[Address(RVA = "0x6BAC2B0", Offset = "0x6BAB2B0", VA = "0x6BAC2B0")]
	public TextureSlotManager()
	{
	}

	[Token(Token = "0x6002B14")]
	[Address(RVA = "0x6BAC4C0", Offset = "0x6BAB4C0", VA = "0x6BAC4C0")]
	public void Reset()
	{
	}

	[Token(Token = "0x6002B15")]
	[Address(RVA = "0x6BAC520", Offset = "0x6BAB520", VA = "0x6BAC520")]
	private void Unbind(int first, int count = 1)
	{
	}

	[Token(Token = "0x6002B16")]
	[Address(RVA = "0x6BAC750", Offset = "0x6BAB750", VA = "0x6BAC750")]
	public void StartNewBatch(int slotCount)
	{
	}

	[Token(Token = "0x6002B17")]
	[Address(RVA = "0x6BAC790", Offset = "0x6BAB790", VA = "0x6BAC790")]
	public int IndexOf(TextureId id)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002B18")]
	[Address(RVA = "0x6BAC860", Offset = "0x6BAB860", VA = "0x6BAC860")]
	public void MarkUsed(int slotIndex)
	{
	}

	[Token(Token = "0x6002B1B")]
	[Address(RVA = "0x6BAC8C0", Offset = "0x6BAB8C0", VA = "0x6BAC8C0")]
	public int FindOldestSlot()
	{
		return default(int);
	}

	[Token(Token = "0x6002B1C")]
	[Address(RVA = "0x6BAC930", Offset = "0x6BAB930", VA = "0x6BAC930")]
	public void Bind(TextureId id, float sdfScale, float sharpness, bool isPremultiplied, int slot, MaterialPropertyBlock mat, [Optional] CommandList commandList)
	{
	}

	[Token(Token = "0x6002B1D")]
	[Address(RVA = "0x6BAC610", Offset = "0x6BAB610", VA = "0x6BAC610")]
	public void SetGpuData(int slotIndex, TextureId id, int textureWidth, int textureHeight, float sdfScale, float sharpness, bool isPremultiplied)
	{
	}
}
