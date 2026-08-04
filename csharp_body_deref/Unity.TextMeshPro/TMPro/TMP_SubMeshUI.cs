// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_SubMeshUI
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace TMPro;

[Token(Token = "0x2000086")]
[ExecuteAlways]
[RequireComponent(typeof(CanvasRenderer))]
public class TMP_SubMeshUI : MaskableGraphic
{
	[Token(Token = "0x400044E")]
	[FieldOffset(Offset = "0xD8")]
	[SerializeField]
	private TMP_FontAsset m_fontAsset;

	[Token(Token = "0x400044F")]
	[FieldOffset(Offset = "0xE0")]
	[SerializeField]
	private TMP_SpriteAsset m_spriteAsset;

	[Token(Token = "0x4000450")]
	[FieldOffset(Offset = "0xE8")]
	[SerializeField]
	private Material m_material;

	[Token(Token = "0x4000451")]
	[FieldOffset(Offset = "0xF0")]
	[SerializeField]
	private Material m_sharedMaterial;

	[Token(Token = "0x4000452")]
	[FieldOffset(Offset = "0xF8")]
	private Material m_fallbackMaterial;

	[Token(Token = "0x4000453")]
	[FieldOffset(Offset = "0x100")]
	private Material m_fallbackSourceMaterial;

	[Token(Token = "0x4000454")]
	[FieldOffset(Offset = "0x108")]
	[SerializeField]
	private bool m_isDefaultMaterial;

	[Token(Token = "0x4000455")]
	[FieldOffset(Offset = "0x10C")]
	[SerializeField]
	private float m_padding;

	[Token(Token = "0x4000456")]
	[FieldOffset(Offset = "0x110")]
	private Mesh m_mesh;

	[Token(Token = "0x4000457")]
	[FieldOffset(Offset = "0x118")]
	[SerializeField]
	private TextMeshProUGUI m_TextComponent;

	[NonSerialized]
	[Token(Token = "0x4000458")]
	[FieldOffset(Offset = "0x120")]
	private bool m_isRegisteredForEvents;

	[Token(Token = "0x4000459")]
	[FieldOffset(Offset = "0x121")]
	private bool m_materialDirty;

	[Token(Token = "0x400045A")]
	[FieldOffset(Offset = "0x124")]
	[SerializeField]
	private int m_materialReferenceIndex;

	[Token(Token = "0x400045B")]
	[FieldOffset(Offset = "0x128")]
	private Transform m_RootCanvasTransform;

