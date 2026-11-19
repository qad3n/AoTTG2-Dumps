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
		[Address(RVA = "0x6BD85C0", Offset = "0x6BD75C0", VA = "0x6BD85C0")]
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
		[Address(RVA = "0x6BD8600", Offset = "0x6BD7600", VA = "0x6BD8600", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000547")]
		[Address(RVA = "0x6BD8780", Offset = "0x6BD7780", VA = "0x6BD8780")]
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
	[Address(RVA = "0x6BD7F40", Offset = "0x6BD6F40", VA = "0x6BD7F40", Slot = "161")]
	internal override FieldDescription[] DescribeFields()
	{
		return null;
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x6BD83A0", Offset = "0x6BD73A0", VA = "0x6BD83A0")]
	public Vector2Field()
	{
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x6BD83B0", Offset = "0x6BD73B0", VA = "0x6BD83B0")]
	public Vector2Field(string label)
	{
	}
}
