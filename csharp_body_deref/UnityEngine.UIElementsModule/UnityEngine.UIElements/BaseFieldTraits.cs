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
