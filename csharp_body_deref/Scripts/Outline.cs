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
		[Address(RVA = "0x3F5EAD0", Offset = "0x3F5EAD0", VA = "0x3F5EAD0")]
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
		[Address(RVA = "0x3F5C940", Offset = "0x3F5C940", VA = "0x3F5C940")]
		get
		{
			return default(Mode);
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x3F5C950", Offset = "0x3F5C950", VA = "0x3F5C950")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public Color OutlineColor
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x3F5C960", Offset = "0x3F5C960", VA = "0x3F5C960")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x3F5C970", Offset = "0x3F5C970", VA = "0x3F5C970")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public float OutlineWidth
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x3F5C980", Offset = "0x3F5C980", VA = "0x3F5C980")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x3F5C990", Offset = "0x3F5C990", VA = "0x3F5C990")]
		set
		{
		}
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x3F5C9A0", Offset = "0x3F5C9A0", VA = "0x3F5C9A0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x3F5D380", Offset = "0x3F5D380", VA = "0x3F5D380")]
	public void RefreshRenderers(List<string> namesToIgnore)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x3F5D610", Offset = "0x3F5D610", VA = "0x3F5D610")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x3F5D6A0", Offset = "0x3F5D6A0", VA = "0x3F5D6A0")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x3F5DA00", Offset = "0x3F5DA00", VA = "0x3F5DA00")]
	private void Update()
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x3F5D580", Offset = "0x3F5D580", VA = "0x3F5D580")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x3F5DCF0", Offset = "0x3F5DCF0", VA = "0x3F5DCF0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x3F5D780", Offset = "0x3F5D780", VA = "0x3F5D780")]
	private void Bake()
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x3F5CAD0", Offset = "0x3F5CAD0", VA = "0x3F5CAD0")]
	private void LoadSmoothNormals()
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x3F5DD50", Offset = "0x3F5DD50", VA = "0x3F5DD50")]
	private List<Vector3> SmoothNormals(Mesh mesh)
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x3F5EAE0", Offset = "0x3F5EAE0", VA = "0x3F5EAE0")]
	private void CombineSubmeshes(Mesh mesh, Material[] materials)
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x3F5DA10", Offset = "0x3F5DA10", VA = "0x3F5DA10")]
	private void UpdateMaterialProperties()
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x3F5EB70", Offset = "0x3F5EB70", VA = "0x3F5EB70")]
	public Outline()
	{
	}
}
