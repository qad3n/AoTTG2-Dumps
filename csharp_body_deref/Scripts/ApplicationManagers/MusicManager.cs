using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x200073D")]
public class MusicManager : MonoBehaviour
{
	[Token(Token = "0x200073E")]
	[CompilerGenerated]
	private sealed class _003CFadeNextSong_003Ed__46 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400231B")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400231C")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400231D")]
		[FieldOffset(Offset = "0x20")]
		public MusicManager _003C_003E4__this;

		[Token(Token = "0x400231E")]
		[FieldOffset(Offset = "0x28")]
		public AudioClip nextClip;

		[Token(Token = "0x400231F")]
		[FieldOffset(Offset = "0x30")]
		public float startTime;

		[Token(Token = "0x4002320")]
		[FieldOffset(Offset = "0x34")]
		public float volume;

		[Token(Token = "0x4002321")]
		[FieldOffset(Offset = "0x38")]
		private float _003CfadeInTime_003E5__2;

		[Token(Token = "0x4002322")]
		[FieldOffset(Offset = "0x3C")]
		private float _003CfadeOutTime_003E5__3;

		[Token(Token = "0x4002323")]
		[FieldOffset(Offset = "0x40")]
		private float _003CfadeTimeLeft_003E5__4;

		[Token(Token = "0x17000D8B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60046AE")]
			[Address(RVA = "0x40A4AC0", Offset = "0x40A4AC0", VA = "0x40A4AC0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D8C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60046B0")]
			[Address(RVA = "0x40A4B10", Offset = "0x40A4B10", VA = "0x40A4B10", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60046AB")]
		[Address(RVA = "0x40A3520", Offset = "0x40A3520", VA = "0x40A3520")]
		[DebuggerHidden]
		public _003CFadeNextSong_003Ed__46(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60046AC")]
		[Address(RVA = "0x40A4540", Offset = "0x40A4540", VA = "0x40A4540", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60046AD")]
		[Address(RVA = "0x40A4550", Offset = "0x40A4550", VA = "0x40A4550", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60046AF")]
		[Address(RVA = "0x40A4AD0", Offset = "0x40A4AD0", VA = "0x40A4AD0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200073F")]
	[CompilerGenerated]
	private sealed class _003CStartSoundEffect_003Ed__41 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002324")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002325")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002326")]
		[FieldOffset(Offset = "0x20")]
		public MusicManager _003C_003E4__this;

		[Token(Token = "0x4002327")]
		[FieldOffset(Offset = "0x28")]
		public float volume;

		[Token(Token = "0x4002328")]
		[FieldOffset(Offset = "0x30")]
		public AudioClip clip;

		[Token(Token = "0x17000D8D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60046B4")]
			[Address(RVA = "0x40A4C10", Offset = "0x40A4C10", VA = "0x40A4C10", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D8E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60046B6")]
			[Address(RVA = "0x40A4C60", Offset = "0x40A4C60", VA = "0x40A4C60", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60046B1")]
		[Address(RVA = "0x40A30D0", Offset = "0x40A30D0", VA = "0x40A30D0")]
		[DebuggerHidden]
		public _003CStartSoundEffect_003Ed__41(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60046B2")]
		[Address(RVA = "0x40A4B20", Offset = "0x40A4B20", VA = "0x40A4B20", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60046B3")]
		[Address(RVA = "0x40A4B30", Offset = "0x40A4B30", VA = "0x40A4B30", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60046B5")]
		[Address(RVA = "0x40A4C20", Offset = "0x40A4C20", VA = "0x40A4C20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40022FE")]
	[FieldOffset(Offset = "0x0")]
	private static MusicManager _instance;

	[Token(Token = "0x40022FF")]
	[FieldOffset(Offset = "0x8")]
	private static JSONNode _musicInfo;

	[Token(Token = "0x4002300")]
	[FieldOffset(Offset = "0x20")]
	private string _currentPlaylist;

	[Token(Token = "0x4002301")]
	[FieldOffset(Offset = "0x28")]
	private AudioSource _audio;

	[Token(Token = "0x4002302")]
	[FieldOffset(Offset = "0x30")]
	private GameObject _soundEffectObject;

	[Token(Token = "0x4002303")]
	[FieldOffset(Offset = "0x38")]
	private AudioSource _soundEffect;

	[Token(Token = "0x4002304")]
	[FieldOffset(Offset = "0x40")]
	private float _songTimeLeft;

	[Token(Token = "0x4002305")]
	[FieldOffset(Offset = "0x44")]
	private float _songVolume;

	[Token(Token = "0x4002306")]
	[FieldOffset(Offset = "0x48")]
	private bool _autoPlay;

	[Token(Token = "0x4002307")]
	[FieldOffset(Offset = "0x49")]
	private bool _isFading;

	[Token(Token = "0x4002308")]
	private const float BattleFadeInTime = 1f;

	[Token(Token = "0x4002309")]
	private const float DefaultFadeOutTime = 1f;

	[Token(Token = "0x400230A")]
	private const float DefaultFadeInTime = 5f;

	[Token(Token = "0x400230B")]
	[FieldOffset(Offset = "0x4C")]
	private int _currentSong;

	[Token(Token = "0x400230C")]
	[FieldOffset(Offset = "0x50")]
	private List<string> _customPlaylist;

	[Token(Token = "0x400230D")]
	[FieldOffset(Offset = "0x58")]
	private string _currentSongName;

	[Token(Token = "0x400230E")]
	[FieldOffset(Offset = "0x10")]
	public static bool _muted;

	[Token(Token = "0x400230F")]
	[FieldOffset(Offset = "0x60")]
	public bool _isDefaultPlaylist;

	[Token(Token = "0x4002310")]
	[FieldOffset(Offset = "0x64")]
	private float _transitionTimeLeft;

	[Token(Token = "0x4002311")]
	[FieldOffset(Offset = "0x68")]
	private bool _isMenuTransition;

	[Token(Token = "0x4002312")]
	[FieldOffset(Offset = "0x69")]
	private bool _justPlayedMenuTransition;

	[Token(Token = "0x4002313")]
	[FieldOffset(Offset = "0x70")]
	private string _lastSongBeforeGrabbed;

	[Token(Token = "0x4002314")]
	[FieldOffset(Offset = "0x78")]
	private float _lastTimeBeforeGrabbed;

	[Token(Token = "0x4002315")]
	[FieldOffset(Offset = "0x7C")]
	private bool _justEscapedGrab;

	[Token(Token = "0x4002316")]
	[FieldOffset(Offset = "0x80")]
	private float _lastCheckBattleMusic;

	[Token(Token = "0x4002317")]
	private const float BattleTitanAnyDistance = 200f;

	[Token(Token = "0x4002318")]
	private const float BattleTitanActiveDistance = 1000f;

	[Token(Token = "0x4002319")]
	private const float BattleOtherAnyDistance = 500f;

	[Token(Token = "0x400231A")]
	private const float CheckBattleMusicDelay = 0.2f;

	[Token(Token = "0x6004692")]
	[Address(RVA = "0x40A1320", Offset = "0x40A1320", VA = "0x40A1320")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004693")]
	[Address(RVA = "0x40A1620", Offset = "0x40A1620", VA = "0x40A1620")]
	private static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6004694")]
	[Address(RVA = "0x409E750", Offset = "0x409E750", VA = "0x409E750")]
	public static void ApplySoundSettings()
	{
	}

	[Token(Token = "0x6004695")]
	[Address(RVA = "0x40A1960", Offset = "0x40A1960", VA = "0x40A1960")]
	public static void PlayDeathSong()
	{
	}

	[Token(Token = "0x6004696")]
	[Address(RVA = "0x40A1CF0", Offset = "0x40A1CF0", VA = "0x40A1CF0")]
	public static void PlayGrabbedSong()
	{
	}

	[Token(Token = "0x6004697")]
	[Address(RVA = "0x40A1ED0", Offset = "0x40A1ED0", VA = "0x40A1ED0")]
	public static void OnEscapeGrab()
	{
	}

	[Token(Token = "0x6004698")]
	[Address(RVA = "0x40A1F30", Offset = "0x40A1F30", VA = "0x40A1F30")]
	public static void PlayEffect()
	{
	}

	[Token(Token = "0x6004699")]
	[Address(RVA = "0x40A2220", Offset = "0x40A2220", VA = "0x40A2220")]
	public static void PlayTransition()
	{
	}

	[Token(Token = "0x600469A")]
	[Address(RVA = "0x40A16B0", Offset = "0x40A16B0", VA = "0x40A16B0")]
	public static void SetPlaylist(string playlist)
	{
	}

	[Token(Token = "0x600469B")]
	[Address(RVA = "0x40A22F0", Offset = "0x40A22F0", VA = "0x40A22F0")]
	private static void FinishSetPlaylist(string playlist, bool forceNext = false)
	{
	}

	[Token(Token = "0x600469C")]
	[Address(RVA = "0x40A1FE0", Offset = "0x40A1FE0", VA = "0x40A1FE0")]
	private static void PlaySoundEffect(JSONNode songInfo)
	{
	}

	[Token(Token = "0x600469D")]
	[Address(RVA = "0x40A1A10", Offset = "0x40A1A10", VA = "0x40A1A10")]
	private static void PlayImmediateTransition(JSONNode songInfo)
	{
	}

	[Token(Token = "0x600469E")]
	[Address(RVA = "0x40A3030", Offset = "0x40A3030", VA = "0x40A3030")]
	[IteratorStateMachine(typeof(_003CStartSoundEffect_003Ed__41))]
	private IEnumerator StartSoundEffect(AudioClip clip, float volume)
	{
		return null;
	}

	[Token(Token = "0x600469F")]
	[Address(RVA = "0x40A2510", Offset = "0x40A2510", VA = "0x40A2510")]
	public static void SetSong(string song, float startTime = 0f)
	{
	}

	[Token(Token = "0x60046A0")]
	[Address(RVA = "0x40A34D0", Offset = "0x40A34D0", VA = "0x40A34D0")]
	public static void ChatNextSong()
	{
	}

	[Token(Token = "0x60046A1")]
	[Address(RVA = "0x40A2BD0", Offset = "0x40A2BD0", VA = "0x40A2BD0")]
	public static void NextSong()
	{
	}

	[Token(Token = "0x60046A2")]
	[Address(RVA = "0x40A30F0", Offset = "0x40A30F0", VA = "0x40A30F0")]
	private static JSONNode FindSong(string name)
	{
		return null;
	}

	[Token(Token = "0x60046A3")]
	[Address(RVA = "0x40A3420", Offset = "0x40A3420", VA = "0x40A3420")]
	[IteratorStateMachine(typeof(_003CFadeNextSong_003Ed__46))]
	private IEnumerator FadeNextSong(AudioClip nextClip, float volume, float startTime)
	{
		return null;
	}

	[Token(Token = "0x60046A4")]
	[Address(RVA = "0x40A3540", Offset = "0x40A3540", VA = "0x40A3540")]
	private void Update()
	{
	}

	[Token(Token = "0x60046A5")]
	[Address(RVA = "0x40A3790", Offset = "0x40A3790", VA = "0x40A3790")]
	private bool ShouldPlayBattleMusic()
	{
		return default(bool);
	}

	[Token(Token = "0x60046A6")]
	[Address(RVA = "0x40A18D0", Offset = "0x40A18D0", VA = "0x40A18D0")]
	private static float GetMusicVolume()
	{
		return default(float);
	}

	[Token(Token = "0x60046A7")]
	[Address(RVA = "0x40A3EF0", Offset = "0x40A3EF0", VA = "0x40A3EF0")]
	public static string GetCurrentSong()
	{
		return null;
	}

	[Token(Token = "0x60046A8")]
	[Address(RVA = "0x40A3F90", Offset = "0x40A3F90", VA = "0x40A3F90")]
	public static List<string> GetAllSongs()
	{
		return null;
	}

	[Token(Token = "0x60046A9")]
	[Address(RVA = "0x40A4400", Offset = "0x40A4400", VA = "0x40A4400")]
	public static void PlaySoundOneShot(AudioSource source)
	{
	}

	[Token(Token = "0x60046AA")]
	[Address(RVA = "0x40A44A0", Offset = "0x40A44A0", VA = "0x40A44A0")]
	public MusicManager()
	{
	}
}
