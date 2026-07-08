using System;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x200006F")]
[RequireComponent(typeof(MeshRenderer))]
[ExecuteAlways]
public class TMP_SubMesh : MonoBehaviour
{
	[Token(Token = "0x400034D")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private TMP_FontAsset m_fontAsset;

	[Token(Token = "0x400034E")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private TMP_SpriteAsset m_spriteAsset;

	[Token(Token = "0x400034F")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private Material m_material;

	[Token(Token = "0x4000350")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private Material m_sharedMaterial;

	[Token(Token = "0x4000351")]
	[FieldOffset(Offset = "0x40")]
	private Material m_fallbackMaterial;

	[Token(Token = "0x4000352")]
	[FieldOffset(Offset = "0x48")]
	private Material m_fallbackSourceMaterial;

	[Token(Token = "0x4000353")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private bool m_isDefaultMaterial;

	[Token(Token = "0x4000354")]
	[FieldOffset(Offset = "0x54")]
	[SerializeField]
	private float m_padding;

	[Token(Token = "0x4000355")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private Renderer m_renderer;

	[Token(Token = "0x4000356")]
	[FieldOffset(Offset = "0x60")]
	private MeshFilter m_meshFilter;

	[Token(Token = "0x4000357")]
	[FieldOffset(Offset = "0x68")]
	private Mesh m_mesh;

	[Token(Token = "0x4000358")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private TextMeshPro m_TextComponent;

	[NonSerialized]
	[Token(Token = "0x4000359")]
	[FieldOffset(Offset = "0x78")]
	private bool m_isRegisteredForEvents;

	[Token(Token = "0x170000D0")]
	public TMP_FontAsset fontAsset
	{
		[Token(Token = "0x600035D")]
		[Address(RVA = "0x4943EC0", Offset = "0x4943EC0", VA = "0x4943EC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600035E")]
		[Address(RVA = "0x4943ED0", Offset = "0x4943ED0", VA = "0x4943ED0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D1")]
	public TMP_SpriteAsset spriteAsset
	{
		[Token(Token = "0x600035F")]
		[Address(RVA = "0x4943EE0", Offset = "0x4943EE0", VA = "0x4943EE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000360")]
		[Address(RVA = "0x4943EF0", Offset = "0x4943EF0", VA = "0x4943EF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D2")]
	public Material material
	{
		[Token(Token = "0x6000361")]
		[Address(RVA = "0x4943F00", Offset = "0x4943F00", VA = "0x4943F00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000362")]
		[Address(RVA = "0x49440A0", Offset = "0x49440A0", VA = "0x49440A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D3")]
	public Material sharedMaterial
	{
		[Token(Token = "0x6000363")]
		[Address(RVA = "0x49442B0", Offset = "0x49442B0", VA = "0x49442B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000364")]
		[Address(RVA = "0x49442C0", Offset = "0x49442C0", VA = "0x49442C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D4")]
	public Material fallbackMaterial
	{
		[Token(Token = "0x6000365")]
		[Address(RVA = "0x4944350", Offset = "0x4944350", VA = "0x4944350")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000366")]
		[Address(RVA = "0x4944360", Offset = "0x4944360", VA = "0x4944360")]
		set
		{
		}
	}

	[Token(Token = "0x170000D5")]
	public Material fallbackSourceMaterial
	{
		[Token(Token = "0x6000367")]
		[Address(RVA = "0x4944490", Offset = "0x4944490", VA = "0x4944490")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000368")]
		[Address(RVA = "0x49444A0", Offset = "0x49444A0", VA = "0x49444A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D6")]
	public bool isDefaultMaterial
	{
		[Token(Token = "0x6000369")]
		[Address(RVA = "0x49444B0", Offset = "0x49444B0", VA = "0x49444B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600036A")]
		[Address(RVA = "0x49444C0", Offset = "0x49444C0", VA = "0x49444C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D7")]
	public float padding
	{
		[Token(Token = "0x600036B")]
		[Address(RVA = "0x49444D0", Offset = "0x49444D0", VA = "0x49444D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600036C")]
		[Address(RVA = "0x49444E0", Offset = "0x49444E0", VA = "0x49444E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D8")]
	public Renderer renderer
	{
		[Token(Token = "0x600036D")]
		[Address(RVA = "0x49444F0", Offset = "0x49444F0", VA = "0x49444F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D9")]
	public MeshFilter meshFilter
	{
		[Token(Token = "0x600036E")]
		[Address(RVA = "0x4944580", Offset = "0x4944580", VA = "0x4944580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DA")]
	public Mesh mesh
	{
		[Token(Token = "0x600036F")]
		[Address(RVA = "0x49446A0", Offset = "0x49446A0", VA = "0x49446A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000370")]
		[Address(RVA = "0x4944750", Offset = "0x4944750", VA = "0x4944750")]
		set
		{
		}
	}

	[Token(Token = "0x170000DB")]
	public TMP_Text textComponent
	{
		[Token(Token = "0x6000371")]
		[Address(RVA = "0x4944760", Offset = "0x4944760", VA = "0x4944760")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x49447F0", Offset = "0x49447F0", VA = "0x49447F0")]
	public static TMP_SubMesh AddSubTextObject(TextMeshPro textComponent, MaterialReference materialReference)
	{
		return null;
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x4944BD0", Offset = "0x4944BD0", VA = "0x4944BD0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x4944CE0", Offset = "0x4944CE0", VA = "0x4944CE0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000375")]
	[Address(RVA = "0x4944DA0", Offset = "0x4944DA0", VA = "0x4944DA0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000376")]
	[Address(RVA = "0x4944F00", Offset = "0x4944F00", VA = "0x4944F00")]
	public void DestroySelf()
	{
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x4943F10", Offset = "0x4943F10", VA = "0x4943F10")]
	private Material GetMaterial(Material mat)
	{
		return null;
	}

	[Token(Token = "0x6000378")]
	[Address(RVA = "0x4944F60", Offset = "0x4944F60", VA = "0x4944F60")]
	private Material CreateMaterialInstance(Material source)
	{
		return null;
	}

	[Token(Token = "0x6000379")]
	[Address(RVA = "0x4945010", Offset = "0x4945010", VA = "0x4945010")]
	private Material GetSharedMaterial()
	{
		return null;
	}

	[Token(Token = "0x600037A")]
	[Address(RVA = "0x49442D0", Offset = "0x49442D0", VA = "0x49442D0")]
	private void SetSharedMaterial(Material mat)
	{
	}

	[Token(Token = "0x600037B")]
	[Address(RVA = "0x4944180", Offset = "0x4944180", VA = "0x4944180")]
	public float GetPaddingForMaterial()
	{
		return default(float);
	}

	[Token(Token = "0x600037C")]
	[Address(RVA = "0x49450B0", Offset = "0x49450B0", VA = "0x49450B0")]
	public void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold)
	{
	}

	[Token(Token = "0x600037D")]
	[Address(RVA = "0x49441F0", Offset = "0x49441F0", VA = "0x49441F0")]
	public void SetVerticesDirty()
	{
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x49442A0", Offset = "0x49442A0", VA = "0x49442A0")]
	public void SetMaterialDirty()
	{
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x4945110", Offset = "0x4945110", VA = "0x4945110")]
	protected void UpdateMaterial()
	{
	}

	[Token(Token = "0x6000380")]
	[Address(RVA = "0x4945290", Offset = "0x4945290", VA = "0x4945290")]
	public TMP_SubMesh()
	{
	}
}
