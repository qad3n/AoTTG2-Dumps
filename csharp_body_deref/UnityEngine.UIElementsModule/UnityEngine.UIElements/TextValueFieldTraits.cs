using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000117")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class TextValueFieldTraits<TValueType, TValueUxmlAttributeType> : BaseFieldTraits<TValueType, TValueUxmlAttributeType> where TValueUxmlAttributeType : TypedUxmlAttributeDescription<TValueType>, new()
{
	[Token(Token = "0x40004A0")]
	[FieldOffset(Offset = "0x0")]
	private UxmlStringAttributeDescription m_PlaceholderText;

	[Token(Token = "0x40004A1")]
	[FieldOffset(Offset = "0x0")]
	private UxmlBoolAttributeDescription m_HidePlaceholderOnFocus;

	[Token(Token = "0x40004A2")]
	[FieldOffset(Offset = "0x0")]
	private UxmlBoolAttributeDescription m_IsReadOnly;

	[Token(Token = "0x40004A3")]
	[FieldOffset(Offset = "0x0")]
	private UxmlBoolAttributeDescription m_IsDelayed;

	[Token(Token = "0x6000779")]
	public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
	{
	}

	[Token(Token = "0x600077A")]
	public TextValueFieldTraits()
	{
	}
}
