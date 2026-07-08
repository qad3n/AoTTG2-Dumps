using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000212")]
[DefaultExecutionOrder(-100)]
[ExecuteAlways]
[AddComponentMenu("UI Toolkit/UI Document")]
[DisallowMultipleComponent]
public sealed class UIDocument : MonoBehaviour
{
	[Token(Token = "0x400076E")]
	internal const string k_RootStyleClassName = "unity-ui-document__root";

	[Token(Token = "0x400076F")]
	internal const string k_VisualElementNameSuffix = "-container";

	[Token(Token = "0x4000770")]
	private const int k_DefaultSortingOrder = 0;

	[Token(Token = "0x4000771")]
	[FieldOffset(Offset = "0x0")]
	private static int s_CurrentUIDocumentCounter;

	[Token(Token = "0x4000772")]
	[FieldOffset(Offset = "0x20")]
	internal readonly int m_UIDocumentCreationIndex;

	[Token(Token = "0x4000773")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private PanelSettings m_PanelSettings;

	[Token(Token = "0x4000774")]
	[FieldOffset(Offset = "0x30")]
	private PanelSettings m_PreviousPanelSettings;

	[Token(Token = "0x4000775")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private UIDocument m_ParentUI;

	[Token(Token = "0x4000776")]
	[FieldOffset(Offset = "0x40")]
	private UIDocumentList m_ChildrenContent;

	[Token(Token = "0x4000777")]
	[FieldOffset(Offset = "0x48")]
	private List<UIDocument> m_ChildrenContentCopy;

	[Token(Token = "0x4000778")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private VisualTreeAsset sourceAsset;

	[Token(Token = "0x4000779")]
	[FieldOffset(Offset = "0x58")]
	private VisualElement m_RootVisualElement;

	[Token(Token = "0x400077A")]
	[FieldOffset(Offset = "0x60")]
	private int m_FirstChildInsertIndex;

	[Token(Token = "0x400077B")]
	[FieldOffset(Offset = "0x64")]
	[SerializeField]
	private float m_SortingOrder;

	[Token(Token = "0x1700028E")]
	public PanelSettings panelSettings
	{
		[Token(Token = "0x6000DA0")]
		[Address(RVA = "0x4D1D700", Offset = "0x4D1D700", VA = "0x4D1D700")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DA1")]
		[Address(RVA = "0x4D1D710", Offset = "0x4D1D710", VA = "0x4D1D710")]
		set
		{
		}
	}

	[Token(Token = "0x1700028F")]
	public UIDocument parentUI
	{
		[Token(Token = "0x6000DA2")]
		[Address(RVA = "0x4D1DA20", Offset = "0x4D1DA20", VA = "0x4D1DA20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DA3")]
		[Address(RVA = "0x4D1DA30", Offset = "0x4D1DA30", VA = "0x4D1DA30")]
		private set
		{
		}
	}

	[Token(Token = "0x17000290")]
	public VisualTreeAsset visualTreeAsset
	{
		[Token(Token = "0x6000DA4")]
		[Address(RVA = "0x4D1DA40", Offset = "0x4D1DA40", VA = "0x4D1DA40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DA5")]
		[Address(RVA = "0x4D1DA50", Offset = "0x4D1DA50", VA = "0x4D1DA50")]
		set
		{
		}
	}

	[Token(Token = "0x17000291")]
	public VisualElement rootVisualElement
	{
		[Token(Token = "0x6000DA6")]
		[Address(RVA = "0x4D1D6F0", Offset = "0x4D1D6F0", VA = "0x4D1D6F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000292")]
	internal int firstChildInserIndex
	{
		[Token(Token = "0x6000DA7")]
		[Address(RVA = "0x4D1DF50", Offset = "0x4D1DF50", VA = "0x4D1DF50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000293")]
	public float sortingOrder
	{
		[Token(Token = "0x6000DA8")]
		[Address(RVA = "0x4D1DF60", Offset = "0x4D1DF60", VA = "0x4D1DF60")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000DA9")]
		[Address(RVA = "0x4D1DF70", Offset = "0x4D1DF70", VA = "0x4D1DF70")]
		set
		{
		}
	}

	[Token(Token = "0x6000DAA")]
	[Address(RVA = "0x4D1DF90", Offset = "0x4D1DF90", VA = "0x4D1DF90")]
	internal void ApplySortingOrder()
	{
	}

	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x4D1E060", Offset = "0x4D1E060", VA = "0x4D1E060")]
	private UIDocument()
	{
	}

	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x4D1E0F0", Offset = "0x4D1E0F0", VA = "0x4D1E0F0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x4D1E1D0", Offset = "0x4D1E1D0", VA = "0x4D1E1D0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x4D1E100", Offset = "0x4D1E100", VA = "0x4D1E100")]
	private void SetupFromHierarchy()
	{
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x4D1E300", Offset = "0x4D1E300", VA = "0x4D1E300")]
	private UIDocument FindUIDocumentParent()
	{
		return null;
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x4D1E3C0", Offset = "0x4D1E3C0", VA = "0x4D1E3C0")]
	internal void Reset()
	{
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x4D1E4C0", Offset = "0x4D1E4C0", VA = "0x4D1E4C0")]
	private void AddChildAndInsertContentToVisualTree(UIDocument child)
	{
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x4D1E290", Offset = "0x4D1E290", VA = "0x4D1E290")]
	private void RemoveChild(UIDocument child)
	{
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x4D1DA70", Offset = "0x4D1DA70", VA = "0x4D1DA70")]
	private void RecreateUI()
	{
	}

	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x4D1E720", Offset = "0x4D1E720", VA = "0x4D1E720")]
	private void SetupRootClassList()
	{
	}

	[Token(Token = "0x6000DB5")]
	[Address(RVA = "0x4D1DFA0", Offset = "0x4D1DFA0", VA = "0x4D1DFA0")]
	private void AddRootVisualElementToTree()
	{
	}

	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x4D1E620", Offset = "0x4D1E620", VA = "0x4D1E620")]
	private void RemoveFromHierarchy()
	{
	}

	[Token(Token = "0x6000DB7")]
	[Address(RVA = "0x4D1E7B0", Offset = "0x4D1E7B0", VA = "0x4D1E7B0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x4D1E7E0", Offset = "0x4D1E7E0", VA = "0x4D1E7E0")]
	private void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x4D1EB20", Offset = "0x4D1EB20", VA = "0x4D1EB20")]
	private void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x4D1EA10", Offset = "0x4D1EA10", VA = "0x4D1EA10")]
	internal void ReactToHierarchyChanged()
	{
	}
}
