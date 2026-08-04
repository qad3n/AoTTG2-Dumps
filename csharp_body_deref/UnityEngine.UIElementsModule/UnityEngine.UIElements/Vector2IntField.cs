// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Vector2IntField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x200007A")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class Vector2IntField : BaseCompositeField<Vector2Int, IntegerField, int>
{
	[Token(Token = "0x200007B")]
	public new class UxmlFactory : UxmlFactory<Vector2IntField, UxmlTraits>
	{
		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x4F36830", Offset = "0x4F36830", VA = "0x4F36830")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200007C")]
	public new class UxmlTraits : BaseField<Vector2Int>.UxmlTraits
	{
		[Token(Token = "0x400020A")]
		[FieldOffset(Offset = "0x80")]
		private UxmlIntAttributeDescription m_XValue;

		[Token(Token = "0x400020B")]
		[FieldOffset(Offset = "0x88")]
		private UxmlIntAttributeDescription m_YValue;

		[Token(Token = "0x60003A3")]
		[Address(RVA = "0x4F36870", Offset = "0x4F36870", VA = "0x4F36870", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60003A4")]
		[Address(RVA = "0x4F369F0", Offset = "0x4F369F0", VA = "0x4F369F0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000207")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000209")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x4F36170", Offset = "0x4F36170", VA = "0x4F36170", Slot = "115")]
	internal override FieldDescription[] DescribeFields()
	{
		return null;
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x4F36610", Offset = "0x4F36610", VA = "0x4F36610")]
	public Vector2IntField()
	{
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x4F36620", Offset = "0x4F36620", VA = "0x4F36620")]
	public Vector2IntField(string label)
	{
	}
}
