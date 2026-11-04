// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseCompositeField
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000072")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public abstract class BaseCompositeField<TValueType, TField, TFieldValue> : BaseField<TValueType>, IDelayedField where TField : TextValueField<TFieldValue>, new()
{
	[Token(Token = "0x2000073")]
	internal struct FieldDescription
	{
		[Token(Token = "0x2000074")]
		public delegate void WriteDelegate(ref TValueType val, TFieldValue fieldValue);

		[Token(Token = "0x40001A1")]
		[FieldOffset(Offset = "0x0")]
		internal readonly string name;

		[Token(Token = "0x40001A2")]
		[FieldOffset(Offset = "0x0")]
		internal readonly string ussName;

		[Token(Token = "0x40001A3")]
		[FieldOffset(Offset = "0x0")]
		internal readonly Func<TValueType, TFieldValue> read;

		[Token(Token = "0x40001A4")]
		[FieldOffset(Offset = "0x0")]
		internal readonly WriteDelegate write;

		[Token(Token = "0x600038E")]
		public FieldDescription(string name, string ussName, Func<TValueType, TFieldValue> read, WriteDelegate write)
		{
		}
	}

	[Token(Token = "0x4000193")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId isDelayedProperty;

	[Token(Token = "0x4000194")]
	[FieldOffset(Offset = "0x0")]
	private List<TField> m_Fields;

	[Token(Token = "0x4000195")]
	[FieldOffset(Offset = "0x0")]
	private bool m_ShouldUpdateDisplay;

	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x0")]
	private bool m_ForceUpdateDisplay;

	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0x0")]
	private bool m_IsDelayed;

	[Token(Token = "0x4000198")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000199")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x400019A")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x400019B")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string spacerUssClassName;

	[Token(Token = "0x400019C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string multilineVariantUssClassName;

	[Token(Token = "0x400019D")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string fieldGroupUssClassName;

	[Token(Token = "0x400019E")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string fieldUssClassName;

	[Token(Token = "0x400019F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string firstFieldVariantUssClassName;

	[Token(Token = "0x40001A0")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string twoLinesVariantUssClassName;

	[Token(Token = "0x17000096")]
	internal List<TField> fields
	{
		[Token(Token = "0x6000384")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000097")]
	[CreateProperty]
	public bool isDelayed
	{
		[Token(Token = "0x6000386")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000387")]
		set
		{
		}
	}

	[Token(Token = "0x6000383")]
	private VisualElement GetSpacer()
	{
		return null;
	}

	[Token(Token = "0x6000385")]
	internal abstract FieldDescription[] DescribeFields();

	[Token(Token = "0x6000388")]
	protected BaseCompositeField(string label, int fieldsByLine)
	{
	}

	[Token(Token = "0x6000389")]
	private void UpdateDisplay()
	{
	}

	[Token(Token = "0x600038A")]
	public override void SetValueWithoutNotify(TValueType newValue)
	{
	}

	[Token(Token = "0x600038B")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x600038C")]
	protected override void UpdateMixedValueContent()
	{
	}
}
