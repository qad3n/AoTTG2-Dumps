// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Vector3IntField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000BA")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class Vector3IntField : BaseCompositeField<Vector3Int, IntegerField, int>
{
	[Token(Token = "0x20000BB")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<Vector3IntField, UxmlTraits>
	{
		[Token(Token = "0x600057F")]
		[Address(RVA = "0x31E3BC0", Offset = "0x31E21C0", VA = "0x1831E3BC0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000BC")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseField<Vector3Int>.UxmlTraits
	{
		[Token(Token = "0x400033F")]
		[FieldOffset(Offset = "0x98")]
		private UxmlIntAttributeDescription m_XValue;

		[Token(Token = "0x4000340")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlIntAttributeDescription m_YValue;

		[Token(Token = "0x4000341")]
		[FieldOffset(Offset = "0xA8")]
		private UxmlIntAttributeDescription m_ZValue;

		[Token(Token = "0x6000580")]
		[Address(RVA = "0x31E5E50", Offset = "0x31E4450", VA = "0x1831E5E50", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000581")]
		[Address(RVA = "0x31E6BE0", Offset = "0x31E51E0", VA = "0x1831E6BE0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x400033C")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x400033D")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x400033E")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x31E9160", Offset = "0x31E7760", VA = "0x1831E9160", Slot = "161")]
	internal override FieldDescription[] DescribeFields()
	{
		return null;
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x31E98B0", Offset = "0x31E7EB0", VA = "0x1831E98B0")]
	public Vector3IntField()
	{
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x31E98C0", Offset = "0x31E7EC0", VA = "0x1831E98C0")]
	public Vector3IntField(string label)
	{
	}
}
