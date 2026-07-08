using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x200007A")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class Vector2IntField : BaseCompositeField<Vector2Int, IntegerField, int>
{
	[Token(Token = "0x200007B")]
	public new class UxmlFactory : UxmlFactory<Vector2IntField, UxmlTraits>
	{
		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x4C0EF00", Offset = "0x4C0EF00", VA = "0x4C0EF00")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200007C")]
	public new class UxmlTraits : BaseField<Vector2Int>.UxmlTraits
	{
		[Token(Token = "0x400020A")]
		[FieldOffset(Offset = "0x80")]
		private UxmlIntAttributeDescription m_XValue;

		[Token(Token = "0x400020B")]
		[FieldOffset(Offset = "0x88")]
		private UxmlIntAttributeDescription m_YValue;

		[Token(Token = "0x60003A3")]
		[Address(RVA = "0x4C0EF40", Offset = "0x4C0EF40", VA = "0x4C0EF40", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60003A4")]
		[Address(RVA = "0x4C0F0C0", Offset = "0x4C0F0C0", VA = "0x4C0F0C0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000207")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000209")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x4C0E840", Offset = "0x4C0E840", VA = "0x4C0E840", Slot = "115")]
	internal override FieldDescription[] DescribeFields()
	{
		return null;
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x4C0ECE0", Offset = "0x4C0ECE0", VA = "0x4C0ECE0")]
	public Vector2IntField()
	{
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x4C0ECF0", Offset = "0x4C0ECF0", VA = "0x4C0ECF0")]
	public Vector2IntField(string label)
	{
	}
}
