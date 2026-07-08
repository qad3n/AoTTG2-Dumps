using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000118")]
public class Toggle : BaseBoolField
{
	[Token(Token = "0x2000119")]
	public new class UxmlFactory : UxmlFactory<Toggle, UxmlTraits>
	{
		[Token(Token = "0x6000780")]
		[Address(RVA = "0x4CDA4E0", Offset = "0x4CDA4E0", VA = "0x4CDA4E0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200011A")]
	public new class UxmlTraits : BaseFieldTraits<bool, UxmlBoolAttributeDescription>
	{
		[Token(Token = "0x40004AB")]
		[FieldOffset(Offset = "0x88")]
		private UxmlStringAttributeDescription m_Text;

		[Token(Token = "0x6000781")]
		[Address(RVA = "0x4CDA520", Offset = "0x4CDA520", VA = "0x4CDA520", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000782")]
		[Address(RVA = "0x4CDA630", Offset = "0x4CDA630", VA = "0x4CDA630")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40004A4")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40004A5")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40004A6")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x40004A7")]
	[FieldOffset(Offset = "0x18")]
	[Obsolete]
	public static readonly string noTextVariantUssClassName;

	[Token(Token = "0x40004A8")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string checkmarkUssClassName;

	[Token(Token = "0x40004A9")]
	[FieldOffset(Offset = "0x28")]
	public static readonly string textUssClassName;

	[Token(Token = "0x40004AA")]
	[FieldOffset(Offset = "0x30")]
	public static readonly string mixedValuesUssClassName;

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x4CD9F80", Offset = "0x4CD9F80", VA = "0x4CD9F80")]
	public Toggle()
	{
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x4CD9F90", Offset = "0x4CD9F90", VA = "0x4CD9F90")]
	public Toggle(string label)
	{
	}

	[Token(Token = "0x600077D")]
	[Address(RVA = "0x4CDA0B0", Offset = "0x4CDA0B0", VA = "0x4CDA0B0", Slot = "115")]
	protected override void InitLabel()
	{
	}

	[Token(Token = "0x600077E")]
	[Address(RVA = "0x4CDA130", Offset = "0x4CDA130", VA = "0x4CDA130", Slot = "113")]
	protected override void UpdateMixedValueContent()
	{
	}
}
