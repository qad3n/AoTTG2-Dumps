// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Animation
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;

namespace UnityEngine;

[Token(Token = "0x2000008")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/Animation.h")]
public sealed class Animation : Behaviour, IEnumerable
{
	[Token(Token = "0x2000009")]
	private sealed class Enumerator : IEnumerator
	{
		[Token(Token = "0x4000010")]
		[FieldOffset(Offset = "0x10")]
		private Animation m_Outer;

		[Token(Token = "0x4000011")]
		[FieldOffset(Offset = "0x18")]
		private int m_CurrentIndex;

		[Token(Token = "0x17000003")]
		public object Current
		{
			[Token(Token = "0x600002D")]
			[Address(RVA = "0x2EB10B0", Offset = "0x2EAF6B0", VA = "0x182EB10B0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600002C")]
		[Address(RVA = "0x18A2510", Offset = "0x18A0B10", VA = "0x1818A2510")]
		internal Enumerator(Animation outer)
		{
		}

		[Token(Token = "0x600002E")]
		[Address(RVA = "0x2EB1010", Offset = "0x2EAF610", VA = "0x182EB1010", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600002F")]
		[Address(RVA = "0x1B5AFF0", Offset = "0x1B595F0", VA = "0x181B5AFF0", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x17000001")]
	public AnimationState this[string name]
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x2EADF50", Offset = "0x2EAC550", VA = "0x182EADF50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000002")]
	public AnimationCullingType cullingType
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x2EADFA0", Offset = "0x2EAC5A0", VA = "0x182EADFA0")]
		set
		{
		}
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x2EADED0", Offset = "0x2EAC4D0", VA = "0x182EADED0")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x2EADEC0", Offset = "0x2EAC4C0", VA = "0x182EADEC0")]
	public void Stop(string name)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x2EADCD0", Offset = "0x2EAC2D0", VA = "0x182EADCD0")]
	[UnityEngine.Bindings.NativeName("Stop")]
	private void StopNamed(string name)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x2EAD610", Offset = "0x2EABC10", VA = "0x182EAD610")]
	public bool IsPlaying(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x2EADC70", Offset = "0x2EAC270", VA = "0x182EADC70")]
	[ExcludeFromDocs]
	public bool Play(string animation)
	{
		return default(bool);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x2EADAA0", Offset = "0x2EAC0A0", VA = "0x182EADAA0")]
	public bool Play(string animation, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x2EACFA0", Offset = "0x2EAB5A0", VA = "0x182EACFA0")]
	[ExcludeFromDocs]
	public void CrossFade(string animation, float fadeLength)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x2EACFC0", Offset = "0x2EAB5C0", VA = "0x182EACFC0")]
	public void CrossFade(string animation, [DefaultValue("0.3F")] float fadeLength, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x2EAD830", Offset = "0x2EABE30", VA = "0x182EAD830")]
	[ExcludeFromDocs]
	public AnimationState PlayQueued(string animation)
	{
		return null;
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x2EADA20", Offset = "0x2EAC020", VA = "0x182EADA20")]
	[ExcludeFromDocs]
	public AnimationState PlayQueued(string animation, QueueMode queue)
	{
		return null;
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x2EAD850", Offset = "0x2EABE50", VA = "0x182EAD850")]
	[UnityEngine.Bindings.FreeFunction("AnimationBindings::PlayQueuedImpl", HasExplicitThis = true)]
	public AnimationState PlayQueued(string animation, [DefaultValue("QueueMode.CompleteOthers")] QueueMode queue, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode)
	{
		return null;
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x2EAD1A0", Offset = "0x2EAB7A0", VA = "0x182EAD1A0", Slot = "4")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x2EAD3F0", Offset = "0x2EAB9F0", VA = "0x182EAD3F0")]
	[UnityEngine.Bindings.FreeFunction("AnimationBindings::GetState", HasExplicitThis = true)]
	internal AnimationState GetState(string name)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x2EAD250", Offset = "0x2EAB850", VA = "0x182EAD250")]
	[UnityEngine.Bindings.FreeFunction("AnimationBindings::GetStateAtIndex", HasExplicitThis = true, ThrowsException = true)]
	internal AnimationState GetStateAtIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x2EAD320", Offset = "0x2EAB920", VA = "0x182EAD320")]
	[UnityEngine.Bindings.NativeName("GetAnimationStateCount")]
	internal int GetStateCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public Animation()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x2EADE80", Offset = "0x2EAC480", VA = "0x182EADE80")]
	private static extern void Stop_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x2EADC80", Offset = "0x2EAC280", VA = "0x182EADC80")]
	private static extern void StopNamed_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x2EAD5C0", Offset = "0x2EABBC0", VA = "0x182EAD5C0")]
	private static extern bool IsPlaying_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x2EADA40", Offset = "0x2EAC040", VA = "0x182EADA40")]
	private static extern bool Play_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper animation, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x2EACF30", Offset = "0x2EAB530", VA = "0x182EACF30")]
	private static extern void CrossFade_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper animation, [DefaultValue("0.3F")] float fadeLength, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x2EAD7E0", Offset = "0x2EABDE0", VA = "0x182EAD7E0")]
	private static extern AnimationState PlayQueued_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper animation, [DefaultValue("QueueMode.CompleteOthers")] QueueMode queue, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x2EAD3A0", Offset = "0x2EAB9A0", VA = "0x182EAD3A0")]
	private static extern AnimationState GetState_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x2EAD210", Offset = "0x2EAB810", VA = "0x182EAD210")]
	private static extern AnimationState GetStateAtIndex_Injected(IntPtr _unity_self, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x2EAD2E0", Offset = "0x2EAB8E0", VA = "0x182EAD2E0")]
	private static extern int GetStateCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x2EADF60", Offset = "0x2EAC560", VA = "0x182EADF60")]
	private static extern void set_cullingType_Injected(IntPtr _unity_self, AnimationCullingType value);
}
