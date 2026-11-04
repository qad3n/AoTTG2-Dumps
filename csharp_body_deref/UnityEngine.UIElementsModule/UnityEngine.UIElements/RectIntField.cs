// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.RectIntField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000A6")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class RectIntField : BaseCompositeField<RectInt, IntegerField, int>
{
	[Token(Token = "0x20000A7")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<RectIntField, UxmlTraits>
	{
		[Token(Token = "0x6000534")]
		[Address(RVA = "0x31E3A80", Offset = "0x31E2080", VA = "0x1831E3A80")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000A8")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseField<RectInt>.UxmlTraits
	{
		[Token(Token = "0x40002FE")]
		[FieldOffset(Offset = "0x98")]
		private UxmlIntAttributeDescription m_XValue;

		[Token(Token = "0x40002FF")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlIntAttributeDescription m_YValue;

		[Token(Token = "0x4000300")]
		[FieldOffset(Offset = "0xA8")]
		private UxmlIntAttributeDescription m_WValue;

		[Token(Token = "0x4000301")]
		[FieldOffset(Offset = "0xB0")]
		private UxmlIntAttributeDescription m_HValue;

		[Token(Token = "0x6000535")]
		[Address(RVA = "0x31E4490", Offset = "0x31E2A90", VA = "0x1831E4490", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000536")]
		[Address(RVA = "0x31E6D40", Offset = "0x31E5340", VA = "0x1831E6D40")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40002FB")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40002FC")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40002FD")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x6000530")]
	[Address(RVA = "0x31DFB50", Offset = "0x31DE150", VA = "0x1831DFB50", Slot = "161")]
	internal override FieldDescription[] DescribeFields()
	{
		return null;
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x31E0470", Offset = "0x31DEA70", VA = "0x1831E0470")]
	public RectIntField()
	{
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x31E05B0", Offset = "0x31DEBB0", VA = "0x1831E05B0")]
	public RectIntField(string label)
	{
	}
}
