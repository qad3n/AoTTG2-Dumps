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
	[FieldOffset(Offset = "0xD8")]
	[SerializeField]
	private TMP_FontAsset m_fontAsset;

	[Token(Token = "0x40003BA")]
	[FieldOffset(Offset = "0xE0")]
	[SerializeField]
	private TMP_SpriteAsset m_spriteAsset;

	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0xE8")]
	[SerializeField]
	private Material m_material;

	[Token(Token = "0x40003BC")]
	[FieldOffset(Offset = "0xF0")]
	[SerializeField]
	private Material m_sharedMaterial;

	[Token(Token = "0x40003BD")]
	[FieldOffset(Offset = "0xF8")]
	private Material m_fallbackMaterial;

	[Token(Token = "0x40003BE")]
	[FieldOffset(Offset = "0x100")]
	private Material m_fallbackSourceMaterial;

	[Token(Token = "0x40003BF")]
	[FieldOffset(Offset = "0x108")]
	[SerializeField]
	private bool m_isDefaultMaterial;

	[Token(Token = "0x40003C0")]
	[FieldOffset(Offset = "0x10C")]
	[SerializeField]
	private float m_padding;

	[Token(Token = "0x40003C1")]
	[FieldOffset(Offset = "0x110")]
	private Mesh m_mesh;

	[Token(Token = "0x40003C2")]
	[FieldOffset(Offset = "0x118")]
	[SerializeField]
	private TextMeshProUGUI m_TextComponent;

	[NonSerialized]
	[Token(Token = "0x40003C3")]
	[FieldOffset(Offset = "0x120")]
	private bool m_isRegisteredForEvents;

	[Token(Token = "0x40003C4")]
	[FieldOffset(Offset = "0x121")]
	private bool m_materialDirty;

	[Token(Token = "0x40003C5")]
	[FieldOffset(Offset = "0x124")]
	[SerializeField]
	private int m_materialReferenceIndex;

	[Token(Token = "0x40003C6")]
	[FieldOffset(Offset = "0x128")]
	private Transform m_RootCanvasTransform;

	[Token(Token = "0x170000FE")]
	public TMP_FontAsset fontAsset
	{
		[Token(Token = "0x6000411")]
		[Address(RVA = "0x673EBD0", Offset = "0x673DBD0", VA = "0x673EBD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000412")]
		[Address(RVA = "0x673EBE0", Offset = "0x673DBE0", VA = "0x673EBE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FF")]
	public TMP_SpriteAsset spriteAsset
	{
		[Token(Token = "0x6000413")]
		[Address(RVA = "0x673EC00", Offset = "0x673DC00", VA = "0x673EC00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000414")]
		[Address(RVA = "0x673EC10", Offset = "0x673DC10", VA = "0x673EC10")]
		set
		{
		}
	}

	[Token(Token = "0x17000100")]
	public override Texture mainTexture
	{
		[Token(Token = "0x6000415")]
		[Address(RVA = "0x673EC30", Offset = "0x673DC30", VA = "0x673EC30", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000101")]
	public override Material material
	{
		[Token(Token = "0x6000416")]
		[Address(RVA = "0x673ECE0", Offset = "0x673DCE0", VA = "0x673ECE0", Slot = "32")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000417")]
		[Address(RVA = "0x673EE50", Offset = "0x673DE50", VA = "0x673EE50", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x17000102")]
	public Material sharedMaterial
	{
		[Token(Token = "0x6000418")]
		[Address(RVA = "0x673F020", Offset = "0x673E020", VA = "0x673F020")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000419")]
		[Address(RVA = "0x673F030", Offset = "0x673E030", VA = "0x673F030")]
		set
		{
		}
	}

	[Token(Token = "0x17000103")]
	public Material fallbackMaterial
	{
		[Token(Token = "0x600041A")]
		[Address(RVA = "0x673F100", Offset = "0x673E100", VA = "0x673F100")]
		get
		{
			return null;
		}
		[Token(Token = "0x600041B")]
		[Address(RVA = "0x673F110", Offset = "0x673E110", VA = "0x673F110")]
		set
		{
		}
	}

	[Token(Token = "0x17000104")]
	public Material fallbackSourceMaterial
	{
		[Token(Token = "0x600041C")]
		[Address(RVA = "0x673F240", Offset = "0x673E240", VA = "0x673F240")]
		get
		{
			return null;
		}
		[Token(Token = "0x600041D")]
		[Address(RVA = "0x673F250", Offset = "0x673E250", VA = "0x673F250")]
		set
		{
		}
	}

	[Token(Token = "0x17000105")]
	public override Material materialForRendering
	{
		[Token(Token = "0x600041E")]
		[Address(RVA = "0x673F270", Offset = "0x673E270", VA = "0x673F270", Slot = "34")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000106")]
	public bool isDefaultMaterial
	{
		[Token(Token = "0x600041F")]
		[Address(RVA = "0x673F2D0", Offset = "0x673E2D0", VA = "0x673F2D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000420")]
		[Address(RVA = "0x673F2E0", Offset = "0x673E2E0", VA = "0x673F2E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000107")]
	public float padding
	{
		[Token(Token = "0x6000421")]
		[Address(RVA = "0x673F2F0", Offset = "0x673E2F0", VA = "0x673F2F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000422")]
		[Address(RVA = "0x673F300", Offset = "0x673E300", VA = "0x673F300")]
		set
		{
		}
	}

	[Token(Token = "0x17000108")]
	public Mesh mesh
	{
		[Token(Token = "0x6000423")]
		[Address(RVA = "0x673F310", Offset = "0x673E310", VA = "0x673F310")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000424")]
		[Address(RVA = "0x673F3D0", Offset = "0x673E3D0", VA = "0x673F3D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000109")]
	public TMP_Text textComponent
	{
		[Token(Token = "0x6000425")]
		[Address(RVA = "0x673F3F0", Offset = "0x673E3F0", VA = "0x673F3F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x673F490", Offset = "0x673E490", VA = "0x673F490")]
	public static TMP_SubMeshUI AddSubTextObject(TextMeshProUGUI textComponent, MaterialReference materialReference)
	{
		return null;
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x673F800", Offset = "0x673E800", VA = "0x673F800", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x673F870", Offset = "0x673E870", VA = "0x673F870", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x673F930", Offset = "0x673E930", VA = "0x673F930", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x673FB10", Offset = "0x673EB10", VA = "0x673FB10", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x673FB60", Offset = "0x673EB60", VA = "0x673FB60", Slot = "58")]
	public override Material GetModifiedMaterial(Material baseMaterial)
	{
		return null;
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x673EFB0", Offset = "0x673DFB0", VA = "0x673EFB0")]
	public float GetPaddingForMaterial()
	{
		return default(float);
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x673FC80", Offset = "0x673EC80", VA = "0x673FC80")]
	public float GetPaddingForMaterial(Material mat)
	{
		return default(float);
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x673FCF0", Offset = "0x673ECF0", VA = "0x673FCF0")]
	public void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold)
	{
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x673FD50", Offset = "0x673ED50", VA = "0x673FD50", Slot = "26")]
	public override void SetAllDirty()
	{
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x673FD60", Offset = "0x673ED60", VA = "0x673FD60", Slot = "28")]
	public override void SetVerticesDirty()
	{
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x673FD70", Offset = "0x673ED70", VA = "0x673FD70", Slot = "27")]
	public override void SetLayoutDirty()
	{
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x673FD80", Offset = "0x673ED80", VA = "0x673FD80", Slot = "29")]
	public override void SetMaterialDirty()
	{
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x673FDC0", Offset = "0x673EDC0", VA = "0x673FDC0")]
	public void SetPivotDirty()
	{
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x673FE30", Offset = "0x673EE30", VA = "0x673FE30")]
	private Transform GetRootCanvasTransform()
	{
		return null;
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x673FEE0", Offset = "0x673EEE0", VA = "0x673FEE0", Slot = "59")]
	public override void Cull(Rect clipRect, bool validRect)
	{
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x673FEF0", Offset = "0x673EEF0", VA = "0x673FEF0", Slot = "41")]
	protected override void UpdateGeometry()
	{
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x673FF00", Offset = "0x673EF00", VA = "0x673FF00", Slot = "37")]
	public override void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x673FF30", Offset = "0x673EF30", VA = "0x673FF30")]
	public void RefreshMaterial()
	{
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x673FF50", Offset = "0x673EF50", VA = "0x673FF50", Slot = "40")]
	protected override void UpdateMaterial()
	{
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x6740140", Offset = "0x673F140", VA = "0x6740140", Slot = "63")]
	public override void RecalculateClipping()
	{
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x6740150", Offset = "0x673F150", VA = "0x6740150")]
	private Material GetMaterial()
	{
		return null;
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x673ECF0", Offset = "0x673DCF0", VA = "0x673ECF0")]
	private Material GetMaterial(Material mat)
	{
		return null;
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x6740160", Offset = "0x673F160", VA = "0x6740160")]
	private Material CreateMaterialInstance(Material source)
	{
		return null;
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x6740210", Offset = "0x673F210", VA = "0x6740210")]
	private Material GetSharedMaterial()
	{
		return null;
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x673F040", Offset = "0x673E040", VA = "0x673F040")]
	private void SetSharedMaterial(Material mat)
	{
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x6740230", Offset = "0x673F230", VA = "0x6740230")]
	public TMP_SubMeshUI()
	{
	}
}
