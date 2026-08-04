// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIDocument
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x5045030", Offset = "0x5045030", VA = "0x5045030")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DA1")]
		[Address(RVA = "0x5045040", Offset = "0x5045040", VA = "0x5045040")]
		set
		{
		}
	}

	[Token(Token = "0x1700028F")]
	public UIDocument parentUI
	{
		[Token(Token = "0x6000DA2")]
		[Address(RVA = "0x5045350", Offset = "0x5045350", VA = "0x5045350")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DA3")]
		[Address(RVA = "0x5045360", Offset = "0x5045360", VA = "0x5045360")]
		private set
		{
		}
	}

	[Token(Token = "0x17000290")]
	public VisualTreeAsset visualTreeAsset
	{
		[Token(Token = "0x6000DA4")]
		[Address(RVA = "0x5045370", Offset = "0x5045370", VA = "0x5045370")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DA5")]
		[Address(RVA = "0x5045380", Offset = "0x5045380", VA = "0x5045380")]
		set
		{
		}
	}

	[Token(Token = "0x17000291")]
	public VisualElement rootVisualElement
	{
		[Token(Token = "0x6000DA6")]
		[Address(RVA = "0x5045020", Offset = "0x5045020", VA = "0x5045020")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000292")]
	internal int firstChildInserIndex
	{
		[Token(Token = "0x6000DA7")]
		[Address(RVA = "0x5045880", Offset = "0x5045880", VA = "0x5045880")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000293")]
	public float sortingOrder
	{
		[Token(Token = "0x6000DA8")]
		[Address(RVA = "0x5045890", Offset = "0x5045890", VA = "0x5045890")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000DA9")]
		[Address(RVA = "0x50458A0", Offset = "0x50458A0", VA = "0x50458A0")]
		set
		{
		}
	}

	[Token(Token = "0x6000DAA")]
	[Address(RVA = "0x50458C0", Offset = "0x50458C0", VA = "0x50458C0")]
	internal void ApplySortingOrder()
	{
	}

	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x5045990", Offset = "0x5045990", VA = "0x5045990")]
	private UIDocument()
	{
	}

	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x5045A20", Offset = "0x5045A20", VA = "0x5045A20")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x5045B00", Offset = "0x5045B00", VA = "0x5045B00")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x5045A30", Offset = "0x5045A30", VA = "0x5045A30")]
	private void SetupFromHierarchy()
	{
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x5045C30", Offset = "0x5045C30", VA = "0x5045C30")]
	private UIDocument FindUIDocumentParent()
	{
		return null;
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x5045CF0", Offset = "0x5045CF0", VA = "0x5045CF0")]
	internal void Reset()
	{
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x5045DF0", Offset = "0x5045DF0", VA = "0x5045DF0")]
	private void AddChildAndInsertContentToVisualTree(UIDocument child)
	{
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x5045BC0", Offset = "0x5045BC0", VA = "0x5045BC0")]
	private void RemoveChild(UIDocument child)
	{
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x50453A0", Offset = "0x50453A0", VA = "0x50453A0")]
	private void RecreateUI()
	{
	}

	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x5046050", Offset = "0x5046050", VA = "0x5046050")]
	private void SetupRootClassList()
	{
	}

	[Token(Token = "0x6000DB5")]
	[Address(RVA = "0x50458D0", Offset = "0x50458D0", VA = "0x50458D0")]
	private void AddRootVisualElementToTree()
	{
	}

	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x5045F50", Offset = "0x5045F50", VA = "0x5045F50")]
	private void RemoveFromHierarchy()
	{
	}

	[Token(Token = "0x6000DB7")]
	[Address(RVA = "0x50460E0", Offset = "0x50460E0", VA = "0x50460E0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x5046110", Offset = "0x5046110", VA = "0x5046110")]
	private void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x5046450", Offset = "0x5046450", VA = "0x5046450")]
	private void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x5046340", Offset = "0x5046340", VA = "0x5046340")]
	internal void ReactToHierarchyChanged()
	{
	}
}
