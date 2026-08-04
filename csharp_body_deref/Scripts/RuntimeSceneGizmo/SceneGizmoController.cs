// ==================== AoTTG2 cross-reference ====================
// Type: RuntimeSceneGizmo.SceneGizmoController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/RuntimeSceneGizmo/SceneGizmoController.c
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/RuntimeSceneGizmo/SceneGizmoController.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace RuntimeSceneGizmo;

[Token(Token = "0x200005C")]
public class SceneGizmoController : MonoBehaviour
{
	[Token(Token = "0x40001D4")]
	private const int GIZMOS_LAYER = 24;

	[Token(Token = "0x40001D5")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Camera gizmoCamera;

	[Token(Token = "0x40001D6")]
	[FieldOffset(Offset = "0x28")]
	private Transform gizmoCamParent;

	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private Renderer[] gizmoComponents;

	[Token(Token = "0x40001D8")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private TextMesh[] labels;

	[Token(Token = "0x40001D9")]
	[FieldOffset(Offset = "0x40")]
	private Transform[] labelsTR;

	[Token(Token = "0x40001DA")]
	[FieldOffset(Offset = "0x48")]
	private Transform m_referenceTransform;

	[Token(Token = "0x40001DB")]
	[FieldOffset(Offset = "0x50")]
	private Vector3 prevForward;

	[Token(Token = "0x40001DC")]
	[FieldOffset(Offset = "0x60")]
	private Material gizmoNormalMaterial;

	[Token(Token = "0x40001DD")]
	[FieldOffset(Offset = "0x68")]
	private Material gizmoFadeMaterial;

	[Token(Token = "0x40001DE")]
	[FieldOffset(Offset = "0x70")]
	private Material gizmoHighlightMaterial;

	[Token(Token = "0x40001DF")]
	[FieldOffset(Offset = "0x78")]
	private int gizmoMaterialFadeProperty;

	[Token(Token = "0x40001E0")]
	[FieldOffset(Offset = "0x7C")]
	private GizmoComponent highlightedComponent;

	[Token(Token = "0x40001E1")]
	[FieldOffset(Offset = "0x80")]
	private GizmoComponent fadingComponent;

	[Token(Token = "0x40001E2")]
	[FieldOffset(Offset = "0x84")]
	private bool isFadingToZero;

	[Token(Token = "0x40001E3")]
	[FieldOffset(Offset = "0x88")]
	private float fadeT;

	[Token(Token = "0x40001E4")]
	[FieldOffset(Offset = "0x8C")]
	private bool updateTargetTexture;

	[Token(Token = "0x17000080")]
	public Transform ReferenceTransform
	{
		[Token(Token = "0x60002D2")]
		[Address(RVA = "0x3F82890", Offset = "0x3F82890", VA = "0x3F82890")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002D3")]
		[Address(RVA = "0x3F828A0", Offset = "0x3F828A0", VA = "0x3F828A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public RenderTexture TargetTexture
	{
		[Token(Token = "0x60002D4")]
		[Address(RVA = "0x3F82A30", Offset = "0x3F82A30", VA = "0x3F82A30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002D5")]
		[Address(RVA = "0x3F82A40", Offset = "0x3F82A40", VA = "0x3F82A40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x3F82A60", Offset = "0x3F82A60", VA = "0x3F82A60")]
	private void Awake()
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x3F82E80", Offset = "0x3F82E80", VA = "0x3F82E80")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x3F830E0", Offset = "0x3F830E0", VA = "0x3F830E0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x3F83180", Offset = "0x3F83180", VA = "0x3F83180")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x3F838F0", Offset = "0x3F838F0", VA = "0x3F838F0")]
	public GizmoComponent Raycast(Vector3 normalizedPosition)
	{
		return default(GizmoComponent);
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x3F83AC0", Offset = "0x3F83AC0", VA = "0x3F83AC0")]
	public void OnPointerHover(Vector3 normalizedPosition)
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x3F82EE0", Offset = "0x3F82EE0", VA = "0x3F82EE0")]
	private void SetHiddenComponent(GizmoComponent component)
	{
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x3F83790", Offset = "0x3F83790", VA = "0x3F83790")]
	private void SetAlphaOf(GizmoComponent component, float alpha)
	{
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x3F83850", Offset = "0x3F83850", VA = "0x3F83850")]
	private void SetMaterialOf(GizmoComponent component, Material material)
	{
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x3F83770", Offset = "0x3F83770", VA = "0x3F83770")]
	private GizmoComponent GetOppositeComponent(GizmoComponent component)
	{
		return default(GizmoComponent);
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x3F83B90", Offset = "0x3F83B90", VA = "0x3F83B90")]
	public SceneGizmoController()
	{
	}
}
