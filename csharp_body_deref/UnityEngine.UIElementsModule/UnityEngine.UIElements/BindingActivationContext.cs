// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BindingActivationContext
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000021")]
public readonly struct BindingActivationContext
{
	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x0")]
	private readonly VisualElement m_TargetElement;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x8")]
	private readonly BindingId m_BindingId;

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x3084A30", Offset = "0x3083030", VA = "0x183084A30")]
	internal BindingActivationContext(VisualElement element, in BindingId property)
	{
	}
}
