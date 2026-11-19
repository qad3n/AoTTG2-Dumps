// ==================== AoTTG2 cross-reference ====================
// Type: Weather.WeatherManager
// Update status: CHANGED in this game update
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

[Token(Token = "0x200003B")]
internal class WeatherManager : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x200003C")]
	[CompilerGenerated]
	private sealed class _003CUpdateReflectionTexture_003Ed__35 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000178")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000179")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400017A")]
		[FieldOffset(Offset = "0x20")]
		public WeatherManager _003C_003E4__this;

		[Token(Token = "0x1700001E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60001A5")]
			[Address(RVA = "0x575EDE0", Offset = "0x575DDE0", VA = "0x575EDE0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700001F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60001A7")]
			[Address(RVA = "0x575EE30", Offset = "0x575DE30", VA = "0x575EE30", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001A2")]
		[Address(RVA = "0x575ED00", Offset = "0x575DD00", VA = "0x575ED00")]
		[DebuggerHidden]
		public _003CUpdateReflectionTexture_003Ed__35(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x575ED20", Offset = "0x575DD20", VA = "0x575ED20", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x575ED30", Offset = "0x575DD30", VA = "0x575ED30", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x575EDF0", Offset = "0x575DDF0", VA = "0x575EDF0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200003D")]
	[CompilerGenerated]
	private sealed class _003CWaitAndApplySkybox_003Ed__57 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400017B")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400017C")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400017D")]
		[FieldOffset(Offset = "0x20")]
		public WeatherManager _003C_003E4__this;

		[Token(Token = "0x400017E")]
		[FieldOffset(Offset = "0x28")]
		public string skybox1;

		[Token(Token = "0x400017F")]
		[FieldOffset(Offset = "0x30")]
		public string skybox2;

		[Token(Token = "0x4000180")]
		[FieldOffset(Offset = "0x38")]
		public Color tint;

		[Token(Token = "0x17000020")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60001AB")]
			[Address(RVA = "0x575F210", Offset = "0x575E210", VA = "0x575F210", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000021")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60001AD")]
			[Address(RVA = "0x575F260", Offset = "0x575E260", VA = "0x575F260", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x575EE40", Offset = "0x575DE40", VA = "0x575EE40")]
		[DebuggerHidden]
		public _003CWaitAndApplySkybox_003Ed__57(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x575EE60", Offset = "0x575DE60", VA = "0x575EE60", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x575EE70", Offset = "0x575DE70", VA = "0x575EE70", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x575F220", Offset = "0x575E220", VA = "0x575F220", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200003E")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishOnSetWeather_003Ed__61 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000181")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000182")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000183")]
		[FieldOffset(Offset = "0x20")]
		public WeatherManager _003C_003E4__this;

		[Token(Token = "0x4000184")]
		[FieldOffset(Offset = "0x28")]
		public byte[] currentWeatherJson;

		[Token(Token = "0x4000185")]
		[FieldOffset(Offset = "0x30")]
		public byte[] startWeatherJson;

		[Token(Token = "0x4000186")]
		[FieldOffset(Offset = "0x38")]
		public byte[] targetWeatherJson;

		[Token(Token = "0x4000187")]
		[FieldOffset(Offset = "0x40")]
		public Dictionary<int, float> targetWeatherStartTimes;

		[Token(Token = "0x4000188")]
		[FieldOffset(Offset = "0x48")]
		public Dictionary<int, float> targetWeatherEndTimes;

		[Token(Token = "0x4000189")]
		[FieldOffset(Offset = "0x50")]
		public float currentTime;

		[Token(Token = "0x17000022")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60001B1")]
			[Address(RVA = "0x575F480", Offset = "0x575E480", VA = "0x575F480", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000023")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60001B3")]
			[Address(RVA = "0x575F4D0", Offset = "0x575E4D0", VA = "0x575F4D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x575F270", Offset = "0x575E270", VA = "0x575F270")]
		[DebuggerHidden]
		public _003CWaitAndFinishOnSetWeather_003Ed__61(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x575F290", Offset = "0x575E290", VA = "0x575F290", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x575F2A0", Offset = "0x575E2A0", VA = "0x575F2A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x575F490", Offset = "0x575E490", VA = "0x575F490", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000158")]
	[FieldOffset(Offset = "0x0")]
	private static WeatherManager _instance;

	[Token(Token = "0x4000159")]
	private const float LerpDelay = 0.05f;

	[Token(Token = "0x400015A")]
	private const float SyncDelay = 5f;

	[Token(Token = "0x400015B")]
	private const string MapDefaultWeatherName = "Map Default*";

	[Token(Token = "0x400015C")]
	[FieldOffset(Offset = "0x28")]
	private HashSet<WeatherEffect> LowEffects;

	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<string, Material> SkyboxMaterials;

	[Token(Token = "0x400015E")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<string, Dictionary<string, Material>> SkyboxBlendedMaterials;

	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0x18")]
	private static Shader _blendedShader;

	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string[] EffectNames;

	[Token(Token = "0x4000161")]
	[FieldOffset(Offset = "0x28")]
	private static readonly List<WeatherEffect> AllEffects;

	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x30")]
	private List<WeatherScheduleRunner> _scheduleRunners;

	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x38")]
	private List<Camera> _skyboxCameras;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<WeatherEffect, BaseWeatherEffect> _effects;

	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x48")]
	public WeatherSet _currentWeather;

	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x50")]
	public WeatherSet _targetWeather;

	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x58")]
	public WeatherSet _startWeather;

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x60")]
	public Dictionary<int, float> _targetWeatherStartTimes;

	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x68")]
	public Dictionary<int, float> _targetWeatherEndTimes;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x70")]
	private List<WeatherEffect> _needApply;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x78")]
	public float _currentTime;

	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0x7C")]
	public bool _needSync;

	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x80")]
	public Dictionary<WeatherScheduleRunner, float> _currentScheduleWait;

	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x88")]
	private List<WeatherScheduleRunner> _scheduleKeys;

	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x90")]
	private List<int> _finishedLerps;

	[Token(Token = "0x4000170")]
	[FieldOffset(Offset = "0x98")]
	private float _currentLerpWait;

	[Token(Token = "0x4000171")]
	[FieldOffset(Offset = "0x9C")]
	private float _currentSyncWait;

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0xA0")]
	private bool _finishedLoading;

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0xA1")]
	private bool _isCaveMap;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0xA4")]
	private float _currentRainForce;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0xA8")]
	private float _currentSnowForce;

	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0xAC")]
	private float _currentWindForce;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0xB0")]
	private ReflectionProbe _baker;

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x5758180", Offset = "0x5757180", VA = "0x5758180")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x5758720", Offset = "0x5757720", VA = "0x5758720")]
	public static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x5758AF0", Offset = "0x5757AF0", VA = "0x5758AF0")]
	public static void EnableCaveMap()
	{
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x5758E10", Offset = "0x5757E10", VA = "0x5758E10")]
	[IteratorStateMachine(typeof(_003CUpdateReflectionTexture_003Ed__35))]
	private IEnumerator UpdateReflectionTexture()
	{
		return null;
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x5758A40", Offset = "0x5757A40", VA = "0x5758A40")]
	public static void DisableCaveMap()
	{
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x5758E80", Offset = "0x5757E80", VA = "0x5758E80")]
	public static void OnFinishLoading()
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x5758280", Offset = "0x5757280", VA = "0x5758280")]
	private static void LoadSkyboxes()
	{
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x5759580", Offset = "0x5758580", VA = "0x5759580")]
	public static void TakeFlashlight(Transform parent)
	{
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x5759740", Offset = "0x5758740", VA = "0x5759740")]
	private static Material CreateBlendedSkybox(Shader shader, string[] parts, string skybox1, string skybox2)
	{
		return null;
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x5759A40", Offset = "0x5758A40", VA = "0x5759A40")]
	private static void SetSkyboxBlend(Material skybox, float blend)
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x5759AA0", Offset = "0x5758AA0", VA = "0x5759AA0")]
	private void ResetCameras()
	{
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x5759BC0", Offset = "0x5758BC0", VA = "0x5759BC0")]
	private void ResetSkyboxColors()
	{
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x5759FD0", Offset = "0x5758FD0", VA = "0x5759FD0")]
	private void ResetPhysics()
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x575A060", Offset = "0x5759060", VA = "0x575A060")]
	public static Vector3 GetWeatherForce()
	{
		return default(Vector3);
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x5758F00", Offset = "0x5757F00", VA = "0x5758F00")]
	private void RestartWeather()
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x575A8D0", Offset = "0x57598D0", VA = "0x575A8D0")]
	private void SetSceneWeather()
	{
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x575C570", Offset = "0x575B570", VA = "0x575C570")]
	private void ApplyMapDefaultLighting()
	{
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x575BE20", Offset = "0x575AE20", VA = "0x575BE20")]
	private void CreateScheduleRunners(string schedule)
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x575A480", Offset = "0x5759480", VA = "0x575A480")]
	private void CreateEffects()
	{
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x575CA50", Offset = "0x575BA50", VA = "0x575CA50")]
	private void CreateFlashlight()
	{
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x575CC40", Offset = "0x575BC40", VA = "0x575CC40")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x575C160", Offset = "0x575B160", VA = "0x575C160")]
	private void SyncWeather()
	{
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x575DC90", Offset = "0x575CC90", VA = "0x575DC90", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x575D0A0", Offset = "0x575C0A0", VA = "0x575D0A0")]
	private void LerpCurrentWeatherToTarget()
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x575AA10", Offset = "0x5759A10", VA = "0x575AA10")]
	private void ApplyCurrentWeather(bool firstStart, bool applyAll)
	{
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x575E2F0", Offset = "0x575D2F0", VA = "0x575E2F0")]
	[IteratorStateMachine(typeof(_003CWaitAndApplySkybox_003Ed__57))]
	private IEnumerator WaitAndApplySkybox(string skybox1, string skybox2, Color tint)
	{
		return null;
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x575E3B0", Offset = "0x575D3B0", VA = "0x575E3B0")]
	private static string ResolveSkyboxName(string skybox)
	{
		return null;
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x575E040", Offset = "0x575D040", VA = "0x575E040")]
	private Material GetBlendedSkybox(string skybox1, string skybox2)
	{
		return null;
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x575E4E0", Offset = "0x575D4E0", VA = "0x575E4E0")]
	public static void OnSetWeatherRPC(byte[] currentWeatherJson, byte[] startWeatherJson, byte[] targetWeatherJson, Dictionary<int, float> targetWeatherStartTimes, Dictionary<int, float> targetWeatherEndTimes, float currentTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x575E630", Offset = "0x575D630", VA = "0x575E630")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishOnSetWeather_003Ed__61))]
	private IEnumerator WaitAndFinishOnSetWeather(byte[] currentWeatherJson, byte[] startWeatherJson, byte[] targetWeatherJson, Dictionary<int, float> targetWeatherStartTimes, Dictionary<int, float> targetWeatherEndTimes, float currentTime)
	{
		return null;
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x575C510", Offset = "0x575B510", VA = "0x575C510")]
	private bool IsWeatherEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x575E730", Offset = "0x575D730", VA = "0x575E730")]
	public WeatherManager()
	{
	}
}
