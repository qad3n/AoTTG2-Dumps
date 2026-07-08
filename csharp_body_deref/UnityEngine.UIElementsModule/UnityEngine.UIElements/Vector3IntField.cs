using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x200007E")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class Vector3IntField : BaseCompositeField<Vector3Int, IntegerField, int>
{
	[Token(Token = "0x200007F")]
	public new class UxmlFactory : UxmlFactory<Vector3IntField, UxmlTraits>
	{
		[Token(Token = "0x60003AF")]
		[Address(RVA = "0x4C0FA30", Offset = "0x4C0FA30", VA = "0x4C0FA30")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000080")]
	public new class UxmlTraits : BaseField<Vector3Int>.UxmlTraits
	{
		[Token(Token = "0x4000214")]
		[FieldOffset(Offset = "0x80")]
		private UxmlIntAttributeDescription m_XValue;

		[Token(Token = "0x4000215")]
		[FieldOffset(Offset = "0x88")]
		private UxmlIntAttributeDescription m_YValue;

		[Token(Token = "0x4000216")]
		[FieldOffset(Offset = "0x90")]
		private UxmlIntAttributeDescription m_ZValue;

		[Token(Token = "0x60003B0")]
		[Address(RVA = "0x4C0FA70", Offset = "0x4C0FA70", VA = "0x4C0FA70", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60003B1")]
		[Address(RVA = "0x4C0FC50", Offset = "0x4C0FC50", VA = "0x4C0FC50")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000211")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x4C0F290", Offset = "0x4C0F290", VA = "0x4C0F290", Slot = "115")]
	internal override FieldDescription[] DescribeFields()
	{
		return null;
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x4C0F930", Offset = "0x4C0F930", VA = "0x4C0F930")]
	public Vector3IntField()
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x4C08E50", Offset = "0x4C08E50", VA = "0x4C08E50")]
	public Vector3IntField(string label)
	{
	}
}
