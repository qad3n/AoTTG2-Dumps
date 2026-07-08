using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace TMPro;

[Token(Token = "0x2000070")]
[ExecuteAlways]
[RequireComponent(typeof(CanvasRenderer))]
public class TMP_SubMeshUI : MaskableGraphic
{
	[Token(Token = "0x400035A")]
	[FieldOffset(Offset = "0xD8")]
	[SerializeField]
	private TMP_FontAsset m_fontAsset;

	[Token(Token = "0x400035B")]
	[FieldOffset(Offset = "0xE0")]
	[SerializeField]
	private TMP_SpriteAsset m_spriteAsset;

	[Token(Token = "0x400035C")]
	[FieldOffset(Offset = "0xE8")]
	[SerializeField]
	private Material m_material;

	[Token(Token = "0x400035D")]
	[FieldOffset(Offset = "0xF0")]
	[SerializeField]
	private Material m_sharedMaterial;

	[Token(Token = "0x400035E")]
	[FieldOffset(Offset = "0xF8")]
	private Material m_fallbackMaterial;

	[Token(Token = "0x400035F")]
	[FieldOffset(Offset = "0x100")]
	private Material m_fallbackSourceMaterial;

	[Token(Token = "0x4000360")]
	[FieldOffset(Offset = "0x108")]
	[SerializeField]
	private bool m_isDefaultMaterial;

	[Token(Token = "0x4000361")]
	[FieldOffset(Offset = "0x10C")]
	[SerializeField]
	private float m_padding;

	[Token(Token = "0x4000362")]
	[FieldOffset(Offset = "0x110")]
	private Mesh m_mesh;

	[Token(Token = "0x4000363")]
	[FieldOffset(Offset = "0x118")]
	[SerializeField]
	private TextMeshProUGUI m_TextComponent;

	[NonSerialized]
	[Token(Token = "0x4000364")]
	[FieldOffset(Offset = "0x120")]
	private bool m_isRegisteredForEvents;

	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0x121")]
	private bool m_materialDirty;

	[Token(Token = "0x4000366")]
	[FieldOffset(Offset = "0x124")]
	[SerializeField]
	private int m_materialReferenceIndex;

	[Token(Token = "0x4000367")]
	[FieldOffset(Offset = "0x128")]
	private Transform m_RootCanvasTransform;