	[Token(Token = "0x170000FD")]
	public TMP_FontAsset fontAsset
	{
		[Token(Token = "0x6000472")]
		[Address(RVA = "0x4C92820", Offset = "0x4C92820", VA = "0x4C92820")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000473")]
		[Address(RVA = "0x4C92830", Offset = "0x4C92830", VA = "0x4C92830")]
		set
		{
		}
	}

	[Token(Token = "0x170000FE")]
	public TMP_SpriteAsset spriteAsset
	{
		[Token(Token = "0x6000474")]
		[Address(RVA = "0x4C92850", Offset = "0x4C92850", VA = "0x4C92850")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000475")]
		[Address(RVA = "0x4C92860", Offset = "0x4C92860", VA = "0x4C92860")]
		set
		{
		}
	}

	[Token(Token = "0x170000FF")]
	public override Texture mainTexture
	{
		[Token(Token = "0x6000476")]
		[Address(RVA = "0x4C92880", Offset = "0x4C92880", VA = "0x4C92880", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000100")]
	public override Material material
	{
		[Token(Token = "0x6000477")]
		[Address(RVA = "0x4C92930", Offset = "0x4C92930", VA = "0x4C92930", Slot = "32")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000478")]
		[Address(RVA = "0x4C92AA0", Offset = "0x4C92AA0", VA = "0x4C92AA0", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x17000101")]
	public Material sharedMaterial
	{
		[Token(Token = "0x6000479")]
		[Address(RVA = "0x4C92C70", Offset = "0x4C92C70", VA = "0x4C92C70")]
		get
		{
			return null;
		}
		[Token(Token = "0x600047A")]
		[Address(RVA = "0x4C92C80", Offset = "0x4C92C80", VA = "0x4C92C80")]
		set
		{
		}
	}

	[Token(Token = "0x17000102")]
	public Material fallbackMaterial
	{
		[Token(Token = "0x600047B")]
		[Address(RVA = "0x4C92D50", Offset = "0x4C92D50", VA = "0x4C92D50")]
		get
		{
			return null;
		}
		[Token(Token = "0x600047C")]
		[Address(RVA = "0x4C92D60", Offset = "0x4C92D60", VA = "0x4C92D60")]
		set
		{
		}
	}

	[Token(Token = "0x17000103")]
	public Material fallbackSourceMaterial
	{
		[Token(Token = "0x600047D")]
		[Address(RVA = "0x4C92E90", Offset = "0x4C92E90", VA = "0x4C92E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x600047E")]
		[Address(RVA = "0x4C92EA0", Offset = "0x4C92EA0", VA = "0x4C92EA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000104")]
	public override Material materialForRendering
	{
		[Token(Token = "0x600047F")]
		[Address(RVA = "0x4C92EC0", Offset = "0x4C92EC0", VA = "0x4C92EC0", Slot = "34")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000105")]
	public bool isDefaultMaterial
	{
		[Token(Token = "0x6000480")]
		[Address(RVA = "0x4C92F20", Offset = "0x4C92F20", VA = "0x4C92F20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000481")]
		[Address(RVA = "0x4C92F30", Offset = "0x4C92F30", VA = "0x4C92F30")]
		set
		{
		}
	}

	[Token(Token = "0x17000106")]
	public float padding
	{
		[Token(Token = "0x6000482")]
		[Address(RVA = "0x4C92F40", Offset = "0x4C92F40", VA = "0x4C92F40")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000483")]
		[Address(RVA = "0x4C92F50", Offset = "0x4C92F50", VA = "0x4C92F50")]
		set
		{
		}
	}

	[Token(Token = "0x17000107")]
	public Mesh mesh
	{
		[Token(Token = "0x6000484")]
		[Address(RVA = "0x4C92F60", Offset = "0x4C92F60", VA = "0x4C92F60")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000485")]
		[Address(RVA = "0x4C93020", Offset = "0x4C93020", VA = "0x4C93020")]
		set
		{
		}
	}

	[Token(Token = "0x17000108")]
	public TMP_Text textComponent
	{
		[Token(Token = "0x6000486")]
		[Address(RVA = "0x4C93040", Offset = "0x4C93040", VA = "0x4C93040")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x4C930E0", Offset = "0x4C930E0", VA = "0x4C930E0")]
	public static TMP_SubMeshUI AddSubTextObject(TextMeshProUGUI textComponent, MaterialReference materialReference)
	{
		return null;
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x4C934C0", Offset = "0x4C934C0", VA = "0x4C934C0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x4C93530", Offset = "0x4C93530", VA = "0x4C93530", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x4C935F0", Offset = "0x4C935F0", VA = "0x4C935F0", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x4C937D0", Offset = "0x4C937D0", VA = "0x4C937D0", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x4C93820", Offset = "0x4C93820", VA = "0x4C93820", Slot = "58")]
	public override Material GetModifiedMaterial(Material baseMaterial)
	{
		return null;
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x4C92C00", Offset = "0x4C92C00", VA = "0x4C92C00")]
	public float GetPaddingForMaterial()
	{
		return default(float);
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x4C93940", Offset = "0x4C93940", VA = "0x4C93940")]
	public float GetPaddingForMaterial(Material mat)
	{
		return default(float);
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x4C939B0", Offset = "0x4C939B0", VA = "0x4C939B0")]
	public void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold)
	{
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x4C93A10", Offset = "0x4C93A10", VA = "0x4C93A10", Slot = "26")]
	public override void SetAllDirty()
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x4C93A20", Offset = "0x4C93A20", VA = "0x4C93A20", Slot = "28")]
	public override void SetVerticesDirty()
	{
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x4C93AE0", Offset = "0x4C93AE0", VA = "0x4C93AE0", Slot = "27")]
	public override void SetLayoutDirty()
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x4C93AF0", Offset = "0x4C93AF0", VA = "0x4C93AF0", Slot = "29")]
	public override void SetMaterialDirty()
	{
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x4C93B30", Offset = "0x4C93B30", VA = "0x4C93B30")]
	public void SetPivotDirty()
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x4C93BA0", Offset = "0x4C93BA0", VA = "0x4C93BA0")]
	private Transform GetRootCanvasTransform()
	{
		return null;
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x4C93C50", Offset = "0x4C93C50", VA = "0x4C93C50", Slot = "59")]
	public override void Cull(Rect clipRect, bool validRect)
	{
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x4C93C60", Offset = "0x4C93C60", VA = "0x4C93C60", Slot = "41")]
	protected override void UpdateGeometry()
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x4C93C70", Offset = "0x4C93C70", VA = "0x4C93C70", Slot = "37")]
	public override void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x4C93CA0", Offset = "0x4C93CA0", VA = "0x4C93CA0")]
	public void RefreshMaterial()
	{
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x4C93CC0", Offset = "0x4C93CC0", VA = "0x4C93CC0", Slot = "40")]
	protected override void UpdateMaterial()
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x4C93E50", Offset = "0x4C93E50", VA = "0x4C93E50", Slot = "63")]
	public override void RecalculateClipping()
	{
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x4C93E60", Offset = "0x4C93E60", VA = "0x4C93E60")]
	private Material GetMaterial()
	{
		return null;
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x4C92940", Offset = "0x4C92940", VA = "0x4C92940")]
	private Material GetMaterial(Material mat)
	{
		return null;
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x4C93E70", Offset = "0x4C93E70", VA = "0x4C93E70")]
	private Material CreateMaterialInstance(Material source)
	{
		return null;
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x4C93F20", Offset = "0x4C93F20", VA = "0x4C93F20")]
	private Material GetSharedMaterial()
	{
		return null;
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x4C92C90", Offset = "0x4C92C90", VA = "0x4C92C90")]
	private void SetSharedMaterial(Material mat)
	{
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x4C93F40", Offset = "0x4C93F40", VA = "0x4C93F40")]
	public TMP_SubMeshUI()
	{
	}
}
