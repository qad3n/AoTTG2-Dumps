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

[Token(Token = "0x200002F")]
public class LightningParticle : MonoBehaviour
{
	[Token(Token = "0x2000031")]
	[CompilerGenerated]
	private sealed class _003CStrikeCoroutine_003Ed__20 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400010A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400010B")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400010C")]
		[FieldOffset(Offset = "0x20")]
		public LightningParticle _003C_003E4__this;

		[Token(Token = "0x400010D")]
		[FieldOffset(Offset = "0x28")]
		public bool sound;

		[Token(Token = "0x400010E")]
		[FieldOffset(Offset = "0x2C")]
		private Color _003Ccolor_003E5__2;

		[Token(Token = "0x400010F")]
		[FieldOffset(Offset = "0x3C")]
		private float _003CmaxAlpha_003E5__3;

		[Token(Token = "0x4000110")]
		[FieldOffset(Offset = "0x40")]
		private float _003CstartTime_003E5__4;

		[Token(Token = "0x17000019")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000162")]
			[Address(RVA = "0x5755F70", Offset = "0x5754F70", VA = "0x5755F70", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700001A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000164")]
			[Address(RVA = "0x5755FC0", Offset = "0x5754FC0", VA = "0x5755FC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600015F")]
		[Address(RVA = "0x5755A20", Offset = "0x5754A20", VA = "0x5755A20")]
		[DebuggerHidden]
		public _003CStrikeCoroutine_003Ed__20(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000160")]
		[Address(RVA = "0x5755BE0", Offset = "0x5754BE0", VA = "0x5755BE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000161")]
		[Address(RVA = "0x5755BF0", Offset = "0x5754BF0", VA = "0x5755BF0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000163")]
		[Address(RVA = "0x5755F80", Offset = "0x5754F80", VA = "0x5755F80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40000FD")]
	private const float FadeInTime = 0.5f;

	[Token(Token = "0x40000FE")]
	private const float StayTime = 0.3f;

	[Token(Token = "0x40000FF")]
	private const float FadeOutTime = 1f;

	[Token(Token = "0x4000100")]
	private const float ChaosFactor = 0.2f;

	[Token(Token = "0x4000101")]
	private const float StartWidth = 2f;

	[Token(Token = "0x4000102")]
	private const float EndWidth = 2f;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x20")]
	protected Color LightningColor;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x0")]
	private static System.Random _random;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x30")]
	protected LineRenderer _lineRenderer;

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x38")]
	protected int _startIndex;

	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0x40")]
	protected List<AudioSource> _audioSources;

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x5754170", Offset = "0x5753170", VA = "0x5754170")]
	private static void GetPerpendicularVector(ref Vector3 directionNormalized, out Vector3 side)
	{
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x5754410", Offset = "0x5753410", VA = "0x5754410")]
	public static List<Vector3> GenerateLightningBoltPositions(Vector3 start, Vector3 end, int generation, float offsetAmount = 0f)
	{
		return null;
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x5755010", Offset = "0x5754010", VA = "0x5755010")]
	private static void RandomVector(ref Vector3 start, ref Vector3 end, float offsetAmount, out Vector3 result)
	{
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x57552D0", Offset = "0x57542D0", VA = "0x57552D0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x5755480", Offset = "0x5754480", VA = "0x5755480")]
	public void Disable()
	{
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x5755600", Offset = "0x5754600", VA = "0x5755600")]
	public void Enable()
	{
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x5755650", Offset = "0x5754650", VA = "0x5755650")]
	public void Strike(bool sound)
	{
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x5755730", Offset = "0x5754730", VA = "0x5755730")]
	public void PlayAudio()
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x57558F0", Offset = "0x57548F0", VA = "0x57558F0")]
	public void Setup(Vector3 start, Vector3 end, int generation)
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x57556C0", Offset = "0x57546C0", VA = "0x57556C0")]
	[IteratorStateMachine(typeof(_003CStrikeCoroutine_003Ed__20))]
	private IEnumerator StrikeCoroutine(bool sound)
	{
		return null;
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x57557A0", Offset = "0x57547A0", VA = "0x57557A0")]
	private void SetVolume(float volume)
	{
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x5755A40", Offset = "0x5754A40", VA = "0x5755A40")]
	public LightningParticle()
	{
	}
}
