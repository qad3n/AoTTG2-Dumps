// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.AbstractProgressBar
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200012E")]
public abstract class AbstractProgressBar : BindableElement, INotifyValueChanged<float>
{
	[Token(Token = "0x200012F")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BindableElement.UxmlTraits
	{
		[Token(Token = "0x4000552")]
		[FieldOffset(Offset = "0x90")]
		private UxmlFloatAttributeDescription m_LowValue;

		[Token(Token = "0x4000553")]
		[FieldOffset(Offset = "0x98")]
		private UxmlFloatAttributeDescription m_HighValue;

		[Token(Token = "0x4000554")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlFloatAttributeDescription m_Value;

		[Token(Token = "0x4000555")]
		[FieldOffset(Offset = "0xA8")]
		private UxmlStringAttributeDescription m_Title;

		[Token(Token = "0x60008C7")]
		[Address(RVA = "0x3225CE0", Offset = "0x32242E0", VA = "0x183225CE0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60008C8")]
		[Address(RVA = "0x3226840", Offset = "0x3224E40", VA = "0x183226840")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000542")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId titleProperty;

	[Token(Token = "0x4000543")]
	[FieldOffset(Offset = "0x98")]
	internal static readonly BindingId lowValueProperty;

	[Token(Token = "0x4000544")]
	[FieldOffset(Offset = "0x130")]
	internal static readonly BindingId highValueProperty;

	[Token(Token = "0x4000545")]
	[FieldOffset(Offset = "0x1C8")]
	internal static readonly BindingId valueProperty;

	[Token(Token = "0x4000546")]
	[FieldOffset(Offset = "0x260")]
	public static readonly string ussClassName;

	[Token(Token = "0x4000547")]
	[FieldOffset(Offset = "0x268")]
	public static readonly string containerUssClassName;

	[Token(Token = "0x4000548")]
	[FieldOffset(Offset = "0x270")]
	public static readonly string titleUssClassName;

	[Token(Token = "0x4000549")]
	[FieldOffset(Offset = "0x278")]
	public static readonly string titleContainerUssClassName;

	[Token(Token = "0x400054A")]
	[FieldOffset(Offset = "0x280")]
	public static readonly string progressUssClassName;

	[Token(Token = "0x400054B")]
	[FieldOffset(Offset = "0x288")]
	public static readonly string backgroundUssClassName;

	[Token(Token = "0x400054C")]
	[FieldOffset(Offset = "0x2D8")]
	private readonly VisualElement m_Background;

	[Token(Token = "0x400054D")]
	[FieldOffset(Offset = "0x2E0")]
	private readonly VisualElement m_Progress;

	[Token(Token = "0x400054E")]
	[FieldOffset(Offset = "0x2E8")]
	private readonly Label m_Title;

	[Token(Token = "0x400054F")]
	[FieldOffset(Offset = "0x2F0")]
	private float m_LowValue;

	[Token(Token = "0x4000550")]
	[FieldOffset(Offset = "0x2F4")]
	private float m_HighValue;

	[Token(Token = "0x4000551")]
	[FieldOffset(Offset = "0x2F8")]
	private float m_Value;

	[Token(Token = "0x1700019C")]
	[CreateProperty]
	public string title
	{
		[Token(Token = "0x60008B9")]
		[Address(RVA = "0x320AA90", Offset = "0x3209090", VA = "0x18320AA90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008BA")]
		[Address(RVA = "0x320AC50", Offset = "0x3209250", VA = "0x18320AC50")]
		set
		{
		}
	}

	[Token(Token = "0x1700019D")]
	[CreateProperty]
	public float lowValue
	{
		[Token(Token = "0x60008BB")]
		[Address(RVA = "0x2D24260", Offset = "0x2D22860", VA = "0x182D24260")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60008BC")]
		[Address(RVA = "0x320AB90", Offset = "0x3209190", VA = "0x18320AB90")]
		set
		{
		}
	}

	[Token(Token = "0x1700019E")]
	[CreateProperty]
	public float highValue
	{
		[Token(Token = "0x60008BD")]
		[Address(RVA = "0x320AA80", Offset = "0x3209080", VA = "0x18320AA80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60008BE")]
		[Address(RVA = "0x320AAD0", Offset = "0x32090D0", VA = "0x18320AAD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700019F")]
	[CreateProperty]
	public virtual float value
	{
		[Token(Token = "0x60008C1")]
		[Address(RVA = "0x320AAC0", Offset = "0x32090C0", VA = "0x18320AAC0", Slot = "146")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60008C2")]
		[Address(RVA = "0x320AD40", Offset = "0x3209340", VA = "0x18320AD40", Slot = "147")]
		set
		{
		}
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x320A720", Offset = "0x3208D20", VA = "0x18320A720")]
	public AbstractProgressBar()
	{
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x3209FB0", Offset = "0x32085B0", VA = "0x183209FB0")]
	private void OnGeometryChanged(GeometryChangedEvent e)
	{
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x320A140", Offset = "0x3208740", VA = "0x18320A140", Slot = "145")]
	public void SetValueWithoutNotify(float newValue)
	{
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x3209FE0", Offset = "0x32085E0", VA = "0x183209FE0")]
	private void SetProgress(float p)
	{
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x3209D80", Offset = "0x3208380", VA = "0x183209D80")]
	private float CalculateOppositeProgressWidth(float width)
	{
		return default(float);
	}
}
