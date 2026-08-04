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

[Token(Token = "0x20002DF")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct ScriptableCullingParameters : IEquatable<ScriptableCullingParameters>
{
	[Token(Token = "0x4000876")]
	[FieldOffset(Offset = "0x0")]
	private int m_IsOrthographic;

	[Token(Token = "0x4000877")]
	[FieldOffset(Offset = "0x4")]
	private LODParameters m_LODParameters;

	[Token(Token = "0x4000878")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int maximumCullingPlaneCount;

	[Token(Token = "0x4000879")]
	[FieldOffset(Offset = "0x20")]
	internal unsafe fixed byte m_CullingPlanes[160];

	[Token(Token = "0x400087A")]
	[FieldOffset(Offset = "0xC0")]
	private int m_CullingPlaneCount;

	[Token(Token = "0x400087B")]
	[FieldOffset(Offset = "0xC4")]
	private uint m_CullingMask;

	[Token(Token = "0x400087C")]
	[FieldOffset(Offset = "0xC8")]
	private ulong m_SceneMask;

	[Token(Token = "0x400087D")]
	[FieldOffset(Offset = "0xD0")]
	private ulong m_ViewID;

	[Token(Token = "0x400087E")]
	[FieldOffset(Offset = "0x4")]
	public static readonly int layerCount;

	[Token(Token = "0x400087F")]
	[FieldOffset(Offset = "0xD8")]
	internal unsafe fixed float m_LayerFarCullDistances[32];

	[Token(Token = "0x4000880")]
	[FieldOffset(Offset = "0x158")]
	private int m_LayerCull;

	[Token(Token = "0x4000881")]
	[FieldOffset(Offset = "0x15C")]
	private Matrix4x4 m_CullingMatrix;

	[Token(Token = "0x4000882")]
	[FieldOffset(Offset = "0x19C")]
	private Vector3 m_Origin;

	[Token(Token = "0x4000883")]
	[FieldOffset(Offset = "0x1A8")]
	private float m_ShadowDistance;

	[Token(Token = "0x4000884")]
	[FieldOffset(Offset = "0x1AC")]
	private float m_ShadowNearPlaneOffset;

	[Token(Token = "0x4000885")]
	[FieldOffset(Offset = "0x1B0")]
	private CullingOptions m_CullingOptions;

	[Token(Token = "0x4000886")]
	[FieldOffset(Offset = "0x1B4")]
	private ReflectionProbeSortingCriteria m_ReflectionProbeSortingCriteria;

	[Token(Token = "0x4000887")]
	[FieldOffset(Offset = "0x1B8")]
	private CameraProperties m_CameraProperties;

	[Token(Token = "0x4000888")]
	[FieldOffset(Offset = "0x598")]
	private float m_AccurateOcclusionThreshold;

	[Token(Token = "0x4000889")]
	[FieldOffset(Offset = "0x59C")]
	private int m_MaximumPortalCullingJobs;

	[Token(Token = "0x400088A")]
	[FieldOffset(Offset = "0x5A0")]
	private Matrix4x4 m_StereoViewMatrix;

	[Token(Token = "0x400088B")]
	[FieldOffset(Offset = "0x5E0")]
	private Matrix4x4 m_StereoProjectionMatrix;

	[Token(Token = "0x400088C")]
	[FieldOffset(Offset = "0x620")]
	private float m_StereoSeparationDistance;

	[Token(Token = "0x400088D")]
	[FieldOffset(Offset = "0x624")]
	private int m_maximumVisibleLights;

	[Token(Token = "0x400088E")]
	[FieldOffset(Offset = "0x628")]
	private bool m_ConservativeEnclosingSphere;

	[Token(Token = "0x400088F")]
	[FieldOffset(Offset = "0x62C")]
	private int m_NumIterationsEnclosingSphere;

	[Token(Token = "0x17000278")]
	public int cullingPlaneCount
	{
		[Token(Token = "0x600101F")]
		[Address(RVA = "0x4E2C460", Offset = "0x4E2C460", VA = "0x4E2C460")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000279")]
	public CullingOptions cullingOptions
	{
		[Token(Token = "0x6001020")]
		[Address(RVA = "0x4E2C470", Offset = "0x4E2C470", VA = "0x4E2C470")]
		get
		{
			return default(CullingOptions);
		}
		[Token(Token = "0x6001021")]
		[Address(RVA = "0x4E2C480", Offset = "0x4E2C480", VA = "0x4E2C480")]
		set
		{
		}
	}

	[Token(Token = "0x1700027A")]
	public Matrix4x4 stereoViewMatrix
	{
		[Token(Token = "0x6001022")]
		[Address(RVA = "0x4E2C490", Offset = "0x4E2C490", VA = "0x4E2C490")]
		set
		{
		}
	}

	[Token(Token = "0x1700027B")]
	public Matrix4x4 stereoProjectionMatrix
	{
		[Token(Token = "0x6001023")]
		[Address(RVA = "0x4E2C4D0", Offset = "0x4E2C4D0", VA = "0x4E2C4D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700027C")]
	public float stereoSeparationDistance
	{
		[Token(Token = "0x6001024")]
		[Address(RVA = "0x4E2C510", Offset = "0x4E2C510", VA = "0x4E2C510")]
		set
		{
		}
	}

	[Token(Token = "0x6001025")]
	[Address(RVA = "0x4E2C520", Offset = "0x4E2C520", VA = "0x4E2C520")]
	public float GetLayerCullingDistance(int layerIndex)
	{
		return default(float);
	}

	[Token(Token = "0x6001026")]
	[Address(RVA = "0x4E2C5F0", Offset = "0x4E2C5F0", VA = "0x4E2C5F0")]
	public Plane GetCullingPlane(int index)
	{
		return default(Plane);
	}

	[Token(Token = "0x6001027")]
	[Address(RVA = "0x4E2C720", Offset = "0x4E2C720", VA = "0x4E2C720", Slot = "4")]
	public bool Equals(ScriptableCullingParameters other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001028")]
	[Address(RVA = "0x4E2D410", Offset = "0x4E2D410", VA = "0x4E2D410", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001029")]
	[Address(RVA = "0x4E2D4C0", Offset = "0x4E2D4C0", VA = "0x4E2D4C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
