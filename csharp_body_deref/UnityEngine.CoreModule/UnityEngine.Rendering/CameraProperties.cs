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

[Token(Token = "0x20002DA")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct CameraProperties : IEquatable<CameraProperties>
{
	[Token(Token = "0x400084A")]
	[FieldOffset(Offset = "0x0")]
	private Rect screenRect;

	[Token(Token = "0x400084B")]
	[FieldOffset(Offset = "0x10")]
	private Vector3 viewDir;

	[Token(Token = "0x400084C")]
	[FieldOffset(Offset = "0x1C")]
	private float projectionNear;

	[Token(Token = "0x400084D")]
	[FieldOffset(Offset = "0x20")]
	private float projectionFar;

	[Token(Token = "0x400084E")]
	[FieldOffset(Offset = "0x24")]
	private float cameraNear;

	[Token(Token = "0x400084F")]
	[FieldOffset(Offset = "0x28")]
	private float cameraFar;

	[Token(Token = "0x4000850")]
	[FieldOffset(Offset = "0x2C")]
	private float cameraAspect;

	[Token(Token = "0x4000851")]
	[FieldOffset(Offset = "0x30")]
	private Matrix4x4 cameraToWorld;

	[Token(Token = "0x4000852")]
	[FieldOffset(Offset = "0x70")]
	private Matrix4x4 actualWorldToClip;

	[Token(Token = "0x4000853")]
	[FieldOffset(Offset = "0xB0")]
	private Matrix4x4 cameraClipToWorld;

	[Token(Token = "0x4000854")]
	[FieldOffset(Offset = "0xF0")]
	private Matrix4x4 cameraWorldToClip;

	[Token(Token = "0x4000855")]
	[FieldOffset(Offset = "0x130")]
	private Matrix4x4 implicitProjection;

	[Token(Token = "0x4000856")]
	[FieldOffset(Offset = "0x170")]
	private Matrix4x4 stereoWorldToClipLeft;

	[Token(Token = "0x4000857")]
	[FieldOffset(Offset = "0x1B0")]
	private Matrix4x4 stereoWorldToClipRight;

	[Token(Token = "0x4000858")]
	[FieldOffset(Offset = "0x1F0")]
	private Matrix4x4 worldToCamera;

	[Token(Token = "0x4000859")]
	[FieldOffset(Offset = "0x230")]
	private Vector3 up;

	[Token(Token = "0x400085A")]
	[FieldOffset(Offset = "0x23C")]
	private Vector3 right;

	[Token(Token = "0x400085B")]
	[FieldOffset(Offset = "0x248")]
	private Vector3 transformDirection;

	[Token(Token = "0x400085C")]
	[FieldOffset(Offset = "0x254")]
	private Vector3 cameraEuler;

	[Token(Token = "0x400085D")]
	[FieldOffset(Offset = "0x260")]
	private Vector3 velocity;

	[Token(Token = "0x400085E")]
	[FieldOffset(Offset = "0x26C")]
	private float farPlaneWorldSpaceLength;

	[Token(Token = "0x400085F")]
	[FieldOffset(Offset = "0x270")]
	private uint rendererCount;

	[Token(Token = "0x4000860")]
	[FieldOffset(Offset = "0x274")]
	internal unsafe fixed byte m_ShadowCullPlanes[96];

	[Token(Token = "0x4000861")]
	[FieldOffset(Offset = "0x2D4")]
	internal unsafe fixed byte m_CameraCullPlanes[96];

	[Token(Token = "0x4000862")]
	[FieldOffset(Offset = "0x334")]
	private float baseFarDistance;

	[Token(Token = "0x4000863")]
	[FieldOffset(Offset = "0x338")]
	private Vector3 shadowCullCenter;

	[Token(Token = "0x4000864")]
	[FieldOffset(Offset = "0x344")]
	internal unsafe fixed float layerCullDistances[32];

	[Token(Token = "0x4000865")]
	[FieldOffset(Offset = "0x3C4")]
	private int layerCullSpherical;

	[Token(Token = "0x4000866")]
	[FieldOffset(Offset = "0x3C8")]
	private CoreCameraValues coreCameraValues;

	[Token(Token = "0x4000867")]
	[FieldOffset(Offset = "0x3D4")]
	private uint cameraType;

	[Token(Token = "0x4000868")]
	[FieldOffset(Offset = "0x3D8")]
	private int projectionIsOblique;

	[Token(Token = "0x4000869")]
	[FieldOffset(Offset = "0x3DC")]
	private int isImplicitProjectionMatrix;

	[Token(Token = "0x600101A")]
	[Address(RVA = "0x4E29970", Offset = "0x4E29970", VA = "0x4E29970")]
	public Plane GetShadowCullingPlane(int index)
	{
		return default(Plane);
	}

	[Token(Token = "0x600101B")]
	[Address(RVA = "0x4E29A50", Offset = "0x4E29A50", VA = "0x4E29A50")]
	public Plane GetCameraCullingPlane(int index)
	{
		return default(Plane);
	}

	[Token(Token = "0x600101C")]
	[Address(RVA = "0x4E29B30", Offset = "0x4E29B30", VA = "0x4E29B30", Slot = "4")]
	public bool Equals(CameraProperties other)
	{
		return default(bool);
	}

	[Token(Token = "0x600101D")]
	[Address(RVA = "0x4E2BAB0", Offset = "0x4E2BAB0", VA = "0x4E2BAB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600101E")]
	[Address(RVA = "0x4E2BB40", Offset = "0x4E2BB40", VA = "0x4E2BB40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
