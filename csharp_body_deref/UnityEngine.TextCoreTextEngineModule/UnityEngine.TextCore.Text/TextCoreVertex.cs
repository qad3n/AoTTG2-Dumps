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
