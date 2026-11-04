// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.RectField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000A2")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class RectField : BaseCompositeField<Rect, FloatField, float>
{
	[Token(Token = "0x20000A3")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<RectField, UxmlTraits>
	{
		[Token(Token = "0x6000523")]
		[Address(RVA = "0x31E3B00", Offset = "0x31E2100", VA = "0x1831E3B00")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000A4")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseField<Rect>.UxmlTraits
	{
		[Token(Token = "0x40002EE")]
		[FieldOffset(Offset = "0x98")]
		private UxmlFloatAttributeDescription m_XValue;

		[Token(Token = "0x40002EF")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlFloatAttributeDescription m_YValue;

		[Token(Token = "0x40002F0")]
		[FieldOffset(Offset = "0xA8")]
		private UxmlFloatAttributeDescription m_WValue;

		[Token(Token = "0x40002F1")]
		[FieldOffset(Offset = "0xB0")]
		private UxmlFloatAttributeDescription m_HValue;

		[Token(Token = "0x6000524")]
		[Address(RVA = "0x31E5310", Offset = "0x31E3910", VA = "0x1831E5310", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000525")]
		[Address(RVA = "0x31E7510", Offset = "0x31E5B10", VA = "0x1831E7510")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40002EB")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40002EC")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40002ED")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x31DEFA0", Offset = "0x31DD5A0", VA = "0x1831DEFA0", Slot = "161")]
	internal override FieldDescription[] DescribeFields()
	{
		return null;
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x31DF8C0", Offset = "0x31DDEC0", VA = "0x1831DF8C0")]
	public RectField()
	{
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x31DFA00", Offset = "0x31DE000", VA = "0x1831DFA00")]
	public RectField(string label)
	{
	}
}
