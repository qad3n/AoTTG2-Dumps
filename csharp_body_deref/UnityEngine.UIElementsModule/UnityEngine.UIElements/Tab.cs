// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Tab
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/UI/TabViewManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200014F")]
public class Tab : VisualElement
{
	[Token(Token = "0x2000150")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<Tab, UxmlTraits>
	{
		[Token(Token = "0x60009BB")]
		[Address(RVA = "0x6C3B8F0", Offset = "0x6C3A8F0", VA = "0x6C3B8F0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000151")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : VisualElement.UxmlTraits
	{
		[Token(Token = "0x400062D")]
		[FieldOffset(Offset = "0x88")]
		private readonly UxmlStringAttributeDescription m_Label;

		[Token(Token = "0x400062E")]
		[FieldOffset(Offset = "0x90")]
		private readonly UxmlImageAttributeDescription m_IconImage;

		[Token(Token = "0x400062F")]
		[FieldOffset(Offset = "0x98")]
		private readonly UxmlBoolAttributeDescription m_Closeable;

		[Token(Token = "0x60009BC")]
		[Address(RVA = "0x6C3B930", Offset = "0x6C3A930", VA = "0x6C3B930", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60009BD")]
		[Address(RVA = "0x6C3BAF0", Offset = "0x6C3AAF0", VA = "0x6C3BAF0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x400060D")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId labelProperty;

	[Token(Token = "0x400060E")]
	[FieldOffset(Offset = "0x98")]
	internal static readonly BindingId iconImageProperty;

	[Token(Token = "0x400060F")]
	[FieldOffset(Offset = "0x130")]
	internal static readonly BindingId closeableProperty;

	[Token(Token = "0x4000610")]
	[FieldOffset(Offset = "0x1C8")]
	public static readonly string ussClassName;

	[Token(Token = "0x4000611")]
	[FieldOffset(Offset = "0x1D0")]
	public static readonly string tabHeaderUssClassName;

	[Token(Token = "0x4000612")]
	[FieldOffset(Offset = "0x1D8")]
	public static readonly string tabHeaderImageUssClassName;

	[Token(Token = "0x4000613")]
	[FieldOffset(Offset = "0x1E0")]
	public static readonly string tabHeaderEmptyImageUssClassName;

	[Token(Token = "0x4000614")]
	[FieldOffset(Offset = "0x1E8")]
	public static readonly string tabHeaderStandaloneImageUssClassName;

	[Token(Token = "0x4000615")]
	[FieldOffset(Offset = "0x1F0")]
	public static readonly string tabHeaderLabelUssClassName;

	[Token(Token = "0x4000616")]
	[FieldOffset(Offset = "0x1F8")]
	public static readonly string tabHeaderEmptyLabeUssClassName;

	[Token(Token = "0x4000617")]
	[FieldOffset(Offset = "0x200")]
	public static readonly string tabHeaderUnderlineUssClassName;

	[Token(Token = "0x4000618")]
	[FieldOffset(Offset = "0x208")]
	public static readonly string contentUssClassName;

	[Token(Token = "0x4000619")]
	[FieldOffset(Offset = "0x210")]
	public static readonly string draggingUssClassName;

	[Token(Token = "0x400061A")]
	[FieldOffset(Offset = "0x218")]
	public static readonly string reorderableUssClassName;

	[Token(Token = "0x400061B")]
	[FieldOffset(Offset = "0x220")]
	public static readonly string reorderableItemHandleUssClassName;

	[Token(Token = "0x400061C")]
	[FieldOffset(Offset = "0x228")]
	public static readonly string reorderableItemHandleBarUssClassName;

	[Token(Token = "0x400061D")]
	[FieldOffset(Offset = "0x230")]
	public static readonly string closeableUssClassName;

	[Token(Token = "0x400061E")]
	[FieldOffset(Offset = "0x238")]
	public static readonly string closeButtonUssClassName;

	[Token(Token = "0x400061F")]
	[FieldOffset(Offset = "0x2C8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<Tab> m_selected;

	[Token(Token = "0x4000620")]
	[FieldOffset(Offset = "0x2D0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Func<bool> closing;

	[Token(Token = "0x4000621")]
	[FieldOffset(Offset = "0x2D8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<Tab> m_closed;

	[Token(Token = "0x4000622")]
	[FieldOffset(Offset = "0x2E0")]
	private string m_Label;

	[Token(Token = "0x4000623")]
	[FieldOffset(Offset = "0x2E8")]
	private Background m_IconImage;

	[Token(Token = "0x4000624")]
	[FieldOffset(Offset = "0x308")]
	private bool m_Closeable;

	[Token(Token = "0x4000625")]
	[FieldOffset(Offset = "0x310")]
	private VisualElement m_ContentContainer;

	[Token(Token = "0x4000626")]
	[FieldOffset(Offset = "0x318")]
	private VisualElement m_DragHandle;

	[Token(Token = "0x4000627")]
	[FieldOffset(Offset = "0x320")]
	private VisualElement m_CloseButton;

	[Token(Token = "0x4000628")]
	[FieldOffset(Offset = "0x328")]
	private VisualElement m_TabHeader;

	[Token(Token = "0x4000629")]
	[FieldOffset(Offset = "0x330")]
	private Image m_TabHeaderImage;

	[Token(Token = "0x400062A")]
	[FieldOffset(Offset = "0x338")]
	private Label m_TabHeaderLabel;

	[Token(Token = "0x400062B")]
	[FieldOffset(Offset = "0x340")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly TabDragger _003Cdragger_003Ek__BackingField;

	[Token(Token = "0x170001C8")]
	public VisualElement tabHeader
	{
		[Token(Token = "0x60009A3")]
		[Address(RVA = "0x6C39BB0", Offset = "0x6C38BB0", VA = "0x6C39BB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C9")]
	internal int index
	{
		[Token(Token = "0x60009A4")]
		[Address(RVA = "0x6C39BC0", Offset = "0x6C38BC0", VA = "0x6C39BC0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60009A5")]
		[Address(RVA = "0x6C39BD0", Offset = "0x6C38BD0", VA = "0x6C39BD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001CA")]
	[CreateProperty]
	public string label
	{
		[Token(Token = "0x60009A6")]
		[Address(RVA = "0x6C39BE0", Offset = "0x6C38BE0", VA = "0x6C39BE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60009A7")]
		[Address(RVA = "0x6C39BF0", Offset = "0x6C38BF0", VA = "0x6C39BF0")]
		set
		{
		}
	}

	[Token(Token = "0x170001CB")]
	[CreateProperty]
	public Background iconImage
	{
		[Token(Token = "0x60009A8")]
		[Address(RVA = "0x6C39D40", Offset = "0x6C38D40", VA = "0x6C39D40")]
		get
		{
			return default(Background);
		}
		[Token(Token = "0x60009A9")]
		[Address(RVA = "0x6C39D60", Offset = "0x6C38D60", VA = "0x6C39D60")]
		set
		{
		}
	}

	[Token(Token = "0x170001CC")]
	[CreateProperty]
	public bool closeable
	{
		[Token(Token = "0x60009AA")]
		[Address(RVA = "0x6C3A0A0", Offset = "0x6C390A0", VA = "0x6C3A0A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009AB")]
		[Address(RVA = "0x6C3A0B0", Offset = "0x6C390B0", VA = "0x6C3A0B0")]
		set
		{
		}
	}

	[Token(Token = "0x170001CD")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x60009AC")]
		[Address(RVA = "0x6C3A220", Offset = "0x6C39220", VA = "0x6C3A220", Slot = "138")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000025")]
	public event Action<Tab> selected
	{
		[Token(Token = "0x600099F")]
		[Address(RVA = "0x6C398F0", Offset = "0x6C388F0", VA = "0x6C398F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60009A0")]
		[Address(RVA = "0x6C399A0", Offset = "0x6C389A0", VA = "0x6C399A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000026")]
	public event Action<Tab> closed
	{
		[Token(Token = "0x60009A1")]
		[Address(RVA = "0x6C39A50", Offset = "0x6C38A50", VA = "0x6C39A50")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60009A2")]
		[Address(RVA = "0x6C39B00", Offset = "0x6C38B00", VA = "0x6C39B00")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x6C3A230", Offset = "0x6C39230", VA = "0x6C3A230")]
	public Tab()
	{
	}

	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x6C3A270", Offset = "0x6C39270", VA = "0x6C3A270")]
	public Tab(string label, Background iconImage)
	{
	}

	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x6C3AFC0", Offset = "0x6C39FC0", VA = "0x6C3AFC0")]
	private void UpdateTooltip(TooltipEvent evt)
	{
	}

	[Token(Token = "0x60009B0")]
	[Address(RVA = "0x6C3B0A0", Offset = "0x6C3A0A0", VA = "0x6C3B0A0")]
	private void AddDragHandles()
	{
	}

	[Token(Token = "0x60009B1")]
	[Address(RVA = "0x6C3B0D0", Offset = "0x6C3A0D0", VA = "0x6C3B0D0")]
	private void RemoveDragHandles()
	{
	}

	[Token(Token = "0x60009B2")]
	[Address(RVA = "0x6C3B120", Offset = "0x6C3A120", VA = "0x6C3B120")]
	internal void EnableTabDragHandles(bool enable)
	{
	}

	[Token(Token = "0x60009B3")]
	[Address(RVA = "0x6C3B180", Offset = "0x6C3A180", VA = "0x6C3B180")]
	private void AddCloseButton()
	{
	}

	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x6C3B1B0", Offset = "0x6C3A1B0", VA = "0x6C3B1B0")]
	private void RemoveCloseButton()
	{
	}

	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x6C3A1C0", Offset = "0x6C391C0", VA = "0x6C3A1C0")]
	internal void EnableTabCloseButton(bool enable)
	{
	}

	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x6C3B200", Offset = "0x6C3A200", VA = "0x6C3B200")]
	internal void SetActive()
	{
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x6C3B240", Offset = "0x6C3A240", VA = "0x6C3B240")]
	internal void SetInactive()
	{
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x6C3B270", Offset = "0x6C3A270", VA = "0x6C3B270")]
	private void OnTabClicked(PointerDownEvent _)
	{
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x6C3B290", Offset = "0x6C3A290", VA = "0x6C3B290")]
	private void OnCloseButtonClicked(PointerDownEvent evt)
	{
	}
}
