// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000AA")]
public abstract class BaseField<TValueType> : BindableElement, INotifyValueChanged<TValueType>, IEditableElement
{
	[Token(Token = "0x20000AB")]
	public new class UxmlTraits : BindableElement.UxmlTraits
	{
		[Token(Token = "0x40002B4")]
		[FieldOffset(Offset = "0x0")]
		private UxmlStringAttributeDescription m_Label;

		[Token(Token = "0x600049B")]
		public UxmlTraits()
		{
		}

		[Token(Token = "0x600049C")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}
	}

	[Token(Token = "0x4000294")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty valueProperty;

	[Token(Token = "0x4000295")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty labelProperty;

	[Token(Token = "0x4000296")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty showMixedValueProperty;

	[Token(Token = "0x4000297")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string ussClassName;

	[Token(Token = "0x4000298")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string labelUssClassName;

	[Token(Token = "0x4000299")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string inputUssClassName;

	[Token(Token = "0x400029A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string noLabelVariantUssClassName;

	[Token(Token = "0x400029B")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string labelDraggerVariantUssClassName;

	[Token(Token = "0x400029C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string mixedValueLabelUssClassName;

	[Token(Token = "0x400029D")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string alignedFieldUssClassName;

	[Token(Token = "0x400029E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string inspectorFieldUssClassName;

	[Token(Token = "0x400029F")]
	[FieldOffset(Offset = "0x0")]
	protected internal static readonly string mixedValueString;

	[Token(Token = "0x40002A0")]
	[FieldOffset(Offset = "0x0")]
	protected internal static readonly PropertyName serializedPropertyCopyName;

	[Token(Token = "0x40002A1")]
	[FieldOffset(Offset = "0x0")]
	private static CustomStyleProperty<float> s_LabelWidthRatioProperty;

	[Token(Token = "0x40002A2")]
	[FieldOffset(Offset = "0x0")]
	private static CustomStyleProperty<float> s_LabelExtraPaddingProperty;

	[Token(Token = "0x40002A3")]
	[FieldOffset(Offset = "0x0")]
	private static CustomStyleProperty<float> s_LabelBaseMinWidthProperty;

	[Token(Token = "0x40002A4")]
	[FieldOffset(Offset = "0x0")]
	private static CustomStyleProperty<float> s_LabelExtraContextWidthProperty;

	[Token(Token = "0x40002A5")]
	[FieldOffset(Offset = "0x0")]
	private float m_LabelWidthRatio;

	[Token(Token = "0x40002A6")]
	[FieldOffset(Offset = "0x0")]
	private float m_LabelExtraPadding;

	[Token(Token = "0x40002A7")]
	[FieldOffset(Offset = "0x0")]
	private float m_LabelBaseMinWidth;

	[Token(Token = "0x40002A8")]
	[FieldOffset(Offset = "0x0")]
	private float m_LabelExtraContextWidth;

	[Token(Token = "0x40002A9")]
	[FieldOffset(Offset = "0x0")]
	private VisualElement m_VisualInput;

	[Token(Token = "0x40002AA")]
	[FieldOffset(Offset = "0x0")]
	[DontCreateProperty]
	[SerializeField]
	private TValueType m_Value;

	[Token(Token = "0x40002AD")]
	[FieldOffset(Offset = "0x0")]
	private bool m_ShowMixedValue;

	[Token(Token = "0x40002AE")]
	[FieldOffset(Offset = "0x0")]
	private Label m_MixedValueLabel;

	[Token(Token = "0x40002AF")]
	[FieldOffset(Offset = "0x0")]
	private bool m_SkipValidation;

	[Token(Token = "0x40002B0")]
	[FieldOffset(Offset = "0x0")]
	private VisualElement m_CachedContextWidthElement;

	[Token(Token = "0x40002B1")]
	[FieldOffset(Offset = "0x0")]
	private VisualElement m_CachedInspectorElement;

	[Token(Token = "0x170000A5")]
	internal VisualElement visualInput
	{
		[Token(Token = "0x6000479")]
		get
		{
			return null;
		}
		[Token(Token = "0x600047A")]
		set
		{
		}
	}

	[Token(Token = "0x170000A6")]
	protected TValueType rawValue
	{
		[Token(Token = "0x600047B")]
		get
		{
			return (TValueType)null;
		}
		[Token(Token = "0x600047C")]
		set
		{
		}
	}

	[Token(Token = "0x170000A7")]
	[CreateProperty]
	public virtual TValueType value
	{
		[Token(Token = "0x600047F")]
		get
		{
			return (TValueType)null;
		}
		[Token(Token = "0x6000480")]
		set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	public Label labelElement
	{
		[Token(Token = "0x6000481")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000482")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	[CreateProperty]
	public string label
	{
		[Token(Token = "0x6000483")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000484")]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	[CreateProperty]
	public bool showMixedValue
	{
		[Token(Token = "0x6000485")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000486")]
		set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	protected Label mixedValueLabel
	{
		[Token(Token = "0x6000487")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AC")]
	private Action UnityEngine_002EUIElements_002EIEditableElement_002EeditingStarted
	{
		[Token(Token = "0x6000488")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AD")]
	private Action UnityEngine_002EUIElements_002EIEditableElement_002EeditingEnded
	{
		[Token(Token = "0x6000489")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1400000D")]
	internal event Func<TValueType, TValueType> onValidateValue
	{
		[Token(Token = "0x600047D")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600047E")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600048A")]
	internal BaseField(string label)
	{
	}

	[Token(Token = "0x600048B")]
	protected BaseField(string label, VisualElement visualInput)
	{
	}

	[Token(Token = "0x600048C")]
	private void OnAttachToPanel(AttachToPanelEvent e)
	{
	}

	[Token(Token = "0x600048D")]
	private void OnDetachFromPanel(DetachFromPanelEvent e)
	{
	}

	[Token(Token = "0x600048E")]
	internal virtual void RegisterEditingCallbacks()
	{
	}

	[Token(Token = "0x600048F")]
	internal virtual void UnregisterEditingCallbacks()
	{
	}

	[Token(Token = "0x6000490")]
	internal void StartEditing(EventBase e)
	{
	}

	[Token(Token = "0x6000491")]
	internal void EndEditing(EventBase e)
	{
	}

	[Token(Token = "0x6000492")]
	private void OnCustomStyleResolved(CustomStyleResolvedEvent evt)
	{
	}

	[Token(Token = "0x6000493")]
	private void OnInspectorFieldGeometryChanged(GeometryChangedEvent e)
	{
	}

	[Token(Token = "0x6000494")]
	private void AlignLabel()
	{
	}

	[Token(Token = "0x6000495")]
	internal TValueType ValidatedValue(TValueType value)
	{
		return (TValueType)null;
	}

	[Token(Token = "0x6000496")]
	protected virtual void UpdateMixedValueContent()
	{
	}

	[Token(Token = "0x6000497")]
	public virtual void SetValueWithoutNotify(TValueType newValue)
	{
	}

	[Token(Token = "0x6000498")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x6000499")]
	internal override Rect GetTooltipRect()
	{
		return default(Rect);
	}
}
