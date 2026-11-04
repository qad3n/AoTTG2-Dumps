// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal.Internal;

[Token(Token = "0x2000239")]
internal sealed class RenderTargetBufferSystem
{
	[Token(Token = "0x200023A")]
	private struct SwapBuffer
	{
		[Token(Token = "0x4000DC0")]
		[FieldOffset(Offset = "0x0")]
		public RTHandle rtMSAA;

		[Token(Token = "0x4000DC1")]
		[FieldOffset(Offset = "0x8")]
		public RTHandle rtResolve;

		[Token(Token = "0x4000DC2")]
		[FieldOffset(Offset = "0x10")]
		public string name;

		[Token(Token = "0x4000DC3")]
		[FieldOffset(Offset = "0x18")]
		public int msaa;
	}

	[Token(Token = "0x4000DBA")]
	[FieldOffset(Offset = "0x10")]
	private SwapBuffer m_A;

	[Token(Token = "0x4000DBB")]
	[FieldOffset(Offset = "0x30")]
	private SwapBuffer m_B;

	[Token(Token = "0x4000DBC")]
	[FieldOffset(Offset = "0x0")]
	private static bool m_AisBackBuffer;

	[Token(Token = "0x4000DBD")]
	[FieldOffset(Offset = "0x4")]
	private static RenderTextureDescriptor m_Desc;

	[Token(Token = "0x4000DBE")]
	[FieldOffset(Offset = "0x50")]
	private FilterMode m_FilterMode;

	[Token(Token = "0x4000DBF")]
	[FieldOffset(Offset = "0x54")]
	private bool m_AllowMSAA;

	[Token(Token = "0x170002D7")]
	private unsafe ref SwapBuffer backBuffer
	{
		[Token(Token = "0x6000C27")]
		[Address(RVA = "0x2CDBA30", Offset = "0x2CDA030", VA = "0x182CDBA30")]
		get
		{
			return ref *(SwapBuffer*)null;
		}
	}

	[Token(Token = "0x170002D8")]
	private unsafe ref SwapBuffer frontBuffer
	{
		[Token(Token = "0x6000C28")]
		[Address(RVA = "0x2CDBA90", Offset = "0x2CDA090", VA = "0x182CDBA90")]
		get
		{
			return ref *(SwapBuffer*)null;
		}
	}

	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x2CDB990", Offset = "0x2CD9F90", VA = "0x182CDB990")]
	public RenderTargetBufferSystem(string name)
	{
	}

	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x2CDAFE0", Offset = "0x2CD95E0", VA = "0x182CDAFE0")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x2CDB400", Offset = "0x2CD9A00", VA = "0x182CDB400")]
	public RTHandle PeekBackBuffer()
	{
		return null;
	}

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x2CDB0C0", Offset = "0x2CD96C0", VA = "0x182CDB0C0")]
	public RTHandle GetBackBuffer(CommandBuffer cmd)
	{
		return null;
	}

	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x2CDB210", Offset = "0x2CD9810", VA = "0x182CDB210")]
	public RTHandle GetFrontBuffer(CommandBuffer cmd)
	{
		return null;
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x2CDB8F0", Offset = "0x2CD9EF0", VA = "0x182CDB8F0")]
	public void Swap()
	{
	}

	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x2CDB530", Offset = "0x2CD9B30", VA = "0x182CDB530")]
	private void ReAllocate(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000C30")]
	[Address(RVA = "0x2CDAF70", Offset = "0x2CD9570", VA = "0x182CDAF70")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x2CDB7C0", Offset = "0x2CD9DC0", VA = "0x182CDB7C0")]
	public void SetCameraSettings(RenderTextureDescriptor desc, FilterMode filterMode)
	{
	}

	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x2CDB1F0", Offset = "0x2CD97F0", VA = "0x182CDB1F0")]
	public RTHandle GetBufferA()
	{
		return null;
	}

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x2CDB040", Offset = "0x2CD9640", VA = "0x182CDB040")]
	public void EnableMSAA(bool enable)
	{
	}
}
