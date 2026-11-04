// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BoundsIntField
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000097")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class BoundsIntField : BaseField<BoundsInt>
{
	[Token(Token = "0x2000098")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<BoundsIntField, UxmlTraits>
	{
		[Token(Token = "0x6000503")]
		[Address(RVA = "0x31E3A40", Offset = "0x31E2040", VA = "0x1831E3A40")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000099")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseField<BoundsInt>.UxmlTraits
	{
		[Token(Token = "0x40002D7")]
		[FieldOffset(Offset = "0x98")]
		private UxmlIntAttributeDescription m_PositionXValue;

		[Token(Token = "0x40002D8")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlIntAttributeDescription m_PositionYValue;

		[Token(Token = "0x40002D9")]
		[FieldOffset(Offset = "0xA8")]
		private UxmlIntAttributeDescription m_PositionZValue;

		[Token(Token = "0x40002DA")]
		[FieldOffset(Offset = "0xB0")]
		private UxmlIntAttributeDescription m_SizeXValue;

		[Token(Token = "0x40002DB")]
		[FieldOffset(Offset = "0xB8")]
		private UxmlIntAttributeDescription m_SizeYValue;

		[Token(Token = "0x40002DC")]
		[FieldOffset(Offset = "0xC0")]
		private UxmlIntAttributeDescription m_SizeZValue;

		[Token(Token = "0x6000504")]
		[Address(RVA = "0x31E5000", Offset = "0x31E3600", VA = "0x1831E5000", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000505")]
		[Address(RVA = "0x31E6980", Offset = "0x31E4F80", VA = "0x1831E6980")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40002D0")]
	[FieldOffset(Offset = "0x368")]
	private Vector3IntField m_PositionField;

	[Token(Token = "0x40002D1")]
	[FieldOffset(Offset = "0x370")]
	private Vector3IntField m_SizeField;

	[Token(Token = "0x40002D2")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40002D3")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40002D4")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x40002D5")]
	[FieldOffset(Offset = "0x18")]
	public static readonly string positionUssClassName;

	[Token(Token = "0x40002D6")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string sizeUssClassName;

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x31CDAB0", Offset = "0x31CC0B0", VA = "0x1831CDAB0")]
	public BoundsIntField()
	{
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x31CDAC0", Offset = "0x31CC0C0", VA = "0x1831CDAC0")]
	public BoundsIntField(string label)
	{
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x31CD5F0", Offset = "0x31CBBF0", VA = "0x1831CD5F0", Slot = "159")]
	public override void SetValueWithoutNotify(BoundsInt newValue)
	{
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x31CD860", Offset = "0x31CBE60", VA = "0x1831CD860", Slot = "158")]
	protected override void UpdateMixedValueContent()
	{
	}
}
