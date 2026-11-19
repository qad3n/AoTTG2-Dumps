// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextValueFieldTraits
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000161")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
[Obsolete("TextValueFieldTraits<TValueType, TValueUxmlAttributeType> is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
public class TextValueFieldTraits<TValueType, TValueUxmlAttributeType> : BaseFieldTraits<TValueType, TValueUxmlAttributeType> where TValueUxmlAttributeType : TypedUxmlAttributeDescription<TValueType>, new()
{
	[Token(Token = "0x4000672")]
	[FieldOffset(Offset = "0x0")]
	private UxmlStringAttributeDescription m_PlaceholderText;

	[Token(Token = "0x4000673")]
	[FieldOffset(Offset = "0x0")]
	private UxmlBoolAttributeDescription m_HidePlaceholderOnFocus;

	[Token(Token = "0x4000674")]
	[FieldOffset(Offset = "0x0")]
	private UxmlBoolAttributeDescription m_IsReadOnly;

	[Token(Token = "0x4000675")]
	[FieldOffset(Offset = "0x0")]
	private UxmlBoolAttributeDescription m_IsDelayed;

	[Token(Token = "0x6000A39")]
	public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
	{
	}

	[Token(Token = "0x6000A3A")]
	public TextValueFieldTraits()
	{
	}
}
