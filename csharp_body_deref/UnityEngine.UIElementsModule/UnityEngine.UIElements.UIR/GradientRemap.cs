// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.GradientRemap
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005D2")]
internal class GradientRemap : LinkedPoolItem<GradientRemap>
{
	[Token(Token = "0x400154B")]
	[FieldOffset(Offset = "0x18")]
	public int origIndex;

	[Token(Token = "0x400154C")]
	[FieldOffset(Offset = "0x1C")]
	public int destIndex;

	[Token(Token = "0x400154D")]
	[FieldOffset(Offset = "0x20")]
	public RectInt location;

	[Token(Token = "0x400154E")]
	[FieldOffset(Offset = "0x30")]
	public GradientRemap next;

	[Token(Token = "0x400154F")]
	[FieldOffset(Offset = "0x38")]
	public TextureId atlas;

	[Token(Token = "0x6002B56")]
	[Address(RVA = "0x6BB0330", Offset = "0x6BAF330", VA = "0x6BB0330")]
	public void Reset()
	{
	}

	[Token(Token = "0x6002B57")]
	[Address(RVA = "0x6BB0280", Offset = "0x6BAF280", VA = "0x6BB0280")]
	public GradientRemap()
	{
	}
}
