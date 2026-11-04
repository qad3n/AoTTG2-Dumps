// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Vector2IntField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000B6")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class Vector2IntField : BaseCompositeField<Vector2Int, IntegerField, int>
{
	[Token(Token = "0x20000B7")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<Vector2IntField, UxmlTraits>
	{
		[Token(Token = "0x6000572")]
		[Address(RVA = "0x31E3C00", Offset = "0x31E2200", VA = "0x1831E3C00")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000B8")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseField<Vector2Int>.UxmlTraits
	{
		[Token(Token = "0x4000335")]
		[FieldOffset(Offset = "0x98")]
		private UxmlIntAttributeDescription m_XValue;

		[Token(Token = "0x4000336")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlIntAttributeDescription m_YValue;

		[Token(Token = "0x6000573")]
		[Address(RVA = "0x31E5570", Offset = "0x31E3B70", VA = "0x1831E5570", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000574")]
		[Address(RVA = "0x31E6770", Offset = "0x31E4D70", VA = "0x1831E6770")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000332")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000333")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000334")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x31E8100", Offset = "0x31E6700", VA = "0x1831E8100", Slot = "161")]
	internal override FieldDescription[] DescribeFields()
	{
		return null;
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x31E87B0", Offset = "0x31E6DB0", VA = "0x1831E87B0")]
	public Vector2IntField()
	{
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x31E8680", Offset = "0x31E6C80", VA = "0x1831E8680")]
	public Vector2IntField(string label)
	{
	}
}
