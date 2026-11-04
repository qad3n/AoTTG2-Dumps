// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalProjector
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200007C")]
[ExecuteAlways]
[AddComponentMenu("Rendering/URP Decal Projector")]
public class DecalProjector : MonoBehaviour, ISerializationCallbackReceiver
{
	[Token(Token = "0x200007D")]
	internal delegate void DecalProjectorAction(DecalProjector decalProjector);

	[Token(Token = "0x200007E")]
	private enum Version
	{
		[Token(Token = "0x4000257")]
		Initial,
		[Token(Token = "0x4000258")]
		RenderingLayerMask,
		[Token(Token = "0x4000259")]
		Count
	}

	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private static DecalProjectorAction m_onDecalAdd;

	[Token(Token = "0x4000237")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	private static DecalProjectorAction m_onDecalRemove;

	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	private static DecalProjectorAction m_onDecalPropertyChange;

	[Token(Token = "0x4000239")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private static Action m_onAllDecalPropertyChange;

	[Token(Token = "0x400023A")]
	[FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private static DecalProjectorAction m_onDecalMaterialChange;

	[Token(Token = "0x400023D")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private Material m_Material;

	[Token(Token = "0x400023E")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private float m_DrawDistance;

	[Token(Token = "0x400023F")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	[Range(0f, 1f)]
	private float m_FadeScale;

	[Token(Token = "0x4000240")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	[Range(0f, 180f)]
	private float m_StartAngleFade;

	[Token(Token = "0x4000241")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	[Range(0f, 180f)]
	private float m_EndAngleFade;

	[Token(Token = "0x4000242")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private Vector2 m_UVScale;

	[Token(Token = "0x4000243")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	private Vector2 m_UVBias;

	[Token(Token = "0x4000244")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private RenderingLayerMask m_RenderingLayerMask;

	[Token(Token = "0x4000245")]
	[FieldOffset(Offset = "0x54")]
	[SerializeField]
	private DecalScaleMode m_ScaleMode;

	[Token(Token = "0x4000246")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	internal Vector3 m_Offset;

	[Token(Token = "0x4000247")]
	[FieldOffset(Offset = "0x64")]
	[SerializeField]
	internal Vector3 m_Size;

	[Token(Token = "0x4000248")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	[Range(0f, 1f)]
	private float m_FadeFactor;

	[Token(Token = "0x4000249")]
	[FieldOffset(Offset = "0x78")]
	private Material m_OldMaterial;

	[Token(Token = "0x400024A")]
	[FieldOffset(Offset = "0x80")]
	private float m_OldDrawDistance;

	[Token(Token = "0x400024B")]
	[FieldOffset(Offset = "0x84")]
	private float m_OldFadeScale;

	[Token(Token = "0x400024C")]
	[FieldOffset(Offset = "0x88")]
	private float m_OldStartAngleFade;

	[Token(Token = "0x400024D")]
	[FieldOffset(Offset = "0x8C")]
	private float m_OldEndAngleFade;

	[Token(Token = "0x400024E")]
	[FieldOffset(Offset = "0x90")]
	private Vector2 m_OldUVScale;

	[Token(Token = "0x400024F")]
	[FieldOffset(Offset = "0x98")]
	private Vector2 m_OldUVBias;

	[Token(Token = "0x4000250")]
	[FieldOffset(Offset = "0xA0")]
	private DecalScaleMode m_OldScaleMode;

	[Token(Token = "0x4000251")]
	[FieldOffset(Offset = "0xA4")]
	private Vector3 m_OldOffset;

	[Token(Token = "0x4000252")]
	[FieldOffset(Offset = "0xB0")]
	private Vector3 m_OldSize;

	[Token(Token = "0x4000253")]
	[FieldOffset(Offset = "0xBC")]
	private float m_OldFadeFactor;

	[Token(Token = "0x4000254")]
	[FieldOffset(Offset = "0xC0")]
	[SerializeField]
	private Version version;

	[Token(Token = "0x4000255")]
	[FieldOffset(Offset = "0xC4")]
	[SerializeField]
	[Obsolete("This field is only kept for migration purpose. Use m_RenderingLayersMask instead. #from(6000.2)")]
	private uint m_DecalLayerMask;

	[Token(Token = "0x170000C6")]
	internal static Material defaultMaterial
	{
		[Token(Token = "0x60002D6")]
		[Address(RVA = "0x2C25A50", Offset = "0x2C24050", VA = "0x182C25A50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002D7")]
		[Address(RVA = "0x2C25FD0", Offset = "0x2C245D0", VA = "0x182C25FD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000C7")]
	internal static bool isSupported
	{
		[Token(Token = "0x60002D8")]
		[Address(RVA = "0x2C25B30", Offset = "0x2C24130", VA = "0x182C25B30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C8")]
	internal DecalEntity decalEntity
	{
		[Token(Token = "0x60002D9")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return default(DecalEntity);
		}
		[Token(Token = "0x60002DA")]
		[Address(RVA = "0x1112310", Offset = "0x1110910", VA = "0x181112310")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000C9")]
	public Material material
	{
		[Token(Token = "0x60002DB")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002DC")]
		[Address(RVA = "0x2C26100", Offset = "0x2C24700", VA = "0x182C26100")]
		set
		{
		}
	}

	[Token(Token = "0x170000CA")]
	public float drawDistance
	{
		[Token(Token = "0x60002DD")]
		[Address(RVA = "0x584C90", Offset = "0x583290", VA = "0x180584C90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002DE")]
		[Address(RVA = "0x2C26030", Offset = "0x2C24630", VA = "0x182C26030")]
		set
		{
		}
	}

	[Token(Token = "0x170000CB")]
	public float fadeScale
	{
		[Token(Token = "0x60002DF")]
		[Address(RVA = "0x16EF890", Offset = "0x16EDE90", VA = "0x1816EF890")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002E0")]
		[Address(RVA = "0x2C260C0", Offset = "0x2C246C0", VA = "0x182C260C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000CC")]
	public float startAngleFade
	{
		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x585020", Offset = "0x583620", VA = "0x180585020")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002E2")]
		[Address(RVA = "0x2C26180", Offset = "0x2C24780", VA = "0x182C26180")]
		set
		{
		}
	}

	[Token(Token = "0x170000CD")]
	public float endAngleFade
	{
		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x1ED2DD0", Offset = "0x1ED13D0", VA = "0x181ED2DD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002E4")]
		[Address(RVA = "0x2C26050", Offset = "0x2C24650", VA = "0x182C26050")]
		set
		{
		}
	}

	[Token(Token = "0x170000CE")]
	public Vector2 uvScale
	{
		[Token(Token = "0x60002E5")]
		[Address(RVA = "0x2C25BF0", Offset = "0x2C241F0", VA = "0x182C25BF0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60002E6")]
		[Address(RVA = "0x2C261C0", Offset = "0x2C247C0", VA = "0x182C261C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000CF")]
	public Vector2 uvBias
	{
		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x2C25BB0", Offset = "0x2C241B0", VA = "0x182C25BB0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x2C261B0", Offset = "0x2C247B0", VA = "0x182C261B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D0")]
	public RenderingLayerMask renderingLayerMask
	{
		[Token(Token = "0x60002E9")]
		[Address(RVA = "0x58A540", Offset = "0x588B40", VA = "0x18058A540")]
		get
		{
			return default(RenderingLayerMask);
		}
		[Token(Token = "0x60002EA")]
		[Address(RVA = "0x58A8D0", Offset = "0x588ED0", VA = "0x18058A8D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D1")]
	public DecalScaleMode scaleMode
	{
		[Token(Token = "0x60002EB")]
		[Address(RVA = "0xB57820", Offset = "0xB55E20", VA = "0x180B57820")]
		get
		{
			return default(DecalScaleMode);
		}
		[Token(Token = "0x60002EC")]
		[Address(RVA = "0x2C26150", Offset = "0x2C24750", VA = "0x182C26150")]
		set
		{
		}
	}

	[Token(Token = "0x170000D2")]
	public Vector3 pivot
	{
		[Token(Token = "0x60002ED")]
		[Address(RVA = "0x2C25B70", Offset = "0x2C24170", VA = "0x182C25B70")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x60002EE")]
		[Address(RVA = "0x2C26130", Offset = "0x2C24730", VA = "0x182C26130")]
		set
		{
		}
	}

	[Token(Token = "0x170000D3")]
	public Vector3 size
	{
		[Token(Token = "0x60002EF")]
		[Address(RVA = "0x2C25B90", Offset = "0x2C24190", VA = "0x182C25B90")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x60002F0")]
		[Address(RVA = "0x2C26160", Offset = "0x2C24760", VA = "0x182C26160")]
		set
		{
		}
	}

	[Token(Token = "0x170000D4")]
	public float fadeFactor
	{
		[Token(Token = "0x60002F1")]
		[Address(RVA = "0x2C25B20", Offset = "0x2C24120", VA = "0x182C25B20")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002F2")]
		[Address(RVA = "0x2C26080", Offset = "0x2C24680", VA = "0x182C26080")]
		set
		{
		}
	}

	[Token(Token = "0x170000D5")]
	internal Vector3 effectiveScale
	{
		[Token(Token = "0x60002F3")]
		[Address(RVA = "0x2C25A90", Offset = "0x2C24090", VA = "0x182C25A90")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170000D6")]
	internal Vector3 decalSize
	{
		[Token(Token = "0x60002F4")]
		[Address(RVA = "0x2C25A30", Offset = "0x2C24030", VA = "0x182C25A30")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170000D7")]
	internal Vector3 decalOffset
	{
		[Token(Token = "0x60002F5")]
		[Address(RVA = "0x2C25A10", Offset = "0x2C24010", VA = "0x182C25A10")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170000D8")]
	internal Vector4 uvScaleBias
	{
		[Token(Token = "0x60002F6")]
		[Address(RVA = "0x2C25BD0", Offset = "0x2C241D0", VA = "0x182C25BD0")]
		get
		{
			return default(Vector4);
		}
	}

	[Token(Token = "0x14000001")]
	internal static event DecalProjectorAction onDecalAdd
	{
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x2C25710", Offset = "0x2C23D10", VA = "0x182C25710")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60002CD")]
		[Address(RVA = "0x2C25CD0", Offset = "0x2C242D0", VA = "0x182C25CD0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	internal static event DecalProjectorAction onDecalRemove
	{
		[Token(Token = "0x60002CE")]
		[Address(RVA = "0x2C25950", Offset = "0x2C23F50", VA = "0x182C25950")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60002CF")]
		[Address(RVA = "0x2C25F10", Offset = "0x2C24510", VA = "0x182C25F10")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	internal static event DecalProjectorAction onDecalPropertyChange
	{
		[Token(Token = "0x60002D0")]
		[Address(RVA = "0x2C25890", Offset = "0x2C23E90", VA = "0x182C25890")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60002D1")]
		[Address(RVA = "0x2C25E50", Offset = "0x2C24450", VA = "0x182C25E50")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	internal static event Action onAllDecalPropertyChange
	{
		[Token(Token = "0x60002D2")]
		[Address(RVA = "0x2C25650", Offset = "0x2C23C50", VA = "0x182C25650")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60002D3")]
		[Address(RVA = "0x2C25C10", Offset = "0x2C24210", VA = "0x182C25C10")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000005")]
	internal static event DecalProjectorAction onDecalMaterialChange
	{
		[Token(Token = "0x60002D4")]
		[Address(RVA = "0x2C257D0", Offset = "0x2C23DD0", VA = "0x182C257D0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60002D5")]
		[Address(RVA = "0x2C25D90", Offset = "0x2C24390", VA = "0x182C25D90")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x2C24DB0", Offset = "0x2C233B0", VA = "0x182C24DB0")]
	private void InitMaterial()
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x2C251B0", Offset = "0x2C237B0", VA = "0x182C251B0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x2C25150", Offset = "0x2C23750", VA = "0x182C25150")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x2C25260", Offset = "0x2C23860", VA = "0x182C25260")]
	internal void OnValidate()
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x2C24F20", Offset = "0x2C23520", VA = "0x182C24F20")]
	private void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x2C24E00", Offset = "0x2C23400", VA = "0x182C24E00")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x2C25480", Offset = "0x2C23A80", VA = "0x182C25480")]
	internal static void UpdateAllDecalProperties()
	{
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x2C25460", Offset = "0x2C23A60", VA = "0x182C25460", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x2C253D0", Offset = "0x2C239D0", VA = "0x182C253D0", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x2C254D0", Offset = "0x2C23AD0", VA = "0x182C254D0")]
	public DecalProjector()
	{
	}
}
