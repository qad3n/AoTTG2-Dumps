using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace RuntimeSceneGizmo;

[Token(Token = "0x200005E")]
public class SceneGizmoRenderer : MonoBehaviour, IPointerClickHandler, IEventSystemHandler, IDragHandler, IPointerEnterHandler, IPointerExitHandler
{
	[Token(Token = "0x40001E6")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private RawImage imageHolder;

	[Token(Token = "0x40001E7")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform imageHolderTR;

	[Token(Token = "0x40001E8")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private SceneGizmoController controller;

	[Token(Token = "0x40001E9")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	[Tooltip("Should gizmo's hovered components turn yellow")]
	private bool highlightHoveredComponents;

	[Token(Token = "0x40001EA")]
	[FieldOffset(Offset = "0x40")]
	private PointerEventData hoveringPointer;

	[Token(Token = "0x40001EB")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	[Tooltip("(Optional) Gizmo will match the reference Transform's rotation")]
	private Transform m_referenceTransform;

	[Token(Token = "0x40001EC")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private ComponentClickedEvent m_onComponentClicked;

	[Token(Token = "0x17000082")]
	public Transform ReferenceTransform
	{
		[Token(Token = "0x60002E2")]
		[Address(RVA = "0x3C8E2A0", Offset = "0x3C8E2A0", VA = "0x3C8E2A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x3C8E2B0", Offset = "0x3C8E2B0", VA = "0x3C8E2B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	public ComponentClickedEvent OnComponentClicked
	{
		[Token(Token = "0x60002E4")]
		[Address(RVA = "0x3C8E2F0", Offset = "0x3C8E2F0", VA = "0x3C8E2F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x3C8E300", Offset = "0x3C8E300", VA = "0x3C8E300")]
	private void Awake()
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x3C8E400", Offset = "0x3C8E400", VA = "0x3C8E400")]
	private void Start()
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x3C8E4A0", Offset = "0x3C8E4A0", VA = "0x3C8E4A0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x3C8E550", Offset = "0x3C8E550", VA = "0x3C8E550")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x3C8E600", Offset = "0x3C8E600", VA = "0x3C8E600")]
	private void Update()
	{
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x3C8E7A0", Offset = "0x3C8E7A0", VA = "0x3C8E7A0", Slot = "4")]
	public void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x3C8E8D0", Offset = "0x3C8E8D0", VA = "0x3C8E8D0", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x3C8E6E0", Offset = "0x3C8E6E0", VA = "0x3C8E6E0")]
	private Vector3 GetNormalizedPointerPosition(PointerEventData eventData)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x3C8E8E0", Offset = "0x3C8E8E0", VA = "0x3C8E8E0", Slot = "6")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x3C8E900", Offset = "0x3C8E900", VA = "0x3C8E900", Slot = "7")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x3C8E940", Offset = "0x3C8E940", VA = "0x3C8E940")]
	public SceneGizmoRenderer()
	{
	}
}
