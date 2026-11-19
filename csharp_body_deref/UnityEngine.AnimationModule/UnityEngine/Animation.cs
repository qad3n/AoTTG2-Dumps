// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Animation
// Update status: unchanged since the previous dump
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
			[Address(RVA = "0x68A8040", Offset = "0x68A7040", VA = "0x68A8040", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600002C")]
		[Address(RVA = "0x68A7D80", Offset = "0x68A6D80", VA = "0x68A7D80")]
		internal Enumerator(Animation outer)
		{
		}

		[Token(Token = "0x600002E")]
		[Address(RVA = "0x68A80D0", Offset = "0x68A70D0", VA = "0x68A80D0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600002F")]
		[Address(RVA = "0x68A8170", Offset = "0x68A7170", VA = "0x68A8170", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x17000001")]
	public AnimationState this[string name]
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x68A7500", Offset = "0x68A6500", VA = "0x68A7500")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000002")]
	public AnimationCullingType cullingType
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x68A7F70", Offset = "0x68A6F70", VA = "0x68A7F70")]
		set
		{
		}
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x68A7060", Offset = "0x68A6060", VA = "0x68A7060")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x68A7110", Offset = "0x68A6110", VA = "0x68A7110")]
	public void Stop(string name)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x68A7120", Offset = "0x68A6120", VA = "0x68A7120")]
	[UnityEngine.Bindings.NativeName("Stop")]
	private void StopNamed(string name)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x68A7310", Offset = "0x68A6310", VA = "0x68A7310")]
	public bool IsPlaying(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x68A76C0", Offset = "0x68A66C0", VA = "0x68A76C0")]
	[ExcludeFromDocs]
	public bool Play(string animation)
	{
		return default(bool);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x68A76D0", Offset = "0x68A66D0", VA = "0x68A76D0")]
	public bool Play(string animation, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x68A78C0", Offset = "0x68A68C0", VA = "0x68A78C0")]
	[ExcludeFromDocs]
	public void CrossFade(string animation, float fadeLength)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x68A78D0", Offset = "0x68A68D0", VA = "0x68A78D0")]
	public void CrossFade(string animation, [DefaultValue("0.3F")] float fadeLength, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x68A7AE0", Offset = "0x68A6AE0", VA = "0x68A7AE0")]
	[ExcludeFromDocs]
	public AnimationState PlayQueued(string animation)
	{
		return null;
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x68A7AF0", Offset = "0x68A6AF0", VA = "0x68A7AF0")]
	[ExcludeFromDocs]
	public AnimationState PlayQueued(string animation, QueueMode queue)
	{
		return null;
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x68A7B00", Offset = "0x68A6B00", VA = "0x68A7B00")]
	[UnityEngine.Bindings.FreeFunction("AnimationBindings::PlayQueuedImpl", HasExplicitThis = true)]
	public AnimationState PlayQueued(string animation, [DefaultValue("QueueMode.CompleteOthers")] QueueMode queue, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode)
	{
		return null;
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x68A7D10", Offset = "0x68A6D10", VA = "0x68A7D10", Slot = "4")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x68A7510", Offset = "0x68A6510", VA = "0x68A7510")]
	[UnityEngine.Bindings.FreeFunction("AnimationBindings::GetState", HasExplicitThis = true)]
	internal AnimationState GetState(string name)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x68A7E00", Offset = "0x68A6E00", VA = "0x68A7E00")]
	[UnityEngine.Bindings.FreeFunction("AnimationBindings::GetStateAtIndex", HasExplicitThis = true, ThrowsException = true)]
	internal AnimationState GetStateAtIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x68A7EC0", Offset = "0x68A6EC0", VA = "0x68A7EC0")]
	[UnityEngine.Bindings.NativeName("GetAnimationStateCount")]
	internal int GetStateCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x68A8030", Offset = "0x68A7030", VA = "0x68A8030")]
	public Animation()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x68A70E0", Offset = "0x68A60E0", VA = "0x68A70E0")]
	private static extern void Stop_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x68A72D0", Offset = "0x68A62D0", VA = "0x68A72D0")]
	private static extern void StopNamed_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x68A74C0", Offset = "0x68A64C0", VA = "0x68A74C0")]
	private static extern bool IsPlaying_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x68A7880", Offset = "0x68A6880", VA = "0x68A7880")]
	private static extern bool Play_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper animation, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x68A7A90", Offset = "0x68A6A90", VA = "0x68A7A90")]
	private static extern void CrossFade_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper animation, [DefaultValue("0.3F")] float fadeLength, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x68A7CC0", Offset = "0x68A6CC0", VA = "0x68A7CC0")]
	private static extern AnimationState PlayQueued_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper animation, [DefaultValue("QueueMode.CompleteOthers")] QueueMode queue, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x68A7DC0", Offset = "0x68A6DC0", VA = "0x68A7DC0")]
	private static extern AnimationState GetState_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x68A7E80", Offset = "0x68A6E80", VA = "0x68A7E80")]
	private static extern AnimationState GetStateAtIndex_Injected(IntPtr _unity_self, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x68A7F40", Offset = "0x68A6F40", VA = "0x68A7F40")]
	private static extern int GetStateCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x68A7FF0", Offset = "0x68A6FF0", VA = "0x68A7FF0")]
	private static extern void set_cullingType_Injected(IntPtr _unity_self, AnimationCullingType value);
}
