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
	[Token(Token = "0x40001E0")]
	private const int GIZMOS_LAYER = 24;

	[Token(Token = "0x40001E1")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Camera gizmoCamera;

	[Token(Token = "0x40001E2")]
	[FieldOffset(Offset = "0x28")]
	private Transform gizmoCamParent;

	[Token(Token = "0x40001E3")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private Renderer[] gizmoComponents;

	[Token(Token = "0x40001E4")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private TextMesh[] labels;

	[Token(Token = "0x40001E5")]
	[FieldOffset(Offset = "0x40")]
	private Transform[] labelsTR;

	[Token(Token = "0x40001E6")]
	[FieldOffset(Offset = "0x48")]
	private Transform m_referenceTransform;

	[Token(Token = "0x40001E7")]
	[FieldOffset(Offset = "0x50")]
	private Vector3 prevForward;

	[Token(Token = "0x40001E8")]
	[FieldOffset(Offset = "0x60")]
	private Material gizmoNormalMaterial;

	[Token(Token = "0x40001E9")]
	[FieldOffset(Offset = "0x68")]
	private Material gizmoFadeMaterial;

	[Token(Token = "0x40001EA")]
	[FieldOffset(Offset = "0x70")]
	private Material gizmoHighlightMaterial;

	[Token(Token = "0x40001EB")]
	[FieldOffset(Offset = "0x78")]
	private int gizmoMaterialFadeProperty;

	[Token(Token = "0x40001EC")]
	[FieldOffset(Offset = "0x7C")]
	private GizmoComponent highlightedComponent;

	[Token(Token = "0x40001ED")]
	[FieldOffset(Offset = "0x80")]
	private GizmoComponent fadingComponent;

	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0x84")]
	private bool isFadingToZero;

	[Token(Token = "0x40001EF")]
	[FieldOffset(Offset = "0x88")]
	private float fadeT;

	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0x8C")]
	private bool updateTargetTexture;

	[Token(Token = "0x17000082")]
	public Transform ReferenceTransform
	{
		[Token(Token = "0x60002E2")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x1DCE680", Offset = "0x1DCCC80", VA = "0x181DCE680")]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	public RenderTexture TargetTexture
	{
		[Token(Token = "0x60002E4")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002E5")]
		[Address(RVA = "0xA4D750", Offset = "0xA4BD50", VA = "0x180A4D750")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x1DCD2E0", Offset = "0x1DCB8E0", VA = "0x181DCD2E0")]
	private void Awake()
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x1DCDF30", Offset = "0x1DCC530", VA = "0x181DCDF30")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x1DCDE90", Offset = "0x1DCC490", VA = "0x181DCDE90")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x1DCD760", Offset = "0x1DCBD60", VA = "0x181DCD760")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x1DCE0B0", Offset = "0x1DCC6B0", VA = "0x181DCE0B0")]
	public GizmoComponent Raycast(Vector3 normalizedPosition)
	{
		return default(GizmoComponent);
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x1DCDFA0", Offset = "0x1DCC5A0", VA = "0x181DCDFA0")]
	public void OnPointerHover(Vector3 normalizedPosition)
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x1DCE3B0", Offset = "0x1DCC9B0", VA = "0x181DCE3B0")]
	private void SetHiddenComponent(GizmoComponent component)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x1DCE2D0", Offset = "0x1DCC8D0", VA = "0x181DCE2D0")]
	private void SetAlphaOf(GizmoComponent component, float alpha)
	{
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x1DCE5B0", Offset = "0x1DCCBB0", VA = "0x181DCE5B0")]
	private void SetMaterialOf(GizmoComponent component, Material material)
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x1DCD740", Offset = "0x1DCBD40", VA = "0x181DCD740")]
	private GizmoComponent GetOppositeComponent(GizmoComponent component)
	{
		return default(GizmoComponent);
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x1DCE660", Offset = "0x1DCCC60", VA = "0x181DCE660")]
	public SceneGizmoController()
	{
	}
}
