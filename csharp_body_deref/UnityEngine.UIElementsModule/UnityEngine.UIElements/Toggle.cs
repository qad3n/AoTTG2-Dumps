// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Toggle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000162")]
public class Toggle : BaseBoolField
{
	[Token(Token = "0x2000163")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<Toggle, UxmlTraits>
	{
		[Token(Token = "0x6000A40")]
		[Address(RVA = "0x3254C40", Offset = "0x3253240", VA = "0x183254C40")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000164")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseFieldTraits<bool, UxmlBoolAttributeDescription>
	{
		[Token(Token = "0x400067D")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlStringAttributeDescription m_Text;

		[Token(Token = "0x6000A41")]
		[Address(RVA = "0x3254D40", Offset = "0x3253340", VA = "0x183254D40", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000A42")]
		[Address(RVA = "0x3255800", Offset = "0x3253E00", VA = "0x183255800")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000676")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000677")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000678")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x4000679")]
	[FieldOffset(Offset = "0x18")]
	[Obsolete]
	public static readonly string noTextVariantUssClassName;

	[Token(Token = "0x400067A")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string checkmarkUssClassName;

	[Token(Token = "0x400067B")]
	[FieldOffset(Offset = "0x28")]
	public static readonly string textUssClassName;

	[Token(Token = "0x400067C")]
	[FieldOffset(Offset = "0x30")]
	public static readonly string mixedValuesUssClassName;

	[Token(Token = "0x6000A3B")]
	[Address(RVA = "0x324BAE0", Offset = "0x324A0E0", VA = "0x18324BAE0")]
	public Toggle()
	{
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x324B9A0", Offset = "0x3249FA0", VA = "0x18324B9A0")]
	public Toggle(string label)
	{
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x324B520", Offset = "0x3249B20", VA = "0x18324B520", Slot = "160")]
	protected override void InitLabel()
	{
	}

	[Token(Token = "0x6000A3E")]
	[Address(RVA = "0x324B5A0", Offset = "0x3249BA0", VA = "0x18324B5A0", Slot = "158")]
	protected override void UpdateMixedValueContent()
	{
	}
}
