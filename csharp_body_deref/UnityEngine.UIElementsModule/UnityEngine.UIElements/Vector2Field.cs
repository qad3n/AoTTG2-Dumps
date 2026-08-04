// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Vector2Field
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x200006E")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class Vector2Field : BaseCompositeField<Vector2, FloatField, float>
{
	[Token(Token = "0x200006F")]
	public new class UxmlFactory : UxmlFactory<Vector2Field, UxmlTraits>
	{
		[Token(Token = "0x6000375")]
		[Address(RVA = "0x4F341D0", Offset = "0x4F341D0", VA = "0x4F341D0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000070")]
	public new class UxmlTraits : BaseField<Vector2>.UxmlTraits
	{
		[Token(Token = "0x40001E3")]
		[FieldOffset(Offset = "0x80")]
		private UxmlFloatAttributeDescription m_XValue;

		[Token(Token = "0x40001E4")]
		[FieldOffset(Offset = "0x88")]
		private UxmlFloatAttributeDescription m_YValue;

		[Token(Token = "0x6000376")]
		[Address(RVA = "0x4F34210", Offset = "0x4F34210", VA = "0x4F34210", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000377")]
		[Address(RVA = "0x4F34390", Offset = "0x4F34390", VA = "0x4F34390")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40001E0")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40001E1")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40001E2")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x4F33B10", Offset = "0x4F33B10", VA = "0x4F33B10", Slot = "115")]
	internal override FieldDescription[] DescribeFields()
	{
		return null;
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x4F33FB0", Offset = "0x4F33FB0", VA = "0x4F33FB0")]
	public Vector2Field()
	{
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x4F33FC0", Offset = "0x4F33FC0", VA = "0x4F33FC0")]
	public Vector2Field(string label)
	{
	}
}
