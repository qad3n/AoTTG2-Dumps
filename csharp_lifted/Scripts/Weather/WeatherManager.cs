// ==================== AoTTG2 cross-reference ====================
// Type: Weather.WeatherManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Weather/WeatherManager.c
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
				// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager.<UpdateReflectionTexture>d__35$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
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
				// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager.<UpdateReflectionTexture>d__35$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60001A2")]
		[Address(RVA = "0x575ED00", Offset = "0x575DD00", VA = "0x575ED00")]
		[DebuggerHidden]
		public _003CUpdateReflectionTexture_003Ed__35(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager.<UpdateReflectionTexture>d__35$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x575ED20", Offset = "0x575DD20", VA = "0x575ED20", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager.<UpdateReflectionTexture>d__35$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x575ED30", Offset = "0x575DD30", VA = "0x575ED30", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager.<UpdateReflectionTexture>d__35$$MoveNext): clean
			int iVar1;
			WeatherManager pWVar2;
			ReflectionProbe __this_00;
			Texture value;
			object __this_01;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				__this_01 = new WaitForEndOfFrame();
				this.__2__current = __this_01;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				pWVar2 = this.__4__this;
				this.__1__state = -1;
				if ((pWVar2 == null) ||(__this_00 = pWVar2._baker, __this_00 == null)) {
					throw new NullReferenceException();
				}
				value = __this_00.texture;
				RenderSettings.customReflectionTexture = value;
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x575EDF0", Offset = "0x575DDF0", VA = "0x575EDF0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager.<UpdateReflectionTexture>d__35$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Weather_WeatherManager_UpdateReflectionTexture_d__35_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
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
				// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager.<WaitAndApplySkybox>d__57$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
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
				// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager.<WaitAndApplySkybox>d__57$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x575EE40", Offset = "0x575DE40", VA = "0x575EE40")]
		[DebuggerHidden]
		public _003CWaitAndApplySkybox_003Ed__57(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager.<WaitAndApplySkybox>d__57$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x575EE60", Offset = "0x575DE60", VA = "0x575EE60", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager.<WaitAndApplySkybox>d__57$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x575EE70", Offset = "0x575DE70", VA = "0x575EE70", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager.<WaitAndApplySkybox>d__57$$MoveNext): 4 lines keep C-only constructs
			int iVar1;
			WeatherManager __this_00;
			Dictionary<object, object> __this_01;
			BaseCamera pCVar2;
			List<Camera> __this_02;
			bool bVar3;
			Material __this_03;
			object __this_04;
			Material pUVar4;
			GameObject __this_05;
			Skybox pUVar5;
			ulong uStack_58;
			System_Collections_Generic_List_Enumerator_T__o pSStack_50;
			System_Collections_Generic_List_Enumerator_T__o SStack_48;

			SStack_48._list = null;
			SStack_48._index = 0;
			SStack_48._version = 0;
			SStack_48._current = null;
			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				__this_04 = new WaitForEndOfFrame();
				this.__2__current = __this_04;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				__this_00 = this.__4__this;
				this.__1__state = -1;
				if (__this_00 != null) {
					if (__this_00._isCaveMap == false) {
						__this_03 = __this_00.GetBlendedSkybox(this.skybox1, this.skybox2);
					}
					else {
						__this_01 = (Dictionary<object, object>)WeatherManager.SkyboxMaterials;
						if (__this_01 == null) goto label_0585f1a4;
						__this_03 = __this_01.get_Item((Il2CppObject *)"CaveMap1");
					}
					pCVar2 = SceneLoader.CurrentCamera;
					if (pCVar2 != null) {
						pUVar5 = pCVar2.Skybox;
						bVar3 = ((Object)__this_03 != null);
						if (bVar3) {
							if (pUVar5 == null) goto label_0585f1a4;
							pUVar4 = pUVar5.material;
							bVar3 = ((Object)pUVar4 != (Object)__this_03);
							if (bVar3) {
								pUVar4 = SkyboxCustomSkinLoader.SkyboxMaterial;
								bVar3 = ((Object)pUVar4 == null);
								if (bVar3) {
									if (__this_00._isCaveMap == false) {
										if (__this_03 == null) goto label_0585f1a4;
										__this_03.SetColor("_Tint", (Color)this.tint);
									}
									__this_02 = __this_00._skyboxCameras;
									if (__this_02 == null) goto label_0585f1a4;
									SStack_48 = __this_02.GetEnumerator();
									uStack_58 = 0;
									pSStack_50 = &SStack_48;
									while(true) {
										bVar3 = SStack_48.MoveNext();
										if (!bVar3) break;
										if ((Component)SStack_48._current == null) {
											throw new NullReferenceException();
										}
										__this_05 = SStack_48._current.gameObject ;
										if (__this_05 == null) {
											throw new NullReferenceException();
										}
										pUVar5 = __this_05.GetComponentInChildren<Skybox>();
										if (pUVar5 == null) {
											throw new NullReferenceException();
										}
										pUVar5.material = __this_03;
									}
									il2cpp_runtime_helper_02fceaa0(&uStack_58);
								}
							}
						}
						goto label_0585f1d9;
					}
				}
		label_0585f1a4: ;
				throw new NullReferenceException();
			}
		label_0585f1d9: ;
			return iVar1 == 0;
		}

		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x575F220", Offset = "0x575E220", VA = "0x575F220", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager.<WaitAndApplySkybox>d__57$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Weather_WeatherManager_WaitAndApplySkybox_d__57_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
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
				// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__61$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
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
				// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__61$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x575F270", Offset = "0x575E270", VA = "0x575F270")]
		[DebuggerHidden]
		public _003CWaitAndFinishOnSetWeather_003Ed__61(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__61$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x575F290", Offset = "0x575E290", VA = "0x575F290", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__61$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x575F2A0", Offset = "0x575E2A0", VA = "0x575F2A0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__61$$MoveNext): clean
			WeatherManager __this_00;
			WeatherSet pSVar1;
			CompressionAlgorithm pUVar2;
			String pSVar3;

			if (1 < (uint)this.__1__state) {
				return false;
			}
			__this_00 = this.__4__this;
			this.__1__state = -1;
			if (__this_00 != null) {
				if (__this_00._finishedLoading == false) {
					this.__2__current = null;
					this.__1__state = 1;
					return true;
				}
				pSVar1 = __this_00._currentWeather;
				pUVar2 = (CompressionAlgorithm)DataCompressors.Brotli;
				if ((pUVar2 != null) &&(pSVar3 = pUVar2.DecompressString(this.currentWeatherJson, 0x1000, 0xa00000), pSVar1 != null)) {
					pSVar1.DeserializeFromJsonString(pSVar3);
					pUVar2 = (CompressionAlgorithm)DataCompressors.Brotli;
					if (pUVar2 != null) {
						pSVar1 = __this_00._startWeather;
						pSVar3 = pUVar2.DecompressString(this.startWeatherJson, 0x1000, 0xa00000);
						if (pSVar1 != null) {
							pSVar1.DeserializeFromJsonString(pSVar3);
							pUVar2 = (CompressionAlgorithm)DataCompressors.Brotli;
							if (pUVar2 != null) {
								pSVar1 = __this_00._targetWeather;
								pSVar3 = pUVar2.DecompressString(this.targetWeatherJson, 0x1000, 0xa00000);
								if (pSVar1 != null) {
									pSVar1.DeserializeFromJsonString(pSVar3);
									__this_00._targetWeatherStartTimes = this.targetWeatherStartTimes;
									__this_00._targetWeatherEndTimes = this.targetWeatherEndTimes;
									__this_00._currentTime = this.currentTime;
									__this_00.LerpCurrentWeatherToTarget();
									__this_00.ApplyCurrentWeather(false, true);
									return false;
								}
							}
						}
					}
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x575F490", Offset = "0x575E490", VA = "0x575F490", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager.<WaitAndFinishOnSetWeather>d__61$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Weather_WeatherManager_WaitAndFinishOnSetWeather_d__61_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
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
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$Init): 1 lines keep C-only constructs
		WeatherManager pWVar1;
		OnPreLoadScene __this;

		pWVar1 = SingletonFactory.CreateSingleton<WeatherManager>((object)WeatherManager._instance);
		WeatherManager._instance = pWVar1;
		ThunderWeatherEffect.OnFinishInit();
		WeatherManager.LoadSkyboxes();
		__this = new OnPreLoadScene(null, (intptr_t)MethodInfo_Weather_WeatherManager_OnPreLoadScene);
		EventManager.add_OnPreLoadScene(__this);
		return;
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x5758720", Offset = "0x5757720", VA = "0x5758720")]
	public static void OnPreLoadScene(SceneName sceneName)
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$OnPreLoadScene): 6 lines keep C-only constructs
		List<List<LightningParticle>> __this;
		WeatherManager pWVar1;
		bool bVar2;
		MethodInfo method_01;
		byte[] auStack_90 = new byte[16];
		LightningParticle pWStack_80;
		byte[] auStack_78 = new byte[8];
		LightningParticle pWStack_68;
		byte[] auStack_58 = new byte[16];
		LightningParticle pWStack_48;

		auStack_78 = (byte[])0x0;
		pWStack_68 = null;
		WindWeatherEffect.WindEnabled = false;
		__this = ThunderWeatherEffect.LightningPool;
		if (__this != null) {
			auStack_90.GetEnumerator((List<object>)__this);
			pWStack_48 = pWStack_80;
			auStack_58._0_8_ = auStack_90._0_8_;
			auStack_58._8_8_ = auStack_90._8_8_;
			while (bVar2 = auStack_58.MoveNext()) {
				if (pWStack_48 == null) {
					throw new NullReferenceException();
				}
				auStack_90.GetEnumerator((List<object>)pWStack_48);
				pWStack_68 = pWStack_80;
				auStack_78 = (byte[])auStack_90._0_8_;
				auStack_90._0_8_ = null;
				auStack_90._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_78;
				while (true) {
					method_01 = MethodInfo_System_Collections_Generic_List_Enumerator_LightningParticle_MoveNext;
					bVar2 = auStack_78.MoveNext();
					if (!(bVar2)) break;
					if (pWStack_68 == null) {
						throw new NullReferenceException();
					}
					pWStack_68.Disable();
				}
				auStack_78.Dispose();
			}
			auStack_58.Dispose();
			pWVar1 = WeatherManager._instance;
			if (pWVar1 != null) {
				pWVar1._finishedLoading = false;
				WeatherManager.DisableCaveMap();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x5758AF0", Offset = "0x5757AF0", VA = "0x5758AF0")]
	public static void EnableCaveMap()
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$EnableCaveMap): 1 lines keep C-only constructs
		Weather_WeatherManager_StaticFields pWVar1;
		Material value;
		GameObject __this;
		ReflectionProbe pUVar2;
		WeatherManager.d__35<UpdateReflectionTexture> __this_00;
		WeatherManager pWVar3;

		if (Il2CppMethodInitialized_07545085 == false) {
			Il2CppMethodInitialized_07545085 = true;
			if ((typeof(WeatherManager)._2).cctor_finished_or_no_cctor == 0) goto label_05858b7b;
	label_05858b11: ;
			pWVar1 = typeof(WeatherManager).static_fields;
			pWVar3 = pWVar1._instance;
		}
		else {
			if ((typeof(WeatherManager)._2).cctor_finished_or_no_cctor != 0) goto label_05858b11;
	label_05858b7b: ;
			pWVar1 = typeof(WeatherManager).static_fields;
			pWVar3 = pWVar1._instance;
		}
		if (pWVar3 != null) {
			if (pWVar3._isCaveMap != false) {
				return;
			}
			if (((typeof(WeatherManager))._2).cctor_finished_or_no_cctor == 0) {
				pWVar1 = typeof(WeatherManager).static_fields;
				pWVar3 = pWVar1._instance;
				if (pWVar3 == null) goto label_05858e04;
			}
			pWVar3._isCaveMap = true;
			if ((Dictionary<object, object>)pWVar1.SkyboxMaterials !=null) {
				value = (pWVar1.SkyboxMaterials).get_Item((Il2CppObject *)"CaveMap1");
				RenderSettings.skybox = value;
				RenderSettings.defaultReflectionMode = 1;
				RenderSettings.ambientMode = 0;
				RenderSettings.ambientIntensity = 1.0;
				RenderSettings.reflectionIntensity = 1.0;
				__this = new GameObject();
				if (__this != null) {
					pWVar3 = WeatherManager._instance;
					pUVar2 = __this.AddComponent<ReflectionProbe>();
					if (pWVar3 != null) {
						pWVar3._baker = pUVar2;
						pWVar3 = WeatherManager._instance;
						if ((pWVar3 != null) &&(pUVar2 = pWVar3._baker, pUVar2 != null)) {
							pUVar2.cullingMask = 0;
							pWVar3 = WeatherManager._instance;
							if ((pWVar3 != null) &&(pUVar2 = pWVar3._baker, pUVar2 != null)) {
								pUVar2.refreshMode = 2;
								pWVar3 = WeatherManager._instance;
								if ((pWVar3 != null) &&(pUVar2 = pWVar3._baker, pUVar2 != null)) {
									pUVar2.mode = 1;
									pWVar3 = WeatherManager._instance;
									if ((pWVar3 != null) &&(pUVar2 = pWVar3._baker, pUVar2 != null)) {
										pUVar2.timeSlicingMode = 2;
										DynamicGI.UpdateEnvironment();
										pWVar3 = WeatherManager._instance;
										if ((pWVar3 != null) &&(pUVar2 = pWVar3._baker, pUVar2 != null)) {
											pUVar2.RenderProbe();
											pWVar3 = WeatherManager._instance;
											if (pWVar3 != null) {
												__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(WeatherManager.d__35<UpdateReflectionTexture>));
												__this_00 = new WeatherManager.d__35<UpdateReflectionTexture>(0);
												if (__this_00 != null) {
													__this_00.__4__this = pWVar3;
													pWVar3.StartCoroutine((IEnumerator)__this_00);
													return;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05858e04: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x5758E10", Offset = "0x5757E10", VA = "0x5758E10")]
	[IteratorStateMachine(typeof(_003CUpdateReflectionTexture_003Ed__35))]
	private IEnumerator UpdateReflectionTexture()
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$UpdateReflectionTexture): 1 lines keep C-only constructs
		WeatherManager.d__35<UpdateReflectionTexture> __this_00;

		if (Il2CppMethodInitialized_07545086 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(WeatherManager.d__35<UpdateReflectionTexture>)) ;
			Il2CppMethodInitialized_07545086 = true;
		}
		__this_00 = new WeatherManager.d__35<UpdateReflectionTexture>(0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x5758A40", Offset = "0x5757A40", VA = "0x5758A40")]
	public static void DisableCaveMap()
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$DisableCaveMap): clean
		uint uVar1;
		WeatherManager pWVar2;

		if (Il2CppMethodInitialized_07545087 == false) {
			Il2CppMethodInitialized_07545087 = true;
			uVar1 = (typeof(WeatherManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(WeatherManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pWVar2 = WeatherManager._instance;
		}
		else {
			pWVar2 = *(WeatherManager*)(typeof(WeatherManager)).static_fields;
		}
		if (pWVar2 == null) {
			throw new NullReferenceException();
		}
		pWVar2._isCaveMap = false;
		RenderSettings.skybox = null;
		RenderSettings.defaultReflectionMode = 0;
		RenderSettings.ambientMode = 3;
		RenderSettings.ambientIntensity = 1.0;
		RenderSettings.reflectionIntensity = 0.0;
		return;
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x5758E80", Offset = "0x5757E80", VA = "0x5758E80")]
	public static void OnFinishLoading()
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$OnFinishLoading): clean
		uint uVar1;
		WeatherManager __this;

		if (Il2CppMethodInitialized_07545088 == false) {
			Il2CppMethodInitialized_07545088 = true;
			uVar1 = (typeof(WeatherManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(WeatherManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = WeatherManager._instance;
		}
		else {
			__this = *(WeatherManager*)(typeof(WeatherManager)).static_fields;
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.RestartWeather();
		return;
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x5758280", Offset = "0x5757280", VA = "0x5758280")]
	private static void LoadSkyboxes()
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$LoadSkyboxes): 3 lines keep C-only constructs
		String pSVar2;
		Dictionary<object, object> pSVar3;
		String path;
		Shader pUVar4;
		String[] pSVar5;
		String[] values;
		String pSVar6;
		Material pUVar7;
		Dictionary<string, Material> __this;
		il2cpp_array_size_t iVar8;
		ulong uVar9;
		ulong uVar10;
		uint uVar11;

		pUVar4 = Shader.Find("Skybox/Blended");
		WeatherManager._blendedShader = pUVar4;
		pSVar5 = Util.EnumToStringArray<WeatherSkybox>();
		if (pSVar5 != null) {
			iVar8 = pSVar5.Length;
			if (0 < (int)iVar8) {
				uVar11 = 0;
				do {
					if ((uint)iVar8 <= uVar11) goto label_0585870f;
					pSVar2 = pSVar5[(int)uVar11];
					pSVar3 = (Dictionary<object, object>)WeatherManager.SkyboxMaterials;
					path = ResourcePaths.Weather;
					values = (String[])new string[5];
					if (values == null) goto label_05858714;
					if ((int)values.Length == 0) goto label_0585870f;
					values[0] = "Skyboxes/";
					if (pSVar2 == null) goto label_05858714;
					pSVar6 = (String)(*((Il2CppClass)pSVar2.klass).vtable[3].methodPtr)(pSVar2,((Il2CppClass)pSVar2.klass).vtable[3].method);
					if ((values.Length & 0xfffffffe) == 0) goto label_0585870f;
					values[1] = pSVar6;
					if ((uint)values.Length < 3) goto label_0585870f;
					values[2] = "/";
					pSVar6 = (String)(*((Il2CppClass)pSVar2.klass).vtable[3].methodPtr)(pSVar2,((Il2CppClass)pSVar2.klass).vtable[3].method);
					if ((values.Length & 0xfffffffc) == 0) goto label_0585870f;
					values[3] = pSVar6;
					if ((uint)values.Length < 5) goto label_0585870f;
					values[4] = "Skybox";
					pSVar6 = String.Concat(values);
					pUVar7 = ResourceManager.InstantiateAsset<Material>(path, pSVar6, false, false);
					if (pSVar3 == null) goto label_05858714;
					pSVar3.Add((object)pSVar2, (object)pUVar7) ;
					uVar11 = uVar11 + 1;
					iVar8 = pSVar5.Length;
				} while ((int)uVar11 < (int)iVar8);
			}
			uVar9 = iVar8 & 0xffffffff;
			if (0 < (int)iVar8) {
				uVar10 = 0;
				do {
					if (uVar9 <= uVar10) {
	label_0585870f: ;
						throw new IndexOutOfRangeException();
					}
					pSVar2 = pSVar5[uVar10];
					pSVar3 = (Dictionary<object, object>)WeatherManager.SkyboxBlendedMaterials;
					__this = new Dictionary<string, Material>();
					if (pSVar3 == null) goto label_05858714;
					pSVar3.Add((object)pSVar2, (object)__this);
					uVar10 = uVar10 + 1;
					uVar11 = (uint)pSVar5.Length;
					uVar9 = (ulong)uVar11;
				} while ((long)uVar10 < (long)(int)uVar11);
			}
			pSVar3 = (Dictionary<object, object>)WeatherManager.SkyboxMaterials;
			pSVar2 = ResourcePaths.Weather;
			pUVar7 = ResourceManager.InstantiateAsset<Material>(pSVar2, "Skyboxes/CaveMap1/CaveMap1Skybox", false, false);
			if (pSVar3 != null) {
				pSVar3.Add((Il2CppObject *)"CaveMap1", (object)pUVar7);
				return;
			}
		}
	label_05858714: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x5759580", Offset = "0x5758580", VA = "0x5759580")]
	public static void TakeFlashlight(Transform parent)
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$TakeFlashlight): clean
		uint uVar1;
		WeatherManager pWVar2;
		Dictionary<WeatherEffect, BaseWeatherEffect> pSVar3;
		bool bVar4;
		BaseWeatherEffect pWVar5;

		if (Il2CppMethodInitialized_0754508a == false) {
			Il2CppMethodInitialized_0754508a = true;
			uVar1 = (typeof(WeatherManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(WeatherManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pWVar2 = WeatherManager._instance;
		}
		else {
			pWVar2 = WeatherManager._instance;
		}
		if ((pWVar2 != null) &&(pSVar3 = pWVar2._effects, pSVar3 != null)) {
			bVar4 = pSVar3.ContainsKey(7);
			if (!bVar4) {
				return;
			}
			pWVar2 = WeatherManager._instance;
			if ((pWVar2 != null) &&(pSVar3 = pWVar2._effects, pSVar3 != null)) {
				pWVar5 = pSVar3.get_Item(7);
				bVar4 = ((Object)pWVar5 != null);
				if (!bVar4) {
					return;
				}
				pWVar2 = WeatherManager._instance;
				if (((pWVar2 != null) &&(pSVar3 = pWVar2._effects, pSVar3 != null)) &&(pWVar5 = pSVar3.get_Item(7), pWVar5 != null)) {
					pWVar5.SetParent(parent);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x5759740", Offset = "0x5758740", VA = "0x5759740")]
	private static Material CreateBlendedSkybox(Shader shader, string[] parts, string skybox1, string skybox2)
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$CreateBlendedSkybox): clean
		uint uVar1;
		Dictionary<object, object> pSVar2;
		int iVar3;
		Material pUVar4;
		ulong uVar5;
		String pSVar6;
		Material pUVar7;
		Texture pUVar8;
		String name;
		ulong uVar9;
		Color value;

		pUVar4 = new Material(shader);
		if (parts != null) {
			iVar3 = (int)parts.Length;
			if (pUVar4 == null) {
				if (0 < iVar3) {
					pSVar6 = String.Concat("_", parts[0], "Tex");
					pSVar2 = (Dictionary<object, object>)WeatherManager.SkyboxMaterials;
					if ((pSVar2 != null) &&(pUVar4 = pSVar2.get_Item((object)skybox1), pUVar4 != null)) {
						pUVar4.GetTexture(pSVar6);
						throw new NullReferenceException();
					}
				}
			}
			else {
				if (0 < iVar3) {
					uVar5 = parts.Length & 0xffffffff;
					uVar9 = 0;
					do {
						if (uVar5 <= uVar9) {
							throw new IndexOutOfRangeException();
						}
						pSVar6 = String.Concat("_", parts[uVar9], "Tex");
						pSVar2 = (Dictionary<object, object>)WeatherManager.SkyboxMaterials;
						if ((pSVar2 == null) ||(pUVar7 = pSVar2.get_Item((object)skybox1), pUVar7 == null)) goto label_05859a22;
						pUVar8 = pUVar7.GetTexture(pSVar6);
						pUVar4.SetTexture(pSVar6, pUVar8);
						name = String.Concat(pSVar6, "2");
						pSVar2 = (Dictionary<object, object>)WeatherManager.SkyboxMaterials;
						if ((pSVar2 == null) ||(pUVar7 = pSVar2.get_Item((object)skybox2), pUVar7 == null)) goto label_05859a22;
						pUVar8 = pUVar7.GetTexture(pSVar6);
						pUVar4.SetTexture(name, pUVar8);
						uVar9 = uVar9 + 1;
						uVar1 = (uint)parts.Length;
						uVar5 = (ulong)uVar1;
					} while ((long)uVar9 < (long)(int)uVar1);
				}
				if (pUVar4 != null) {
					value.b = 0.5;
					value.a = 1.0;
					value.r = 0.5;
					value.g = 0.5;
					pUVar4.SetColor("_Tint", value);
					pUVar4.SetFloat("_Blend", 0.0);
					return pUVar4;
				}
			}
		}
	label_05859a22: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x5759A40", Offset = "0x5758A40", VA = "0x5759A40")]
	private static void SetSkyboxBlend(Material skybox, float blend)
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$SetSkyboxBlend): clean
		if (skybox == null) {
			throw new NullReferenceException();
		}
		skybox.SetFloat("_Blend", blend);
		return;
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x5759AA0", Offset = "0x5758AA0", VA = "0x5759AA0")]
	private void ResetCameras()
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$ResetCameras): 4 lines keep C-only constructs
		int piVar1;
		int length;
		uint uVar2;
		List<Camera> pSVar3;
		WeatherManager pWVar4;
		BaseCamera pCVar5;
		Camera item;
		Camera[] pUVar6;

		pSVar3 = this._skyboxCameras;
		if (pSVar3 != null) {
			piVar1 = &pSVar3._version;
			*piVar1 = *piVar1 + 1;
			length = pSVar3._size;
			pSVar3._size = 0;
			if (0 < length) {
				Array.Clear((Array)pSVar3._items, 0, length);
			}
			pWVar4 = WeatherManager._instance;
			if (((pWVar4 != null) &&(pCVar5 = SceneLoader.CurrentCamera, pCVar5 != null)) &&(pSVar3 = pWVar4._skyboxCameras, pSVar3 != null)) {
				item = pCVar5.Camera;
				piVar1 = &pSVar3._version;
				*piVar1 = *piVar1 + 1;
				pUVar6 = pSVar3._items;
				if (pUVar6 != null) {
					uVar2 = pSVar3._size;
					if (uVar2 < (uint)pUVar6.Length) {
						pSVar3._size = uVar2 + 1;
						pUVar6[(int)uVar2] = item;
						return;
					}
					pSVar3.AddWithResize((object)item);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x5759BC0", Offset = "0x5758BC0", VA = "0x5759BC0")]
	private void ResetSkyboxColors()
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$ResetSkyboxColors): 10 lines keep C-only constructs
		object key;
		object key_00;
		bool bVar1;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o pSVar2;
		Dictionary<object, object> pSVar3;
		Material __this_00;
		Color value;
		byte[] local_90 = new byte[16];
		object local_80;
		byte[] local_78 = new byte[8];
		ulong uStack_70;
		object local_68;
		byte[] local_58 = new byte[8];
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o pSStack_50;
		object local_48;

		local_78 = (byte[])0x0;
		uStack_70._0_4_ = 0;
		uStack_70._4_4_ = 0;
		local_68 = null;
		local_58 = (byte[])0x0;
		local_48 = null;
		pSVar3 = (Dictionary<object, object>)WeatherManager.SkyboxBlendedMaterials;
		if ((pSVar3 == null) ||(pSVar2 = pSVar3.Keys, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		local_90.GetEnumerator(pSVar2);
		local_68 = local_80;
		local_78 = (byte[])local_90._0_8_;
		uStack_70 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_90._8_8_ ;
		while(true) {
			bVar1 = local_78.MoveNext();
			key = local_68;
			if (!bVar1) {
				local_78.Dispose();
				return;
			}
			pSVar3 = (Dictionary<object, object>)WeatherManager.SkyboxBlendedMaterials;
			if (pSVar3 == null) {
				throw new NullReferenceException();
			}
			pSVar3 = (Dictionary<object, object>)pSVar3.get_Item(key);
			if (pSVar3 == null) {
				throw new NullReferenceException();
			}
			pSVar2 = pSVar3.Keys;
			if (pSVar2 == null) break;
			local_90.GetEnumerator(pSVar2);
			local_48 = local_80;
			local_58 = (byte[])local_90._0_8_;
			pSStack_50 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_90._8_8_;
			local_90._0_8_ = null;
			local_90._8_8_ =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_58;
			while (true) {
				bVar1 = local_58.MoveNext();
				key_00 = local_48;
				if (!(bVar1)) break;
				pSVar3 = (Dictionary<object, object>)WeatherManager.SkyboxBlendedMaterials;
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
				pSVar3 = (Dictionary<object, object>)pSVar3.get_Item(key);
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
				__this_00 = pSVar3.get_Item(key_00);
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				value.b = 0.5;
				value.a = 1.0;
				value.r = 0.5;
				value.g = 0.5;
				__this_00.SetColor("_Tint", value);
			}
			local_58.Dispose();
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x5759FD0", Offset = "0x5758FD0", VA = "0x5759FD0")]
	private void ResetPhysics()
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$ResetPhysics): clean
		uint uVar1;
		WeatherManager pWVar2;

		if (Il2CppMethodInitialized_0754508f == false) {
			Il2CppMethodInitialized_0754508f = true;
			uVar1 = (typeof(WeatherManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(WeatherManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pWVar2 = WeatherManager._instance;
		}
		else {
			pWVar2 = *(WeatherManager*)(typeof(WeatherManager)).static_fields;
		}
		if (pWVar2 == null) {
			throw new NullReferenceException();
		}
		pWVar2._currentWindForce = 0.0;
		pWVar2._currentRainForce = 0.0;
		pWVar2._currentSnowForce = 0.0;
		return;
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x575A060", Offset = "0x5759060", VA = "0x575A060")]
	public static Vector3 GetWeatherForce()
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$GetWeatherForce): 6 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		UnityEngine_Vector3_StaticFields pUVar8;
		Dictionary<WeatherEffect, BaseWeatherEffect> pSVar9;
		BaseWeatherEffect pWVar11;
		WeatherManager pWVar12;
		Vector3 UVar13;
		float local_3c;
		ulong local_38;

		pUVar8 = typeof(Vector3).static_fields;
		local_38._0_4_ = (pUVar8.zeroVector).x;
		local_38._4_4_ = (pUVar8.zeroVector).y;
		local_3c = (pUVar8.zeroVector).z;
		pWVar12 = WeatherManager._instance;
		if (pWVar12 == null) goto label_0585a46f;
		if (0.0 < pWVar12._currentRainForce) {
			if ((typeof(WeatherManager)._2).cctor_finished_or_no_cctor == 0) {
				pWVar12 = WeatherManager._instance;
				if (pWVar12 == null) goto label_0585a46f;
			}
			pSVar9 = pWVar12._effects;
			if (pSVar9 == null) goto label_0585a46f;
			pWVar11 = pSVar9.get_Item(10);
			if (pWVar11 == null) goto label_0585a46f;
			if (0.0 < pWVar11._level) {
				pWVar12 = WeatherManager._instance;
				if (pWVar12 == null) goto label_0585a46f;
				fVar1 = pWVar12._currentRainForce;
				pUVar8 = typeof(Vector3).static_fields;
				uVar2 = (pUVar8.downVector).x;
				uVar5 = (pUVar8.downVector).y;
				local_38 = CONCAT44(local_38._4_4_ + fVar1 * (float)uVar5, (float)local_38 + fVar1 * (float)uVar2);
				local_3c = local_3c + (pUVar8.downVector).z * fVar1;
			}
		}
		pWVar12 = WeatherManager._instance;
		if (pWVar12 == null) goto label_0585a46f;
		if (0.0 < pWVar12._currentSnowForce) {
			if ((typeof(WeatherManager)._2).cctor_finished_or_no_cctor == 0) {
				pWVar12 = WeatherManager._instance;
				if (pWVar12 == null) goto label_0585a46f;
			}
			pSVar9 = pWVar12._effects;
			if (pSVar9 == null) goto label_0585a46f;
			pWVar11 = pSVar9.get_Item(0xc);
			if (pWVar11 == null) goto label_0585a46f;
			if (0.0 < pWVar11._level) {
				pWVar12 = WeatherManager._instance;
				if (pWVar12 == null) goto label_0585a46f;
				fVar1 = pWVar12._currentSnowForce;
				pUVar8 = typeof(Vector3).static_fields;
				uVar3 = (pUVar8.downVector).x;
				uVar6 = (pUVar8.downVector).y;
				local_38 = CONCAT44(local_38._4_4_ + fVar1 * (float)uVar6, (float)local_38 + fVar1 * (float)uVar3);
				local_3c = local_3c + (pUVar8.downVector).z * fVar1;
			}
		}
		pWVar12 = WeatherManager._instance;
		if (pWVar12 != null) {
			if (pWVar12._currentWindForce <= 0.0) goto label_0585a45c;
			if ((typeof(WeatherManager)._2).cctor_finished_or_no_cctor == 0) {
				pWVar12 = WeatherManager._instance;
				if (pWVar12 == null) goto label_0585a46f;
			}
			pSVar9 = pWVar12._effects;
			if (pSVar9 != null) {
				pWVar11 = pSVar9.get_Item(0xd);
				if (pWVar11 != null) {
					if (0.0 < pWVar11._level) {
						pWVar12 = WeatherManager._instance;
						if (pWVar12 == null) goto label_0585a46f;
						fVar1 = pWVar12._currentWindForce;
						uVar4 = (WindWeatherEffect.WindDirection).x;
						uVar7 = (WindWeatherEffect.WindDirection).y;
						local_38 = CONCAT44(local_38._4_4_ + fVar1 * (float)uVar7, (float)local_38 + fVar1 * (float)uVar4);
						local_3c = local_3c + (WindWeatherEffect.WindDirection).z * fVar1;
					}
	label_0585a45c: ;
					UVar13.z = local_3c;
					UVar13.x = (float)local_38;
					UVar13.y = local_38._4_4_;
					return (Vector3)UVar13;
				}
			}
		}
	label_0585a46f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x5758F00", Offset = "0x5757F00", VA = "0x5758F00")]
	private void RestartWeather()
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$RestartWeather): 9 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		int length;
		List<WeatherScheduleRunner> pSVar3;
		Dictionary<WeatherEffect, BaseWeatherEffect> __this_00;
		Dictionary<int, float> pSVar4;
		List<WeatherEffect> pSVar5;
		Dictionary<WeatherScheduleRunner, float> __this_01;
		WeatherSettings pSVar6;
		SetSettingsContainer<WeatherSet> pSVar7;
		InGameSet pSVar8;
		IntSetting pSVar9;
		ListSetting<T> __this_02;
		StringSetting pSVar10;
		StringSetting pSVar11;
		BoolSetting pSVar12;
		object __this_03;
		bool bVar13;
		WeatherSet pSVar14;
		Map_MapLoader_StaticFields pMVar15;
		WeatherManager pWVar18;
		WeatherSet pSVar19;
		System_Collections_Generic_List_Enumerator_T__o SStack_48;
		byte puStack_28;

		SStack_48._list = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._current = null;
		pWVar18 = this;
		this.ResetCameras();
		pWVar18.ResetSkyboxColors();
		if (Il2CppMethodInitialized_0754508f == false) {
			Il2CppMethodInitialized_0754508f = true;
			if ((typeof(WeatherManager)._2).cctor_finished_or_no_cctor == 0) goto label_05859079;
	label_0585903f: ;
			pWVar18 = WeatherManager._instance;
		}
		else {
			if ((typeof(WeatherManager)._2).cctor_finished_or_no_cctor != 0) goto label_0585903f;
	label_05859079: ;
			pWVar18 = WeatherManager._instance;
		}
		if (pWVar18 == null) goto label_05859509;
		pWVar18._currentWindForce = 0.0;
		pWVar18._currentRainForce = 0.0;
		pWVar18._currentSnowForce = 0.0;
		pSVar3 = this._scheduleRunners;
		if (pSVar3 == null) goto label_05859509;
		piVar1 = &pSVar3._version;
		*piVar1 = *piVar1 + 1;
		length = pSVar3._size;
		pSVar3._size = 0;
		if (0 < length) {
			Array.Clear((Array)pSVar3._items, 0, length);
		}
		__this_00 = this._effects;
		if (__this_00 == null) goto label_05859509;
		__this_00.Clear();
		pSVar14 = this._currentWeather;
		if (pSVar14 == null) goto label_05859509;
		pSVar14.SetDefault();
		pSVar14 = this._startWeather;
		if (pSVar14 == null) goto label_05859509;
		pSVar14.SetDefault();
		pSVar14 = this._targetWeather;
		if (pSVar14 == null) goto label_05859509;
		pSVar14.SetDefault();
		pSVar4 = this._targetWeatherStartTimes;
		if (pSVar4 == null) goto label_05859509;
		pSVar4.Clear();
		pSVar4 = this._targetWeatherEndTimes;
		if (pSVar4 == null) goto label_05859509;
		pSVar4.Clear();
		pSVar5 = this._needApply;
		if (pSVar5 == null) goto label_05859509;
		piVar1 = &pSVar5._version;
		*piVar1 = *piVar1 + 1;
		pSVar5._size = 0;
		this._currentTime = 0.0;
		__this_01 = this._currentScheduleWait;
		if (__this_01 == null) goto label_05859509;
		__this_01.Clear();
		this.CreateEffects();
		this.SetSceneWeather();
		this.ApplyCurrentWeather(true, true);
		if (SceneLoader.SceneName != 2) goto label_058594ea;
		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			bVar13 = PhotonNetwork.IsMasterClient;
		}
		else {
			bVar13 = PhotonNetwork.IsMasterClient;
		}
		if (!bVar13) goto label_058594ea;
		pSVar6 = SettingsManager.WeatherSettings;
		if ((((pSVar6 == null) ||(pSVar7 = pSVar6.WeatherSets, pSVar7 == null)) || (pSVar8 = SettingsManager.InGameCurrent, pSVar8 == null)) ||((pSVar9 = pSVar8.WeatherIndex, pSVar9 == null ||(__this_02 = pSVar7.Sets, __this_02 == null)))) goto label_05859509;
		pSVar14 = (WeatherSet)__this_02.GetItemAt(pSVar9._value);
		if (pSVar14 != null) {
			bVar2 = (typeof(WeatherSet)._2).typeHierarchyDepth;
			if (((pSVar14.klass._2).typeHierarchyDepth < bVar2) ||((pSVar14.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(WeatherSet))) {
				throw new InvalidCastException();
			}
		}
		if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
			pMVar15 = typeof(MapLoader).static_fields;
			if (pMVar15.HasWeather != false) goto label_0585930d;
	label_058593ae: ;
			pSVar19 = this._currentWeather;
			if (pSVar19 == null) goto label_05859509;
		}
		else {
			pMVar15 = typeof(MapLoader).static_fields;
			if (pMVar15.HasWeather == false) goto label_058593ae;
	label_0585930d: ;
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
				if (MapLoader.Weather != null) goto label_0585933f;
				goto label_058593ae;
			}
			if (pMVar15.Weather == null) goto label_058593ae;
	label_0585933f: ;
			if ((pSVar14 == null) ||(pSVar10 = pSVar14.Name, pSVar10 == null)) goto label_05859509;
			bVar13 = (pSVar10._value == "Map Default*");
			if (!bVar13) goto label_058593ae;
			pSVar19 = this._currentWeather;
			if (pSVar19 == null) goto label_05859509;
			pSVar14 = MapLoader.Weather;
		}
		pSVar19.Copy((BaseSetting)pSVar14);
		pSVar14 = this._currentWeather;
		if ((pSVar14 != null) &&(pSVar10 = pSVar14.Schedule, pSVar10 != null)) {
			this.CreateScheduleRunners(pSVar10._value);
			pSVar14 = this._currentWeather;
			if ((pSVar14 != null) &&(pSVar10 = pSVar14.Schedule, pSVar10 != null)) {
				pSVar11 = pSVar10.klass;
				(*(pSVar11.vtable)._4_SetDefault.methodPtr)();
				pSVar14 = this._currentWeather;
				if ((pSVar14 != null) &&(pSVar12 = pSVar14.UseSchedule, pSVar12 != null)) {
					if (pSVar12._value != false) {
						pSVar3 = this._scheduleRunners;
						if (pSVar3 == null) goto label_05859509;
						SStack_48 = pSVar3.GetEnumerator();
						puStack_28 = (byte)&SStack_48;
						while (true) {
							bVar13 = SStack_48.MoveNext();
							__this_03 = SStack_48._current;
							if (!(bVar13)) break;
							if ((WeatherScheduleRunner)SStack_48._current ==null) {
								throw new NullReferenceException();
							}
							SStack_48._current.ProcessSchedule();
							__this_03.ConsumeSchedule();
						}
						SStack_48.Dispose();
					}
					this.SyncWeather();
					this._currentSyncWait = 5.0;
					this._needSync = false;
	label_058594ea: ;
					this._currentLerpWait = 0.05;
					this._finishedLoading = true;
					return;
				}
			}
		}
	label_05859509: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x575A8D0", Offset = "0x57598D0", VA = "0x575A8D0")]
	private void SetSceneWeather()
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$SetSceneWeather): clean
		int iVar1;
		WeatherSet pSVar2;
		ColorSetting __this_00;
		GraphicsSettings pSVar3;
		IntSetting pSVar4;
		Color255 __this_01;

		iVar1 = SceneLoader.SceneName;
		if (iVar1 - 3U < 2) {
			pSVar2 = this._currentWeather;
			if (pSVar2 != null) {
				__this_00 = pSVar2.AmbientLight;
				__this_01 = new Color255(0xff, 0xff, 0xff, 0xff);
				if (__this_00 != null) {
					__this_00.Value = (object)__this_01;
					return;
				}
			}
	label_0585a9ff: ;
			throw new NullReferenceException();
		}
		if (iVar1 == 2) {
			pSVar3 = SettingsManager.GraphicsSettings;
			if ((pSVar3 == null) ||(pSVar4 = pSVar3.WeatherEffects, pSVar4 == null)) goto label_0585a9ff;
			if (pSVar4._value == 0) {
				this.ApplyMapDefaultLighting();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x575C570", Offset = "0x575B570", VA = "0x575C570")]
	private void ApplyMapDefaultLighting()
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$ApplyMapDefaultLighting): 11 lines keep C-only constructs
		byte bVar1;
		WeatherSettings pSVar2;
		SetSettingsContainer<WeatherSet> pSVar3;
		ListSetting<T> __this_00;
		HashSet<WeatherEffect> __this_01;
		WeatherSet pSVar4;
		OrderedDictionary __this_02;
		Il2CppClass pIVar5;
		object pIVar6;
		bool bVar7;
		List<BaseSetting> __this_03;
		String key;
		object pIVar8;
		object pIVar9;
		byte[] auStack_a0 = new byte[8];
		IntPtr pvStack_98;
		uint uStack_90;
		uint uStack_8c;
		byte[] auStack_88 = new byte[8];
		ulong uStack_80;
		object pIStack_78;
		byte[] auStack_68 = new byte[8];
		object pIStack_58;

		auStack_88 = (byte[])0x0;
		uStack_80._0_4_ = 0;
		uStack_80._4_4_ = 0;
		pIStack_78 = null;
		auStack_68 = (byte[])0x0;
		pIStack_58 = null;
		pSVar2 = SettingsManager.WeatherSettings;
		if ((((pSVar2 == null) ||(pSVar3 = pSVar2.WeatherSets, pSVar3 == null)) || (__this_00 = pSVar3.Sets, __this_00 == null)) ||(__this_03 = __this_00.GetItems(), __this_03 == null)) {
			throw new NullReferenceException();
		}
		auStack_a0.GetEnumerator((List<object>)__this_03);
		pIStack_78 = (object)CONCAT44(uStack_8c, uStack_90);
		auStack_88 = auStack_a0;
		uStack_80 = pvStack_98;
		do {
			do {
				bVar7 = auStack_88.MoveNext();
				pIVar6 = pIStack_78;
				if (!bVar7) goto label_0585c972;
				if (pIStack_78 == null) {
					throw new NullReferenceException();
				}
				bVar1 = (typeof(WeatherSet)._2).typeHierarchyDepth;
				if (((pIStack_78.klass._2).typeHierarchyDepth < bVar1) ||((pIStack_78.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(WeatherSet))) {
					throw new InvalidCastException();
				}
				if (pIStack_78[3].monitor == null) {
					throw new NullReferenceException();
				}
			} while (*(sbyte)((long)pIStack_78[3].monitor + 0x19) == false);
			if (pIStack_78[3].klass == null) {
				throw new NullReferenceException();
			}
			bVar7 = (((pIStack_78[3].klass)._1).byval_arg.data != "Map Default*");
		} while (bVar7);
		__this_01 = this.LowEffects;
		if (__this_01 == null) {
			throw new NullReferenceException();
		}
		auStack_a0.GetEnumerator((HashSet<T>)__this_01);
		pIStack_58 = (object)CONCAT44(uStack_8c, uStack_90);
		auStack_68 = auStack_a0;
		do {
			bVar7 = auStack_68.MoveNext();
			if (!bVar7) {
				auStack_68.Dispose();
	label_0585c972: ;
				auStack_88.Dispose();
				return;
			}
			auStack_a0 = (byte[])typeof(WeatherEffect);
			pvStack_98 = (IntPtr)0xffffffffffffffff;
			uStack_90 = pIStack_58._0_4_;
			key = auStack_a0.ToString();
			pSVar4 = this._currentWeather;
			if (pSVar4 == null) {
				throw new NullReferenceException();
			}
			__this_02 = pSVar4.Settings;
			if (__this_02 == null) {
				throw new NullReferenceException();
			}
			pIVar8 = __this_02.get_Item((object)key);
			if (pIVar6[1].monitor == null) {
				throw new NullReferenceException();
			}
			pIVar9 = pIVar6[1].monitor.get_Item((object)key);
			if (pIVar8 == null) {
				throw new NullReferenceException();
			}
			pIVar5 = pIVar8.klass;
			bVar1 = (typeof(BaseSetting)._2).typeHierarchyDepth;
			if (((pIVar5._2).typeHierarchyDepth < bVar1) ||((pIVar5._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BaseSetting))) {
	label_0585c8e0: ;
				throw new InvalidCastException();
			}
			if ((pIVar9 != null) &&(((pIVar9.klass._2).typeHierarchyDepth < bVar1 ||((pIVar9.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BaseSetting))) )) {
				pIVar8 = pIVar9;
				goto label_0585c8e0;
			}
			(*pIVar5.vtable[10].methodPtr)(pIVar8,pIVar9,pIVar5.vtable[10].method);
		} while(true);
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x575BE20", Offset = "0x575AE20", VA = "0x575BE20")]
	private void CreateScheduleRunners(string schedule)
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$CreateScheduleRunners): 10 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<WeatherEvent> pSVar3;
		List<WeatherScheduleRunner> __this_00;
		WeatherScheduleRunner[] pWVar4;
		Dictionary<WeatherScheduleRunner, float> __this_01;
		WeatherEvent[] pWVar5;
		object item;
		bool bVar7;
		WeatherScheduleRunner __this_02;
		WeatherSchedule pWVar8;
		System_Collections_Generic_List_Enumerator_object__o local_68;
		byte[] local_48 = new byte[16];
		WeatherEvent local_38;

		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		__this_02 = new WeatherScheduleRunner(this);
		pWVar8 = new WeatherSchedule(schedule);
		if ((pWVar8 == null) ||(pSVar3 = pWVar8.Events, pSVar3 == null)) {
			throw new NullReferenceException();
		}
		local_48.GetEnumerator((List<object>)pSVar3);
		local_68._current = (object)local_38;
		local_68._list = (List<T>)local_48._0_8_;
		local_68._index = local_48._8_4_;
		local_68._version = local_48._12_4_;
		local_48._0_8_ = null;
		local_48._8_8_ = &local_68;
		do {
			bVar7 = local_68.MoveNext();
			item = local_68._current;
			if (!bVar7) {
				local_68.Dispose();
				return;
			}
			if ((WeatherEvent)local_68._current == null) {
				throw new NullReferenceException();
			}
			if (((WeatherEvent)((long)local_68._current + 0x10)).Action == 0) {
				__this_02 = new WeatherScheduleRunner(this);
				__this_00 = this._scheduleRunners;
				if (__this_00 == null) {
	label_0585c0d5: ;
					throw new NullReferenceException();
				}
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pWVar4 = __this_00._items;
				if (pWVar4 == null) goto label_0585c0d5;
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pWVar4.Length) {
					__this_00._size = uVar2 + 1;
					pWVar4[(int)uVar2] = __this_02;
				}
				else {
					__this_00.AddWithResize((object)__this_02);
				}
				__this_01 = this._currentScheduleWait;
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				__this_01.Add((object)__this_02, 0.0);
			}
			if (__this_02 == null) {
				throw new NullReferenceException();
			}
			pWVar8 = __this_02.Schedule;
			if (pWVar8 == null) {
				throw new NullReferenceException();
			}
			pSVar3 = pWVar8.Events;
			if (pSVar3 == null) {
	label_0585c0c1: ;
				throw new NullReferenceException();
			}
			piVar1 = &pSVar3._version;
			*piVar1 = *piVar1 + 1;
			pWVar5 = pSVar3._items;
			if (pWVar5 == null) goto label_0585c0c1;
			uVar2 = pSVar3._size;
			if (uVar2 < (uint)pWVar5.Length) {
				pSVar3._size = uVar2 + 1;
				pWVar5[(int)uVar2] = (WeatherEvent)item;
			}
			else {
				pSVar3.AddWithResize(item);
			}
		} while(true);
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x575A480", Offset = "0x5759480", VA = "0x575A480")]
	private void CreateEffects()
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$CreateEffects): 7 lines keep C-only constructs
		Dictionary<WeatherEffect, BaseWeatherEffect> pSVar1;
		String path;
		BaseCamera pCVar2;
		BaseComponentCache pUVar3;
		object pIVar4;
		bool bVar5;
		GameObject pUVar6;
		RainWeatherEffect value;
		SnowWeatherEffect value_00;
		WindWeatherEffect value_01;
		ThunderWeatherEffect value_02;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_00;
		MethodInfo method_00;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_58;
		byte local_38;

		local_58._dictionary = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._currentValue = null;
		pSVar1 = this._effects;
		path = ResourcePaths.Weather;
		pUVar6 = ResourceManager.InstantiateAsset<GameObject>(path, "Prefabs/RainEffect", false, false);
		if (pUVar6 != null) {
			value = pUVar6.AddComponent<RainWeatherEffect>();
			if (pSVar1 != null) {
				pSVar1.Add(10, (object)value);
				pSVar1 = this._effects;
				pUVar6 = ResourceManager.InstantiateAsset<GameObject>(ResourcePaths.Weather, "Prefabs/SnowEffect", false, false);
				if (pUVar6 != null) {
					value_00 = pUVar6.AddComponent<SnowWeatherEffect>();
					if (pSVar1 != null) {
						pSVar1.Add(0xc, (object)value_00);
						pSVar1 = this._effects;
						pUVar6 = ResourceManager.InstantiateAsset<GameObject>(ResourcePaths.Weather, "Prefabs/WindEffect", false, false);
						if (pUVar6 != null) {
							value_01 = pUVar6.AddComponent<WindWeatherEffect>();
							if (pSVar1 != null) {
								pSVar1.Add(0xd, (object)value_01) ;
								pSVar1 = this._effects;
								pUVar6 = ResourceManager.InstantiateAsset<GameObject>(ResourcePaths.Weather, "Prefabs/ThunderEffect", false, false);
								if (pUVar6 != null) {
									value_02 = pUVar6.AddComponent<ThunderWeatherEffect>();
									if (pSVar1 != null ) {
										pSVar1.Add(0xb, (object)value_02);
										pSVar1 = this._effects;
										if (pSVar1 != (Dictionary<WeatherEffect, BaseWeatherEffect>)0x0) {
											__this_00 = pSVar1.Values;
											if (__this_00 !=null) {
												local_58 = __this_00.GetEnumerator();
												local_38 = (byte)&local_58;
												while(true) {
													bVar5 = local_58.MoveNext();
													pIVar4 = local_58._currentValue;
													if (!bVar5) {
														method_00 = MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_WeatherEffect_BaseWeatherEffect ;
														local_58.Dispose();
														this.CreateFlashlight();
														return;
													}
													pCVar2 = SceneLoader.CurrentCamera;
													if (pCVar2 == null) {
														throw new NullReferenceException();
													}
													pUVar3 = pCVar2.Cache;
													if (pUVar3 == null) {
														throw new NullReferenceException();
													}
													if (local_58._currentValue == null) break;
													(*(local_58._currentValue).klass.vtable[0xb].methodPtr)(local_58._currentValue,pUVar3.Transform,(local_58._currentValue).klass.vtable[0xb].method);
													(*pIVar4.klass.vtable[8].methodPtr)(pIVar4,pIVar4.klass.vtable[8].method);
													(*pIVar4.klass.vtable[6].methodPtr)(pIVar4,0,pIVar4.klass.vtable[6].method);
												}
												throw new NullReferenceException();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x575CA50", Offset = "0x575BA50", VA = "0x575CA50")]
	private void CreateFlashlight()
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$CreateFlashlight): clean
		Dictionary<WeatherEffect, BaseWeatherEffect> pSVar1;
		String path;
		BaseCamera pCVar2;
		BaseComponentCache pUVar3;
		Transform parent;
		GameObject __this_00;
		FlashlightWeatherEffect value;
		BaseWeatherEffect pWVar4;

		pSVar1 = this._effects;
		path = ResourcePaths.Weather;
		__this_00 = ResourceManager.InstantiateAsset<GameObject>(path, "Prefabs/FlashlightEffect", false, false);
		if (__this_00 != null) {
			value = __this_00.AddComponent<FlashlightWeatherEffect>();
			if (pSVar1 != null) {
				pSVar1.Add(7, (object)value);
				pSVar1 = this._effects;
				if (pSVar1 != null) {
					pWVar4 = pSVar1.get_Item(7);
					if (pWVar4 != null) {
						pWVar4.Setup(null);
						pSVar1 = this._effects;
						if (pSVar1 != null) {
							pWVar4 = pSVar1.get_Item(7);
							if (pWVar4 != null) {
								pWVar4.Disable(false);
								pCVar2 = SceneLoader.CurrentCamera;
								if ((pCVar2 != null) &&(pUVar3 = pCVar2.Cache, pUVar3 != null)) {
									parent = pUVar3.Transform;
									WeatherManager.TakeFlashlight(parent);
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x575CC40", Offset = "0x575BC40", VA = "0x575CC40")]
	private void FixedUpdate()
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$FixedUpdate): 9 lines keep C-only constructs
		int piVar1;
		Dictionary<int, float> __this_00;
		WeatherSet pSVar2;
		BoolSetting pSVar3;
		Dictionary<WeatherScheduleRunner, float> pSVar4;
		object __this_01;
		bool bVar5;
		int iVar6;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o collection;
		List<WeatherScheduleRunner> pSVar7;
		float fVar9;
		float fVar10;
		byte[] auStack_60 = new byte[16];
		WeatherScheduleRunner pWStack_50;
		System_Collections_Generic_List_Enumerator_object__o SStack_48;

		if ((SceneLoader.SceneName != 2) ||(this._finishedLoading == false)) {
			return;
		}
		fVar10 = this._currentTime;
		fVar9 = Time.fixedDeltaTime;
		this._currentTime = fVar9 + fVar10;
		__this_00 = this._targetWeatherStartTimes;
		if (__this_00 != null) {
			iVar6 = __this_00.Count;
			if (0 < iVar6) {
				fVar10 = this._currentLerpWait;
				fVar9 = Time.fixedDeltaTime;
				fVar10 = fVar10 - fVar9;
				this._currentLerpWait = fVar10;
				if (fVar10 <= 0.0) {
					this.LerpCurrentWeatherToTarget();
					this.ApplyCurrentWeather(false, false);
					this._currentLerpWait = 0.05;
				}
			}
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
				bVar5 = PhotonNetwork.IsMasterClient;
			}
			else {
				bVar5 = PhotonNetwork.IsMasterClient;
			}
			if (!bVar5) {
				return;
			}
			pSVar2 = this._currentWeather;
			if ((pSVar2 != null) &&(pSVar3 = pSVar2.UseSchedule, pSVar3 != null)) {
				if (pSVar3._value == false) {
					return;
				}
				pSVar7 = this._scheduleKeys;
				if (pSVar7 != null) {
					piVar1 = &pSVar7._version;
					*piVar1 = *piVar1 + 1;
					iVar6 = pSVar7._size;
					pSVar7._size = 0;
					if (0 < iVar6) {
						Array.Clear((Array)pSVar7._items, 0, iVar6);
						pSVar7 = this._scheduleKeys;
					}
					pSVar4 = this._currentScheduleWait;
					if ((pSVar4 != null) &&(collection = pSVar4.Keys, pSVar7 != null)) {
						pSVar7.AddRange((IEnumerable<T>)collection);
						pSVar7 = this._scheduleKeys;
						if (pSVar7 != null) {
							auStack_60.GetEnumerator((List<object>)pSVar7);
							SStack_48._current = (object)pWStack_50;
							SStack_48._list = (List<T>)auStack_60._0_8_;
							SStack_48._index = auStack_60._8_4_;
							SStack_48._version = auStack_60._12_4_;
							auStack_60._0_8_ = null;
							auStack_60._8_8_ = &SStack_48;
							while (true) {
								bVar5 = SStack_48.MoveNext();
								__this_01 = SStack_48._current;
								if (!(bVar5)) break;
								pSVar4 = this._currentScheduleWait;
								if (pSVar4 == null) {
									throw new NullReferenceException();
								}
								fVar10 = pSVar4.get_Item(SStack_48._current);
								fVar9 = Time.fixedDeltaTime;
								pSVar4.set_Item(__this_01, fVar10 - fVar9);
								pSVar4 = this._currentScheduleWait;
								if (pSVar4 == null) {
									throw new NullReferenceException();
								}
								fVar10 = pSVar4.get_Item(__this_01);
								if (fVar10 <= 0.0) {
									if ((WeatherScheduleRunner)__this_01 == null) {
										throw new NullReferenceException();
									}
									__this_01.ConsumeSchedule();
								}
							}
							SStack_48.Dispose();
							fVar10 = this._currentSyncWait;
							fVar9 = Time.fixedDeltaTime;
							fVar10 = fVar10 - fVar9;
							this._currentSyncWait = fVar10;
							if (0.0 < fVar10) {
								return;
							}
							if (this._needSync == false) {
								return;
							}
							this.LerpCurrentWeatherToTarget();
							this.SyncWeather();
							this._needSync = false;
							this._currentSyncWait = 5.0;
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x575C160", Offset = "0x575B160", VA = "0x575C160")]
	private void SyncWeather()
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$SyncWeather): 9 lines keep C-only constructs
		PhotonView __this_00;
		WeatherSet pSVar1;
		CompressionAlgorithm pUVar2;
		Dictionary<int, float> pSVar3;
		bool bVar4;
		Object[] parameters;
		String pSVar5;
		Byte[] pSVar6;
		object pIVar7;
		object pIVar8;
		float local_2c;

		this.ApplyCurrentWeather(false, true);
		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			bVar4 = PhotonNetwork.IsMasterClient;
		}
		else {
			bVar4 = PhotonNetwork.IsMasterClient;
		}
		if (!bVar4) {
			return;
		}
		__this_00 = RPCManager.PhotonView;
		parameters = (Object[])new object[6];
		pSVar1 = this._currentWeather;
		if (pSVar1 != null) {
			pUVar2 = (CompressionAlgorithm)DataCompressors.Brotli;
			pSVar5 = pSVar1.SerializeToJsonString();
			if ((pUVar2 != null) &&(pSVar6 = pUVar2.CompressString(pSVar5, 1), parameters != null)) {
				if ((pSVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(&pSVar6.obj, (((parameters.obj).klass)._1).element_class), pIVar7 == null)) goto label_0585c4fb;
				if ((int)parameters.Length == 0) goto label_0585c4f6;
				parameters[0] = &pSVar6.obj;
				pSVar1 = this._startWeather;
				if (pSVar1 != null) {
					pUVar2 = (CompressionAlgorithm)DataCompressors.Brotli;
					pSVar5 = pSVar1.SerializeToJsonString();
					if (pUVar2 != null) {
						pSVar6 = pUVar2.CompressString(pSVar5, 1);
						if ((pSVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(&pSVar6.obj, (((parameters.obj).klass)._1).element_class), pIVar7 == null)) goto label_0585c4fb;
						if ((parameters.Length & 0xfffffffe) == 0) goto label_0585c4f6;
						parameters[1] = &pSVar6.obj;
						pSVar1 = this._targetWeather;
						if (pSVar1 != null) {
							pUVar2 = (CompressionAlgorithm)DataCompressors.Brotli;
							pSVar5 = pSVar1.SerializeToJsonString();
							if (pUVar2 != null) {
								pSVar6 = pUVar2.CompressString(pSVar5, 1);
								if ((pSVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(&pSVar6.obj, (((parameters.obj).klass)._1).element_class) , pIVar7 == null)) {
	label_0585c4fb: ;
									pIVar7 = new ArrayTypeMismatchException();
									throw pIVar7;
								}
								if (2 < (uint)parameters.Length) {
									parameters[2] = &pSVar6.obj;
									pSVar3 = this._targetWeatherStartTimes;
									if ((pSVar3 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst((object)pSVar3, (((parameters.obj).klass)._1).element_class), pIVar7 == null)) goto label_0585c4fb;
									if ((parameters.Length & 0xfffffffc) != 0) {
										parameters[3] = (object)pSVar3;
										pSVar3 = this._targetWeatherEndTimes;
										if ((pSVar3 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst((object)pSVar3, (((parameters.obj).klass)._1).element_class), pIVar7 == null)) goto label_0585c4fb;
										if (4 < (uint)parameters.Length) {
											parameters[4] = (object)pSVar3;
											local_2c = this._currentTime;
											pIVar7 = (object)local_2c;
											if ((pIVar7 != null) &&(pIVar8 = il2cpp_vm_Object_IsInst(pIVar7, (((parameters.obj).klass)._1).element_class) , pIVar8 == null)) goto label_0585c4fb;
											if (5 < (uint)parameters.Length) {
												parameters[5] = pIVar7;
												if (__this_00 != null) {
													__this_00.RPC("SetWeatherRPC", 1, parameters);
													return;
												}
												goto label_0585c4f1;
											}
										}
									}
								}
	label_0585c4f6: ;
								throw new IndexOutOfRangeException();
							}
						}
					}
				}
			}
		}
	label_0585c4f1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x575DC90", Offset = "0x575CC90", VA = "0x575DC90", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$OnPlayerEnteredRoom): 13 lines keep C-only constructs
		PhotonView __this_00;
		WeatherSet pSVar1;
		CompressionAlgorithm pUVar2;
		Dictionary<int, float> pSVar3;
		bool bVar4;
		ulong in_RAX;
		Object[] parameters;
		String pSVar5;
		Byte[] pSVar6;
		object pIVar7;
		object pIVar8;
		ulong uStack_38;

		uStack_38 = in_RAX;
		if (Il2CppMethodInitialized_07545099 == false) {
			Il2CppMethodInitialized_07545099 = true;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_0585dcbd;
	label_0585dd23: ;
			bVar4 = PhotonNetwork.IsMasterClient;
		}
		else {
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_0585dd23;
	label_0585dcbd: ;
			bVar4 = PhotonNetwork.IsMasterClient;
		}
		if (!bVar4) {
			return;
		}
		__this_00 = RPCManager.PhotonView;
		parameters = (Object[])new object[6];
		pSVar1 = this._currentWeather;
		if (pSVar1 != null) {
			pUVar2 = (CompressionAlgorithm)DataCompressors.Brotli;
			pSVar5 = pSVar1.SerializeToJsonString();
			if ((pUVar2 != null) &&(pSVar6 = pUVar2.CompressString(pSVar5, 1), parameters != null)) {
				if ((pSVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(&pSVar6.obj, (((parameters.obj).klass)._1).element_class), pIVar7 == null)) goto label_0585e024;
				if ((int)parameters.Length == 0) goto label_0585e01f;
				parameters[0] = &pSVar6.obj;
				pSVar1 = this._startWeather;
				if (pSVar1 != null) {
					pUVar2 = (CompressionAlgorithm)DataCompressors.Brotli;
					pSVar5 = pSVar1.SerializeToJsonString();
					if (pUVar2 != null) {
						pSVar6 = pUVar2.CompressString(pSVar5, 1);
						if ((pSVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(&pSVar6.obj, (((parameters.obj).klass)._1).element_class), pIVar7 == null)) goto label_0585e024;
						if ((parameters.Length & 0xfffffffe) == 0) goto label_0585e01f;
						parameters[1] = &pSVar6.obj;
						pSVar1 = this._targetWeather;
						if (pSVar1 != null) {
							pUVar2 = (CompressionAlgorithm)DataCompressors.Brotli;
							pSVar5 = pSVar1.SerializeToJsonString();
							if (pUVar2 != null) {
								pSVar6 = pUVar2.CompressString(pSVar5, 1);
								if ((pSVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(&pSVar6.obj, (((parameters.obj).klass)._1).element_class) , pIVar7 == null)) {
	label_0585e024: ;
									pIVar7 = new ArrayTypeMismatchException();
									throw pIVar7;
								}
								if (2 < (uint)parameters.Length) {
									parameters[2] = &pSVar6.obj;
									pSVar3 = this._targetWeatherStartTimes;
									if ((pSVar3 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst((object)pSVar3, (((parameters.obj).klass)._1).element_class), pIVar7 == null)) goto label_0585e024;
									if ((parameters.Length & 0xfffffffc) != 0) {
										parameters[3] = (object)pSVar3;
										pSVar3 = this._targetWeatherEndTimes;
										if ((pSVar3 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst((object)pSVar3, (((parameters.obj).klass)._1).element_class), pIVar7 == null)) goto label_0585e024;
										if (4 < (uint)parameters.Length) {
											parameters[4] = (object)pSVar3;
											uStack_38 = CONCAT44(this._currentTime, (undefined4)uStack_38);
											pIVar7 = (object)(((long)&uStack_38 + 4));
											if ((pIVar7 != null) &&(pIVar8 = il2cpp_vm_Object_IsInst(pIVar7, (((parameters.obj).klass)._1).element_class) , pIVar8 == null)) goto label_0585e024;
											if (5 < (uint)parameters.Length) {
												parameters[5] = pIVar7;
												if (__this_00 != null) {
													__this_00.RPC("SetWeatherRPC", player, parameters);
													return;
												}
												goto label_0585e01a;
											}
										}
									}
								}
	label_0585e01f: ;
								throw new IndexOutOfRangeException();
							}
						}
					}
				}
			}
		}
	label_0585e01a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x575D0A0", Offset = "0x575C0A0", VA = "0x575D0A0")]
	private void LerpCurrentWeatherToTarget()
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$LerpCurrentWeatherToTarget): 41 lines keep C-only constructs
		int piVar1;
		ulong uVar2;
		byte bVar3;
		uint uVar4;
		List<int> pSVar5;
		Dictionary<int, float> pSVar6;
		Int32[] pSVar7;
		String[] pSVar8;
		WeatherSet pSVar9;
		OrderedDictionary pSVar10;
		String key;
		StringSetting pSVar11;
		MethodInfo pMVar12;
		List<T> __this_00;
		Object[] pSVar13;
		uint item;
		int key_00;
		bool bVar14;
		object pIVar15;
		Settings_TypedSetting_Vector3__o __this_01;
		object pIVar16;
		Color255 value;
		Material __this_02;
		WeatherManager __this_03;
		float fVar17;
		float fVar18;
		float fVar19;
		float fVar20;
		float fVar21;
		Vector3 value_00;
		byte[] local_88 = new byte[16];
		object local_78;
		byte[] local_68 = new byte[8];
		ulong local_58;
		System_Collections_Generic_List_Enumerator_T__o local_48;

		local_58 = null;
		local_68 = (byte[])0x0;
		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		pSVar5 = this._finishedLerps;
		if (pSVar5 != null) {
			piVar1 = &pSVar5._version;
			*piVar1 = *piVar1 + 1;
			pSVar5._size = 0;
			pSVar6 = this._targetWeatherEndTimes;
			if (pSVar6 != null) {
				local_88.GetEnumerator(pSVar6);
				local_58 = local_78;
				local_68 = (byte[])local_88._0_8_;
				local_88._0_8_ = null;
				local_88._8_8_ = local_68;
				while (true) {
					bVar14 = local_68.MoveNext();
					pMVar12 = MethodInfo_System_Collections_Generic_List_int_Add;
					if (!(bVar14)) break;
					item = (uint)local_58;
					fVar21 = local_58._4_4_;
					if (local_58._4_4_ <= this._currentTime) {
						pSVar5 = this._finishedLerps;
						if (pSVar5 == null) {
	label_0585da7f: ;
							throw new NullReferenceException();
						}
						piVar1 = &pSVar5._version;
						*piVar1 = *piVar1 + 1;
						pSVar7 = pSVar5._items;
						if (pSVar7 == null) goto label_0585da7f;
						uVar4 = pSVar5._size;
						if (uVar4 < (uint)pSVar7.Length) {
							pSVar5._size = uVar4 + 1;
							pSVar7[(int)uVar4] = (uint)local_58;
							fVar17 = 1.0;
						}
						else {
							pSVar5.AddWithResize((uint)local_58);
							fVar17 = 1.0;
						}
					}
					else {
						pSVar6 = this._targetWeatherStartTimes;
						if (pSVar6 == null) {
							throw new NullReferenceException();
						}
						fVar17 = pSVar6.get_Item((uint)local_58);
						fVar21 = fVar21 - fVar17;
						if (fVar21 <= 1.0) {
							fVar21 = 1.0;
						}
						fVar21 = (this._currentTime - fVar17) / fVar21;
						fVar17 = 1.0;
						if (fVar21 <= 1.0) {
							fVar17 = fVar21;
						}
						fVar17 = (float)(-(uint)(0.0 <= fVar21) & (uint)fVar17);
					}
					pSVar8 = WeatherManager.EffectNames;
					if (pSVar8 == null) {
						throw new NullReferenceException();
					}
					if ((uint)pSVar8.Length <= item) {
						throw new IndexOutOfRangeException();
					}
					pSVar9 = this._startWeather;
					if (pSVar9 == null) {
						throw new NullReferenceException();
					}
					pSVar10 = pSVar9.Settings;
					if (pSVar10 == null) {
						throw new NullReferenceException();
					}
					key = pSVar8[(int)item];
					pIVar15 = pSVar10.get_Item((object)key);
					if (pIVar15 != null) {
						bVar3 = (typeof(BaseSetting)._2).typeHierarchyDepth;
						if (((pIVar15.klass._2).typeHierarchyDepth < bVar3) ||((pIVar15.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(BaseSetting))) {
							throw new InvalidCastException();
						}
					}
					pSVar9 = this._currentWeather;
					if (pSVar9 == null) {
						throw new NullReferenceException();
					}
					pSVar10 = pSVar9.Settings;
					if (pSVar10 == null) {
						throw new NullReferenceException();
					}
					__this_01 = (Settings_TypedSetting_Vector3__o)pSVar10.get_Item((object)key);
					if (__this_01 != null) {
						bVar3 = (typeof(BaseSetting)._2).typeHierarchyDepth;
						if (((__this_01.klass._2).typeHierarchyDepth < bVar3) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(BaseSetting))) {
							throw new InvalidCastException();
						}
					}
					pSVar9 = this._targetWeather;
					if (pSVar9 == null) {
						throw new NullReferenceException();
					}
					__this_03 = (WeatherManager)pSVar9.Settings;
					if (__this_03 == null) {
						throw new NullReferenceException();
					}
					pIVar16 = __this_03.get_Item((object)key);
					if (pIVar16 != null) {
						bVar3 = (typeof(BaseSetting)._2).typeHierarchyDepth;
						if (((pIVar16.klass._2).typeHierarchyDepth < bVar3) ||((pIVar16.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(BaseSetting))) {
							throw new InvalidCastException();
						}
					}
					switch(item) {
					case 1:
					case 4:
					case 6:
					case 7:
					case 9:
						if (pIVar15 == null) {
							throw new NullReferenceException();
						}
						bVar3 = (typeof(ColorSetting)._2).typeHierarchyDepth;
						if (((pIVar15.klass._2).typeHierarchyDepth < bVar3) ||((pIVar15.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(ColorSetting))) {
							throw new InvalidCastException();
						}
						if (pIVar16 == null) {
							throw new NullReferenceException();
						}
						if (((pIVar16.klass._2).typeHierarchyDepth < bVar3) ||((pIVar16.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(ColorSetting))) {
							throw new InvalidCastException();
						}
						value = Color255.Lerp((Color255)pIVar15[2].klass, (Color255)pIVar16[2].klass, fVar17);
						if (__this_01 == null) {
							throw new NullReferenceException();
						}
						bVar3 = (typeof(ColorSetting)._2).typeHierarchyDepth;
						if (((__this_01.klass._2).typeHierarchyDepth < bVar3) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(ColorSetting))) {
							throw new InvalidCastException();
						}
						__this_01.Value = (object)value;
						break;
					case 2:
					case 8:
					case 10:
					case 0xb:
					case 0xc:
					case 0xd:
					case 0xf:
					case 0x10:
					case 0x11:
						if (pIVar15 == null) {
							throw new NullReferenceException();
						}
						bVar3 = (typeof(FloatSetting)._2).typeHierarchyDepth;
						if (((pIVar15.klass._2).typeHierarchyDepth < bVar3) ||((pIVar15.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(FloatSetting))) {
							throw new InvalidCastException();
						}
						if (pIVar16 == null) {
							throw new NullReferenceException();
						}
						if (((pIVar16.klass._2).typeHierarchyDepth < bVar3) ||((pIVar16.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(FloatSetting))) {
							throw new InvalidCastException();
						}
						if (__this_01 == null) {
							throw new NullReferenceException();
						}
						if (((__this_01.klass._2).typeHierarchyDepth < bVar3) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(FloatSetting))) {
							throw new InvalidCastException();
						}
						fVar21 = *(float)((long)&pIVar15[1].monitor + 4);
						fVar18 = 0.0;
						if (0.0 <= fVar17) {
							fVar18 = fVar17;
						}
						__this_01.Value = (*(float)((long)&pIVar16[1].monitor + 4) - fVar21) * fVar18 + fVar21;
						break;
					case 3:
					case 0xe:
						if (pIVar15 == null) {
							throw new NullReferenceException();
						}
						bVar3 = (typeof(Vector3Setting)._2).typeHierarchyDepth;
						if (((pIVar15.klass._2).typeHierarchyDepth < bVar3) ||((pIVar15.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(Vector3Setting))) {
							throw new InvalidCastException();
						}
						if (pIVar16 == null) {
							throw new NullReferenceException();
						}
						if (((pIVar16.klass._2).typeHierarchyDepth < bVar3) ||((pIVar16.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(Vector3Setting))) {
							throw new InvalidCastException();
						}
						if (__this_01 == null) {
							throw new NullReferenceException();
						}
						if (((__this_01.klass._2).typeHierarchyDepth < bVar3) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(Vector3Setting))) {
							throw new InvalidCastException();
						}
						uVar2 = *(ulong)((long)&pIVar15[2].klass + 4);
						fVar19 = (float)uVar2;
						fVar20 = (float)((ulong)uVar2 >> 0x20);
						fVar21 = *(float)((long)&pIVar15[2].monitor + 4);
						uVar2 = *(ulong)((long)&pIVar16[2].klass + 4);
						fVar18 = 0.0;
						if (0.0 <= fVar17) {
							fVar18 = fVar17;
						}
						value_00.x = fVar18 * ((float)uVar2 - fVar19) + fVar19;
						value_00.y = fVar18 * ((float)((ulong)uVar2 >> 0x20) - fVar20) + fVar20;
						value_00.z = (*(float)((long)&pIVar16[2].monitor + 4) - fVar21) * fVar18 + fVar21;
						__this_01.Value = value_00;
						break;
					case 5:
						pSVar9 = this._currentWeather;
						if (pSVar9 == null) {
							throw new NullReferenceException();
						}
						pSVar11 = pSVar9.Skybox;
						if (pSVar11 == null) {
							throw new NullReferenceException();
						}
						pSVar9 = this._targetWeather;
						if (pSVar9 == null) {
							throw new NullReferenceException();
						}
						pMVar12 = (MethodInfo)pSVar9.Skybox;
						if (pMVar12 == null) {
							throw new NullReferenceException();
						}
						__this_02 = __this_03.GetBlendedSkybox(pSVar11._value, (String)pMVar12.klass) ;
						bVar14 = ((Object)__this_02 != null) ;
						if (bVar14) {
							if (1.0 <= fVar17) {
								if (pIVar16 == null) {
									throw new NullReferenceException();
								}
								bVar3 = (typeof(StringSetting)._2).typeHierarchyDepth;
								if (((pIVar16.klass._2).typeHierarchyDepth < bVar3) ||((pIVar16.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(StringSetting))) {
									throw new InvalidCastException();
								}
								if (__this_01 == null) {
									throw new NullReferenceException();
								}
								if (((__this_01.klass._2).typeHierarchyDepth < bVar3) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(StringSetting))) {
									throw new InvalidCastException();
								}
								__this_01.Value = (object)pIVar16[2].klass;
							}
							if (__this_02 == null) {
								throw new NullReferenceException();
							}
							__this_02.SetFloat("_Blend", fVar17);
						}
					}
					pMVar12 = MethodInfo_System_Collections_Generic_List_WeatherEffect_Add;
					__this_00 = (List<T>)this._needApply;
					if (__this_00 == null) {
	label_0585da30: ;
						throw new NullReferenceException();
					}
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar13 = __this_00._items;
					if (pSVar13 == null) goto label_0585da30;
					uVar4 = __this_00._size;
					if (uVar4 < (uint)pSVar13.Length) {
						__this_00._size = uVar4 + 1;
						*(uint)((long)pSVar13.m_Items + (long)(int)uVar4 * 4) = item;
					}
					else {
						__this_00.AddWithResize(item);
					}
				}
				local_68.Dispose();
				pSVar5 = this._finishedLerps;
				if (pSVar5 != null) {
					local_48 = pSVar5.GetEnumerator();
					local_88._0_8_ = null;
					local_88._8_8_ = &local_48;
					while(true) {
						bVar14 = local_48.MoveNext();
						if (!bVar14) {
							local_48.Dispose();
							return;
						}
						pSVar6 = this._targetWeatherStartTimes;
						if (pSVar6 == null) break;
						key_00 = (int32_t)local_48._current;
						pSVar6.Remove((int32_t)local_48._current);
						pSVar6 = this._targetWeatherEndTimes;
						if (pSVar6 == null) {
							throw new NullReferenceException();
						}
						pSVar6.Remove(key_00);
					}
					throw new NullReferenceException();
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x575AA10", Offset = "0x5759A10", VA = "0x575AA10")]
	private void ApplyCurrentWeather(bool firstStart, bool applyAll)
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$ApplyCurrentWeather): 40 lines keep C-only constructs
		int piVar1;
		float fVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		byte bVar9;
		int iVar10;
		uint uVar11;
		GraphicsSettings pSVar12;
		IntSetting pSVar13;
		List<T> pSVar14;
		OrderedDictionary __this_00;
		Dictionary<WeatherEffect, BaseWeatherEffect> pSVar15;
		WeatherSet pSVar16;
		FloatSetting pSVar17;
		WeatherSet pSVar18;
		StringSetting pSVar19;
		String skybox2;
		StringSetting pSVar20;
		BaseWeatherEffect pWVar21;
		ColorSetting pSVar22;
		Color255 pUVar23;
		Vector3Setting pSVar24;
		List<Light> pSVar25;
		List<WeatherEffect> pSVar27;
		byte[] auVar28 = new byte[16];
		Light __this_01;
		bool bVar29;
		String pSVar30;
		object pIVar31;
		BaseWeatherEffect pWVar32;
		GameObject pUVar33;
		IEnumerator routine;
		Material __this_02;
		Transform __this_03;
		UnityEngine_Vector3_StaticFields pUVar34;
		MethodInfo pMVar35;
		WeatherManager pWVar36;
		float fVar37;
		uint uVar38;
		uint extraout_XMM0_Db;
		byte[] auVar39 = new byte[16];
		Color UVar40;
		Quaternion value;
		float local_c8;
		byte[] local_c0 = new byte[8];
		System_Collections_Generic_List_Enumerator_object__o pSStack_b8;
		float local_b0;
		float fStack_ac;
		byte[] local_a8 = new byte[8];
		Light local_98;
		byte[] local_88 = new byte[16];
		object local_78;
		float local_68;
		float fStack_64;
		HashSet<WeatherEffect> pSStack_60;
		WeatherSet local_40;
		float local_38;

		local_88._0_8_ = null;
		local_88._8_8_ = null;
		local_78 = null;
		local_a8 = (byte[])0x0;
		local_98 = null;
		if (!firstStart) {
			pSVar12 = SettingsManager.GraphicsSettings;
			if ((pSVar12 == null) ||(pSVar13 = pSVar12.WeatherEffects, pSVar13 == null)) goto label_0585ba83;
			if (pSVar13._value == 0) {
				return;
			}
		}
		if (applyAll) {
			pSVar14 = (List<T>)this._needApply;
			if (pSVar14 == null) goto label_0585ba83;
			piVar1 = &pSVar14._version;
			*piVar1 = *piVar1 + 1;
			pSVar14._size = 0;
			pSVar14.AddRange((IEnumerable<T>)WeatherManager.AllEffects);
		}
		pSVar12 = SettingsManager.GraphicsSettings;
		if (((pSVar12 != null) &&(pSVar13 = pSVar12.WeatherEffects, pSVar13 != null)) &&(pSVar14 = (List<T>)this._needApply, pSVar14 != null)) {
			iVar10 = pSVar13._value;
			local_c0.GetEnumerator(pSVar14);
			local_78 = (object)CONCAT44(fStack_ac, local_b0);
			local_88._0_8_ = local_c0;
			local_88._8_8_ = pSStack_b8;
	switchD_0585ad4f_default: ;
			pWVar36 = (WeatherManager)local_88;
			bVar29 = pWVar36.MoveNext();
			if (bVar29) {
				fVar37 = local_78._0_4_;
				if (iVar10 == 1 && !firstStart) goto code_r0x0585ad17;
				goto label_0585ad39;
			}
			local_88.Dispose();
			pSVar27 = this._needApply;
			if (pSVar27 != null) {
				piVar1 = &pSVar27._version;
				*piVar1 = *piVar1 + 1;
				pSVar27._size = 0;
				return;
			}
		}
	label_0585ba83: ;
		throw new NullReferenceException();
	code_r0x0585ad17: ;
		pWVar36 = (WeatherManager)this.LowEffects;
		if (pWVar36 == null) {
			throw new NullReferenceException();
		}
		bVar29 = pWVar36.Contains((int32_t)local_78._0_4_);
		if (bVar29) {
	label_0585ad39: ;
			switch(fVar37) {
			case 1.4013e-45:
				pSVar25 = MapLoader.Daylight;
				if (pSVar25 == null) {
					throw new NullReferenceException();
				}
				local_c0.GetEnumerator((List<object>)pSVar25);
				local_98 = (Light)CONCAT44(fStack_ac, local_b0);
				local_a8 = local_c0;
				local_c0 = (byte[])0x0;
				pSStack_b8 = (System_Collections_Generic_List_Enumerator_object__o)local_a8;
				while (true) {
					bVar29 = local_a8.MoveNext();
					__this_01 = local_98;
					if (!(bVar29)) break;
					pSVar16 = this._currentWeather;
					if (pSVar16 == null) {
						throw new NullReferenceException();
					}
					pSVar22 = pSVar16.Daylight;
					if (pSVar22 == null) {
						throw new NullReferenceException();
					}
					pUVar23 = pSVar22._value;
					if (pUVar23 == null) {
						throw new NullReferenceException();
					}
					UVar40 = pUVar23.ToColor();
					if (__this_01 == null) {
						throw new NullReferenceException();
					}
					__this_01.color = UVar40;
				}
				local_a8.Dispose();
				break;
			case 2.8026e-45:
				pSVar25 = MapLoader.Daylight;
				if (pSVar25 == null) {
					throw new NullReferenceException();
				}
				local_c0.GetEnumerator((List<object>)pSVar25);
				local_98 = (Light)CONCAT44(fStack_ac, local_b0);
				local_a8 = local_c0;
				local_c0 = (byte[])0x0;
				pSStack_b8 = (System_Collections_Generic_List_Enumerator_object__o)local_a8;
				while (bVar29 = local_a8.MoveNext()) {
					pSVar16 = this._currentWeather;
					if (pSVar16 == null) {
						throw new NullReferenceException();
					}
					pSVar17 = pSVar16.DaylightIntensity;
					if (pSVar17 == null) {
						throw new NullReferenceException();
					}
					if (local_98 == null) {
						throw new NullReferenceException();
					}
					local_98.intensity = pSVar17._value;
				}
				local_a8.Dispose();
				break;
			case 4.2039e-45:
				pSVar25 = MapLoader.Daylight;
				if (pSVar25 == null) {
					throw new NullReferenceException();
				}
				local_c0.GetEnumerator((List<object>)pSVar25);
				local_98 = (Light)CONCAT44(fStack_ac, local_b0);
				local_a8 = local_c0;
				local_c0 = (byte[])0x0;
				pSStack_b8 = (System_Collections_Generic_List_Enumerator_object__o)local_a8;
				while (bVar29 = local_a8.MoveNext()) {
					if (local_98 == null) {
						throw new NullReferenceException();
					}
					__this_03 = local_98.transform;
					pSVar16 = this._currentWeather;
					if (pSVar16 == null) {
						throw new NullReferenceException();
					}
					pSVar24 = pSVar16.DaylightDirection;
					if (pSVar24 == null) {
						throw new NullReferenceException();
					}
					uVar4 = pSVar24._value.x;
					uVar7 = pSVar24._value.y;
					local_38 = pSVar24._value.z * 0.017453292;
					local_40 = (WeatherSet)CONCAT44((float)uVar7 * 0.017453292, (float)uVar4 * 0.017453292);
					value = Quaternion.Internal_FromEulerRad(ref local_40);
					if (__this_03 == null) {
						throw new NullReferenceException();
					}
					__this_03.rotation = value;
				}
				local_a8.Dispose();
				break;
			case 5.60519e-45:
				pSVar16 = this._currentWeather;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				pSVar22 = pSVar16.AmbientLight;
				if (pSVar22 == null) {
					throw new NullReferenceException();
				}
				pUVar23 = pSVar22._value;
				if (pUVar23 == null) {
					throw new NullReferenceException();
				}
				UVar40 = pUVar23.ToColor();
				RenderSettings.ambientLight = UVar40;
				break;
			case 7.00649e-45:
				pSVar16 = this._currentWeather;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				pSVar20 = pSVar16.Skybox;
				if (pSVar20 == null) {
					throw new NullReferenceException();
				}
				pSVar18 = this._targetWeather;
				if (pSVar18 == null) {
					throw new NullReferenceException();
				}
				pSVar19 = pSVar18.Skybox;
				if (pSVar19 == null) {
					throw new NullReferenceException();
				}
				pMVar35 = (MethodInfo)pSVar16.SkyboxColor;
				if (pMVar35 == null) {
					throw new NullReferenceException();
				}
				if (pMVar35.klass == null) {
					throw new NullReferenceException();
				}
				pSVar30 = pSVar20._value;
				skybox2 = pSVar19._value;
				UVar40 = (pMVar35.klass).ToColor();
				routine = this.WaitAndApplySkybox(pSVar30, skybox2, UVar40);
				this.StartCoroutine(routine);
				break;
			case 8.40779e-45:
				pSVar16 = this._currentWeather;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				pSVar20 = pSVar16.Skybox;
				if (pSVar20 == null) {
					throw new NullReferenceException();
				}
				pSVar16 = this._targetWeather;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				pMVar35 = (MethodInfo)pSVar16.Skybox;
				if (pMVar35 == null) {
					throw new NullReferenceException();
				}
				__this_02 = pWVar36.GetBlendedSkybox(pSVar20._value, (String)pMVar35.klass);
				bVar29 = ((Object)__this_02 != null);
				if (bVar29) {
					pSVar16 = this._currentWeather;
					if (pSVar16 == null) {
						throw new NullReferenceException();
					}
					pSVar22 = pSVar16.SkyboxColor;
					if (pSVar22 == null) {
						throw new NullReferenceException();
					}
					pUVar23 = pSVar22._value;
					if (pUVar23 == null) {
						throw new NullReferenceException();
					}
					UVar40 = pUVar23.ToColor();
					if (__this_02 == null) {
						throw new NullReferenceException();
					}
					__this_02.SetColor("_Tint", UVar40);
				}
				break;
			case 9.80909e-45:
				pSVar15 = this._effects;
				if (pSVar15 == null) {
					throw new NullReferenceException();
				}
				pWVar32 = pSVar15.get_Item(7);
				pSVar16 = this._currentWeather;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				pSVar22 = pSVar16.Flashlight;
				if (pSVar22 == null) {
					throw new NullReferenceException();
				}
				pUVar23 = pSVar22._value;
				if (pUVar23 == null) {
					throw new NullReferenceException();
				}
				UVar40 = pUVar23.ToColor();
				if (pWVar32 == null) {
					throw new NullReferenceException();
				}
				pWVar21 = pWVar32.klass;
				bVar9 = (typeof(FlashlightWeatherEffect)._2).typeHierarchyDepth;
				if (((pWVar21._2).typeHierarchyDepth < bVar9) ||((pWVar21._2).typeHierarchy[(ulong)bVar9 - 1] !=typeof(FlashlightWeatherEffect))) {
					throw new InvalidCastException();
				}
				(*((Il2CppClass)pWVar21).vtable[22].methodPtr)(UVar40.r,UVar40._8_8_,pWVar32);
				pSVar16 = this._currentWeather;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				pSVar22 = pSVar16.Flashlight;
				if (pSVar22 == null) {
					throw new NullReferenceException();
				}
				pUVar23 = pSVar22._value;
				if (pUVar23 == null) {
					throw new NullReferenceException();
				}
				if ((pUVar23.A < 1) ||(UVar40 = pUVar23.ToColor(), fVar37 = UVar40.a + -1.0, fVar37 * fVar37 + UVar40.b * UVar40.b + UVar40.g * UVar40.g + UVar40.r * UVar40.r < 9.9999994e-11)) {
					pSVar15 = this._effects;
					if (pSVar15 == null) {
						throw new NullReferenceException();
					}
					pWVar32 = pSVar15.get_Item(7);
					if (pWVar32 == null) {
						throw new NullReferenceException();
					}
					pWVar32.Disable(false);
				}
				else {
					pSVar15 = this._effects;
					if (pSVar15 == null) {
						throw new NullReferenceException();
					}
					pWVar32 = pSVar15.get_Item(7);
					if (pWVar32 == null) {
						throw new NullReferenceException();
					}
					pUVar33 = pWVar32.gameObject;
					if (pUVar33 == null) {
						throw new NullReferenceException();
					}
					bVar29 = pUVar33.activeSelf;
					if (!bVar29) {
						pSVar15 = this._effects;
						if (pSVar15 == null) {
							throw new NullReferenceException();
						}
						pWVar32 = pSVar15.get_Item(7);
						if (pWVar32 == null) {
							throw new NullReferenceException();
						}
						pWVar32.Enable();
					}
				}
				break;
			case 1.12104e-44:
				pSVar16 = this._currentWeather;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				pSVar17 = pSVar16.FogDensity;
				if (pSVar17 == null) {
					throw new NullReferenceException();
				}
				if (pSVar17._value <= 0.0) {
					RenderSettings.fog = false;
				}
				else {
					RenderSettings.fog = true;
					RenderSettings.fogMode = 2;
					pSVar16 = this._currentWeather;
					if (pSVar16 == null) {
						throw new NullReferenceException();
					}
					pSVar17 = pSVar16.FogDensity;
					if (pSVar17 == null) {
						throw new NullReferenceException();
					}
					RenderSettings.fogDensity = pSVar17._value * 0.02;
				}
				break;
			case 1.26117e-44:
				pSVar16 = this._currentWeather;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				pSVar22 = pSVar16.FogColor;
				if (pSVar22 == null) {
					throw new NullReferenceException();
				}
				pUVar23 = pSVar22._value;
				if (pUVar23 == null) {
					throw new NullReferenceException();
				}
				UVar40 = pUVar23.ToColor();
				RenderSettings.fogColor = UVar40;
				break;
			case 1.4013e-44:
			case 1.54143e-44:
			case 1.68156e-44:
			case 1.82169e-44:
				pSVar16 = this._currentWeather;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				__this_00 = pSVar16.Settings;
				local_c0 = (byte[])typeof(WeatherEffect);
				pSStack_b8 = (System_Collections_Generic_List_Enumerator_object__o)0xffffffffffffffff;
				local_b0 = fVar37;
				pSVar30 = local_c0.ToString();
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				pIVar31 = __this_00.get_Item((object)pSVar30);
				if (pIVar31 == null) {
					throw new NullReferenceException();
				}
				bVar9 = (typeof(FloatSetting)._2).typeHierarchyDepth;
				if (((pIVar31.klass._2).typeHierarchyDepth < bVar9) ||((pIVar31.klass._2).typeHierarchy[(ulong)bVar9 - 1] !=typeof(FloatSetting))) {
					throw new InvalidCastException();
				}
				pSVar15 = this._effects;
				if (pSVar15 == null) {
					throw new NullReferenceException();
				}
				fVar2 = *(float)((long)&pIVar31[1].monitor + 4);
				pWVar32 = pSVar15.get_Item((int32_t)fVar37);
				if (pWVar32 == null) {
					throw new NullReferenceException();
				}
				pWVar32.SetLevel(fVar2);
				pSVar15 = this._effects;
				if (fVar2 <= 0.0) {
					if (pSVar15 == null) {
						throw new NullReferenceException();
					}
					pWVar32 = pSVar15.get_Item((int32_t)fVar37);
					if (pWVar32 == null) {
						throw new NullReferenceException();
					}
					pWVar32.Disable(true);
				}
				else {
					if (pSVar15 == null) {
						throw new NullReferenceException();
					}
					pWVar32 = pSVar15.get_Item((int32_t)fVar37);
					if (pWVar32 == null) {
						throw new NullReferenceException();
					}
					pUVar33 = pWVar32.gameObject;
					if (pUVar33 == null) {
						throw new NullReferenceException();
					}
					bVar29 = pUVar33.activeSelf;
					if (!bVar29) {
						pSVar15 = this._effects;
						if (pSVar15 == null) {
							throw new NullReferenceException();
						}
						pWVar32 = pSVar15.get_Item((int32_t)fVar37);
						if (pWVar32 == null) {
							throw new NullReferenceException();
						}
						pWVar32.Randomize();
						pSVar15 = this._effects;
						if (pSVar15 == null) {
							throw new NullReferenceException();
						}
						pWVar32 = pSVar15.get_Item((int32_t)fVar37);
						if (pWVar32 == null) {
							throw new NullReferenceException();
						}
						pWVar32.Enable();
					}
				}
				break;
			case 1.96182e-44:
				pSVar16 = this._currentWeather;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				pSVar24 = pSVar16.WindDirection;
				if (pSVar24 == null) {
					throw new NullReferenceException();
				}
				uVar3 = pSVar24._value.x;
				uVar6 = pSVar24._value.y;
				local_68 = (float)uVar3;
				fStack_64 = (float)uVar6;
				pSStack_60 = null;
				local_c8 = pSVar24._value.z;
				if (Il2CppMethodInitialized_0753e72d == false) {
					Il2CppMethodInitialized_0753e72d = true;
					local_c0 = (byte[])0x0;
				}
				else {
					local_c0 = (byte[])0x0;
				}
				if (g_data_0753e729 == false) {
					local_c0 = (byte[])0x0;
					g_data_0753e729 = true;
					uVar11 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					local_c0 = (byte[])0x0;
					uVar11 = ((typeof(Math))._2).cctor_finished_or_no_cctor;
				}
				if (uVar11 == 0) {
				}
				uVar38 = 0;
				fVar37 = local_c8 * local_c8 + fStack_64 * fStack_64 + local_68 * local_68;
				if (fVar37 < 0.0) {
					fVar37 = sqrtf(fVar37);
					uVar38 = extraout_XMM0_Db;
				}
				else {
					fVar37 = SQRT(fVar37);
				}
				if (1e-05 < fVar37) {
					local_c8 = local_c8 / fVar37;
					auVar28._4_4_ = fStack_64;
					auVar28._0_4_ = local_68;
					auVar28._8_8_ = pSStack_60;
					auVar39._4_4_ = fVar37;
					auVar39._0_4_ = fVar37;
					auVar39._8_4_ = uVar38;
					auVar39._12_4_ = uVar38;
					auVar39 = divps(auVar28, auVar39);
					local_c0 = (byte[])auVar39._0_8_;
					pUVar34 = (UnityEngine_Vector3_StaticFields)local_c0;
				}
				else {
					pUVar34 = typeof(Vector3).static_fields;
					local_c8 = (pUVar34.zeroVector).z;
				}
				uVar5 = (pUVar34.zeroVector).x;
				uVar8 = (pUVar34.zeroVector).y;
				pSStack_60 = null;
				local_68 = (float)uVar5;
				fStack_64 = (float)uVar8;
				if (((typeof(WindWeatherEffect))._2).cctor_finished_or_no_cctor == 0) {
				}
				(WindWeatherEffect.WindDirection).x = local_68;
				(WindWeatherEffect.WindDirection).y = fStack_64;
				(WindWeatherEffect.WindDirection).z = local_c8;
				break;
			case 2.10195e-44:
				pSVar16 = this._currentWeather;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				pSVar17 = pSVar16.RainForce;
				if (pSVar17 == null) {
					throw new NullReferenceException();
				}
				pWVar36 = WeatherManager._instance;
				if (pWVar36 == null) {
					throw new NullReferenceException();
				}
				pWVar36._currentRainForce = pSVar17._value;
				break;
			case 2.24208e-44:
				pSVar16 = this._currentWeather;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				pSVar17 = pSVar16.SnowForce;
				if (pSVar17 == null) {
					throw new NullReferenceException();
				}
				pWVar36 = WeatherManager._instance;
				if (pWVar36 == null) {
					throw new NullReferenceException();
				}
				pWVar36._currentSnowForce = pSVar17._value;
				break;
			case 2.38221e-44:
				pSVar16 = this._currentWeather;
				if (pSVar16 == null) {
					throw new NullReferenceException();
				}
				pSVar17 = pSVar16.WindForce;
				if (pSVar17 == null) {
					throw new NullReferenceException();
				}
				pWVar36 = WeatherManager._instance;
				if (pWVar36 == null) {
					throw new NullReferenceException();
				}
				pWVar36._currentWindForce = pSVar17._value;
			}
		}
		goto switchD_0585ad4f_default;
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x575E2F0", Offset = "0x575D2F0", VA = "0x575E2F0")]
	[IteratorStateMachine(typeof(_003CWaitAndApplySkybox_003Ed__57))]
	private IEnumerator WaitAndApplySkybox(string skybox1, string skybox2, Color tint)
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$WaitAndApplySkybox): clean
		WeatherManager.d__57<WaitAndApplySkybox> __this_00;
		float local_48;
		float fStack_44;

		__this_00 = new WeatherManager.d__57<WaitAndApplySkybox>(0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		__this_00.skybox1 = skybox1;
		__this_00.skybox2 = skybox2;
		local_48 = tint.r;
		fStack_44 = tint.g;
		__this_00.tint.r = local_48;
		__this_00.tint.g = fStack_44;
		__this_00.tint.b = tint.b;
		__this_00.tint.a = tint.a;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x575E3B0", Offset = "0x575D3B0", VA = "0x575E3B0")]
	private static string ResolveSkyboxName(string skybox)
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$ResolveSkyboxName): clean
		Dictionary<object, object> __this;
		bool bVar1;
		ushort c;
		String pSVar2;

		bVar1 = String.IsNullOrEmpty(skybox);
		if (bVar1) {
			return null;
		}
		if (skybox == null) goto label_0585e4ce;
		c = skybox.get_Chars(skybox._stringLength + -1);
		bVar1 = Char.IsDigit(c);
		if (bVar1) {
			if ((typeof(WeatherManager)._2).cctor_finished_or_no_cctor != 0) goto label_0585e457;
	label_0585e4b6: ;
			__this = (Dictionary<object, object>)WeatherManager.SkyboxMaterials;
		}
		else {
			skybox = String.Concat(skybox, "1");
			if ((typeof(WeatherManager)._2).cctor_finished_or_no_cctor == 0) goto label_0585e4b6;
	label_0585e457: ;
			__this = (Dictionary<object, object>)WeatherManager.SkyboxMaterials;
		}
		if (__this != null) {
			bVar1 = __this.ContainsKey((object)skybox);
			if (bVar1) {
			}
			return pSVar2;
		}
	label_0585e4ce: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x575E040", Offset = "0x575D040", VA = "0x575E040")]
	private Material GetBlendedSkybox(string skybox1, string skybox2)
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$GetBlendedSkybox): clean
		bool bVar1;
		String skybox1_00;
		String skybox2_00;
		Dictionary<object, object> pSVar2;
		String[] parts;
		Material pUVar3;

		if (Il2CppMethodInitialized_0754509e == false) {
			Il2CppMethodInitialized_0754509e = true;
			if ((typeof(WeatherManager)._2).cctor_finished_or_no_cctor != 0) goto label_0585e070;
	label_0585e105: ;
			skybox1_00 = WeatherManager.ResolveSkyboxName(skybox1);
		}
		else {
			if ((typeof(WeatherManager)._2).cctor_finished_or_no_cctor == 0) goto label_0585e105;
	label_0585e070: ;
			skybox1_00 = WeatherManager.ResolveSkyboxName(skybox1);
		}
		if (skybox1_00 == null) {
			return null;
		}
		if (((typeof(WeatherManager))._2).cctor_finished_or_no_cctor == 0) {
		}
		skybox2_00 = WeatherManager.ResolveSkyboxName(skybox2);
		if (skybox2_00 == null) {
			skybox2_00 = skybox1_00;
		}
		pSVar2 = (Dictionary<object, object>)WeatherManager.SkyboxBlendedMaterials;
		if (pSVar2 != null) {
			bVar1 = pSVar2.ContainsKey((object)skybox1_00);
			if (!bVar1) {
				return null;
			}
			pSVar2 = (Dictionary<object, object>)WeatherManager.SkyboxBlendedMaterials;
			if ((pSVar2 != null) &&(pSVar2 = (Dictionary<object, object>)pSVar2.get_Item((object)skybox1_00), pSVar2 != null)) {
				bVar1 = pSVar2.ContainsKey((object)skybox2_00);
				if (!bVar1) {
					parts = Util.EnumToStringArray<SkyboxCustomSkinPartId>();
					pUVar3 = WeatherManager.CreateBlendedSkybox(WeatherManager._blendedShader, parts, skybox1_00, skybox2_00);
					pSVar2 = (Dictionary<object, object>)WeatherManager.SkyboxBlendedMaterials;
					if ((pSVar2 == null) ||(pSVar2 = (Dictionary<object, object>)pSVar2.get_Item((object)skybox1_00), pSVar2 == null)) goto label_0585e2e7;
					pSVar2.Add((object)skybox2_00, (object)pUVar3) ;
				}
				pSVar2 = (Dictionary<object, object>)WeatherManager.SkyboxBlendedMaterials;
				if ((pSVar2 != null) &&(pSVar2 = (Dictionary<object, object>)pSVar2.get_Item((object)skybox1_00), pSVar2 != null)) {
					pUVar3 = pSVar2.get_Item((object)skybox2_00);
					return pUVar3;
				}
			}
		}
	label_0585e2e7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x575E4E0", Offset = "0x575D4E0", VA = "0x575E4E0")]
	public static void OnSetWeatherRPC(byte[] currentWeatherJson, byte[] startWeatherJson, byte[] targetWeatherJson, Dictionary<int, float> targetWeatherStartTimes, Dictionary<int, float> targetWeatherEndTimes, float currentTime, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$OnSetWeatherRPC): clean
		GraphicsSettings pSVar1;
		IntSetting pSVar2;
		WeatherManager __this;
		Player pPVar3;
		IEnumerator routine;

		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			pPVar3 = PhotonNetwork.MasterClient;
		}
		else {
			pPVar3 = PhotonNetwork.MasterClient;
		}
		if (info.Sender != pPVar3) {
			return;
		}
		pSVar1 = SettingsManager.GraphicsSettings;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.WeatherEffects, pSVar2 != null)) {
			if (pSVar2._value == 0) {
				return;
			}
			if (((typeof(WeatherManager))._2).cctor_finished_or_no_cctor == 0) {
			}
			__this = WeatherManager._instance;
			if (__this != null) {
				routine = __this.WaitAndFinishOnSetWeather(currentWeatherJson, startWeatherJson, targetWeatherJson, targetWeatherStartTimes, targetWeatherEndTimes, currentTime);
				__this.StartCoroutine(routine);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x575E630", Offset = "0x575D630", VA = "0x575E630")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishOnSetWeather_003Ed__61))]
	private IEnumerator WaitAndFinishOnSetWeather(byte[] currentWeatherJson, byte[] startWeatherJson, byte[] targetWeatherJson, Dictionary<int, float> targetWeatherStartTimes, Dictionary<int, float> targetWeatherEndTimes, float currentTime)
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$WaitAndFinishOnSetWeather): clean
		WeatherManager.d__61<WaitAndFinishOnSetWeather> __this_00;

		__this_00 = new WeatherManager.d__61<WaitAndFinishOnSetWeather>(0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		__this_00.currentWeatherJson = currentWeatherJson;
		__this_00.startWeatherJson = startWeatherJson;
		__this_00.targetWeatherJson = targetWeatherJson;
		__this_00.targetWeatherStartTimes = targetWeatherStartTimes;
		__this_00.targetWeatherEndTimes = targetWeatherEndTimes;
		__this_00.currentTime = currentTime;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x575C510", Offset = "0x575B510", VA = "0x575C510")]
	private bool IsWeatherEnabled()
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$IsWeatherEnabled): clean
		GraphicsSettings pSVar1;
		IntSetting pSVar2;

		pSVar1 = SettingsManager.GraphicsSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.WeatherEffects, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		return pSVar2._value != 0;
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x575E730", Offset = "0x575D730", VA = "0x575E730")]
	public WeatherManager()
	{
		// Lifted from source/cpp/Weather/WeatherManager.c (Weather.WeatherManager$$.ctor): 4 lines keep C-only constructs
		HashSet<WeatherEffect> __this_00;
		List<WeatherScheduleRunner> pSVar1;
		List<Camera> __this_01;
		Dictionary<WeatherEffect, BaseWeatherEffect> __this_02;
		WeatherSet pSVar2;
		Dictionary<int, float> pSVar3;
		List<T> __this_03;
		Dictionary<WeatherScheduleRunner, float> __this_04;
		List<int> __this_05;

		if (Il2CppMethodInitialized_075450a2 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherEffect_ctor) ;
			Il2CppMethodInitialized_075450a2 = true;
		}
		__this_00 = new HashSet<WeatherEffect>();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Add(1);
		__this_00.Add(4);
		__this_00.Add(7);
		__this_00.Add(5);
		__this_00.Add(6);
		__this_00.Add(2);
		__this_00.Add(3);
		this.LowEffects = __this_00;
		pSVar1 = new List<WeatherScheduleRunner>();
		this._scheduleRunners = pSVar1;
		__this_01 = new List<Camera>();
		this._skyboxCameras = __this_01;
		__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<WeatherEffect, BaseWeatherEffect>));
		__this_02 = new Dictionary<Int32Enum, object>();
		this._effects = __this_02;
		pSVar2 = new WeatherSet();
		this._currentWeather = pSVar2;
		pSVar2 = new WeatherSet();
		this._targetWeather = pSVar2;
		pSVar2 = new WeatherSet();
		this._startWeather = pSVar2;
		pSVar3 = new Dictionary<int, float>();
		this._targetWeatherStartTimes = pSVar3;
		pSVar3 = new Dictionary<int, float>();
		this._targetWeatherEndTimes = pSVar3;
		__this_03 = (List<T>)il2cpp_codegen_object_new(typeof(List<WeatherEffect>)) ;
		__this_03 = new List<Int32Enum>();
		this._needApply = (List<WeatherEffect>)__this_03;
		__this_04 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<WeatherScheduleRunner, float>));
		__this_04 = new Dictionary<object, float>();
		this._currentScheduleWait = __this_04;
		pSVar1 = new List<WeatherScheduleRunner>();
		this._scheduleKeys = pSVar1;
		__this_05 = new List<int>();
		this._finishedLerps = __this_05;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Weather/WeatherManager.c.

	// Weather.WeatherManager$$.cctor: 1 lines keep C-only constructs
	static WeatherManager()
	{
		Weather_WeatherManager_StaticFields pWVar1;
		Il2CppType handle;
		Dictionary<string, Material> __this;
		Dictionary<string, Dictionary<string, Material>> __this_00;
		Type enumType;
		String[] pSVar2;
		List<T> pSVar3;

		__this = new Dictionary<string, Material>();
		pWVar1 = typeof(WeatherManager).static_fields;
		pWVar1.SkyboxMaterials = __this;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Dictionary<string, Material>>));
		__this_00 = new Dictionary<object, object>();
		pWVar1 = typeof(WeatherManager).static_fields;
		pWVar1.SkyboxBlendedMaterials = __this_00;
		handle = TypeRef_Weather_WeatherEffect;
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		pSVar2 = Enum.GetNames(enumType);
		pWVar1 = typeof(WeatherManager).static_fields;
		pWVar1.EffectNames = pSVar2;
		pSVar3 = Util.EnumToList<WeatherEffect>();
		pWVar1 = typeof(WeatherManager).static_fields;
		pWVar1.AllEffects = (List<WeatherEffect>)pSVar3;
		return;
	}
}
