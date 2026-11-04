// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.NativeTextElementInfo
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x200002B")]
[UnityEngine.Bindings.NativeHeader("Modules/TextCoreTextEngine/Native/TextElementInfo.h")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "UnityEngine.IMGUIModule" })]
internal struct NativeTextElementInfo
{
	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x0")]
	public int glyphID;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x4")]
	public TextCoreVertex bottomLeft;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x24")]
	public TextCoreVertex topLeft;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x44")]
	public TextCoreVertex topRight;

	[Token(Token = "0x400011A")]
	[FieldOffset(Offset = "0x64")]
	public TextCoreVertex bottomRight;
}
