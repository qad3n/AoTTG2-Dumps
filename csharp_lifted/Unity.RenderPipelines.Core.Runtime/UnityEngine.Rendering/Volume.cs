// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Volume
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6552990", Offset = "0x6551990", VA = "0x6552990", Slot = "4")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000ECA")]
		[Address(RVA = "0x65529A0", Offset = "0x65519A0", VA = "0x65529A0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170001E2")]
	public VolumeProfile profile
	{
		[Token(Token = "0x6000ECB")]
		[Address(RVA = "0x6552A30", Offset = "0x6551A30", VA = "0x6552A30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ECC")]
		[Address(RVA = "0x6552D10", Offset = "0x6551D10", VA = "0x6552D10")]
		set
		{
		}
	}

	[Token(Token = "0x170001E3")]
	public List<Collider> colliders
	{
		[Token(Token = "0x6000ECD")]
		[Address(RVA = "0x6552D20", Offset = "0x6551D20", VA = "0x6552D20", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E4")]
	internal GameObject cachedGameObject
	{
		[Token(Token = "0x6000ECE")]
		[Address(RVA = "0x6552D30", Offset = "0x6551D30", VA = "0x6552D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E5")]
	internal VolumeProfile profileRef
	{
		[Token(Token = "0x6000ECF")]
		[Address(RVA = "0x6552D40", Offset = "0x6551D40", VA = "0x6552D40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000ED0")]
	[Address(RVA = "0x6552DB0", Offset = "0x6551DB0", VA = "0x6552DB0")]
	public bool HasInstantiatedProfile()
	{
		return default(bool);
	}

	[Token(Token = "0x6000ED1")]
	[Address(RVA = "0x6552E00", Offset = "0x6551E00", VA = "0x6552E00")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000ED2")]
	[Address(RVA = "0x6552EC0", Offset = "0x6551EC0", VA = "0x6552EC0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000ED3")]
	[Address(RVA = "0x6552F40", Offset = "0x6551F40", VA = "0x6552F40")]
	private void Update()
	{
	}

	[Token(Token = "0x6000ED4")]
	[Address(RVA = "0x65529F0", Offset = "0x65519F0", VA = "0x65529F0")]
	public void UpdateColliders()
	{
	}

	[Token(Token = "0x6000ED5")]
	[Address(RVA = "0x6552F60", Offset = "0x6551F60", VA = "0x6552F60")]
	internal void UpdateLayer()
	{
	}

	[Token(Token = "0x6000ED6")]
	[Address(RVA = "0x6552FE0", Offset = "0x6551FE0", VA = "0x6552FE0")]
	internal void UpdatePriority()
	{
	}

	[Token(Token = "0x6000ED7")]
	[Address(RVA = "0x6553090", Offset = "0x6552090", VA = "0x6553090")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x6000ED8")]
	[Address(RVA = "0x65530B0", Offset = "0x65520B0", VA = "0x65530B0")]
	public Volume()
	{
	}
}
