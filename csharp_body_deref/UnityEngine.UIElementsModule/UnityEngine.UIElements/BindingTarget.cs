// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BindingTarget
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000025")]
internal readonly struct BindingTarget
{
	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x0")]
	public readonly VisualElement element;

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x8")]
	public readonly BindingId bindingId;

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x3084A30", Offset = "0x3083030", VA = "0x183084A30")]
	public BindingTarget(VisualElement element, in BindingId bindingId)
	{
	}
}
