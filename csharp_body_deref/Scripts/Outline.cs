// ==================== AoTTG2 cross-reference ====================
// Type: Outline
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Outline.c
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/Outline.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Rendering;

[Token(Token = "0x200000E")]
[DisallowMultipleComponent]
public class Outline : MonoBehaviour
{
	[Token(Token = "0x200000F")]
	public enum Mode
	{
		[Token(Token = "0x4000041")]
		OutlineAll,
		[Token(Token = "0x4000042")]
		OutlineVisible,
		[Token(Token = "0x4000043")]
		OutlineHidden,
		[Token(Token = "0x4000044")]
		OutlineAndSilhouette,
		[Token(Token = "0x4000045")]
		SilhouetteOnly,
		[Token(Token = "0x4000046")]
		OutlineAndLightenColor
	}

	[Serializable]
	[Token(Token = "0x2000010")]
	private class ListVector3
	{
		[Token(Token = "0x4000047")]
		[FieldOffset(Offset = "0x10")]
		public List<Vector3> data;

		[Token(Token = "0x600005E")]
		[Address(RVA = "0x5748470", Offset = "0x5747470", VA = "0x5748470")]
		public ListVector3()
		{
		}
	}

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x0")]
	private static HashSet<Mesh> registeredMeshes;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Mode outlineMode;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private Color outlineColor;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	[Range(0f, 10f)]
	private float outlineWidth;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x38")]
	[Header("Optional")]
	[SerializeField]
	[Tooltip("Precompute enabled: Per-vertex calculations are performed in the editor and serialized with the object. Precompute disabled: Per-vertex calculations are performed at runtime in Awake(). This may cause a pause for large meshes.")]
	private bool precomputeOutline;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	[HideInInspector]
	private List<Mesh> bakeKeys;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	[HideInInspector]
	private List<ListVector3> bakeValues;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x50")]
	private HashSet<Renderer> renderers;

	[Token(Token = "0x4000032")]
	private const int QueueBlockStart = 3110;

	[Token(Token = "0x4000033")]
	private const int QueueBlockSize = 4;

	[Token(Token = "0x4000034")]
	private const int QueueBlockCount = 400;

	[Token(Token = "0x4000035")]
	public const int RenderQueueAboveOutlines = 4710;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Stack<int> freeQueueBlocks;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x58")]
	private Material outlineMaskMaterial;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x60")]
	private Material outlineFillMaterial;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x68")]
	private Material outlineFillLightenMaterial;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x70")]
	private Material outlineResetMaterial;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x78")]
	private Material[] outlineMaterials;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x80")]
	private int queueBlock;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x84")]
	private bool ownsQueueBlock;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x85")]
	private bool needsUpdate;

	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x88")]
	private List<string> _namesToIgnore;

	[Token(Token = "0x17000005")]
	public Mode OutlineMode
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x5746150", Offset = "0x5745150", VA = "0x5746150")]
		get
		{
			return default(Mode);
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x5746160", Offset = "0x5745160", VA = "0x5746160")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public Color OutlineColor
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x5746170", Offset = "0x5745170", VA = "0x5746170")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x5746180", Offset = "0x5745180", VA = "0x5746180")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public float OutlineWidth
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x5746190", Offset = "0x5745190", VA = "0x5746190")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x57461A0", Offset = "0x57451A0", VA = "0x57461A0")]
		set
		{
		}
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x57461B0", Offset = "0x57451B0", VA = "0x57461B0")]
	private static Stack<int> CreateQueueBlocks()
	{
		return null;
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x5746330", Offset = "0x5745330", VA = "0x5746330")]
	public static void ResetQueueBlocks()
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x57462B0", Offset = "0x57452B0", VA = "0x57462B0")]
	private static void FillQueueBlocks(Stack<int> blocks)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x5746420", Offset = "0x5745420", VA = "0x5746420")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x57467F0", Offset = "0x57457F0", VA = "0x57467F0")]
	private Material CreateOutlineMaterial(string stage, int stageOffset)
	{
		return null;
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x5746FB0", Offset = "0x5745FB0", VA = "0x5746FB0")]
	public void RefreshRenderers(List<string> namesToIgnore)
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x5746730", Offset = "0x5745730", VA = "0x5746730")]
	private HashSet<Renderer> FindRenderers()
	{
		return null;
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x57471A0", Offset = "0x57461A0", VA = "0x57471A0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x5747230", Offset = "0x5746230", VA = "0x5747230")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x57475C0", Offset = "0x57465C0", VA = "0x57475C0")]
	private void Update()
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x5747110", Offset = "0x5746110", VA = "0x5747110")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x5747700", Offset = "0x5746700", VA = "0x5747700")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x5747320", Offset = "0x5746320", VA = "0x5747320")]
	private void Bake()
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x5746900", Offset = "0x5745900", VA = "0x5746900")]
	private void LoadSmoothNormals()
	{
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x5747820", Offset = "0x5746820", VA = "0x5747820")]
	private List<Vector3> SmoothNormals(Mesh mesh)
	{
		return null;
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x5748480", Offset = "0x5747480", VA = "0x5748480")]
	private void CombineSubmeshes(Mesh mesh, Material[] materials)
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x57475E0", Offset = "0x57465E0", VA = "0x57475E0")]
	private void UpdateMaterialProperties()
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x5748510", Offset = "0x5747510", VA = "0x5748510")]
	private void ApplyOutlineState(CompareFunction maskZTest, CompareFunction fillZTest, CompareFunction fillLightenZTest, float width)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x5748600", Offset = "0x5747600", VA = "0x5748600")]
	public Outline()
	{
	}
}
