using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000076")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class Vector4Field : BaseCompositeField<Vector4, FloatField, float>
{
	[Token(Token = "0x2000077")]
	public new class UxmlFactory : UxmlFactory<Vector4Field, UxmlTraits>
	{
		[Token(Token = "0x6000391")]
		[Address(RVA = "0x4C0E2F0", Offset = "0x4C0E2F0", VA = "0x4C0E2F0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000078")]
	public new class UxmlTraits : BaseField<Vector4>.UxmlTraits
	{
		[Token(Token = "0x40001FA")]
		[FieldOffset(Offset = "0x80")]
		private UxmlFloatAttributeDescription m_XValue;

		[Token(Token = "0x40001FB")]
		[FieldOffset(Offset = "0x88")]
		private UxmlFloatAttributeDescription m_YValue;

		[Token(Token = "0x40001FC")]
		[FieldOffset(Offset = "0x90")]
		private UxmlFloatAttributeDescription m_ZValue;

		[Token(Token = "0x40001FD")]
		[FieldOffset(Offset = "0x98")]
		private UxmlFloatAttributeDescription m_WValue;

		[Token(Token = "0x6000392")]
		[Address(RVA = "0x4C0E330", Offset = "0x4C0E330", VA = "0x4C0E330", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000393")]
		[Address(RVA = "0x4C0E580", Offset = "0x4C0E580", VA = "0x4C0E580")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40001F8")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x4C0D830", Offset = "0x4C0D830", VA = "0x4C0D830", Slot = "115")]
	internal override FieldDescription[] DescribeFields()
	{
		return null;
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x4C0E0D0", Offset = "0x4C0E0D0", VA = "0x4C0E0D0")]
	public Vector4Field()
	{
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x4C0E0E0", Offset = "0x4C0E0E0", VA = "0x4C0E0E0")]
	public Vector4Field(string label)
	{
	}
}
