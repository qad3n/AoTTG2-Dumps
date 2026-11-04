// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CameraProperties
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x200039F")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct CameraProperties : IEquatable<CameraProperties>
{
	[Token(Token = "0x4000B37")]
	private const int k_NumLayers = 32;

	[Token(Token = "0x4000B38")]
	[FieldOffset(Offset = "0x0")]
	private Rect screenRect;

	[Token(Token = "0x4000B39")]
	[FieldOffset(Offset = "0x10")]
	private Vector3 viewDir;

	[Token(Token = "0x4000B3A")]
	[FieldOffset(Offset = "0x1C")]
	private float projectionNear;

	[Token(Token = "0x4000B3B")]
	[FieldOffset(Offset = "0x20")]
	private float projectionFar;

	[Token(Token = "0x4000B3C")]
	[FieldOffset(Offset = "0x24")]
	private float cameraNear;

	[Token(Token = "0x4000B3D")]
	[FieldOffset(Offset = "0x28")]
	private float cameraFar;

	[Token(Token = "0x4000B3E")]
	[FieldOffset(Offset = "0x2C")]
	private float cameraAspect;

	[Token(Token = "0x4000B3F")]
	[FieldOffset(Offset = "0x30")]
	private Matrix4x4 cameraToWorld;

	[Token(Token = "0x4000B40")]
	[FieldOffset(Offset = "0x70")]
	private Matrix4x4 actualWorldToClip;

	[Token(Token = "0x4000B41")]
	[FieldOffset(Offset = "0xB0")]
	private Matrix4x4 cameraClipToWorld;

	[Token(Token = "0x4000B42")]
	[FieldOffset(Offset = "0xF0")]
	private Matrix4x4 cameraWorldToClip;

	[Token(Token = "0x4000B43")]
	[FieldOffset(Offset = "0x130")]
	private Matrix4x4 implicitProjection;

	[Token(Token = "0x4000B44")]
	[FieldOffset(Offset = "0x170")]
	private Matrix4x4 stereoWorldToClipLeft;

	[Token(Token = "0x4000B45")]
	[FieldOffset(Offset = "0x1B0")]
	private Matrix4x4 stereoWorldToClipRight;

	[Token(Token = "0x4000B46")]
	[FieldOffset(Offset = "0x1F0")]
	private Matrix4x4 worldToCamera;

	[Token(Token = "0x4000B47")]
	[FieldOffset(Offset = "0x230")]
	private Vector3 up;

	[Token(Token = "0x4000B48")]
	[FieldOffset(Offset = "0x23C")]
	private Vector3 right;

	[Token(Token = "0x4000B49")]
	[FieldOffset(Offset = "0x248")]
	private Vector3 transformDirection;

	[Token(Token = "0x4000B4A")]
	[FieldOffset(Offset = "0x254")]
	private Vector3 cameraEuler;

	[Token(Token = "0x4000B4B")]
	[FieldOffset(Offset = "0x260")]
	private Vector3 velocity;

	[Token(Token = "0x4000B4C")]
	[FieldOffset(Offset = "0x26C")]
	private float farPlaneWorldSpaceLength;

	[Token(Token = "0x4000B4D")]
	[FieldOffset(Offset = "0x270")]
	private uint rendererCount;

	[Token(Token = "0x4000B4E")]
	private const int k_PlaneCount = 6;

	[Token(Token = "0x4000B4F")]
	[FieldOffset(Offset = "0x274")]
	internal unsafe fixed byte m_ShadowCullPlanes[96];

	[Token(Token = "0x4000B50")]
	[FieldOffset(Offset = "0x2D4")]
	internal unsafe fixed byte m_CameraCullPlanes[96];

	[Token(Token = "0x4000B51")]
	[FieldOffset(Offset = "0x334")]
	private float baseFarDistance;

	[Token(Token = "0x4000B52")]
	[FieldOffset(Offset = "0x338")]
	private Vector3 shadowCullCenter;

	[Token(Token = "0x4000B53")]
	[FieldOffset(Offset = "0x344")]
	internal unsafe fixed float layerCullDistances[32];

	[Token(Token = "0x4000B54")]
	[FieldOffset(Offset = "0x3C4")]
	private int layerCullSpherical;

	[Token(Token = "0x4000B55")]
	[FieldOffset(Offset = "0x3C8")]
	private CoreCameraValues coreCameraValues;

	[Token(Token = "0x4000B56")]
	[FieldOffset(Offset = "0x3D4")]
	private uint cameraType;

	[Token(Token = "0x4000B57")]
	[FieldOffset(Offset = "0x3D8")]
	private int projectionIsOblique;

	[Token(Token = "0x4000B58")]
	[FieldOffset(Offset = "0x3DC")]
	private int isImplicitProjectionMatrix;

	[Token(Token = "0x4000B59")]
	[FieldOffset(Offset = "0x3E0")]
	internal bool useInteractiveLightBakingData;

	[Token(Token = "0x60015EB")]
	[Address(RVA = "0x2F63A50", Offset = "0x2F62050", VA = "0x182F63A50")]
	public Plane GetShadowCullingPlane(int index)
	{
		return default(Plane);
	}

	[Token(Token = "0x60015EC")]
	[Address(RVA = "0x2F633F0", Offset = "0x2F619F0", VA = "0x182F633F0")]
	public Plane GetCameraCullingPlane(int index)
	{
		return default(Plane);
	}

	[Token(Token = "0x60015ED")]
	[Address(RVA = "0x2F619B0", Offset = "0x2F5FFB0", VA = "0x182F619B0", Slot = "4")]
	public bool Equals(CameraProperties other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015EE")]
	[Address(RVA = "0x2F632A0", Offset = "0x2F618A0", VA = "0x182F632A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015EF")]
	[Address(RVA = "0x2F634E0", Offset = "0x2F61AE0", VA = "0x182F634E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
