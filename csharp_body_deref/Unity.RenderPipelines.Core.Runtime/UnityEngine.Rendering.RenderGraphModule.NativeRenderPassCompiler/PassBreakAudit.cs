// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.PassBreakAudit
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;

[Token(Token = "0x20002C7")]
[DebuggerDisplay("{reason} : {breakPass}")]
internal readonly struct PassBreakAudit
{
	[Token(Token = "0x4000CE5")]
	[FieldOffset(Offset = "0x0")]
	public readonly PassBreakReason reason;

	[Token(Token = "0x4000CE6")]
	[FieldOffset(Offset = "0x4")]
	public readonly int breakPass;

	[Token(Token = "0x4000CE7")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string[] BreakReasonMessages;

	[Token(Token = "0x60013B2")]
	[Address(RVA = "0xACCA30", Offset = "0xACB030", VA = "0x180ACCA30")]
	public PassBreakAudit(PassBreakReason reason, int breakPass)
	{
	}
}
