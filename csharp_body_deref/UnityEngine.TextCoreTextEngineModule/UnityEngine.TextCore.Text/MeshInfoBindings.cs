// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.MeshInfoBindings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000029")]
[UnityEngine.Bindings.NativeHeader("Modules/TextCoreTextEngine/Native/IMGUI/MeshInfo.h")]
[UnityEngine.Scripting.UsedByNativeCode("MeshInfo")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule" })]
internal struct MeshInfoBindings
{
	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x0")]
	public TextCoreVertex[] vertexData;

	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0x8")]
	public Material material;

	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x10")]
	public int vertexCount;
}
