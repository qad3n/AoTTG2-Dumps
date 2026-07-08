using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000046")]
[UnityEngine.Scripting.UsedByNativeCode("MeshInfo")]
[UnityEngine.Bindings.NativeHeader("Modules/TextCoreTextEngine/MeshInfo.h")]
internal struct MeshInfoBindings
{
	[Token(Token = "0x40003B3")]
	[FieldOffset(Offset = "0x0")]
	public TextCoreVertex[] vertexData;

	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0x8")]
	public Material material;

	[Token(Token = "0x40003B5")]
	[FieldOffset(Offset = "0x10")]
	public int vertexCount;
}
