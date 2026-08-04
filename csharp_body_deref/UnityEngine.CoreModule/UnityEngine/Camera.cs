// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Camera
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000083")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Runtime/GfxDevice/GfxDeviceTypes.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/Camera.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Shader.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/CommandBuffer/RenderingCommandBuffer.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/GameObjectUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/RenderTexture.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/RenderManager.h")]
public sealed class Camera : Behaviour
{
	[Token(Token = "0x2000084")]
	public enum StereoscopicEye
	{
		[Token(Token = "0x4000168")]
		Left,
		[Token(Token = "0x4000169")]
		Right
	}

	[Token(Token = "0x2000085")]
	public enum MonoOrStereoscopicEye
	{
		[Token(Token = "0x400016B")]
		Left,
		[Token(Token = "0x400016C")]
		Right,
		[Token(Token = "0x400016D")]
		Mono
	}

	[Token(Token = "0x2000086")]
	public delegate void CameraCallback(Camera cam);

	[Token(Token = "0x4000160")]
	public const float kMinAperture = 0.7f;

	[Token(Token = "0x4000161")]
	public const float kMaxAperture = 32f;

	[Token(Token = "0x4000162")]
	public const int kMinBladeCount = 3;

	[Token(Token = "0x4000163")]
	public const int kMaxBladeCount = 11;

