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
		[Address(RVA = "0x3F83BF0", Offset = "0x3F83BF0", VA = "0x3F83BF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x3F83C00", Offset = "0x3F83C00", VA = "0x3F83C00")]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	public ComponentClickedEvent OnComponentClicked
	{
		[Token(Token = "0x60002E4")]
		[Address(RVA = "0x3F83C40", Offset = "0x3F83C40", VA = "0x3F83C40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x3F83C50", Offset = "0x3F83C50", VA = "0x3F83C50")]
	private void Awake()
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x3F83D50", Offset = "0x3F83D50", VA = "0x3F83D50")]
	private void Start()
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x3F83DF0", Offset = "0x3F83DF0", VA = "0x3F83DF0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x3F83EA0", Offset = "0x3F83EA0", VA = "0x3F83EA0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x3F83F50", Offset = "0x3F83F50", VA = "0x3F83F50")]
	private void Update()
	{
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x3F840F0", Offset = "0x3F840F0", VA = "0x3F840F0", Slot = "4")]
	public void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x3F84220", Offset = "0x3F84220", VA = "0x3F84220", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x3F84030", Offset = "0x3F84030", VA = "0x3F84030")]
	private Vector3 GetNormalizedPointerPosition(PointerEventData eventData)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x3F84230", Offset = "0x3F84230", VA = "0x3F84230", Slot = "6")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x3F84250", Offset = "0x3F84250", VA = "0x3F84250", Slot = "7")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x3F84290", Offset = "0x3F84290", VA = "0x3F84290")]
	public SceneGizmoRenderer()
	{
	}
}
