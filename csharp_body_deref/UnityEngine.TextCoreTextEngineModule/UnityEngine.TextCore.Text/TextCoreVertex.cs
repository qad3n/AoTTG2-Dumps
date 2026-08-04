// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextCoreVertex
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000047")]
[UnityEngine.Bindings.NativeHeader("Modules/TextCoreTextEngine/TextCoreVertex.h")]
[UnityEngine.Scripting.UsedByNativeCode("TextCoreVertex")]
internal struct TextCoreVertex
{
	[Token(Token = "0x40003B6")]
	[FieldOffset(Offset = "0x0")]
	public Vector3 position;

	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0xC")]
	public Color32 color;

	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0x10")]
	public Vector2 uv0;

	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0x18")]
	public Vector2 uv2;
}
