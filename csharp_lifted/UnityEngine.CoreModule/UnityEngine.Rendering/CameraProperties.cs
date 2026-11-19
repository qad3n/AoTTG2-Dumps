// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CameraProperties
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000373")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct CameraProperties : IEquatable<CameraProperties>
{
	[Token(Token = "0x4000A17")]
	private const int k_NumLayers = 32;

	[Token(Token = "0x4000A18")]
	[FieldOffset(Offset = "0x0")]
	private Rect screenRect;

	[Token(Token = "0x4000A19")]
	[FieldOffset(Offset = "0x10")]
	private Vector3 viewDir;

	[Token(Token = "0x4000A1A")]
	[FieldOffset(Offset = "0x1C")]
	private float projectionNear;

	[Token(Token = "0x4000A1B")]
	[FieldOffset(Offset = "0x20")]
	private float projectionFar;

	[Token(Token = "0x4000A1C")]
	[FieldOffset(Offset = "0x24")]
	private float cameraNear;

	[Token(Token = "0x4000A1D")]
	[FieldOffset(Offset = "0x28")]
	private float cameraFar;

	[Token(Token = "0x4000A1E")]
	[FieldOffset(Offset = "0x2C")]
	private float cameraAspect;

	[Token(Token = "0x4000A1F")]
	[FieldOffset(Offset = "0x30")]
	private Matrix4x4 cameraToWorld;

	[Token(Token = "0x4000A20")]
	[FieldOffset(Offset = "0x70")]
	private Matrix4x4 actualWorldToClip;

	[Token(Token = "0x4000A21")]
	[FieldOffset(Offset = "0xB0")]
	private Matrix4x4 cameraClipToWorld;

	[Token(Token = "0x4000A22")]
	[FieldOffset(Offset = "0xF0")]
	private Matrix4x4 cameraWorldToClip;

	[Token(Token = "0x4000A23")]
	[FieldOffset(Offset = "0x130")]
	private Matrix4x4 implicitProjection;

	[Token(Token = "0x4000A24")]
	[FieldOffset(Offset = "0x170")]
	private Matrix4x4 stereoWorldToClipLeft;

	[Token(Token = "0x4000A25")]
	[FieldOffset(Offset = "0x1B0")]
	private Matrix4x4 stereoWorldToClipRight;

	[Token(Token = "0x4000A26")]
	[FieldOffset(Offset = "0x1F0")]
	private Matrix4x4 worldToCamera;

	[Token(Token = "0x4000A27")]
	[FieldOffset(Offset = "0x230")]
	private Vector3 up;

	[Token(Token = "0x4000A28")]
	[FieldOffset(Offset = "0x23C")]
	private Vector3 right;

	[Token(Token = "0x4000A29")]
	[FieldOffset(Offset = "0x248")]
	private Vector3 transformDirection;

	[Token(Token = "0x4000A2A")]
	[FieldOffset(Offset = "0x254")]
	private Vector3 cameraEuler;

	[Token(Token = "0x4000A2B")]
	[FieldOffset(Offset = "0x260")]
	private Vector3 velocity;

	[Token(Token = "0x4000A2C")]
	[FieldOffset(Offset = "0x26C")]
	private float farPlaneWorldSpaceLength;

	[Token(Token = "0x4000A2D")]
	[FieldOffset(Offset = "0x270")]
	private uint rendererCount;

	[Token(Token = "0x4000A2E")]
	private const int k_PlaneCount = 6;

	[Token(Token = "0x4000A2F")]
	[FieldOffset(Offset = "0x274")]
	internal unsafe fixed byte m_ShadowCullPlanes[96];

	[Token(Token = "0x4000A30")]
	[FieldOffset(Offset = "0x2D4")]
	internal unsafe fixed byte m_CameraCullPlanes[96];

	[Token(Token = "0x4000A31")]
	[FieldOffset(Offset = "0x334")]
	private float baseFarDistance;

	[Token(Token = "0x4000A32")]
	[FieldOffset(Offset = "0x338")]
	private Vector3 shadowCullCenter;

	[Token(Token = "0x4000A33")]
	[FieldOffset(Offset = "0x344")]
	internal unsafe fixed float layerCullDistances[32];

	[Token(Token = "0x4000A34")]
	[FieldOffset(Offset = "0x3C4")]
	private int layerCullSpherical;

	[Token(Token = "0x4000A35")]
	[FieldOffset(Offset = "0x3C8")]
	private CoreCameraValues coreCameraValues;

	[Token(Token = "0x4000A36")]
	[FieldOffset(Offset = "0x3D4")]
	private uint cameraType;

	[Token(Token = "0x4000A37")]
	[FieldOffset(Offset = "0x3D8")]
	private int projectionIsOblique;

	[Token(Token = "0x4000A38")]
	[FieldOffset(Offset = "0x3DC")]
	private int isImplicitProjectionMatrix;

	[Token(Token = "0x4000A39")]
	[FieldOffset(Offset = "0x3E0")]
	internal bool useInteractiveLightBakingData;

	[Token(Token = "0x6001590")]
	[Address(RVA = "0x6956B00", Offset = "0x6955B00", VA = "0x6956B00")]
	public Plane GetShadowCullingPlane(int index)
	{
		return default(Plane);
	}

	[Token(Token = "0x6001591")]
	[Address(RVA = "0x6956BE0", Offset = "0x6955BE0", VA = "0x6956BE0")]
	public Plane GetCameraCullingPlane(int index)
	{
		return default(Plane);
	}

	[Token(Token = "0x6001592")]
	[Address(RVA = "0x6956CC0", Offset = "0x6955CC0", VA = "0x6956CC0", Slot = "4")]
	public bool Equals(CameraProperties other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001593")]
	[Address(RVA = "0x6957E60", Offset = "0x6956E60", VA = "0x6957E60", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001594")]
	[Address(RVA = "0x6957F00", Offset = "0x6956F00", VA = "0x6957F00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
