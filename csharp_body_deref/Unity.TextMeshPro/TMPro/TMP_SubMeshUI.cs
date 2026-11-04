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

[Token(Token = "0x200007B")]
[ExecuteAlways]
[RequireComponent(typeof(CanvasRenderer))]
[TMPro.TMPHelpURL("index")]
public class TMP_SubMeshUI : MaskableGraphic
{
	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0xE0")]
	[SerializeField]
	private TMP_FontAsset m_fontAsset;

	[Token(Token = "0x40003BA")]
	[FieldOffset(Offset = "0xE8")]
	[SerializeField]
	private TMP_SpriteAsset m_spriteAsset;

	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0xF0")]
	[SerializeField]
	private Material m_material;

	[Token(Token = "0x40003BC")]
	[FieldOffset(Offset = "0xF8")]
	[SerializeField]
	private Material m_sharedMaterial;

	[Token(Token = "0x40003BD")]
	[FieldOffset(Offset = "0x100")]
	private Material m_fallbackMaterial;

	[Token(Token = "0x40003BE")]
	[FieldOffset(Offset = "0x108")]
	private Material m_fallbackSourceMaterial;

	[Token(Token = "0x40003BF")]
	[FieldOffset(Offset = "0x110")]
	[SerializeField]
	private bool m_isDefaultMaterial;

	[Token(Token = "0x40003C0")]
	[FieldOffset(Offset = "0x114")]
	[SerializeField]
	private float m_padding;

	[Token(Token = "0x40003C1")]
	[FieldOffset(Offset = "0x118")]
	private Mesh m_mesh;

	[Token(Token = "0x40003C2")]
	[FieldOffset(Offset = "0x120")]
	[SerializeField]
	private TextMeshProUGUI m_TextComponent;

	[NonSerialized]
	[Token(Token = "0x40003C3")]
	[FieldOffset(Offset = "0x128")]
	private bool m_isRegisteredForEvents;

	[Token(Token = "0x40003C4")]
	[FieldOffset(Offset = "0x129")]
	private bool m_materialDirty;

	[Token(Token = "0x40003C5")]
	[FieldOffset(Offset = "0x12C")]
	[SerializeField]
	private int m_materialReferenceIndex;

	[Token(Token = "0x40003C6")]
	[FieldOffset(Offset = "0x130")]
	private Transform m_RootCanvasTransform;

	[Token(Token = "0x170000FE")]
	public TMP_FontAsset fontAsset
	{
		[Token(Token = "0x6000411")]
		[Address(RVA = "0x187BC50", Offset = "0x187A250", VA = "0x18187BC50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000412")]
		[Address(RVA = "0x1BD5200", Offset = "0x1BD3800", VA = "0x181BD5200")]
		set
		{
		}
	}

