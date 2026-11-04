// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BoundsField
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000094")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class BoundsField : BaseField<Bounds>
{
	[Token(Token = "0x2000095")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<BoundsField, UxmlTraits>
	{
		[Token(Token = "0x60004F9")]
		[Address(RVA = "0x31E38C0", Offset = "0x31E1EC0", VA = "0x1831E38C0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000096")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseField<Bounds>.UxmlTraits
	{
		[Token(Token = "0x40002CA")]
		[FieldOffset(Offset = "0x98")]
		private UxmlFloatAttributeDescription m_CenterXValue;

		[Token(Token = "0x40002CB")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlFloatAttributeDescription m_CenterYValue;

		[Token(Token = "0x40002CC")]
		[FieldOffset(Offset = "0xA8")]
		private UxmlFloatAttributeDescription m_CenterZValue;

		[Token(Token = "0x40002CD")]
		[FieldOffset(Offset = "0xB0")]
		private UxmlFloatAttributeDescription m_ExtentsXValue;

		[Token(Token = "0x40002CE")]
		[FieldOffset(Offset = "0xB8")]
		private UxmlFloatAttributeDescription m_ExtentsYValue;

		[Token(Token = "0x40002CF")]
		[FieldOffset(Offset = "0xC0")]
		private UxmlFloatAttributeDescription m_ExtentsZValue;

		[Token(Token = "0x60004FA")]
		[Address(RVA = "0x31E46F0", Offset = "0x31E2CF0", VA = "0x1831E46F0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60004FB")]
		[Address(RVA = "0x31E6FD0", Offset = "0x31E55D0", VA = "0x1831E6FD0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40002C3")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40002C4")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40002C5")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x40002C6")]
	[FieldOffset(Offset = "0x18")]
	public static readonly string centerFieldUssClassName;

	[Token(Token = "0x40002C7")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string extentsFieldUssClassName;

	[Token(Token = "0x40002C8")]
	[FieldOffset(Offset = "0x368")]
	private Vector3Field m_CenterField;

	[Token(Token = "0x40002C9")]
	[FieldOffset(Offset = "0x370")]
	private Vector3Field m_ExtentsField;

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x31CD5E0", Offset = "0x31CBBE0", VA = "0x1831CD5E0")]
	public BoundsField()
	{
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x31CD1D0", Offset = "0x31CB7D0", VA = "0x1831CD1D0")]
	public BoundsField(string label)
	{
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x31CCD10", Offset = "0x31CB310", VA = "0x1831CCD10", Slot = "159")]
	public override void SetValueWithoutNotify(Bounds newValue)
	{
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x31CCF80", Offset = "0x31CB580", VA = "0x1831CCF80", Slot = "158")]
	protected override void UpdateMixedValueContent()
	{
	}
}
