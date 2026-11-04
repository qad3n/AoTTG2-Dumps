// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Vector4Field
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000B2")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class Vector4Field : BaseCompositeField<Vector4, FloatField, float>
{
	[Token(Token = "0x20000B3")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<Vector4Field, UxmlTraits>
	{
		[Token(Token = "0x6000561")]
		[Address(RVA = "0x31E3880", Offset = "0x31E1E80", VA = "0x1831E3880")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000B4")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseField<Vector4>.UxmlTraits
	{
		[Token(Token = "0x4000325")]
		[FieldOffset(Offset = "0x98")]
		private UxmlFloatAttributeDescription m_XValue;

		[Token(Token = "0x4000326")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlFloatAttributeDescription m_YValue;

		[Token(Token = "0x4000327")]
		[FieldOffset(Offset = "0xA8")]
		private UxmlFloatAttributeDescription m_ZValue;

		[Token(Token = "0x4000328")]
		[FieldOffset(Offset = "0xB0")]
		private UxmlFloatAttributeDescription m_WValue;

		[Token(Token = "0x6000562")]
		[Address(RVA = "0x31E3DC0", Offset = "0x31E23C0", VA = "0x1831E3DC0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000563")]
		[Address(RVA = "0x31E6370", Offset = "0x31E4970", VA = "0x1831E6370")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000322")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000323")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000324")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x31E99F0", Offset = "0x31E7FF0", VA = "0x1831E99F0", Slot = "161")]
	internal override FieldDescription[] DescribeFields()
	{
		return null;
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x31EA310", Offset = "0x31E8910", VA = "0x1831EA310")]
	public Vector4Field()
	{
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x31EA430", Offset = "0x31E8A30", VA = "0x1831EA430")]
	public Vector4Field(string label)
	{
	}
}
