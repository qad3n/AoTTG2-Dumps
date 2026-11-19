// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DynamicResolutionHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000045")]
public class DynamicResolutionHandler
{
	[Token(Token = "0x2000046")]
	private struct ScalerContainer
	{
		[Token(Token = "0x4000102")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public DynamicResScalePolicyType type;

		[Token(Token = "0x4000103")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public PerformDynamicRes method;
	}

	[Token(Token = "0x2000047")]
	public enum UpsamplerScheduleType
	{
		[Token(Token = "0x4000105")]
		BeforePost,
		[Token(Token = "0x4000106")]
		AfterDepthOfField,
		[Token(Token = "0x4000107")]
		AfterPost
	}

	[Token(Token = "0x40000E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private bool m_Enabled;

	[Token(Token = "0x40000E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11")]
	private bool m_UseMipBias;

	[Token(Token = "0x40000E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private float m_MinScreenFraction;

	[Token(Token = "0x40000E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private float m_MaxScreenFraction;

	[Token(Token = "0x40000E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private float m_CurrentFraction;

	[Token(Token = "0x40000E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private bool m_ForcingRes;

	[Token(Token = "0x40000E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
	private bool m_CurrentCameraRequest;

	[Token(Token = "0x40000EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private float m_PrevFraction;

	[Token(Token = "0x40000EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool m_ForceSoftwareFallback;

	[Token(Token = "0x40000EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
	private bool m_RunUpscalerFilterOnFullResolution;

	[Token(Token = "0x40000ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private float m_PrevHWScaleWidth;

	[Token(Token = "0x40000EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private float m_PrevHWScaleHeight;

	[Token(Token = "0x40000EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private Vector2Int m_LastScaledSize;

	[Token(Token = "0x40000F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static DynamicResScalerSlot s_ActiveScalerSlot;

	[Token(Token = "0x40000F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static ScalerContainer[] s_ScalerContainers;

	[Token(Token = "0x40000F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private Vector2Int cachedOriginalSize;

	[Token(Token = "0x40000F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Dictionary<int, DynamicResUpscaleFilter> s_CameraUpscaleFilters;

	[Token(Token = "0x40000F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private DynamicResolutionType type;

	[Token(Token = "0x40000F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private GlobalDynamicResolutionSettings m_CachedSettings;

	[Token(Token = "0x40000F8")]
	private const int CameraDictionaryMaxcCapacity = 32;

	[Token(Token = "0x40000F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private WeakReference m_OwnerCameraWeakRef;

	[Token(Token = "0x40000FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static Dictionary<int, DynamicResolutionHandler> s_CameraInstances;

	[Token(Token = "0x40000FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static DynamicResolutionHandler s_DefaultInstance;

	[Token(Token = "0x40000FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static int s_ActiveCameraId;

	[Token(Token = "0x40000FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static DynamicResolutionHandler s_ActiveInstance;

	[Token(Token = "0x40000FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static bool s_ActiveInstanceDirty;

	[Token(Token = "0x40000FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private static float s_GlobalHwFraction;

	[Token(Token = "0x4000100")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static bool s_GlobalHwUpresActive;

	[Token(Token = "0x4000101")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private UpsamplerScheduleType m_UpsamplerSchedule;

	[Token(Token = "0x17000035")]
	public DynamicResUpscaleFilter filter
	{
		[Token(Token = "0x60004E2")]
		[Address(RVA = "0x64BC760", Offset = "0x64BB760", VA = "0x64BC760")]
		[CompilerGenerated]
		get
		{
			return default(DynamicResUpscaleFilter);
		}
		[Token(Token = "0x60004E3")]
		[Address(RVA = "0x64BC770", Offset = "0x64BB770", VA = "0x64BC770")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public Vector2Int finalViewport
	{
		[Token(Token = "0x60004E4")]
		[Address(RVA = "0x64BC780", Offset = "0x64BB780", VA = "0x64BC780")]
		[CompilerGenerated]
		get
		{
			return default(Vector2Int);
		}
		[Token(Token = "0x60004E5")]
		[Address(RVA = "0x64BC790", Offset = "0x64BB790", VA = "0x64BC790")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public bool runUpscalerFilterOnFullResolution
	{
		[Token(Token = "0x60004E7")]
		[Address(RVA = "0x64BC7B0", Offset = "0x64BB7B0", VA = "0x64BC7B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004E6")]
		[Address(RVA = "0x64BC7A0", Offset = "0x64BB7A0", VA = "0x64BC7A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public bool forcingResolution
	{
		[Token(Token = "0x60004E8")]
		[Address(RVA = "0x64BC7D0", Offset = "0x64BB7D0", VA = "0x64BC7D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000039")]
	public UpsamplerScheduleType upsamplerSchedule
	{
		[Token(Token = "0x60004EC")]
		[Address(RVA = "0x64BCF70", Offset = "0x64BBF70", VA = "0x64BCF70")]
		get
		{
			return default(UpsamplerScheduleType);
		}
		[Token(Token = "0x60004EB")]
		[Address(RVA = "0x64BCF60", Offset = "0x64BBF60", VA = "0x64BCF60")]
		set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public static DynamicResolutionHandler instance
	{
		[Token(Token = "0x60004ED")]
		[Address(RVA = "0x64BCF80", Offset = "0x64BBF80", VA = "0x64BCF80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x64BC720", Offset = "0x64BB720", VA = "0x64BC720")]
	private void Reset()
	{
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x64BC7E0", Offset = "0x64BB7E0", VA = "0x64BC7E0")]
	private bool FlushScalableBufferManagerState()
	{
		return default(bool);
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x64BC960", Offset = "0x64BB960", VA = "0x64BC960")]
	private static DynamicResolutionHandler GetOrCreateDrsInstanceHandler(Camera camera)
	{
		return null;
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x64BCEC0", Offset = "0x64BBEC0", VA = "0x64BCEC0")]
	private DynamicResolutionHandler()
	{
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x64BCFF0", Offset = "0x64BBFF0", VA = "0x64BCFF0")]
	private static float DefaultDynamicResMethod()
	{
		return default(float);
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x64BD000", Offset = "0x64BC000", VA = "0x64BD000")]
	private void ProcessSettings(GlobalDynamicResolutionSettings settings)
	{
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x64BD200", Offset = "0x64BC200", VA = "0x64BD200")]
	public Vector2 GetResolvedScale()
	{
		return default(Vector2);
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x64BD260", Offset = "0x64BC260", VA = "0x64BD260")]
	public float CalculateMipBias(Vector2Int inputResolution, Vector2Int outputResolution, bool forceApply = false)
	{
		return default(float);
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x64BD2F0", Offset = "0x64BC2F0", VA = "0x64BD2F0")]
	public static void SetDynamicResScaler(PerformDynamicRes scaler, DynamicResScalePolicyType scalerType = DynamicResScalePolicyType.ReturnsMinMaxLerpFactor)
	{
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x64BD3A0", Offset = "0x64BC3A0", VA = "0x64BD3A0")]
	public static void SetSystemDynamicResScaler(PerformDynamicRes scaler, DynamicResScalePolicyType scalerType = DynamicResScalePolicyType.ReturnsMinMaxLerpFactor)
	{
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x64BD450", Offset = "0x64BC450", VA = "0x64BD450")]
	public static void SetActiveDynamicScalerSlot(DynamicResScalerSlot slot)
	{
	}

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x64BD4A0", Offset = "0x64BC4A0", VA = "0x64BD4A0")]
	public static void ClearSelectedCamera()
	{
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x64BD510", Offset = "0x64BC510", VA = "0x64BD510")]
	public static void SetUpscaleFilter(Camera camera, DynamicResUpscaleFilter filter)
	{
	}

	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x64BD630", Offset = "0x64BC630", VA = "0x64BD630")]
	public void SetCurrentCameraRequest(bool cameraRequest)
	{
	}

	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x64BD640", Offset = "0x64BC640", VA = "0x64BD640")]
	public static void UpdateAndUseCamera(Camera camera, [Optional] GlobalDynamicResolutionSettings? settings, [Optional] Action OnResolutionChange)
	{
	}

	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x64BD880", Offset = "0x64BC880", VA = "0x64BD880")]
	public void Update(GlobalDynamicResolutionSettings settings, [Optional] Action OnResolutionChange)
	{
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x64BDB30", Offset = "0x64BCB30", VA = "0x64BDB30")]
	public bool SoftwareDynamicResIsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x64BC940", Offset = "0x64BB940", VA = "0x64BC940")]
	public bool HardwareDynamicResIsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x64BDB70", Offset = "0x64BCB70", VA = "0x64BDB70")]
	public bool RequestsHardwareDynamicResolution()
	{
		return default(bool);
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x64BDB90", Offset = "0x64BCB90", VA = "0x64BDB90")]
	public bool DynamicResolutionEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x64BDBC0", Offset = "0x64BCBC0", VA = "0x64BDBC0")]
	public void ForceSoftwareFallback()
	{
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x64BDBD0", Offset = "0x64BCBD0", VA = "0x64BDBD0")]
	public Vector2Int GetScaledSize(Vector2Int size)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x64BDC40", Offset = "0x64BCC40", VA = "0x64BDC40")]
	public Vector2Int ApplyScalesOnSize(Vector2Int size)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x64BDCB0", Offset = "0x64BCCB0", VA = "0x64BDCB0")]
	internal Vector2Int ApplyScalesOnSize(Vector2Int size, Vector2 scales)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x64BDE50", Offset = "0x64BCE50", VA = "0x64BDE50")]
	public float GetCurrentScale()
	{
		return default(float);
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x64BDE70", Offset = "0x64BCE70", VA = "0x64BDE70")]
	public Vector2Int GetLastScaledSize()
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x64BDE80", Offset = "0x64BCE80", VA = "0x64BDE80")]
	public float GetLowResMultiplier(float targetLowRes)
	{
		return default(float);
	}

	[Token(Token = "0x6000506")]
	[Address(RVA = "0x64BDF50", Offset = "0x64BCF50", VA = "0x64BDF50")]
	public float GetLowResMultiplier(float targetLowRes, float minimumThreshold)
	{
		return default(float);
	}
}
