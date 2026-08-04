// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Vector4Field
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000076")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class Vector4Field : BaseCompositeField<Vector4, FloatField, float>
{
	[Token(Token = "0x2000077")]
	public new class UxmlFactory : UxmlFactory<Vector4Field, UxmlTraits>
	{
		[Token(Token = "0x6000391")]
		[Address(RVA = "0x4F35C20", Offset = "0x4F35C20", VA = "0x4F35C20")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000078")]
	public new class UxmlTraits : BaseField<Vector4>.UxmlTraits
	{
		[Token(Token = "0x40001FA")]
		[FieldOffset(Offset = "0x80")]
		private UxmlFloatAttributeDescription m_XValue;

		[Token(Token = "0x40001FB")]
		[FieldOffset(Offset = "0x88")]
		private UxmlFloatAttributeDescription m_YValue;

		[Token(Token = "0x40001FC")]
		[FieldOffset(Offset = "0x90")]
		private UxmlFloatAttributeDescription m_ZValue;

		[Token(Token = "0x40001FD")]
		[FieldOffset(Offset = "0x98")]
		private UxmlFloatAttributeDescription m_WValue;

		[Token(Token = "0x6000392")]
		[Address(RVA = "0x4F35C60", Offset = "0x4F35C60", VA = "0x4F35C60", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000393")]
		[Address(RVA = "0x4F35EB0", Offset = "0x4F35EB0", VA = "0x4F35EB0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40001F8")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x4F35160", Offset = "0x4F35160", VA = "0x4F35160", Slot = "115")]
	internal override FieldDescription[] DescribeFields()
	{
		return null;
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x4F35A00", Offset = "0x4F35A00", VA = "0x4F35A00")]
	public Vector4Field()
	{
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x4F35A10", Offset = "0x4F35A10", VA = "0x4F35A10")]
	public Vector4Field(string label)
	{
	}
}
