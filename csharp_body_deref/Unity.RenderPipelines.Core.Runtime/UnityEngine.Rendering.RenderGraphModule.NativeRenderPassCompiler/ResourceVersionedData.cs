// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.ResourceVersionedData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;

[Token(Token = "0x20002CB")]
internal struct ResourceVersionedData
{
	[Token(Token = "0x4000D11")]
	[FieldOffset(Offset = "0x0")]
	public bool written;

	[Token(Token = "0x4000D12")]
	[FieldOffset(Offset = "0x4")]
	public int writePassId;

	[Token(Token = "0x4000D13")]
	[FieldOffset(Offset = "0x8")]
	public int numReaders;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013CA")]
	[Address(RVA = "0x2BB9B30", Offset = "0x2BB8130", VA = "0x182BB9B30")]
	public void SetWritingPass(CompilerContextData ctx, in ResourceHandle h, int passId)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013CB")]
	[Address(RVA = "0x2BB9720", Offset = "0x2BB7D20", VA = "0x182BB9720")]
	public void RegisterReadingPass(CompilerContextData ctx, in ResourceHandle h, int passId, int index)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013CC")]
	[Address(RVA = "0x2BB9850", Offset = "0x2BB7E50", VA = "0x182BB9850")]
	public void RemoveReadingPass(CompilerContextData ctx, in ResourceHandle h, int passId)
	{
	}
}
