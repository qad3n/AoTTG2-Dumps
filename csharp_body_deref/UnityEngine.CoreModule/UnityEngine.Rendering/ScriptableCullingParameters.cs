// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ScriptableCullingParameters
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003A4")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct ScriptableCullingParameters : IEquatable<ScriptableCullingParameters>
{
	[Token(Token = "0x4000B66")]
	[FieldOffset(Offset = "0x0")]
	private LODParameters m_LODParameters;

	[Token(Token = "0x4000B67")]
	private const int k_MaximumCullingPlaneCount = 10;

	[Token(Token = "0x4000B68")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int maximumCullingPlaneCount;

	[Token(Token = "0x4000B69")]
	[FieldOffset(Offset = "0x1C")]
	internal unsafe fixed byte m_CullingPlanes[160];

	[Token(Token = "0x4000B6A")]
	[FieldOffset(Offset = "0xBC")]
	private int m_CullingPlaneCount;

	[Token(Token = "0x4000B6B")]
	[FieldOffset(Offset = "0xC0")]
	private uint m_CullingMask;

	[Token(Token = "0x4000B6C")]
	[FieldOffset(Offset = "0xC8")]
	private ulong m_SceneMask;

	[Token(Token = "0x4000B6D")]
	[FieldOffset(Offset = "0xD0")]
	private ulong m_ViewID;

	[Token(Token = "0x4000B6E")]
	private const int k_LayerCount = 32;

	[Token(Token = "0x4000B6F")]
	[FieldOffset(Offset = "0x4")]
	public static readonly int layerCount;

	[Token(Token = "0x4000B70")]
	[FieldOffset(Offset = "0xD8")]
	internal unsafe fixed float m_LayerFarCullDistances[32];

	[Token(Token = "0x4000B71")]
	[FieldOffset(Offset = "0x158")]
	private int m_LayerCull;

	[Token(Token = "0x4000B72")]
	[FieldOffset(Offset = "0x15C")]
	private Matrix4x4 m_CullingMatrix;

	[Token(Token = "0x4000B73")]
	[FieldOffset(Offset = "0x19C")]
	private Vector3 m_Origin;

	[Token(Token = "0x4000B74")]
	[FieldOffset(Offset = "0x1A8")]
	private float m_ShadowDistance;

	[Token(Token = "0x4000B75")]
	[FieldOffset(Offset = "0x1AC")]
	private float m_ShadowNearPlaneOffset;

	[Token(Token = "0x4000B76")]
	[FieldOffset(Offset = "0x1B0")]
	private CullingOptions m_CullingOptions;

	[Token(Token = "0x4000B77")]
	[FieldOffset(Offset = "0x1B4")]
	private ReflectionProbeSortingCriteria m_ReflectionProbeSortingCriteria;

	[Token(Token = "0x4000B78")]
	[FieldOffset(Offset = "0x1B8")]
	private CameraProperties m_CameraProperties;

	[Token(Token = "0x4000B79")]
	[FieldOffset(Offset = "0x59C")]
	private float m_AccurateOcclusionThreshold;

	[Token(Token = "0x4000B7A")]
	[FieldOffset(Offset = "0x5A0")]
	private int m_MaximumPortalCullingJobs;

	[Token(Token = "0x4000B7B")]
	private const int k_CullingJobCountLowerLimit = 1;

	[Token(Token = "0x4000B7C")]
	private const int k_CullingJobCountUpperLimit = 16;

	[Token(Token = "0x4000B7D")]
	[FieldOffset(Offset = "0x5A4")]
	private Matrix4x4 m_StereoViewMatrix;

	[Token(Token = "0x4000B7E")]
	[FieldOffset(Offset = "0x5E4")]
	private Matrix4x4 m_StereoProjectionMatrix;

	[Token(Token = "0x4000B7F")]
	[FieldOffset(Offset = "0x624")]
	private float m_StereoSeparationDistance;

	[Token(Token = "0x4000B80")]
	[FieldOffset(Offset = "0x628")]
	private int m_maximumVisibleLights;

	[Token(Token = "0x4000B81")]
	[FieldOffset(Offset = "0x62C")]
	private bool m_ConservativeEnclosingSphere;

	[Token(Token = "0x4000B82")]
	[FieldOffset(Offset = "0x630")]
	private int m_NumIterationsEnclosingSphere;

	[Token(Token = "0x17000344")]
	public int maximumVisibleLights
	{
		[Token(Token = "0x60015F0")]
		[Address(RVA = "0x2F6E4E0", Offset = "0x2F6CAE0", VA = "0x182F6E4E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000345")]
	public bool conservativeEnclosingSphere
	{
		[Token(Token = "0x60015F1")]
		[Address(RVA = "0x2F6E4C0", Offset = "0x2F6CAC0", VA = "0x182F6E4C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000346")]
	public int numIterationsEnclosingSphere
	{
		[Token(Token = "0x60015F2")]
		[Address(RVA = "0x2F6E4F0", Offset = "0x2F6CAF0", VA = "0x182F6E4F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000347")]
	public int cullingPlaneCount
	{
		[Token(Token = "0x60015F3")]
		[Address(RVA = "0x2F6E480", Offset = "0x2F6CA80", VA = "0x182F6E480")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000348")]
	public float shadowDistance
	{
		[Token(Token = "0x60015F4")]
		[Address(RVA = "0x2F6E510", Offset = "0x2F6CB10", VA = "0x182F6E510")]
		set
		{
		}
	}

	[Token(Token = "0x17000349")]
	public CullingOptions cullingOptions
	{
		[Token(Token = "0x60015F5")]
		[Address(RVA = "0x2F6E470", Offset = "0x2F6CA70", VA = "0x182F6E470")]
		get
		{
			return default(CullingOptions);
		}
		[Token(Token = "0x60015F6")]
		[Address(RVA = "0x2F6E4D0", Offset = "0x2F6CAD0", VA = "0x182F6E4D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700034A")]
	public ReflectionProbeSortingCriteria reflectionProbeSortingCriteria
	{
		[Token(Token = "0x60015F7")]
		[Address(RVA = "0x2F6E500", Offset = "0x2F6CB00", VA = "0x182F6E500")]
		set
		{
		}
	}

	[Token(Token = "0x1700034B")]
	public Matrix4x4 stereoViewMatrix
	{
		[Token(Token = "0x60015F8")]
		[Address(RVA = "0x2F6E560", Offset = "0x2F6CB60", VA = "0x182F6E560")]
		set
		{
		}
	}

	[Token(Token = "0x1700034C")]
	public Matrix4x4 stereoProjectionMatrix
	{
		[Token(Token = "0x60015F9")]
		[Address(RVA = "0x2F6E490", Offset = "0x2F6CA90", VA = "0x182F6E490")]
		get
		{
			return default(Matrix4x4);
		}
		[Token(Token = "0x60015FA")]
		[Address(RVA = "0x2F6E520", Offset = "0x2F6CB20", VA = "0x182F6E520")]
		set
		{
		}
	}

	[Token(Token = "0x1700034D")]
	public float stereoSeparationDistance
	{
		[Token(Token = "0x60015FB")]
		[Address(RVA = "0x2F6E550", Offset = "0x2F6CB50", VA = "0x182F6E550")]
		set
		{
		}
	}

	[Token(Token = "0x60015FC")]
	[Address(RVA = "0x2F6E340", Offset = "0x2F6C940", VA = "0x182F6E340")]
	public float GetLayerCullingDistance(int layerIndex)
	{
		return default(float);
	}

	[Token(Token = "0x60015FD")]
	[Address(RVA = "0x2F6E000", Offset = "0x2F6C600", VA = "0x182F6E000")]
	public Plane GetCullingPlane(int index)
	{
		return default(Plane);
	}

	[Token(Token = "0x60015FE")]
	[Address(RVA = "0x2F6D840", Offset = "0x2F6BE40", VA = "0x182F6D840", Slot = "4")]
	public bool Equals(ScriptableCullingParameters other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015FF")]
	[Address(RVA = "0x2F6DF30", Offset = "0x2F6C530", VA = "0x182F6DF30", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001600")]
	[Address(RVA = "0x2F6E140", Offset = "0x2F6C740", VA = "0x182F6E140", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
