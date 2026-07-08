using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x200006A")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class RectIntField : BaseCompositeField<RectInt, IntegerField, int>
{
	[Token(Token = "0x200006B")]
	public new class UxmlFactory : UxmlFactory<RectIntField, UxmlTraits>
	{
		[Token(Token = "0x6000364")]
		[Address(RVA = "0x4C0BC90", Offset = "0x4C0BC90", VA = "0x4C0BC90")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200006C")]
	public new class UxmlTraits : BaseField<RectInt>.UxmlTraits
	{
		[Token(Token = "0x40001D3")]
		[FieldOffset(Offset = "0x80")]
		private UxmlIntAttributeDescription m_XValue;

		[Token(Token = "0x40001D4")]
		[FieldOffset(Offset = "0x88")]
		private UxmlIntAttributeDescription m_YValue;

		[Token(Token = "0x40001D5")]
		[FieldOffset(Offset = "0x90")]
		private UxmlIntAttributeDescription m_WValue;

		[Token(Token = "0x40001D6")]
		[FieldOffset(Offset = "0x98")]
		private UxmlIntAttributeDescription m_HValue;

		[Token(Token = "0x6000365")]
		[Address(RVA = "0x4C0BCD0", Offset = "0x4C0BCD0", VA = "0x4C0BCD0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000366")]
		[Address(RVA = "0x4C0BF20", Offset = "0x4C0BF20", VA = "0x4C0BF20")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40001D1")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40001D2")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x4C0B1C0", Offset = "0x4C0B1C0", VA = "0x4C0B1C0", Slot = "115")]
	internal override FieldDescription[] DescribeFields()
	{
		return null;
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x4C0BA60", Offset = "0x4C0BA60", VA = "0x4C0BA60")]
	public RectIntField()
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x4C0BA70", Offset = "0x4C0BA70", VA = "0x4C0BA70")]
	public RectIntField(string label)
	{
	}
}
