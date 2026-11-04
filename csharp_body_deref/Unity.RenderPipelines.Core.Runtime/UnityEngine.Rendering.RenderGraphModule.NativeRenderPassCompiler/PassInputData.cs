// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.PassInputData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;

[Token(Token = "0x20002BB")]
[DebuggerDisplay("PassInputData: Res({resource.index})")]
internal readonly struct PassInputData
{
	[Token(Token = "0x4000C7C")]
	[FieldOffset(Offset = "0x0")]
	public readonly ResourceHandle resource;

	[Token(Token = "0x6001391")]
	[Address(RVA = "0x2B889E0", Offset = "0x2B86FE0", VA = "0x182B889E0")]
	public PassInputData(in ResourceHandle resource)
	{
	}
}
