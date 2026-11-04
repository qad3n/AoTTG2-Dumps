// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_SubMesh
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x200007A")]
[RequireComponent(typeof(MeshRenderer))]
[ExecuteAlways]
[TMPro.TMPHelpURL("index")]
public class TMP_SubMesh : MonoBehaviour
{
	[Token(Token = "0x40003AC")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private TMP_FontAsset m_fontAsset;

	[Token(Token = "0x40003AD")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private TMP_SpriteAsset m_spriteAsset;

	[Token(Token = "0x40003AE")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private Material m_material;

	[Token(Token = "0x40003AF")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private Material m_sharedMaterial;

	[Token(Token = "0x40003B0")]
	[FieldOffset(Offset = "0x40")]
	private Material m_fallbackMaterial;

	[Token(Token = "0x40003B1")]
	[FieldOffset(Offset = "0x48")]
	private Material m_fallbackSourceMaterial;

	[Token(Token = "0x40003B2")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private bool m_isDefaultMaterial;

	[Token(Token = "0x40003B3")]
	[FieldOffset(Offset = "0x54")]
	[SerializeField]
	private float m_padding;

	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private Renderer m_renderer;

	[Token(Token = "0x40003B5")]
	[FieldOffset(Offset = "0x60")]
	private MeshFilter m_meshFilter;

	[Token(Token = "0x40003B6")]
	[FieldOffset(Offset = "0x68")]
	private Mesh m_mesh;

	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private TextMeshPro m_TextComponent;

	[NonSerialized]
	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0x78")]
	private bool m_isRegisteredForEvents;

	[Token(Token = "0x170000F2")]
	public TMP_FontAsset fontAsset
	{
		[Token(Token = "0x60003ED")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003EE")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F3")]
	public TMP_SpriteAsset spriteAsset
	{
		[Token(Token = "0x60003EF")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003F0")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F4")]
	public Material material
	{
		[Token(Token = "0x60003F1")]
		[Address(RVA = "0x2D45A00", Offset = "0x2D44000", VA = "0x182D45A00")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003F2")]
		[Address(RVA = "0x2D45E80", Offset = "0x2D44480", VA = "0x182D45E80")]
		set
		{
		}
	}

	[Token(Token = "0x170000F5")]
	public Material sharedMaterial
	{
		[Token(Token = "0x60003F3")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003F4")]
		[Address(RVA = "0x2D45750", Offset = "0x2D43D50", VA = "0x182D45750")]
		set
		{
		}
	}

	[Token(Token = "0x170000F6")]
	public Material fallbackMaterial
	{
		[Token(Token = "0x60003F5")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003F6")]
		[Address(RVA = "0x2D45D20", Offset = "0x2D44320", VA = "0x182D45D20")]
		set
		{
		}
	}

	[Token(Token = "0x170000F7")]
	public Material fallbackSourceMaterial
	{
		[Token(Token = "0x60003F7")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003F8")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		set
		{
		}
	}

	[Token(Token = "0x170000F8")]
	public bool isDefaultMaterial
	{
		[Token(Token = "0x60003F9")]
		[Address(RVA = "0xC7FB40", Offset = "0xC7E140", VA = "0x180C7FB40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x174C1E0", Offset = "0x174A7E0", VA = "0x18174C1E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F9")]
	public float padding
	{
		[Token(Token = "0x60003FB")]
		[Address(RVA = "0x2D45BF0", Offset = "0x2D441F0", VA = "0x182D45BF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003FC")]
		[Address(RVA = "0x2D45F10", Offset = "0x2D44510", VA = "0x182D45F10")]
		set
		{
		}
	}

	[Token(Token = "0x170000FA")]
	public Renderer renderer
	{
		[Token(Token = "0x60003FD")]
		[Address(RVA = "0x2D45C00", Offset = "0x2D44200", VA = "0x182D45C00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FB")]
	public MeshFilter meshFilter
	{
		[Token(Token = "0x60003FE")]
		[Address(RVA = "0x2D45A10", Offset = "0x2D44010", VA = "0x182D45A10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FC")]
	public Mesh mesh
	{
		[Token(Token = "0x60003FF")]
		[Address(RVA = "0x2D45B30", Offset = "0x2D44130", VA = "0x182D45B30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000400")]
		[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790")]
		set
		{
		}
	}

	[Token(Token = "0x170000FD")]
	public TMP_Text textComponent
	{
		[Token(Token = "0x6000401")]
		[Address(RVA = "0x2D45C90", Offset = "0x2D44290", VA = "0x182D45C90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x2D44B00", Offset = "0x2D43100", VA = "0x182D44B00")]
	public static TMP_SubMesh AddSubTextObject(TextMeshPro textComponent, MaterialReference materialReference)
	{
		return null;
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x2D454A0", Offset = "0x2D43AA0", VA = "0x182D454A0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x2D453E0", Offset = "0x2D439E0", VA = "0x182D453E0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x2D45290", Offset = "0x2D43890", VA = "0x182D45290")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x2D44F30", Offset = "0x2D43530", VA = "0x182D44F30")]
	public void DestroySelf()
	{
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x2D44F90", Offset = "0x2D43590", VA = "0x182D44F90")]
	private Material GetMaterial(Material mat)
	{
		return null;
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x2D44E70", Offset = "0x2D43470", VA = "0x182D44E70")]
	private Material CreateMaterialInstance(Material source)
	{
		return null;
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x2D451F0", Offset = "0x2D437F0", VA = "0x182D451F0")]
	private Material GetSharedMaterial()
	{
		return null;
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x2D45750", Offset = "0x2D43D50", VA = "0x182D45750")]
	private void SetSharedMaterial(Material mat)
	{
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x2D45160", Offset = "0x2D43760", VA = "0x182D45160")]
	public float GetPaddingForMaterial()
	{
		return default(float);
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x2D45990", Offset = "0x2D43F90", VA = "0x182D45990")]
	public void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold)
	{
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void SetVerticesDirty()
	{
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x2D45740", Offset = "0x2D43D40", VA = "0x182D45740")]
	public void SetMaterialDirty()
	{
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x2D45790", Offset = "0x2D43D90", VA = "0x182D45790")]
	protected void UpdateMaterial()
	{
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public TMP_SubMesh()
	{
	}
}
