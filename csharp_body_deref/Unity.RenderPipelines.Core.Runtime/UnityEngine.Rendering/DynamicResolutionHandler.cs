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
		[Address(RVA = "0x4B978E0", Offset = "0x4B978E0", VA = "0x4B978E0")]
		[CompilerGenerated]
		get
		{
			return default(DynamicResUpscaleFilter);
		}
		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x4B978F0", Offset = "0x4B978F0", VA = "0x4B978F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000058")]
	public Vector2Int finalViewport
	{
		[Token(Token = "0x60005D5")]
		[Address(RVA = "0x4B97900", Offset = "0x4B97900", VA = "0x4B97900")]
		[CompilerGenerated]
		get
		{
			return default(Vector2Int);
		}
		[Token(Token = "0x60005D6")]
		[Address(RVA = "0x4B97910", Offset = "0x4B97910", VA = "0x4B97910")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public bool runUpscalerFilterOnFullResolution
	{
		[Token(Token = "0x60005D8")]
		[Address(RVA = "0x4B97930", Offset = "0x4B97930", VA = "0x4B97930")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005D7")]
		[Address(RVA = "0x4B97920", Offset = "0x4B97920", VA = "0x4B97920")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public UpsamplerScheduleType upsamplerSchedule
	{
		[Token(Token = "0x60005DC")]
		[Address(RVA = "0x4B98160", Offset = "0x4B98160", VA = "0x4B98160")]
		get
		{
			return default(UpsamplerScheduleType);
		}
		[Token(Token = "0x60005DB")]
		[Address(RVA = "0x4B98150", Offset = "0x4B98150", VA = "0x4B98150")]
		set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	public static DynamicResolutionHandler instance
	{
		[Token(Token = "0x60005DD")]
		[Address(RVA = "0x4B98170", Offset = "0x4B98170", VA = "0x4B98170")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005D2")]
	[Address(RVA = "0x4B978A0", Offset = "0x4B978A0", VA = "0x4B978A0")]
	private void Reset()
	{
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x4B97950", Offset = "0x4B97950", VA = "0x4B97950")]
	private bool FlushScalableBufferManagerState()
	{
		return default(bool);
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x4B97AC0", Offset = "0x4B97AC0", VA = "0x4B97AC0")]
	private static DynamicResolutionHandler GetOrCreateDrsInstanceHandler(Camera camera)
	{
		return null;
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x4B98090", Offset = "0x4B98090", VA = "0x4B98090")]
	private DynamicResolutionHandler()
	{
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x4B98240", Offset = "0x4B98240", VA = "0x4B98240")]
	private static float DefaultDynamicResMethod()
	{
		return default(float);
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x4B98250", Offset = "0x4B98250", VA = "0x4B98250")]
	private void ProcessSettings(GlobalDynamicResolutionSettings settings)
	{
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x4B98440", Offset = "0x4B98440", VA = "0x4B98440")]
	public Vector2 GetResolvedScale()
	{
		return default(Vector2);
	}

	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x4B984A0", Offset = "0x4B984A0", VA = "0x4B984A0")]
	public float CalculateMipBias(Vector2Int inputResolution, Vector2Int outputResolution, bool forceApply = false)
	{
		return default(float);
	}

	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x4B98530", Offset = "0x4B98530", VA = "0x4B98530")]
	public static void SetDynamicResScaler(PerformDynamicRes scaler, DynamicResScalePolicyType scalerType = DynamicResScalePolicyType.ReturnsMinMaxLerpFactor)
	{
	}

	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x4B985F0", Offset = "0x4B985F0", VA = "0x4B985F0")]
	public static void SetSystemDynamicResScaler(PerformDynamicRes scaler, DynamicResScalePolicyType scalerType = DynamicResScalePolicyType.ReturnsMinMaxLerpFactor)
	{
	}

	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x4B986B0", Offset = "0x4B986B0", VA = "0x4B986B0")]
	public static void SetActiveDynamicScalerSlot(DynamicResScalerSlot slot)
	{
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x4B98700", Offset = "0x4B98700", VA = "0x4B98700")]
	public static void ClearSelectedCamera()
	{
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x4B98770", Offset = "0x4B98770", VA = "0x4B98770")]
	public static void SetUpscaleFilter(Camera camera, DynamicResUpscaleFilter filter)
	{
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x4B98880", Offset = "0x4B98880", VA = "0x4B98880")]
	public void SetCurrentCameraRequest(bool cameraRequest)
	{
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x4B98890", Offset = "0x4B98890", VA = "0x4B98890")]
	public static void UpdateAndUseCamera(Camera camera, [Optional] GlobalDynamicResolutionSettings? settings, [Optional] Action OnResolutionChange)
	{
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x4B98AE0", Offset = "0x4B98AE0", VA = "0x4B98AE0")]
	public void Update(GlobalDynamicResolutionSettings settings, [Optional] Action OnResolutionChange)
	{
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x4B98DB0", Offset = "0x4B98DB0", VA = "0x4B98DB0")]
	public bool SoftwareDynamicResIsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x4B97AA0", Offset = "0x4B97AA0", VA = "0x4B97AA0")]
	public bool HardwareDynamicResIsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x4B98DF0", Offset = "0x4B98DF0", VA = "0x4B98DF0")]
	public bool RequestsHardwareDynamicResolution()
	{
		return default(bool);
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x4B98E10", Offset = "0x4B98E10", VA = "0x4B98E10")]
	public bool DynamicResolutionEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x4B98E40", Offset = "0x4B98E40", VA = "0x4B98E40")]
	public void ForceSoftwareFallback()
	{
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x4B98E50", Offset = "0x4B98E50", VA = "0x4B98E50")]
	public Vector2Int GetScaledSize(Vector2Int size)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x4B98EC0", Offset = "0x4B98EC0", VA = "0x4B98EC0")]
	public Vector2Int ApplyScalesOnSize(Vector2Int size)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x4B98F30", Offset = "0x4B98F30", VA = "0x4B98F30")]
	internal Vector2Int ApplyScalesOnSize(Vector2Int size, Vector2 scales)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x4B990D0", Offset = "0x4B990D0", VA = "0x4B990D0")]
	public float GetCurrentScale()
	{
		return default(float);
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x4B990F0", Offset = "0x4B990F0", VA = "0x4B990F0")]
	public Vector2Int GetLastScaledSize()
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x4B99100", Offset = "0x4B99100", VA = "0x4B99100")]
	public float GetLowResMultiplier(float targetLowRes)
	{
		return default(float);
	}
}
