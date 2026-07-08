using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000072")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class Vector3Field : BaseCompositeField<Vector3, FloatField, float>
{
	[Token(Token = "0x2000073")]
	public new class UxmlFactory : UxmlFactory<Vector3Field, UxmlTraits>
	{
		[Token(Token = "0x6000382")]
		[Address(RVA = "0x4C0D3D0", Offset = "0x4C0D3D0", VA = "0x4C0D3D0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000074")]
	public new class UxmlTraits : BaseField<Vector3>.UxmlTraits
	{
		[Token(Token = "0x40001ED")]
		[FieldOffset(Offset = "0x80")]
		private UxmlFloatAttributeDescription m_XValue;

		[Token(Token = "0x40001EE")]
		[FieldOffset(Offset = "0x88")]
		private UxmlFloatAttributeDescription m_YValue;

		[Token(Token = "0x40001EF")]
		[FieldOffset(Offset = "0x90")]
		private UxmlFloatAttributeDescription m_ZValue;

		[Token(Token = "0x6000383")]
		[Address(RVA = "0x4C0D410", Offset = "0x4C0D410", VA = "0x4C0D410", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000384")]
		[Address(RVA = "0x4C0D5F0", Offset = "0x4C0D5F0", VA = "0x4C0D5F0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40001EA")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40001EB")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40001EC")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x4C0CC30", Offset = "0x4C0CC30", VA = "0x4C0CC30", Slot = "115")]
	internal override FieldDescription[] DescribeFields()
	{
		return null;
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x4C0D2D0", Offset = "0x4C0D2D0", VA = "0x4C0D2D0")]
	public Vector3Field()
	{
	}

	[Token(Token = "0x6000380")]
	[Address(RVA = "0x4C07EA0", Offset = "0x4C07EA0", VA = "0x4C07EA0")]
	public Vector3Field(string label)
	{
	}
}
