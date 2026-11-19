// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalProjector
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6611F70", Offset = "0x6610F70", VA = "0x6611F70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002D7")]
		[Address(RVA = "0x6611FB0", Offset = "0x6610FB0", VA = "0x6611FB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000C7")]
	internal static bool isSupported
	{
		[Token(Token = "0x60002D8")]
		[Address(RVA = "0x6612000", Offset = "0x6611000", VA = "0x6612000")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C8")]
	internal DecalEntity decalEntity
	{
		[Token(Token = "0x60002D9")]
		[Address(RVA = "0x6612040", Offset = "0x6611040", VA = "0x6612040")]
		[CompilerGenerated]
		get
		{
			return default(DecalEntity);
		}
		[Token(Token = "0x60002DA")]
		[Address(RVA = "0x6612050", Offset = "0x6611050", VA = "0x6612050")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000C9")]
	public Material material
	{
		[Token(Token = "0x60002DB")]
		[Address(RVA = "0x6612060", Offset = "0x6611060", VA = "0x6612060")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002DC")]
		[Address(RVA = "0x6612070", Offset = "0x6611070", VA = "0x6612070")]
		set
		{
		}
	}

	[Token(Token = "0x170000CA")]
	public float drawDistance
	{
		[Token(Token = "0x60002DD")]
		[Address(RVA = "0x66121C0", Offset = "0x66111C0", VA = "0x66121C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002DE")]
		[Address(RVA = "0x66121D0", Offset = "0x66111D0", VA = "0x66121D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000CB")]
	public float fadeScale
	{
		[Token(Token = "0x60002DF")]
		[Address(RVA = "0x66121F0", Offset = "0x66111F0", VA = "0x66121F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002E0")]
		[Address(RVA = "0x6612200", Offset = "0x6611200", VA = "0x6612200")]
		set
		{
		}
	}

	[Token(Token = "0x170000CC")]
	public float startAngleFade
	{
		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x6612230", Offset = "0x6611230", VA = "0x6612230")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002E2")]
		[Address(RVA = "0x6612240", Offset = "0x6611240", VA = "0x6612240")]
		set
		{
		}
	}

	[Token(Token = "0x170000CD")]
	public float endAngleFade
	{
		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x6612270", Offset = "0x6611270", VA = "0x6612270")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002E4")]
		[Address(RVA = "0x6612280", Offset = "0x6611280", VA = "0x6612280")]
		set
		{
		}
	}

	[Token(Token = "0x170000CE")]
	public Vector2 uvScale
	{
		[Token(Token = "0x60002E5")]
		[Address(RVA = "0x66122B0", Offset = "0x66112B0", VA = "0x66122B0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60002E6")]
		[Address(RVA = "0x66122C0", Offset = "0x66112C0", VA = "0x66122C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000CF")]
	public Vector2 uvBias
	{
		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x66122D0", Offset = "0x66112D0", VA = "0x66122D0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x66122E0", Offset = "0x66112E0", VA = "0x66122E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D0")]
	public RenderingLayerMask renderingLayerMask
	{
		[Token(Token = "0x60002E9")]
		[Address(RVA = "0x66122F0", Offset = "0x66112F0", VA = "0x66122F0")]
		get
		{
			return default(RenderingLayerMask);
		}
		[Token(Token = "0x60002EA")]
		[Address(RVA = "0x6612300", Offset = "0x6611300", VA = "0x6612300")]
		set
		{
		}
	}

	[Token(Token = "0x170000D1")]
	public DecalScaleMode scaleMode
	{
		[Token(Token = "0x60002EB")]
		[Address(RVA = "0x6612310", Offset = "0x6611310", VA = "0x6612310")]
		get
		{
			return default(DecalScaleMode);
		}
		[Token(Token = "0x60002EC")]
		[Address(RVA = "0x6612320", Offset = "0x6611320", VA = "0x6612320")]
		set
		{
		}
	}

	[Token(Token = "0x170000D2")]
	public Vector3 pivot
	{
		[Token(Token = "0x60002ED")]
		[Address(RVA = "0x6612330", Offset = "0x6611330", VA = "0x6612330")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x60002EE")]
		[Address(RVA = "0x6612340", Offset = "0x6611340", VA = "0x6612340")]
		set
		{
		}
	}

	[Token(Token = "0x170000D3")]
	public Vector3 size
	{
		[Token(Token = "0x60002EF")]
		[Address(RVA = "0x6612350", Offset = "0x6611350", VA = "0x6612350")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x60002F0")]
		[Address(RVA = "0x6612360", Offset = "0x6611360", VA = "0x6612360")]
		set
		{
		}
	}

	[Token(Token = "0x170000D4")]
	public float fadeFactor
	{
		[Token(Token = "0x60002F1")]
		[Address(RVA = "0x6612370", Offset = "0x6611370", VA = "0x6612370")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002F2")]
		[Address(RVA = "0x6612380", Offset = "0x6611380", VA = "0x6612380")]
		set
		{
		}
	}

	[Token(Token = "0x170000D5")]
	internal Vector3 effectiveScale
	{
		[Token(Token = "0x60002F3")]
		[Address(RVA = "0x66123B0", Offset = "0x66113B0", VA = "0x66123B0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170000D6")]
	internal Vector3 decalSize
	{
		[Token(Token = "0x60002F4")]
		[Address(RVA = "0x6612410", Offset = "0x6611410", VA = "0x6612410")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170000D7")]
	internal Vector3 decalOffset
	{
		[Token(Token = "0x60002F5")]
		[Address(RVA = "0x6612430", Offset = "0x6611430", VA = "0x6612430")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170000D8")]
	internal Vector4 uvScaleBias
	{
		[Token(Token = "0x60002F6")]
		[Address(RVA = "0x6612450", Offset = "0x6611450", VA = "0x6612450")]
		get
		{
			return default(Vector4);
		}
	}

	[Token(Token = "0x14000001")]
	internal static event DecalProjectorAction onDecalAdd
	{
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x66118B0", Offset = "0x66108B0", VA = "0x66118B0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60002CD")]
		[Address(RVA = "0x6611950", Offset = "0x6610950", VA = "0x6611950")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	internal static event DecalProjectorAction onDecalRemove
	{
		[Token(Token = "0x60002CE")]
		[Address(RVA = "0x66119F0", Offset = "0x66109F0", VA = "0x66119F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60002CF")]
		[Address(RVA = "0x6611AA0", Offset = "0x6610AA0", VA = "0x6611AA0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	internal static event DecalProjectorAction onDecalPropertyChange
	{
		[Token(Token = "0x60002D0")]
		[Address(RVA = "0x6611B50", Offset = "0x6610B50", VA = "0x6611B50")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60002D1")]
		[Address(RVA = "0x6611C00", Offset = "0x6610C00", VA = "0x6611C00")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	internal static event Action onAllDecalPropertyChange
	{
		[Token(Token = "0x60002D2")]
		[Address(RVA = "0x6611CB0", Offset = "0x6610CB0", VA = "0x6611CB0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60002D3")]
		[Address(RVA = "0x6611D60", Offset = "0x6610D60", VA = "0x6611D60")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000005")]
	internal static event DecalProjectorAction onDecalMaterialChange
	{
		[Token(Token = "0x60002D4")]
		[Address(RVA = "0x6611E10", Offset = "0x6610E10", VA = "0x6611E10")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60002D5")]
		[Address(RVA = "0x6611EC0", Offset = "0x6610EC0", VA = "0x6611EC0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x6612460", Offset = "0x6611460", VA = "0x6612460")]
	private void InitMaterial()
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x66124B0", Offset = "0x66114B0", VA = "0x66124B0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x6612570", Offset = "0x6611570", VA = "0x6612570")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x6612090", Offset = "0x6611090", VA = "0x6612090")]
	internal void OnValidate()
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x66125C0", Offset = "0x66115C0", VA = "0x66125C0")]
	private void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x66127D0", Offset = "0x66117D0", VA = "0x66127D0")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x66128F0", Offset = "0x66118F0", VA = "0x66128F0")]
	internal static void UpdateAllDecalProperties()
	{
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x6612940", Offset = "0x6611940", VA = "0x6612940", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x6612960", Offset = "0x6611960", VA = "0x6612960", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x66129E0", Offset = "0x66119E0", VA = "0x66129E0")]
	public DecalProjector()
	{
	}
}
