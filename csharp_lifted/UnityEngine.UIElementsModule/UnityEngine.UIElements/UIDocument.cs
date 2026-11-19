// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIDocument
// Update status: unchanged since the previous dump
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
[HelpURL("UIE-get-started-with-runtime-ui")]
[AddComponentMenu("UI Toolkit/UI Document")]
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
	[HideInInspector]
	[SerializeField]
	private BoxCollider m_WorldSpaceCollider;

	[Token(Token = "0x400098B")]
	[FieldOffset(Offset = "0x98")]
	private bool m_RootHasWorldTransform;

	[Token(Token = "0x1700036E")]
	public PanelSettings panelSettings
	{
		[Token(Token = "0x6001107")]
		[Address(RVA = "0x6C8A850", Offset = "0x6C89850", VA = "0x6C8A850")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001108")]
		[Address(RVA = "0x6C8A860", Offset = "0x6C89860", VA = "0x6C8A860")]
		set
		{
		}
	}

	[Token(Token = "0x1700036F")]
	public UIDocument parentUI
	{
		[Token(Token = "0x6001109")]
		[Address(RVA = "0x6C8AB60", Offset = "0x6C89B60", VA = "0x6C8AB60")]
		get
		{
			return null;
		}
		[Token(Token = "0x600110A")]
		[Address(RVA = "0x6C8AB70", Offset = "0x6C89B70", VA = "0x6C8AB70")]
		private set
		{
		}
	}

	[Token(Token = "0x17000370")]
	public VisualTreeAsset visualTreeAsset
	{
		[Token(Token = "0x600110B")]
		[Address(RVA = "0x6C8AB80", Offset = "0x6C89B80", VA = "0x6C8AB80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600110C")]
		[Address(RVA = "0x6C8AB90", Offset = "0x6C89B90", VA = "0x6C8AB90")]
		set
		{
		}
	}

	[Token(Token = "0x17000371")]
	public VisualElement rootVisualElement
	{
		[Token(Token = "0x600110D")]
		[Address(RVA = "0x6C84190", Offset = "0x6C83190", VA = "0x6C84190")]
		get
		{
			return null;
		}
		[Token(Token = "0x600110E")]
		[Address(RVA = "0x6C8B410", Offset = "0x6C8A410", VA = "0x6C8B410")]
		private set
		{
		}
	}

	[Token(Token = "0x17000372")]
	internal VisualElementFocusRing focusRing
	{
		[Token(Token = "0x600110F")]
		[Address(RVA = "0x6C8B500", Offset = "0x6C8A500", VA = "0x6C8B500")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001110")]
		[Address(RVA = "0x6C8B510", Offset = "0x6C8A510", VA = "0x6C8B510")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000373")]
	internal int firstChildInserIndex
	{
		[Token(Token = "0x6001111")]
		[Address(RVA = "0x6C8B520", Offset = "0x6C8A520", VA = "0x6C8B520")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000374")]
	public Position position
	{
		[Token(Token = "0x6001112")]
		[Address(RVA = "0x6C8B530", Offset = "0x6C8A530", VA = "0x6C8B530")]
		get
		{
			return default(Position);
		}
		[Token(Token = "0x6001113")]
		[Address(RVA = "0x6C8B540", Offset = "0x6C8A540", VA = "0x6C8B540")]
		set
		{
		}
	}

	[Token(Token = "0x17000375")]
	public WorldSpaceSizeMode worldSpaceSizeMode
	{
		[Token(Token = "0x6001114")]
		[Address(RVA = "0x6C8B720", Offset = "0x6C8A720", VA = "0x6C8B720")]
		get
		{
			return default(WorldSpaceSizeMode);
		}
		[Token(Token = "0x6001115")]
		[Address(RVA = "0x6C8B730", Offset = "0x6C8A730", VA = "0x6C8B730")]
		set
		{
		}
	}

	[Token(Token = "0x17000376")]
	public Vector2 worldSpaceSize
	{
		[Token(Token = "0x6001116")]
		[Address(RVA = "0x6C8BCA0", Offset = "0x6C8ACA0", VA = "0x6C8BCA0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6001117")]
		[Address(RVA = "0x6C8BCB0", Offset = "0x6C8ACB0", VA = "0x6C8BCB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000377")]
	private bool isWorldSpace
	{
		[Token(Token = "0x6001118")]
		[Address(RVA = "0x6C8BD00", Offset = "0x6C8AD00", VA = "0x6C8BD00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000378")]
	internal bool isTransformControlledByGameObject
	{
		[Token(Token = "0x6001119")]
		[Address(RVA = "0x6C8BD70", Offset = "0x6C8AD70", VA = "0x6C8BD70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000379")]
	public PivotReferenceSize pivotReferenceSize
	{
		[Token(Token = "0x600111A")]
		[Address(RVA = "0x6C8BE40", Offset = "0x6C8AE40", VA = "0x6C8BE40")]
		get
		{
			return default(PivotReferenceSize);
		}
		[Token(Token = "0x600111B")]
		[Address(RVA = "0x6C8BE50", Offset = "0x6C8AE50", VA = "0x6C8BE50")]
		set
		{
		}
	}

	[Token(Token = "0x1700037A")]
	public Pivot pivot
	{
		[Token(Token = "0x600111C")]
		[Address(RVA = "0x6C8BE60", Offset = "0x6C8AE60", VA = "0x6C8BE60")]
		get
		{
			return default(Pivot);
		}
		[Token(Token = "0x600111D")]
		[Address(RVA = "0x6C8BE70", Offset = "0x6C8AE70", VA = "0x6C8BE70")]
		set
		{
		}
	}

	[Token(Token = "0x1700037B")]
	public float sortingOrder
	{
		[Token(Token = "0x600111E")]
		[Address(RVA = "0x6C8BE80", Offset = "0x6C8AE80", VA = "0x6C8BE80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600111F")]
		[Address(RVA = "0x6C8BE90", Offset = "0x6C8AE90", VA = "0x6C8BE90")]
		set
		{
		}
	}

	[Token(Token = "0x1700037C")]
	public IRuntimePanel runtimePanel
	{
		[Token(Token = "0x6001126")]
		[Address(RVA = "0x6C8C250", Offset = "0x6C8B250", VA = "0x6C8C250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700037D")]
	internal RuntimePanel containerPanel
	{
		[Token(Token = "0x6001127")]
		[Address(RVA = "0x6C8C2C0", Offset = "0x6C8B2C0", VA = "0x6C8C2C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700037E")]
	private float pixelsPerUnit
	{
		[Token(Token = "0x6001133")]
		[Address(RVA = "0x6C8D850", Offset = "0x6C8C850", VA = "0x6C8D850")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6001120")]
	[Address(RVA = "0x6C8BEB0", Offset = "0x6C8AEB0", VA = "0x6C8BEB0")]
	internal void ApplySortingOrder()
	{
	}

	[Token(Token = "0x6001121")]
	[Address(RVA = "0x6C834C0", Offset = "0x6C824C0", VA = "0x6C834C0")]
	internal static UIDocument FindRootUIDocument(VisualElement element)
	{
		return null;
	}

	[Token(Token = "0x6001122")]
	[Address(RVA = "0x6C8BF80", Offset = "0x6C8AF80", VA = "0x6C8BF80")]
	private UIDocument()
	{
	}

	[Token(Token = "0x6001123")]
	[Address(RVA = "0x6C8C030", Offset = "0x6C8B030", VA = "0x6C8C030")]
	private void Awake()
	{
	}

	[Token(Token = "0x6001124")]
	[Address(RVA = "0x6C8C110", Offset = "0x6C8B110", VA = "0x6C8C110")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6001125")]
	[Address(RVA = "0x6C8C150", Offset = "0x6C8B150", VA = "0x6C8C150")]
	private void _Enable()
	{
	}

	[Token(Token = "0x6001128")]
	[Address(RVA = "0x6C8C330", Offset = "0x6C8B330", VA = "0x6C8C330")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6001129")]
	[Address(RVA = "0x6C8C340", Offset = "0x6C8B340", VA = "0x6C8C340")]
	internal void DoUpdate()
	{
	}

	[Token(Token = "0x600112A")]
	[Address(RVA = "0x6C8CF40", Offset = "0x6C8BF40", VA = "0x6C8CF40")]
	private void UpdateRenderer()
	{
	}

	[Token(Token = "0x600112B")]
	[Address(RVA = "0x6C8D8D0", Offset = "0x6C8C8D0", VA = "0x6C8D8D0")]
	private Bounds SanitizeRendererBounds(Bounds b)
	{
		return default(Bounds);
	}

	[Token(Token = "0x600112C")]
	[Address(RVA = "0x6C8C5F0", Offset = "0x6C8B5F0", VA = "0x6C8C5F0")]
	private void AddOrRemoveRendererComponent()
	{
	}

	[Token(Token = "0x600112D")]
	[Address(RVA = "0x6C8D3E0", Offset = "0x6C8C3E0", VA = "0x6C8D3E0")]
	internal void UpdateWorldSpaceCollider(ColliderUpdateMode mode)
	{
	}

	[Token(Token = "0x600112E")]
	[Address(RVA = "0x6C8C580", Offset = "0x6C8B580", VA = "0x6C8C580")]
	internal void RemoveWorldSpaceCollider()
	{
	}

	[Token(Token = "0x600112F")]
	[Address(RVA = "0x6C8DCE0", Offset = "0x6C8CCE0", VA = "0x6C8DCE0")]
	private static bool IsValidBounds(in Bounds b)
	{
		return default(bool);
	}

	[Token(Token = "0x6001130")]
	[Address(RVA = "0x6C8D780", Offset = "0x6C8C780", VA = "0x6C8D780")]
	private void UpdateIsWorldSpaceRootFlag()
	{
	}

	[Token(Token = "0x6001131")]
	[Address(RVA = "0x6C8C740", Offset = "0x6C8B740", VA = "0x6C8C740")]
	private void SetTransform()
	{
	}

	[Token(Token = "0x6001132")]
	[Address(RVA = "0x6C8CBF0", Offset = "0x6C8BBF0", VA = "0x6C8CBF0")]
	private void ClearTransform()
	{
	}

	[Token(Token = "0x6001134")]
	[Address(RVA = "0x6C8E500", Offset = "0x6C8D500", VA = "0x6C8E500")]
	private Matrix4x4 ScaleAndFlipMatrix()
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6001135")]
	[Address(RVA = "0x6C8E7C0", Offset = "0x6C8D7C0", VA = "0x6C8E7C0")]
	private Bounds LocalBoundsFromPivotSource()
	{
		return default(Bounds);
	}

	[Token(Token = "0x6001136")]
	[Address(RVA = "0x6C8E9D0", Offset = "0x6C8D9D0", VA = "0x6C8E9D0")]
	private Vector2 PivotOffset()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6001137")]
	[Address(RVA = "0x6C8DA10", Offset = "0x6C8CA10", VA = "0x6C8DA10")]
	private Matrix4x4 TransformToGameObjectMatrix()
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6001138")]
	[Address(RVA = "0x6C8DD20", Offset = "0x6C8CD20", VA = "0x6C8DD20")]
	private void ComputeTransform(Transform transform, out Matrix4x4 matrix)
	{
	}

	[Token(Token = "0x6001139")]
	[Address(RVA = "0x6C8EA80", Offset = "0x6C8DA80", VA = "0x6C8EA80")]
	private static Vector2 GetPivotAsPercent(Pivot origin)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600113A")]
	[Address(RVA = "0x6C8C040", Offset = "0x6C8B040", VA = "0x6C8C040")]
	private void SetupFromHierarchy()
	{
	}

	[Token(Token = "0x600113B")]
	[Address(RVA = "0x6C8EB50", Offset = "0x6C8DB50", VA = "0x6C8EB50")]
	private UIDocument FindUIDocumentParent()
	{
		return null;
	}

	[Token(Token = "0x600113C")]
	[Address(RVA = "0x6C8EC10", Offset = "0x6C8DC10", VA = "0x6C8EC10")]
	internal void Reset()
	{
	}

	[Token(Token = "0x600113D")]
	[Address(RVA = "0x6C8ED10", Offset = "0x6C8DD10", VA = "0x6C8ED10")]
	internal void AddChildAndInsertContentToVisualTree(UIDocument child)
	{
	}

	[Token(Token = "0x600113E")]
	[Address(RVA = "0x6C8EAE0", Offset = "0x6C8DAE0", VA = "0x6C8EAE0")]
	private void RemoveChild(UIDocument child)
	{
	}

	[Token(Token = "0x600113F")]
	[Address(RVA = "0x6C8ABB0", Offset = "0x6C89BB0", VA = "0x6C8ABB0")]
	private void RecreateUI()
	{
	}

	[Token(Token = "0x6001140")]
	[Address(RVA = "0x6C8B550", Offset = "0x6C8A550", VA = "0x6C8B550")]
	internal void SetupPosition()
	{
	}

	[Token(Token = "0x6001141")]
	[Address(RVA = "0x6C8EF70", Offset = "0x6C8DF70", VA = "0x6C8EF70")]
	private void SetupRootClassList()
	{
	}

	[Token(Token = "0x6001142")]
	[Address(RVA = "0x6C8B740", Offset = "0x6C8A740", VA = "0x6C8B740")]
	private void SetupWorldSpaceSize()
	{
	}

	[Token(Token = "0x6001143")]
	[Address(RVA = "0x6C8BEC0", Offset = "0x6C8AEC0", VA = "0x6C8BEC0")]
	private void AddRootVisualElementToTree()
	{
	}

	[Token(Token = "0x6001144")]
	[Address(RVA = "0x6C8EE70", Offset = "0x6C8DE70", VA = "0x6C8EE70")]
	private void RemoveFromHierarchy()
	{
	}

	[Token(Token = "0x6001145")]
	[Address(RVA = "0x6C8F280", Offset = "0x6C8E280", VA = "0x6C8F280")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6001146")]
	[Address(RVA = "0x6C8F400", Offset = "0x6C8E400", VA = "0x6C8F400")]
	private void OnTransformChildrenChanged()
	{
	}

	[Token(Token = "0x6001147")]
	[Address(RVA = "0x6C8F6B0", Offset = "0x6C8E6B0", VA = "0x6C8F6B0")]
	private void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x6001148")]
	[Address(RVA = "0x6C8F610", Offset = "0x6C8E610", VA = "0x6C8F610")]
	internal void ReactToHierarchyChanged()
	{
	}
}
