// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIDocument
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000285")]
[ExecuteAlways]
[DisallowMultipleComponent]
[AddComponentMenu("UI Toolkit/UI Document")]
[HelpURL("UIE-get-started-with-runtime-ui")]
[DefaultExecutionOrder(-100)]
public sealed class UIDocument : MonoBehaviour
{
	[Token(Token = "0x2000286")]
	public enum WorldSpaceSizeMode
	{
		[Token(Token = "0x400098D")]
		Dynamic,
		[Token(Token = "0x400098E")]
		Fixed
	}

	[Token(Token = "0x4000972")]
	internal const string k_RootStyleClassName = "unity-ui-document__root";

	[Token(Token = "0x4000973")]
	internal const string k_VisualElementNameSuffix = "-container";

	[Token(Token = "0x4000974")]
	internal const string k_EditorElementsWarningMessage = "The VisualTreeAsset contains editor-only elements that are incompatible at runtime.\nTo fix this, remove the editor elements from the VisualTreeAsset.";

	[Token(Token = "0x4000975")]
	private const int k_DefaultSortingOrder = 0;

	[Token(Token = "0x4000976")]
	[FieldOffset(Offset = "0x0")]
	private static int s_CurrentUIDocumentCounter;

	[Token(Token = "0x4000977")]
	[FieldOffset(Offset = "0x20")]
	internal readonly int m_UIDocumentCreationIndex;

	[Token(Token = "0x4000978")]
	[FieldOffset(Offset = "0x4")]
	internal static int EnabledDocumentCount;

