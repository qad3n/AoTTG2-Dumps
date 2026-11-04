// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DynamicResolutionHandler
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x1CC5A60", Offset = "0x1CC4060", VA = "0x181CC5A60")]
		[CompilerGenerated]
		get
		{
			return default(DynamicResUpscaleFilter);
		}
		[Token(Token = "0x60004E3")]
		[Address(RVA = "0x1CC5C30", Offset = "0x1CC4230", VA = "0x181CC5C30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public Vector2Int finalViewport
	{
		[Token(Token = "0x60004E4")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return default(Vector2Int);
		}
		[Token(Token = "0x60004E5")]
		[Address(RVA = "0x1C613B0", Offset = "0x1C5F9B0", VA = "0x181C613B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public bool runUpscalerFilterOnFullResolution
	{
		[Token(Token = "0x60004E7")]
		[Address(RVA = "0x2AC0E40", Offset = "0x2ABF440", VA = "0x182AC0E40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004E6")]
		[Address(RVA = "0x15736C0", Offset = "0x1571CC0", VA = "0x1815736C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public bool forcingResolution
	{
		[Token(Token = "0x60004E8")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000039")]
	public UpsamplerScheduleType upsamplerSchedule
	{
		[Token(Token = "0x60004EC")]
		[Address(RVA = "0xB5B990", Offset = "0xB59F90", VA = "0x180B5B990")]
		get
		{
			return default(UpsamplerScheduleType);
		}
		[Token(Token = "0x60004EB")]
		[Address(RVA = "0xB5BDE0", Offset = "0xB5A3E0", VA = "0x180B5BDE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public static DynamicResolutionHandler instance
	{
		[Token(Token = "0x60004ED")]
		[Address(RVA = "0x2AC0DF0", Offset = "0x2ABF3F0", VA = "0x182AC0DF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x2ABFF20", Offset = "0x2ABE520", VA = "0x182ABFF20")]
	private void Reset()
	{
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x2ABF240", Offset = "0x2ABD840", VA = "0x182ABF240")]
	private bool FlushScalableBufferManagerState()
	{
		return default(bool);
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x2ABF550", Offset = "0x2ABDB50", VA = "0x182ABF550")]
	private static DynamicResolutionHandler GetOrCreateDrsInstanceHandler(Camera camera)
	{
		return null;
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x2AC0CE0", Offset = "0x2ABF2E0", VA = "0x182AC0CE0")]
	private DynamicResolutionHandler()
	{
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x20CF430", Offset = "0x20CDA30", VA = "0x1820CF430")]
	private static float DefaultDynamicResMethod()
	{
		return default(float);
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x2ABFCA0", Offset = "0x2ABE2A0", VA = "0x182ABFCA0")]
	private void ProcessSettings(GlobalDynamicResolutionSettings settings)
	{
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x2ABFA50", Offset = "0x2ABE050", VA = "0x182ABFA50")]
	public Vector2 GetResolvedScale()
	{
		return default(Vector2);
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x2ABF0F0", Offset = "0x2ABD6F0", VA = "0x182ABF0F0")]
	public float CalculateMipBias(Vector2Int inputResolution, Vector2Int outputResolution, bool forceApply = false)
	{
		return default(float);
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x2ABFFD0", Offset = "0x2ABE5D0", VA = "0x182ABFFD0")]
	public static void SetDynamicResScaler(PerformDynamicRes scaler, DynamicResScalePolicyType scalerType = DynamicResScalePolicyType.ReturnsMinMaxLerpFactor)
	{
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x2AC0090", Offset = "0x2ABE690", VA = "0x182AC0090")]
	public static void SetSystemDynamicResScaler(PerformDynamicRes scaler, DynamicResScalePolicyType scalerType = DynamicResScalePolicyType.ReturnsMinMaxLerpFactor)
	{
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x2ABFF70", Offset = "0x2ABE570", VA = "0x182ABFF70")]
	public static void SetActiveDynamicScalerSlot(DynamicResScalerSlot slot)
	{
	}

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x2ABF180", Offset = "0x2ABD780", VA = "0x182ABF180")]
	public static void ClearSelectedCamera()
	{
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x2AC0150", Offset = "0x2ABE750", VA = "0x182AC0150")]
	public static void SetUpscaleFilter(Camera camera, DynamicResUpscaleFilter filter)
	{
	}

	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x1991EB0", Offset = "0x19904B0", VA = "0x181991EB0")]
	public void SetCurrentCameraRequest(bool cameraRequest)
	{
	}

	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x2AC02D0", Offset = "0x2ABE8D0", VA = "0x182AC02D0")]
	public static void UpdateAndUseCamera(Camera camera, [Optional] GlobalDynamicResolutionSettings? settings, [Optional] Action OnResolutionChange)
	{
	}

	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x2AC05A0", Offset = "0x2ABEBA0", VA = "0x182AC05A0")]
	public void Update(GlobalDynamicResolutionSettings settings, [Optional] Action OnResolutionChange)
	{
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x2AC0290", Offset = "0x2ABE890", VA = "0x182AC0290")]
	public bool SoftwareDynamicResIsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x2ABFC80", Offset = "0x2ABE280", VA = "0x182ABFC80")]
	public bool HardwareDynamicResIsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x2ABFF00", Offset = "0x2ABE500", VA = "0x182ABFF00")]
	public bool RequestsHardwareDynamicResolution()
	{
		return default(bool);
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x2ABF210", Offset = "0x2ABD810", VA = "0x182ABF210")]
	public bool DynamicResolutionEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x2ABF3A0", Offset = "0x2ABD9A0", VA = "0x182ABF3A0")]
	public void ForceSoftwareFallback()
	{
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x2ABFAC0", Offset = "0x2ABE0C0", VA = "0x182ABFAC0")]
	public Vector2Int GetScaledSize(Vector2Int size)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x2ABEDE0", Offset = "0x2ABD3E0", VA = "0x182ABEDE0")]
	public Vector2Int ApplyScalesOnSize(Vector2Int size)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x2ABEF90", Offset = "0x2ABD590", VA = "0x182ABEF90")]
	internal Vector2Int ApplyScalesOnSize(Vector2Int size, Vector2 scales)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x2ABF3B0", Offset = "0x2ABD9B0", VA = "0x182ABF3B0")]
	public float GetCurrentScale()
	{
		return default(float);
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x187BCB0", Offset = "0x187A2B0", VA = "0x18187BCB0")]
	public Vector2Int GetLastScaledSize()
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x2ABF490", Offset = "0x2ABDA90", VA = "0x182ABF490")]
	public float GetLowResMultiplier(float targetLowRes)
	{
		return default(float);
	}

	[Token(Token = "0x6000506")]
	[Address(RVA = "0x2ABF3D0", Offset = "0x2ABD9D0", VA = "0x182ABF3D0")]
	public float GetLowResMultiplier(float targetLowRes, float minimumThreshold)
	{
		return default(float);
	}
}
