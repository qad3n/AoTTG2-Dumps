// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Volume
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001F2")]
[ExecuteAlways]
[AddComponentMenu("Miscellaneous/Volume")]
public class Volume : MonoBehaviour, IVolume
{
	[Token(Token = "0x4000973")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[FormerlySerializedAs("isGlobal")]
	private bool m_IsGlobal;

	[Token(Token = "0x4000974")]
	[FieldOffset(Offset = "0x24")]
	[Delayed]
	[FormerlySerializedAs("m_Priority")]
	public float priority;

	[Token(Token = "0x4000975")]
	[FieldOffset(Offset = "0x28")]
	[FormerlySerializedAs("m_BlendDistance")]
	public float blendDistance;

	[Token(Token = "0x4000976")]
	[FieldOffset(Offset = "0x2C")]
	[Range(0f, 1f)]
	[FormerlySerializedAs("m_Weight")]
	public float weight;

	[Token(Token = "0x4000977")]
	[FieldOffset(Offset = "0x30")]
	public VolumeProfile sharedProfile;

	[Token(Token = "0x4000978")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<Collider> m_Colliders;

	[Token(Token = "0x4000979")]
	[FieldOffset(Offset = "0x40")]
	private GameObject m_CachedGameObject;

	[Token(Token = "0x400097A")]
	[FieldOffset(Offset = "0x48")]
	private int m_PreviousLayer;

	[Token(Token = "0x400097B")]
	[FieldOffset(Offset = "0x4C")]
	private float m_PreviousPriority;

	[Token(Token = "0x400097C")]
	[FieldOffset(Offset = "0x50")]
	private VolumeProfile m_InternalProfile;

	[Token(Token = "0x170001E1")]
	public bool isGlobal
	{
		[Token(Token = "0x6000EC9")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "4")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ECA")]
		[Address(RVA = "0x2B676C0", Offset = "0x2B65CC0", VA = "0x182B676C0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170001E2")]
	public VolumeProfile profile
	{
		[Token(Token = "0x6000ECB")]
		[Address(RVA = "0x2B67400", Offset = "0x2B65A00", VA = "0x182B67400")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ECC")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		set
		{
		}
	}

	[Token(Token = "0x170001E3")]
	public List<Collider> colliders
	{
		[Token(Token = "0x6000ECD")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E4")]
	internal GameObject cachedGameObject
	{
		[Token(Token = "0x6000ECE")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E5")]
	internal VolumeProfile profileRef
	{
		[Token(Token = "0x6000ECF")]
		[Address(RVA = "0x2B67380", Offset = "0x2B65980", VA = "0x182B67380")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000ED0")]
	[Address(RVA = "0x2B66E90", Offset = "0x2B65490", VA = "0x182B66E90")]
	public bool HasInstantiatedProfile()
	{
		return default(bool);
	}

	[Token(Token = "0x6000ED1")]
	[Address(RVA = "0x2B66F40", Offset = "0x2B65540", VA = "0x182B66F40")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000ED2")]
	[Address(RVA = "0x2B66EE0", Offset = "0x2B654E0", VA = "0x182B66EE0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000ED3")]
	[Address(RVA = "0x2B671C0", Offset = "0x2B657C0", VA = "0x182B671C0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000ED4")]
	[Address(RVA = "0x2B67020", Offset = "0x2B65620", VA = "0x182B67020")]
	public void UpdateColliders()
	{
	}

	[Token(Token = "0x6000ED5")]
	[Address(RVA = "0x2B67060", Offset = "0x2B65660", VA = "0x182B67060")]
	internal void UpdateLayer()
	{
	}

	[Token(Token = "0x6000ED6")]
	[Address(RVA = "0x2B67100", Offset = "0x2B65700", VA = "0x182B67100")]
	internal void UpdatePriority()
	{
	}

	[Token(Token = "0x6000ED7")]
	[Address(RVA = "0x2B67000", Offset = "0x2B65600", VA = "0x182B67000")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x6000ED8")]
	[Address(RVA = "0x2B672F0", Offset = "0x2B658F0", VA = "0x182B672F0")]
	public Volume()
	{
	}
}
