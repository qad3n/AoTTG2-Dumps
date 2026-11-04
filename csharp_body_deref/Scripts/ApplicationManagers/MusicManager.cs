// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.MusicManager
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000917")]
public class MusicManager : MonoBehaviour
{
	[Token(Token = "0x2000918")]
	[CompilerGenerated]
	private sealed class _003CFadeNextSong_003Ed__48 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002D4C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002D4D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002D4E")]
		[FieldOffset(Offset = "0x20")]
		public MusicManager _003C_003E4__this;

		[Token(Token = "0x4002D4F")]
		[FieldOffset(Offset = "0x28")]
		public AudioClip nextClip;

		[Token(Token = "0x4002D50")]
		[FieldOffset(Offset = "0x30")]
		public float startTime;

		[Token(Token = "0x4002D51")]
		[FieldOffset(Offset = "0x34")]
		public float volume;

		[Token(Token = "0x4002D52")]
		[FieldOffset(Offset = "0x38")]
		private float _003CfadeInTime_003E5__2;

		[Token(Token = "0x4002D53")]
		[FieldOffset(Offset = "0x3C")]
		private float _003CfadeOutTime_003E5__3;

		[Token(Token = "0x4002D54")]
		[FieldOffset(Offset = "0x40")]
		private float _003CfadeTimeLeft_003E5__4;

