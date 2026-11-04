// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DataSourceContextChanged
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000042")]
public readonly struct DataSourceContextChanged
{
	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x0")]
	private readonly VisualElement m_TargetElement;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x8")]
	private readonly BindingId m_BindingId;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0xA0")]
	private readonly DataSourceContext m_PreviousContext;

	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x138")]
	private readonly DataSourceContext m_NewContext;

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x3090510", Offset = "0x308EB10", VA = "0x183090510")]
	internal DataSourceContextChanged(VisualElement element, in BindingId bindingId, in DataSourceContext previousContext, in DataSourceContext newContext)
	{
	}
}
