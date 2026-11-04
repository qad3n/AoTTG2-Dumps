// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Vector2Field
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000AA")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class Vector2Field : BaseCompositeField<Vector2, FloatField, float>
{
	[Token(Token = "0x20000AB")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<Vector2Field, UxmlTraits>
	{
		[Token(Token = "0x6000545")]
		[Address(RVA = "0x31E3AC0", Offset = "0x31E20C0", VA = "0x1831E3AC0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000AC")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseField<Vector2>.UxmlTraits
	{
		[Token(Token = "0x400030E")]
		[FieldOffset(Offset = "0x98")]
		private UxmlFloatAttributeDescription m_XValue;

		[Token(Token = "0x400030F")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlFloatAttributeDescription m_YValue;

		[Token(Token = "0x6000546")]
		[Address(RVA = "0x31E5AF0", Offset = "0x31E40F0", VA = "0x1831E5AF0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000547")]
		[Address(RVA = "0x31E7410", Offset = "0x31E5A10", VA = "0x1831E7410")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x400030B")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x400030C")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x400030D")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x31E7930", Offset = "0x31E5F30", VA = "0x1831E7930", Slot = "161")]
	internal override FieldDescription[] DescribeFields()
	{
		return null;
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x31E7EB0", Offset = "0x31E64B0", VA = "0x1831E7EB0")]
	public Vector2Field()
	{
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x31E7FD0", Offset = "0x31E65D0", VA = "0x1831E7FD0")]
	public Vector2Field(string label)
	{
	}
}