		[Token(Token = "0x17000F6A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005595")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F6B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005597")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6005592")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CFadeNextSong_003Ed__48(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005593")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005594")]
		[Address(RVA = "0x23593E0", Offset = "0x23579E0", VA = "0x1823593E0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005596")]
		[Address(RVA = "0x23597D0", Offset = "0x2357DD0", VA = "0x1823597D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000919")]
	[CompilerGenerated]
	private sealed class _003CStartSoundEffect_003Ed__43 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002D55")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002D56")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002D57")]
		[FieldOffset(Offset = "0x20")]
		public MusicManager _003C_003E4__this;

		[Token(Token = "0x4002D58")]
		[FieldOffset(Offset = "0x28")]
		public float volume;

		[Token(Token = "0x4002D59")]
		[FieldOffset(Offset = "0x30")]
		public AudioClip clip;

		[Token(Token = "0x17000F6C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600559B")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F6D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600559D")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6005598")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CStartSoundEffect_003Ed__43(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005599")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600559A")]
		[Address(RVA = "0x235DC10", Offset = "0x235C210", VA = "0x18235DC10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600559C")]
		[Address(RVA = "0x235DD00", Offset = "0x235C300", VA = "0x18235DD00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002D2F")]
	[FieldOffset(Offset = "0x0")]
	private static MusicManager _instance;

	[Token(Token = "0x4002D30")]
	[FieldOffset(Offset = "0x8")]
	private static JSONNode _musicInfo;

	[Token(Token = "0x4002D31")]
	[FieldOffset(Offset = "0x20")]
	private string _currentPlaylist;

	[Token(Token = "0x4002D32")]
	[FieldOffset(Offset = "0x28")]
	private AudioSource _audio;

	[Token(Token = "0x4002D33")]
	[FieldOffset(Offset = "0x30")]
	private GameObject _soundEffectObject;

	[Token(Token = "0x4002D34")]
	[FieldOffset(Offset = "0x38")]
	private AudioSource _soundEffect;

	[Token(Token = "0x4002D35")]
	[FieldOffset(Offset = "0x40")]
	private float _songTimeLeft;

	[Token(Token = "0x4002D36")]
	[FieldOffset(Offset = "0x44")]
	private float _songVolume;

	[Token(Token = "0x4002D37")]
	[FieldOffset(Offset = "0x48")]
	private bool _autoPlay;

	[Token(Token = "0x4002D38")]
	[FieldOffset(Offset = "0x49")]
	private bool _isFading;

	[Token(Token = "0x4002D39")]
	private const float BattleFadeInTime = 1f;

	[Token(Token = "0x4002D3A")]
	private const float DefaultFadeOutTime = 1f;

	[Token(Token = "0x4002D3B")]
	private const float DefaultFadeInTime = 5f;

	[Token(Token = "0x4002D3C")]
	[FieldOffset(Offset = "0x4C")]
	private int _currentSong;

	[Token(Token = "0x4002D3D")]
	[FieldOffset(Offset = "0x50")]
	private List<string> _customPlaylist;

	[Token(Token = "0x4002D3E")]
	[FieldOffset(Offset = "0x58")]
	private string _currentSongName;

	[Token(Token = "0x4002D3F")]
	[FieldOffset(Offset = "0x10")]
	public static bool _muted;

	[Token(Token = "0x4002D40")]
	[FieldOffset(Offset = "0x60")]
	public bool _isDefaultPlaylist;

	[Token(Token = "0x4002D41")]
	[FieldOffset(Offset = "0x64")]
	private float _transitionTimeLeft;

	[Token(Token = "0x4002D42")]
	[FieldOffset(Offset = "0x68")]
	private bool _isMenuTransition;

	[Token(Token = "0x4002D43")]
	[FieldOffset(Offset = "0x69")]
	private bool _justPlayedMenuTransition;

	[Token(Token = "0x4002D44")]
	[FieldOffset(Offset = "0x70")]
	private string _lastSongBeforeGrabbed;

	[Token(Token = "0x4002D45")]
	[FieldOffset(Offset = "0x78")]
	private float _lastTimeBeforeGrabbed;

	[Token(Token = "0x4002D46")]
	[FieldOffset(Offset = "0x7C")]
	private bool _justEscapedGrab;

	[Token(Token = "0x4002D47")]
	[FieldOffset(Offset = "0x80")]
	private float _lastCheckBattleMusic;

	[Token(Token = "0x4002D48")]
	private const float BattleTitanAnyDistance = 200f;

	[Token(Token = "0x4002D49")]
	private const float BattleTitanActiveDistance = 1000f;

	[Token(Token = "0x4002D4A")]
	private const float BattleOtherAnyDistance = 500f;

	[Token(Token = "0x4002D4B")]
	private const float CheckBattleMusicDelay = 0.2f;

	[Token(Token = "0x6005577")]
	[Address(RVA = "0x23527C0", Offset = "0x2350DC0", VA = "0x1823527C0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005578")]
	[Address(RVA = "0x2352F00", Offset = "0x2351500", VA = "0x182352F00")]
	private static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6005579")]
	[Address(RVA = "0x2351B60", Offset = "0x2350160", VA = "0x182351B60")]
	public static void ApplySoundSettings()
	{
	}

	[Token(Token = "0x600557A")]
	[Address(RVA = "0x2352FB0", Offset = "0x23515B0", VA = "0x182352FB0")]
	public static void PlayDeathSong()
	{
	}

	[Token(Token = "0x600557B")]
	[Address(RVA = "0x2353130", Offset = "0x2351730", VA = "0x182353130")]
	public static void PlayGrabbedSong()
	{
	}

	[Token(Token = "0x600557C")]
	[Address(RVA = "0x2352E70", Offset = "0x2351470", VA = "0x182352E70")]
	public static void OnEscapeGrab()
	{
	}

	[Token(Token = "0x600557D")]
	[Address(RVA = "0x2353070", Offset = "0x2351670", VA = "0x182353070")]
	public static void PlayEffect()
	{
	}

	[Token(Token = "0x600557E")]
	[Address(RVA = "0x23538C0", Offset = "0x2351EC0", VA = "0x1823538C0")]
	public static void PlayTransition()
	{
	}

	[Token(Token = "0x600557F")]
	[Address(RVA = "0x23539D0", Offset = "0x2351FD0", VA = "0x1823539D0")]
	public static void SetPlaylist(string playlist)
	{
	}

	[Token(Token = "0x6005580")]
	[Address(RVA = "0x2352AE0", Offset = "0x23510E0", VA = "0x182352AE0")]
	public static bool IsMusicDisabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6005581")]
	[Address(RVA = "0x2354A20", Offset = "0x2353020", VA = "0x182354A20")]
	private static void StopMusic()
	{
	}

	[Token(Token = "0x6005582")]
	[Address(RVA = "0x23520F0", Offset = "0x23506F0", VA = "0x1823520F0")]
	private static void FinishSetPlaylist(string playlist, bool forceNext = false)
	{
	}

	[Token(Token = "0x6005583")]
	[Address(RVA = "0x23535D0", Offset = "0x2351BD0", VA = "0x1823535D0")]
	private static void PlaySoundEffect(JSONNode songInfo)
	{
	}

	[Token(Token = "0x6005584")]
	[Address(RVA = "0x2353350", Offset = "0x2351950", VA = "0x182353350")]
	private static void PlayImmediateTransition(JSONNode songInfo)
	{
	}

	[Token(Token = "0x6005585")]
	[Address(RVA = "0x2354980", Offset = "0x2352F80", VA = "0x182354980")]
	[IteratorStateMachine(typeof(_003CStartSoundEffect_003Ed__43))]
	private IEnumerator StartSoundEffect(AudioClip clip, float volume)
	{
		return null;
	}

	[Token(Token = "0x6005586")]
	[Address(RVA = "0x2353C60", Offset = "0x2352260", VA = "0x182353C60")]
	public static void SetSong(string song, float startTime = 0f)
	{
	}

	[Token(Token = "0x6005587")]
	[Address(RVA = "0x2351CF0", Offset = "0x23502F0", VA = "0x182351CF0")]
	public static void ChatNextSong()
	{
	}

	[Token(Token = "0x6005588")]
	[Address(RVA = "0x2352BB0", Offset = "0x23511B0", VA = "0x182352BB0")]
	public static void NextSong()
	{
	}

	[Token(Token = "0x6005589")]
	[Address(RVA = "0x2351E00", Offset = "0x2350400", VA = "0x182351E00")]
	private static JSONNode FindSong(string name)
	{
		return null;
	}

	[Token(Token = "0x600558A")]
	[Address(RVA = "0x2351D50", Offset = "0x2350350", VA = "0x182351D50")]
	[IteratorStateMachine(typeof(_003CFadeNextSong_003Ed__48))]
	private IEnumerator FadeNextSong(AudioClip nextClip, float volume, float startTime)
	{
		return null;
	}

	[Token(Token = "0x600558B")]
	[Address(RVA = "0x2354C60", Offset = "0x2353260", VA = "0x182354C60")]
	private void Update()
	{
	}

	[Token(Token = "0x600558C")]
	[Address(RVA = "0x2354360", Offset = "0x2352960", VA = "0x182354360")]
	private bool ShouldPlayBattleMusic()
	{
		return default(bool);
	}

	[Token(Token = "0x600558D")]
	[Address(RVA = "0x2352730", Offset = "0x2350D30", VA = "0x182352730")]
	private static float GetMusicVolume()
	{
		return default(float);
	}

	[Token(Token = "0x600558E")]
	[Address(RVA = "0x2352690", Offset = "0x2350C90", VA = "0x182352690")]
	public static string GetCurrentSong()
	{
		return null;
	}

	[Token(Token = "0x600558F")]
	[Address(RVA = "0x2352350", Offset = "0x2350950", VA = "0x182352350")]
	public static List<string> GetAllSongs()
	{
		return null;
	}

	[Token(Token = "0x6005590")]
	[Address(RVA = "0x2353810", Offset = "0x2351E10", VA = "0x182353810")]
	public static void PlaySoundOneShot(AudioSource source)
	{
	}

	[Token(Token = "0x6005591")]
	[Address(RVA = "0x2354EC0", Offset = "0x23534C0", VA = "0x182354EC0")]
	public MusicManager()
	{
	}
}
