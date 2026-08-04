// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.AbstractProgressBar
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000F3")]
public abstract class AbstractProgressBar : BindableElement, INotifyValueChanged<float>
{
	[Token(Token = "0x20000F4")]
	public new class UxmlTraits : BindableElement.UxmlTraits
	{
		[Token(Token = "0x40003F3")]
		[FieldOffset(Offset = "0x78")]
		private UxmlFloatAttributeDescription m_LowValue;

		[Token(Token = "0x40003F4")]
		[FieldOffset(Offset = "0x80")]
		private UxmlFloatAttributeDescription m_HighValue;

		[Token(Token = "0x40003F5")]
		[FieldOffset(Offset = "0x88")]
		private UxmlFloatAttributeDescription m_Value;

		[Token(Token = "0x40003F6")]
		[FieldOffset(Offset = "0x90")]
		private UxmlStringAttributeDescription m_Title;

		[Token(Token = "0x600069A")]
		[Address(RVA = "0x4FF1F90", Offset = "0x4FF1F90", VA = "0x4FF1F90", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x600069B")]
		[Address(RVA = "0x4FF21B0", Offset = "0x4FF21B0", VA = "0x4FF21B0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40003E3")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty titleProperty;

	[Token(Token = "0x40003E4")]
	[FieldOffset(Offset = "0xA0")]
	internal static readonly DataBindingProperty lowValueProperty;

	[Token(Token = "0x40003E5")]
	[FieldOffset(Offset = "0x140")]
	internal static readonly DataBindingProperty highValueProperty;

	[Token(Token = "0x40003E6")]
	[FieldOffset(Offset = "0x1E0")]
	internal static readonly DataBindingProperty valueProperty;

	[Token(Token = "0x40003E7")]
	[FieldOffset(Offset = "0x280")]
	public static readonly string ussClassName;

	[Token(Token = "0x40003E8")]
	[FieldOffset(Offset = "0x288")]
	public static readonly string containerUssClassName;

	[Token(Token = "0x40003E9")]
	[FieldOffset(Offset = "0x290")]
	public static readonly string titleUssClassName;

	[Token(Token = "0x40003EA")]
	[FieldOffset(Offset = "0x298")]
	public static readonly string titleContainerUssClassName;

	[Token(Token = "0x40003EB")]
	[FieldOffset(Offset = "0x2A0")]
	public static readonly string progressUssClassName;

	[Token(Token = "0x40003EC")]
	[FieldOffset(Offset = "0x2A8")]
	public static readonly string backgroundUssClassName;

	[Token(Token = "0x40003ED")]
	[FieldOffset(Offset = "0x3E8")]
	private readonly VisualElement m_Background;

	[Token(Token = "0x40003EE")]
	[FieldOffset(Offset = "0x3F0")]
	private readonly VisualElement m_Progress;

	[Token(Token = "0x40003EF")]
	[FieldOffset(Offset = "0x3F8")]
	private readonly Label m_Title;

	[Token(Token = "0x40003F0")]
	[FieldOffset(Offset = "0x400")]
	private float m_LowValue;

	[Token(Token = "0x40003F1")]
	[FieldOffset(Offset = "0x404")]
	private float m_HighValue;

	[Token(Token = "0x40003F2")]
	[FieldOffset(Offset = "0x408")]
	private float m_Value;

	[Token(Token = "0x17000123")]
	[CreateProperty]
	public string title
	{
		[Token(Token = "0x600068C")]
		[Address(RVA = "0x4FF0ED0", Offset = "0x4FF0ED0", VA = "0x4FF0ED0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600068D")]
		[Address(RVA = "0x4FF0F00", Offset = "0x4FF0F00", VA = "0x4FF0F00")]
		set
		{
		}
	}

	[Token(Token = "0x17000124")]
	[CreateProperty]
	public float lowValue
	{
		[Token(Token = "0x600068E")]
		[Address(RVA = "0x4FF1010", Offset = "0x4FF1010", VA = "0x4FF1010")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600068F")]
		[Address(RVA = "0x4FF1020", Offset = "0x4FF1020", VA = "0x4FF1020")]
		set
		{
		}
	}

	[Token(Token = "0x17000125")]
	[CreateProperty]
	public float highValue
	{
		[Token(Token = "0x6000690")]
		[Address(RVA = "0x4FF1300", Offset = "0x4FF1300", VA = "0x4FF1300")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000691")]
		[Address(RVA = "0x4FF1310", Offset = "0x4FF1310", VA = "0x4FF1310")]
		set
		{
		}
	}

	[Token(Token = "0x17000126")]
	[CreateProperty]
	public virtual float value
	{
		[Token(Token = "0x6000694")]
		[Address(RVA = "0x4FF17B0", Offset = "0x4FF17B0", VA = "0x4FF17B0", Slot = "103")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000695")]
		[Address(RVA = "0x4FF17C0", Offset = "0x4FF17C0", VA = "0x4FF17C0", Slot = "104")]
		set
		{
		}
	}

	[Token(Token = "0x6000692")]
	[Address(RVA = "0x4FF1450", Offset = "0x4FF1450", VA = "0x4FF1450")]
	public AbstractProgressBar()
	{
	}

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x4FF1790", Offset = "0x4FF1790", VA = "0x4FF1790")]
	private void OnGeometryChanged(GeometryChangedEvent e)
	{
	}

	[Token(Token = "0x6000696")]
	[Address(RVA = "0x4FF1B10", Offset = "0x4FF1B10", VA = "0x4FF1B10", Slot = "102")]
	public void SetValueWithoutNotify(float newValue)
	{
	}

	[Token(Token = "0x6000697")]
	[Address(RVA = "0x4FF1160", Offset = "0x4FF1160", VA = "0x4FF1160")]
	private void SetProgress(float p)
	{
	}

	[Token(Token = "0x6000698")]
	[Address(RVA = "0x4FF1B40", Offset = "0x4FF1B40", VA = "0x4FF1B40")]
	private float CalculateProgressWidth(float width)
	{
		return default(float);
	}
}
