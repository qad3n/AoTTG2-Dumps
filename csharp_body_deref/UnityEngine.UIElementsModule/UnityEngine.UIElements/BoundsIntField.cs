// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BoundsIntField
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6BD3CD0", Offset = "0x6BD2CD0", VA = "0x6BD3CD0")]
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
		[Address(RVA = "0x6BD3D10", Offset = "0x6BD2D10", VA = "0x6BD3D10", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000505")]
		[Address(RVA = "0x6BD4030", Offset = "0x6BD3030", VA = "0x6BD4030")]
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
	[Address(RVA = "0x6BD3370", Offset = "0x6BD2370", VA = "0x6BD3370")]
	public BoundsIntField()
	{
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x6BD3380", Offset = "0x6BD2380", VA = "0x6BD3380")]
	public BoundsIntField(string label)
	{
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x6BD3890", Offset = "0x6BD2890", VA = "0x6BD3890", Slot = "159")]
	public override void SetValueWithoutNotify(BoundsInt newValue)
	{
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x6BD3980", Offset = "0x6BD2980", VA = "0x6BD3980", Slot = "158")]
	protected override void UpdateMixedValueContent()
	{
	}
}