	[Token(Token = "0x170000FF")]
	public TMP_SpriteAsset spriteAsset
	{
		[Token(Token = "0x6000413")]
		[Address(RVA = "0x187BC30", Offset = "0x187A230", VA = "0x18187BC30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000414")]
		[Address(RVA = "0x1BD53E0", Offset = "0x1BD39E0", VA = "0x181BD53E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000100")]
	public override Texture mainTexture
	{
		[Token(Token = "0x6000415")]
		[Address(RVA = "0x2D443F0", Offset = "0x2D429F0", VA = "0x182D443F0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000101")]
	public override Material material
	{
		[Token(Token = "0x6000416")]
		[Address(RVA = "0x2D44510", Offset = "0x2D42B10", VA = "0x182D44510", Slot = "32")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000417")]
		[Address(RVA = "0x2D449E0", Offset = "0x2D42FE0", VA = "0x182D449E0", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x17000102")]
	public Material sharedMaterial
	{
		[Token(Token = "0x6000418")]
		[Address(RVA = "0x1BD4F90", Offset = "0x1BD3590", VA = "0x181BD4F90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000419")]
		[Address(RVA = "0x2D44110", Offset = "0x2D42710", VA = "0x182D44110")]
		set
		{
		}
	}

	[Token(Token = "0x17000103")]
	public Material fallbackMaterial
	{
		[Token(Token = "0x600041A")]
		[Address(RVA = "0x187BC70", Offset = "0x187A270", VA = "0x18187BC70")]
		get
		{
			return null;
		}
		[Token(Token = "0x600041B")]
		[Address(RVA = "0x2D44850", Offset = "0x2D42E50", VA = "0x182D44850")]
		set
		{
		}
	}

	[Token(Token = "0x17000104")]
	public Material fallbackSourceMaterial
	{
		[Token(Token = "0x600041C")]
		[Address(RVA = "0x1BD4C80", Offset = "0x1BD3280", VA = "0x181BD4C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600041D")]
		[Address(RVA = "0x1BD5400", Offset = "0x1BD3A00", VA = "0x181BD5400")]
		set
		{
		}
	}

	[Token(Token = "0x17000105")]
	public override Material materialForRendering
	{
		[Token(Token = "0x600041E")]
		[Address(RVA = "0x2D444B0", Offset = "0x2D42AB0", VA = "0x182D444B0", Slot = "34")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000106")]
	public bool isDefaultMaterial
	{
		[Token(Token = "0x600041F")]
		[Address(RVA = "0x1C3F920", Offset = "0x1C3DF20", VA = "0x181C3F920")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000420")]
		[Address(RVA = "0x1C3FA40", Offset = "0x1C3E040", VA = "0x181C3FA40")]
		set
		{
		}
	}

	[Token(Token = "0x17000107")]
	public float padding
	{
		[Token(Token = "0x6000421")]
		[Address(RVA = "0x2D447A0", Offset = "0x2D42DA0", VA = "0x182D447A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000422")]
		[Address(RVA = "0x2D44AF0", Offset = "0x2D430F0", VA = "0x182D44AF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000108")]
	public Mesh mesh
	{
		[Token(Token = "0x6000423")]
		[Address(RVA = "0x2D446D0", Offset = "0x2D42CD0", VA = "0x182D446D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000424")]
		[Address(RVA = "0x1C61340", Offset = "0x1C5F940", VA = "0x181C61340")]
		set
		{
		}
	}

	[Token(Token = "0x17000109")]
	public TMP_Text textComponent
	{
		[Token(Token = "0x6000425")]
		[Address(RVA = "0x2D447B0", Offset = "0x2D42DB0", VA = "0x182D447B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x2D432E0", Offset = "0x2D418E0", VA = "0x182D432E0")]
	public static TMP_SubMeshUI AddSubTextObject(TextMeshProUGUI textComponent, MaterialReference materialReference)
	{
		return null;
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x2D43F20", Offset = "0x2D42520", VA = "0x182D43F20", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x2D43E60", Offset = "0x2D42460", VA = "0x182D43E60", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x2D43C80", Offset = "0x2D42280", VA = "0x182D43C80", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x2D43F90", Offset = "0x2D42590", VA = "0x182D43F90", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x2D43910", Offset = "0x2D41F10", VA = "0x182D43910", Slot = "58")]
	public override Material GetModifiedMaterial(Material baseMaterial)
	{
		return null;
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x2D43B00", Offset = "0x2D42100", VA = "0x182D43B00")]
	public float GetPaddingForMaterial()
	{
		return default(float);
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x2D43A70", Offset = "0x2D42070", VA = "0x182D43A70")]
	public float GetPaddingForMaterial(Material mat)
	{
		return default(float);
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x2D44380", Offset = "0x2D42980", VA = "0x182D44380")]
	public void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold)
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "26")]
	public override void SetAllDirty()
	{
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "28")]
	public override void SetVerticesDirty()
	{
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "27")]
	public override void SetLayoutDirty()
	{
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x2D44040", Offset = "0x2D42640", VA = "0x182D44040", Slot = "29")]
	public override void SetMaterialDirty()
	{
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x2D44090", Offset = "0x2D42690", VA = "0x182D44090")]
	public void SetPivotDirty()
	{
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x2D43B90", Offset = "0x2D42190", VA = "0x182D43B90")]
	private Transform GetRootCanvasTransform()
	{
		return null;
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "59")]
	public override void Cull(Rect clipRect, bool validRect)
	{
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "41")]
	protected override void UpdateGeometry()
	{
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x2D43FF0", Offset = "0x2D425F0", VA = "0x182D43FF0", Slot = "37")]
	public override void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x1AC67A0", Offset = "0x1AC4DA0", VA = "0x181AC67A0")]
	public void RefreshMaterial()
	{
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x2D44170", Offset = "0x2D42770", VA = "0x182D44170", Slot = "40")]
	protected override void UpdateMaterial()
	{
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x2D44030", Offset = "0x2D42630", VA = "0x182D44030", Slot = "63")]
	public override void RecalculateClipping()
	{
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x1BD4F90", Offset = "0x1BD3590", VA = "0x181BD4F90")]
	private Material GetMaterial()
	{
		return null;
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x2D43760", Offset = "0x2D41D60", VA = "0x182D43760")]
	private Material GetMaterial(Material mat)
	{
		return null;
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x2D436A0", Offset = "0x2D41CA0", VA = "0x182D436A0")]
	private Material CreateMaterialInstance(Material source)
	{
		return null;
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x2D43C50", Offset = "0x2D42250", VA = "0x182D43C50")]
	private Material GetSharedMaterial()
	{
		return null;
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x2D44110", Offset = "0x2D42710", VA = "0x182D44110")]
	private void SetSharedMaterial(Material mat)
	{
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x23BE660", Offset = "0x23BCC60", VA = "0x1823BE660")]
	public TMP_SubMeshUI()
	{
	}
}
