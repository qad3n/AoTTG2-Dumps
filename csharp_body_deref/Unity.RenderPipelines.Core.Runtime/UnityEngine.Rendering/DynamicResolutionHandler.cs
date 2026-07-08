using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200007D")]
public class DynamicResolutionHandler
{
	[Token(Token = "0x200007E")]
	private struct ScalerContainer
	{
		[Token(Token = "0x40001F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public DynamicResScalePolicyType type;

		[Token(Token = "0x40001F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public PerformDynamicRes method;
	}

	[Token(Token = "0x200007F")]
	public enum UpsamplerScheduleType
	{
		[Token(Token = "0x40001F9")]
		BeforePost,
		[Token(Token = "0x40001FA")]
		AfterDepthOfField,
		[Token(Token = "0x40001FB")]
		AfterPost
	}

	[Token(Token = "0x40001D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private bool m_Enabled;

	[Token(Token = "0x40001D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11")]
	private bool m_UseMipBias;

	[Token(Token = "0x40001D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private float m_MinScreenFraction;

	[Token(Token = "0x40001DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private float m_MaxScreenFraction;

	[Token(Token = "0x40001DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private float m_CurrentFraction;

	[Token(Token = "0x40001DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private bool m_ForcingRes;

	[Token(Token = "0x40001DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
	private bool m_CurrentCameraRequest;

	[Token(Token = "0x40001DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private float m_PrevFraction;

	[Token(Token = "0x40001DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool m_ForceSoftwareFallback;

	[Token(Token = "0x40001E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
	private bool m_RunUpscalerFilterOnFullResolution;

	[Token(Token = "0x40001E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private float m_PrevHWScaleWidth;

	[Token(Token = "0x40001E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private float m_PrevHWScaleHeight;

	[Token(Token = "0x40001E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private Vector2Int m_LastScaledSize;

	[Token(Token = "0x40001E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static DynamicResScalerSlot s_ActiveScalerSlot;

	[Token(Token = "0x40001E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static ScalerContainer[] s_ScalerContainers;

	[Token(Token = "0x40001E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private Vector2Int cachedOriginalSize;

	[Token(Token = "0x40001E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Dictionary<int, DynamicResUpscaleFilter> s_CameraUpscaleFilters;

	[Token(Token = "0x40001EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private DynamicResolutionType type;

	[Token(Token = "0x40001EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	private GlobalDynamicResolutionSettings m_CachedSettings;

	[Token(Token = "0x40001EC")]
	private const int CameraDictionaryMaxcCapacity = 32;

	[Token(Token = "0x40001ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private WeakReference m_OwnerCameraWeakRef;

	[Token(Token = "0x40001EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static Dictionary<int, DynamicResolutionHandler> s_CameraInstances;

	[Token(Token = "0x40001EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static DynamicResolutionHandler s_DefaultInstance;

	[Token(Token = "0x40001F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static int s_ActiveCameraId;

	[Token(Token = "0x40001F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static DynamicResolutionHandler s_ActiveInstance;

	[Token(Token = "0x40001F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static bool s_ActiveInstanceDirty;

	[Token(Token = "0x40001F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private static float s_GlobalHwFraction;

	[Token(Token = "0x40001F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static bool s_GlobalHwUpresActive;

	[Token(Token = "0x40001F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private UpsamplerScheduleType m_UpsamplerSchedule;

	[Token(Token = "0x17000057")]
	public DynamicResUpscaleFilter filter
	{
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x48727F0", Offset = "0x48727F0", VA = "0x48727F0")]
		[CompilerGenerated]
		get
		{
			return default(DynamicResUpscaleFilter);
		}
		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x4872800", Offset = "0x4872800", VA = "0x4872800")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000058")]
	public Vector2Int finalViewport
	{
		[Token(Token = "0x60005D5")]
		[Address(RVA = "0x4872810", Offset = "0x4872810", VA = "0x4872810")]
		[CompilerGenerated]
		get
		{
			return default(Vector2Int);
		}
		[Token(Token = "0x60005D6")]
		[Address(RVA = "0x4872820", Offset = "0x4872820", VA = "0x4872820")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public bool runUpscalerFilterOnFullResolution
	{
		[Token(Token = "0x60005D8")]
		[Address(RVA = "0x4872840", Offset = "0x4872840", VA = "0x4872840")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005D7")]
		[Address(RVA = "0x4872830", Offset = "0x4872830", VA = "0x4872830")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public UpsamplerScheduleType upsamplerSchedule
	{
		[Token(Token = "0x60005DC")]
		[Address(RVA = "0x4873070", Offset = "0x4873070", VA = "0x4873070")]
		get
		{
			return default(UpsamplerScheduleType);
		}
		[Token(Token = "0x60005DB")]
		[Address(RVA = "0x4873060", Offset = "0x4873060", VA = "0x4873060")]
		set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	public static DynamicResolutionHandler instance
	{
		[Token(Token = "0x60005DD")]
		[Address(RVA = "0x4873080", Offset = "0x4873080", VA = "0x4873080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005D2")]
	[Address(RVA = "0x48727B0", Offset = "0x48727B0", VA = "0x48727B0")]
	private void Reset()
	{
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x4872860", Offset = "0x4872860", VA = "0x4872860")]
	private bool FlushScalableBufferManagerState()
	{
		return default(bool);
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x48729D0", Offset = "0x48729D0", VA = "0x48729D0")]
	private static DynamicResolutionHandler GetOrCreateDrsInstanceHandler(Camera camera)
	{
		return null;
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x4872FA0", Offset = "0x4872FA0", VA = "0x4872FA0")]
	private DynamicResolutionHandler()
	{
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x4873150", Offset = "0x4873150", VA = "0x4873150")]
	private static float DefaultDynamicResMethod()
	{
		return default(float);
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x4873160", Offset = "0x4873160", VA = "0x4873160")]
	private void ProcessSettings(GlobalDynamicResolutionSettings settings)
	{
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x4873350", Offset = "0x4873350", VA = "0x4873350")]
	public Vector2 GetResolvedScale()
	{
		return default(Vector2);
	}

	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x48733B0", Offset = "0x48733B0", VA = "0x48733B0")]
	public float CalculateMipBias(Vector2Int inputResolution, Vector2Int outputResolution, bool forceApply = false)
	{
		return default(float);
	}

	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x4873440", Offset = "0x4873440", VA = "0x4873440")]
	public static void SetDynamicResScaler(PerformDynamicRes scaler, DynamicResScalePolicyType scalerType = DynamicResScalePolicyType.ReturnsMinMaxLerpFactor)
	{
	}

	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x4873500", Offset = "0x4873500", VA = "0x4873500")]
	public static void SetSystemDynamicResScaler(PerformDynamicRes scaler, DynamicResScalePolicyType scalerType = DynamicResScalePolicyType.ReturnsMinMaxLerpFactor)
	{
	}

	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x48735C0", Offset = "0x48735C0", VA = "0x48735C0")]
	public static void SetActiveDynamicScalerSlot(DynamicResScalerSlot slot)
	{
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x4873610", Offset = "0x4873610", VA = "0x4873610")]
	public static void ClearSelectedCamera()
	{
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x4873680", Offset = "0x4873680", VA = "0x4873680")]
	public static void SetUpscaleFilter(Camera camera, DynamicResUpscaleFilter filter)
	{
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x4873790", Offset = "0x4873790", VA = "0x4873790")]
	public void SetCurrentCameraRequest(bool cameraRequest)
	{
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x48737A0", Offset = "0x48737A0", VA = "0x48737A0")]
	public static void UpdateAndUseCamera(Camera camera, [Optional] GlobalDynamicResolutionSettings? settings, [Optional] Action OnResolutionChange)
	{
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x48739F0", Offset = "0x48739F0", VA = "0x48739F0")]
	public void Update(GlobalDynamicResolutionSettings settings, [Optional] Action OnResolutionChange)
	{
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x4873CC0", Offset = "0x4873CC0", VA = "0x4873CC0")]
	public bool SoftwareDynamicResIsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x48729B0", Offset = "0x48729B0", VA = "0x48729B0")]
	public bool HardwareDynamicResIsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x4873D00", Offset = "0x4873D00", VA = "0x4873D00")]
	public bool RequestsHardwareDynamicResolution()
	{
		return default(bool);
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x4873D20", Offset = "0x4873D20", VA = "0x4873D20")]
	public bool DynamicResolutionEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x4873D50", Offset = "0x4873D50", VA = "0x4873D50")]
	public void ForceSoftwareFallback()
	{
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x4873D60", Offset = "0x4873D60", VA = "0x4873D60")]
	public Vector2Int GetScaledSize(Vector2Int size)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x4873DD0", Offset = "0x4873DD0", VA = "0x4873DD0")]
	public Vector2Int ApplyScalesOnSize(Vector2Int size)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x4873E40", Offset = "0x4873E40", VA = "0x4873E40")]
	internal Vector2Int ApplyScalesOnSize(Vector2Int size, Vector2 scales)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x4873FE0", Offset = "0x4873FE0", VA = "0x4873FE0")]
	public float GetCurrentScale()
	{
		return default(float);
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x4874000", Offset = "0x4874000", VA = "0x4874000")]
	public Vector2Int GetLastScaledSize()
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x4874010", Offset = "0x4874010", VA = "0x4874010")]
	public float GetLowResMultiplier(float targetLowRes)
	{
		return default(float);
	}
}
