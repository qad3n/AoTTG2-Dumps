// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Vector3Field
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000072")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class Vector3Field : BaseCompositeField<Vector3, FloatField, float>
{
	[Token(Token = "0x2000073")]
	public new class UxmlFactory : UxmlFactory<Vector3Field, UxmlTraits>
	{
		[Token(Token = "0x6000382")]
		[Address(RVA = "0x4F34D00", Offset = "0x4F34D00", VA = "0x4F34D00")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000074")]
	public new class UxmlTraits : BaseField<Vector3>.UxmlTraits
	{
		[Token(Token = "0x40001ED")]
		[FieldOffset(Offset = "0x80")]
		private UxmlFloatAttributeDescription m_XValue;

		[Token(Token = "0x40001EE")]
		[FieldOffset(Offset = "0x88")]
		private UxmlFloatAttributeDescription m_YValue;

		[Token(Token = "0x40001EF")]
		[FieldOffset(Offset = "0x90")]
		private UxmlFloatAttributeDescription m_ZValue;

		[Token(Token = "0x6000383")]
		[Address(RVA = "0x4F34D40", Offset = "0x4F34D40", VA = "0x4F34D40", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000384")]
		[Address(RVA = "0x4F34F20", Offset = "0x4F34F20", VA = "0x4F34F20")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40001EA")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40001EB")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40001EC")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x4F34560", Offset = "0x4F34560", VA = "0x4F34560", Slot = "115")]
	internal override FieldDescription[] DescribeFields()
	{
		return null;
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x4F34C00", Offset = "0x4F34C00", VA = "0x4F34C00")]
	public Vector3Field()
	{
	}

	[Token(Token = "0x6000380")]
	[Address(RVA = "0x4F2F7D0", Offset = "0x4F2F7D0", VA = "0x4F2F7D0")]
	public Vector3Field(string label)
	{
	}
}