	[Token(Token = "0x4000979")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private PanelSettings m_PanelSettings;

	[Token(Token = "0x400097A")]
	[FieldOffset(Offset = "0x30")]
	private PanelSettings m_PreviousPanelSettings;

	[Token(Token = "0x400097B")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private UIDocument m_ParentUI;

	[Token(Token = "0x400097C")]
	[FieldOffset(Offset = "0x40")]
	private UIDocumentList m_ChildrenContent;

	[Token(Token = "0x400097D")]
	[FieldOffset(Offset = "0x48")]
	private List<UIDocument> m_ChildrenContentCopy;

	[Token(Token = "0x400097E")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private VisualTreeAsset sourceAsset;

	[Token(Token = "0x400097F")]
	[FieldOffset(Offset = "0x58")]
	private UIDocumentRootElement m_RootVisualElement;

	[Token(Token = "0x4000981")]
	[FieldOffset(Offset = "0x68")]
	internal int softPointerCaptures;

	[Token(Token = "0x4000982")]
	[FieldOffset(Offset = "0x6C")]
	private int m_FirstChildInsertIndex;

	[Token(Token = "0x4000983")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private float m_SortingOrder;

	[Token(Token = "0x4000984")]
	[FieldOffset(Offset = "0x74")]
	[SerializeField]
	private Position m_Position;

	[Token(Token = "0x4000985")]
	[FieldOffset(Offset = "0x78")]
	[SerializeField]
	private WorldSpaceSizeMode m_WorldSpaceSizeMode;

	[Token(Token = "0x4000986")]
	[FieldOffset(Offset = "0x7C")]
	[SerializeField]
	private float m_WorldSpaceWidth;

	[Token(Token = "0x4000987")]
	[FieldOffset(Offset = "0x80")]
	[SerializeField]
	private float m_WorldSpaceHeight;

	[Token(Token = "0x4000988")]
	[FieldOffset(Offset = "0x84")]
	[SerializeField]
	private PivotReferenceSize m_PivotReferenceSize;

	[Token(Token = "0x4000989")]
	[FieldOffset(Offset = "0x88")]
	[SerializeField]
	private Pivot m_Pivot;

	[Token(Token = "0x400098A")]
	[FieldOffset(Offset = "0x90")]
	[SerializeField]
	[HideInInspector]
	private BoxCollider m_WorldSpaceCollider;

	[Token(Token = "0x400098B")]
	[FieldOffset(Offset = "0x98")]
	private bool m_RootHasWorldTransform;

	[Token(Token = "0x1700036E")]
	public PanelSettings panelSettings
	{
		[Token(Token = "0x6001107")]
		[Address(RVA = "0x2E8E8B0", Offset = "0x2E8CEB0", VA = "0x182E8E8B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001108")]
		[Address(RVA = "0x328AC50", Offset = "0x3289250", VA = "0x18328AC50")]
		set
		{
		}
	}

	[Token(Token = "0x1700036F")]
	public UIDocument parentUI
	{
		[Token(Token = "0x6001109")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600110A")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000370")]
	public VisualTreeAsset visualTreeAsset
	{
		[Token(Token = "0x600110B")]
		[Address(RVA = "0x2E8E900", Offset = "0x2E8CF00", VA = "0x182E8E900")]
		get
		{
			return null;
		}
		[Token(Token = "0x600110C")]
		[Address(RVA = "0x328B070", Offset = "0x3289670", VA = "0x18328B070")]
		set
		{
		}
	}

	[Token(Token = "0x17000371")]
	public VisualElement rootVisualElement
	{
		[Token(Token = "0x600110D")]
		[Address(RVA = "0x2E8E8F0", Offset = "0x2E8CEF0", VA = "0x182E8E8F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600110E")]
		[Address(RVA = "0x328AF30", Offset = "0x3289530", VA = "0x18328AF30")]
		private set
		{
		}
	}

	[Token(Token = "0x17000372")]
	internal VisualElementFocusRing focusRing
	{
		[Token(Token = "0x600110F")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001110")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000373")]
	internal int firstChildInserIndex
	{
		[Token(Token = "0x6001111")]
		[Address(RVA = "0xACB500", Offset = "0xAC9B00", VA = "0x180ACB500")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000374")]
	public Position position
	{
		[Token(Token = "0x6001112")]
		[Address(RVA = "0x328AC10", Offset = "0x3289210", VA = "0x18328AC10")]
		get
		{
			return default(Position);
		}
		[Token(Token = "0x6001113")]
		[Address(RVA = "0x328AF20", Offset = "0x3289520", VA = "0x18328AF20")]
		set
		{
		}
	}

	[Token(Token = "0x17000375")]
	public WorldSpaceSizeMode worldSpaceSizeMode
	{
		[Token(Token = "0x6001114")]
		[Address(RVA = "0x2F769C0", Offset = "0x2F74FC0", VA = "0x182F769C0")]
		get
		{
			return default(WorldSpaceSizeMode);
		}
		[Token(Token = "0x6001115")]
		[Address(RVA = "0x328B0A0", Offset = "0x32896A0", VA = "0x18328B0A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000376")]
	public Vector2 worldSpaceSize
	{
		[Token(Token = "0x6001116")]
		[Address(RVA = "0x328AC30", Offset = "0x3289230", VA = "0x18328AC30")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6001117")]
		[Address(RVA = "0x328B0B0", Offset = "0x32896B0", VA = "0x18328B0B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000377")]
	private bool isWorldSpace
	{
		[Token(Token = "0x6001118")]
		[Address(RVA = "0x328AB40", Offset = "0x3289140", VA = "0x18328AB40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000378")]
	internal bool isTransformControlledByGameObject
	{
		[Token(Token = "0x6001119")]
		[Address(RVA = "0x328AAB0", Offset = "0x32890B0", VA = "0x18328AAB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000379")]
	public PivotReferenceSize pivotReferenceSize
	{
		[Token(Token = "0x600111A")]
		[Address(RVA = "0x328ABD0", Offset = "0x32891D0", VA = "0x18328ABD0")]
		get
		{
			return default(PivotReferenceSize);
		}
		[Token(Token = "0x600111B")]
		[Address(RVA = "0xA4D5B0", Offset = "0xA4BBB0", VA = "0x180A4D5B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700037A")]
	public Pivot pivot
	{
		[Token(Token = "0x600111C")]
		[Address(RVA = "0x1CD34A0", Offset = "0x1CD1AA0", VA = "0x181CD34A0")]
		get
		{
			return default(Pivot);
		}
		[Token(Token = "0x600111D")]
		[Address(RVA = "0xA4D5A0", Offset = "0xA4BBA0", VA = "0x180A4D5A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700037B")]
	public float sortingOrder
	{
		[Token(Token = "0x600111E")]
		[Address(RVA = "0x2C25B20", Offset = "0x2C24120", VA = "0x182C25B20")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600111F")]
		[Address(RVA = "0x328B050", Offset = "0x3289650", VA = "0x18328B050")]
		set
		{
		}
	}

	[Token(Token = "0x1700037C")]
	public IRuntimePanel runtimePanel
	{
		[Token(Token = "0x6001126")]
		[Address(RVA = "0x328AC20", Offset = "0x3289220", VA = "0x18328AC20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700037D")]
	internal RuntimePanel containerPanel
	{
		[Token(Token = "0x6001127")]
		[Address(RVA = "0x328AA30", Offset = "0x3289030", VA = "0x18328AA30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700037E")]
	private float pixelsPerUnit
	{
		[Token(Token = "0x6001133")]
		[Address(RVA = "0x328ABE0", Offset = "0x32891E0", VA = "0x18328ABE0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6001120")]
	[Address(RVA = "0x3286C90", Offset = "0x3285290", VA = "0x183286C90")]
	internal void ApplySortingOrder()
	{
	}

	[Token(Token = "0x6001121")]
	[Address(RVA = "0x32876A0", Offset = "0x3285CA0", VA = "0x1832876A0")]
	internal static UIDocument FindRootUIDocument(VisualElement element)
	{
		return null;
	}

	[Token(Token = "0x6001122")]
	[Address(RVA = "0x328A970", Offset = "0x3288F70", VA = "0x18328A970")]
	private UIDocument()
	{
	}

	[Token(Token = "0x6001123")]
	[Address(RVA = "0x3286CA0", Offset = "0x32852A0", VA = "0x183286CA0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6001124")]
	[Address(RVA = "0x3287C70", Offset = "0x3286270", VA = "0x183287C70")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6001125")]
	[Address(RVA = "0x328A870", Offset = "0x3288E70", VA = "0x18328A870")]
	private void _Enable()
	{
	}

	[Token(Token = "0x6001128")]
	[Address(RVA = "0x3287950", Offset = "0x3285F50", VA = "0x183287950")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6001129")]
	[Address(RVA = "0x3287450", Offset = "0x3285A50", VA = "0x183287450")]
	internal void DoUpdate()
	{
	}

	[Token(Token = "0x600112A")]
	[Address(RVA = "0x328A0E0", Offset = "0x32886E0", VA = "0x18328A0E0")]
	private void UpdateRenderer()
	{
	}

	[Token(Token = "0x600112B")]
	[Address(RVA = "0x3288BC0", Offset = "0x32871C0", VA = "0x183288BC0")]
	private Bounds SanitizeRendererBounds(Bounds b)
	{
		return default(Bounds);
	}

	[Token(Token = "0x600112C")]
	[Address(RVA = "0x3286AC0", Offset = "0x32850C0", VA = "0x183286AC0")]
	private void AddOrRemoveRendererComponent()
	{
	}

	[Token(Token = "0x600112D")]
	[Address(RVA = "0x328A400", Offset = "0x3288A00", VA = "0x18328A400")]
	internal void UpdateWorldSpaceCollider(ColliderUpdateMode mode)
	{
	}

	[Token(Token = "0x600112E")]
	[Address(RVA = "0x3288A30", Offset = "0x3287030", VA = "0x183288A30")]
	internal void RemoveWorldSpaceCollider()
	{
	}

	[Token(Token = "0x600112F")]
	[Address(RVA = "0x3287910", Offset = "0x3285F10", VA = "0x183287910")]
	private static bool IsValidBounds(in Bounds b)
	{
		return default(bool);
	}

	[Token(Token = "0x6001130")]
	[Address(RVA = "0x3289FF0", Offset = "0x32885F0", VA = "0x183289FF0")]
	private void UpdateIsWorldSpaceRootFlag()
	{
	}

	[Token(Token = "0x6001131")]
	[Address(RVA = "0x3288FD0", Offset = "0x32875D0", VA = "0x183288FD0")]
	private void SetTransform()
	{
	}

	[Token(Token = "0x6001132")]
	[Address(RVA = "0x3286CB0", Offset = "0x32852B0", VA = "0x183286CB0")]
	private void ClearTransform()
	{
	}

	[Token(Token = "0x6001134")]
	[Address(RVA = "0x3288D90", Offset = "0x3287390", VA = "0x183288D90")]
	private Matrix4x4 ScaleAndFlipMatrix()
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6001135")]
	[Address(RVA = "0x3287960", Offset = "0x3285F60", VA = "0x183287960")]
	private Bounds LocalBoundsFromPivotSource()
	{
		return default(Bounds);
	}

	[Token(Token = "0x6001136")]
	[Address(RVA = "0x3287FB0", Offset = "0x32865B0", VA = "0x183287FB0")]
	private Vector2 PivotOffset()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6001137")]
	[Address(RVA = "0x3289E40", Offset = "0x3288440", VA = "0x183289E40")]
	private Matrix4x4 TransformToGameObjectMatrix()
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6001138")]
	[Address(RVA = "0x3287060", Offset = "0x3285660", VA = "0x183287060")]
	private void ComputeTransform(Transform transform, out Matrix4x4 matrix)
	{
	}

	[Token(Token = "0x6001139")]
	[Address(RVA = "0x3287810", Offset = "0x3285E10", VA = "0x183287810")]
	private static Vector2 GetPivotAsPercent(Pivot origin)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600113A")]
	[Address(RVA = "0x3289520", Offset = "0x3287B20", VA = "0x183289520")]
	private void SetupFromHierarchy()
	{
	}

	[Token(Token = "0x600113B")]
	[Address(RVA = "0x3287760", Offset = "0x3285D60", VA = "0x183287760")]
	private UIDocument FindUIDocumentParent()
	{
		return null;
	}

	[Token(Token = "0x600113C")]
	[Address(RVA = "0x3288AB0", Offset = "0x32870B0", VA = "0x183288AB0")]
	internal void Reset()
	{
	}

	[Token(Token = "0x600113D")]
	[Address(RVA = "0x32869C0", Offset = "0x3284FC0", VA = "0x1832869C0")]
	internal void AddChildAndInsertContentToVisualTree(UIDocument child)
	{
	}

	[Token(Token = "0x600113E")]
	[Address(RVA = "0x32888B0", Offset = "0x3286EB0", VA = "0x1832888B0")]
	private void RemoveChild(UIDocument child)
	{
	}

	[Token(Token = "0x600113F")]
	[Address(RVA = "0x3288340", Offset = "0x3286940", VA = "0x183288340")]
	private void RecreateUI()
	{
	}

	[Token(Token = "0x6001140")]
	[Address(RVA = "0x3289690", Offset = "0x3287C90", VA = "0x183289690")]
	internal void SetupPosition()
	{
	}

	[Token(Token = "0x6001141")]
	[Address(RVA = "0x3289790", Offset = "0x3287D90", VA = "0x183289790")]
	private void SetupRootClassList()
	{
	}

	[Token(Token = "0x6001142")]
	[Address(RVA = "0x3289A50", Offset = "0x3288050", VA = "0x183289A50")]
	private void SetupWorldSpaceSize()
	{
	}

	[Token(Token = "0x6001143")]
	[Address(RVA = "0x3286BC0", Offset = "0x32851C0", VA = "0x183286BC0")]
	private void AddRootVisualElementToTree()
	{
	}

	[Token(Token = "0x6001144")]
	[Address(RVA = "0x3288920", Offset = "0x3286F20", VA = "0x183288920")]
	private void RemoveFromHierarchy()
	{
	}

	[Token(Token = "0x6001145")]
	[Address(RVA = "0x3287B50", Offset = "0x3286150", VA = "0x183287B50")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6001146")]
	[Address(RVA = "0x3287DB0", Offset = "0x32863B0", VA = "0x183287DB0")]
	private void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x6001147")]
	[Address(RVA = "0x3287FA0", Offset = "0x32865A0", VA = "0x183287FA0")]
	private void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x6001148")]
	[Address(RVA = "0x3288290", Offset = "0x3286890", VA = "0x183288290")]
	internal void ReactToHierarchyChanged()
	{
	}
}
