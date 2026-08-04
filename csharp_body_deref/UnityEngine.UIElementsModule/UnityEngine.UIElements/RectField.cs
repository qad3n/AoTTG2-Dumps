// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.RectField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000066")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class RectField : BaseCompositeField<Rect, FloatField, float>
{
	[Token(Token = "0x2000067")]
	public new class UxmlFactory : UxmlFactory<RectField, UxmlTraits>
	{
		[Token(Token = "0x6000353")]
		[Address(RVA = "0x4F325A0", Offset = "0x4F325A0", VA = "0x4F325A0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000068")]
	public new class UxmlTraits : BaseField<Rect>.UxmlTraits
	{
		[Token(Token = "0x40001C3")]
		[FieldOffset(Offset = "0x80")]
		private UxmlFloatAttributeDescription m_XValue;

		[Token(Token = "0x40001C4")]
		[FieldOffset(Offset = "0x88")]
		private UxmlFloatAttributeDescription m_YValue;

		[Token(Token = "0x40001C5")]
		[FieldOffset(Offset = "0x90")]
		private UxmlFloatAttributeDescription m_WValue;

		[Token(Token = "0x40001C6")]
		[FieldOffset(Offset = "0x98")]
		private UxmlFloatAttributeDescription m_HValue;

		[Token(Token = "0x6000354")]
		[Address(RVA = "0x4F325E0", Offset = "0x4F325E0", VA = "0x4F325E0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000355")]
		[Address(RVA = "0x4F32830", Offset = "0x4F32830", VA = "0x4F32830")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40001C1")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40001C2")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x4F31AD0", Offset = "0x4F31AD0", VA = "0x4F31AD0", Slot = "115")]
	internal override FieldDescription[] DescribeFields()
	{
		return null;
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x4F32370", Offset = "0x4F32370", VA = "0x4F32370")]
	public RectField()
	{
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x4F32380", Offset = "0x4F32380", VA = "0x4F32380")]
	public RectField(string label)
	{
	}
}
