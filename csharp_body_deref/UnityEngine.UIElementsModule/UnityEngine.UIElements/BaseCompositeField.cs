// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseCompositeField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x200003F")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public abstract class BaseCompositeField<TValueType, TField, TFieldValue> : BaseField<TValueType> where TField : TextValueField<TFieldValue>, new()
{
	[Token(Token = "0x2000040")]
	internal struct FieldDescription
	{
		[Token(Token = "0x2000041")]
		public delegate void WriteDelegate(ref TValueType val, TFieldValue fieldValue);

		[Token(Token = "0x40000D3")]
		[FieldOffset(Offset = "0x0")]
		internal readonly string name;

		[Token(Token = "0x40000D4")]
		[FieldOffset(Offset = "0x0")]
		internal readonly string ussName;

		[Token(Token = "0x40000D5")]
		[FieldOffset(Offset = "0x0")]
		internal readonly Func<TValueType, TFieldValue> read;

		[Token(Token = "0x40000D6")]
		[FieldOffset(Offset = "0x0")]
		internal readonly WriteDelegate write;

		[Token(Token = "0x600021D")]
		public FieldDescription(string name, string ussName, Func<TValueType, TFieldValue> read, WriteDelegate write)
		{
		}
	}

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x0")]
	private List<TField> m_Fields;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x0")]
	private bool m_ShouldUpdateDisplay;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x0")]
	private bool m_ForceUpdateDisplay;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x0")]
	private int m_PropertyIndex;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string spacerUssClassName;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string multilineVariantUssClassName;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string fieldGroupUssClassName;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string fieldUssClassName;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string firstFieldVariantUssClassName;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string twoLinesVariantUssClassName;

	[Token(Token = "0x6000215")]
	private VisualElement GetSpacer()
	{
		return null;
	}

	[Token(Token = "0x6000216")]
	internal abstract FieldDescription[] DescribeFields();

	[Token(Token = "0x6000217")]
	protected BaseCompositeField(string label, int fieldsByLine)
	{
	}

	[Token(Token = "0x6000218")]
	private void UpdateDisplay()
	{
	}

	[Token(Token = "0x6000219")]
	public override void SetValueWithoutNotify(TValueType newValue)
	{
	}

	[Token(Token = "0x600021A")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x600021B")]
	protected override void UpdateMixedValueContent()
	{
	}
}
