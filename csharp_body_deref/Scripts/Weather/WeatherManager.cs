// ==================== AoTTG2 cross-reference ====================
// Type: Weather.WeatherManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Weather/WeatherManager.c
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ApplicationManagers;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using Settings;
using UnityEngine;

namespace Weather;

[Token(Token = "0x200003C")]
internal class WeatherManager : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x200003D")]
	[CompilerGenerated]
	private sealed class _003CUpdateReflectionTexture_003Ed__30 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000160")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000161")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000162")]
		[FieldOffset(Offset = "0x20")]
		public WeatherManager _003C_003E4__this;

		[Token(Token = "0x17000023")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600018E")]
			[Address(RVA = "0x3F752D0", Offset = "0x3F752D0", VA = "0x3F752D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000024")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000190")]
			[Address(RVA = "0x3F75320", Offset = "0x3F75320", VA = "0x3F75320", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600018B")]
		[Address(RVA = "0x3F751F0", Offset = "0x3F751F0", VA = "0x3F751F0")]
		[DebuggerHidden]
		public _003CUpdateReflectionTexture_003Ed__30(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600018C")]
		[Address(RVA = "0x3F75210", Offset = "0x3F75210", VA = "0x3F75210", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600018D")]
		[Address(RVA = "0x3F75220", Offset = "0x3F75220", VA = "0x3F75220", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600018F")]
		[Address(RVA = "0x3F752E0", Offset = "0x3F752E0", VA = "0x3F752E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200003E")]
	[CompilerGenerated]
	private sealed class _003CWaitAndApplySkybox_003Ed__51 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000163")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000164")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000165")]
		[FieldOffset(Offset = "0x20")]
		public WeatherManager _003C_003E4__this;

		[Token(Token = "0x17000025")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000194")]
			[Address(RVA = "0x3F75880", Offset = "0x3F75880", VA = "0x3F75880", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000026")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000196")]
			[Address(RVA = "0x3F758D0", Offset = "0x3F758D0", VA = "0x3F758D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000191")]
		[Address(RVA = "0x3F75330", Offset = "0x3F75330", VA = "0x3F75330")]
		[DebuggerHidden]
		public _003CWaitAndApplySkybox_003Ed__51(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000192")]
		[Address(RVA = "0x3F75350", Offset = "0x3F75350", VA = "0x3F75350", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000193")]
		[Address(RVA = "0x3F75360", Offset = "0x3F75360", VA = "0x3F75360", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000195")]
		[Address(RVA = "0x3F75890", Offset = "0x3F75890", VA = "0x3F75890", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200003F")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishOnSetWeather_003Ed__54 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000166")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000167")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000168")]
		[FieldOffset(Offset = "0x20")]
		public WeatherManager _003C_003E4__this;

		[Token(Token = "0x4000169")]
		[FieldOffset(Offset = "0x28")]
		public byte[] currentWeatherJson;

		[Token(Token = "0x400016A")]
		[FieldOffset(Offset = "0x30")]
		public byte[] startWeatherJson;

		[Token(Token = "0x400016B")]
		[FieldOffset(Offset = "0x38")]
		public byte[] targetWeatherJson;

		[Token(Token = "0x400016C")]
		[FieldOffset(Offset = "0x40")]
		public Dictionary<int, float> targetWeatherStartTimes;

		[Token(Token = "0x400016D")]
		[FieldOffset(Offset = "0x48")]
		public Dictionary<int, float> targetWeatherEndTimes;

		[Token(Token = "0x400016E")]
		[FieldOffset(Offset = "0x50")]
		public float currentTime;

		[Token(Token = "0x17000027")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600019A")]
			[Address(RVA = "0x3F75AF0", Offset = "0x3F75AF0", VA = "0x3F75AF0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000028")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600019C")]
			[Address(RVA = "0x3F75B40", Offset = "0x3F75B40", VA = "0x3F75B40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000197")]
		[Address(RVA = "0x3F758E0", Offset = "0x3F758E0", VA = "0x3F758E0")]
		[DebuggerHidden]
		public _003CWaitAndFinishOnSetWeather_003Ed__54(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000198")]
		[Address(RVA = "0x3F75900", Offset = "0x3F75900", VA = "0x3F75900", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000199")]
		[Address(RVA = "0x3F75910", Offset = "0x3F75910", VA = "0x3F75910", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600019B")]
		[Address(RVA = "0x3F75B00", Offset = "0x3F75B00", VA = "0x3F75B00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000145")]
	[FieldOffset(Offset = "0x0")]
	private static WeatherManager _instance;

	[Token(Token = "0x4000146")]
	private const float LerpDelay = 0.05f;

	[Token(Token = "0x4000147")]
	private const float SyncDelay = 5f;

	[Token(Token = "0x4000148")]
	[FieldOffset(Offset = "0x28")]
	private HashSet<WeatherEffect> LowEffects;

	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<string, Material> SkyboxMaterials;

	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<string, Dictionary<string, Material>> SkyboxBlendedMaterials;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x18")]
	private static Shader _blendedShader;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0x30")]
	private List<WeatherScheduleRunner> _scheduleRunners;

	[Token(Token = "0x400014D")]
	[FieldOffset(Offset = "0x38")]
	private List<Camera> _skyboxCameras;

	[Token(Token = "0x400014E")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<WeatherEffect, BaseWeatherEffect> _effects;

	[Token(Token = "0x400014F")]
	[FieldOffset(Offset = "0x48")]
	public WeatherSet _currentWeather;

	[Token(Token = "0x4000150")]
	[FieldOffset(Offset = "0x50")]
	public WeatherSet _targetWeather;

	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0x58")]
	public WeatherSet _startWeather;

	[Token(Token = "0x4000152")]
	[FieldOffset(Offset = "0x60")]
	public Dictionary<int, float> _targetWeatherStartTimes;

	[Token(Token = "0x4000153")]
	[FieldOffset(Offset = "0x68")]
	public Dictionary<int, float> _targetWeatherEndTimes;

	[Token(Token = "0x4000154")]
	[FieldOffset(Offset = "0x70")]
	private List<WeatherEffect> _needApply;

	[Token(Token = "0x4000155")]
	[FieldOffset(Offset = "0x78")]
	public float _currentTime;

	[Token(Token = "0x4000156")]
	[FieldOffset(Offset = "0x7C")]
	public bool _needSync;

	[Token(Token = "0x4000157")]
	[FieldOffset(Offset = "0x80")]
	public Dictionary<WeatherScheduleRunner, float> _currentScheduleWait;

	[Token(Token = "0x4000158")]
	[FieldOffset(Offset = "0x88")]
	private float _currentLerpWait;

	[Token(Token = "0x4000159")]
	[FieldOffset(Offset = "0x8C")]
	private float _currentSyncWait;

	[Token(Token = "0x400015A")]
	[FieldOffset(Offset = "0x90")]
	private bool _finishedLoading;

	[Token(Token = "0x400015B")]
	[FieldOffset(Offset = "0x91")]
	private bool _isCaveMap;

	[Token(Token = "0x400015C")]
	[FieldOffset(Offset = "0x94")]
	private float _currentRainForce;

	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x98")]
	private float _currentSnowForce;

	[Token(Token = "0x400015E")]
	[FieldOffset(Offset = "0x9C")]
	private float _currentWindForce;

	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0xA0")]
	private ReflectionProbe _baker;

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x3F6E530", Offset = "0x3F6E530", VA = "0x3F6E530")]
	public static void Init()
	{
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x3F6EAD0", Offset = "0x3F6EAD0", VA = "0x3F6EAD0")]
	public static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x3F6EEC0", Offset = "0x3F6EEC0", VA = "0x3F6EEC0")]
	public static void EnableCaveMap()
	{
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x3F6F1E0", Offset = "0x3F6F1E0", VA = "0x3F6F1E0")]
	[IteratorStateMachine(typeof(_003CUpdateReflectionTexture_003Ed__30))]
	private IEnumerator UpdateReflectionTexture()
	{
		return null;
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x3F6EE10", Offset = "0x3F6EE10", VA = "0x3F6EE10")]
	public static void DisableCaveMap()
	{
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x3F6F250", Offset = "0x3F6F250", VA = "0x3F6F250")]
	public static void OnFinishLoading()
	{
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x3F6E630", Offset = "0x3F6E630", VA = "0x3F6E630")]
	private static void LoadSkyboxes()
	{
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x3F6F9A0", Offset = "0x3F6F9A0", VA = "0x3F6F9A0")]
	public static void TakeFlashlight(Transform parent)
	{
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x3F6FB70", Offset = "0x3F6FB70", VA = "0x3F6FB70")]
	private static Material CreateBlendedSkybox(Shader shader, string[] parts, string skybox1, string skybox2)
	{
		return null;
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x3F6FE70", Offset = "0x3F6FE70", VA = "0x3F6FE70")]
	private static void SetSkyboxBlend(Material skybox, float blend)
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x3F6FED0", Offset = "0x3F6FED0", VA = "0x3F6FED0")]
	private void ResetCameras()
	{
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x3F6FFF0", Offset = "0x3F6FFF0", VA = "0x3F6FFF0")]
	private void ResetSkyboxColors()
	{
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x3F70440", Offset = "0x3F70440", VA = "0x3F70440")]
	private void ResetPhysics()
	{
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x3F704D0", Offset = "0x3F704D0", VA = "0x3F704D0")]
	public static Vector3 GetWeatherForce()
	{
		return default(Vector3);
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x3F6F2D0", Offset = "0x3F6F2D0", VA = "0x3F6F2D0")]
	private void RestartWeather()
	{
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x3F70D80", Offset = "0x3F70D80", VA = "0x3F70D80")]
	private void SetSceneWeather()
	{
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x3F724B0", Offset = "0x3F724B0", VA = "0x3F724B0")]
	private void CreateScheduleRunners(string schedule)
	{
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x3F708F0", Offset = "0x3F708F0", VA = "0x3F708F0")]
	private void CreateEffects()
	{
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x3F72BF0", Offset = "0x3F72BF0", VA = "0x3F72BF0")]
	private void CreateFlashlight()
	{
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x3F72DE0", Offset = "0x3F72DE0", VA = "0x3F72DE0")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x3F72850", Offset = "0x3F72850", VA = "0x3F72850")]
	private void SyncWeather()
	{
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x3F743B0", Offset = "0x3F743B0", VA = "0x3F743B0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x3F73260", Offset = "0x3F73260", VA = "0x3F73260")]
	private void LerpCurrentWeatherToTarget()
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x3F70E50", Offset = "0x3F70E50", VA = "0x3F70E50")]
	private void ApplyCurrentWeather(bool firstStart, bool applyAll)
	{
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x3F74AD0", Offset = "0x3F74AD0", VA = "0x3F74AD0")]
	[IteratorStateMachine(typeof(_003CWaitAndApplySkybox_003Ed__51))]
	private IEnumerator WaitAndApplySkybox()
	{
		return null;
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x3F74750", Offset = "0x3F74750", VA = "0x3F74750")]
	private Material GetBlendedSkybox(string skybox1, string skybox2)
	{
		return null;
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x3F74B40", Offset = "0x3F74B40", VA = "0x3F74B40")]
	public static void OnSetWeatherRPC(byte[] currentWeatherJson, byte[] startWeatherJson, byte[] targetWeatherJson, Dictionary<int, float> targetWeatherStartTimes, Dictionary<int, float> targetWeatherEndTimes, float currentTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x3F74C90", Offset = "0x3F74C90", VA = "0x3F74C90")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishOnSetWeather_003Ed__54))]
	private IEnumerator WaitAndFinishOnSetWeather(byte[] currentWeatherJson, byte[] startWeatherJson, byte[] targetWeatherJson, Dictionary<int, float> targetWeatherStartTimes, Dictionary<int, float> targetWeatherEndTimes, float currentTime)
	{
		return null;
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x3F74A70", Offset = "0x3F74A70", VA = "0x3F74A70")]
	private bool IsWeatherEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x3F74D90", Offset = "0x3F74D90", VA = "0x3F74D90")]
	public WeatherManager()
	{
	}
}
