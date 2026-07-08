using System;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200003C")]
internal struct RenderGraphLogIndent : IDisposable
{
	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x0")]
	private int m_Indentation;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x8")]
	private RenderGraphLogger m_Logger;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x10")]
	private bool m_Disposed;

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x48665A0", Offset = "0x48665A0", VA = "0x48665A0")]
	public RenderGraphLogIndent(RenderGraphLogger logger, int indentation = 1)
	{
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x4866680", Offset = "0x4866680", VA = "0x4866680", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x4866700", Offset = "0x4866700", VA = "0x4866700")]
	private void Dispose(bool disposing)
	{
	}
}
