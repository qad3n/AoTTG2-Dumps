using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001D5")]
[ExecuteAlways]
[AddComponentMenu("Miscellaneous/Volume")]
public class Volume : MonoBehaviour, IVolume
{
	[Token(Token = "0x40007F6")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[FormerlySerializedAs("isGlobal")]
	private bool m_IsGlobal;

	[Token(Token = "0x40007F7")]
	[FieldOffset(Offset = "0x24")]
	[Tooltip("A value which determines which Volume is being used when Volumes have an equal amount of influence on the Scene. Volumes with a higher priority will override lower ones.")]
	[Delayed]
	public float priority;

	[Token(Token = "0x40007F8")]
	[FieldOffset(Offset = "0x28")]
	[Tooltip("Sets the outer distance to start blending from. A value of 0 means no blending and Unity applies the Volume overrides immediately upon entry.")]
	public float blendDistance;

	[Token(Token = "0x40007F9")]
	[FieldOffset(Offset = "0x2C")]
	[Range(0f, 1f)]
	[Tooltip("Sets the total weight of this Volume in the Scene. 0 means no effect and 1 means full effect.")]
	public float weight;

	[Token(Token = "0x40007FA")]
	[FieldOffset(Offset = "0x30")]
	public VolumeProfile sharedProfile;

	[Token(Token = "0x40007FB")]
	[FieldOffset(Offset = "0x38")]
	internal List<Collider> m_Colliders;

	[Token(Token = "0x40007FC")]
	[FieldOffset(Offset = "0x40")]
	private int m_PreviousLayer;

	[Token(Token = "0x40007FD")]
	[FieldOffset(Offset = "0x44")]
	private float m_PreviousPriority;

	[Token(Token = "0x40007FE")]
	[FieldOffset(Offset = "0x48")]
	private VolumeProfile m_InternalProfile;

	[Token(Token = "0x1700018E")]
	[Tooltip("When enabled, the Volume is applied to the entire Scene.")]
	public bool isGlobal
	{
		[Token(Token = "0x6000D53")]
		[Address(RVA = "0x48E0460", Offset = "0x48E0460", VA = "0x48E0460", Slot = "4")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D54")]
		[Address(RVA = "0x48E0470", Offset = "0x48E0470", VA = "0x48E0470", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700018F")]
	public VolumeProfile profile
	{
		[Token(Token = "0x6000D55")]
		[Address(RVA = "0x48E0480", Offset = "0x48E0480", VA = "0x48E0480")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D56")]
		[Address(RVA = "0x48E07A0", Offset = "0x48E07A0", VA = "0x48E07A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000190")]
	public List<Collider> colliders
	{
		[Token(Token = "0x6000D57")]
		[Address(RVA = "0x48E07B0", Offset = "0x48E07B0", VA = "0x48E07B0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000191")]
	internal VolumeProfile profileRef
	{
		[Token(Token = "0x6000D58")]
		[Address(RVA = "0x48E07C0", Offset = "0x48E07C0", VA = "0x48E07C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D59")]
	[Address(RVA = "0x48E0830", Offset = "0x48E0830", VA = "0x48E0830")]
	public bool HasInstantiatedProfile()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D5A")]
	[Address(RVA = "0x48E0880", Offset = "0x48E0880", VA = "0x48E0880")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000D5B")]
	[Address(RVA = "0x48E0D50", Offset = "0x48E0D50", VA = "0x48E0D50")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000D5C")]
	[Address(RVA = "0x48E1040", Offset = "0x48E1040", VA = "0x48E1040")]
	private void Update()
	{
	}

	[Token(Token = "0x6000D5D")]
	[Address(RVA = "0x48E1160", Offset = "0x48E1160", VA = "0x48E1160")]
	internal void UpdateLayer()
	{
	}

	[Token(Token = "0x6000D5E")]
	[Address(RVA = "0x48E1470", Offset = "0x48E1470", VA = "0x48E1470")]
	public Volume()
	{
	}
}