	[Token(Token = "0x4000164")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static CameraCallback onPreCull;

	[Token(Token = "0x4000165")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static CameraCallback onPreRender;

	[Token(Token = "0x4000166")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static CameraCallback onPostRender;

	[Token(Token = "0x1700003E")]
	[UnityEngine.Bindings.NativeProperty("Near")]
	public float nearClipPlane
	{
		[Token(Token = "0x600015D")]
		[Address(RVA = "0x4DB05E0", Offset = "0x4DB05E0", VA = "0x4DB05E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x4DB06B0", Offset = "0x4DB06B0", VA = "0x4DB06B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	[UnityEngine.Bindings.NativeProperty("Far")]
	public float farClipPlane
	{
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x4DB07B0", Offset = "0x4DB07B0", VA = "0x4DB07B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x4DB0880", Offset = "0x4DB0880", VA = "0x4DB0880")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	[UnityEngine.Bindings.NativeProperty("VerticalFieldOfView")]
	public float fieldOfView
	{
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x4DB0980", Offset = "0x4DB0980", VA = "0x4DB0980")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x4DB0A50", Offset = "0x4DB0A50", VA = "0x4DB0A50")]
		set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public RenderingPath actualRenderingPath
	{
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x4DB0B50", Offset = "0x4DB0B50", VA = "0x4DB0B50")]
		[UnityEngine.Bindings.NativeName("CalculateRenderingPath")]
		get
		{
			return default(RenderingPath);
		}
	}

	[Token(Token = "0x17000042")]
	public bool allowHDR
	{
		[Token(Token = "0x6000164")]
		[Address(RVA = "0x4DB0C20", Offset = "0x4DB0C20", VA = "0x4DB0C20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x4DB0CF0", Offset = "0x4DB0CF0", VA = "0x4DB0CF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public bool allowDynamicResolution
	{
		[Token(Token = "0x6000166")]
		[Address(RVA = "0x4DB0DD0", Offset = "0x4DB0DD0", VA = "0x4DB0DD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000044")]
	public float orthographicSize
	{
		[Token(Token = "0x6000167")]
		[Address(RVA = "0x4DB0EA0", Offset = "0x4DB0EA0", VA = "0x4DB0EA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000168")]
		[Address(RVA = "0x4DB0F70", Offset = "0x4DB0F70", VA = "0x4DB0F70")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public bool orthographic
	{
		[Token(Token = "0x6000169")]
		[Address(RVA = "0x4DB1070", Offset = "0x4DB1070", VA = "0x4DB1070")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600016A")]
		[Address(RVA = "0x4DB1140", Offset = "0x4DB1140", VA = "0x4DB1140")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public float depth
	{
		[Token(Token = "0x600016B")]
		[Address(RVA = "0x4DB1220", Offset = "0x4DB1220", VA = "0x4DB1220")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000047")]
	public float aspect
	{
		[Token(Token = "0x600016C")]
		[Address(RVA = "0x4DB12F0", Offset = "0x4DB12F0", VA = "0x4DB12F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600016D")]
		[Address(RVA = "0x4DB13C0", Offset = "0x4DB13C0", VA = "0x4DB13C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	public int cullingMask
	{
		[Token(Token = "0x600016E")]
		[Address(RVA = "0x4DB14C0", Offset = "0x4DB14C0", VA = "0x4DB14C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600016F")]
		[Address(RVA = "0x4DB1590", Offset = "0x4DB1590", VA = "0x4DB1590")]
		set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public int eventMask
	{
		[Token(Token = "0x6000170")]
		[Address(RVA = "0x4DB1670", Offset = "0x4DB1670", VA = "0x4DB1670")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000171")]
		[Address(RVA = "0x4DB1740", Offset = "0x4DB1740", VA = "0x4DB1740")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public CameraType cameraType
	{
		[Token(Token = "0x6000172")]
		[Address(RVA = "0x4DB1820", Offset = "0x4DB1820", VA = "0x4DB1820")]
		get
		{
			return default(CameraType);
		}
	}

	[Token(Token = "0x1700004B")]
	public Color backgroundColor
	{
		[Token(Token = "0x6000173")]
		[Address(RVA = "0x4DB18F0", Offset = "0x4DB18F0", VA = "0x4DB18F0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000174")]
		[Address(RVA = "0x4DB19F0", Offset = "0x4DB19F0", VA = "0x4DB19F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public CameraClearFlags clearFlags
	{
		[Token(Token = "0x6000175")]
		[Address(RVA = "0x4DB1AE0", Offset = "0x4DB1AE0", VA = "0x4DB1AE0")]
		get
		{
			return default(CameraClearFlags);
		}
		[Token(Token = "0x6000176")]
		[Address(RVA = "0x4DB1BB0", Offset = "0x4DB1BB0", VA = "0x4DB1BB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public DepthTextureMode depthTextureMode
	{
		[Token(Token = "0x6000177")]
		[Address(RVA = "0x4DB1C90", Offset = "0x4DB1C90", VA = "0x4DB1C90")]
		get
		{
			return default(DepthTextureMode);
		}
		[Token(Token = "0x6000178")]
		[Address(RVA = "0x4DB1D60", Offset = "0x4DB1D60", VA = "0x4DB1D60")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public bool usePhysicalProperties
	{
		[Token(Token = "0x6000179")]
		[Address(RVA = "0x4DB1E40", Offset = "0x4DB1E40", VA = "0x4DB1E40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600017A")]
		[Address(RVA = "0x4DB1F10", Offset = "0x4DB1F10", VA = "0x4DB1F10")]
		set
		{
		}
	}

	[Token(Token = "0x1700004F")]
	[UnityEngine.Bindings.NativeProperty("NormalizedViewportRect")]
	public Rect rect
	{
		[Token(Token = "0x600017B")]
		[Address(RVA = "0x4DB1FF0", Offset = "0x4DB1FF0", VA = "0x4DB1FF0")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x600017C")]
		[Address(RVA = "0x4DB20F0", Offset = "0x4DB20F0", VA = "0x4DB20F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	[UnityEngine.Bindings.NativeProperty("ScreenViewportRect")]
	public Rect pixelRect
	{
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x4DB21E0", Offset = "0x4DB21E0", VA = "0x4DB21E0")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x600017E")]
		[Address(RVA = "0x4DB22E0", Offset = "0x4DB22E0", VA = "0x4DB22E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public int pixelWidth
	{
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x4DB23D0", Offset = "0x4DB23D0", VA = "0x4DB23D0")]
		[UnityEngine.Bindings.FreeFunction("CameraScripting::GetPixelWidth", HasExplicitThis = true)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000052")]
	public int pixelHeight
	{
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x4DB24A0", Offset = "0x4DB24A0", VA = "0x4DB24A0")]
		[UnityEngine.Bindings.FreeFunction("CameraScripting::GetPixelHeight", HasExplicitThis = true)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000053")]
	public int scaledPixelWidth
	{
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x4DB2570", Offset = "0x4DB2570", VA = "0x4DB2570")]
		[UnityEngine.Bindings.FreeFunction("CameraScripting::GetScaledPixelWidth", HasExplicitThis = true)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000054")]
	public int scaledPixelHeight
	{
		[Token(Token = "0x6000182")]
		[Address(RVA = "0x4DB2640", Offset = "0x4DB2640", VA = "0x4DB2640")]
		[UnityEngine.Bindings.FreeFunction("CameraScripting::GetScaledPixelHeight", HasExplicitThis = true)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000055")]
	public RenderTexture targetTexture
	{
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x4DB2710", Offset = "0x4DB2710", VA = "0x4DB2710")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x4DB27E0", Offset = "0x4DB27E0", VA = "0x4DB27E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	public int targetDisplay
	{
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x4DB2920", Offset = "0x4DB2920", VA = "0x4DB2920")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000057")]
	public Matrix4x4 cameraToWorldMatrix
	{
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x4DB29F0", Offset = "0x4DB29F0", VA = "0x4DB29F0")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x17000058")]
	public Matrix4x4 worldToCameraMatrix
	{
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x4DB2B20", Offset = "0x4DB2B20", VA = "0x4DB2B20")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x17000059")]
	public Matrix4x4 projectionMatrix
	{
		[Token(Token = "0x6000188")]
		[Address(RVA = "0x4DB2C50", Offset = "0x4DB2C50", VA = "0x4DB2C50")]
		get
		{
			return default(Matrix4x4);
		}
		[Token(Token = "0x6000189")]
		[Address(RVA = "0x4DB2D80", Offset = "0x4DB2D80", VA = "0x4DB2D80")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public Matrix4x4 nonJitteredProjectionMatrix
	{
		[Token(Token = "0x600018A")]
		[Address(RVA = "0x4DB2E70", Offset = "0x4DB2E70", VA = "0x4DB2E70")]
		set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	[UnityEngine.Bindings.NativeProperty("UseJitteredProjectionMatrixForTransparent")]
	public bool useJitteredProjectionMatrixForTransparentRendering
	{
		[Token(Token = "0x600018B")]
		[Address(RVA = "0x4DB2F60", Offset = "0x4DB2F60", VA = "0x4DB2F60")]
		set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	public static extern Camera main
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x4DB3A90", Offset = "0x4DB3A90", VA = "0x4DB3A90")]
		[UnityEngine.Bindings.FreeFunction("FindMainCamera")]
		get;
	}

	[Token(Token = "0x1700005D")]
	public static extern Camera current
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x4DB3AC0", Offset = "0x4DB3AC0", VA = "0x4DB3AC0")]
		[UnityEngine.Bindings.FreeFunction("GetCurrentCameraPPtr")]
		get;
	}

	[Token(Token = "0x1700005E")]
	public bool stereoEnabled
	{
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x4DB3AF0", Offset = "0x4DB3AF0", VA = "0x4DB3AF0")]
		[UnityEngine.Bindings.NativeMethod("GetStereoEnabledForBuiltInOrSRP")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005F")]
	public StereoTargetEyeMask stereoTargetEye
	{
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x4DB3BC0", Offset = "0x4DB3BC0", VA = "0x4DB3BC0")]
		get
		{
			return default(StereoTargetEyeMask);
		}
	}

	[Token(Token = "0x17000060")]
	public MonoOrStereoscopicEye stereoActiveEye
	{
		[Token(Token = "0x600019E")]
		[Address(RVA = "0x4DB3C90", Offset = "0x4DB3C90", VA = "0x4DB3C90")]
		[UnityEngine.Bindings.FreeFunction("CameraScripting::GetStereoActiveEye", HasExplicitThis = true)]
		get
		{
			return default(MonoOrStereoscopicEye);
		}
	}

	[Token(Token = "0x17000061")]
	public static int allCamerasCount
	{
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x4DB43F0", Offset = "0x4DB43F0", VA = "0x4DB43F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x4DB05D0", Offset = "0x4DB05D0", VA = "0x4DB05D0")]
	public Camera()
	{
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x4DB3040", Offset = "0x4DB3040", VA = "0x4DB3040")]
	public void ResetProjectionMatrix()
	{
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x4DB3110", Offset = "0x4DB3110", VA = "0x4DB3110")]
	public Vector3 WorldToScreenPoint(Vector3 position, MonoOrStereoscopicEye eye)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x4DB3240", Offset = "0x4DB3240", VA = "0x4DB3240")]
	public Vector3 WorldToViewportPoint(Vector3 position, MonoOrStereoscopicEye eye)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x4DB3370", Offset = "0x4DB3370", VA = "0x4DB3370")]
	public Vector3 WorldToScreenPoint(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x4DB3380", Offset = "0x4DB3380", VA = "0x4DB3380")]
	public Vector3 WorldToViewportPoint(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x4DB3390", Offset = "0x4DB3390", VA = "0x4DB3390")]
	public Vector3 ScreenToViewportPoint(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x4DB34A0", Offset = "0x4DB34A0", VA = "0x4DB34A0")]
	private Ray ViewportPointToRay(Vector2 pos, MonoOrStereoscopicEye eye)
	{
		return default(Ray);
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x4DB35D0", Offset = "0x4DB35D0", VA = "0x4DB35D0")]
	public Ray ViewportPointToRay(Vector3 pos, MonoOrStereoscopicEye eye)
	{
		return default(Ray);
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x4DB3610", Offset = "0x4DB3610", VA = "0x4DB3610")]
	public Ray ViewportPointToRay(Vector3 pos)
	{
		return default(Ray);
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x4DB3670", Offset = "0x4DB3670", VA = "0x4DB3670")]
	private Ray ScreenPointToRay(Vector2 pos, MonoOrStereoscopicEye eye)
	{
		return default(Ray);
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x4DB37A0", Offset = "0x4DB37A0", VA = "0x4DB37A0")]
	public Ray ScreenPointToRay(Vector3 pos, MonoOrStereoscopicEye eye)
	{
		return default(Ray);
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x4DB37E0", Offset = "0x4DB37E0", VA = "0x4DB37E0")]
	public Ray ScreenPointToRay(Vector3 pos)
	{
		return default(Ray);
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x4DB3840", Offset = "0x4DB3840", VA = "0x4DB3840")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::CalculateViewportRayVectors", HasExplicitThis = true)]
	private void CalculateFrustumCornersInternal(Rect viewport, float z, MonoOrStereoscopicEye eye, [Out] Vector3[] outCorners)
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x4DB39E0", Offset = "0x4DB39E0", VA = "0x4DB39E0")]
	public void CalculateFrustumCorners(Rect viewport, float z, MonoOrStereoscopicEye eye, Vector3[] outCorners)
	{
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x4DB3D60", Offset = "0x4DB3D60", VA = "0x4DB3D60")]
	public Matrix4x4 GetStereoNonJitteredProjectionMatrix(StereoscopicEye eye)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x4DB3E90", Offset = "0x4DB3E90", VA = "0x4DB3E90")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::GetStereoViewMatrix", HasExplicitThis = true)]
	public Matrix4x4 GetStereoViewMatrix(StereoscopicEye eye)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x4DB3FC0", Offset = "0x4DB3FC0", VA = "0x4DB3FC0")]
	public void CopyStereoDeviceProjectionMatrixToNonJittered(StereoscopicEye eye)
	{
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x4DB40A0", Offset = "0x4DB40A0", VA = "0x4DB40A0")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::GetStereoProjectionMatrix", HasExplicitThis = true)]
	public Matrix4x4 GetStereoProjectionMatrix(StereoscopicEye eye)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x4DB41D0", Offset = "0x4DB41D0", VA = "0x4DB41D0")]
	public void SetStereoProjectionMatrix(StereoscopicEye eye, Matrix4x4 matrix)
	{
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x4DB42C0", Offset = "0x4DB42C0", VA = "0x4DB42C0")]
	public void ResetStereoProjectionMatrices()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x4DB4390", Offset = "0x4DB4390", VA = "0x4DB4390")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::GetAllCamerasCount")]
	private static extern int GetAllCamerasCount();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x4DB43C0", Offset = "0x4DB43C0", VA = "0x4DB43C0")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::GetAllCameras")]
	private static extern int GetAllCamerasImpl([Out][UnityEngine.Bindings.NotNull("ArgumentNullException")] Camera[] cam);

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x4DB4420", Offset = "0x4DB4420", VA = "0x4DB4420")]
	public static int GetAllCameras(Camera[] cameras)
	{
		return default(int);
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x4DB44F0", Offset = "0x4DB44F0", VA = "0x4DB44F0")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::Render", HasExplicitThis = true)]
	public void Render()
	{
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x4DB45C0", Offset = "0x4DB45C0", VA = "0x4DB45C0")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::RenderWithShader", HasExplicitThis = true)]
	public void RenderWithShader(Shader shader, string replacementTag)
	{
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x4DB4710", Offset = "0x4DB4710", VA = "0x4DB4710")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::SetupCurrent")]
	public static void SetupCurrent(Camera cur)
	{
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x4DB47F0", Offset = "0x4DB47F0", VA = "0x4DB47F0")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::CopyFrom", HasExplicitThis = true)]
	public void CopyFrom(Camera other)
	{
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x4DB4930", Offset = "0x4DB4930", VA = "0x4DB4930")]
	[UnityEngine.Bindings.NativeName("AddCommandBuffer")]
	private void AddCommandBufferImpl(CameraEvent evt, [UnityEngine.Bindings.NotNull("ArgumentNullException")] CommandBuffer buffer)
	{
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x4DB4A20", Offset = "0x4DB4A20", VA = "0x4DB4A20")]
	[UnityEngine.Bindings.NativeName("RemoveCommandBuffer")]
	private void RemoveCommandBufferImpl(CameraEvent evt, [UnityEngine.Bindings.NotNull("ArgumentNullException")] CommandBuffer buffer)
	{
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x4DB4B10", Offset = "0x4DB4B10", VA = "0x4DB4B10")]
	public void AddCommandBuffer(CameraEvent evt, CommandBuffer buffer)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x4DB4CA0", Offset = "0x4DB4CA0", VA = "0x4DB4CA0")]
	public void RemoveCommandBuffer(CameraEvent evt, CommandBuffer buffer)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x4DB4E30", Offset = "0x4DB4E30", VA = "0x4DB4E30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void FireOnPreCull(Camera cam)
	{
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x4DB4E80", Offset = "0x4DB4E80", VA = "0x4DB4E80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void FireOnPreRender(Camera cam)
	{
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x4DB4ED0", Offset = "0x4DB4ED0", VA = "0x4DB4ED0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void FireOnPostRender(Camera cam)
	{
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x4DB4F20", Offset = "0x4DB4F20", VA = "0x4DB4F20")]
	public bool TryGetCullingParameters(bool stereoAware, out ScriptableCullingParameters cullingParameters)
	{
		return default(bool);
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x4DB4FE0", Offset = "0x4DB4FE0", VA = "0x4DB4FE0")]
	[UnityEngine.Bindings.FreeFunction("ScriptableRenderPipeline_Bindings::GetCullingParameters_Internal")]
	[UnityEngine.Bindings.NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderPipeline.bindings.h")]
	private static bool GetCullingParameters_Internal(Camera camera, bool stereoAware, out ScriptableCullingParameters cullingParameters, int managedCullingParametersSize)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x4DB0680", Offset = "0x4DB0680", VA = "0x4DB0680")]
	private static extern float get_nearClipPlane_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x4DB0760", Offset = "0x4DB0760", VA = "0x4DB0760")]
	private static extern void set_nearClipPlane_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x4DB0850", Offset = "0x4DB0850", VA = "0x4DB0850")]
	private static extern float get_farClipPlane_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x4DB0930", Offset = "0x4DB0930", VA = "0x4DB0930")]
	private static extern void set_farClipPlane_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x4DB0A20", Offset = "0x4DB0A20", VA = "0x4DB0A20")]
	private static extern float get_fieldOfView_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x4DB0B00", Offset = "0x4DB0B00", VA = "0x4DB0B00")]
	private static extern void set_fieldOfView_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x4DB0BF0", Offset = "0x4DB0BF0", VA = "0x4DB0BF0")]
	private static extern RenderingPath get_actualRenderingPath_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x4DB0CC0", Offset = "0x4DB0CC0", VA = "0x4DB0CC0")]
	private static extern bool get_allowHDR_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x4DB0D90", Offset = "0x4DB0D90", VA = "0x4DB0D90")]
	private static extern void set_allowHDR_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x4DB0E70", Offset = "0x4DB0E70", VA = "0x4DB0E70")]
	private static extern bool get_allowDynamicResolution_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x4DB0F40", Offset = "0x4DB0F40", VA = "0x4DB0F40")]
	private static extern float get_orthographicSize_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x4DB1020", Offset = "0x4DB1020", VA = "0x4DB1020")]
	private static extern void set_orthographicSize_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x4DB1110", Offset = "0x4DB1110", VA = "0x4DB1110")]
	private static extern bool get_orthographic_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x4DB11E0", Offset = "0x4DB11E0", VA = "0x4DB11E0")]
	private static extern void set_orthographic_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x4DB12C0", Offset = "0x4DB12C0", VA = "0x4DB12C0")]
	private static extern float get_depth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x4DB1390", Offset = "0x4DB1390", VA = "0x4DB1390")]
	private static extern float get_aspect_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x4DB1470", Offset = "0x4DB1470", VA = "0x4DB1470")]
	private static extern void set_aspect_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x4DB1560", Offset = "0x4DB1560", VA = "0x4DB1560")]
	private static extern int get_cullingMask_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x4DB1630", Offset = "0x4DB1630", VA = "0x4DB1630")]
	private static extern void set_cullingMask_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x4DB1710", Offset = "0x4DB1710", VA = "0x4DB1710")]
	private static extern int get_eventMask_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x4DB17E0", Offset = "0x4DB17E0", VA = "0x4DB17E0")]
	private static extern void set_eventMask_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x4DB18C0", Offset = "0x4DB18C0", VA = "0x4DB18C0")]
	private static extern CameraType get_cameraType_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x4DB19B0", Offset = "0x4DB19B0", VA = "0x4DB19B0")]
	private static extern void get_backgroundColor_Injected(IntPtr _unity_self, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x4DB1AA0", Offset = "0x4DB1AA0", VA = "0x4DB1AA0")]
	private static extern void set_backgroundColor_Injected(IntPtr _unity_self, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x4DB1B80", Offset = "0x4DB1B80", VA = "0x4DB1B80")]
	private static extern CameraClearFlags get_clearFlags_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x4DB1C50", Offset = "0x4DB1C50", VA = "0x4DB1C50")]
	private static extern void set_clearFlags_Injected(IntPtr _unity_self, CameraClearFlags value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x4DB1D30", Offset = "0x4DB1D30", VA = "0x4DB1D30")]
	private static extern DepthTextureMode get_depthTextureMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x4DB1E00", Offset = "0x4DB1E00", VA = "0x4DB1E00")]
	private static extern void set_depthTextureMode_Injected(IntPtr _unity_self, DepthTextureMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x4DB1EE0", Offset = "0x4DB1EE0", VA = "0x4DB1EE0")]
	private static extern bool get_usePhysicalProperties_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x4DB1FB0", Offset = "0x4DB1FB0", VA = "0x4DB1FB0")]
	private static extern void set_usePhysicalProperties_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x4DB20B0", Offset = "0x4DB20B0", VA = "0x4DB20B0")]
	private static extern void get_rect_Injected(IntPtr _unity_self, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x4DB21A0", Offset = "0x4DB21A0", VA = "0x4DB21A0")]
	private static extern void set_rect_Injected(IntPtr _unity_self, [In] ref Rect value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x4DB22A0", Offset = "0x4DB22A0", VA = "0x4DB22A0")]
	private static extern void get_pixelRect_Injected(IntPtr _unity_self, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x4DB2390", Offset = "0x4DB2390", VA = "0x4DB2390")]
	private static extern void set_pixelRect_Injected(IntPtr _unity_self, [In] ref Rect value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x4DB2470", Offset = "0x4DB2470", VA = "0x4DB2470")]
	private static extern int get_pixelWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x4DB2540", Offset = "0x4DB2540", VA = "0x4DB2540")]
	private static extern int get_pixelHeight_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x4DB2610", Offset = "0x4DB2610", VA = "0x4DB2610")]
	private static extern int get_scaledPixelWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x4DB26E0", Offset = "0x4DB26E0", VA = "0x4DB26E0")]
	private static extern int get_scaledPixelHeight_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x4DB27B0", Offset = "0x4DB27B0", VA = "0x4DB27B0")]
	private static extern RenderTexture get_targetTexture_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x4DB28E0", Offset = "0x4DB28E0", VA = "0x4DB28E0")]
	private static extern void set_targetTexture_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x4DB29C0", Offset = "0x4DB29C0", VA = "0x4DB29C0")]
	private static extern int get_targetDisplay_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x4DB2AE0", Offset = "0x4DB2AE0", VA = "0x4DB2AE0")]
	private static extern void get_cameraToWorldMatrix_Injected(IntPtr _unity_self, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x4DB2C10", Offset = "0x4DB2C10", VA = "0x4DB2C10")]
	private static extern void get_worldToCameraMatrix_Injected(IntPtr _unity_self, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x4DB2D40", Offset = "0x4DB2D40", VA = "0x4DB2D40")]
	private static extern void get_projectionMatrix_Injected(IntPtr _unity_self, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x4DB2E30", Offset = "0x4DB2E30", VA = "0x4DB2E30")]
	private static extern void set_projectionMatrix_Injected(IntPtr _unity_self, [In] ref Matrix4x4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x4DB2F20", Offset = "0x4DB2F20", VA = "0x4DB2F20")]
	private static extern void set_nonJitteredProjectionMatrix_Injected(IntPtr _unity_self, [In] ref Matrix4x4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x4DB3000", Offset = "0x4DB3000", VA = "0x4DB3000")]
	private static extern void set_useJitteredProjectionMatrixForTransparentRendering_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x4DB30E0", Offset = "0x4DB30E0", VA = "0x4DB30E0")]
	private static extern void ResetProjectionMatrix_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x4DB31F0", Offset = "0x4DB31F0", VA = "0x4DB31F0")]
	private static extern void WorldToScreenPoint_Injected(IntPtr _unity_self, [In] ref Vector3 position, MonoOrStereoscopicEye eye, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x4DB3320", Offset = "0x4DB3320", VA = "0x4DB3320")]
	private static extern void WorldToViewportPoint_Injected(IntPtr _unity_self, [In] ref Vector3 position, MonoOrStereoscopicEye eye, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x4DB3460", Offset = "0x4DB3460", VA = "0x4DB3460")]
	private static extern void ScreenToViewportPoint_Injected(IntPtr _unity_self, [In] ref Vector3 position, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x4DB3580", Offset = "0x4DB3580", VA = "0x4DB3580")]
	private static extern void ViewportPointToRay_Injected(IntPtr _unity_self, [In] ref Vector2 pos, MonoOrStereoscopicEye eye, out Ray ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x4DB3750", Offset = "0x4DB3750", VA = "0x4DB3750")]
	private static extern void ScreenPointToRay_Injected(IntPtr _unity_self, [In] ref Vector2 pos, MonoOrStereoscopicEye eye, out Ray ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x4DB3980", Offset = "0x4DB3980", VA = "0x4DB3980")]
	private static extern void CalculateFrustumCornersInternal_Injected(IntPtr _unity_self, [In] ref Rect viewport, float z, MonoOrStereoscopicEye eye, out ManagedSpanWrapper outCorners);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x4DB3B90", Offset = "0x4DB3B90", VA = "0x4DB3B90")]
	private static extern bool get_stereoEnabled_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x4DB3C60", Offset = "0x4DB3C60", VA = "0x4DB3C60")]
	private static extern StereoTargetEyeMask get_stereoTargetEye_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x4DB3D30", Offset = "0x4DB3D30", VA = "0x4DB3D30")]
	private static extern MonoOrStereoscopicEye get_stereoActiveEye_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x4DB3E50", Offset = "0x4DB3E50", VA = "0x4DB3E50")]
	private static extern void GetStereoNonJitteredProjectionMatrix_Injected(IntPtr _unity_self, StereoscopicEye eye, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x4DB3F80", Offset = "0x4DB3F80", VA = "0x4DB3F80")]
	private static extern void GetStereoViewMatrix_Injected(IntPtr _unity_self, StereoscopicEye eye, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x4DB4060", Offset = "0x4DB4060", VA = "0x4DB4060")]
	private static extern void CopyStereoDeviceProjectionMatrixToNonJittered_Injected(IntPtr _unity_self, StereoscopicEye eye);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x4DB4190", Offset = "0x4DB4190", VA = "0x4DB4190")]
	private static extern void GetStereoProjectionMatrix_Injected(IntPtr _unity_self, StereoscopicEye eye, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x4DB4280", Offset = "0x4DB4280", VA = "0x4DB4280")]
	private static extern void SetStereoProjectionMatrix_Injected(IntPtr _unity_self, StereoscopicEye eye, [In] ref Matrix4x4 matrix);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x4DB4360", Offset = "0x4DB4360", VA = "0x4DB4360")]
	private static extern void ResetStereoProjectionMatrices_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x4DB4590", Offset = "0x4DB4590", VA = "0x4DB4590")]
	private static extern void Render_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x4DB46D0", Offset = "0x4DB46D0", VA = "0x4DB46D0")]
	private static extern void RenderWithShader_Injected(IntPtr _unity_self, IntPtr shader, string replacementTag);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x4DB47C0", Offset = "0x4DB47C0", VA = "0x4DB47C0")]
	private static extern void SetupCurrent_Injected(IntPtr cur);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x4DB48F0", Offset = "0x4DB48F0", VA = "0x4DB48F0")]
	private static extern void CopyFrom_Injected(IntPtr _unity_self, IntPtr other);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x4DB49E0", Offset = "0x4DB49E0", VA = "0x4DB49E0")]
	private static extern void AddCommandBufferImpl_Injected(IntPtr _unity_self, CameraEvent evt, CommandBuffer buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x4DB4AD0", Offset = "0x4DB4AD0", VA = "0x4DB4AD0")]
	private static extern void RemoveCommandBufferImpl_Injected(IntPtr _unity_self, CameraEvent evt, CommandBuffer buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x4DB50A0", Offset = "0x4DB50A0", VA = "0x4DB50A0")]
	private static extern bool GetCullingParameters_Internal_Injected(IntPtr camera, bool stereoAware, out ScriptableCullingParameters cullingParameters, int managedCullingParametersSize);
}
