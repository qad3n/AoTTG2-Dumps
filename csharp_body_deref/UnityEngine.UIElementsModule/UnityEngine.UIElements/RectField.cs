using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000066")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class RectField : BaseCompositeField<Rect, FloatField, float>
{
	[Token(Token = "0x2000067")]
	public new class UxmlFactory : UxmlFactory<RectField, UxmlTraits>
	{
		[Token(Token = "0x6000353")]
		[Address(RVA = "0x4C0AC70", Offset = "0x4C0AC70", VA = "0x4C0AC70")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000068")]
	public new class UxmlTraits : BaseField<Rect>.UxmlTraits
	{
		[Token(Token = "0x40001C3")]
		[FieldOffset(Offset = "0x80")]
		private UxmlFloatAttributeDescription m_XValue;

		[Token(Token = "0x40001C4")]
		[FieldOffset(Offset = "0x88")]
		private UxmlFloatAttributeDescription m_YValue;

		[Token(Token = "0x40001C5")]
		[FieldOffset(Offset = "0x90")]
		private UxmlFloatAttributeDescription m_WValue;

		[Token(Token = "0x40001C6")]
		[FieldOffset(Offset = "0x98")]
		private UxmlFloatAttributeDescription m_HValue;

		[Token(Token = "0x6000354")]
		[Address(RVA = "0x4C0ACB0", Offset = "0x4C0ACB0", VA = "0x4C0ACB0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000355")]
		[Address(RVA = "0x4C0AF00", Offset = "0x4C0AF00", VA = "0x4C0AF00")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40001C1")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40001C2")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x4C0A1A0", Offset = "0x4C0A1A0", VA = "0x4C0A1A0", Slot = "115")]
	internal override FieldDescription[] DescribeFields()
	{
		return null;
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x4C0AA40", Offset = "0x4C0AA40", VA = "0x4C0AA40")]
	public RectField()
	{
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x4C0AA50", Offset = "0x4C0AA50", VA = "0x4C0AA50")]
	public RectField(string label)
	{
	}
}
