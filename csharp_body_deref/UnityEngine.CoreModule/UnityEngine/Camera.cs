// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Camera
// Update status: CHANGED in this game update
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
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/RenderTexture.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/RenderManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/CommandBuffer/RenderingCommandBuffer.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Shader.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/GameObjectUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/GfxDevice/GfxDeviceTypes.h")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/Camera.h")]
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

	[Token(Token = "0x17000059")]
	[UnityEngine.Bindings.NativeProperty("Near")]
	public float nearClipPlane
	{
		[Token(Token = "0x6000261")]
		[Address(RVA = "0x2EBF5A0", Offset = "0x2EBDBA0", VA = "0x182EBF5A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000262")]
		[Address(RVA = "0x2EC0940", Offset = "0x2EBEF40", VA = "0x182EC0940")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	[UnityEngine.Bindings.NativeProperty("Far")]
	public float farClipPlane
	{
		[Token(Token = "0x6000263")]
		[Address(RVA = "0x2EBF2C0", Offset = "0x2EBD8C0", VA = "0x182EBF2C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000264")]
		[Address(RVA = "0x2EC0610", Offset = "0x2EBEC10", VA = "0x182EC0610")]
		set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	[UnityEngine.Bindings.NativeProperty("VerticalFieldOfView")]
	public float fieldOfView
	{
		[Token(Token = "0x6000265")]
		[Address(RVA = "0x2EBF380", Offset = "0x2EBD980", VA = "0x182EBF380")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000266")]
		[Address(RVA = "0x2EC06F0", Offset = "0x2EBECF0", VA = "0x182EC06F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	public bool allowHDR
	{
		[Token(Token = "0x6000267")]
		[Address(RVA = "0x2EBE9A0", Offset = "0x2EBCFA0", VA = "0x182EBE9A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000268")]
		[Address(RVA = "0x2EC0030", Offset = "0x2EBE630", VA = "0x182EC0030")]
		set
		{
		}
	}

	[Token(Token = "0x1700005D")]
	public bool allowMSAA
	{
		[Token(Token = "0x6000269")]
		[Address(RVA = "0x2EBEA60", Offset = "0x2EBD060", VA = "0x182EBEA60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005E")]
	public bool allowDynamicResolution
	{
		[Token(Token = "0x600026A")]
		[Address(RVA = "0x2EBE8E0", Offset = "0x2EBCEE0", VA = "0x182EBE8E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005F")]
	public float orthographicSize
	{
		[Token(Token = "0x600026B")]
		[Address(RVA = "0x2EBF720", Offset = "0x2EBDD20", VA = "0x182EBF720")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600026C")]
		[Address(RVA = "0x2EC0A20", Offset = "0x2EBF020", VA = "0x182EC0A20")]
		set
		{
		}
	}

	[Token(Token = "0x17000060")]
	public bool orthographic
	{
		[Token(Token = "0x600026D")]
		[Address(RVA = "0x2EBF7E0", Offset = "0x2EBDDE0", VA = "0x182EBF7E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600026E")]
		[Address(RVA = "0x2EC0B00", Offset = "0x2EBF100", VA = "0x182EC0B00")]
		set
		{
		}
	}

	[Token(Token = "0x17000061")]
	public OpaqueSortMode opaqueSortMode
	{
		[Token(Token = "0x600026F")]
		[Address(RVA = "0x2EBF660", Offset = "0x2EBDC60", VA = "0x182EBF660")]
		get
		{
			return default(OpaqueSortMode);
		}
	}

	[Token(Token = "0x17000062")]
	public float depth
	{
		[Token(Token = "0x6000270")]
		[Address(RVA = "0x2EBF140", Offset = "0x2EBD740", VA = "0x182EBF140")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000063")]
	public float aspect
	{
		[Token(Token = "0x6000271")]
		[Address(RVA = "0x2EBEB20", Offset = "0x2EBD120", VA = "0x182EBEB20")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000272")]
		[Address(RVA = "0x2EC0110", Offset = "0x2EBE710", VA = "0x182EC0110")]
		set
		{
		}
	}

	[Token(Token = "0x17000064")]
	public int cullingMask
	{
		[Token(Token = "0x6000273")]
		[Address(RVA = "0x2EBEF30", Offset = "0x2EBD530", VA = "0x182EBEF30")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000274")]
		[Address(RVA = "0x2EC0390", Offset = "0x2EBE990", VA = "0x182EC0390")]
		set
		{
		}
	}

	[Token(Token = "0x17000065")]
	public int eventMask
	{
		[Token(Token = "0x6000275")]
		[Address(RVA = "0x2EBF200", Offset = "0x2EBD800", VA = "0x182EBF200")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000276")]
		[Address(RVA = "0x2EC0530", Offset = "0x2EBEB30", VA = "0x182EC0530")]
		set
		{
		}
	}

	[Token(Token = "0x17000066")]
	public CameraType cameraType
	{
		[Token(Token = "0x6000277")]
		[Address(RVA = "0x2EBEDB0", Offset = "0x2EBD3B0", VA = "0x182EBEDB0")]
		get
		{
			return default(CameraType);
		}
	}

	[Token(Token = "0x17000067")]
	public float[] layerCullDistances
	{
		[Token(Token = "0x600027A")]
		[Address(RVA = "0x2EBF4C0", Offset = "0x2EBDAC0", VA = "0x182EBF4C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600027B")]
		[Address(RVA = "0x2EC0780", Offset = "0x2EBED80", VA = "0x182EC0780")]
		set
		{
		}
	}

	[Token(Token = "0x17000068")]
	public Color backgroundColor
	{
		[Token(Token = "0x600027C")]
		[Address(RVA = "0x2EBEBF0", Offset = "0x2EBD1F0", VA = "0x182EBEBF0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600027D")]
		[Address(RVA = "0x2EC01F0", Offset = "0x2EBE7F0", VA = "0x182EC01F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000069")]
	public CameraClearFlags clearFlags
	{
		[Token(Token = "0x600027E")]
		[Address(RVA = "0x2EBEE70", Offset = "0x2EBD470", VA = "0x182EBEE70")]
		get
		{
			return default(CameraClearFlags);
		}
		[Token(Token = "0x600027F")]
		[Address(RVA = "0x2EC02C0", Offset = "0x2EBE8C0", VA = "0x182EC02C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public DepthTextureMode depthTextureMode
	{
		[Token(Token = "0x6000280")]
		[Address(RVA = "0x2EBF080", Offset = "0x2EBD680", VA = "0x182EBF080")]
		get
		{
			return default(DepthTextureMode);
		}
		[Token(Token = "0x6000281")]
		[Address(RVA = "0x2EC0460", Offset = "0x2EBEA60", VA = "0x182EC0460")]
		set
		{
		}
	}

	[Token(Token = "0x1700006B")]
	public bool usePhysicalProperties
	{
		[Token(Token = "0x6000282")]
		[Address(RVA = "0x2EBFE70", Offset = "0x2EBE470", VA = "0x182EBFE70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006C")]
	[UnityEngine.Bindings.NativeProperty("NormalizedViewportRect")]
	public Rect rect
	{
		[Token(Token = "0x6000283")]
		[Address(RVA = "0x2EBFC00", Offset = "0x2EBE200", VA = "0x182EBFC00")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000284")]
		[Address(RVA = "0x2EC0DA0", Offset = "0x2EBF3A0", VA = "0x182EC0DA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	[UnityEngine.Bindings.NativeProperty("ScreenViewportRect")]
	public Rect pixelRect
	{
		[Token(Token = "0x6000285")]
		[Address(RVA = "0x2EBF970", Offset = "0x2EBDF70", VA = "0x182EBF970")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000286")]
		[Address(RVA = "0x2EC0BE0", Offset = "0x2EBF1E0", VA = "0x182EC0BE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public int pixelWidth
	{
		[Token(Token = "0x6000287")]
		[Address(RVA = "0x2EBFA40", Offset = "0x2EBE040", VA = "0x182EBFA40")]
		[UnityEngine.Bindings.FreeFunction("CameraScripting::GetPixelWidth", HasExplicitThis = true)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006F")]
	public int pixelHeight
	{
		[Token(Token = "0x6000288")]
		[Address(RVA = "0x2EBF8A0", Offset = "0x2EBDEA0", VA = "0x182EBF8A0")]
		[UnityEngine.Bindings.FreeFunction("CameraScripting::GetPixelHeight", HasExplicitThis = true)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000070")]
	public RenderTexture targetTexture
	{
		[Token(Token = "0x6000289")]
		[Address(RVA = "0x2EBFD90", Offset = "0x2EBE390", VA = "0x182EBFD90")]
		get
		{
			return null;
		}
		[Token(Token = "0x600028A")]
		[Address(RVA = "0x2EC0E80", Offset = "0x2EBF480", VA = "0x182EC0E80")]
		set
		{
		}
	}

	[Token(Token = "0x17000071")]
	public int targetDisplay
	{
		[Token(Token = "0x600028B")]
		[Address(RVA = "0x2EBFCD0", Offset = "0x2EBE2D0", VA = "0x182EBFCD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000072")]
	public Matrix4x4 cameraToWorldMatrix
	{
		[Token(Token = "0x600028C")]
		[Address(RVA = "0x2EBECD0", Offset = "0x2EBD2D0", VA = "0x182EBECD0")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x17000073")]
	public Matrix4x4 worldToCameraMatrix
	{
		[Token(Token = "0x600028D")]
		[Address(RVA = "0x2EBFF40", Offset = "0x2EBE540", VA = "0x182EBFF40")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x17000074")]
	public Matrix4x4 projectionMatrix
	{
		[Token(Token = "0x600028E")]
		[Address(RVA = "0x2EBFB10", Offset = "0x2EBE110", VA = "0x182EBFB10")]
		get
		{
			return default(Matrix4x4);
		}
		[Token(Token = "0x600028F")]
		[Address(RVA = "0x2EC0CC0", Offset = "0x2EBF2C0", VA = "0x182EC0CC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public static Camera main
	{
		[Token(Token = "0x600029A")]
		[Address(RVA = "0x2EBF500", Offset = "0x2EBDB00", VA = "0x182EBF500")]
		[UnityEngine.Bindings.FreeFunction("FindMainCamera")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000076")]
	public static Camera current
	{
		[Token(Token = "0x600029B")]
		[Address(RVA = "0x2EBEFE0", Offset = "0x2EBD5E0", VA = "0x182EBEFE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000077")]
	private static Camera currentInternal
	{
		[Token(Token = "0x600029C")]
		[Address(RVA = "0x2EBEFE0", Offset = "0x2EBD5E0", VA = "0x182EBEFE0")]
		[UnityEngine.Bindings.FreeFunction("GetCurrentCameraPPtr")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000078")]
	public static int allCamerasCount
	{
		[Token(Token = "0x60002A1")]
		[Address(RVA = "0x2EBD540", Offset = "0x2EBBB40", VA = "0x182EBD540")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000079")]
	public static Camera[] allCameras
	{
		[Token(Token = "0x60002A2")]
		[Address(RVA = "0x2EBE7E0", Offset = "0x2EBCDE0", VA = "0x182EBE7E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007A")]
	public bool isProcessingRenderRequest
	{
		[Token(Token = "0x60002A5")]
		[Address(RVA = "0x2EBF440", Offset = "0x2EBDA40", VA = "0x182EBF440")]
		[UnityEngine.Bindings.NativeMethod("IsProcessingRenderRequest")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public Camera()
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x2EBD850", Offset = "0x2EBBE50", VA = "0x182EBD850")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::GetLayerCullDistances", HasExplicitThis = true)]
	private float[] GetLayerCullDistances()
	{
		return null;
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x2EBDEF0", Offset = "0x2EBC4F0", VA = "0x182EBDEF0")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::SetLayerCullDistances", HasExplicitThis = true)]
	private void SetLayerCullDistances([UnityEngine.Bindings.NotNull] float[] d)
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x2EBDA40", Offset = "0x2EBC040", VA = "0x182EBDA40")]
	public void ResetProjectionMatrix()
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x2EBE740", Offset = "0x2EBCD40", VA = "0x182EBE740")]
	public Vector3 WorldToScreenPoint(Vector3 position, MonoOrStereoscopicEye eye)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x2EBE670", Offset = "0x2EBCC70", VA = "0x182EBE670")]
	public Vector3 WorldToScreenPoint(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x2EBDDF0", Offset = "0x2EBC3F0", VA = "0x182EBDDF0")]
	public Vector3 ScreenToViewportPoint(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x2EBE3A0", Offset = "0x2EBC9A0", VA = "0x182EBE3A0")]
	private Ray ViewportPointToRay(Vector2 pos, MonoOrStereoscopicEye eye)
	{
		return default(Ray);
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x2EBE530", Offset = "0x2EBCB30", VA = "0x182EBE530")]
	public Ray ViewportPointToRay(Vector3 pos, MonoOrStereoscopicEye eye)
	{
		return default(Ray);
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x2EBE450", Offset = "0x2EBCA50", VA = "0x182EBE450")]
	public Ray ViewportPointToRay(Vector3 pos)
	{
		return default(Ray);
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x2EBDCE0", Offset = "0x2EBC2E0", VA = "0x182EBDCE0")]
	private Ray ScreenPointToRay(Vector2 pos, MonoOrStereoscopicEye eye)
	{
		return default(Ray);
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x2EBDBF0", Offset = "0x2EBC1F0", VA = "0x182EBDBF0")]
	public Ray ScreenPointToRay(Vector3 pos, MonoOrStereoscopicEye eye)
	{
		return default(Ray);
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x2EBDB10", Offset = "0x2EBC110", VA = "0x182EBDB10")]
	public Ray ScreenPointToRay(Vector3 pos)
	{
		return default(Ray);
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x2EBE070", Offset = "0x2EBC670", VA = "0x182EBE070")]
	public void SetStereoProjectionMatrix(StereoscopicEye eye, Matrix4x4 matrix)
	{
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x2EBE160", Offset = "0x2EBC760", VA = "0x182EBE160")]
	public void SetStereoViewMatrix(StereoscopicEye eye, Matrix4x4 matrix)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600029F")]
	[Address(RVA = "0x2EBD540", Offset = "0x2EBBB40", VA = "0x182EBD540")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::GetAllCamerasCount")]
	private static extern int GetAllCamerasCount();

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x2EBD5B0", Offset = "0x2EBBBB0", VA = "0x182EBD5B0")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::GetAllCameras")]
	private static int GetAllCamerasImpl([Out][UnityEngine.Bindings.NotNull] Camera[] cam)
	{
		return default(int);
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x2EBD620", Offset = "0x2EBBC20", VA = "0x182EBD620")]
	public static int GetAllCameras(Camera[] cameras)
	{
		return default(int);
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x2EBD980", Offset = "0x2EBBF80", VA = "0x182EBD980")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::Render", HasExplicitThis = true)]
	public void Render()
	{
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x2EBE240", Offset = "0x2EBC840", VA = "0x182EBE240")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::SetupCurrent")]
	public static void SetupCurrent(Camera cur)
	{
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x2EBD480", Offset = "0x2EBBA80", VA = "0x182EBD480")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void FireOnPreCull(Camera cam)
	{
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x2EBD4E0", Offset = "0x2EBBAE0", VA = "0x182EBD4E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void FireOnPreRender(Camera cam)
	{
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x2EBD420", Offset = "0x2EBBA20", VA = "0x182EBD420")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void FireOnPostRender(Camera cam)
	{
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x2EBD400", Offset = "0x2EBBA00", VA = "0x182EBD400")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void BumpNonSerializedVersion(Camera cam)
	{
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x2EBE2B0", Offset = "0x2EBC8B0", VA = "0x182EBE2B0")]
	public bool TryGetCullingParameters(bool stereoAware, out ScriptableCullingParameters cullingParameters)
	{
		return default(bool);
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x2EBD770", Offset = "0x2EBBD70", VA = "0x182EBD770")]
	[UnityEngine.Bindings.FreeFunction("ScriptableRenderPipeline_Bindings::GetCullingParameters_Internal")]
	[UnityEngine.Bindings.NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderPipeline.bindings.h")]
	private static bool GetCullingParameters_Internal(Camera camera, bool stereoAware, out ScriptableCullingParameters cullingParameters, int managedCullingParametersSize)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x2EBF560", Offset = "0x2EBDB60", VA = "0x182EBF560")]
	private static extern float get_nearClipPlane_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x2EC08F0", Offset = "0x2EBEEF0", VA = "0x182EC08F0")]
	private static extern void set_nearClipPlane_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x2EBF280", Offset = "0x2EBD880", VA = "0x182EBF280")]
	private static extern float get_farClipPlane_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x2EC05C0", Offset = "0x2EBEBC0", VA = "0x182EC05C0")]
	private static extern void set_farClipPlane_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x2EBF340", Offset = "0x2EBD940", VA = "0x182EBF340")]
	private static extern float get_fieldOfView_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x2EC06A0", Offset = "0x2EBECA0", VA = "0x182EC06A0")]
	private static extern void set_fieldOfView_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x2EBE960", Offset = "0x2EBCF60", VA = "0x182EBE960")]
	private static extern bool get_allowHDR_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x2EBFFE0", Offset = "0x2EBE5E0", VA = "0x182EBFFE0")]
	private static extern void set_allowHDR_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x2EBEA20", Offset = "0x2EBD020", VA = "0x182EBEA20")]
	private static extern bool get_allowMSAA_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x2EBE8A0", Offset = "0x2EBCEA0", VA = "0x182EBE8A0")]
	private static extern bool get_allowDynamicResolution_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x2EBF6E0", Offset = "0x2EBDCE0", VA = "0x182EBF6E0")]
	private static extern float get_orthographicSize_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x2EC09D0", Offset = "0x2EBEFD0", VA = "0x182EC09D0")]
	private static extern void set_orthographicSize_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x2EBF7A0", Offset = "0x2EBDDA0", VA = "0x182EBF7A0")]
	private static extern bool get_orthographic_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x2EC0AB0", Offset = "0x2EBF0B0", VA = "0x182EC0AB0")]
	private static extern void set_orthographic_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x2EBF620", Offset = "0x2EBDC20", VA = "0x182EBF620")]
	private static extern OpaqueSortMode get_opaqueSortMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x2EBF100", Offset = "0x2EBD700", VA = "0x182EBF100")]
	private static extern float get_depth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x2EBEAE0", Offset = "0x2EBD0E0", VA = "0x182EBEAE0")]
	private static extern float get_aspect_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x2EC00C0", Offset = "0x2EBE6C0", VA = "0x182EC00C0")]
	private static extern void set_aspect_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x2EBEEF0", Offset = "0x2EBD4F0", VA = "0x182EBEEF0")]
	private static extern int get_cullingMask_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x2EC0350", Offset = "0x2EBE950", VA = "0x182EC0350")]
	private static extern void set_cullingMask_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x2EBF1C0", Offset = "0x2EBD7C0", VA = "0x182EBF1C0")]
	private static extern int get_eventMask_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x2EC04F0", Offset = "0x2EBEAF0", VA = "0x182EC04F0")]
	private static extern void set_eventMask_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x2EBED70", Offset = "0x2EBD370", VA = "0x182EBED70")]
	private static extern CameraType get_cameraType_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x2EBD800", Offset = "0x2EBBE00", VA = "0x182EBD800")]
	private static extern void GetLayerCullDistances_Injected(IntPtr _unity_self, out BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x2EBDEA0", Offset = "0x2EBC4A0", VA = "0x182EBDEA0")]
	private static extern void SetLayerCullDistances_Injected(IntPtr _unity_self, ref ManagedSpanWrapper d);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x2EBEBA0", Offset = "0x2EBD1A0", VA = "0x182EBEBA0")]
	private static extern void get_backgroundColor_Injected(IntPtr _unity_self, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x2EC01A0", Offset = "0x2EBE7A0", VA = "0x182EC01A0")]
	private static extern void set_backgroundColor_Injected(IntPtr _unity_self, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x2EBEE30", Offset = "0x2EBD430", VA = "0x182EBEE30")]
	private static extern CameraClearFlags get_clearFlags_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x2EC0280", Offset = "0x2EBE880", VA = "0x182EC0280")]
	private static extern void set_clearFlags_Injected(IntPtr _unity_self, CameraClearFlags value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x2EBF040", Offset = "0x2EBD640", VA = "0x182EBF040")]
	private static extern DepthTextureMode get_depthTextureMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x2EC0420", Offset = "0x2EBEA20", VA = "0x182EC0420")]
	private static extern void set_depthTextureMode_Injected(IntPtr _unity_self, DepthTextureMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x2EBFE30", Offset = "0x2EBE430", VA = "0x182EBFE30")]
	private static extern bool get_usePhysicalProperties_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x2EBFBB0", Offset = "0x2EBE1B0", VA = "0x182EBFBB0")]
	private static extern void get_rect_Injected(IntPtr _unity_self, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x2EC0D50", Offset = "0x2EBF350", VA = "0x182EC0D50")]
	private static extern void set_rect_Injected(IntPtr _unity_self, [In] ref Rect value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x2EBF920", Offset = "0x2EBDF20", VA = "0x182EBF920")]
	private static extern void get_pixelRect_Injected(IntPtr _unity_self, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x2EC0B90", Offset = "0x2EBF190", VA = "0x182EC0B90")]
	private static extern void set_pixelRect_Injected(IntPtr _unity_self, [In] ref Rect value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x2EBFA00", Offset = "0x2EBE000", VA = "0x182EBFA00")]
	private static extern int get_pixelWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x2EBF860", Offset = "0x2EBDE60", VA = "0x182EBF860")]
	private static extern int get_pixelHeight_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x2EBFD50", Offset = "0x2EBE350", VA = "0x182EBFD50")]
	private static extern IntPtr get_targetTexture_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x2EC0E30", Offset = "0x2EBF430", VA = "0x182EC0E30")]
	private static extern void set_targetTexture_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x2EBFC90", Offset = "0x2EBE290", VA = "0x182EBFC90")]
	private static extern int get_targetDisplay_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x2EBEC80", Offset = "0x2EBD280", VA = "0x182EBEC80")]
	private static extern void get_cameraToWorldMatrix_Injected(IntPtr _unity_self, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x2EBFEF0", Offset = "0x2EBE4F0", VA = "0x182EBFEF0")]
	private static extern void get_worldToCameraMatrix_Injected(IntPtr _unity_self, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x2EBFAC0", Offset = "0x2EBE0C0", VA = "0x182EBFAC0")]
	private static extern void get_projectionMatrix_Injected(IntPtr _unity_self, out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x2EC0C70", Offset = "0x2EBF270", VA = "0x182EC0C70")]
	private static extern void set_projectionMatrix_Injected(IntPtr _unity_self, [In] ref Matrix4x4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x2EBDA00", Offset = "0x2EBC000", VA = "0x182EBDA00")]
	private static extern void ResetProjectionMatrix_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x2EBE620", Offset = "0x2EBCC20", VA = "0x182EBE620")]
	private static extern void WorldToScreenPoint_Injected(IntPtr _unity_self, [In] ref Vector3 position, MonoOrStereoscopicEye eye, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x2EBDD90", Offset = "0x2EBC390", VA = "0x182EBDD90")]
	private static extern void ScreenToViewportPoint_Injected(IntPtr _unity_self, [In] ref Vector3 position, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x2EBE350", Offset = "0x2EBC950", VA = "0x182EBE350")]
	private static extern void ViewportPointToRay_Injected(IntPtr _unity_self, [In] ref Vector2 pos, MonoOrStereoscopicEye eye, out Ray ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x2EBDAC0", Offset = "0x2EBC0C0", VA = "0x182EBDAC0")]
	private static extern void ScreenPointToRay_Injected(IntPtr _unity_self, [In] ref Vector2 pos, MonoOrStereoscopicEye eye, out Ray ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x2EBF4D0", Offset = "0x2EBDAD0", VA = "0x182EBF4D0")]
	private static extern IntPtr get_main_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x2EBEFB0", Offset = "0x2EBD5B0", VA = "0x182EBEFB0")]
	private static extern IntPtr get_currentInternal_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x2EBE020", Offset = "0x2EBC620", VA = "0x182EBE020")]
	private static extern void SetStereoProjectionMatrix_Injected(IntPtr _unity_self, StereoscopicEye eye, [In] ref Matrix4x4 matrix);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x2EBE110", Offset = "0x2EBC710", VA = "0x182EBE110")]
	private static extern void SetStereoViewMatrix_Injected(IntPtr _unity_self, StereoscopicEye eye, [In] ref Matrix4x4 matrix);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x2EBD570", Offset = "0x2EBBB70", VA = "0x182EBD570")]
	private static extern int GetAllCamerasImpl_Injected([Out] Camera[] cam);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x2EBD940", Offset = "0x2EBBF40", VA = "0x182EBD940")]
	private static extern void Render_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x2EBF400", Offset = "0x2EBDA00", VA = "0x182EBF400")]
	private static extern bool get_isProcessingRenderRequest_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x2EBE200", Offset = "0x2EBC800", VA = "0x182EBE200")]
	private static extern void SetupCurrent_Injected(IntPtr cur);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x2EBD720", Offset = "0x2EBBD20", VA = "0x182EBD720")]
	private static extern bool GetCullingParameters_Internal_Injected(IntPtr camera, bool stereoAware, out ScriptableCullingParameters cullingParameters, int managedCullingParametersSize);
}
