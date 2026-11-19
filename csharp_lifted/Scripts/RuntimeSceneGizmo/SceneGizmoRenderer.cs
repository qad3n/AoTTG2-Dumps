// ==================== AoTTG2 cross-reference ====================
// Type: RuntimeSceneGizmo.SceneGizmoRenderer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/RuntimeSceneGizmo/SceneGizmoRenderer.c
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/RuntimeSceneGizmo/SceneGizmoRenderer.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoRenderer.c (RuntimeSceneGizmo.SceneGizmoRenderer$$get_ReferenceTransform): clean
			return this.m_referenceTransform;
		}
		[Token(Token = "0x60002FC")]
		[Address(RVA = "0x576D510", Offset = "0x576C510", VA = "0x576D510")]
		set
		{
			// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoRenderer.c (RuntimeSceneGizmo.SceneGizmoRenderer$$set_ReferenceTransform): clean
			SceneGizmoController __this_00;

			this.m_referenceTransform = value;
			__this_00 = this.controller;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.ReferenceTransform = value;
			return;
		}
	}

	[Token(Token = "0x1700007E")]
	public ComponentClickedEvent OnComponentClicked
	{
		[Token(Token = "0x60002FD")]
		[Address(RVA = "0x576D550", Offset = "0x576C550", VA = "0x576D550")]
		get
		{
			// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoRenderer.c (RuntimeSceneGizmo.SceneGizmoRenderer$$get_OnComponentClicked): clean
			return this.m_onComponentClicked;
		}
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x576D560", Offset = "0x576C560", VA = "0x576D560")]
	private void Awake()
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoRenderer.c (RuntimeSceneGizmo.SceneGizmoRenderer$$Awake): 1 lines keep C-only constructs
		RawImage pUVar1;
		RectTransform pUVar2;
		RectTransform pUVar3;
		SceneGizmoController pRVar4;

		pUVar1 = this.imageHolder;
		if (pUVar1 != null) {
			pUVar3 = (RectTransform)pUVar1.transform;
			pUVar2 = typeof(RectTransform);
			if (pUVar3 == null) {
				this.imageHolderTR = null;
			}
			else if ((pUVar3.klass != typeof(RectTransform)) ||(this.imageHolderTR = pUVar3, pUVar3.klass != pUVar2)) {
				throw new InvalidCastException();
			}
			pRVar4 = this.controller;
			pRVar4 = Object.Instantiate<SceneGizmoController>((object)pRVar4);
			this.controller = pRVar4;
			pRVar4 = this.controller;
			if ((pRVar4 != null) &&(pUVar1 = this.imageHolder, pUVar1 != null)) {
				pUVar1.texture = (Texture)pRVar4._TargetTexture_k__BackingField;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x576D670", Offset = "0x576C670", VA = "0x576D670")]
	private void Start()
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoRenderer.c (RuntimeSceneGizmo.SceneGizmoRenderer$$Start): clean
		Transform pUVar1;
		SceneGizmoController __this_00;
		bool bVar2;

		pUVar1 = this.m_referenceTransform;
		bVar2 = ((Object)pUVar1 != null);
		if (!bVar2) {
			return;
		}
		pUVar1 = this.m_referenceTransform;
		if (pUVar1 != null) {
			bVar2 = pUVar1.Equals(null);
			if (bVar2) {
				return;
			}
			__this_00 = this.controller;
			if (__this_00 != null) {
				__this_00.ReferenceTransform = this.m_referenceTransform;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x576D710", Offset = "0x576C710", VA = "0x576D710")]
	private void OnEnable()
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoRenderer.c (RuntimeSceneGizmo.SceneGizmoRenderer$$OnEnable): clean
		SceneGizmoController pRVar1;
		bool bVar2;
		GameObject __this_00;

		pRVar1 = this.controller;
		bVar2 = ((Object)pRVar1 != null);
		if (!bVar2) {
			return;
		}
		pRVar1 = this.controller;
		if (pRVar1 != null) {
			bVar2 = pRVar1.Equals(null);
			if (bVar2) {
				return;
			}
			pRVar1 = this.controller;
			if ((pRVar1 != null) &&(__this_00 = pRVar1.gameObject , __this_00 != null)) {
				__this_00.SetActive(true);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x576D7C0", Offset = "0x576C7C0", VA = "0x576D7C0")]
	private void OnDisable()
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoRenderer.c (RuntimeSceneGizmo.SceneGizmoRenderer$$OnDisable): clean
		SceneGizmoController pRVar1;
		bool bVar2;
		GameObject __this_00;

		pRVar1 = this.controller;
		bVar2 = ((Object)pRVar1 != null);
		if (!bVar2) {
			return;
		}
		pRVar1 = this.controller;
		if (pRVar1 != null) {
			bVar2 = pRVar1.Equals(null);
			if (bVar2) {
				return;
			}
			pRVar1 = this.controller;
			if ((pRVar1 != null) &&(__this_00 = pRVar1.gameObject , __this_00 != null)) {
				__this_00.SetActive(false);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x576D870", Offset = "0x576C870", VA = "0x576D870")]
	private void Update()
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoRenderer.c (RuntimeSceneGizmo.SceneGizmoRenderer$$Update): clean
		SceneGizmoController __this_00;
		PointerEventData eventData;
		Vector3 normalizedPosition;

		eventData = this.hoveringPointer;
		if (eventData == null) {
			return;
		}
		__this_00 = this.controller;
		normalizedPosition = this.GetNormalizedPointerPosition(eventData);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnPointerHover(normalizedPosition) ;
		return;
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x576D990", Offset = "0x576C990", VA = "0x576D990", Slot = "4")]
	public void OnPointerClick(PointerEventData eventData)
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoRenderer.c (RuntimeSceneGizmo.SceneGizmoRenderer$$OnPointerClick): clean
		SceneGizmoController __this_00;
		ComponentClickedEvent __this_01;
		int arg0;
		Vector3 normalizedPosition;

		if (eventData != null) {
			if (eventData._dragging_k__BackingField != false) {
				return;
			}
			__this_00 = this.controller;
			normalizedPosition = this.GetNormalizedPointerPosition(eventData);
			if (__this_00 != null) {
				arg0 = __this_00.Raycast(normalizedPosition);
				if (arg0 == -1) {
					return;
				}
				__this_01 = this.m_onComponentClicked;
				if (__this_01 != null) {
					__this_01.Invoke(arg0);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x576DA10", Offset = "0x576CA10", VA = "0x576DA10", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoRenderer.c (RuntimeSceneGizmo.SceneGizmoRenderer$$OnDrag): clean
		return;
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x576D8A0", Offset = "0x576C8A0", VA = "0x576D8A0")]
	private Vector3 GetNormalizedPointerPosition(PointerEventData eventData)
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoRenderer.c (RuntimeSceneGizmo.SceneGizmoRenderer$$GetNormalizedPointerPosition): 12 lines keep C-only constructs
		RectTransform pUVar1;
		Camera cam;
		byte[] auVar2 = new byte[16];
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Rect UVar3;
		Vector3 UVar4;
		Vector2 local_40;
		Vector2 local_38;
		byte[] local_28 = new byte[16];

		local_40.x = 0.0;
		local_40.y = 0.0;
		pUVar1 = this.imageHolderTR;
		if (pUVar1 != null) {
			UVar3 = pUVar1.rect;
			local_28._8_4_ = in_XMM1_Dc;
			local_28._0_8_ = UVar3._8_8_;
			local_28._12_4_ = in_XMM1_Dd;
			if (eventData != null) {
				pUVar1 = this.imageHolderTR;
				local_38 = eventData._position_k__BackingField;
				cam = eventData.enterEventCamera;
				RectTransformUtility.ScreenPointToLocalPointInRectangle(pUVar1, (Vector2)local_38, cam, ref local_40);
				auVar2._8_8_ = 0;
				auVar2._0_4_ = local_40.x;
				auVar2._4_4_ = local_40.y;
				auVar2 = divps(auVar2, local_28);
				UVar4.x = auVar2._0_4_ + 1.0;
				UVar4.y = auVar2._4_4_ + 1.0;
				UVar4.z = 0.0;
				return (Vector3)UVar4;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x576DA20", Offset = "0x576CA20", VA = "0x576DA20", Slot = "6")]
	public void OnPointerEnter(PointerEventData eventData)
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoRenderer.c (RuntimeSceneGizmo.SceneGizmoRenderer$$OnPointerEnter): clean
		if (this.highlightHoveredComponents == false) {
			return;
		}
		this.hoveringPointer = eventData;
		return;
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x576DA40", Offset = "0x576CA40", VA = "0x576DA40", Slot = "7")]
	public void OnPointerExit(PointerEventData eventData)
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoRenderer.c (RuntimeSceneGizmo.SceneGizmoRenderer$$OnPointerExit): 3 lines keep C-only constructs
		SceneGizmoController __this_00;
		PointerEventData* targetAddress;

		if (this.hoveringPointer == null) {
			return;
		}
		__this_00 = this.controller;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		targetAddress = &this.hoveringPointer;
		__this_00.OnPointerHover((Vector3)ZEXT812(0xc1200000c1200000));
		*targetAddress = null;
		return;
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x576DA80", Offset = "0x576CA80", VA = "0x576DA80")]
	public SceneGizmoRenderer()
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/SceneGizmoRenderer.c (RuntimeSceneGizmo.SceneGizmoRenderer$$.ctor): clean
		this.highlightHoveredComponents = true;
		base();
		return;
	}
}
