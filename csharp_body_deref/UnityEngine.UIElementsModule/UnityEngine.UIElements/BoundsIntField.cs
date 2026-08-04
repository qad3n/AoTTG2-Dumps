// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BoundsIntField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x200005B")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class BoundsIntField : BaseField<BoundsInt>
{
	[Token(Token = "0x200005C")]
	public new class UxmlFactory : UxmlFactory<BoundsIntField, UxmlTraits>
	{
		[Token(Token = "0x600033B")]
		[Address(RVA = "0x4F30D20", Offset = "0x4F30D20", VA = "0x4F30D20")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200005D")]
	public new class UxmlTraits : BaseField<BoundsInt>.UxmlTraits
	{
		[Token(Token = "0x40001B5")]
		[FieldOffset(Offset = "0x80")]
		private UxmlIntAttributeDescription m_PositionXValue;

		[Token(Token = "0x40001B6")]
		[FieldOffset(Offset = "0x88")]
		private UxmlIntAttributeDescription m_PositionYValue;

		[Token(Token = "0x40001B7")]
		[FieldOffset(Offset = "0x90")]
		private UxmlIntAttributeDescription m_PositionZValue;

		[Token(Token = "0x40001B8")]
		[FieldOffset(Offset = "0x98")]
		private UxmlIntAttributeDescription m_SizeXValue;

		[Token(Token = "0x40001B9")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlIntAttributeDescription m_SizeYValue;

		[Token(Token = "0x40001BA")]
		[FieldOffset(Offset = "0xA8")]
		private UxmlIntAttributeDescription m_SizeZValue;

		[Token(Token = "0x600033C")]
		[Address(RVA = "0x4F30D60", Offset = "0x4F30D60", VA = "0x4F30D60", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x600033D")]
		[Address(RVA = "0x4F31090", Offset = "0x4F31090", VA = "0x4F31090")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40001AE")]
	[FieldOffset(Offset = "0x460")]
	private Vector3IntField m_PositionField;

	[Token(Token = "0x40001AF")]
	[FieldOffset(Offset = "0x468")]
	private Vector3IntField m_SizeField;

	[Token(Token = "0x40001B0")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40001B1")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40001B2")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x40001B3")]
	[FieldOffset(Offset = "0x18")]
	public static readonly string positionUssClassName;

	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string sizeUssClassName;

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x4F30380", Offset = "0x4F30380", VA = "0x4F30380")]
	public BoundsIntField()
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x4F30390", Offset = "0x4F30390", VA = "0x4F30390")]
	public BoundsIntField(string label)
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x4F308A0", Offset = "0x4F308A0", VA = "0x4F308A0", Slot = "114")]
	public override void SetValueWithoutNotify(BoundsInt newValue)
	{
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x4F30990", Offset = "0x4F30990", VA = "0x4F30990", Slot = "113")]
	protected override void UpdateMixedValueContent()
	{
	}
}