	[Token(Token = "0x170000DC")]
	public TMP_FontAsset fontAsset
	{
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x49452A0", Offset = "0x49452A0", VA = "0x49452A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000382")]
		[Address(RVA = "0x49452B0", Offset = "0x49452B0", VA = "0x49452B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000DD")]
	public TMP_SpriteAsset spriteAsset
	{
		[Token(Token = "0x6000383")]
		[Address(RVA = "0x49452D0", Offset = "0x49452D0", VA = "0x49452D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000384")]
		[Address(RVA = "0x49452E0", Offset = "0x49452E0", VA = "0x49452E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000DE")]
	public override Texture mainTexture
	{
		[Token(Token = "0x6000385")]
		[Address(RVA = "0x4945300", Offset = "0x4945300", VA = "0x4945300", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DF")]
	public override Material material
	{
		[Token(Token = "0x6000386")]
		[Address(RVA = "0x49453B0", Offset = "0x49453B0", VA = "0x49453B0", Slot = "32")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000387")]
		[Address(RVA = "0x4945520", Offset = "0x4945520", VA = "0x4945520", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x170000E0")]
	public Material sharedMaterial
	{
		[Token(Token = "0x6000388")]
		[Address(RVA = "0x49456F0", Offset = "0x49456F0", VA = "0x49456F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000389")]
		[Address(RVA = "0x4945700", Offset = "0x4945700", VA = "0x4945700")]
		set
		{
		}
	}

	[Token(Token = "0x170000E1")]
	public Material fallbackMaterial
	{
		[Token(Token = "0x600038A")]
		[Address(RVA = "0x49457D0", Offset = "0x49457D0", VA = "0x49457D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600038B")]
		[Address(RVA = "0x49457E0", Offset = "0x49457E0", VA = "0x49457E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E2")]
	public Material fallbackSourceMaterial
	{
		[Token(Token = "0x600038C")]
		[Address(RVA = "0x4945910", Offset = "0x4945910", VA = "0x4945910")]
		get
		{
			return null;
		}
		[Token(Token = "0x600038D")]
		[Address(RVA = "0x4945920", Offset = "0x4945920", VA = "0x4945920")]
		set
		{
		}
	}

	[Token(Token = "0x170000E3")]
	public override Material materialForRendering
	{
		[Token(Token = "0x600038E")]
		[Address(RVA = "0x4945940", Offset = "0x4945940", VA = "0x4945940", Slot = "34")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E4")]
	public bool isDefaultMaterial
	{
		[Token(Token = "0x600038F")]
		[Address(RVA = "0x49459A0", Offset = "0x49459A0", VA = "0x49459A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000390")]
		[Address(RVA = "0x49459B0", Offset = "0x49459B0", VA = "0x49459B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E5")]
	public float padding
	{
		[Token(Token = "0x6000391")]
		[Address(RVA = "0x49459C0", Offset = "0x49459C0", VA = "0x49459C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000392")]
		[Address(RVA = "0x49459D0", Offset = "0x49459D0", VA = "0x49459D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E6")]
	public Mesh mesh
	{
		[Token(Token = "0x6000393")]
		[Address(RVA = "0x49459E0", Offset = "0x49459E0", VA = "0x49459E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000394")]
		[Address(RVA = "0x4945AA0", Offset = "0x4945AA0", VA = "0x4945AA0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E7")]
	public TMP_Text textComponent
	{
		[Token(Token = "0x6000395")]
		[Address(RVA = "0x4945AC0", Offset = "0x4945AC0", VA = "0x4945AC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x4945B60", Offset = "0x4945B60", VA = "0x4945B60")]
	public static TMP_SubMeshUI AddSubTextObject(TextMeshProUGUI textComponent, MaterialReference materialReference)
	{
		return null;
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x4945F40", Offset = "0x4945F40", VA = "0x4945F40", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x4945FB0", Offset = "0x4945FB0", VA = "0x4945FB0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x4946070", Offset = "0x4946070", VA = "0x4946070", Slot = "8")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x4946250", Offset = "0x4946250", VA = "0x4946250", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x49462A0", Offset = "0x49462A0", VA = "0x49462A0", Slot = "58")]
	public override Material GetModifiedMaterial(Material baseMaterial)
	{
		return null;
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x4945680", Offset = "0x4945680", VA = "0x4945680")]
	public float GetPaddingForMaterial()
	{
		return default(float);
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x49463C0", Offset = "0x49463C0", VA = "0x49463C0")]
	public float GetPaddingForMaterial(Material mat)
	{
		return default(float);
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x4946430", Offset = "0x4946430", VA = "0x4946430")]
	public void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold)
	{
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x4946490", Offset = "0x4946490", VA = "0x4946490", Slot = "26")]
	public override void SetAllDirty()
	{
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x49464A0", Offset = "0x49464A0", VA = "0x49464A0", Slot = "28")]
	public override void SetVerticesDirty()
	{
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x4946560", Offset = "0x4946560", VA = "0x4946560", Slot = "27")]
	public override void SetLayoutDirty()
	{
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x4946570", Offset = "0x4946570", VA = "0x4946570", Slot = "29")]
	public override void SetMaterialDirty()
	{
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x49465B0", Offset = "0x49465B0", VA = "0x49465B0")]
	public void SetPivotDirty()
	{
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x4946620", Offset = "0x4946620", VA = "0x4946620")]
	private Transform GetRootCanvasTransform()
	{
		return null;
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x49466D0", Offset = "0x49466D0", VA = "0x49466D0", Slot = "59")]
	public override void Cull(Rect clipRect, bool validRect)
	{
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x49466E0", Offset = "0x49466E0", VA = "0x49466E0", Slot = "41")]
	protected override void UpdateGeometry()
	{
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x49466F0", Offset = "0x49466F0", VA = "0x49466F0", Slot = "37")]
	public override void Rebuild(CanvasUpdate update)
	{
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x4946720", Offset = "0x4946720", VA = "0x4946720")]
	public void RefreshMaterial()
	{
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x4946740", Offset = "0x4946740", VA = "0x4946740", Slot = "40")]
	protected override void UpdateMaterial()
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x49468D0", Offset = "0x49468D0", VA = "0x49468D0", Slot = "63")]
	public override void RecalculateClipping()
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x49468E0", Offset = "0x49468E0", VA = "0x49468E0")]
	private Material GetMaterial()
	{
		return null;
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x49453C0", Offset = "0x49453C0", VA = "0x49453C0")]
	private Material GetMaterial(Material mat)
	{
		return null;
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x49468F0", Offset = "0x49468F0", VA = "0x49468F0")]
	private Material CreateMaterialInstance(Material source)
	{
		return null;
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x49469A0", Offset = "0x49469A0", VA = "0x49469A0")]
	private Material GetSharedMaterial()
	{
		return null;
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x4945710", Offset = "0x4945710", VA = "0x4945710")]
	private void SetSharedMaterial(Material mat)
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x49469C0", Offset = "0x49469C0", VA = "0x49469C0")]
	public TMP_SubMeshUI()
	{
	}
}
