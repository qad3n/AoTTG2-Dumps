// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.MusicManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/MusicManager.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/MusicManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000981")]
public class MusicManager : MonoBehaviour
{
	[Token(Token = "0x2000983")]
	[CompilerGenerated]
	private sealed class _003CFadeNextSong_003Ed__47 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400300C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400300D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400300E")]
		[FieldOffset(Offset = "0x20")]
		public MusicManager _003C_003E4__this;

		[Token(Token = "0x400300F")]
		[FieldOffset(Offset = "0x28")]
		public AudioClip nextClip;

		[Token(Token = "0x4003010")]
		[FieldOffset(Offset = "0x30")]
		public float startTime;

		[Token(Token = "0x4003011")]
		[FieldOffset(Offset = "0x34")]
		public float volume;

		[Token(Token = "0x4003012")]
		[FieldOffset(Offset = "0x38")]
		private float _003CfadeInTime_003E5__2;

		[Token(Token = "0x4003013")]
		[FieldOffset(Offset = "0x3C")]
		private float _003CfadeOutTime_003E5__3;

		[Token(Token = "0x4003014")]
		[FieldOffset(Offset = "0x40")]
		private float _003CfadeTimeLeft_003E5__4;

		[Token(Token = "0x17000F4E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60058F9")]
			[Address(RVA = "0x5D1B9A0", Offset = "0x5D1A9A0", VA = "0x5D1B9A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager.<FadeNextSong>d__47$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000F4F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60058FB")]
			[Address(RVA = "0x5D1B9F0", Offset = "0x5D1A9F0", VA = "0x5D1B9F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager.<FadeNextSong>d__47$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60058F6")]
		[Address(RVA = "0x5D1A520", Offset = "0x5D19520", VA = "0x5D1A520")]
		[DebuggerHidden]
		public _003CFadeNextSong_003Ed__47(int _003C_003E1__state)
		{
			// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager.<FadeNextSong>d__47$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60058F7")]
		[Address(RVA = "0x5D1B3E0", Offset = "0x5D1A3E0", VA = "0x5D1B3E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager.<FadeNextSong>d__47$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60058F8")]
		[Address(RVA = "0x5D1B3F0", Offset = "0x5D1A3F0", VA = "0x5D1B3F0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager.<FadeNextSong>d__47$$MoveNext): clean
			float fVar1;
			uint uVar2;
			MusicManager pAVar3;
			MusicManager pAVar4;
			String a;
			AudioSource pUVar5;
			SoundSettings pSVar6;
			FloatSetting pSVar7;
			AudioClip pUVar8;
			bool bVar9;
			int iVar10;
			WaitForSeconds pUVar11;
			float fVar12;
			float fVar13;
			float fVar14;

			uVar2 = this.__1__state;
			if (3 < uVar2) {
				return false;
			}
			pAVar3 = this.__4__this;
			switch(uVar2) {
			case 0:
				this.__1__state = -1;
				this._fadeInTime_5__2 = 5.0;
				this._fadeOutTime_5__3 = 1.0;
				pAVar4 = MusicManager._instance;
				if (pAVar4 == null) goto label_05e1b999;
				a = pAVar4._currentPlaylist;
				bVar9 = (a == MusicPlaylist.Battle);
				if (bVar9) {
					this._fadeInTime_5__2 = 1.0;
				}
				if (pAVar3 == null) goto label_05e1b999;
				pAVar3._isFading = true;
				this._fadeTimeLeft_5__4 = this._fadeOutTime_5__3;
				pUVar5 = pAVar3._audio;
				if (pUVar5 == null) goto label_05e1b999;
				bVar9 = pUVar5.isPlaying;
				if (bVar9) {
					pUVar5 = pAVar3._audio;
					if (pUVar5 == null) goto label_05e1b999;
					fVar12 = pUVar5.volume;
					pAVar3._songVolume = fVar12;
					fVar12 = this._fadeTimeLeft_5__4;
					goto joined_r0x05e1b5a6;
				}
				break;
			case 1:
				this.__1__state = -1;
				fVar12 = this._fadeTimeLeft_5__4;
		joined_r0x05e1b5a6: ;
				if (0.0 < fVar12) {
					if ((pAVar3 != null) &&(pUVar5 = pAVar3._audio, pUVar5 != null)) {
						pUVar5.volume = (fVar12 / this._fadeOutTime_5__3) * pAVar3._songVolume;
						this._fadeTimeLeft_5__4 = this._fadeTimeLeft_5__4 + -0.1;
						pUVar11 = new WaitForSeconds(0.1);
						this.__2__current = (object)pUVar11;
						this.__1__state = 1;
						return true;
					}
					goto label_05e1b999;
				}
				if ((pAVar3 == null) ||(pUVar5 = pAVar3._audio, pUVar5 == null)) goto label_05e1b999;
				pUVar5.Stop();
				break;
			case 2:
				this.__1__state = -1;
				goto label_05e1b802;
			case 3:
				this.__1__state = -1;
				fVar12 = this._fadeTimeLeft_5__4;
				goto joined_r0x05e1b64b;
			}
			pUVar8 = this.nextClip;
			bVar9 = ((Object)pUVar8 == null);
			if (bVar9) {
				pAVar3._songTimeLeft = 0.0;
				pAVar3._autoPlay = true;
				return false;
			}
			pUVar5 = pAVar3._audio;
			if (pUVar5 != null) {
				pUVar5.clip = this.nextClip;
				pUVar5 = pAVar3._audio;
				if (pUVar5 != null) {
					pUVar5.volume = 0.0;
					pUVar8 = this.nextClip;
					if (pUVar8 != null) {
						fVar12 = pUVar8.length;
						pAVar3._songTimeLeft = fVar12 - this._fadeOutTime_5__3;
						pUVar5 = pAVar3._audio;
						if (pUVar5 != null) {
							pUVar5.Play();
							if (0.0 < this.startTime) {
		label_05e1b802: ;
								pUVar8 = this.nextClip;
								if (pUVar8 == null) goto label_05e1b999;
								iVar10 = pUVar8.loadState;
								if (iVar10 == 1) {
									this.__2__current = null;
									this.__1__state = 2;
									return true;
								}
								if ((pAVar3 == null) ||(pUVar8 = this.nextClip, pUVar8 == null)) goto label_05e1b999;
								pUVar5 = pAVar3._audio;
								fVar12 = this.startTime;
								fVar14 = pUVar8.length;
								if (pUVar5 == null) goto label_05e1b999;
								if (fVar14 + -0.1 <= fVar12) {
									fVar12 = fVar14 + -0.1;
								}
								pUVar5.time = fVar12;
								pAVar3._songTimeLeft = pAVar3._songTimeLeft - this.startTime;
							}
							pAVar3._songVolume = this.volume;
							pAVar3._autoPlay = true;
							fVar12 = this._fadeInTime_5__2;
							this._fadeTimeLeft_5__4 = fVar12;
		joined_r0x05e1b64b: ;
							if (0.0 < fVar12) {
								if (pAVar3 != null) {
									fVar14 = this._fadeInTime_5__2;
									pUVar5 = pAVar3._audio;
									fVar1 = pAVar3._songVolume;
									fVar13 = 0.0;
									if (MusicManager._muted == false) {
										pSVar6 = SettingsManager.SoundSettings;
										if ((pSVar6 == null) ||(pSVar7 = pSVar6.Music, pSVar7 == null)) goto label_05e1b999;
										fVar13 = pSVar7._value * 0.4;
									}
									if (pUVar5 != null) {
										pUVar5.volume = (1.0 - fVar12 / fVar14) * fVar1 * fVar13;
										this._fadeTimeLeft_5__4 = this._fadeTimeLeft_5__4 + -0.1;
										pUVar11 = new WaitForSeconds(0.1);
										this.__2__current = (object)pUVar11;
										this.__1__state = 3;
										return true;
									}
								}
							}
							else if (pAVar3 != null) {
								pUVar5 = pAVar3._audio;
								fVar12 = pAVar3._songVolume;
								fVar14 = 0.0;
								if (MusicManager._muted == false) {
									pSVar6 = SettingsManager.SoundSettings;
									if ((pSVar6 == null) ||(pSVar7 = pSVar6.Music, pSVar7 == null)) goto label_05e1b999;
									fVar14 = pSVar7._value * 0.4;
								}
								if (pUVar5 != null) {
									pUVar5.volume = fVar12 * fVar14;
									pAVar3._isFading = false;
									return false;
								}
							}
						}
					}
				}
			}
		label_05e1b999: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x60058FA")]
		[Address(RVA = "0x5D1B9B0", Offset = "0x5D1A9B0", VA = "0x5D1B9B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager.<FadeNextSong>d__47$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_ApplicationManagers_MusicManager_FadeNextSong_d__47_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4002FED")]
	[FieldOffset(Offset = "0x0")]
	private static MusicManager _instance;

	[Token(Token = "0x4002FEE")]
	[FieldOffset(Offset = "0x8")]
	private static JSONNode _musicInfo;

	[Token(Token = "0x4002FEF")]
	[FieldOffset(Offset = "0x20")]
	private string _currentPlaylist;

	[Token(Token = "0x4002FF0")]
	[FieldOffset(Offset = "0x28")]
	private AudioSource _audio;

	[Token(Token = "0x4002FF1")]
	[FieldOffset(Offset = "0x30")]
	private GameObject _soundEffectObject;

	[Token(Token = "0x4002FF2")]
	[FieldOffset(Offset = "0x38")]
	private AudioSource _soundEffect;

	[Token(Token = "0x4002FF3")]
	[FieldOffset(Offset = "0x40")]
	private float _songTimeLeft;

	[Token(Token = "0x4002FF4")]
	[FieldOffset(Offset = "0x44")]
	private float _songVolume;

	[Token(Token = "0x4002FF5")]
	[FieldOffset(Offset = "0x48")]
	private bool _autoPlay;

	[Token(Token = "0x4002FF6")]
	[FieldOffset(Offset = "0x49")]
	private bool _isFading;

	[Token(Token = "0x4002FF7")]
	private const float BattleFadeInTime = 1f;

	[Token(Token = "0x4002FF8")]
	private const float DefaultFadeOutTime = 1f;

	[Token(Token = "0x4002FF9")]
	private const float DefaultFadeInTime = 5f;

	[Token(Token = "0x4002FFA")]
	[FieldOffset(Offset = "0x4C")]
	private int _currentSong;

	[Token(Token = "0x4002FFB")]
	[FieldOffset(Offset = "0x50")]
	private List<string> _customPlaylist;

	[Token(Token = "0x4002FFC")]
	[FieldOffset(Offset = "0x58")]
	private string _currentSongName;

	[Token(Token = "0x4002FFD")]
	[FieldOffset(Offset = "0x10")]
	public static bool _muted;

	[Token(Token = "0x4002FFE")]
	[FieldOffset(Offset = "0x60")]
	public bool _isDefaultPlaylist;

	[Token(Token = "0x4002FFF")]
	[FieldOffset(Offset = "0x64")]
	private float _transitionTimeLeft;

	[Token(Token = "0x4003000")]
	[FieldOffset(Offset = "0x68")]
	private bool _isMenuTransition;

	[Token(Token = "0x4003001")]
	[FieldOffset(Offset = "0x69")]
	private bool _justPlayedMenuTransition;

	[Token(Token = "0x4003002")]
	[FieldOffset(Offset = "0x70")]
	private string _lastSongBeforeGrabbed;

	[Token(Token = "0x4003003")]
	[FieldOffset(Offset = "0x78")]
	private float _lastTimeBeforeGrabbed;

	[Token(Token = "0x4003004")]
	[FieldOffset(Offset = "0x7C")]
	private bool _justEscapedGrab;

	[Token(Token = "0x4003005")]
	[FieldOffset(Offset = "0x80")]
	private float _lastCheckBattleMusic;

	[Token(Token = "0x4003006")]
	private const float BattleTitanAnyDistance = 200f;

	[Token(Token = "0x4003007")]
	private const float BattleTitanActiveDistance = 1000f;

	[Token(Token = "0x4003008")]
	private const float BattleOtherAnyDistance = 500f;

	[Token(Token = "0x4003009")]
	private const float CheckBattleMusicDelay = 0.2f;

	[Token(Token = "0x60058DA")]
	[Address(RVA = "0x5D08F30", Offset = "0x5D07F30", VA = "0x5D08F30")]
	public static void Init()
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$Init): 1 lines keep C-only constructs
		MusicManager pAVar2;
		OnLoadScene __this;
		GameObject pUVar3;
		AudioSource pUVar4;
		Transform __this_00;
		Transform p;
		String pSVar5;
		JSONNode pSVar6;

		pAVar2 = SingletonFactory.CreateSingleton<MusicManager>((object)MusicManager._instance);
		MusicManager._instance = pAVar2;
		__this = new OnLoadScene(null, (intptr_t)MethodInfo_ApplicationManagers_MusicManager_OnLoadScene);
		EventManager.add_OnLoadScene(__this);
		pAVar2 = MusicManager._instance;
		if (pAVar2 != null) {
			pUVar3 = pAVar2.gameObject;
			if (pUVar3 != null) {
				pUVar4 = pUVar3.AddComponent<AudioSource>();
				pAVar2._audio = pUVar4;
				pAVar2 = MusicManager._instance;
				if ((pAVar2 != null) &&(pUVar4 = pAVar2._audio, pUVar4 != null)) {
					pUVar4.ignoreListenerVolume = true;
					pAVar2 = MusicManager._instance;
					pUVar3 = new GameObject("SoundEffect");
					if (pAVar2 != null) {
						pAVar2._soundEffectObject = pUVar3;
						pAVar2 = MusicManager._instance;
						if ((pAVar2 != null) &&(pUVar3 = pAVar2._soundEffectObject, pUVar3 != null)) {
							__this_00 = pUVar3.transform;
							pAVar2 = MusicManager._instance;
							if (pAVar2 != null) {
								p = pAVar2.transform;
								if (__this_00 != null) {
									__this_00.SetParent(p);
									pAVar2 = MusicManager._instance;
									if ((pAVar2 != null) &&(pUVar3 = pAVar2._soundEffectObject, pUVar3 != null)) {
										pUVar4 = pUVar3.AddComponent<AudioSource>();
										pAVar2._soundEffect = pUVar4;
										if ((typeof(ResourcePaths)._2).cctor_finished_or_no_cctor == 0) {
										}
										pSVar5 = ResourcePaths.Info;
										if ((typeof(ResourceManager)._2).cctor_finished_or_no_cctor == 0) {
										}
										pSVar5 = ResourceManager.TryLoadText(pSVar5, "MusicInfo");
										pSVar6 = JSON.Parse(pSVar5);
										MusicManager._musicInfo = pSVar6;
										return;
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

	[Token(Token = "0x60058DB")]
	[Address(RVA = "0x5D18580", Offset = "0x5D17580", VA = "0x5D18580")]
	private static void OnLoadScene(SceneName sceneName)
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$OnLoadScene): clean
		if (3 < sceneName - 3U) {
			if (sceneName == 2) {
				MusicManager.SetPlaylist(MusicPlaylist.Default);
				return;
			}
			if (sceneName != 1) {
				return;
			}
		}
		MusicManager.SetPlaylist(MusicPlaylist.Menu);
		return;
	}

	[Token(Token = "0x60058DC")]
	[Address(RVA = "0x5D16170", Offset = "0x5D15170", VA = "0x5D16170")]
	public static void ApplySoundSettings()
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$ApplySoundSettings): clean
		float fVar1;
		MusicManager pAVar2;
		AudioSource __this;
		SoundSettings pSVar3;
		FloatSetting pSVar4;
		StringSetting pSVar5;
		String a;
		bool bVar6;
		ApplicationManagers_MusicManager_StaticFields pAVar7;
		MethodInfo method_00;
		float fVar8;

		pAVar2 = MusicManager._instance;
		bVar6 = ((Object)pAVar2 == null);
		if (bVar6) {
			return;
		}
		pAVar7 = typeof(MusicManager).static_fields;
		pAVar2 = pAVar7._instance;
		if (pAVar2 != null) {
			if (pAVar2._isFading == false) {
				__this = pAVar2._audio;
				fVar1 = pAVar2._songVolume;
				if (Il2CppMethodInitialized_07548462 == false) {
					Il2CppMethodInitialized_07548462 = true;
					pAVar7 = typeof(MusicManager).static_fields;
				}
				fVar8 = 0.0;
				if (pAVar7._muted == false) {
					pSVar3 = SettingsManager.SoundSettings;
					if ((pSVar3 == null) ||(pSVar4 = pSVar3.Music, pSVar4 == null)) goto label_05e16372;
					fVar8 = pSVar4._value * 0.4;
				}
				if (__this == null) goto label_05e16372;
				__this.volume = fVar1 * fVar8;
			}
			pSVar3 = SettingsManager.SoundSettings;
			if ((pSVar3 != null) &&(pSVar5 = pSVar3.ForcePlaylist, pSVar5 != null)) {
				a = pSVar5._value;
				method_00 = (MethodInfo)MusicPlaylist.Default;
				bVar6 = (a != (String)method_00);
				if (!bVar6) {
					return;
				}
				pSVar3 = SettingsManager.SoundSettings;
				if ((pSVar3 != null) &&(pSVar5 = pSVar3.ForcePlaylist, pSVar5 != null)) {
					MusicManager.SetPlaylist(pSVar5._value);
					return;
				}
			}
		}
	label_05e16372: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60058DD")]
	[Address(RVA = "0x5D18A20", Offset = "0x5D17A20", VA = "0x5D18A20")]
	public static void PlayDeathSong()
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$PlayDeathSong): clean
		MusicManager pAVar1;
		JSONNode pSVar2;

		pAVar1 = MusicManager._instance;
		if (pAVar1 != null) {
			if (pAVar1._isDefaultPlaylist == false) {
				return;
			}
			pSVar2 = MusicManager._musicInfo;
			if (pSVar2 != null) {
				pSVar2 = pSVar2.get_Item("Death");
				if (pSVar2 != null) {
					pSVar2 = pSVar2.get_Item(0);
					pAVar1 = MusicManager._instance;
					if (pAVar1 != null) {
						pAVar1._isMenuTransition = false;
						MusicManager.PlayImmediateTransition(pSVar2);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60058DE")]
	[Address(RVA = "0x5D18DB0", Offset = "0x5D17DB0", VA = "0x5D18DB0")]
	public static void PlayGrabbedSong()
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$PlayGrabbedSong): 1 lines keep C-only constructs
		SoundSettings pSVar1;
		BoolSetting pSVar2;
		MusicManager pAVar3;
		String a;
		AudioSource __this;
		bool bVar4;
		JSONNode pSVar5;
		MethodInfo method_00;
		String* ppSVar6;
		float fVar7;

		if (Il2CppMethodInitialized_07548451 == false) {
			ppSVar6 = &"Grabbed";
			Il2CppMethodInitialized_07548451 = true;
		}
		bVar4 = MusicManager.IsMusicDisabled();
		if (bVar4) {
			return;
		}
		pSVar1 = SettingsManager.SoundSettings;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.TitanGrabMusic, pSVar2 != null)) {
			if (pSVar2._value == false) {
				return;
			}
			pSVar5 = MusicManager._musicInfo;
			if ((pSVar5 != null) &&(pSVar5 = pSVar5.get_Item("Grabbed"), pSVar5 != null)) {
				pSVar5 = pSVar5.get_Item(0);
				pAVar3 = MusicManager._instance;
				if (pAVar3 != null) {
					pAVar3._isMenuTransition = false;
					a = pAVar3._currentPlaylist;
					bVar4 = (a == MusicPlaylist.Battle);
					pAVar3 = MusicManager._instance;
					if (bVar4) {
						if (pAVar3 != null) {
							pAVar3._lastSongBeforeGrabbed = pAVar3._currentSongName;
							pAVar3 = MusicManager._instance;
							if ((pAVar3 != null) &&(__this = pAVar3._audio, __this != null)) {
								method_00 = null;
								fVar7 = __this.time;
								pAVar3._lastTimeBeforeGrabbed = fVar7;
								goto label_05e18f7c;
							}
						}
					}
					else if (pAVar3 != null) {
						method_00 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
						pAVar3._lastSongBeforeGrabbed = (String)method_00;
	label_05e18f7c: ;
						MusicManager.PlayImmediateTransition(pSVar5);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60058DF")]
	[Address(RVA = "0x5D19070", Offset = "0x5D18070", VA = "0x5D19070")]
	public static void OnEscapeGrab()
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$OnEscapeGrab): clean
		MusicManager pAVar1;

		pAVar1 = MusicManager._instance;
		if (pAVar1 == null) {
			throw new NullReferenceException();
		}
		if (0.0 < pAVar1._transitionTimeLeft) {
			pAVar1._transitionTimeLeft = 0.0;
			pAVar1._songTimeLeft = 0.0;
			pAVar1._justEscapedGrab = true;
		}
		return;
	}

	[Token(Token = "0x60058E0")]
	[Address(RVA = "0x5D190D0", Offset = "0x5D180D0", VA = "0x5D190D0")]
	public static void PlayEffect()
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$PlayEffect): clean
		int maxExclusive;
		uint uVar1;
		JSONNode pSVar2;

		pSVar2 = MusicManager._musicInfo;
		if (pSVar2 != null) {
			pSVar2 = pSVar2.get_Item("Effect");
			if (pSVar2 != null) {
				maxExclusive = pSVar2.get_Count();
				uVar1 = Random.Range(0, maxExclusive);
				pSVar2 = pSVar2.get_Item(uVar1);
				MusicManager.PlaySoundEffect(pSVar2);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60058E1")]
	[Address(RVA = "0x5D193B0", Offset = "0x5D183B0", VA = "0x5D193B0")]
	public static void PlayTransition()
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$PlayTransition): 1 lines keep C-only constructs
		MusicManager pAVar1;
		bool bVar2;
		int maxExclusive;
		uint uVar3;
		JSONNode pSVar4;
		String* ppSVar5;

		if (Il2CppMethodInitialized_07548454 == false) {
			ppSVar5 = &"Transition";
			Il2CppMethodInitialized_07548454 = true;
		}
		bVar2 = MusicManager.IsMusicDisabled();
		if (bVar2) {
			return;
		}
		pSVar4 = MusicManager._musicInfo;
		if (pSVar4 != null) {
			pSVar4 = pSVar4.get_Item("Transition");
			pAVar1 = MusicManager._instance;
			if ((pAVar1 != null) &&(pAVar1._isMenuTransition = true, pAVar1._justPlayedMenuTransition = true, pSVar4 != null)) {
				maxExclusive = pSVar4.get_Count();
				uVar3 = Random.Range(0, maxExclusive);
				pSVar4 = pSVar4.get_Item(uVar3);
				MusicManager.PlayImmediateTransition(pSVar4);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60058E2")]
	[Address(RVA = "0x5D18620", Offset = "0x5D17620", VA = "0x5D18620")]
	public static void SetPlaylist(string playlist)
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$SetPlaylist): 1 lines keep C-only constructs
		SoundSettings pSVar1;
		StringSetting pSVar2;
		String pSVar3;
		StringSetting pSVar4;
		MusicManager pAVar5;
		object @object;
		bool bVar6;
		String[] collection;
		List<string> pSVar7;
		ApplicationManagers_MusicManager___c_StaticFields pAVar8;
		Predicate<T> match;

		pSVar1 = SettingsManager.SoundSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.ForcePlaylist, pSVar2 == null)) goto label_05e18980;
		pSVar3 = pSVar2._value;
		bVar6 = (pSVar3 != MusicPlaylist.Default);
		if (bVar6) {
			pSVar1 = SettingsManager.SoundSettings;
			if ((((pSVar1 == null) ||(pSVar2 = pSVar1.ForcePlaylist, pSVar2 == null)) ||(pSVar4 = pSVar1.CustomPlaylist, pSVar4 == null)) ||(pSVar3 = pSVar4._value, pSVar3 == null)) goto label_05e18980;
			playlist = pSVar2._value;
			pAVar5 = MusicManager._instance;
			collection = pSVar3.Split(0x2c, 0);
			pSVar7 = new List<string>((IEnumerable<T>)collection);
			if ((typeof(MusicManager.c)._2).cctor_finished_or_no_cctor == 0) {
				pAVar8 = typeof(MusicManager.c).static_fields;
				match = (Predicate<T>)pAVar8.__9__37_0;
			}
			else {
				pAVar8 = typeof(MusicManager.c).static_fields;
				match = (Predicate<T>)pAVar8.__9__37_0;
			}
			if (match == null) {
				if (((typeof(MusicManager.c))._2).cctor_finished_or_no_cctor == 0) {
					pAVar8 = typeof(MusicManager.c).static_fields;
				}
				@object = (object)pAVar8.__9;
				match = new Predicate<string>(@object, (intptr_t)MethodInfo_ApplicationManagers_MusicManager_c_SetPlaylist_b__37_0);
				pAVar8 = typeof(MusicManager.c).static_fields;
				pAVar8.__9__37_0 = (Predicate<string>)match;
			}
			if ((pSVar7 == null) ||(pSVar7 = (List<string>)pSVar7.FindAll(match), pAVar5 == null)) goto label_05e18980;
			pAVar5._customPlaylist = pSVar7;
		}
		bVar6 = (playlist == MusicPlaylist.None);
		if (bVar6) {
			MusicManager.StopMusic();
			return;
		}
		bVar6 = (playlist == MusicPlaylist.Default);
		pAVar5 = MusicManager._instance;
		if (bVar6) {
			if (pAVar5 != null) {
				pAVar5._isDefaultPlaylist = true;
				if ((typeof(MusicPlaylist)._2).cctor_finished_or_no_cctor == 0) {
				}
				playlist = MusicPlaylist.Ambient;
	label_05e18967: ;
				MusicManager.FinishSetPlaylist(playlist, bVar6);
				return;
			}
		}
		else if (pAVar5 != null) {
			pAVar5._isDefaultPlaylist = false;
			goto label_05e18967;
		}
	label_05e18980: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60058E3")]
	[Address(RVA = "0x5D18FA0", Offset = "0x5D17FA0", VA = "0x5D18FA0")]
	public static bool IsMusicDisabled()
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$IsMusicDisabled): clean
		MusicManager pAVar1;
		String a;
		bool bVar2;

		pAVar1 = MusicManager._instance;
		bVar2 = ((Object)pAVar1 != null);
		if (bVar2) {
			pAVar1 = MusicManager._instance;
			if (pAVar1 == null) {
				throw new NullReferenceException();
			}
			a = pAVar1._currentPlaylist;
			bVar2 = (a == MusicPlaylist.None);
			return bVar2;
		}
		return false;
	}

	[Token(Token = "0x60058E4")]
	[Address(RVA = "0x5D19490", Offset = "0x5D18490", VA = "0x5D19490")]
	private static void StopMusic()
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$StopMusic): clean
		MusicManager pAVar1;
		AudioSource pUVar2;

		pAVar1 = MusicManager._instance;
		if (pAVar1 != null) {
			pAVar1.StopAllCoroutines();
			pAVar1 = MusicManager._instance;
			if (pAVar1 != null) {
				pAVar1._isFading = false;
				pAVar1._isDefaultPlaylist = false;
				pAVar1._currentPlaylist = MusicPlaylist.None;
				pAVar1 = MusicManager._instance;
				if (pAVar1 != null) {
					pAVar1._currentSongName = (String)**(ulong*)(g_data_07556758 + 0xb8);
					pAVar1 = MusicManager._instance;
					if (pAVar1 != null) {
						pAVar1._autoPlay = false;
						pAVar1._songTimeLeft = 0.0;
						pAVar1._transitionTimeLeft = 0.0;
						pAVar1._isMenuTransition = false;
						pAVar1._justPlayedMenuTransition = false;
						pAVar1._lastSongBeforeGrabbed = (String)**(ulong*)(g_data_07556758 + 0xb8);
						pAVar1 = MusicManager._instance;
						if ((pAVar1 != null) &&(pUVar2 = pAVar1._audio, pUVar2 != null)) {
							pUVar2.Stop();
							pAVar1 = MusicManager._instance;
							if ((pAVar1 != null) &&(pUVar2 = pAVar1._audio, pUVar2 != null)) {
								pUVar2.clip = null;
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60058E5")]
	[Address(RVA = "0x5D19610", Offset = "0x5D18610", VA = "0x5D19610")]
	private static void FinishSetPlaylist(string playlist, bool forceNext = false)
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$FinishSetPlaylist): clean
		bool bVar1;
		bool bVar2;
		MusicManager pAVar3;
		MethodInfo method_00;

		pAVar3 = MusicManager._instance;
		if (pAVar3 == null) goto label_05e19829;
		bVar1 = (pAVar3._currentPlaylist != playlist);
		pAVar3 = MusicManager._instance;
		if (pAVar3 == null) goto label_05e19829;
		pAVar3._currentPlaylist = playlist;
		pAVar3 = MusicManager._instance;
		if (pAVar3 == null) goto label_05e19829;
		bVar2 = pAVar3._isMenuTransition;
		if (pAVar3._isDefaultPlaylist == false) {
			if (bVar2 != false) goto label_05e196d2;
			if (0.0 < pAVar3._transitionTimeLeft) {
				pAVar3._songTimeLeft = 0.0;
			}
	label_05e1971d: ;
			pAVar3._transitionTimeLeft = 0.0;
		}
		else {
			pAVar3._songTimeLeft = 0.0;
			if (bVar2 == false) goto label_05e1971d;
	label_05e196d2: ;
			bVar2 = (playlist == MusicPlaylist.Battle);
			if (bVar2) {
				pAVar3 = MusicManager._instance;
				if (pAVar3 == null) goto label_05e19829;
				goto label_05e1971d;
			}
		}
		bVar2 = (playlist == MusicPlaylist.Battle);
		if (!bVar2) goto label_05e197bf;
		pAVar3 = MusicManager._instance;
		if (pAVar3 == null) goto label_05e19829;
		if (pAVar3._justEscapedGrab == false) {
	label_05e197bf: ;
			pAVar3 = MusicManager._instance;
			if (pAVar3 == null) goto label_05e19829;
			if ((pAVar3._transitionTimeLeft <= 0.0) && (bVar1 || forceNext)) {
				pAVar3._currentSong = 0;
				MusicManager.NextSong();
			}
		}
		else {
			playlist = pAVar3._lastSongBeforeGrabbed;
			method_00 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
			bVar2 = (playlist != (String)method_00);
			if (!bVar2) goto label_05e197bf;
			pAVar3 = MusicManager._instance;
			if (pAVar3 == null) goto label_05e19829;
			MusicManager.SetSong(pAVar3._lastSongBeforeGrabbed, pAVar3._lastTimeBeforeGrabbed);
		}
		pAVar3 = MusicManager._instance;
		if (pAVar3 != null) {
			pAVar3._justEscapedGrab = false;
			return;
		}
	label_05e19829: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60058E6")]
	[Address(RVA = "0x5D19180", Offset = "0x5D18180", VA = "0x5D19180")]
	private static void PlaySoundEffect(JSONNode songInfo)
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$PlaySoundEffect): 1 lines keep C-only constructs
		MusicManager pAVar1;
		AudioSource pUVar2;
		bool bVar3;
		JSONNode pSVar4;
		String name;
		AudioClip clip;
		float value;

		bVar3 = (songInfo == null);
		if (!bVar3) {
			if (songInfo == null) {
	label_05e193a2: ;
				throw new NullReferenceException();
			}
			bVar3 = songInfo.HasKey("Name");
			if (bVar3) {
				pSVar4 = songInfo.get_Item("Name");
				name = ((JSONNode)pSVar4);
				clip = (AudioClip)ResourceManager.LoadAsset("Music", name, false, false);
				if ((clip != null) && (clip.klass != typeof(AudioClip))) {
					throw new InvalidCastException();
				}
				bVar3 = ((Object)clip == null);
				if (!bVar3) {
					pAVar1 = MusicManager._instance;
					if (pAVar1 != null) {
						pUVar2 = pAVar1._soundEffect;
						pSVar4 = songInfo.get_Item("Volume");
						value = ((JSONNode)pSVar4);
						if (pUVar2 != null) {
							pUVar2.volume = value;
							pAVar1 = MusicManager._instance;
							if ((pAVar1 != null) &&(pUVar2 = pAVar1._soundEffect, pUVar2 != null)) {
								pUVar2.PlayOneShot(clip);
								return;
							}
						}
					}
					goto label_05e193a2;
				}
			}
		}
		return;
	}

	[Token(Token = "0x60058E7")]
	[Address(RVA = "0x5D18AD0", Offset = "0x5D17AD0", VA = "0x5D18AD0")]
	private static void PlayImmediateTransition(JSONNode songInfo)
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$PlayImmediateTransition): 1 lines keep C-only constructs
		MusicManager pAVar1;
		AudioSource pUVar2;
		SoundSettings pSVar3;
		FloatSetting pSVar4;
		bool bVar5;
		JSONNode pSVar6;
		String name;
		AudioClip value;
		ApplicationManagers_MusicManager_StaticFields pAVar7;
		float fVar8;
		float fVar9;

		bVar5 = (songInfo != null);
		if (!bVar5) {
			return;
		}
		if (songInfo != null) {
			bVar5 = songInfo.HasKey("Name");
			if (!bVar5) {
				return;
			}
			pSVar6 = songInfo.get_Item("Name");
			name = ((JSONNode)pSVar6);
			value = (AudioClip)ResourceManager.LoadAsset("Music", name, false, false);
			if ((value != null) && (value.klass != typeof(AudioClip))) {
				throw new InvalidCastException();
			}
			pSVar6 = songInfo.get_Item("Volume");
			fVar8 = ((JSONNode)pSVar6);
			pAVar1 = MusicManager._instance;
			if ((pAVar1 != null) &&(pUVar2 = pAVar1._audio, pUVar2 != null)) {
				pUVar2.clip = value;
				pAVar7 = typeof(MusicManager).static_fields;
				if (pAVar7._instance != null) {
					pUVar2 = pAVar7._instance._audio;
					if (Il2CppMethodInitialized_07548462 == false) {
						Il2CppMethodInitialized_07548462 = true;
						pAVar7 = typeof(MusicManager).static_fields;
					}
					fVar9 = 0.0;
					if (pAVar7._muted == false) {
						pSVar3 = SettingsManager.SoundSettings;
						if ((pSVar3 == null) ||(pSVar4 = pSVar3.Music, pSVar4 == null)) goto label_05e18da3;
						fVar9 = pSVar4._value * 0.4;
					}
					if (pUVar2 != null) {
						pUVar2.volume = fVar8 * fVar9;
						pAVar1 = MusicManager._instance;
						if (((pAVar1 != null) &&(pUVar2 = pAVar1._audio, pUVar2 != null)) &&(pUVar2.Play(), value != null)) {
							pAVar1 = MusicManager._instance;
							fVar8 = value.length;
							if (pAVar1 != null) {
								pAVar1._songTimeLeft = fVar8;
								pAVar1 = MusicManager._instance;
								fVar8 = value.length;
								if (pAVar1 != null) {
									pAVar1._transitionTimeLeft = fVar8;
									return;
								}
							}
						}
					}
				}
			}
		}
	label_05e18da3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60058E8")]
	[Address(RVA = "0x5D19830", Offset = "0x5D18830", VA = "0x5D19830")]
	public static void SetSong(string song, float startTime = 0f)
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$SetSong): 7 lines keep C-only constructs
		byte bVar1;
		MusicManager pAVar2;
		BaseGameManager x;
		SoundSettings pSVar3;
		FloatSetting pSVar4;
		UISettings pSVar5;
		BoolSetting pSVar6;
		bool bVar7;
		int iVar8;
		JSONNode pSVar9;
		JSONNode pSVar10;
		String pSVar11;
		InGameManager __this;
		MusicManager.d__47<FadeNextSong> __this_00;
		InGameManager pGVar12;
		float local_38;

		pSVar9 = MusicManager.FindSong(song);
		pAVar2 = MusicManager._instance;
		if (pAVar2 == null) goto label_05e19ef9;
		pAVar2._autoPlay = false;
		pAVar2._currentSongName = "";
		pGVar12 = null;
		bVar7 = (pSVar9 != null);
		local_38 = 0.0;
		if (bVar7) {
			if (pSVar9 == null) goto label_05e19ef9;
			bVar7 = pSVar9.HasKey("Name");
			if (bVar7) {
				pSVar10 = pSVar9.get_Item("Name");
				pSVar11 = ((JSONNode)pSVar10);
				__this = (InGameManager)ResourceManager.LoadAsset("Music", pSVar11, false, false) ;
				bVar7 = ((Object)__this != null);
				pGVar12 = null;
				if (bVar7) {
					if (__this == null) {
						pGVar12 = null;
					}
					else {
						if (__this.klass != (InGameManager)typeof(AudioClip)) goto label_05e19f01;
						pGVar12 = __this;
					}
				}
				pSVar10 = pSVar9.get_Item("Volume");
				local_38 = ((JSONNode)pSVar10);
				pAVar2 = MusicManager._instance;
				pSVar9 = pSVar9.get_Item("Name");
				pSVar11 = ((JSONNode)pSVar9);
				if (pAVar2 == null) goto label_05e19ef9;
				pAVar2._currentSongName = pSVar11;
				x = SceneLoader.CurrentGameManager;
				if (x != null) {
					bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
					if ((bVar1 <= (x.klass._2).typeHierarchyDepth) &&((x.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(InGameManager))) {
						pSVar3 = SettingsManager.SoundSettings;
						if ((pSVar3 == null) ||(pSVar4 = pSVar3.Music, pSVar4 == null)) goto label_05e19ef9;
						if (0.0 < pSVar4._value) {
							pSVar5 = SettingsManager.UISettings;
							if ((pSVar5 == null) ||(pSVar6 = pSVar5.ShowSongPopup, pSVar6 == null)) goto label_05e19ef9;
							if (pSVar6._value != false) {
								bVar7 = ((Object)x != null);
								if (bVar7) {
									__this = (InGameManager)SceneLoader.CurrentGameManager;
									if (__this == null) goto label_05e19ef9;
									bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
									if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
	label_05e19f01: ;
										throw new InvalidCastException();
									}
									__this.OnSongChange();
								}
							}
						}
					}
				}
			}
			else {
				pSVar10 = MusicManager._musicInfo;
				pSVar9 = pSVar9.get_Item("Playlist");
				pSVar11 = ((JSONNode)pSVar9);
				if ((pSVar10 == null) ||(pSVar9 = pSVar10.get_Item(pSVar11), pSVar9 == null)) goto label_05e19ef9;
				iVar8 = pSVar9.get_Count();
				iVar8 = Random.Range(0, iVar8);
				pSVar9 = pSVar9.get_Item(iVar8);
				if (pSVar9 == null) goto label_05e19ef9;
				pSVar10 = (JSONNode)(**(code*)((long)pSVar9.klass + 0x1a8))(pSVar9,"Name",*(ulong)((long)pSVar9.klass + 0x1b0));
				pSVar11 = ((JSONNode)pSVar10);
				__this = (InGameManager)ResourceManager.LoadAsset("Music", pSVar11, false, false) ;
				bVar7 = ((Object)__this != null);
				pGVar12 = null;
				if (bVar7) {
					if (__this == null) {
						pGVar12 = null;
					}
					else {
						if (__this.klass != (InGameManager)typeof(AudioClip)) goto label_05e19f01;
						pGVar12 = __this;
					}
				}
				pSVar10 = (JSONNode)(**(code*)((long)pSVar9.klass + 0x1a8))(pSVar9,"Volume",*(ulong)((long)pSVar9.klass + 0x1b0));
				local_38 = ((JSONNode)pSVar10);
				pAVar2 = MusicManager._instance;
				pSVar9 = (JSONNode)(**(code*)((long)pSVar9.klass + 0x1a8))(pSVar9,"Name",*(ulong)((long)pSVar9.klass + 0x1b0));
				pSVar11 = ((JSONNode)pSVar9);
				if (pAVar2 == null) goto label_05e19ef9;
				pAVar2._currentSongName = pSVar11;
			}
		}
		pAVar2 = MusicManager._instance;
		if (pAVar2 != null) {
			pAVar2.StopAllCoroutines();
			pAVar2 = MusicManager._instance;
			if (pAVar2 != null) {
				__this_00 = new MusicManager.d__47<FadeNextSong>();
				__this_00.__1__state = 0;
				__this_00.__4__this = pAVar2;
				__this_00.nextClip = (AudioClip)pGVar12;
				__this_00.volume = local_38;
				__this_00.startTime = startTime;
				pAVar2.StartCoroutine((IEnumerator)__this_00);
				return;
			}
		}
	label_05e19ef9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60058E9")]
	[Address(RVA = "0x5D1A4D0", Offset = "0x5D194D0", VA = "0x5D1A4D0")]
	public static void ChatNextSong()
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$ChatNextSong): clean
		MusicManager pAVar1;

		pAVar1 = MusicManager._instance;
		if (pAVar1 == null) {
			throw new NullReferenceException();
		}
		pAVar1._songTimeLeft = 0.0;
		pAVar1._transitionTimeLeft = 0.0;
		return;
	}

	[Token(Token = "0x60058EA")]
	[Address(RVA = "0x5D19F10", Offset = "0x5D18F10", VA = "0x5D19F10")]
	public static void NextSong()
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$NextSong): 1 lines keep C-only constructs
		int iVar1;
		MusicManager pAVar2;
		List<string> __this;
		bool bVar4;
		int iVar5;
		String pSVar6;
		JSONNode pSVar7;
		uint uVar8;
		MethodInfo method_00;

		pAVar2 = MusicManager._instance;
		if (pAVar2 != null) {
			bVar4 = (pAVar2._currentPlaylist == (String)**(ulong*)(g_data_07556758 + 0xb8));
			if (bVar4) {
				return;
			}
			pAVar2 = MusicManager._instance;
			if (pAVar2 != null) {
				pSVar6 = pAVar2._currentPlaylist;
				bVar4 = (pSVar6 == MusicPlaylist.None);
				if (bVar4) {
					return;
				}
				pAVar2 = MusicManager._instance;
				if (pAVar2 != null) {
					bVar4 = (pAVar2._currentPlaylist == "Custom");
					if (bVar4) {
						pAVar2 = MusicManager._instance;
						if ((pAVar2 != null) &&(__this = pAVar2._customPlaylist, __this != null)) {
							iVar1 = __this._size;
							if (iVar1 == 0) {
								return;
							}
							uVar8 = pAVar2._currentSong + 1;
							method_00 = null;
							if ((int)uVar8 < iVar1) {
								method_00 = (MethodInfo)(ulong)uVar8;
							}
							pAVar2._currentSong = (int32_t)method_00;
							pSVar6 = __this.get_Item((int32_t)method_00);
	label_05e1a13f: ;
							MusicManager.SetSong(pSVar6, 0.0);
							return;
						}
					}
					else if (((MusicManager._instance != null) &&(pSVar7 = MusicManager._musicInfo, pSVar7 != null)) &&(pSVar7 = pSVar7.get_Item(MusicManager._instance._currentPlaylist), pSVar7 != null)) {
						iVar5 = pSVar7.get_Count();
						iVar5 = Random.Range(0, iVar5);
						pSVar7 = pSVar7.get_Item(iVar5);
						if (pSVar7 != null) {
							pSVar7 = (JSONNode)(**(code*)((long)pSVar7.klass + 0x1a8))(pSVar7,"Name",*(ulong)((long)pSVar7.klass + 0x1b0));
							method_00 = null;
							pSVar6 = ((JSONNode)pSVar7);
							goto label_05e1a13f;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60058EB")]
	[Address(RVA = "0x5D1A160", Offset = "0x5D19160", VA = "0x5D1A160")]
	private static JSONNode FindSong(string name)
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$FindSong): 8 lines keep C-only constructs
		bool bVar1;
		JSONNode pSVar2;
		JSONNode a;
		KeyValuePair<string, JSONNode> aKeyValue;
		JSONNode.Enumerator local_160;
		JSONNode.Enumerator local_118;
		JSONNode.Enumerator local_c8;
		JSONNode.Enumerator local_78;

		local_c8.m_Array._list = null;
		local_c8.m_Array._index = 0;
		local_c8.m_Array._version = 0;
		local_c8.m_Object._current.value = null;
		local_c8.m_Object._getEnumeratorRetType = 0;
		local_c8.m_Object._36_4_ = 0;
		local_c8.m_Object._version = 0;
		local_c8.m_Object._index = 0;
		local_c8.m_Object._current.key = null;
		local_c8.type = 0;
		local_c8._4_4_ = 0;
		local_c8.m_Object._dictionary = null;
		local_c8.m_Array._current = null;
		local_118.m_Array._list = null;
		local_118.m_Array._index = 0;
		local_118.m_Array._version = 0;
		local_118.m_Object._current.value = null;
		local_118.m_Object._getEnumeratorRetType = 0;
		local_118.m_Object._36_4_ = 0;
		local_118.m_Object._version = 0;
		local_118.m_Object._index = 0;
		local_118.m_Object._current.key = null;
		local_118.type = 0;
		local_118._4_4_ = 0;
		local_118.m_Object._dictionary = null;
		local_118.m_Array._current = null;
		bVar1 = (name == (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (!bVar1) {
			pSVar2 = MusicManager._musicInfo;
			if (pSVar2 == null) {
	label_05e1a429: ;
				throw new NullReferenceException();
			}
			local_160 = pSVar2.Values;
			local_78.m_Array._current = local_160.m_Array._current;
			local_78.m_Array._list = local_160.m_Array._list;
			local_78.m_Array._index = local_160.m_Array._index;
			local_78.m_Array._version = local_160.m_Array._version;
			local_78.m_Object._current.value = local_160.m_Object._current.value;
			local_78.m_Object._getEnumeratorRetType = local_160.m_Object._getEnumeratorRetType;
			local_78.m_Object._36_4_ = local_160.m_Object._36_4_;
			local_78.m_Object._version = local_160.m_Object._version;
			local_78.m_Object._index = local_160.m_Object._index;
			local_78.m_Object._current.key = local_160.m_Object._current.key;
			local_78.type = local_160.type;
			local_78._4_4_ = local_160._4_4_;
			local_78.m_Object._dictionary = local_160.m_Object._dictionary;
			local_c8 = local_78.GetEnumerator();
			bVar1 = local_c8.MoveNext();
			if (bVar1) {
				do {
					pSVar2 = local_c8.Current;
					if (pSVar2 == null) goto label_05e1a429;
					local_160.unknown(pSVar2);
					local_118.m_Array._current = local_160.m_Array._current;
					local_118.m_Array._list = local_160.m_Array._list;
					local_118.m_Array._index = local_160.m_Array._index;
					local_118.m_Array._version = local_160.m_Array._version;
					local_118.m_Object._current.value = local_160.m_Object._current.value;
					local_118.m_Object._getEnumeratorRetType = local_160.m_Object._getEnumeratorRetType;
					local_118.m_Object._36_4_ = local_160.m_Object._36_4_;
					local_118.m_Object._version = local_160.m_Object._version;
					local_118.m_Object._index = local_160.m_Object._index;
					local_118.m_Object._current.key = local_160.m_Object._current.key;
					local_118.type = local_160.type;
					local_118._4_4_ = local_160._4_4_;
					local_118.m_Object._dictionary = local_160.m_Object._dictionary;
					while (bVar1 = local_118.MoveNext()) {
						aKeyValue = local_118.Current;
						pSVar2 = ((JSONNode)aKeyValue);
						if (pSVar2 == null) goto label_05e1a429;
						bVar1 = pSVar2.HasKey("Name");
						if (bVar1) {
							a = pSVar2.get_Item("Name");
							bVar1 = (a == (object)name);
							if (bVar1) {
								return pSVar2;
							}
						}
					}
					bVar1 = local_c8.MoveNext();
				} while (bVar1);
			}
		}
		return null;
	}

	[Token(Token = "0x60058EC")]
	[Address(RVA = "0x5D1A430", Offset = "0x5D19430", VA = "0x5D1A430")]
	[IteratorStateMachine(typeof(_003CFadeNextSong_003Ed__47))]
	private IEnumerator FadeNextSong(AudioClip nextClip, float volume, float startTime)
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$FadeNextSong): clean
		MusicManager.d__47<FadeNextSong> __this_00;

		__this_00 = new MusicManager.d__47<FadeNextSong>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.nextClip = nextClip;
		__this_00.volume = volume;
		__this_00.startTime = startTime;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60058ED")]
	[Address(RVA = "0x5D1A540", Offset = "0x5D19540", VA = "0x5D1A540")]
	private void Update()
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$Update): 15 lines keep C-only constructs
		String pSVar1;
		MusicManager pAVar2;
		bool bVar3;
		String* ppSVar4;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo extraout_RDX_03;
		MethodInfo extraout_RDX_04;
		MethodInfo extraout_RDX_05;
		MethodInfo pMVar5;
		float fVar6;
		float fVar7;

		fVar7 = this._songTimeLeft;
		fVar6 = Time.deltaTime;
		this._songTimeLeft = fVar7 - fVar6;
		fVar7 = this._transitionTimeLeft;
		pMVar5 = null;
		fVar6 = Time.deltaTime;
		fVar7 = fVar7 - fVar6;
		this._transitionTimeLeft = fVar7;
		if (this._isDefaultPlaylist == false) {
			if (0.0 < this._songTimeLeft) {
				return;
			}
			if (this._autoPlay == false) {
				return;
			}
			if (0.0 < fVar7) {
				return;
			}
			MusicManager.NextSong();
			return;
		}
		pSVar1 = this._currentPlaylist;
		pMVar5 = (MethodInfo)MusicPlaylist.Battle;
		bVar3 = (pSVar1 != (String)pMVar5);
		if (bVar3) {
			if (0.0 < this._transitionTimeLeft) {
				pAVar2 = MusicManager._instance;
				if (pAVar2 == null) {
					throw new NullReferenceException();
				}
				if (pAVar2._isMenuTransition == false) goto label_05e1a659;
			}
			bVar3 = this.ShouldPlayBattleMusic();
			if (bVar3) {
				if ((typeof(MusicPlaylist)._2).cctor_finished_or_no_cctor == 0) {
				}
				pMVar5 = (MethodInfo)0x1;
				MusicManager.FinishSetPlaylist(MusicPlaylist.Battle, true);
			}
		}
	label_05e1a659: ;
		if ((this._songTimeLeft <= 0.0) && (this._autoPlay != false)) {
			fVar7 = this._transitionTimeLeft;
			if (0.0 < fVar7) goto label_05e1a74a;
			bVar3 = this.ShouldPlayBattleMusic();
			if (bVar3) {
				pMVar5 = extraout_RDX_01;
				if ((typeof(MusicPlaylist)._2).cctor_finished_or_no_cctor == 0) {
					pMVar5 = extraout_RDX_02;
				}
				ppSVar4 = &MusicPlaylist.Battle;
			}
			else {
				pSVar1 = this._currentPlaylist;
				bVar3 = (pSVar1 == MusicPlaylist.Battle);
				pMVar5 = extraout_RDX_03;
				if ((bVar3) || (this._justPlayedMenuTransition != false)) {
					if ((typeof(MusicPlaylist)._2).cctor_finished_or_no_cctor == 0) {
						pMVar5 = extraout_RDX_04;
					}
					ppSVar4 = &MusicPlaylist.Ambient;
				}
				else {
					if ((typeof(MusicPlaylist)._2).cctor_finished_or_no_cctor == 0) {
						pMVar5 = extraout_RDX_05;
					}
					ppSVar4 = &MusicPlaylist.Peaceful;
				}
			}
			MusicManager.FinishSetPlaylist(*ppSVar4, true);
		}
		fVar7 = this._transitionTimeLeft;
	label_05e1a74a: ;
		if ((fVar7 <= 0.0) && (this._justPlayedMenuTransition != false)) {
			this._justPlayedMenuTransition = false;
		}
		return;
	}

	[Token(Token = "0x60058EE")]
	[Address(RVA = "0x5D1A790", Offset = "0x5D19790", VA = "0x5D1A790")]
	private bool ShouldPlayBattleMusic()
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$ShouldPlayBattleMusic): 28 lines keep C-only constructs
		byte bVar1;
		BaseCamera pCVar2;
		BaseGameManager pGVar3;
		BaseGameManager pGVar4;
		BaseCharacter b;
		Il2CppClass pIVar5;
		Il2CppRuntimeInterfaceOffsetPair pIVar6;
		BaseComponentCache pUVar7;
		Transform pUVar8;
		bool bVar9;
		sbyte cVar10;
		object pIVar11;
		InGameManager __this_00;
		IEnumerable<BaseCharacter> pSVar12;
		VirtualInvokeData pVVar13;
		BaseCharacter a;
		object pIVar14;
		ulong uVar15;
		long lVar16;
		float fVar17;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Vector3 UVar18;
		object local_68;
		float local_5c;
		ulong local_58;
		byte local_50;
		byte[] local_48 = new byte[16];

		if (Il2CppMethodInitialized_07548461 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(IEnumerable<BaseCharacter>)) ;
			il2cpp_codegen_initialize_runtime_metadata(&typeof(IEnumerator<BaseCharacter>)) ;
			Il2CppMethodInitialized_07548461 = true;
		}
		local_68 = null;
		fVar17 = Time.time;
		if (this._lastCheckBattleMusic + 0.2 <= fVar17) {
			fVar17 = Time.time;
			this._lastCheckBattleMusic = fVar17;
			if (SceneLoader.SceneName == 2) {
				pCVar2 = SceneLoader.CurrentCamera;
				bVar9 = ((Object)pCVar2 != null);
				if (bVar9) {
					pGVar3 = SceneLoader.CurrentGameManager;
					bVar9 = ((Object)pGVar3 != null);
					if (bVar9) {
						pCVar2 = SceneLoader.CurrentCamera;
						if (pCVar2 != null) {
							bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
							if (((bVar1 <= (((Il2CppClass)pCVar2.klass)._2).typeHierarchyDepth) &&((((Il2CppClass)pCVar2.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(InGameCamera))) &&(pGVar3 = SceneLoader.CurrentGameManager, pGVar3 != null)) {
								pGVar4 = pGVar3.klass;
								bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
								if ((bVar1 <= (pGVar4._2).typeHierarchyDepth) &&((pGVar4._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(InGameManager))) {
									pIVar11 = il2cpp_codegen_is_inst_class((object)pCVar2, typeof(InGameCamera));
									if (pIVar11 != null) {
										pIVar11 = il2cpp_codegen_is_inst_class((object)pCVar2, typeof(InGameCamera));
										b = pIVar11[3].monitor;
										__this_00 = (InGameManager)il2cpp_codegen_is_inst_class((object)SceneLoader. CurrentGameManager, typeof(InGameManager));
										bVar9 = ((Object)b == null);
										if (bVar9) {
											return false;
										}
										if ((__this_00 != null) &&(pSVar12 = __this_00.GetAllCharactersEnumerable(), pSVar12 != null)) {
											pIVar11 = (object)il2cpp_runtime_helper_02ad5a70(0, typeof(IEnumerable<BaseCharacter>), pSVar12);
											local_50 = (byte)&local_68;
											local_58 = 0;
	joined_r0x05e1aa19: ;
											do {
												do {
													do {
														local_68 = pIVar11;
														if (pIVar11 == null) {
															throw new NullReferenceException();
														}
														pIVar5 = pIVar11.klass;
														uVar15 = (ulong)(pIVar5._2).interface_offsets_count;
														if (uVar15 != 0) {
															pIVar6 = (pIVar5._1).interfaceOffsets;
															lVar16 = 0;
															do {
																if (*(Il2CppClass*)((long)&pIVar6.interfaceType + lVar16) ==typeof(IEnumerator)) {
																	pVVar13 = (VirtualInvokeData)&pIVar5.vtable[*(int)((long)&pIVar6.offset + lVar16)].methodPtr;
																	goto label_05e1aa9e;
																}
																lVar16 = lVar16 + 0x10;
															} while (uVar15 * 0x10 != lVar16);
														}
														pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar11, typeof(IEnumerator), 0);
	label_05e1aa9e: ;
														cVar10 = (*pVVar13.methodPtr)(pIVar11,pVVar13.method);
														pIVar11 = local_68;
														if (cVar10 == false) {
															cVar10 = false;
															goto label_05e1acd9;
														}
														if (local_68 == null) {
															throw new NullReferenceException();
														}
														pIVar5 = local_68.klass;
														uVar15 = (ulong)(pIVar5._2).interface_offsets_count;
														if (uVar15 != 0) {
															pIVar6 = (pIVar5._1).interfaceOffsets;
															lVar16 = 0;
															do {
																if (*(IEnumerator<BaseCharacter>*)((long)&pIVar6.interfaceType + lVar16) == typeof(IEnumerator<BaseCharacter>)) {
																	pVVar13 = (VirtualInvokeData)&pIVar5.vtable[*(int)((long)&pIVar6.offset + lVar16)].methodPtr;
																	goto label_05e1ab10;
																}
																lVar16 = lVar16 + 0x10;
															} while (uVar15 * 0x10 != lVar16);
														}
														pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath(local_68, (Il2CppClass)typeof(IEnumerator<BaseCharacter>), 0);
	label_05e1ab10: ;
														a = (BaseCharacter)(*pVVar13.methodPtr)(pIVar11,pVVar13.method);
														if (a == null) {
															throw new NullReferenceException();
														}
														bVar9 = a.ValidTarget();
														pIVar11 = local_68;
													} while (!bVar9);
													bVar9 = TeamInfo.SameTeam(a, b);
													pIVar11 = local_68;
												} while (bVar9);
												pUVar7 = a.Cache;
												if (pUVar7 == null) {
													throw new NullReferenceException();
												}
												pUVar8 = pUVar7.Transform;
												if (pUVar8 == null) {
													throw new NullReferenceException();
												}
												UVar18 = pUVar8.position;
												local_5c = UVar18.z;
												local_48._8_4_ = extraout_XMM0_Dc;
												local_48._0_8_ = UVar18._0_8_;
												local_48._12_4_ = extraout_XMM0_Dd;
												if (b == null) {
													throw new NullReferenceException();
												}
												pUVar7 = b.Cache;
												if (pUVar7 == null) {
													throw new NullReferenceException();
												}
												pUVar8 = pUVar7.Transform;
												if (pUVar8 == null) {
													throw new NullReferenceException();
												}
												UVar18 = pUVar8.position;
												fVar17 = (float)il2cpp_runtime_helper_05956b50(local_48._0_4_, local_5c, UVar18.x, UVar18.z);
												bVar1 = (typeof(BasicTitan)._2).typeHierarchyDepth;
												pIVar11 = local_68;
												if ((bVar1 <= (a.klass._2).typeHierarchyDepth) &&((a.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(BasicTitan))) {
													if (fVar17 < 200.0) goto label_05e1acd9;
													if (fVar17 < 1000.0) {
														pIVar11 = il2cpp_codegen_is_inst_class((object)a, typeof(BasicTitan));
														if (pIVar11 == null) {
															throw new NullReferenceException();
														}
														pIVar14 = il2cpp_codegen_is_inst_class((object)a, typeof(BasicTitan));
														pIVar11 = local_68;
														if (0 < *(int)((long)&pIVar14[0x38].klass + 4)) goto label_05e1acd9;
													}
													goto joined_r0x05e1aa19;
												}
												if (fVar17 < 500.0) {
	label_05e1acd9: ;
													il2cpp_runtime_helper_02fe04a0(&local_58);
													return (bool)cVar10;
												}
											} while(true);
										}
									}
									throw new NullReferenceException();
								}
							}
						}
					}
				}
			}
		}
		return false;
	}

	[Token(Token = "0x60058EF")]
	[Address(RVA = "0x5D18990", Offset = "0x5D17990", VA = "0x5D18990")]
	private static float GetMusicVolume()
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$GetMusicVolume): clean
		SoundSettings pSVar1;
		FloatSetting pSVar2;

		if (MusicManager._muted != false) {
			return 0.0;
		}
		pSVar1 = SettingsManager.SoundSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.Music, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		return pSVar2._value * 0.4;
	}

	[Token(Token = "0x60058F0")]
	[Address(RVA = "0x5D1AD10", Offset = "0x5D19D10", VA = "0x5D1AD10")]
	public static string GetCurrentSong()
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$GetCurrentSong): clean
		MusicManager pAVar1;
		bool bVar2;

		pAVar1 = MusicManager._instance;
		if (pAVar1 != null) {
			bVar2 = (pAVar1._currentSongName == "");
			if (bVar2) {
				return "None";
			}
			pAVar1 = MusicManager._instance;
			if (pAVar1 != null) {
				return pAVar1._currentSongName;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60058F1")]
	[Address(RVA = "0x5D1ADB0", Offset = "0x5D19DB0", VA = "0x5D1ADB0")]
	public static List<string> GetAllSongs()
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$GetAllSongs): 12 lines keep C-only constructs
		bool bVar1;
		HashSet<string> __this;
		JSONNode pSVar2;
		String item;
		List<string> __this_00;
		KeyValuePair<string, JSONNode> SVar3;
		JSONNode.Enumerator local_1a8;
		JSONNode.Enumerator local_160;
		JSONNode.Enumerator local_118;
		JSONNode.Enumerator local_c8;
		JSONNode.Enumerator local_78;

		local_c8.m_Array._list = null;
		local_c8.m_Array._index = 0;
		local_c8.m_Array._version = 0;
		local_c8.m_Object._current.value = null;
		local_c8.m_Object._getEnumeratorRetType = 0;
		local_c8.m_Object._36_4_ = 0;
		local_c8.m_Object._version = 0;
		local_c8.m_Object._index = 0;
		local_c8.m_Object._current.key = null;
		local_c8.type = 0;
		local_c8._4_4_ = 0;
		local_c8.m_Object._dictionary = null;
		local_c8.m_Array._current = null;
		local_1a8.m_Array._list = null;
		local_1a8.m_Array._index = 0;
		local_1a8.m_Array._version = 0;
		local_1a8.m_Object._current.value = null;
		local_1a8.m_Object._getEnumeratorRetType = 0;
		local_1a8.m_Object._36_4_ = 0;
		local_1a8.m_Object._version = 0;
		local_1a8.m_Object._index = 0;
		local_1a8.m_Object._current.key = null;
		local_1a8.type = 0;
		local_1a8._4_4_ = 0;
		local_1a8.m_Object._dictionary = null;
		local_1a8.m_Array._current = null;
		__this = new HashSet<string>();
		pSVar2 = MusicManager._musicInfo;
		if (pSVar2 == null) {
	label_05e1b25f: ;
			throw new NullReferenceException();
		}
		local_118 = pSVar2.Values;
		local_78.m_Array._current = local_118.m_Array._current;
		local_78.m_Array._list = local_118.m_Array._list;
		local_78.m_Array._index = local_118.m_Array._index;
		local_78.m_Array._version = local_118.m_Array._version;
		local_78.m_Object._current.value = local_118.m_Object._current.value;
		local_78.m_Object._getEnumeratorRetType = local_118.m_Object._getEnumeratorRetType;
		local_78.m_Object._36_4_ = local_118.m_Object._36_4_;
		local_78.m_Object._version = local_118.m_Object._version;
		local_78.m_Object._index = local_118.m_Object._index;
		local_78.m_Object._current.key = local_118.m_Object._current.key;
		local_78.type = local_118.type;
		local_78._4_4_ = local_118._4_4_;
		local_78.m_Object._dictionary = local_118.m_Object._dictionary;
		local_c8 = local_78.GetEnumerator();
		bVar1 = local_c8.MoveNext();
		if (bVar1) {
			if (__this == null) {
				do {
					pSVar2 = local_c8.Current;
					if (pSVar2 == null) goto label_05e1b25f;
					local_160.unknown(pSVar2);
					local_118.m_Array._current = local_160.m_Array._current;
					local_118.type = local_160.type;
					local_118._4_4_ = local_160._4_4_;
					local_118.m_Object._dictionary = local_160.m_Object._dictionary;
					local_1a8.type = local_160.type;
					local_1a8._4_4_ = local_160._4_4_;
					local_1a8.m_Object._dictionary = local_160.m_Object._dictionary;
					local_1a8.m_Object._version = local_160.m_Object._version;
					local_1a8.m_Object._index = local_160.m_Object._index;
					local_1a8.m_Object._current.key = local_160.m_Object._current.key;
					local_1a8.m_Object._current.value = local_160.m_Object._current.value;
					local_1a8.m_Object._getEnumeratorRetType = local_160.m_Object._getEnumeratorRetType;
					local_1a8.m_Object._36_4_ = local_160.m_Object._36_4_;
					local_1a8.m_Array._list = local_160.m_Array._list;
					local_1a8.m_Array._index = local_160.m_Array._index;
					local_1a8.m_Array._version = local_160.m_Array._version;
					local_1a8.m_Array._current = local_160.m_Array._current;
					while(true) {
						bVar1 = local_1a8.MoveNext();
						if (!bVar1) break;
						SVar3 = local_1a8.Current;
						pSVar2 = ((JSONNode)SVar3);
						if (pSVar2 == null) goto label_05e1b25f;
						bVar1 = pSVar2.HasKey("Name");
						if (bVar1) {
							pSVar2 = pSVar2.get_Item("Name");
							((JSONNode)pSVar2);
							throw new NullReferenceException();
						}
					}
					bVar1 = local_c8.MoveNext();
				} while (bVar1);
			}
			else {
				do {
					pSVar2 = local_c8.Current;
					if (pSVar2 == null) goto label_05e1b25f;
					local_160.unknown(pSVar2);
					local_118.m_Array._current = local_160.m_Array._current;
					local_118.type = local_160.type;
					local_118._4_4_ = local_160._4_4_;
					local_118.m_Object._dictionary = local_160.m_Object._dictionary;
					local_1a8.type = local_160.type;
					local_1a8._4_4_ = local_160._4_4_;
					local_1a8.m_Object._dictionary = local_160.m_Object._dictionary;
					local_1a8.m_Object._version = local_160.m_Object._version;
					local_1a8.m_Object._index = local_160.m_Object._index;
					local_1a8.m_Object._current.key = local_160.m_Object._current.key;
					local_1a8.m_Object._current.value = local_160.m_Object._current.value;
					local_1a8.m_Object._getEnumeratorRetType = local_160.m_Object._getEnumeratorRetType;
					local_1a8.m_Object._36_4_ = local_160.m_Object._36_4_;
					local_1a8.m_Array._list = local_160.m_Array._list;
					local_1a8.m_Array._index = local_160.m_Array._index;
					local_1a8.m_Array._version = local_160.m_Array._version;
					local_1a8.m_Array._current = local_160.m_Array._current;
					while(true) {
						bVar1 = local_1a8.MoveNext();
						if (!bVar1) break;
						SVar3 = local_1a8.Current;
						pSVar2 = ((JSONNode)SVar3);
						if (pSVar2 == null) goto label_05e1b25f;
						bVar1 = pSVar2.HasKey("Name");
						if (bVar1) {
							pSVar2 = pSVar2.get_Item("Name");
							item = ((JSONNode)pSVar2);
							__this.Add((object)item);
						}
					}
					bVar1 = local_c8.MoveNext();
				} while (bVar1);
			}
		}
		__this_00 = new List<string>((IEnumerable<T>)__this);
		return __this_00;
	}

	[Token(Token = "0x60058F2")]
	[Address(RVA = "0x5D1B270", Offset = "0x5D1A270", VA = "0x5D1B270")]
	public MusicManager()
	{
		// Lifted from source/cpp/ApplicationManagers/MusicManager.c (ApplicationManagers.MusicManager$$.ctor): clean
		List<string> __this_00;

		__this_00 = new List<string>();
		this._customPlaylist = __this_00;
		this._lastSongBeforeGrabbed = (String)**(ulong*)(g_data_07556758 + 0xb8);
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/MusicManager.c.

	// ApplicationManagers.MusicManager.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new MusicManager.c();
		MusicManager.c.__9 =(MusicManager.c)__this;
		return;
	}

	// ApplicationManagers.MusicManager.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.MusicManager.<>c$$<SetPlaylist>b__37_0: clean
	private bool c__SetPlaylist_b__37_0(String song)
	{
		bool bVar1;
		JSONNode a;

		a = MusicManager.FindSong(song);
		bVar1 = (a != null);
		return bVar1;
	}
}
