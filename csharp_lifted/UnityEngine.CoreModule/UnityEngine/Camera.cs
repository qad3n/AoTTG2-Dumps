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

[Token(Token = "0x20000A0")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/GameObjectUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/RenderManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/RenderTexture.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Shader.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/GfxDevice/GfxDeviceTypes.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/CommandBuffer/RenderingCommandBuffer.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/Camera.h")]
[RequireComponent(typeof(Transform))]
public sealed class Camera : Behaviour
{
	[Token(Token = "0x20000A1")]
	public enum StereoscopicEye
	{
		[Token(Token = "0x40001B5")]
		Left,
		[Token(Token = "0x40001B6")]
		Right
	}

	[Token(Token = "0x20000A2")]
	public enum MonoOrStereoscopicEye
	{
		[Token(Token = "0x40001B8")]
		Left,
		[Token(Token = "0x40001B9")]
		Right,
		[Token(Token = "0x40001BA")]
		Mono
	}

	[Token(Token = "0x20000A3")]
	public delegate void CameraCallback(Camera cam);

	[Token(Token = "0x40001AC")]
	public const float kMinAperture = 0.7f;

	[Token(Token = "0x40001AD")]
	public const float kMaxAperture = 32f;

	[Token(Token = "0x40001AE")]
	public const int kMinBladeCount = 3;

	[Token(Token = "0x40001AF")]
	public const int kMaxBladeCount = 11;

	[Token(Token = "0x40001B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal uint m_NonSerializedVersion;

	[Token(Token = "0x40001B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static CameraCallback onPreCull;

	[Token(Token = "0x40001B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static CameraCallback onPreRender;

	[Token(Token = "0x40001B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static CameraCallback onPostRender;

	[Token(Token = "0x1700005A")]
	[UnityEngine.Bindings.NativeProperty("Near")]
	public float nearClipPlane
	{
		[Token(Token = "0x6000265")]
		[Address(RVA = "0x68BE5A0", Offset = "0x68BD5A0", VA = "0x68BE5A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000266")]
		[Address(RVA = "0x68BE650", Offset = "0x68BD650", VA = "0x68BE650")]
		set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	[UnityEngine.Bindings.NativeProperty("Far")]
	public float farClipPlane
	{
		[Token(Token = "0x6000267")]
		[Address(RVA = "0x68BE730", Offset = "0x68BD730", VA = "0x68BE730")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000268")]
		[Address(RVA = "0x68BE7E0", Offset = "0x68BD7E0", VA = "0x68BE7E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	[UnityEngine.Bindings.NativeProperty("VerticalFieldOfView")]
	public float fieldOfView
	{
		[Token(Token = "0x6000269")]
		[Address(RVA = "0x68BE8C0", Offset = "0x68BD8C0", VA = "0x68BE8C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600026A")]
		[Address(RVA = "0x68BE970", Offset = "0x68BD970", VA = "0x68BE970")]
		set
		{
		}
	}

	[Token(Token = "0x1700005D")]
	public bool allowHDR
	{
		[Token(Token = "0x600026B")]
		[Address(RVA = "0x68BEA50", Offset = "0x68BDA50", VA = "0x68BEA50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600026C")]
		[Address(RVA = "0x68BEB00", Offset = "0x68BDB00", VA = "0x68BEB00")]
		set
		{
		}
	}

	[Token(Token = "0x1700005E")]
	public bool allowMSAA
	{
		[Token(Token = "0x600026D")]
		[Address(RVA = "0x68BEBC0", Offset = "0x68BDBC0", VA = "0x68BEBC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005F")]
	public bool allowDynamicResolution
	{
		[Token(Token = "0x600026E")]
		[Address(RVA = "0x68BEC70", Offset = "0x68BDC70", VA = "0x68BEC70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000060")]
	public float orthographicSize
	{
		[Token(Token = "0x600026F")]
		[Address(RVA = "0x68BED20", Offset = "0x68BDD20", VA = "0x68BED20")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000270")]
		[Address(RVA = "0x68BEDD0", Offset = "0x68BDDD0", VA = "0x68BEDD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000061")]
	public bool orthographic
	{
		[Token(Token = "0x6000271")]
		[Address(RVA = "0x68BEEB0", Offset = "0x68BDEB0", VA = "0x68BEEB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000272")]
		[Address(RVA = "0x68BEF60", Offset = "0x68BDF60", VA = "0x68BEF60")]
		set
		{
		}
	}

	[Token(Token = "0x17000062")]
	public OpaqueSortMode opaqueSortMode
	{
		[Token(Token = "0x6000273")]
		[Address(RVA = "0x68BF020", Offset = "0x68BE020", VA = "0x68BF020")]
		get
		{
			return default(OpaqueSortMode);
		}
	}

	[Token(Token = "0x17000063")]
	public float depth
	{
		[Token(Token = "0x6000274")]
		[Address(RVA = "0x68BF0D0", Offset = "0x68BE0D0", VA = "0x68BF0D0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000064")]
	public float aspect
	{
		[Token(Token = "0x6000275")]
		[Address(RVA = "0x68BF180", Offset = "0x68BE180", VA = "0x68BF180")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000276")]
		[Address(RVA = "0x68BF230", Offset = "0x68BE230", VA = "0x68BF230")]
		set
		{
		}
	}

	[Token(Token = "0x17000065")]
	public int cullingMask
	{
		[Token(Token = "0x6000277")]
		[Address(RVA = "0x68BF310", Offset = "0x68BE310", VA = "0x68BF310")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000278")]
		[Address(RVA = "0x68BF3C0", Offset = "0x68BE3C0", VA = "0x68BF3C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000066")]
	public int eventMask
	{
		[Token(Token = "0x6000279")]
		[Address(RVA = "0x68BF480", Offset = "0x68BE480", VA = "0x68BF480")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600027A")]
		[Address(RVA = "0x68BF530", Offset = "0x68BE530", VA = "0x68BF530")]
		set
		{
		}
	}

	[Token(Token = "0x17000067")]
	public CameraType cameraType
	{
		[Token(Token = "0x600027B")]
		[Address(RVA = "0x68BF5F0", Offset = "0x68BE5F0", VA = "0x68BF5F0")]
		get
		{
			return default(CameraType);
		}
	}

	[Token(Token = "0x17000068")]
	public float[] layerCullDistances
	{
		[Token(Token = "0x600027E")]
		[Address(RVA = "0x68BF970", Offset = "0x68BE970", VA = "0x68BF970")]
		get
		{
			return null;
		}
		[Token(Token = "0x600027F")]
		[Address(RVA = "0x68BF980", Offset = "0x68BE980", VA = "0x68BF980")]
		set
		{
		}
	}

	[Token(Token = "0x17000069")]
	public Color backgroundColor
	{
		[Token(Token = "0x6000280")]
		[Address(RVA = "0x68BF9E0", Offset = "0x68BE9E0", VA = "0x68BF9E0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000281")]
		[Address(RVA = "0x68BFAC0", Offset = "0x68BEAC0", VA = "0x68BFAC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public CameraClearFlags clearFlags
	{
		[Token(Token = "0x6000282")]
		[Address(RVA = "0x68BFB90", Offset = "0x68BEB90", VA = "0x68BFB90")]
		get
		{
			return default(CameraClearFlags);
		}
		[Token(Token = "0x6000283")]
		[Address(RVA = "0x68BFC40", Offset = "0x68BEC40", VA = "0x68BFC40")]
		set
		{
		}
	}

	[Token(Token = "0x1700006B")]
	public DepthTextureMode depthTextureMode
	{
		[Token(Token = "0x6000284")]
		[Address(RVA = "0x68BFD00", Offset = "0x68BED00", VA = "0x68BFD00")]
		get
		{
			return default(DepthTextureMode);
		}
		[Token(Token = "0x6000285")]
		[Address(RVA = "0x68BFDB0", Offset = "0x68BEDB0", VA = "0x68BFDB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public bool usePhysicalProperties
	{
		[Token(Token = "0x6000286")]
		[Address(RVA = "0x68BFE70", Offset = "0x68BEE70", VA = "0x68BFE70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006D")]
	[UnityEngine.Bindings.NativeProperty("NormalizedViewportRect")]
	public Rect rect
	{
		[Token(Token = "0x6000287")]
		[Address(RVA = "0x68BFF20", Offset = "0x68BEF20", VA = "0x68BFF20")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000288")]
		[Address(RVA = "0x68C0000", Offset = "0x68BF000", VA = "0x68C0000")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	[UnityEngine.Bindings.NativeProperty("ScreenViewportRect")]
	public Rect pixelRect
	{
		[Token(Token = "0x6000289")]
		[Address(RVA = "0x68C00D0", Offset = "0x68BF0D0", VA = "0x68C00D0")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x600028A")]
		[Address(RVA = "0x68C01B0", Offset = "0x68BF1B0", VA = "0x68C01B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public int pixelWidth
	{
		[Token(Token = "0x600028B")]
		[Address(RVA = "0x68C0280", Offset = "0x68BF280", VA = "0x68C0280")]
		[UnityEngine.Bindings.FreeFunction("CameraScripting::GetPixelWidth", HasExplicitThis = true)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000070")]
	public int pixelHeight
	{
		[Token(Token = "0x600028C")]
		[Address(RVA = "0x68C0330", Offset = "0x68BF330", VA = "0x68C0330")]
		[UnityEngine.Bindings.FreeFunction("CameraScripting::GetPixelHeight", HasExplicitThis = true)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000071")]
	public RenderTexture targetTexture
	{
		[Token(Token = "0x600028D")]
		[Address(RVA = "0x68C03E0", Offset = "0x68BF3E0", VA = "0x68C03E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600028E")]
		[Address(RVA = "0x68C04B0", Offset = "0x68BF4B0", VA = "0x68C04B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public int targetDisplay
	{
		[Token(Token = "0x600028F")]
		[Address(RVA = "0x68C05C0", Offset = "0x68BF5C0", VA = "0x68C05C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000073")]
	public Matrix4x4 cameraToWorldMatrix
	{
		[Token(Token = "0x6000290")]
		[Address(RVA = "0x68C0670", Offset = "0x68BF670", VA = "0x68C0670")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x17000074")]
	public Matrix4x4 worldToCameraMatrix
	{
		[Token(Token = "0x6000291")]
		[Address(RVA = "0x68C0780", Offset = "0x68BF780", VA = "0x68C0780")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x17000075")]
	public Matrix4x4 projectionMatrix
	{
		[Token(Token = "0x6000292")]
		[Address(RVA = "0x68C0890", Offset = "0x68BF890", VA = "0x68C0890")]
		get
		{
			return default(Matrix4x4);
		}
		[Token(Token = "0x6000293")]
		[Address(RVA = "0x68C09A0", Offset = "0x68BF9A0", VA = "0x68C09A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public static Camera main
	{
		[Token(Token = "0x600029E")]
		[Address(RVA = "0x68C1360", Offset = "0x68C0360", VA = "0x68C1360")]
		[UnityEngine.Bindings.FreeFunction("FindMainCamera")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000077")]
	public static Camera current
	{
		[Token(Token = "0x600029F")]
		[Address(RVA = "0x68C13F0", Offset = "0x68C03F0", VA = "0x68C13F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000078")]
	private static Camera currentInternal
	{
		[Token(Token = "0x60002A0")]
		[Address(RVA = "0x68C1450", Offset = "0x68C0450", VA = "0x68C1450")]
		[UnityEngine.Bindings.FreeFunction("GetCurrentCameraPPtr")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000079")]
	public static int allCamerasCount
	{
		[Token(Token = "0x60002A5")]
		[Address(RVA = "0x68C1760", Offset = "0x68C0760", VA = "0x68C1760")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700007A")]
	public static Camera[] allCameras
	{
		[Token(Token = "0x60002A6")]
		[Address(RVA = "0x68C1790", Offset = "0x68C0790", VA = "0x68C1790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007B")]
	public bool isProcessingRenderRequest
	{
		[Token(Token = "0x60002A9")]
		[Address(RVA = "0x68C1A00", Offset = "0x68C0A00", VA = "0x68C1A00")]
		[UnityEngine.Bindings.NativeMethod("IsProcessingRenderRequest")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x68BE590", Offset = "0x68BD590", VA = "0x68BE590")]
	public Camera()
	{
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x68BF6A0", Offset = "0x68BE6A0", VA = "0x68BF6A0")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::GetLayerCullDistances", HasExplicitThis = true)]
	private float[] GetLayerCullDistances()
	{
		return null;
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x68BF810", Offset = "0x68BE810", VA = "0x68BF810")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::SetLayerCullDistances", HasExplicitThis = true)]
	private void SetLayerCullDistances([UnityEngine.Bindings.NotNull] float[] d)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x68C0A70", Offset = "0x68BFA70", VA = "0x68C0A70")]
	public void ResetProjectionMatrix()
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x68C0B20", Offset = "0x68BFB20", VA = "0x68C0B20")]
	public Vector3 WorldToScreenPoint(Vector3 position, MonoOrStereoscopicEye eye)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x68C0C30", Offset = "0x68BFC30", VA = "0x68C0C30")]
	public Vector3 WorldToScreenPoint(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x68C0CF0", Offset = "0x68BFCF0", VA = "0x68C0CF0")]
	public Vector3 ScreenToViewportPoint(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x68C0DE0", Offset = "0x68BFDE0", VA = "0x68C0DE0")]
	private Ray ViewportPointToRay(Vector2 pos, MonoOrStereoscopicEye eye)
	{
		return default(Ray);
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x68C0F00", Offset = "0x68BFF00", VA = "0x68C0F00")]
	public Ray ViewportPointToRay(Vector3 pos, MonoOrStereoscopicEye eye)
	{
		return default(Ray);
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x68C0FD0", Offset = "0x68BFFD0", VA = "0x68C0FD0")]
	public Ray ViewportPointToRay(Vector3 pos)
	{
		return default(Ray);
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x68C10A0", Offset = "0x68C00A0", VA = "0x68C10A0")]
	private Ray ScreenPointToRay(Vector2 pos, MonoOrStereoscopicEye eye)
	{
		return default(Ray);
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x68C11C0", Offset = "0x68C01C0", VA = "0x68C11C0")]
	public Ray ScreenPointToRay(Vector3 pos, MonoOrStereoscopicEye eye)
	{
		return default(Ray);
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x68C1290", Offset = "0x68C0290", VA = "0x68C1290")]
	public Ray ScreenPointToRay(Vector3 pos)
	{
		return default(Ray);
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x68C14E0", Offset = "0x68C04E0", VA = "0x68C14E0")]
	public void SetStereoProjectionMatrix(StereoscopicEye eye, Matrix4x4 matrix)
	{
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x68C15B0", Offset = "0x68C05B0", VA = "0x68C15B0")]
	public void SetStereoViewMatrix(StereoscopicEye eye, Matrix4x4 matrix)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x68C1680", Offset = "0x68C0680", VA = "0x68C1680")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::GetAllCamerasCount")]
	private static extern int GetAllCamerasCount();

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x68C16B0", Offset = "0x68C06B0", VA = "0x68C16B0")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::GetAllCameras")]
	private static int GetAllCamerasImpl([Out][UnityEngine.Bindings.NotNull] Camera[] cam)
	{
		return default(int);
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x68C1860", Offset = "0x68C0860", VA = "0x68C1860")]
	public static int GetAllCameras(Camera[] cameras)
	{
		return default(int);
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x68C1950", Offset = "0x68C0950", VA = "0x68C1950")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::Render", HasExplicitThis = true)]
	public void Render()
	{
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x68C1AB0", Offset = "0x68C0AB0", VA = "0x68C1AB0")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::SetupCurrent")]
	public static void SetupCurrent(Camera cur)
	{
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x68C1B70", Offset = "0x68C0B70", VA = "0x68C1B70")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void FireOnPreCull(Camera cam)
	{
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x68C1BC0", Offset = "0x68C0BC0", VA = "0x68C1BC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void FireOnPreRender(Camera cam)
	{
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x68C1C10", Offset = "0x68C0C10", VA = "0x68C1C10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void FireOnPostRender(Camera cam)
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x68C1C60", Offset = "0x68C0C60", VA = "0x68C1C60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void BumpNonSerializedVersion(Camera cam)
	{
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x68C1C70", Offset = "0x68C0C70", VA = "0x68C1C70")]
	public bool TryGetCullingParameters(bool stereoAware, out ScriptableCullingParameters cullingParameters)
	{
		return default(bool);
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x68C1D20", Offset = "0x68C0D20", VA = "0x68C1D20")]
	[UnityEngine.Bindings.NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderPipeline.bindings.h")]
	[UnityEngine.Bindings.FreeFunction("ScriptableRenderPipeline_Bindings::GetCullingParameters_Internal")]
	private static bool GetCullingParameters_Internal(Camera camera, bool stereoAware, out ScriptableCullingParameters cullingParameters, int managedCullingParametersSize)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x68BE620", Offset = "0x68BD620", VA = "0x68BE620")]
	private static extern float get_nearClipPlane_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x68BE6E0", Offset = "0x68BD6E0", VA = "0x68BE6E0")]
	private static extern void set_nearClipPlane_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x68BE7B0", Offset = "0x68BD7B0", VA = "0x68BE7B0")]
	private static extern float get_farClipPlane_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x68BE870", Offset = "0x68BD870", VA = "0x68BE870")]
	private static extern void set_farClipPlane_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x68BE940", Offset = "0x68BD940", VA = "0x68BE940")]
	private static extern float get_fieldOfView_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x68BEA00", Offset = "0x68BDA00", VA = "0x68BEA00")]
	private static extern void set_fieldOfView_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x68BEAD0", Offset = "0x68BDAD0", VA = "0x68BEAD0")]
	private static extern bool get_allowHDR_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x68BEB80", Offset = "0x68BDB80", VA = "0x68BEB80")]
	private static extern void set_allowHDR_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x68BEC40", Offset = "0x68BDC40", VA = "0x68BEC40")]
	private static extern bool get_allowMSAA_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x68BECF0", Offset = "0x68BDCF0", VA = "0x68BECF0")]
	private static extern bool get_allowDynamicResolution_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x68BEDA0", Offset = "0x68BDDA0", VA = "0x68BEDA0")]
	private static extern float get_orthographicSize_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x68BEE60", Offset = "0x68BDE60", VA = "0x68BEE60")]
	private static extern void set_orthographicSize_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x68BEF30", Offset = "0x68BDF30", VA = "0x68BEF30")]
	private static extern bool get_orthographic_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x68BEFE0", Offset = "0x68BDFE0", VA = "0x68BEFE0")]
	private static extern void set_orthographic_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x68BF0A0", Offset = "0x68BE0A0", VA = "0x68BF0A0")]
	private static extern OpaqueSortMode get_opaqueSortMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x68BF150", Offset = "0x68BE150", VA = "0x68BF150")]
	private static extern float get_depth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x68BF200", Offset = "0x68BE200", VA = "0x68BF200")]
	private static extern float get_aspect_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x68BF2C0", Offset = "0x68BE2C0", VA = "0x68BF2C0")]
	private static extern void set_aspect_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x68BF390", Offset = "0x68BE390", VA = "0x68BF390")]
	private static extern int get_cullingMask_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x68BF440", Offset = "0x68BE440", VA = "0x68BF440")]
	private static extern void set_cullingMask_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x68BF500", Offset = "0x68BE500", VA = "0x68BF500")]
	private static extern int get_eventMask_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x68BF5B0", Offset = "0x68BE5B0", VA = "0x68BF5B0")]
	private static extern void set_eventMask_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x68BF670", Offset = "0x68BE670", VA = "0x68BF670")]
	private static extern CameraType get_cameraType_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x68BF7D0", Offset = "0x68BE7D0", VA = "0x68BF7D0")]
	private static extern void GetLayerCullDistances_Injected(IntPtr _unity_self, out BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x68BF930", Offset = "0x68BE930", VA = "0x68BF930")]
	private static extern void SetLayerCullDistances_Injected(IntPtr _unity_self, ref ManagedSpanWrapper d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x68BFA80", Offset = "0x68BEA80", VA = "0x68BFA80")]
	private static extern void get_backgroundColor_Injected(IntPtr _unity_self, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x68BFB50", Offset = "0x68BEB50", VA = "0x68BFB50")]
	private static extern void set_backgroundColor_Injected(IntPtr _unity_self, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x68BFC10", Offset = "0x68BEC10", VA = "0x68BFC10")]
	private static extern CameraClearFlags get_clearFlags_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x68BFCC0", Offset = "0x68BECC0", VA = "0x68BFCC0")]
	private static extern void set_clearFlags_Injected(IntPtr _unity_self, CameraClearFlags value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x68BFD80", Offset = "0x68BED80", VA = "0x68BFD80")]
	private static extern DepthTextureMode get_depthTextureMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x68BFE30", Offset = "0x68BEE30", VA = "0x68BFE30")]
	private static extern void set_depthTextureMode_Injected(IntPtr _unity_self, DepthTextureMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x68BFEF0", Offset = "0x68BEEF0", VA = "0x68BFEF0")]
	private static extern bool get_usePhysicalProperties_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x68BFFC0", Offset = "0x68BEFC0", VA = "0x68BFFC0")]
	private static extern void get_rect_Injected(IntPtr _unity_self, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x68C0090", Offset = "0x68BF090", VA = "0x68C0090")]
	private static extern void set_rect_Injected(IntPtr _unity_self, [In] ref Rect value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x68C0170", Offset = "0x68BF170", VA = "0x68C0170")]
	private static extern void get_pixelRect_Injected(IntPtr _unity_self, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x68C0240", Offset = "0x68BF240", VA = "0x68C0240")]
	private static extern void set_pixelRect_Injected(IntPtr _unity_self, [In] ref Rect value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x68C0300", Offset = "0x68BF300", VA = "0x68C0300")]
	private static extern int get_pixelWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x68C03B0", Offset = "0x68BF3B0", VA = "0x68C03B0")]
	private static extern int get_pixelHeight_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x68C0480", Offset = "0x68BF480", VA = "0x68C0480")]
	private static extern IntPtr get_targetTexture_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x68C0580", Offset = "0x68BF580", VA = "0x68C0580")]
	private static extern void set_targetTexture_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x68C0640", Offset = "0x68BF640", VA = "0x68C0640")]
	private static extern int get_targetDisplay_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x68C0740", Offset = "0x68BF740", VA = "0x68C0740")]
	private static extern void get_cameraToWorldMatrix_Injected(IntPtr _unity_self, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x68C0850", Offset = "0x68BF850", VA = "0x68C0850")]
	private static extern void get_worldToCameraMatrix_Injected(IntPtr _unity_self, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x68C0960", Offset = "0x68BF960", VA = "0x68C0960")]
	private static extern void get_projectionMatrix_Injected(IntPtr _unity_self, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x68C0A30", Offset = "0x68BFA30", VA = "0x68C0A30")]
	private static extern void set_projectionMatrix_Injected(IntPtr _unity_self, [In] ref Matrix4x4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x68C0AF0", Offset = "0x68BFAF0", VA = "0x68C0AF0")]
	private static extern void ResetProjectionMatrix_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x68C0BE0", Offset = "0x68BFBE0", VA = "0x68C0BE0")]
	private static extern void WorldToScreenPoint_Injected(IntPtr _unity_self, [In] ref Vector3 position, MonoOrStereoscopicEye eye, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x68C0DA0", Offset = "0x68BFDA0", VA = "0x68C0DA0")]
	private static extern void ScreenToViewportPoint_Injected(IntPtr _unity_self, [In] ref Vector3 position, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x68C0EB0", Offset = "0x68BFEB0", VA = "0x68C0EB0")]
	private static extern void ViewportPointToRay_Injected(IntPtr _unity_self, [In] ref Vector2 pos, MonoOrStereoscopicEye eye, out Ray ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x68C1170", Offset = "0x68C0170", VA = "0x68C1170")]
	private static extern void ScreenPointToRay_Injected(IntPtr _unity_self, [In] ref Vector2 pos, MonoOrStereoscopicEye eye, out Ray ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x68C13C0", Offset = "0x68C03C0", VA = "0x68C13C0")]
	private static extern IntPtr get_main_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x68C14B0", Offset = "0x68C04B0", VA = "0x68C14B0")]
	private static extern IntPtr get_currentInternal_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x68C1570", Offset = "0x68C0570", VA = "0x68C1570")]
	private static extern void SetStereoProjectionMatrix_Injected(IntPtr _unity_self, StereoscopicEye eye, [In] ref Matrix4x4 matrix);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x68C1640", Offset = "0x68C0640", VA = "0x68C1640")]
	private static extern void SetStereoViewMatrix_Injected(IntPtr _unity_self, StereoscopicEye eye, [In] ref Matrix4x4 matrix);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x68C1730", Offset = "0x68C0730", VA = "0x68C1730")]
	private static extern int GetAllCamerasImpl_Injected([Out] Camera[] cam);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x68C19D0", Offset = "0x68C09D0", VA = "0x68C19D0")]
	private static extern void Render_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x68C1A80", Offset = "0x68C0A80", VA = "0x68C1A80")]
	private static extern bool get_isProcessingRenderRequest_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x68C1B40", Offset = "0x68C0B40", VA = "0x68C1B40")]
	private static extern void SetupCurrent_Injected(IntPtr cur);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x68C1DD0", Offset = "0x68C0DD0", VA = "0x68C1DD0")]
	private static extern bool GetCullingParameters_Internal_Injected(IntPtr camera, bool stereoAware, out ScriptableCullingParameters cullingParameters, int managedCullingParametersSize);
}
