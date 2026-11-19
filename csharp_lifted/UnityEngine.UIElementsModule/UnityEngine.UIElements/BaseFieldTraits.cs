// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseFieldTraits
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000EA")]
[Obsolete("BaseFieldTraits<TValueType, TValueUxmlAttributeType> is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
public class BaseFieldTraits<TValueType, TValueUxmlAttributeType> : BaseField<TValueType>.UxmlTraits where TValueUxmlAttributeType : TypedUxmlAttributeDescription<TValueType>, new()
{
	[Token(Token = "0x40003EE")]
	[FieldOffset(Offset = "0x0")]
	private TValueUxmlAttributeType m_Value;

	[Token(Token = "0x6000686")]
	public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
	{
	}

	[Token(Token = "0x6000687")]
	public BaseFieldTraits()
	{
	}
}
