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

[Token(Token = "0x2000085")]
[RequireComponent(typeof(MeshRenderer))]
[ExecuteAlways]
public class TMP_SubMesh : MonoBehaviour
{
	[Token(Token = "0x4000441")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private TMP_FontAsset m_fontAsset;

	[Token(Token = "0x4000442")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private TMP_SpriteAsset m_spriteAsset;

	[Token(Token = "0x4000443")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private Material m_material;

	[Token(Token = "0x4000444")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private Material m_sharedMaterial;

	[Token(Token = "0x4000445")]
	[FieldOffset(Offset = "0x40")]
	private Material m_fallbackMaterial;

	[Token(Token = "0x4000446")]
	[FieldOffset(Offset = "0x48")]
	private Material m_fallbackSourceMaterial;

	[Token(Token = "0x4000447")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private bool m_isDefaultMaterial;

	[Token(Token = "0x4000448")]
	[FieldOffset(Offset = "0x54")]
	[SerializeField]
	private float m_padding;

	[Token(Token = "0x4000449")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private Renderer m_renderer;

	[Token(Token = "0x400044A")]
	[FieldOffset(Offset = "0x60")]
	private MeshFilter m_meshFilter;

	[Token(Token = "0x400044B")]
	[FieldOffset(Offset = "0x68")]
	private Mesh m_mesh;

	[Token(Token = "0x400044C")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private TextMeshPro m_TextComponent;

	[NonSerialized]
	[Token(Token = "0x400044D")]
	[FieldOffset(Offset = "0x78")]
	private bool m_isRegisteredForEvents;

	[Token(Token = "0x170000F1")]
	public TMP_FontAsset fontAsset
	{
		[Token(Token = "0x600044E")]
		[Address(RVA = "0x4C91440", Offset = "0x4C91440", VA = "0x4C91440")]
		get
		{
			return null;
		}
		[Token(Token = "0x600044F")]
		[Address(RVA = "0x4C91450", Offset = "0x4C91450", VA = "0x4C91450")]
		set
		{
		}
	}

	[Token(Token = "0x170000F2")]
	public TMP_SpriteAsset spriteAsset
	{
		[Token(Token = "0x6000450")]
		[Address(RVA = "0x4C91460", Offset = "0x4C91460", VA = "0x4C91460")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000451")]
		[Address(RVA = "0x4C91470", Offset = "0x4C91470", VA = "0x4C91470")]
		set
		{
		}
	}

	[Token(Token = "0x170000F3")]
	public Material material
	{
		[Token(Token = "0x6000452")]
		[Address(RVA = "0x4C91480", Offset = "0x4C91480", VA = "0x4C91480")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000453")]
		[Address(RVA = "0x4C91620", Offset = "0x4C91620", VA = "0x4C91620")]
		set
		{
		}
	}

	[Token(Token = "0x170000F4")]
	public Material sharedMaterial
	{
		[Token(Token = "0x6000454")]
		[Address(RVA = "0x4C91830", Offset = "0x4C91830", VA = "0x4C91830")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000455")]
		[Address(RVA = "0x4C91840", Offset = "0x4C91840", VA = "0x4C91840")]
		set
		{
		}
	}

	[Token(Token = "0x170000F5")]
	public Material fallbackMaterial
	{
		[Token(Token = "0x6000456")]
		[Address(RVA = "0x4C918D0", Offset = "0x4C918D0", VA = "0x4C918D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000457")]
		[Address(RVA = "0x4C918E0", Offset = "0x4C918E0", VA = "0x4C918E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F6")]
	public Material fallbackSourceMaterial
	{
		[Token(Token = "0x6000458")]
		[Address(RVA = "0x4C91A10", Offset = "0x4C91A10", VA = "0x4C91A10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000459")]
		[Address(RVA = "0x4C91A20", Offset = "0x4C91A20", VA = "0x4C91A20")]
		set
		{
		}
	}

	[Token(Token = "0x170000F7")]
	public bool isDefaultMaterial
	{
		[Token(Token = "0x600045A")]
		[Address(RVA = "0x4C91A30", Offset = "0x4C91A30", VA = "0x4C91A30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600045B")]
		[Address(RVA = "0x4C91A40", Offset = "0x4C91A40", VA = "0x4C91A40")]
		set
		{
		}
	}

	[Token(Token = "0x170000F8")]
	public float padding
	{
		[Token(Token = "0x600045C")]
		[Address(RVA = "0x4C91A50", Offset = "0x4C91A50", VA = "0x4C91A50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600045D")]
		[Address(RVA = "0x4C91A60", Offset = "0x4C91A60", VA = "0x4C91A60")]
		set
		{
		}
	}

	[Token(Token = "0x170000F9")]
	public Renderer renderer
	{
		[Token(Token = "0x600045E")]
		[Address(RVA = "0x4C91A70", Offset = "0x4C91A70", VA = "0x4C91A70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FA")]
	public MeshFilter meshFilter
	{
		[Token(Token = "0x600045F")]
		[Address(RVA = "0x4C91B00", Offset = "0x4C91B00", VA = "0x4C91B00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FB")]
	public Mesh mesh
	{
		[Token(Token = "0x6000460")]
		[Address(RVA = "0x4C91C20", Offset = "0x4C91C20", VA = "0x4C91C20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000461")]
		[Address(RVA = "0x4C91CD0", Offset = "0x4C91CD0", VA = "0x4C91CD0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FC")]
	public TMP_Text textComponent
	{
		[Token(Token = "0x6000462")]
		[Address(RVA = "0x4C91CE0", Offset = "0x4C91CE0", VA = "0x4C91CE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x4C91D70", Offset = "0x4C91D70", VA = "0x4C91D70")]
	public static TMP_SubMesh AddSubTextObject(TextMeshPro textComponent, MaterialReference materialReference)
	{
		return null;
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x4C92150", Offset = "0x4C92150", VA = "0x4C92150")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x4C92260", Offset = "0x4C92260", VA = "0x4C92260")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x4C92320", Offset = "0x4C92320", VA = "0x4C92320")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x4C92480", Offset = "0x4C92480", VA = "0x4C92480")]
	public void DestroySelf()
	{
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x4C91490", Offset = "0x4C91490", VA = "0x4C91490")]
	private Material GetMaterial(Material mat)
	{
		return null;
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x4C924E0", Offset = "0x4C924E0", VA = "0x4C924E0")]
	private Material CreateMaterialInstance(Material source)
	{
		return null;
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x4C92590", Offset = "0x4C92590", VA = "0x4C92590")]
	private Material GetSharedMaterial()
	{
		return null;
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x4C91850", Offset = "0x4C91850", VA = "0x4C91850")]
	private void SetSharedMaterial(Material mat)
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x4C91700", Offset = "0x4C91700", VA = "0x4C91700")]
	public float GetPaddingForMaterial()
	{
		return default(float);
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x4C92630", Offset = "0x4C92630", VA = "0x4C92630")]
	public void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold)
	{
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x4C91770", Offset = "0x4C91770", VA = "0x4C91770")]
	public void SetVerticesDirty()
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x4C91820", Offset = "0x4C91820", VA = "0x4C91820")]
	public void SetMaterialDirty()
	{
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x4C92690", Offset = "0x4C92690", VA = "0x4C92690")]
	protected void UpdateMaterial()
	{
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x4C92810", Offset = "0x4C92810", VA = "0x4C92810")]
	public TMP_SubMesh()
	{
	}
}
