// ==================== AoTTG2 cross-reference ====================
// Type: Weather.LightningParticle
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Weather/LightningParticle.c
// Prior real C# source (older reference): Assets/Scripts/Weather/LightningParticle.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Weather;

[Token(Token = "0x2000030")]
public class LightningParticle : MonoBehaviour
{
	[Token(Token = "0x2000032")]
	[CompilerGenerated]
	private sealed class _003CStrikeCoroutine_003Ed__20 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000103")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000104")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000105")]
		[FieldOffset(Offset = "0x20")]
		public LightningParticle _003C_003E4__this;

		[Token(Token = "0x4000106")]
		[FieldOffset(Offset = "0x28")]
		public bool sound;

		[Token(Token = "0x4000107")]
		[FieldOffset(Offset = "0x2C")]
		private Color _003Ccolor_003E5__2;

		[Token(Token = "0x4000108")]
		[FieldOffset(Offset = "0x3C")]
		private float _003CmaxAlpha_003E5__3;

		[Token(Token = "0x4000109")]
		[FieldOffset(Offset = "0x40")]
		private float _003CstartTime_003E5__4;

		[Token(Token = "0x17000020")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600015D")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000021")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600015F")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600015A")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CStrikeCoroutine_003Ed__20(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600015B")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600015C")]
		[Address(RVA = "0x1DB0AB0", Offset = "0x1DAF0B0", VA = "0x181DB0AB0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600015E")]
		[Address(RVA = "0x1DB0EC0", Offset = "0x1DAF4C0", VA = "0x181DB0EC0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40000F6")]
	private const float FadeInTime = 0.5f;

	[Token(Token = "0x40000F7")]
	private const float StayTime = 0.3f;

	[Token(Token = "0x40000F8")]
	private const float FadeOutTime = 1f;

	[Token(Token = "0x40000F9")]
	private const float ChaosFactor = 0.2f;

	[Token(Token = "0x40000FA")]
	private const float StartWidth = 2f;

	[Token(Token = "0x40000FB")]
	private const float EndWidth = 2f;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x20")]
	protected Color LightningColor;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x0")]
	private static System.Random _random;

	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0x30")]
	protected LineRenderer _lineRenderer;

	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0x38")]
	protected int _startIndex;

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x40")]
	protected List<AudioSource> _audioSources;

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x1DA3590", Offset = "0x1DA1B90", VA = "0x181DA3590")]
	private static void GetPerpendicularVector(ref Vector3 directionNormalized, out Vector3 side)
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x1DA2F70", Offset = "0x1DA1570", VA = "0x181DA2F70")]
	public static List<Vector3> GenerateLightningBoltPositions(Vector3 start, Vector3 end, int generation, float offsetAmount = 0f)
	{
		return null;
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x1DA3830", Offset = "0x1DA1E30", VA = "0x181DA3830")]
	private static void RandomVector(ref Vector3 start, ref Vector3 end, float offsetAmount, out Vector3 result)
	{
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x1DA2BE0", Offset = "0x1DA11E0", VA = "0x181DA2BE0")]
	private void Awake()
	{
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x1DA2D90", Offset = "0x1DA1390", VA = "0x181DA2D90")]
	public void Disable()
	{
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x1DA2F10", Offset = "0x1DA1510", VA = "0x181DA2F10")]
	public void Enable()
	{
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x1DA3D40", Offset = "0x1DA2340", VA = "0x181DA3D40")]
	public void Strike(bool sound)
	{
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x1DA37B0", Offset = "0x1DA1DB0", VA = "0x181DA37B0")]
	public void PlayAudio()
	{
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x1DA3BA0", Offset = "0x1DA21A0", VA = "0x181DA3BA0")]
	public void Setup(Vector3 start, Vector3 end, int generation)
	{
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x1DA3CC0", Offset = "0x1DA22C0", VA = "0x181DA3CC0")]
	[IteratorStateMachine(typeof(_003CStrikeCoroutine_003Ed__20))]
	private IEnumerator StrikeCoroutine(bool sound)
	{
		return null;
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x1DA3A70", Offset = "0x1DA2070", VA = "0x181DA3A70")]
	private void SetVolume(float volume)
	{
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x1DA3E50", Offset = "0x1DA2450", VA = "0x181DA3E50")]
	public LightningParticle()
	{
	}
}
