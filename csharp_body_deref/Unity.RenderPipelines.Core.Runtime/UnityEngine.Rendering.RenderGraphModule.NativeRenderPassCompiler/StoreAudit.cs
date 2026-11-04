// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.StoreAudit
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;

[Token(Token = "0x20002C5")]
[DebuggerDisplay("{reason} : {passId} / MSAA {msaaReason} : {msaaPassId}")]
internal readonly struct StoreAudit
{
	[Token(Token = "0x4000CCE")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string[] StoreReasonMessages;

	[Token(Token = "0x4000CCF")]
	[FieldOffset(Offset = "0x0")]
	public readonly StoreReason reason;

	[Token(Token = "0x4000CD0")]
	[FieldOffset(Offset = "0x4")]
	public readonly int passId;

	[Token(Token = "0x4000CD1")]
	[FieldOffset(Offset = "0x8")]
	public readonly StoreReason msaaReason;

	[Token(Token = "0x4000CD2")]
	[FieldOffset(Offset = "0xC")]
	public readonly int msaaPassId;

	[Token(Token = "0x60013B0")]
	[Address(RVA = "0x1055D90", Offset = "0x1054390", VA = "0x181055D90")]
	public StoreAudit(StoreReason setReason, int setPassId = -1, StoreReason setMsaaReason = StoreReason.NoMSAABuffer, int setMsaaPassId = -1)
	{
	}
}
