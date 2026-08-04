// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.MusicManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/MusicManager.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/MusicManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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

[Token(Token = "0x200078C")]
public class MusicManager : MonoBehaviour
{
	[Token(Token = "0x200078D")]
	[CompilerGenerated]
	private sealed class _003CFadeNextSong_003Ed__46 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400247D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400247E")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400247F")]
		[FieldOffset(Offset = "0x20")]
		public MusicManager _003C_003E4__this;

		[Token(Token = "0x4002480")]
		[FieldOffset(Offset = "0x28")]
		public AudioClip nextClip;

		[Token(Token = "0x4002481")]
		[FieldOffset(Offset = "0x30")]
		public float startTime;

		[Token(Token = "0x4002482")]
		[FieldOffset(Offset = "0x34")]
		public float volume;

		[Token(Token = "0x4002483")]
		[FieldOffset(Offset = "0x38")]
		private float _003CfadeInTime_003E5__2;

		[Token(Token = "0x4002484")]
		[FieldOffset(Offset = "0x3C")]
		private float _003CfadeOutTime_003E5__3;

		[Token(Token = "0x4002485")]
		[FieldOffset(Offset = "0x40")]
		private float _003CfadeTimeLeft_003E5__4;

		[Token(Token = "0x17000E07")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600491D")]
			[Address(RVA = "0x43BDC40", Offset = "0x43BDC40", VA = "0x43BDC40", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000E08")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600491F")]
			[Address(RVA = "0x43BDC90", Offset = "0x43BDC90", VA = "0x43BDC90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600491A")]
		[Address(RVA = "0x43BC6A0", Offset = "0x43BC6A0", VA = "0x43BC6A0")]
		[DebuggerHidden]
		public _003CFadeNextSong_003Ed__46(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600491B")]
		[Address(RVA = "0x43BD6C0", Offset = "0x43BD6C0", VA = "0x43BD6C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600491C")]
		[Address(RVA = "0x43BD6D0", Offset = "0x43BD6D0", VA = "0x43BD6D0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600491E")]
		[Address(RVA = "0x43BDC50", Offset = "0x43BDC50", VA = "0x43BDC50", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200078E")]
	[CompilerGenerated]
	private sealed class _003CStartSoundEffect_003Ed__41 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002486")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002487")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002488")]
		[FieldOffset(Offset = "0x20")]
		public MusicManager _003C_003E4__this;

		[Token(Token = "0x4002489")]
		[FieldOffset(Offset = "0x28")]
		public float volume;

		[Token(Token = "0x400248A")]
		[FieldOffset(Offset = "0x30")]
		public AudioClip clip;

		[Token(Token = "0x17000E09")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004923")]
			[Address(RVA = "0x43BDD90", Offset = "0x43BDD90", VA = "0x43BDD90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000E0A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004925")]
			[Address(RVA = "0x43BDDE0", Offset = "0x43BDDE0", VA = "0x43BDDE0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004920")]
		[Address(RVA = "0x43BC250", Offset = "0x43BC250", VA = "0x43BC250")]
		[DebuggerHidden]
		public _003CStartSoundEffect_003Ed__41(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004921")]
		[Address(RVA = "0x43BDCA0", Offset = "0x43BDCA0", VA = "0x43BDCA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004922")]
		[Address(RVA = "0x43BDCB0", Offset = "0x43BDCB0", VA = "0x43BDCB0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004924")]
		[Address(RVA = "0x43BDDA0", Offset = "0x43BDDA0", VA = "0x43BDDA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002460")]
	[FieldOffset(Offset = "0x0")]
	private static MusicManager _instance;

	[Token(Token = "0x4002461")]
	[FieldOffset(Offset = "0x8")]
	private static JSONNode _musicInfo;

	[Token(Token = "0x4002462")]
	[FieldOffset(Offset = "0x20")]
	private string _currentPlaylist;

	[Token(Token = "0x4002463")]
	[FieldOffset(Offset = "0x28")]
	private AudioSource _audio;

	[Token(Token = "0x4002464")]
	[FieldOffset(Offset = "0x30")]
	private GameObject _soundEffectObject;

	[Token(Token = "0x4002465")]
	[FieldOffset(Offset = "0x38")]
	private AudioSource _soundEffect;

	[Token(Token = "0x4002466")]
	[FieldOffset(Offset = "0x40")]
	private float _songTimeLeft;

	[Token(Token = "0x4002467")]
	[FieldOffset(Offset = "0x44")]
	private float _songVolume;

	[Token(Token = "0x4002468")]
	[FieldOffset(Offset = "0x48")]
	private bool _autoPlay;

	[Token(Token = "0x4002469")]
	[FieldOffset(Offset = "0x49")]
	private bool _isFading;

	[Token(Token = "0x400246A")]
	private const float BattleFadeInTime = 1f;

	[Token(Token = "0x400246B")]
	private const float DefaultFadeOutTime = 1f;

	[Token(Token = "0x400246C")]
	private const float DefaultFadeInTime = 5f;

	[Token(Token = "0x400246D")]
	[FieldOffset(Offset = "0x4C")]
	private int _currentSong;

	[Token(Token = "0x400246E")]
	[FieldOffset(Offset = "0x50")]
	private List<string> _customPlaylist;

	[Token(Token = "0x400246F")]
	[FieldOffset(Offset = "0x58")]
	private string _currentSongName;

	[Token(Token = "0x4002470")]
	[FieldOffset(Offset = "0x10")]
	public static bool _muted;

	[Token(Token = "0x4002471")]
	[FieldOffset(Offset = "0x60")]
	public bool _isDefaultPlaylist;

	[Token(Token = "0x4002472")]
	[FieldOffset(Offset = "0x64")]
	private float _transitionTimeLeft;

	[Token(Token = "0x4002473")]
	[FieldOffset(Offset = "0x68")]
	private bool _isMenuTransition;

	[Token(Token = "0x4002474")]
	[FieldOffset(Offset = "0x69")]
	private bool _justPlayedMenuTransition;

	[Token(Token = "0x4002475")]
	[FieldOffset(Offset = "0x70")]
	private string _lastSongBeforeGrabbed;

	[Token(Token = "0x4002476")]
	[FieldOffset(Offset = "0x78")]
	private float _lastTimeBeforeGrabbed;

	[Token(Token = "0x4002477")]
	[FieldOffset(Offset = "0x7C")]
	private bool _justEscapedGrab;

	[Token(Token = "0x4002478")]
	[FieldOffset(Offset = "0x80")]
	private float _lastCheckBattleMusic;

	[Token(Token = "0x4002479")]
	private const float BattleTitanAnyDistance = 200f;

	[Token(Token = "0x400247A")]
	private const float BattleTitanActiveDistance = 1000f;

	[Token(Token = "0x400247B")]
	private const float BattleOtherAnyDistance = 500f;

	[Token(Token = "0x400247C")]
	private const float CheckBattleMusicDelay = 0.2f;

	[Token(Token = "0x6004901")]
	[Address(RVA = "0x43BA4A0", Offset = "0x43BA4A0", VA = "0x43BA4A0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004902")]
	[Address(RVA = "0x43BA7A0", Offset = "0x43BA7A0", VA = "0x43BA7A0")]
	private static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6004903")]
	[Address(RVA = "0x43B78D0", Offset = "0x43B78D0", VA = "0x43B78D0")]
	public static void ApplySoundSettings()
	{
	}

	[Token(Token = "0x6004904")]
	[Address(RVA = "0x43BAAE0", Offset = "0x43BAAE0", VA = "0x43BAAE0")]
	public static void PlayDeathSong()
	{
	}

	[Token(Token = "0x6004905")]
	[Address(RVA = "0x43BAE70", Offset = "0x43BAE70", VA = "0x43BAE70")]
	public static void PlayGrabbedSong()
	{
	}

	[Token(Token = "0x6004906")]
	[Address(RVA = "0x43BB050", Offset = "0x43BB050", VA = "0x43BB050")]
	public static void OnEscapeGrab()
	{
	}

	[Token(Token = "0x6004907")]
	[Address(RVA = "0x43BB0B0", Offset = "0x43BB0B0", VA = "0x43BB0B0")]
	public static void PlayEffect()
	{
	}

	[Token(Token = "0x6004908")]
	[Address(RVA = "0x43BB3A0", Offset = "0x43BB3A0", VA = "0x43BB3A0")]
	public static void PlayTransition()
	{
	}

	[Token(Token = "0x6004909")]
	[Address(RVA = "0x43BA830", Offset = "0x43BA830", VA = "0x43BA830")]
	public static void SetPlaylist(string playlist)
	{
	}

	[Token(Token = "0x600490A")]
	[Address(RVA = "0x43BB470", Offset = "0x43BB470", VA = "0x43BB470")]
	private static void FinishSetPlaylist(string playlist, bool forceNext = false)
	{
	}

	[Token(Token = "0x600490B")]
	[Address(RVA = "0x43BB160", Offset = "0x43BB160", VA = "0x43BB160")]
	private static void PlaySoundEffect(JSONNode songInfo)
	{
	}

	[Token(Token = "0x600490C")]
	[Address(RVA = "0x43BAB90", Offset = "0x43BAB90", VA = "0x43BAB90")]
	private static void PlayImmediateTransition(JSONNode songInfo)
	{
	}

	[Token(Token = "0x600490D")]
	[Address(RVA = "0x43BC1B0", Offset = "0x43BC1B0", VA = "0x43BC1B0")]
	[IteratorStateMachine(typeof(_003CStartSoundEffect_003Ed__41))]
	private IEnumerator StartSoundEffect(AudioClip clip, float volume)
	{
		return null;
	}

	[Token(Token = "0x600490E")]
	[Address(RVA = "0x43BB690", Offset = "0x43BB690", VA = "0x43BB690")]
	public static void SetSong(string song, float startTime = 0f)
	{
	}

	[Token(Token = "0x600490F")]
	[Address(RVA = "0x43BC650", Offset = "0x43BC650", VA = "0x43BC650")]
	public static void ChatNextSong()
	{
	}

	[Token(Token = "0x6004910")]
	[Address(RVA = "0x43BBD50", Offset = "0x43BBD50", VA = "0x43BBD50")]
	public static void NextSong()
	{
	}

	[Token(Token = "0x6004911")]
	[Address(RVA = "0x43BC270", Offset = "0x43BC270", VA = "0x43BC270")]
	private static JSONNode FindSong(string name)
	{
		return null;
	}

	[Token(Token = "0x6004912")]
	[Address(RVA = "0x43BC5A0", Offset = "0x43BC5A0", VA = "0x43BC5A0")]
	[IteratorStateMachine(typeof(_003CFadeNextSong_003Ed__46))]
	private IEnumerator FadeNextSong(AudioClip nextClip, float volume, float startTime)
	{
		return null;
	}

	[Token(Token = "0x6004913")]
	[Address(RVA = "0x43BC6C0", Offset = "0x43BC6C0", VA = "0x43BC6C0")]
	private void Update()
	{
	}

	[Token(Token = "0x6004914")]
	[Address(RVA = "0x43BC910", Offset = "0x43BC910", VA = "0x43BC910")]
	private bool ShouldPlayBattleMusic()
	{
		return default(bool);
	}

	[Token(Token = "0x6004915")]
	[Address(RVA = "0x43BAA50", Offset = "0x43BAA50", VA = "0x43BAA50")]
	private static float GetMusicVolume()
	{
		return default(float);
	}

	[Token(Token = "0x6004916")]
	[Address(RVA = "0x43BD070", Offset = "0x43BD070", VA = "0x43BD070")]
	public static string GetCurrentSong()
	{
		return null;
	}

	[Token(Token = "0x6004917")]
	[Address(RVA = "0x43BD110", Offset = "0x43BD110", VA = "0x43BD110")]
	public static List<string> GetAllSongs()
	{
		return null;
	}

	[Token(Token = "0x6004918")]
	[Address(RVA = "0x43BD580", Offset = "0x43BD580", VA = "0x43BD580")]
	public static void PlaySoundOneShot(AudioSource source)
	{
	}

	[Token(Token = "0x6004919")]
	[Address(RVA = "0x43BD620", Offset = "0x43BD620", VA = "0x43BD620")]
	public MusicManager()
	{
	}
}
