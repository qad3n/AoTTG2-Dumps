// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraphLogIndent
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x200025E")]
internal struct RenderGraphLogIndent : IDisposable
{
	[Token(Token = "0x4000ADF")]
	[FieldOffset(Offset = "0x0")]
	private int m_Indentation;

	[Token(Token = "0x4000AE0")]
	[FieldOffset(Offset = "0x8")]
	private RenderGraphLogger m_Logger;

	[Token(Token = "0x4000AE1")]
	[FieldOffset(Offset = "0x10")]
	private bool m_Disposed;

	[Token(Token = "0x60010EE")]
	[Address(RVA = "0x2B74680", Offset = "0x2B72C80", VA = "0x182B74680")]
	public RenderGraphLogIndent(RenderGraphLogger logger, int indentation = 1)
	{
	}

	[Token(Token = "0x60010EF")]
	[Address(RVA = "0x2B745F0", Offset = "0x2B72BF0", VA = "0x182B745F0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60010F0")]
	[Address(RVA = "0x2B74550", Offset = "0x2B72B50", VA = "0x182B74550")]
	private void Dispose(bool disposing)
	{
	}
}
