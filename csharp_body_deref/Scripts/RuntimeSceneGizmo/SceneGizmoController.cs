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

[Token(Token = "0x200005B")]
public class SceneGizmoController : MonoBehaviour
{
	[Token(Token = "0x40001EF")]
	private const int GIZMOS_LAYER = 24;

	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Camera gizmoCamera;

	[Token(Token = "0x40001F1")]
	[FieldOffset(Offset = "0x28")]
	private Transform gizmoCamParent;

	[Token(Token = "0x40001F2")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private Renderer[] gizmoComponents;

	[Token(Token = "0x40001F3")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private TextMesh[] labels;

	[Token(Token = "0x40001F4")]
	[FieldOffset(Offset = "0x40")]
	private Transform[] labelsTR;

	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0x48")]
	private Transform m_referenceTransform;

	[Token(Token = "0x40001F6")]
	[FieldOffset(Offset = "0x50")]
	private Vector3 prevForward;

	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x60")]
	private Material gizmoNormalMaterial;

	[Token(Token = "0x40001F8")]
	[FieldOffset(Offset = "0x68")]
	private Material gizmoFadeMaterial;

	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x70")]
	private Material gizmoHighlightMaterial;

	[Token(Token = "0x40001FA")]
	[FieldOffset(Offset = "0x78")]
	private int gizmoMaterialFadeProperty;

	[Token(Token = "0x40001FB")]
	[FieldOffset(Offset = "0x7C")]
	private GizmoComponent highlightedComponent;

	[Token(Token = "0x40001FC")]
	[FieldOffset(Offset = "0x80")]
	private GizmoComponent fadingComponent;

	[Token(Token = "0x40001FD")]
	[FieldOffset(Offset = "0x84")]
	private bool isFadingToZero;

	[Token(Token = "0x40001FE")]
	[FieldOffset(Offset = "0x88")]
	private float fadeT;

	[Token(Token = "0x40001FF")]
	[FieldOffset(Offset = "0x8C")]
	private bool updateTargetTexture;

	[Token(Token = "0x1700007B")]
	public Transform ReferenceTransform
	{
		[Token(Token = "0x60002EB")]
		[Address(RVA = "0x576C1E0", Offset = "0x576B1E0", VA = "0x576C1E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002EC")]
		[Address(RVA = "0x576C1F0", Offset = "0x576B1F0", VA = "0x576C1F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public RenderTexture TargetTexture
	{
		[Token(Token = "0x60002ED")]
		[Address(RVA = "0x576C380", Offset = "0x576B380", VA = "0x576C380")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002EE")]
		[Address(RVA = "0x576C390", Offset = "0x576B390", VA = "0x576C390")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x576C3B0", Offset = "0x576B3B0", VA = "0x576C3B0")]
	private void Awake()
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x576C7E0", Offset = "0x576B7E0", VA = "0x576C7E0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x576CA30", Offset = "0x576BA30", VA = "0x576CA30")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x576CAD0", Offset = "0x576BAD0", VA = "0x576CAD0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x576D230", Offset = "0x576C230", VA = "0x576D230")]
	public GizmoComponent Raycast(Vector3 normalizedPosition)
	{
		return default(GizmoComponent);
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x576D3D0", Offset = "0x576C3D0", VA = "0x576D3D0")]
	public void OnPointerHover(Vector3 normalizedPosition)
	{
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x576C840", Offset = "0x576B840", VA = "0x576C840")]
	private void SetHiddenComponent(GizmoComponent component)
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x576D0D0", Offset = "0x576C0D0", VA = "0x576D0D0")]
	private void SetAlphaOf(GizmoComponent component, float alpha)
	{
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x576D190", Offset = "0x576C190", VA = "0x576D190")]
	private void SetMaterialOf(GizmoComponent component, Material material)
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x576D0B0", Offset = "0x576C0B0", VA = "0x576D0B0")]
	private GizmoComponent GetOppositeComponent(GizmoComponent component)
	{
		return default(GizmoComponent);
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x576D4A0", Offset = "0x576C4A0", VA = "0x576D4A0")]
	public SceneGizmoController()
	{
	}
}
