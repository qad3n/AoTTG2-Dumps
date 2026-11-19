// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.LoadAudit
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;

[Token(Token = "0x20002C3")]
[DebuggerDisplay("{reason} : {passId}")]
internal readonly struct LoadAudit
{
	[Token(Token = "0x4000CC2")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string[] LoadReasonMessages;

	[Token(Token = "0x4000CC3")]
	[FieldOffset(Offset = "0x0")]
	public readonly LoadReason reason;

	[Token(Token = "0x4000CC4")]
	[FieldOffset(Offset = "0x4")]
	public readonly int passId;

	[Token(Token = "0x60013AE")]
	[Address(RVA = "0x659DC90", Offset = "0x659CC90", VA = "0x659DC90")]
	public LoadAudit(LoadReason setReason, int setPassId = -1)
	{
	}
}
