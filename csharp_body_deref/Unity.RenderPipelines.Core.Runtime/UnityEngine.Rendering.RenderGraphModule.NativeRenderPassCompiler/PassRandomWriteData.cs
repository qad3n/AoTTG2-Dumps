// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.PassRandomWriteData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;

[Token(Token = "0x20002BE")]
[DebuggerDisplay("PassRandomWriteData: Res({resource.index}):{index}:{preserveCounterValue}")]
internal readonly struct PassRandomWriteData
{
	[Token(Token = "0x4000C82")]
	[FieldOffset(Offset = "0x0")]
	public readonly ResourceHandle resource;

	[Token(Token = "0x4000C83")]
	[FieldOffset(Offset = "0xC")]
	public readonly int index;

	[Token(Token = "0x4000C84")]
	[FieldOffset(Offset = "0x10")]
	public readonly bool preserveCounterValue;

	[Token(Token = "0x6001396")]
	[Address(RVA = "0x2BB95B0", Offset = "0x2BB7BB0", VA = "0x182BB95B0")]
	public PassRandomWriteData(in ResourceHandle resource, int index, bool preserveCounterValue)
	{
	}

	[Token(Token = "0x6001397")]
	[Address(RVA = "0x2BB9540", Offset = "0x2BB7B40", VA = "0x182BB9540", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
