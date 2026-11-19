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
				return null;
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
				return null;
			}
		}

		[Token(Token = "0x60058F6")]
		[Address(RVA = "0x5D1A520", Offset = "0x5D19520", VA = "0x5D1A520")]
		[DebuggerHidden]
		public _003CFadeNextSong_003Ed__47(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60058F7")]
		[Address(RVA = "0x5D1B3E0", Offset = "0x5D1A3E0", VA = "0x5D1B3E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60058F8")]
		[Address(RVA = "0x5D1B3F0", Offset = "0x5D1A3F0", VA = "0x5D1B3F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60058FA")]
		[Address(RVA = "0x5D1B9B0", Offset = "0x5D1A9B0", VA = "0x5D1B9B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
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
	}

	[Token(Token = "0x60058DB")]
	[Address(RVA = "0x5D18580", Offset = "0x5D17580", VA = "0x5D18580")]
	private static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x60058DC")]
	[Address(RVA = "0x5D16170", Offset = "0x5D15170", VA = "0x5D16170")]
	public static void ApplySoundSettings()
	{
	}

	[Token(Token = "0x60058DD")]
	[Address(RVA = "0x5D18A20", Offset = "0x5D17A20", VA = "0x5D18A20")]
	public static void PlayDeathSong()
	{
	}

	[Token(Token = "0x60058DE")]
	[Address(RVA = "0x5D18DB0", Offset = "0x5D17DB0", VA = "0x5D18DB0")]
	public static void PlayGrabbedSong()
	{
	}

	[Token(Token = "0x60058DF")]
	[Address(RVA = "0x5D19070", Offset = "0x5D18070", VA = "0x5D19070")]
	public static void OnEscapeGrab()
	{
	}

	[Token(Token = "0x60058E0")]
	[Address(RVA = "0x5D190D0", Offset = "0x5D180D0", VA = "0x5D190D0")]
	public static void PlayEffect()
	{
	}

	[Token(Token = "0x60058E1")]
	[Address(RVA = "0x5D193B0", Offset = "0x5D183B0", VA = "0x5D193B0")]
	public static void PlayTransition()
	{
	}

	[Token(Token = "0x60058E2")]
	[Address(RVA = "0x5D18620", Offset = "0x5D17620", VA = "0x5D18620")]
	public static void SetPlaylist(string playlist)
	{
	}

	[Token(Token = "0x60058E3")]
	[Address(RVA = "0x5D18FA0", Offset = "0x5D17FA0", VA = "0x5D18FA0")]
	public static bool IsMusicDisabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60058E4")]
	[Address(RVA = "0x5D19490", Offset = "0x5D18490", VA = "0x5D19490")]
	private static void StopMusic()
	{
	}

	[Token(Token = "0x60058E5")]
	[Address(RVA = "0x5D19610", Offset = "0x5D18610", VA = "0x5D19610")]
	private static void FinishSetPlaylist(string playlist, bool forceNext = false)
	{
	}

	[Token(Token = "0x60058E6")]
	[Address(RVA = "0x5D19180", Offset = "0x5D18180", VA = "0x5D19180")]
	private static void PlaySoundEffect(JSONNode songInfo)
	{
	}

	[Token(Token = "0x60058E7")]
	[Address(RVA = "0x5D18AD0", Offset = "0x5D17AD0", VA = "0x5D18AD0")]
	private static void PlayImmediateTransition(JSONNode songInfo)
	{
	}

	[Token(Token = "0x60058E8")]
	[Address(RVA = "0x5D19830", Offset = "0x5D18830", VA = "0x5D19830")]
	public static void SetSong(string song, float startTime = 0f)
	{
	}

	[Token(Token = "0x60058E9")]
	[Address(RVA = "0x5D1A4D0", Offset = "0x5D194D0", VA = "0x5D1A4D0")]
	public static void ChatNextSong()
	{
	}

	[Token(Token = "0x60058EA")]
	[Address(RVA = "0x5D19F10", Offset = "0x5D18F10", VA = "0x5D19F10")]
	public static void NextSong()
	{
	}

	[Token(Token = "0x60058EB")]
	[Address(RVA = "0x5D1A160", Offset = "0x5D19160", VA = "0x5D1A160")]
	private static JSONNode FindSong(string name)
	{
		return null;
	}

	[Token(Token = "0x60058EC")]
	[Address(RVA = "0x5D1A430", Offset = "0x5D19430", VA = "0x5D1A430")]
	[IteratorStateMachine(typeof(_003CFadeNextSong_003Ed__47))]
	private IEnumerator FadeNextSong(AudioClip nextClip, float volume, float startTime)
	{
		return null;
	}

	[Token(Token = "0x60058ED")]
	[Address(RVA = "0x5D1A540", Offset = "0x5D19540", VA = "0x5D1A540")]
	private void Update()
	{
	}

	[Token(Token = "0x60058EE")]
	[Address(RVA = "0x5D1A790", Offset = "0x5D19790", VA = "0x5D1A790")]
	private bool ShouldPlayBattleMusic()
	{
		return default(bool);
	}

	[Token(Token = "0x60058EF")]
	[Address(RVA = "0x5D18990", Offset = "0x5D17990", VA = "0x5D18990")]
	private static float GetMusicVolume()
	{
		return default(float);
	}

	[Token(Token = "0x60058F0")]
	[Address(RVA = "0x5D1AD10", Offset = "0x5D19D10", VA = "0x5D1AD10")]
	public static string GetCurrentSong()
	{
		return null;
	}

	[Token(Token = "0x60058F1")]
	[Address(RVA = "0x5D1ADB0", Offset = "0x5D19DB0", VA = "0x5D1ADB0")]
	public static List<string> GetAllSongs()
	{
		return null;
	}

	[Token(Token = "0x60058F2")]
	[Address(RVA = "0x5D1B270", Offset = "0x5D1A270", VA = "0x5D1B270")]
	public MusicManager()
	{
	}
}
