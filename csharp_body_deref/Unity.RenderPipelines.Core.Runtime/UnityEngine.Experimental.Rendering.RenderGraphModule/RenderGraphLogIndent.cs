// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogIndent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4B8B690", Offset = "0x4B8B690", VA = "0x4B8B690")]
	public RenderGraphLogIndent(RenderGraphLogger logger, int indentation = 1)
	{
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x4B8B770", Offset = "0x4B8B770", VA = "0x4B8B770", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x4B8B7F0", Offset = "0x4B8B7F0", VA = "0x4B8B7F0")]
	private void Dispose(bool disposing)
	{
	}
}
