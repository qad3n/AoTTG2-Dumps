// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ColorPage
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UIElements.UIR;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002D2")]
internal struct ColorPage
{
	[Token(Token = "0x4000AEF")]
	[FieldOffset(Offset = "0x0")]
	public bool isValid;

	[Token(Token = "0x4000AF0")]
	[FieldOffset(Offset = "0x4")]
	public Color32 pageAndID;

	[Token(Token = "0x6001313")]
	[Address(RVA = "0x32AA820", Offset = "0x32A8E20", VA = "0x1832AA820")]
	public static ColorPage Init(RenderTreeManager renderTreeManager, BMPAlloc alloc)
	{
		return default(ColorPage);
	}

	[Token(Token = "0x6001314")]
	[Address(RVA = "0x32AA8C0", Offset = "0x32A8EC0", VA = "0x1832AA8C0")]
	public MeshBuilderNative.NativeColorPage ToNativeColorPage()
	{
		return default(MeshBuilderNative.NativeColorPage);
	}
}
