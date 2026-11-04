// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Vector3Field
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000AE")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class Vector3Field : BaseCompositeField<Vector3, FloatField, float>
{
	[Token(Token = "0x20000AF")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<Vector3Field, UxmlTraits>
	{
		[Token(Token = "0x6000552")]
		[Address(RVA = "0x31E3840", Offset = "0x31E1E40", VA = "0x1831E3840")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000B0")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseField<Vector3>.UxmlTraits
	{
		[Token(Token = "0x4000318")]
		[FieldOffset(Offset = "0x98")]
		private UxmlFloatAttributeDescription m_XValue;

		[Token(Token = "0x4000319")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlFloatAttributeDescription m_YValue;

		[Token(Token = "0x400031A")]
		[FieldOffset(Offset = "0xA8")]
		private UxmlFloatAttributeDescription m_ZValue;

		[Token(Token = "0x6000553")]
		[Address(RVA = "0x31E6060", Offset = "0x31E4660", VA = "0x1831E6060", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000554")]
		[Address(RVA = "0x31E65D0", Offset = "0x31E4BD0", VA = "0x1831E65D0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000315")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000316")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000317")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x31E88D0", Offset = "0x31E6ED0", VA = "0x1831E88D0", Slot = "161")]
	internal override FieldDescription[] DescribeFields()
	{
		return null;
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x31E9150", Offset = "0x31E7750", VA = "0x1831E9150")]
	public Vector3Field()
	{
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x31E9020", Offset = "0x31E7620", VA = "0x1831E9020")]
	public Vector3Field(string label)
	{
	}
}
