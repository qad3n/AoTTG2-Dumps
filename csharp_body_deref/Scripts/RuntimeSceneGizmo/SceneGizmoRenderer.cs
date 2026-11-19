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

[Token(Token = "0x200005D")]
public class SceneGizmoRenderer : MonoBehaviour, IPointerClickHandler, IEventSystemHandler, IDragHandler, IPointerEnterHandler, IPointerExitHandler
{
	[Token(Token = "0x4000201")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private RawImage imageHolder;

	[Token(Token = "0x4000202")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform imageHolderTR;

	[Token(Token = "0x4000203")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private SceneGizmoController controller;

	[Token(Token = "0x4000204")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	[Tooltip("Should gizmo's hovered components turn yellow")]
	private bool highlightHoveredComponents;

	[Token(Token = "0x4000205")]
	[FieldOffset(Offset = "0x40")]
	private PointerEventData hoveringPointer;

	[Token(Token = "0x4000206")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	[Tooltip("(Optional) Gizmo will match the reference Transform's rotation")]
	private Transform m_referenceTransform;

	[Token(Token = "0x4000207")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private ComponentClickedEvent m_onComponentClicked;

	[Token(Token = "0x1700007D")]
	public Transform ReferenceTransform
	{
		[Token(Token = "0x60002FB")]
		[Address(RVA = "0x576D500", Offset = "0x576C500", VA = "0x576D500")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002FC")]
		[Address(RVA = "0x576D510", Offset = "0x576C510", VA = "0x576D510")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	public ComponentClickedEvent OnComponentClicked
	{
		[Token(Token = "0x60002FD")]
		[Address(RVA = "0x576D550", Offset = "0x576C550", VA = "0x576D550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x576D560", Offset = "0x576C560", VA = "0x576D560")]
	private void Awake()
	{
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x576D670", Offset = "0x576C670", VA = "0x576D670")]
	private void Start()
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x576D710", Offset = "0x576C710", VA = "0x576D710")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x576D7C0", Offset = "0x576C7C0", VA = "0x576D7C0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x576D870", Offset = "0x576C870", VA = "0x576D870")]
	private void Update()
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x576D990", Offset = "0x576C990", VA = "0x576D990", Slot = "4")]
	public void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x576DA10", Offset = "0x576CA10", VA = "0x576DA10", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x576D8A0", Offset = "0x576C8A0", VA = "0x576D8A0")]
	private Vector3 GetNormalizedPointerPosition(PointerEventData eventData)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x576DA20", Offset = "0x576CA20", VA = "0x576DA20", Slot = "6")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x576DA40", Offset = "0x576CA40", VA = "0x576DA40", Slot = "7")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x576DA80", Offset = "0x576CA80", VA = "0x576DA80")]
	public SceneGizmoRenderer()
	{
	}
}
