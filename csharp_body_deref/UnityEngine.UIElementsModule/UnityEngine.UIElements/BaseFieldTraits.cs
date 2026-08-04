// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseFieldTraits
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000AC")]
public class BaseFieldTraits<TValueType, TValueUxmlAttributeType> : BaseField<TValueType>.UxmlTraits where TValueUxmlAttributeType : TypedUxmlAttributeDescription<TValueType>, new()
{
	[Token(Token = "0x40002B5")]
	[FieldOffset(Offset = "0x0")]
	private TValueUxmlAttributeType m_Value;

	[Token(Token = "0x600049D")]
	public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
	{
	}

	[Token(Token = "0x600049E")]
	public BaseFieldTraits()
	{
	}
}
