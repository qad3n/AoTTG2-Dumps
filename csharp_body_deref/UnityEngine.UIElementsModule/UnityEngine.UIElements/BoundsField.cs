using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000058")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class BoundsField : BaseField<Bounds>
{
	[Token(Token = "0x2000059")]
	public new class UxmlFactory : UxmlFactory<BoundsField, UxmlTraits>
	{
		[Token(Token = "0x6000331")]
		[Address(RVA = "0x4C08440", Offset = "0x4C08440", VA = "0x4C08440")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200005A")]
	public new class UxmlTraits : BaseField<Bounds>.UxmlTraits
	{
		[Token(Token = "0x40001A8")]
		[FieldOffset(Offset = "0x80")]
		private UxmlFloatAttributeDescription m_CenterXValue;

		[Token(Token = "0x40001A9")]
		[FieldOffset(Offset = "0x88")]
		private UxmlFloatAttributeDescription m_CenterYValue;

		[Token(Token = "0x40001AA")]
		[FieldOffset(Offset = "0x90")]
		private UxmlFloatAttributeDescription m_CenterZValue;

		[Token(Token = "0x40001AB")]
		[FieldOffset(Offset = "0x98")]
		private UxmlFloatAttributeDescription m_ExtentsXValue;

		[Token(Token = "0x40001AC")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlFloatAttributeDescription m_ExtentsYValue;

		[Token(Token = "0x40001AD")]
		[FieldOffset(Offset = "0xA8")]
		private UxmlFloatAttributeDescription m_ExtentsZValue;

		[Token(Token = "0x6000332")]
		[Address(RVA = "0x4C08480", Offset = "0x4C08480", VA = "0x4C08480", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000333")]
		[Address(RVA = "0x4C087E0", Offset = "0x4C087E0", VA = "0x4C087E0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40001A3")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x18")]
	public static readonly string centerFieldUssClassName;

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string extentsFieldUssClassName;

	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x460")]
	private Vector3Field m_CenterField;

	[Token(Token = "0x40001A7")]
	[FieldOffset(Offset = "0x468")]
	private Vector3Field m_ExtentsField;

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x4C07AA0", Offset = "0x4C07AA0", VA = "0x4C07AA0")]
	public BoundsField()
	{
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x4C07AB0", Offset = "0x4C07AB0", VA = "0x4C07AB0")]
	public BoundsField(string label)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x4C07FC0", Offset = "0x4C07FC0", VA = "0x4C07FC0", Slot = "114")]
	public override void SetValueWithoutNotify(Bounds newValue)
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x4C080B0", Offset = "0x4C080B0", VA = "0x4C080B0", Slot = "113")]
	protected override void UpdateMixedValueContent()
	{
	}
}
