using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x200000C")]
[DisallowMultipleComponent]
public class Outline : MonoBehaviour
{
	[Token(Token = "0x200000D")]
	public enum Mode
	{
		[Token(Token = "0x400002F")]
		OutlineAll,
		[Token(Token = "0x4000030")]
		OutlineVisible,
		[Token(Token = "0x4000031")]
		OutlineHidden,
		[Token(Token = "0x4000032")]
		OutlineAndSilhouette,
		[Token(Token = "0x4000033")]
		SilhouetteOnly,
		[Token(Token = "0x4000034")]
		OutlineAndLightenColor
	}

	[Serializable]
	[Token(Token = "0x200000E")]
	private class ListVector3
	{
		[Token(Token = "0x4000035")]
		[FieldOffset(Offset = "0x10")]
		public List<Vector3> data;

		[Token(Token = "0x6000048")]
		[Address(RVA = "0x3C69180", Offset = "0x3C69180", VA = "0x3C69180")]
		public ListVector3()
		{
		}
	}

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x0")]
	private static HashSet<Mesh> registeredMeshes;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Mode outlineMode;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private Color outlineColor;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	[Range(0f, 10f)]
	private float outlineWidth;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x38")]
	[Header("Optional")]
	[SerializeField]
	[Tooltip("Precompute enabled: Per-vertex calculations are performed in the editor and serialized with the object. Precompute disabled: Per-vertex calculations are performed at runtime in Awake(). This may cause a pause for large meshes.")]
	private bool precomputeOutline;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	[HideInInspector]
	private List<Mesh> bakeKeys;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	[HideInInspector]
	private List<ListVector3> bakeValues;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x50")]
	private HashSet<Renderer> renderers;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x58")]
	private Material outlineMaskAndFillMaterial;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x60")]
	private bool needsUpdate;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x68")]
	private List<string> _namesToIgnore;

	[Token(Token = "0x17000003")]
	public Mode OutlineMode
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x3C66FF0", Offset = "0x3C66FF0", VA = "0x3C66FF0")]
		get
		{
			return default(Mode);
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x3C67000", Offset = "0x3C67000", VA = "0x3C67000")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public Color OutlineColor
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x3C67010", Offset = "0x3C67010", VA = "0x3C67010")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x3C67020", Offset = "0x3C67020", VA = "0x3C67020")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public float OutlineWidth
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x3C67030", Offset = "0x3C67030", VA = "0x3C67030")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x3C67040", Offset = "0x3C67040", VA = "0x3C67040")]
		set
		{
		}
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x3C67050", Offset = "0x3C67050", VA = "0x3C67050")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x3C67A30", Offset = "0x3C67A30", VA = "0x3C67A30")]
	public void RefreshRenderers(List<string> namesToIgnore)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x3C67CC0", Offset = "0x3C67CC0", VA = "0x3C67CC0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x3C67D50", Offset = "0x3C67D50", VA = "0x3C67D50")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x3C680B0", Offset = "0x3C680B0", VA = "0x3C680B0")]
	private void Update()
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x3C67C30", Offset = "0x3C67C30", VA = "0x3C67C30")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x3C683A0", Offset = "0x3C683A0", VA = "0x3C683A0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x3C67E30", Offset = "0x3C67E30", VA = "0x3C67E30")]
	private void Bake()
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x3C67180", Offset = "0x3C67180", VA = "0x3C67180")]
	private void LoadSmoothNormals()
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x3C68400", Offset = "0x3C68400", VA = "0x3C68400")]
	private List<Vector3> SmoothNormals(Mesh mesh)
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x3C69190", Offset = "0x3C69190", VA = "0x3C69190")]
	private void CombineSubmeshes(Mesh mesh, Material[] materials)
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x3C680C0", Offset = "0x3C680C0", VA = "0x3C680C0")]
	private void UpdateMaterialProperties()
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x3C69220", Offset = "0x3C69220", VA = "0x3C69220")]
	public Outline()
	{
	}
}
