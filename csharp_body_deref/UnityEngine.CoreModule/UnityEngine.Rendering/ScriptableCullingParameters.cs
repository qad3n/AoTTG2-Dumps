// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ScriptableCullingParameters
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000378")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct ScriptableCullingParameters : IEquatable<ScriptableCullingParameters>
{
	[Token(Token = "0x4000A46")]
	[FieldOffset(Offset = "0x0")]
	private LODParameters m_LODParameters;

	[Token(Token = "0x4000A47")]
	private const int k_MaximumCullingPlaneCount = 10;

	[Token(Token = "0x4000A48")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int maximumCullingPlaneCount;

	[Token(Token = "0x4000A49")]
	[FieldOffset(Offset = "0x1C")]
	internal unsafe fixed byte m_CullingPlanes[160];

	[Token(Token = "0x4000A4A")]
	[FieldOffset(Offset = "0xBC")]
	private int m_CullingPlaneCount;

	[Token(Token = "0x4000A4B")]
	[FieldOffset(Offset = "0xC0")]
	private uint m_CullingMask;

	[Token(Token = "0x4000A4C")]
	[FieldOffset(Offset = "0xC8")]
	private ulong m_SceneMask;

	[Token(Token = "0x4000A4D")]
	[FieldOffset(Offset = "0xD0")]
	private ulong m_ViewID;

	[Token(Token = "0x4000A4E")]
	private const int k_LayerCount = 32;

	[Token(Token = "0x4000A4F")]
	[FieldOffset(Offset = "0x4")]
	public static readonly int layerCount;

	[Token(Token = "0x4000A50")]
	[FieldOffset(Offset = "0xD8")]
	internal unsafe fixed float m_LayerFarCullDistances[32];

	[Token(Token = "0x4000A51")]
	[FieldOffset(Offset = "0x158")]
	private int m_LayerCull;

	[Token(Token = "0x4000A52")]
	[FieldOffset(Offset = "0x15C")]
	private Matrix4x4 m_CullingMatrix;

	[Token(Token = "0x4000A53")]
	[FieldOffset(Offset = "0x19C")]
	private Vector3 m_Origin;

	[Token(Token = "0x4000A54")]
	[FieldOffset(Offset = "0x1A8")]
	private float m_ShadowDistance;

	[Token(Token = "0x4000A55")]
	[FieldOffset(Offset = "0x1AC")]
	private float m_ShadowNearPlaneOffset;

	[Token(Token = "0x4000A56")]
	[FieldOffset(Offset = "0x1B0")]
	private CullingOptions m_CullingOptions;

	[Token(Token = "0x4000A57")]
	[FieldOffset(Offset = "0x1B4")]
	private ReflectionProbeSortingCriteria m_ReflectionProbeSortingCriteria;

	[Token(Token = "0x4000A58")]
	[FieldOffset(Offset = "0x1B8")]
	private CameraProperties m_CameraProperties;

	[Token(Token = "0x4000A59")]
	[FieldOffset(Offset = "0x59C")]
	private float m_AccurateOcclusionThreshold;

	[Token(Token = "0x4000A5A")]
	[FieldOffset(Offset = "0x5A0")]
	private int m_MaximumPortalCullingJobs;

	[Token(Token = "0x4000A5B")]
	private const int k_CullingJobCountLowerLimit = 1;

	[Token(Token = "0x4000A5C")]
	private const int k_CullingJobCountUpperLimit = 16;

	[Token(Token = "0x4000A5D")]
	[FieldOffset(Offset = "0x5A4")]
	private Matrix4x4 m_StereoViewMatrix;

	[Token(Token = "0x4000A5E")]
	[FieldOffset(Offset = "0x5E4")]
	private Matrix4x4 m_StereoProjectionMatrix;

	[Token(Token = "0x4000A5F")]
	[FieldOffset(Offset = "0x624")]
	private float m_StereoSeparationDistance;

	[Token(Token = "0x4000A60")]
	[FieldOffset(Offset = "0x628")]
	private int m_maximumVisibleLights;

	[Token(Token = "0x4000A61")]
	[FieldOffset(Offset = "0x62C")]
	private bool m_ConservativeEnclosingSphere;

	[Token(Token = "0x4000A62")]
	[FieldOffset(Offset = "0x630")]
	private int m_NumIterationsEnclosingSphere;

	[Token(Token = "0x17000332")]
	public int maximumVisibleLights
	{
		[Token(Token = "0x6001595")]
		[Address(RVA = "0x6958A90", Offset = "0x6957A90", VA = "0x6958A90")]
		set
		{
		}
	}

	[Token(Token = "0x17000333")]
	public bool conservativeEnclosingSphere
	{
		[Token(Token = "0x6001596")]
		[Address(RVA = "0x6958AA0", Offset = "0x6957AA0", VA = "0x6958AA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000334")]
	public int numIterationsEnclosingSphere
	{
		[Token(Token = "0x6001597")]
		[Address(RVA = "0x6958AB0", Offset = "0x6957AB0", VA = "0x6958AB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000335")]
	public int cullingPlaneCount
	{
		[Token(Token = "0x6001598")]
		[Address(RVA = "0x6958AC0", Offset = "0x6957AC0", VA = "0x6958AC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000336")]
	public float shadowDistance
	{
		[Token(Token = "0x6001599")]
		[Address(RVA = "0x6958AD0", Offset = "0x6957AD0", VA = "0x6958AD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000337")]
	public CullingOptions cullingOptions
	{
		[Token(Token = "0x600159A")]
		[Address(RVA = "0x6958AE0", Offset = "0x6957AE0", VA = "0x6958AE0")]
		get
		{
			return default(CullingOptions);
		}
		[Token(Token = "0x600159B")]
		[Address(RVA = "0x6958AF0", Offset = "0x6957AF0", VA = "0x6958AF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000338")]
	public ReflectionProbeSortingCriteria reflectionProbeSortingCriteria
	{
		[Token(Token = "0x600159C")]
		[Address(RVA = "0x6958B00", Offset = "0x6957B00", VA = "0x6958B00")]
		set
		{
		}
	}

	[Token(Token = "0x17000339")]
	public Matrix4x4 stereoViewMatrix
	{
		[Token(Token = "0x600159D")]
		[Address(RVA = "0x6958B10", Offset = "0x6957B10", VA = "0x6958B10")]
		set
		{
		}
	}

	[Token(Token = "0x1700033A")]
	public Matrix4x4 stereoProjectionMatrix
	{
		[Token(Token = "0x600159E")]
		[Address(RVA = "0x6958B50", Offset = "0x6957B50", VA = "0x6958B50")]
		get
		{
			return default(Matrix4x4);
		}
		[Token(Token = "0x600159F")]
		[Address(RVA = "0x6958B80", Offset = "0x6957B80", VA = "0x6958B80")]
		set
		{
		}
	}

	[Token(Token = "0x1700033B")]
	public float stereoSeparationDistance
	{
		[Token(Token = "0x60015A0")]
		[Address(RVA = "0x6958BC0", Offset = "0x6957BC0", VA = "0x6958BC0")]
		set
		{
		}
	}

	[Token(Token = "0x60015A1")]
	[Address(RVA = "0x6958BD0", Offset = "0x6957BD0", VA = "0x6958BD0")]
	public float GetLayerCullingDistance(int layerIndex)
	{
		return default(float);
	}

	[Token(Token = "0x60015A2")]
	[Address(RVA = "0x6958CA0", Offset = "0x6957CA0", VA = "0x6958CA0")]
	public Plane GetCullingPlane(int index)
	{
		return default(Plane);
	}

	[Token(Token = "0x60015A3")]
	[Address(RVA = "0x6958DC0", Offset = "0x6957DC0", VA = "0x6958DC0", Slot = "4")]
	public bool Equals(ScriptableCullingParameters other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015A4")]
	[Address(RVA = "0x6959450", Offset = "0x6958450", VA = "0x6959450", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015A5")]
	[Address(RVA = "0x6959500", Offset = "0x6958500", VA = "0x6959500", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
