// ==================== AoTTG2 cross-reference ====================
// Type: Outline
// Update status: CHANGED in this game update
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
		[Token(Token = "0x400003F")]
		OutlineAll,
		[Token(Token = "0x4000040")]
		OutlineVisible,
		[Token(Token = "0x4000041")]
		OutlineHidden,
		[Token(Token = "0x4000042")]
		OutlineAndSilhouette,
		[Token(Token = "0x4000043")]
		SilhouetteOnly,
		[Token(Token = "0x4000044")]
		OutlineAndLightenColor
	}

	[Serializable]
	[Token(Token = "0x2000010")]
	private class ListVector3
	{
		[Token(Token = "0x4000045")]
		[FieldOffset(Offset = "0x10")]
		public List<Vector3> data;

		[Token(Token = "0x600005A")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public ListVector3()
		{
		}
	}

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x0")]
	private static HashSet<Mesh> registeredMeshes;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Mode outlineMode;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private Color outlineColor;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	[Range(0f, 10f)]
	private float outlineWidth;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x38")]
	[Header("Optional")]
	[SerializeField]
	[Tooltip("Precompute enabled: Per-vertex calculations are performed in the editor and serialized with the object. Precompute disabled: Per-vertex calculations are performed at runtime in Awake(). This may cause a pause for large meshes.")]
	private bool precomputeOutline;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	[HideInInspector]
	private List<Mesh> bakeKeys;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	[HideInInspector]
	private List<ListVector3> bakeValues;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x50")]
	private HashSet<Renderer> renderers;

	[Token(Token = "0x4000030")]
	private const int QueueBlockStart = 3110;

	[Token(Token = "0x4000031")]
	private const int QueueBlockSize = 4;

	[Token(Token = "0x4000032")]
	private const int QueueBlockCount = 400;

	[Token(Token = "0x4000033")]
	public const int RenderQueueAboveOutlines = 4710;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Stack<int> freeQueueBlocks;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x58")]
	private Material outlineMaskMaterial;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x60")]
	private Material outlineFillMaterial;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x68")]
	private Material outlineFillLightenMaterial;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x70")]
	private Material outlineResetMaterial;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x78")]
	private Material[] outlineMaterials;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x80")]
	private int queueBlock;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x84")]
	private bool ownsQueueBlock;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x85")]
	private bool needsUpdate;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x88")]
	private List<string> _namesToIgnore;

	[Token(Token = "0x17000005")]
	public Mode OutlineMode
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(Mode);
		}
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x1DAB8F0", Offset = "0x1DA9EF0", VA = "0x181DAB8F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public Color OutlineColor
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x1DAB8D0", Offset = "0x1DA9ED0", VA = "0x181DAB8D0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x1DAB8E0", Offset = "0x1DA9EE0", VA = "0x181DAB8E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public float OutlineWidth
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x16EF890", Offset = "0x16EDE90", VA = "0x1816EF890")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x1DAB900", Offset = "0x1DA9F00", VA = "0x181DAB900")]
		set
		{
		}
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x1DA9340", Offset = "0x1DA7940", VA = "0x181DA9340")]
	private static Stack<int> CreateQueueBlocks()
	{
		return null;
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x1DAA300", Offset = "0x1DA8900", VA = "0x181DAA300")]
	public static void ResetQueueBlocks()
	{
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x1DA9430", Offset = "0x1DA7A30", VA = "0x181DA9430")]
	private static void FillQueueBlocks(Stack<int> blocks)
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x1DA8C80", Offset = "0x1DA7280", VA = "0x181DA8C80")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x1DA9240", Offset = "0x1DA7840", VA = "0x181DA9240")]
	private Material CreateOutlineMaterial(string stage, int stageOffset)
	{
		return null;
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x1DAA180", Offset = "0x1DA8780", VA = "0x181DAA180")]
	public void RefreshRenderers(List<string> namesToIgnore)
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x1DA94B0", Offset = "0x1DA7AB0", VA = "0x181DA94B0")]
	private HashSet<Renderer> FindRenderers()
	{
		return null;
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x1DA9E00", Offset = "0x1DA8400", VA = "0x181DA9E00")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x1DA9EA0", Offset = "0x1DA84A0", VA = "0x181DA9EA0")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x1DAB3F0", Offset = "0x1DA99F0", VA = "0x181DAB3F0")]
	private void Update()
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x1DA9D60", Offset = "0x1DA8360", VA = "0x181DA9D60")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x1DA9C50", Offset = "0x1DA8250", VA = "0x181DA9C50")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x1DA8FD0", Offset = "0x1DA75D0", VA = "0x181DA8FD0")]
	private void Bake()
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x1DA9580", Offset = "0x1DA7B80", VA = "0x181DA9580")]
	private void LoadSmoothNormals()
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x1DAA3C0", Offset = "0x1DA89C0", VA = "0x181DAA3C0")]
	private List<Vector3> SmoothNormals(Mesh mesh)
	{
		return null;
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x1DA91B0", Offset = "0x1DA77B0", VA = "0x181DA91B0")]
	private void CombineSubmeshes(Mesh mesh, Material[] materials)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x1DAB210", Offset = "0x1DA9810", VA = "0x181DAB210")]
	private void UpdateMaterialProperties()
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x1DA8B90", Offset = "0x1DA7190", VA = "0x181DA8B90")]
	private void ApplyOutlineState(CompareFunction maskZTest, CompareFunction fillZTest, CompareFunction fillLightenZTest, float width)
	{
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x1DAB770", Offset = "0x1DA9D70", VA = "0x181DAB770")]
	public Outline()
	{
	}
}
