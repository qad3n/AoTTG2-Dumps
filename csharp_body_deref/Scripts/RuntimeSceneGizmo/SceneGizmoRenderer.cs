// ==================== AoTTG2 cross-reference ====================
// Type: RuntimeSceneGizmo.SceneGizmoRenderer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/RuntimeSceneGizmo/SceneGizmoRenderer.c
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/RuntimeSceneGizmo/SceneGizmoRenderer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace RuntimeSceneGizmo;

[Token(Token = "0x200005E")]
public class SceneGizmoRenderer : MonoBehaviour, IPointerClickHandler, IEventSystemHandler, IDragHandler, IPointerEnterHandler, IPointerExitHandler
{
	[Token(Token = "0x40001F2")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private RawImage imageHolder;

	[Token(Token = "0x40001F3")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform imageHolderTR;

	[Token(Token = "0x40001F4")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private SceneGizmoController controller;

	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	[Tooltip("Should gizmo's hovered components turn yellow")]
	private bool highlightHoveredComponents;

	[Token(Token = "0x40001F6")]
	[FieldOffset(Offset = "0x40")]
	private PointerEventData hoveringPointer;

	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	[Tooltip("(Optional) Gizmo will match the reference Transform's rotation")]
	private Transform m_referenceTransform;

	[Token(Token = "0x40001F8")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private ComponentClickedEvent m_onComponentClicked;

	[Token(Token = "0x17000084")]
	public Transform ReferenceTransform
	{
		[Token(Token = "0x60002F2")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002F3")]
		[Address(RVA = "0x1DCEE90", Offset = "0x1DCD490", VA = "0x181DCEE90")]
		set
		{
		}
	}

	[Token(Token = "0x17000085")]
	public ComponentClickedEvent OnComponentClicked
	{
		[Token(Token = "0x60002F4")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x1DCE840", Offset = "0x1DCCE40", VA = "0x181DCE840")]
	private void Awake()
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x1DCED80", Offset = "0x1DCD380", VA = "0x181DCED80")]
	private void Start()
	{
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x1DCEB90", Offset = "0x1DCD190", VA = "0x181DCEB90")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x1DCEAE0", Offset = "0x1DCD0E0", VA = "0x181DCEAE0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x1DCEE20", Offset = "0x1DCD420", VA = "0x181DCEE20")]
	private void Update()
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x1DCEC40", Offset = "0x1DCD240", VA = "0x181DCEC40", Slot = "4")]
	public void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x1DCE960", Offset = "0x1DCCF60", VA = "0x181DCE960")]
	private Vector3 GetNormalizedPointerPosition(PointerEventData eventData)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x1DCECF0", Offset = "0x1DCD2F0", VA = "0x181DCECF0", Slot = "6")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x1DCED10", Offset = "0x1DCD310", VA = "0x181DCED10", Slot = "7")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x1DCEE80", Offset = "0x1DCD480", VA = "0x181DCEE80")]
	public SceneGizmoRenderer()
	{
	}
}
