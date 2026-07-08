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
			[Token(Token = "0x600002C")]
			[Address(RVA = "0x4A7AD90", Offset = "0x4A7AD90", VA = "0x4A7AD90", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600002B")]
		[Address(RVA = "0x4A7AA80", Offset = "0x4A7AA80", VA = "0x4A7AA80")]
		internal Enumerator(Animation outer)
		{
		}

		[Token(Token = "0x600002D")]
		[Address(RVA = "0x4A7AE40", Offset = "0x4A7AE40", VA = "0x4A7AE40", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600002E")]
		[Address(RVA = "0x4A7AF00", Offset = "0x4A7AF00", VA = "0x4A7AF00", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x17000001")]
	public AnimationState this[string name]
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x4A7A310", Offset = "0x4A7A310", VA = "0x4A7A310")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000002")]
	public AnimationCullingType cullingType
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x4A7ACB0", Offset = "0x4A7ACB0", VA = "0x4A7ACB0")]
		set
		{
		}
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x4A79FE0", Offset = "0x4A79FE0", VA = "0x4A79FE0")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x4A7A0B0", Offset = "0x4A7A0B0", VA = "0x4A7A0B0")]
	public void Stop(string name)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4A7A150", Offset = "0x4A7A150", VA = "0x4A7A150")]
	[UnityEngine.Bindings.NativeName("Stop")]
	private void StopNamed(string name)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4A7A230", Offset = "0x4A7A230", VA = "0x4A7A230")]
	public bool IsPlaying(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4A7A450", Offset = "0x4A7A450", VA = "0x4A7A450")]
	[ExcludeFromDocs]
	public bool Play(string animation)
	{
		return default(bool);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4A7A4F0", Offset = "0x4A7A4F0", VA = "0x4A7A4F0")]
	public bool Play(string animation, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4A7A5E0", Offset = "0x4A7A5E0", VA = "0x4A7A5E0")]
	[ExcludeFromDocs]
	public void CrossFade(string animation, float fadeLength)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4A7A6A0", Offset = "0x4A7A6A0", VA = "0x4A7A6A0")]
	public void CrossFade(string animation, [DefaultValue("0.3F")] float fadeLength, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4A7A7B0", Offset = "0x4A7A7B0", VA = "0x4A7A7B0")]
	[ExcludeFromDocs]
	public AnimationState PlayQueued(string animation)
	{
		return null;
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4A7A860", Offset = "0x4A7A860", VA = "0x4A7A860")]
	[ExcludeFromDocs]
	public AnimationState PlayQueued(string animation, QueueMode queue)
	{
		return null;
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4A7A910", Offset = "0x4A7A910", VA = "0x4A7A910")]
	[UnityEngine.Bindings.FreeFunction("AnimationBindings::PlayQueuedImpl", HasExplicitThis = true)]
	public AnimationState PlayQueued(string animation, [DefaultValue("QueueMode.CompleteOthers")] QueueMode queue, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode)
	{
		return null;
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4A7AA10", Offset = "0x4A7AA10", VA = "0x4A7AA10", Slot = "4")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4A7A3B0", Offset = "0x4A7A3B0", VA = "0x4A7A3B0")]
	[UnityEngine.Bindings.FreeFunction("AnimationBindings::GetState", HasExplicitThis = true)]
	internal AnimationState GetState(string name)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4A7AB00", Offset = "0x4A7AB00", VA = "0x4A7AB00")]
	[UnityEngine.Bindings.FreeFunction("AnimationBindings::GetStateAtIndex", HasExplicitThis = true, ThrowsException = true)]
	internal AnimationState GetStateAtIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4A7ABE0", Offset = "0x4A7ABE0", VA = "0x4A7ABE0")]
	[UnityEngine.Bindings.NativeName("GetAnimationStateCount")]
	internal int GetStateCount()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4A7A080", Offset = "0x4A7A080", VA = "0x4A7A080")]
	private static extern void Stop_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4A7A1F0", Offset = "0x4A7A1F0", VA = "0x4A7A1F0")]
	private static extern void StopNamed_Injected(IntPtr _unity_self, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4A7A2D0", Offset = "0x4A7A2D0", VA = "0x4A7A2D0")]
	private static extern bool IsPlaying_Injected(IntPtr _unity_self, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4A7A5A0", Offset = "0x4A7A5A0", VA = "0x4A7A5A0")]
	private static extern bool Play_Injected(IntPtr _unity_self, string animation, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4A7A760", Offset = "0x4A7A760", VA = "0x4A7A760")]
	private static extern void CrossFade_Injected(IntPtr _unity_self, string animation, [DefaultValue("0.3F")] float fadeLength, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4A7A9C0", Offset = "0x4A7A9C0", VA = "0x4A7A9C0")]
	private static extern AnimationState PlayQueued_Injected(IntPtr _unity_self, string animation, [DefaultValue("QueueMode.CompleteOthers")] QueueMode queue, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4A7AAC0", Offset = "0x4A7AAC0", VA = "0x4A7AAC0")]
	private static extern AnimationState GetState_Injected(IntPtr _unity_self, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4A7ABA0", Offset = "0x4A7ABA0", VA = "0x4A7ABA0")]
	private static extern AnimationState GetStateAtIndex_Injected(IntPtr _unity_self, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4A7AC80", Offset = "0x4A7AC80", VA = "0x4A7AC80")]
	private static extern int GetStateCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4A7AD50", Offset = "0x4A7AD50", VA = "0x4A7AD50")]
	private static extern void set_cullingType_Injected(IntPtr _unity_self, AnimationCullingType value);
}
