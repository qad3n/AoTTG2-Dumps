// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Vector3IntField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x200007E")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class Vector3IntField : BaseCompositeField<Vector3Int, IntegerField, int>
{
	[Token(Token = "0x200007F")]
	public new class UxmlFactory : UxmlFactory<Vector3IntField, UxmlTraits>
	{
		[Token(Token = "0x60003AF")]
		[Address(RVA = "0x4F37360", Offset = "0x4F37360", VA = "0x4F37360")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000080")]
	public new class UxmlTraits : BaseField<Vector3Int>.UxmlTraits
	{
		[Token(Token = "0x4000214")]
		[FieldOffset(Offset = "0x80")]
		private UxmlIntAttributeDescription m_XValue;

		[Token(Token = "0x4000215")]
		[FieldOffset(Offset = "0x88")]
		private UxmlIntAttributeDescription m_YValue;

		[Token(Token = "0x4000216")]
		[FieldOffset(Offset = "0x90")]
		private UxmlIntAttributeDescription m_ZValue;

		[Token(Token = "0x60003B0")]
		[Address(RVA = "0x4F373A0", Offset = "0x4F373A0", VA = "0x4F373A0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60003B1")]
		[Address(RVA = "0x4F37580", Offset = "0x4F37580", VA = "0x4F37580")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000211")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x4F36BC0", Offset = "0x4F36BC0", VA = "0x4F36BC0", Slot = "115")]
	internal override FieldDescription[] DescribeFields()
	{
		return null;
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x4F37260", Offset = "0x4F37260", VA = "0x4F37260")]
	public Vector3IntField()
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x4F30780", Offset = "0x4F30780", VA = "0x4F30780")]
	public Vector3IntField(string label)
	{
	}
}
