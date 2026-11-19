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
		[Address(RVA = "0x673D8E0", Offset = "0x673C8E0", VA = "0x673D8E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003EE")]
		[Address(RVA = "0x673D8F0", Offset = "0x673C8F0", VA = "0x673D8F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F3")]
	public TMP_SpriteAsset spriteAsset
	{
		[Token(Token = "0x60003EF")]
		[Address(RVA = "0x673D900", Offset = "0x673C900", VA = "0x673D900")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003F0")]
		[Address(RVA = "0x673D910", Offset = "0x673C910", VA = "0x673D910")]
		set
		{
		}
	}

	[Token(Token = "0x170000F4")]
	public Material material
	{
		[Token(Token = "0x60003F1")]
		[Address(RVA = "0x673D920", Offset = "0x673C920", VA = "0x673D920")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003F2")]
		[Address(RVA = "0x673DAC0", Offset = "0x673CAC0", VA = "0x673DAC0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F5")]
	public Material sharedMaterial
	{
		[Token(Token = "0x60003F3")]
		[Address(RVA = "0x673DC20", Offset = "0x673CC20", VA = "0x673DC20")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003F4")]
		[Address(RVA = "0x673DC30", Offset = "0x673CC30", VA = "0x673DC30")]
		set
		{
		}
	}

	[Token(Token = "0x170000F6")]
	public Material fallbackMaterial
	{
		[Token(Token = "0x60003F5")]
		[Address(RVA = "0x673DCC0", Offset = "0x673CCC0", VA = "0x673DCC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003F6")]
		[Address(RVA = "0x673DCD0", Offset = "0x673CCD0", VA = "0x673DCD0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F7")]
	public Material fallbackSourceMaterial
	{
		[Token(Token = "0x60003F7")]
		[Address(RVA = "0x673DE00", Offset = "0x673CE00", VA = "0x673DE00")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003F8")]
		[Address(RVA = "0x673DE10", Offset = "0x673CE10", VA = "0x673DE10")]
		set
		{
		}
	}

	[Token(Token = "0x170000F8")]
	public bool isDefaultMaterial
	{
		[Token(Token = "0x60003F9")]
		[Address(RVA = "0x673DE20", Offset = "0x673CE20", VA = "0x673DE20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x673DE30", Offset = "0x673CE30", VA = "0x673DE30")]
		set
		{
		}
	}

	[Token(Token = "0x170000F9")]
	public float padding
	{
		[Token(Token = "0x60003FB")]
		[Address(RVA = "0x673DE40", Offset = "0x673CE40", VA = "0x673DE40")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003FC")]
		[Address(RVA = "0x673DE50", Offset = "0x673CE50", VA = "0x673DE50")]
		set
		{
		}
	}

	[Token(Token = "0x170000FA")]
	public Renderer renderer
	{
		[Token(Token = "0x60003FD")]
		[Address(RVA = "0x673DE60", Offset = "0x673CE60", VA = "0x673DE60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FB")]
	public MeshFilter meshFilter
	{
		[Token(Token = "0x60003FE")]
		[Address(RVA = "0x673DEF0", Offset = "0x673CEF0", VA = "0x673DEF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FC")]
	public Mesh mesh
	{
		[Token(Token = "0x60003FF")]
		[Address(RVA = "0x673E010", Offset = "0x673D010", VA = "0x673E010")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000400")]
		[Address(RVA = "0x673E0C0", Offset = "0x673D0C0", VA = "0x673E0C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FD")]
	public TMP_Text textComponent
	{
		[Token(Token = "0x6000401")]
		[Address(RVA = "0x673E0D0", Offset = "0x673D0D0", VA = "0x673E0D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x673E160", Offset = "0x673D160", VA = "0x673E160")]
	public static TMP_SubMesh AddSubTextObject(TextMeshPro textComponent, MaterialReference materialReference)
	{
		return null;
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x673E4A0", Offset = "0x673D4A0", VA = "0x673E4A0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x673E5B0", Offset = "0x673D5B0", VA = "0x673E5B0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x673E670", Offset = "0x673D670", VA = "0x673E670")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x673E7D0", Offset = "0x673D7D0", VA = "0x673E7D0")]
	public void DestroySelf()
	{
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x673D930", Offset = "0x673C930", VA = "0x673D930")]
	private Material GetMaterial(Material mat)
	{
		return null;
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x673E830", Offset = "0x673D830", VA = "0x673E830")]
	private Material CreateMaterialInstance(Material source)
	{
		return null;
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x673E8E0", Offset = "0x673D8E0", VA = "0x673E8E0")]
	private Material GetSharedMaterial()
	{
		return null;
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x673DC40", Offset = "0x673CC40", VA = "0x673DC40")]
	private void SetSharedMaterial(Material mat)
	{
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x673DB90", Offset = "0x673CB90", VA = "0x673DB90")]
	public float GetPaddingForMaterial()
	{
		return default(float);
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x673E980", Offset = "0x673D980", VA = "0x673E980")]
	public void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold)
	{
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x673DC00", Offset = "0x673CC00", VA = "0x673DC00")]
	public void SetVerticesDirty()
	{
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x673DC10", Offset = "0x673CC10", VA = "0x673DC10")]
	public void SetMaterialDirty()
	{
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x673E9E0", Offset = "0x673D9E0", VA = "0x673E9E0")]
	protected void UpdateMaterial()
	{
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x673EBC0", Offset = "0x673DBC0", VA = "0x673EBC0")]
	public TMP_SubMesh()
	{
	}
}
