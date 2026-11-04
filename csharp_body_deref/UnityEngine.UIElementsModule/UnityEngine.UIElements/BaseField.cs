// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseField
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000E8")]
public abstract class BaseField<TValueType> : BindableElement, INotifyValueChanged<TValueType>, IEditableElement
{
	[Token(Token = "0x20000E9")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BindableElement.UxmlTraits
	{
		[Token(Token = "0x40003ED")]
		[FieldOffset(Offset = "0x0")]
		private UxmlStringAttributeDescription m_Label;

		[Token(Token = "0x6000684")]
		public UxmlTraits()
		{
		}

		[Token(Token = "0x6000685")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}
	}

	[Token(Token = "0x40003CC")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIToolkitAuthoringModule" })]
	internal static readonly BindingId valueProperty;

	[Token(Token = "0x40003CD")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId labelProperty;

	[Token(Token = "0x40003CE")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId showMixedValueProperty;

	[Token(Token = "0x40003CF")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string ussClassName;

	[Token(Token = "0x40003D0")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string labelUssClassName;

	[Token(Token = "0x40003D1")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string inputUssClassName;

	[Token(Token = "0x40003D2")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string noLabelVariantUssClassName;

	[Token(Token = "0x40003D3")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string labelDraggerVariantUssClassName;

	[Token(Token = "0x40003D4")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string mixedValueLabelUssClassName;

	[Token(Token = "0x40003D5")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string alignedFieldUssClassName;

	[Token(Token = "0x40003D6")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string inspectorFieldUssClassName;

	[Token(Token = "0x40003D7")]
	[FieldOffset(Offset = "0x0")]
	protected internal static readonly string mixedValueString;

	[Token(Token = "0x40003D8")]
	[FieldOffset(Offset = "0x0")]
	protected internal static readonly PropertyName serializedPropertyCopyName;

	[Token(Token = "0x40003D9")]
	[FieldOffset(Offset = "0x0")]
	private static CustomStyleProperty<float> s_LabelWidthRatioProperty;

	[Token(Token = "0x40003DA")]
	[FieldOffset(Offset = "0x0")]
	private static CustomStyleProperty<float> s_LabelExtraPaddingProperty;

	[Token(Token = "0x40003DB")]
	[FieldOffset(Offset = "0x0")]
	private static CustomStyleProperty<float> s_LabelBaseMinWidthProperty;

	[Token(Token = "0x40003DC")]
	[FieldOffset(Offset = "0x0")]
	private float m_LabelWidthRatio;

	[Token(Token = "0x40003DD")]
	[FieldOffset(Offset = "0x0")]
	private float m_LabelExtraPadding;

	[Token(Token = "0x40003DE")]
	[FieldOffset(Offset = "0x0")]
	private float m_LabelBaseMinWidth;

	[Token(Token = "0x40003DF")]
	[FieldOffset(Offset = "0x0")]
	private VisualElement m_VisualInput;

	[Token(Token = "0x40003E0")]
	[FieldOffset(Offset = "0x0")]
	internal Action<ExpressionEvaluator.Expression> expressionEvaluated;

	[Token(Token = "0x40003E1")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action m_viewDataRestored;

	[Token(Token = "0x40003E2")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	[DontCreateProperty]
	private TValueType m_Value;

	[Token(Token = "0x40003E3")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Func<TValueType, TValueType> m_onValidateValue;

	[Token(Token = "0x40003E6")]
	[FieldOffset(Offset = "0x0")]
	private bool m_ShowMixedValue;

	[Token(Token = "0x40003E7")]
	[FieldOffset(Offset = "0x0")]
	private Label m_MixedValueLabel;

	[Token(Token = "0x40003E8")]
	[FieldOffset(Offset = "0x0")]
	private bool m_SkipValidation;

	[Token(Token = "0x40003E9")]
	[FieldOffset(Offset = "0x0")]
	private VisualElement m_CachedContextWidthElement;

	[Token(Token = "0x40003EA")]
	[FieldOffset(Offset = "0x0")]
	private VisualElement m_CachedInspectorElement;

	[Token(Token = "0x1700010E")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal VisualElement visualInput
	{
		[Token(Token = "0x600065D")]
		get
		{
			return null;
		}
		[Token(Token = "0x600065E")]
		set
		{
		}
	}

	[Token(Token = "0x1700010F")]
	protected TValueType rawValue
	{
		[Token(Token = "0x600065F")]
		get
		{
			return (TValueType)null;
		}
		[Token(Token = "0x6000660")]
		set
		{
		}
	}

	[Token(Token = "0x17000110")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal DispatchMode dispatchMode
	{
		[Token(Token = "0x6000663")]
		[CompilerGenerated]
		get
		{
			return default(DispatchMode);
		}
		[Token(Token = "0x6000664")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000111")]
	[CreateProperty]
	public virtual TValueType value
	{
		[Token(Token = "0x6000665")]
		get
		{
			return (TValueType)null;
		}
		[Token(Token = "0x6000666")]
		set
		{
		}
	}

	[Token(Token = "0x17000112")]
	public Label labelElement
	{
		[Token(Token = "0x6000667")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000668")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000113")]
	[CreateProperty]
	public string label
	{
		[Token(Token = "0x6000669")]
		get
		{
			return null;
		}
		[Token(Token = "0x600066A")]
		set
		{
		}
	}

	[Token(Token = "0x17000114")]
	[CreateProperty]
	public bool showMixedValue
	{
		[Token(Token = "0x600066B")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600066C")]
		set
		{
		}
	}

	[Token(Token = "0x17000115")]
	private protected virtual bool canSwitchToMixedValue
	{
		[Token(Token = "0x600066D")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000116")]
	protected Label mixedValueLabel
	{
		[Token(Token = "0x600066E")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000117")]
	private Action UnityEngine_002EUIElements_002EIEditableElement_002EeditingStarted
	{
		[Token(Token = "0x600066F")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000118")]
	private Action UnityEngine_002EUIElements_002EIEditableElement_002EeditingEnded
	{
		[Token(Token = "0x6000670")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000012")]
	internal event Action viewDataRestored
	{
		[Token(Token = "0x600065B")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600065C")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000013")]
	internal event Func<TValueType, TValueType> onValidateValue
	{
		[Token(Token = "0x6000661")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000662")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000671")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal BaseField(string label)
	{
	}

	[Token(Token = "0x6000672")]
	protected BaseField(string label, VisualElement visualInput)
	{
	}

	[Token(Token = "0x6000673")]
	internal virtual bool EqualsCurrentValue(TValueType value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000674")]
	private void OnAttachToPanel(AttachToPanelEvent e)
	{
	}

	[Token(Token = "0x6000675")]
	private void OnDetachFromPanel(DetachFromPanelEvent e)
	{
	}

	[Token(Token = "0x6000676")]
	internal virtual void RegisterEditingCallbacks()
	{
	}

	[Token(Token = "0x6000677")]
	internal virtual void UnregisterEditingCallbacks()
	{
	}

	[Token(Token = "0x6000678")]
	internal void StartEditing(EventBase e)
	{
	}

	[Token(Token = "0x6000679")]
	internal void EndEditing(EventBase e)
	{
	}

	[Token(Token = "0x600067A")]
	private void OnCustomStyleResolved(CustomStyleResolvedEvent evt)
	{
	}

	[Token(Token = "0x600067B")]
	private void OnInspectorFieldGeometryChanged(GeometryChangedEvent e)
	{
	}

	[Token(Token = "0x600067C")]
	private void AlignLabel()
	{
	}

	[Token(Token = "0x600067D")]
	private Rect ComputeTooltipRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x600067E")]
	internal TValueType ValidatedValue(TValueType value)
	{
		return (TValueType)null;
	}

	[Token(Token = "0x600067F")]
	[EventInterest(new Type[] { typeof(TooltipEvent) })]
	protected override void HandleEventBubbleUp(EventBase evt)
	{
	}

	[Token(Token = "0x6000680")]
	protected virtual void UpdateMixedValueContent()
	{
	}

	[Token(Token = "0x6000681")]
	public virtual void SetValueWithoutNotify(TValueType newValue)
	{
	}

	[Token(Token = "0x6000682")]
	internal override void OnViewDataReady()
	{
	}
}
