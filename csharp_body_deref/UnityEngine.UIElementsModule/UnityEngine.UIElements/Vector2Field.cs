using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x200006E")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class Vector2Field : BaseCompositeField<Vector2, FloatField, float>
{
	[Token(Token = "0x200006F")]
	public new class UxmlFactory : UxmlFactory<Vector2Field, UxmlTraits>
	{
		[Token(Token = "0x6000375")]
		[Address(RVA = "0x4C0C8A0", Offset = "0x4C0C8A0", VA = "0x4C0C8A0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000070")]
	public new class UxmlTraits : BaseField<Vector2>.UxmlTraits
	{
		[Token(Token = "0x40001E3")]
		[FieldOffset(Offset = "0x80")]
		private UxmlFloatAttributeDescription m_XValue;

		[Token(Token = "0x40001E4")]
		[FieldOffset(Offset = "0x88")]
		private UxmlFloatAttributeDescription m_YValue;

		[Token(Token = "0x6000376")]
		[Address(RVA = "0x4C0C8E0", Offset = "0x4C0C8E0", VA = "0x4C0C8E0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000377")]
		[Address(RVA = "0x4C0CA60", Offset = "0x4C0CA60", VA = "0x4C0CA60")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40001E0")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40001E1")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40001E2")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x4C0C1E0", Offset = "0x4C0C1E0", VA = "0x4C0C1E0", Slot = "115")]
	internal override FieldDescription[] DescribeFields()
	{
		return null;
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x4C0C680", Offset = "0x4C0C680", VA = "0x4C0C680")]
	public Vector2Field()
	{
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x4C0C690", Offset = "0x4C0C690", VA = "0x4C0C690")]
	public Vector2Field(string label)
	{
	}
}
