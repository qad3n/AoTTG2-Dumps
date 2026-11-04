// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.GradientRemap
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005E2")]
internal class GradientRemap : LinkedPoolItem<GradientRemap>
{
	[Token(Token = "0x40015DC")]
	[FieldOffset(Offset = "0x18")]
	public int origIndex;

	[Token(Token = "0x40015DD")]
	[FieldOffset(Offset = "0x1C")]
	public int destIndex;

	[Token(Token = "0x40015DE")]
	[FieldOffset(Offset = "0x20")]
	public RectInt location;

	[Token(Token = "0x40015DF")]
	[FieldOffset(Offset = "0x30")]
	public GradientRemap next;

	[Token(Token = "0x40015E0")]
	[FieldOffset(Offset = "0x38")]
	public TextureId atlas;

	[Token(Token = "0x6002B8B")]
	[Address(RVA = "0x31A39D0", Offset = "0x31A1FD0", VA = "0x1831A39D0")]
	public void Reset()
	{
	}

	[Token(Token = "0x6002B8C")]
	[Address(RVA = "0x31A3A40", Offset = "0x31A2040", VA = "0x1831A3A40")]
	public GradientRemap()
	{
	}
}
