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

[Token(Token = "0x200003C")]
internal class WeatherManager : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x200003D")]
	[CompilerGenerated]
	private sealed class _003CUpdateReflectionTexture_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400016C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400016D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400016E")]
		[FieldOffset(Offset = "0x20")]
		public WeatherManager _003C_003E4__this;

		[Token(Token = "0x17000025")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600019E")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000026")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60001A0")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600019B")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CUpdateReflectionTexture_003Ed__31(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600019C")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600019D")]
		[Address(RVA = "0x1DD0680", Offset = "0x1DCEC80", VA = "0x181DD0680", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600019F")]
		[Address(RVA = "0x1DD0740", Offset = "0x1DCED40", VA = "0x181DD0740", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200003E")]
	[CompilerGenerated]
	private sealed class _003CWaitAndApplySkybox_003Ed__52 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400016F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000170")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000171")]
		[FieldOffset(Offset = "0x20")]
		public WeatherManager _003C_003E4__this;

		[Token(Token = "0x17000027")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60001A4")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000028")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60001A6")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001A1")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndApplySkybox_003Ed__52(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60001A2")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x1DD0780", Offset = "0x1DCED80", VA = "0x181DD0780", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x1DD0C70", Offset = "0x1DCF270", VA = "0x181DD0C70", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200003F")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishOnSetWeather_003Ed__55 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000172")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000173")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000174")]
		[FieldOffset(Offset = "0x20")]
		public WeatherManager _003C_003E4__this;

		[Token(Token = "0x4000175")]
		[FieldOffset(Offset = "0x28")]
		public byte[] currentWeatherJson;

		[Token(Token = "0x4000176")]
		[FieldOffset(Offset = "0x30")]
		public byte[] startWeatherJson;

		[Token(Token = "0x4000177")]
		[FieldOffset(Offset = "0x38")]
		public byte[] targetWeatherJson;

		[Token(Token = "0x4000178")]
		[FieldOffset(Offset = "0x40")]
		public Dictionary<int, float> targetWeatherStartTimes;

		[Token(Token = "0x4000179")]
		[FieldOffset(Offset = "0x48")]
		public Dictionary<int, float> targetWeatherEndTimes;

		[Token(Token = "0x400017A")]
		[FieldOffset(Offset = "0x50")]
		public float currentTime;

		[Token(Token = "0x17000029")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60001AA")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700002A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60001AC")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndFinishOnSetWeather_003Ed__55(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x1DD0CB0", Offset = "0x1DCF2B0", VA = "0x181DD0CB0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x1DD0EC0", Offset = "0x1DCF4C0", VA = "0x181DD0EC0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000150")]
	[FieldOffset(Offset = "0x0")]
	private static WeatherManager _instance;

	[Token(Token = "0x4000151")]
	private const float LerpDelay = 0.05f;

	[Token(Token = "0x4000152")]
	private const float SyncDelay = 5f;

	[Token(Token = "0x4000153")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Color DefaultSkyboxTint;

	[Token(Token = "0x4000154")]
	[FieldOffset(Offset = "0x28")]
	private HashSet<WeatherEffect> LowEffects;

	[Token(Token = "0x4000155")]
	[FieldOffset(Offset = "0x18")]
	private static Dictionary<string, Material> SkyboxMaterials;

	[Token(Token = "0x4000156")]
	[FieldOffset(Offset = "0x20")]
	private static Dictionary<string, Dictionary<string, Material>> SkyboxBlendedMaterials;

	[Token(Token = "0x4000157")]
	[FieldOffset(Offset = "0x28")]
	private static Shader _blendedShader;

	[Token(Token = "0x4000158")]
	[FieldOffset(Offset = "0x30")]
	private List<WeatherScheduleRunner> _scheduleRunners;

	[Token(Token = "0x4000159")]
	[FieldOffset(Offset = "0x38")]
	private List<Camera> _skyboxCameras;

	[Token(Token = "0x400015A")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<WeatherEffect, BaseWeatherEffect> _effects;

	[Token(Token = "0x400015B")]
	[FieldOffset(Offset = "0x48")]
	public WeatherSet _currentWeather;

	[Token(Token = "0x400015C")]
	[FieldOffset(Offset = "0x50")]
	public WeatherSet _targetWeather;

	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x58")]
	public WeatherSet _startWeather;

	[Token(Token = "0x400015E")]
	[FieldOffset(Offset = "0x60")]
	public Dictionary<int, float> _targetWeatherStartTimes;

	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0x68")]
	public Dictionary<int, float> _targetWeatherEndTimes;

	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x70")]
	private List<WeatherEffect> _needApply;

	[Token(Token = "0x4000161")]
	[FieldOffset(Offset = "0x78")]
	public float _currentTime;

	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x7C")]
	public bool _needSync;

	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x80")]
	public Dictionary<WeatherScheduleRunner, float> _currentScheduleWait;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x88")]
	private float _currentLerpWait;

	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x8C")]
	private float _currentSyncWait;

	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x90")]
	private bool _finishedLoading;

	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x91")]
	private bool _isCaveMap;

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x94")]
	private float _currentRainForce;

	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x98")]
	private float _currentSnowForce;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x9C")]
	private float _currentWindForce;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0xA0")]
	private ReflectionProbe _baker;

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x1DB5930", Offset = "0x1DB3F30", VA = "0x181DB5930")]
	public static void Init()
	{
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x1DB6EC0", Offset = "0x1DB54C0", VA = "0x181DB6EC0")]
	public static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x1DB4A90", Offset = "0x1DB3090", VA = "0x181DB4A90")]
	public static void EnableCaveMap()
	{
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x1DB8810", Offset = "0x1DB6E10", VA = "0x181DB8810")]
	[IteratorStateMachine(typeof(_003CUpdateReflectionTexture_003Ed__31))]
	private IEnumerator UpdateReflectionTexture()
	{
		return null;
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x1DB49F0", Offset = "0x1DB2FF0", VA = "0x181DB49F0")]
	public static void DisableCaveMap()
	{
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x1DB6A80", Offset = "0x1DB5080", VA = "0x181DB6A80")]
	public static void OnFinishLoading()
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x1DB6600", Offset = "0x1DB4C00", VA = "0x181DB6600")]
	private static void LoadSkyboxes()
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x1DB8670", Offset = "0x1DB6C70", VA = "0x181DB8670")]
	public static void TakeFlashlight(Transform parent)
	{
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x1DB3D90", Offset = "0x1DB2390", VA = "0x181DB3D90")]
	private static Material CreateBlendedSkybox(Shader shader, string[] parts, string skybox1, string skybox2)
	{
		return null;
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x1DB8230", Offset = "0x1DB6830", VA = "0x181DB8230")]
	private static void SetSkyboxBlend(Material skybox, float blend)
	{
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x1DB73F0", Offset = "0x1DB59F0", VA = "0x181DB73F0")]
	private void ResetCameras()
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x1DB75C0", Offset = "0x1DB5BC0", VA = "0x181DB75C0")]
	private void ResetSkyboxColors()
	{
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x1DB7520", Offset = "0x1DB5B20", VA = "0x181DB7520")]
	private void ResetPhysics()
	{
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x1DB54A0", Offset = "0x1DB3AA0", VA = "0x181DB54A0")]
	public static Vector3 GetWeatherForce()
	{
		return default(Vector3);
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x1DB7960", Offset = "0x1DB5F60", VA = "0x181DB7960")]
	private void RestartWeather()
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x1DB8160", Offset = "0x1DB6760", VA = "0x181DB8160")]
	private void SetSceneWeather()
	{
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x1DB47A0", Offset = "0x1DB2DA0", VA = "0x181DB47A0")]
	private void CreateScheduleRunners(string schedule)
	{
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x1DB4000", Offset = "0x1DB2600", VA = "0x181DB4000")]
	private void CreateEffects()
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x1DB4430", Offset = "0x1DB2A30", VA = "0x181DB4430")]
	private void CreateFlashlight()
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x1DB4DD0", Offset = "0x1DB33D0", VA = "0x181DB4DD0")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x1DB8290", Offset = "0x1DB6890", VA = "0x181DB8290")]
	private void SyncWeather()
	{
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x1DB6AE0", Offset = "0x1DB50E0", VA = "0x181DB6AE0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x1DB5AA0", Offset = "0x1DB40A0", VA = "0x181DB5AA0")]
	private void LerpCurrentWeatherToTarget()
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x1DB2B50", Offset = "0x1DB1150", VA = "0x181DB2B50")]
	private void ApplyCurrentWeather(bool firstStart, bool applyAll)
	{
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x1DB8880", Offset = "0x1DB6E80", VA = "0x181DB8880")]
	[IteratorStateMachine(typeof(_003CWaitAndApplySkybox_003Ed__52))]
	private IEnumerator WaitAndApplySkybox()
	{
		return null;
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x1DB5190", Offset = "0x1DB3790", VA = "0x181DB5190")]
	private Material GetBlendedSkybox(string skybox1, string skybox2)
	{
		return null;
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x1DB7210", Offset = "0x1DB5810", VA = "0x181DB7210")]
	public static void OnSetWeatherRPC(byte[] currentWeatherJson, byte[] startWeatherJson, byte[] targetWeatherJson, Dictionary<int, float> targetWeatherStartTimes, Dictionary<int, float> targetWeatherEndTimes, float currentTime, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x1DB88F0", Offset = "0x1DB6EF0", VA = "0x181DB88F0")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishOnSetWeather_003Ed__55))]
	private IEnumerator WaitAndFinishOnSetWeather(byte[] currentWeatherJson, byte[] startWeatherJson, byte[] targetWeatherJson, Dictionary<int, float> targetWeatherStartTimes, Dictionary<int, float> targetWeatherEndTimes, float currentTime)
	{
		return null;
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x1DB5A30", Offset = "0x1DB4030", VA = "0x181DB5A30")]
	private bool IsWeatherEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x1DB8B40", Offset = "0x1DB7140", VA = "0x181DB8B40")]
	public WeatherManager()
	{
	}
}
