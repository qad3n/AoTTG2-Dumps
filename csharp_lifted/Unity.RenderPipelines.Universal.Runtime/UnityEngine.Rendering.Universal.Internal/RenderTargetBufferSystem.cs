// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x66D9F20", Offset = "0x66D8F20", VA = "0x66D9F20")]
		get
		{
			return ref *(SwapBuffer*)null;
		}
	}

	[Token(Token = "0x170002D8")]
	private unsafe ref SwapBuffer frontBuffer
	{
		[Token(Token = "0x6000C28")]
		[Address(RVA = "0x66D9F90", Offset = "0x66D8F90", VA = "0x66D9F90")]
		get
		{
			return ref *(SwapBuffer*)null;
		}
	}

	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x66D9FF0", Offset = "0x66D8FF0", VA = "0x66D9FF0")]
	public RenderTargetBufferSystem(string name)
	{
	}

	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x66DA090", Offset = "0x66D9090", VA = "0x66DA090")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x66DA0E0", Offset = "0x66D90E0", VA = "0x66DA0E0")]
	public RTHandle PeekBackBuffer()
	{
		return null;
	}

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x66DA1F0", Offset = "0x66D91F0", VA = "0x66DA1F0")]
	public RTHandle GetBackBuffer(CommandBuffer cmd)
	{
		return null;
	}

	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x66DA480", Offset = "0x66D9480", VA = "0x66DA480")]
	public RTHandle GetFrontBuffer(CommandBuffer cmd)
	{
		return null;
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x66DA640", Offset = "0x66D9640", VA = "0x66DA640")]
	public void Swap()
	{
	}

	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x66DA210", Offset = "0x66D9210", VA = "0x66DA210")]
	private void ReAllocate(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000C30")]
	[Address(RVA = "0x66DA6B0", Offset = "0x66D96B0", VA = "0x66DA6B0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x66DA720", Offset = "0x66D9720", VA = "0x66DA720")]
	public void SetCameraSettings(RenderTextureDescriptor desc, FilterMode filterMode)
	{
	}

	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x66DA890", Offset = "0x66D9890", VA = "0x66DA890")]
	public RTHandle GetBufferA()
	{
		return null;
	}

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x66DA810", Offset = "0x66D9810", VA = "0x66DA810")]
	public void EnableMSAA(bool enable)
	{
	}
}
