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
		[Token(Token = "0x40000F8")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000F9")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40000FA")]
		[FieldOffset(Offset = "0x20")]
		public LightningParticle _003C_003E4__this;

		[Token(Token = "0x40000FB")]
		[FieldOffset(Offset = "0x28")]
		public bool sound;

		[Token(Token = "0x40000FC")]
		[FieldOffset(Offset = "0x2C")]
		private Color _003Ccolor_003E5__2;

		[Token(Token = "0x40000FD")]
		[FieldOffset(Offset = "0x3C")]
		private float _003CmaxAlpha_003E5__3;

		[Token(Token = "0x40000FE")]
		[FieldOffset(Offset = "0x40")]
		private float _003CstartTime_003E5__4;

		[Token(Token = "0x1700001E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600014D")]
			[Address(RVA = "0x3C76810", Offset = "0x3C76810", VA = "0x3C76810", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700001F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600014F")]
			[Address(RVA = "0x3C76860", Offset = "0x3C76860", VA = "0x3C76860", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600014A")]
		[Address(RVA = "0x3C762C0", Offset = "0x3C762C0", VA = "0x3C762C0")]
		[DebuggerHidden]
		public _003CStrikeCoroutine_003Ed__20(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600014B")]
		[Address(RVA = "0x3C76480", Offset = "0x3C76480", VA = "0x3C76480", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600014C")]
		[Address(RVA = "0x3C76490", Offset = "0x3C76490", VA = "0x3C76490", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600014E")]
		[Address(RVA = "0x3C76820", Offset = "0x3C76820", VA = "0x3C76820", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40000EB")]
	private const float FadeInTime = 0.5f;

	[Token(Token = "0x40000EC")]
	private const float StayTime = 0.3f;

	[Token(Token = "0x40000ED")]
	private const float FadeOutTime = 1f;

	[Token(Token = "0x40000EE")]
	private const float ChaosFactor = 0.2f;

	[Token(Token = "0x40000EF")]
	private const float StartWidth = 2f;

	[Token(Token = "0x40000F0")]
	private const float EndWidth = 2f;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x20")]
	protected Color LightningColor;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x0")]
	private static System.Random _random;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x30")]
	protected LineRenderer _lineRenderer;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x38")]
	protected int _startIndex;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x40")]
	protected List<AudioSource> _audioSources;

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x3C74E90", Offset = "0x3C74E90", VA = "0x3C74E90")]
	private static void GetPerpendicularVector(ref Vector3 directionNormalized, out Vector3 side)
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x3C75120", Offset = "0x3C75120", VA = "0x3C75120")]
	public static List<Vector3> GenerateLightningBoltPositions(Vector3 start, Vector3 end, int generation, float offsetAmount = 0f)
	{
		return null;
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x3C758B0", Offset = "0x3C758B0", VA = "0x3C758B0")]
	private static void RandomVector(ref Vector3 start, ref Vector3 end, float offsetAmount, out Vector3 result)
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x3C75B10", Offset = "0x3C75B10", VA = "0x3C75B10")]
	private void Awake()
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x3C75CC0", Offset = "0x3C75CC0", VA = "0x3C75CC0")]
	public void Disable()
	{
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x3C75E60", Offset = "0x3C75E60", VA = "0x3C75E60")]
	public void Enable()
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x3C75EB0", Offset = "0x3C75EB0", VA = "0x3C75EB0")]
	public void Strike(bool sound)
	{
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x3C75FB0", Offset = "0x3C75FB0", VA = "0x3C75FB0")]
	public void PlayAudio()
	{
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x3C76190", Offset = "0x3C76190", VA = "0x3C76190")]
	public void Setup(Vector3 start, Vector3 end, int generation)
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x3C75F30", Offset = "0x3C75F30", VA = "0x3C75F30")]
	[IteratorStateMachine(typeof(_003CStrikeCoroutine_003Ed__20))]
	private IEnumerator StrikeCoroutine(bool sound)
	{
		return null;
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x3C76020", Offset = "0x3C76020", VA = "0x3C76020")]
	private void SetVolume(float volume)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x3C762E0", Offset = "0x3C762E0", VA = "0x3C762E0")]
	public LightningParticle()
	{
	}
}
