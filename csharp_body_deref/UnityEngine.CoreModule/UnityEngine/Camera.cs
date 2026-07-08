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
		[Address(RVA = "0x4A88DC0", Offset = "0x4A88DC0", VA = "0x4A88DC0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x4A88E90", Offset = "0x4A88E90", VA = "0x4A88E90")]
		set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	[UnityEngine.Bindings.NativeProperty("Far")]
	public float farClipPlane
	{
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x4A88F90", Offset = "0x4A88F90", VA = "0x4A88F90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x4A89060", Offset = "0x4A89060", VA = "0x4A89060")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	[UnityEngine.Bindings.NativeProperty("VerticalFieldOfView")]
	public float fieldOfView
	{
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x4A89160", Offset = "0x4A89160", VA = "0x4A89160")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x4A89230", Offset = "0x4A89230", VA = "0x4A89230")]
		set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public RenderingPath actualRenderingPath
	{
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x4A89330", Offset = "0x4A89330", VA = "0x4A89330")]
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
		[Address(RVA = "0x4A89400", Offset = "0x4A89400", VA = "0x4A89400")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x4A894D0", Offset = "0x4A894D0", VA = "0x4A894D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public bool allowDynamicResolution
	{
		[Token(Token = "0x6000166")]
		[Address(RVA = "0x4A895B0", Offset = "0x4A895B0", VA = "0x4A895B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000044")]
	public float orthographicSize
	{
		[Token(Token = "0x6000167")]
		[Address(RVA = "0x4A89680", Offset = "0x4A89680", VA = "0x4A89680")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000168")]
		[Address(RVA = "0x4A89750", Offset = "0x4A89750", VA = "0x4A89750")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public bool orthographic
	{
		[Token(Token = "0x6000169")]
		[Address(RVA = "0x4A89850", Offset = "0x4A89850", VA = "0x4A89850")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600016A")]
		[Address(RVA = "0x4A89920", Offset = "0x4A89920", VA = "0x4A89920")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public float depth
	{
		[Token(Token = "0x600016B")]
		[Address(RVA = "0x4A89A00", Offset = "0x4A89A00", VA = "0x4A89A00")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000047")]
	public float aspect
	{
		[Token(Token = "0x600016C")]
		[Address(RVA = "0x4A89AD0", Offset = "0x4A89AD0", VA = "0x4A89AD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600016D")]
		[Address(RVA = "0x4A89BA0", Offset = "0x4A89BA0", VA = "0x4A89BA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	public int cullingMask
	{
		[Token(Token = "0x600016E")]
		[Address(RVA = "0x4A89CA0", Offset = "0x4A89CA0", VA = "0x4A89CA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600016F")]
		[Address(RVA = "0x4A89D70", Offset = "0x4A89D70", VA = "0x4A89D70")]
		set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public int eventMask
	{
		[Token(Token = "0x6000170")]
		[Address(RVA = "0x4A89E50", Offset = "0x4A89E50", VA = "0x4A89E50")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000171")]
		[Address(RVA = "0x4A89F20", Offset = "0x4A89F20", VA = "0x4A89F20")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public CameraType cameraType
	{
		[Token(Token = "0x6000172")]
		[Address(RVA = "0x4A8A000", Offset = "0x4A8A000", VA = "0x4A8A000")]
		get
		{
			return default(CameraType);
		}
	}

	[Token(Token = "0x1700004B")]
	public Color backgroundColor
	{
		[Token(Token = "0x6000173")]
		[Address(RVA = "0x4A8A0D0", Offset = "0x4A8A0D0", VA = "0x4A8A0D0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000174")]
		[Address(RVA = "0x4A8A1D0", Offset = "0x4A8A1D0", VA = "0x4A8A1D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public CameraClearFlags clearFlags
	{
		[Token(Token = "0x6000175")]
		[Address(RVA = "0x4A8A2C0", Offset = "0x4A8A2C0", VA = "0x4A8A2C0")]
		get
		{
			return default(CameraClearFlags);
		}
		[Token(Token = "0x6000176")]
		[Address(RVA = "0x4A8A390", Offset = "0x4A8A390", VA = "0x4A8A390")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public DepthTextureMode depthTextureMode
	{
		[Token(Token = "0x6000177")]
		[Address(RVA = "0x4A8A470", Offset = "0x4A8A470", VA = "0x4A8A470")]
		get
		{
			return default(DepthTextureMode);
		}
		[Token(Token = "0x6000178")]
		[Address(RVA = "0x4A8A540", Offset = "0x4A8A540", VA = "0x4A8A540")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public bool usePhysicalProperties
	{
		[Token(Token = "0x6000179")]
		[Address(RVA = "0x4A8A620", Offset = "0x4A8A620", VA = "0x4A8A620")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600017A")]
		[Address(RVA = "0x4A8A6F0", Offset = "0x4A8A6F0", VA = "0x4A8A6F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004F")]
	[UnityEngine.Bindings.NativeProperty("NormalizedViewportRect")]
	public Rect rect
	{
		[Token(Token = "0x600017B")]
		[Address(RVA = "0x4A8A7D0", Offset = "0x4A8A7D0", VA = "0x4A8A7D0")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x600017C")]
		[Address(RVA = "0x4A8A8D0", Offset = "0x4A8A8D0", VA = "0x4A8A8D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	[UnityEngine.Bindings.NativeProperty("ScreenViewportRect")]
	public Rect pixelRect
	{
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x4A8A9C0", Offset = "0x4A8A9C0", VA = "0x4A8A9C0")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x600017E")]
		[Address(RVA = "0x4A8AAC0", Offset = "0x4A8AAC0", VA = "0x4A8AAC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public int pixelWidth
	{
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x4A8ABB0", Offset = "0x4A8ABB0", VA = "0x4A8ABB0")]
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
		[Address(RVA = "0x4A8AC80", Offset = "0x4A8AC80", VA = "0x4A8AC80")]
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
		[Address(RVA = "0x4A8AD50", Offset = "0x4A8AD50", VA = "0x4A8AD50")]
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
		[Address(RVA = "0x4A8AE20", Offset = "0x4A8AE20", VA = "0x4A8AE20")]
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
		[Address(RVA = "0x4A8AEF0", Offset = "0x4A8AEF0", VA = "0x4A8AEF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x4A8AFC0", Offset = "0x4A8AFC0", VA = "0x4A8AFC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	public int targetDisplay
	{
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x4A8B100", Offset = "0x4A8B100", VA = "0x4A8B100")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000057")]
	public Matrix4x4 cameraToWorldMatrix
	{
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x4A8B1D0", Offset = "0x4A8B1D0", VA = "0x4A8B1D0")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x17000058")]
	public Matrix4x4 worldToCameraMatrix
	{
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x4A8B300", Offset = "0x4A8B300", VA = "0x4A8B300")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x17000059")]
	public Matrix4x4 projectionMatrix
	{
		[Token(Token = "0x6000188")]
		[Address(RVA = "0x4A8B430", Offset = "0x4A8B430", VA = "0x4A8B430")]
		get
		{
			return default(Matrix4x4);
		}
		[Token(Token = "0x6000189")]
		[Address(RVA = "0x4A8B560", Offset = "0x4A8B560", VA = "0x4A8B560")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public Matrix4x4 nonJitteredProjectionMatrix
	{
		[Token(Token = "0x600018A")]
		[Address(RVA = "0x4A8B650", Offset = "0x4A8B650", VA = "0x4A8B650")]
		set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	[UnityEngine.Bindings.NativeProperty("UseJitteredProjectionMatrixForTransparent")]
	public bool useJitteredProjectionMatrixForTransparentRendering
	{
		[Token(Token = "0x600018B")]
		[Address(RVA = "0x4A8B740", Offset = "0x4A8B740", VA = "0x4A8B740")]
		set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	public static extern Camera main
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x4A8C270", Offset = "0x4A8C270", VA = "0x4A8C270")]
		[UnityEngine.Bindings.FreeFunction("FindMainCamera")]
		get;
	}

	[Token(Token = "0x1700005D")]
	public static extern Camera current
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x4A8C2A0", Offset = "0x4A8C2A0", VA = "0x4A8C2A0")]
		[UnityEngine.Bindings.FreeFunction("GetCurrentCameraPPtr")]
		get;
	}

	[Token(Token = "0x1700005E")]
	public bool stereoEnabled
	{
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x4A8C2D0", Offset = "0x4A8C2D0", VA = "0x4A8C2D0")]
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
		[Address(RVA = "0x4A8C3A0", Offset = "0x4A8C3A0", VA = "0x4A8C3A0")]
		get
		{
			return default(StereoTargetEyeMask);
		}
	}

	[Token(Token = "0x17000060")]
	public MonoOrStereoscopicEye stereoActiveEye
	{
		[Token(Token = "0x600019E")]
		[Address(RVA = "0x4A8C470", Offset = "0x4A8C470", VA = "0x4A8C470")]
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
		[Address(RVA = "0x4A8CBD0", Offset = "0x4A8CBD0", VA = "0x4A8CBD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x4A88DB0", Offset = "0x4A88DB0", VA = "0x4A88DB0")]
	public Camera()
	{
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x4A8B820", Offset = "0x4A8B820", VA = "0x4A8B820")]
	public void ResetProjectionMatrix()
	{
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x4A8B8F0", Offset = "0x4A8B8F0", VA = "0x4A8B8F0")]
	public Vector3 WorldToScreenPoint(Vector3 position, MonoOrStereoscopicEye eye)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x4A8BA20", Offset = "0x4A8BA20", VA = "0x4A8BA20")]
	public Vector3 WorldToViewportPoint(Vector3 position, MonoOrStereoscopicEye eye)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x4A8BB50", Offset = "0x4A8BB50", VA = "0x4A8BB50")]
	public Vector3 WorldToScreenPoint(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x4A8BB60", Offset = "0x4A8BB60", VA = "0x4A8BB60")]
	public Vector3 WorldToViewportPoint(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x4A8BB70", Offset = "0x4A8BB70", VA = "0x4A8BB70")]
	public Vector3 ScreenToViewportPoint(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x4A8BC80", Offset = "0x4A8BC80", VA = "0x4A8BC80")]
	private Ray ViewportPointToRay(Vector2 pos, MonoOrStereoscopicEye eye)
	{
		return default(Ray);
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x4A8BDB0", Offset = "0x4A8BDB0", VA = "0x4A8BDB0")]
	public Ray ViewportPointToRay(Vector3 pos, MonoOrStereoscopicEye eye)
	{
		return default(Ray);
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x4A8BDF0", Offset = "0x4A8BDF0", VA = "0x4A8BDF0")]
	public Ray ViewportPointToRay(Vector3 pos)
	{
		return default(Ray);
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x4A8BE50", Offset = "0x4A8BE50", VA = "0x4A8BE50")]
	private Ray ScreenPointToRay(Vector2 pos, MonoOrStereoscopicEye eye)
	{
		return default(Ray);
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x4A8BF80", Offset = "0x4A8BF80", VA = "0x4A8BF80")]
	public Ray ScreenPointToRay(Vector3 pos, MonoOrStereoscopicEye eye)
	{
		return default(Ray);
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x4A8BFC0", Offset = "0x4A8BFC0", VA = "0x4A8BFC0")]
	public Ray ScreenPointToRay(Vector3 pos)
	{
		return default(Ray);
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x4A8C020", Offset = "0x4A8C020", VA = "0x4A8C020")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::CalculateViewportRayVectors", HasExplicitThis = true)]
	private void CalculateFrustumCornersInternal(Rect viewport, float z, MonoOrStereoscopicEye eye, [Out] Vector3[] outCorners)
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x4A8C1C0", Offset = "0x4A8C1C0", VA = "0x4A8C1C0")]
	public void CalculateFrustumCorners(Rect viewport, float z, MonoOrStereoscopicEye eye, Vector3[] outCorners)
	{
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x4A8C540", Offset = "0x4A8C540", VA = "0x4A8C540")]
	public Matrix4x4 GetStereoNonJitteredProjectionMatrix(StereoscopicEye eye)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x4A8C670", Offset = "0x4A8C670", VA = "0x4A8C670")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::GetStereoViewMatrix", HasExplicitThis = true)]
	public Matrix4x4 GetStereoViewMatrix(StereoscopicEye eye)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x4A8C7A0", Offset = "0x4A8C7A0", VA = "0x4A8C7A0")]
	public void CopyStereoDeviceProjectionMatrixToNonJittered(StereoscopicEye eye)
	{
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x4A8C880", Offset = "0x4A8C880", VA = "0x4A8C880")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::GetStereoProjectionMatrix", HasExplicitThis = true)]
	public Matrix4x4 GetStereoProjectionMatrix(StereoscopicEye eye)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x4A8C9B0", Offset = "0x4A8C9B0", VA = "0x4A8C9B0")]
	public void SetStereoProjectionMatrix(StereoscopicEye eye, Matrix4x4 matrix)
	{
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x4A8CAA0", Offset = "0x4A8CAA0", VA = "0x4A8CAA0")]
	public void ResetStereoProjectionMatrices()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x4A8CB70", Offset = "0x4A8CB70", VA = "0x4A8CB70")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::GetAllCamerasCount")]
	private static extern int GetAllCamerasCount();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x4A8CBA0", Offset = "0x4A8CBA0", VA = "0x4A8CBA0")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::GetAllCameras")]
	private static extern int GetAllCamerasImpl([Out][UnityEngine.Bindings.NotNull("ArgumentNullException")] Camera[] cam);

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x4A8CC00", Offset = "0x4A8CC00", VA = "0x4A8CC00")]
	public static int GetAllCameras(Camera[] cameras)
	{
		return default(int);
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x4A8CCD0", Offset = "0x4A8CCD0", VA = "0x4A8CCD0")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::Render", HasExplicitThis = true)]
	public void Render()
	{
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x4A8CDA0", Offset = "0x4A8CDA0", VA = "0x4A8CDA0")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::RenderWithShader", HasExplicitThis = true)]
	public void RenderWithShader(Shader shader, string replacementTag)
	{
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x4A8CEF0", Offset = "0x4A8CEF0", VA = "0x4A8CEF0")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::SetupCurrent")]
	public static void SetupCurrent(Camera cur)
	{
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x4A8CFD0", Offset = "0x4A8CFD0", VA = "0x4A8CFD0")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::CopyFrom", HasExplicitThis = true)]
	public void CopyFrom(Camera other)
	{
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x4A8D110", Offset = "0x4A8D110", VA = "0x4A8D110")]
	[UnityEngine.Bindings.NativeName("AddCommandBuffer")]
	private void AddCommandBufferImpl(CameraEvent evt, [UnityEngine.Bindings.NotNull("ArgumentNullException")] CommandBuffer buffer)
	{
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x4A8D200", Offset = "0x4A8D200", VA = "0x4A8D200")]
	[UnityEngine.Bindings.NativeName("RemoveCommandBuffer")]
	private void RemoveCommandBufferImpl(CameraEvent evt, [UnityEngine.Bindings.NotNull("ArgumentNullException")] CommandBuffer buffer)
	{
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x4A8D2F0", Offset = "0x4A8D2F0", VA = "0x4A8D2F0")]
	public void AddCommandBuffer(CameraEvent evt, CommandBuffer buffer)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x4A8D480", Offset = "0x4A8D480", VA = "0x4A8D480")]
	public void RemoveCommandBuffer(CameraEvent evt, CommandBuffer buffer)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x4A8D610", Offset = "0x4A8D610", VA = "0x4A8D610")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void FireOnPreCull(Camera cam)
	{
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x4A8D660", Offset = "0x4A8D660", VA = "0x4A8D660")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void FireOnPreRender(Camera cam)
	{
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x4A8D6B0", Offset = "0x4A8D6B0", VA = "0x4A8D6B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void FireOnPostRender(Camera cam)
	{
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x4A8D700", Offset = "0x4A8D700", VA = "0x4A8D700")]
	public bool TryGetCullingParameters(bool stereoAware, out ScriptableCullingParameters cullingParameters)
	{
		return default(bool);
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x4A8D7C0", Offset = "0x4A8D7C0", VA = "0x4A8D7C0")]
	[UnityEngine.Bindings.FreeFunction("ScriptableRenderPipeline_Bindings::GetCullingParameters_Internal")]
	[UnityEngine.Bindings.NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderPipeline.bindings.h")]
	private static bool GetCullingParameters_Internal(Camera camera, bool stereoAware, out ScriptableCullingParameters cullingParameters, int managedCullingParametersSize)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x4A88E60", Offset = "0x4A88E60", VA = "0x4A88E60")]
	private static extern float get_nearClipPlane_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x4A88F40", Offset = "0x4A88F40", VA = "0x4A88F40")]
	private static extern void set_nearClipPlane_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x4A89030", Offset = "0x4A89030", VA = "0x4A89030")]
	private static extern float get_farClipPlane_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x4A89110", Offset = "0x4A89110", VA = "0x4A89110")]
	private static extern void set_farClipPlane_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x4A89200", Offset = "0x4A89200", VA = "0x4A89200")]
	private static extern float get_fieldOfView_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x4A892E0", Offset = "0x4A892E0", VA = "0x4A892E0")]
	private static extern void set_fieldOfView_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x4A893D0", Offset = "0x4A893D0", VA = "0x4A893D0")]
	private static extern RenderingPath get_actualRenderingPath_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x4A894A0", Offset = "0x4A894A0", VA = "0x4A894A0")]
	private static extern bool get_allowHDR_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x4A89570", Offset = "0x4A89570", VA = "0x4A89570")]
	private static extern void set_allowHDR_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x4A89650", Offset = "0x4A89650", VA = "0x4A89650")]
	private static extern bool get_allowDynamicResolution_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x4A89720", Offset = "0x4A89720", VA = "0x4A89720")]
	private static extern float get_orthographicSize_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x4A89800", Offset = "0x4A89800", VA = "0x4A89800")]
	private static extern void set_orthographicSize_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x4A898F0", Offset = "0x4A898F0", VA = "0x4A898F0")]
	private static extern bool get_orthographic_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x4A899C0", Offset = "0x4A899C0", VA = "0x4A899C0")]
	private static extern void set_orthographic_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x4A89AA0", Offset = "0x4A89AA0", VA = "0x4A89AA0")]
	private static extern float get_depth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x4A89B70", Offset = "0x4A89B70", VA = "0x4A89B70")]
	private static extern float get_aspect_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x4A89C50", Offset = "0x4A89C50", VA = "0x4A89C50")]
	private static extern void set_aspect_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x4A89D40", Offset = "0x4A89D40", VA = "0x4A89D40")]
	private static extern int get_cullingMask_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x4A89E10", Offset = "0x4A89E10", VA = "0x4A89E10")]
	private static extern void set_cullingMask_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x4A89EF0", Offset = "0x4A89EF0", VA = "0x4A89EF0")]
	private static extern int get_eventMask_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x4A89FC0", Offset = "0x4A89FC0", VA = "0x4A89FC0")]
	private static extern void set_eventMask_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x4A8A0A0", Offset = "0x4A8A0A0", VA = "0x4A8A0A0")]
	private static extern CameraType get_cameraType_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x4A8A190", Offset = "0x4A8A190", VA = "0x4A8A190")]
	private static extern void get_backgroundColor_Injected(IntPtr _unity_self, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x4A8A280", Offset = "0x4A8A280", VA = "0x4A8A280")]
	private static extern void set_backgroundColor_Injected(IntPtr _unity_self, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x4A8A360", Offset = "0x4A8A360", VA = "0x4A8A360")]
	private static extern CameraClearFlags get_clearFlags_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x4A8A430", Offset = "0x4A8A430", VA = "0x4A8A430")]
	private static extern void set_clearFlags_Injected(IntPtr _unity_self, CameraClearFlags value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x4A8A510", Offset = "0x4A8A510", VA = "0x4A8A510")]
	private static extern DepthTextureMode get_depthTextureMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x4A8A5E0", Offset = "0x4A8A5E0", VA = "0x4A8A5E0")]
	private static extern void set_depthTextureMode_Injected(IntPtr _unity_self, DepthTextureMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x4A8A6C0", Offset = "0x4A8A6C0", VA = "0x4A8A6C0")]
	private static extern bool get_usePhysicalProperties_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x4A8A790", Offset = "0x4A8A790", VA = "0x4A8A790")]
	private static extern void set_usePhysicalProperties_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x4A8A890", Offset = "0x4A8A890", VA = "0x4A8A890")]
	private static extern void get_rect_Injected(IntPtr _unity_self, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x4A8A980", Offset = "0x4A8A980", VA = "0x4A8A980")]
	private static extern void set_rect_Injected(IntPtr _unity_self, [In] ref Rect value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x4A8AA80", Offset = "0x4A8AA80", VA = "0x4A8AA80")]
	private static extern void get_pixelRect_Injected(IntPtr _unity_self, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x4A8AB70", Offset = "0x4A8AB70", VA = "0x4A8AB70")]
	private static extern void set_pixelRect_Injected(IntPtr _unity_self, [In] ref Rect value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x4A8AC50", Offset = "0x4A8AC50", VA = "0x4A8AC50")]
	private static extern int get_pixelWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x4A8AD20", Offset = "0x4A8AD20", VA = "0x4A8AD20")]
	private static extern int get_pixelHeight_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x4A8ADF0", Offset = "0x4A8ADF0", VA = "0x4A8ADF0")]
	private static extern int get_scaledPixelWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x4A8AEC0", Offset = "0x4A8AEC0", VA = "0x4A8AEC0")]
	private static extern int get_scaledPixelHeight_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x4A8AF90", Offset = "0x4A8AF90", VA = "0x4A8AF90")]
	private static extern RenderTexture get_targetTexture_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x4A8B0C0", Offset = "0x4A8B0C0", VA = "0x4A8B0C0")]
	private static extern void set_targetTexture_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x4A8B1A0", Offset = "0x4A8B1A0", VA = "0x4A8B1A0")]
	private static extern int get_targetDisplay_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x4A8B2C0", Offset = "0x4A8B2C0", VA = "0x4A8B2C0")]
	private static extern void get_cameraToWorldMatrix_Injected(IntPtr _unity_self, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x4A8B3F0", Offset = "0x4A8B3F0", VA = "0x4A8B3F0")]
	private static extern void get_worldToCameraMatrix_Injected(IntPtr _unity_self, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x4A8B520", Offset = "0x4A8B520", VA = "0x4A8B520")]
	private static extern void get_projectionMatrix_Injected(IntPtr _unity_self, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x4A8B610", Offset = "0x4A8B610", VA = "0x4A8B610")]
	private static extern void set_projectionMatrix_Injected(IntPtr _unity_self, [In] ref Matrix4x4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x4A8B700", Offset = "0x4A8B700", VA = "0x4A8B700")]
	private static extern void set_nonJitteredProjectionMatrix_Injected(IntPtr _unity_self, [In] ref Matrix4x4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x4A8B7E0", Offset = "0x4A8B7E0", VA = "0x4A8B7E0")]
	private static extern void set_useJitteredProjectionMatrixForTransparentRendering_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x4A8B8C0", Offset = "0x4A8B8C0", VA = "0x4A8B8C0")]
	private static extern void ResetProjectionMatrix_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x4A8B9D0", Offset = "0x4A8B9D0", VA = "0x4A8B9D0")]
	private static extern void WorldToScreenPoint_Injected(IntPtr _unity_self, [In] ref Vector3 position, MonoOrStereoscopicEye eye, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x4A8BB00", Offset = "0x4A8BB00", VA = "0x4A8BB00")]
	private static extern void WorldToViewportPoint_Injected(IntPtr _unity_self, [In] ref Vector3 position, MonoOrStereoscopicEye eye, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x4A8BC40", Offset = "0x4A8BC40", VA = "0x4A8BC40")]
	private static extern void ScreenToViewportPoint_Injected(IntPtr _unity_self, [In] ref Vector3 position, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x4A8BD60", Offset = "0x4A8BD60", VA = "0x4A8BD60")]
	private static extern void ViewportPointToRay_Injected(IntPtr _unity_self, [In] ref Vector2 pos, MonoOrStereoscopicEye eye, out Ray ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x4A8BF30", Offset = "0x4A8BF30", VA = "0x4A8BF30")]
	private static extern void ScreenPointToRay_Injected(IntPtr _unity_self, [In] ref Vector2 pos, MonoOrStereoscopicEye eye, out Ray ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x4A8C160", Offset = "0x4A8C160", VA = "0x4A8C160")]
	private static extern void CalculateFrustumCornersInternal_Injected(IntPtr _unity_self, [In] ref Rect viewport, float z, MonoOrStereoscopicEye eye, out ManagedSpanWrapper outCorners);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x4A8C370", Offset = "0x4A8C370", VA = "0x4A8C370")]
	private static extern bool get_stereoEnabled_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x4A8C440", Offset = "0x4A8C440", VA = "0x4A8C440")]
	private static extern StereoTargetEyeMask get_stereoTargetEye_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x4A8C510", Offset = "0x4A8C510", VA = "0x4A8C510")]
	private static extern MonoOrStereoscopicEye get_stereoActiveEye_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x4A8C630", Offset = "0x4A8C630", VA = "0x4A8C630")]
	private static extern void GetStereoNonJitteredProjectionMatrix_Injected(IntPtr _unity_self, StereoscopicEye eye, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x4A8C760", Offset = "0x4A8C760", VA = "0x4A8C760")]
	private static extern void GetStereoViewMatrix_Injected(IntPtr _unity_self, StereoscopicEye eye, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x4A8C840", Offset = "0x4A8C840", VA = "0x4A8C840")]
	private static extern void CopyStereoDeviceProjectionMatrixToNonJittered_Injected(IntPtr _unity_self, StereoscopicEye eye);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x4A8C970", Offset = "0x4A8C970", VA = "0x4A8C970")]
	private static extern void GetStereoProjectionMatrix_Injected(IntPtr _unity_self, StereoscopicEye eye, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x4A8CA60", Offset = "0x4A8CA60", VA = "0x4A8CA60")]
	private static extern void SetStereoProjectionMatrix_Injected(IntPtr _unity_self, StereoscopicEye eye, [In] ref Matrix4x4 matrix);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x4A8CB40", Offset = "0x4A8CB40", VA = "0x4A8CB40")]
	private static extern void ResetStereoProjectionMatrices_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x4A8CD70", Offset = "0x4A8CD70", VA = "0x4A8CD70")]
	private static extern void Render_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x4A8CEB0", Offset = "0x4A8CEB0", VA = "0x4A8CEB0")]
	private static extern void RenderWithShader_Injected(IntPtr _unity_self, IntPtr shader, string replacementTag);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x4A8CFA0", Offset = "0x4A8CFA0", VA = "0x4A8CFA0")]
	private static extern void SetupCurrent_Injected(IntPtr cur);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x4A8D0D0", Offset = "0x4A8D0D0", VA = "0x4A8D0D0")]
	private static extern void CopyFrom_Injected(IntPtr _unity_self, IntPtr other);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x4A8D1C0", Offset = "0x4A8D1C0", VA = "0x4A8D1C0")]
	private static extern void AddCommandBufferImpl_Injected(IntPtr _unity_self, CameraEvent evt, CommandBuffer buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x4A8D2B0", Offset = "0x4A8D2B0", VA = "0x4A8D2B0")]
	private static extern void RemoveCommandBufferImpl_Injected(IntPtr _unity_self, CameraEvent evt, CommandBuffer buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x4A8D880", Offset = "0x4A8D880", VA = "0x4A8D880")]
	private static extern bool GetCullingParameters_Internal_Injected(IntPtr camera, bool stereoAware, out ScriptableCullingParameters cullingParameters, int managedCullingParametersSize);
}
