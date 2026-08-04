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
			[Token(Token = "0x600002C")]
			[Address(RVA = "0x4DA25B0", Offset = "0x4DA25B0", VA = "0x4DA25B0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600002B")]
		[Address(RVA = "0x4DA22A0", Offset = "0x4DA22A0", VA = "0x4DA22A0")]
		internal Enumerator(Animation outer)
		{
		}

		[Token(Token = "0x600002D")]
		[Address(RVA = "0x4DA2660", Offset = "0x4DA2660", VA = "0x4DA2660", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600002E")]
		[Address(RVA = "0x4DA2720", Offset = "0x4DA2720", VA = "0x4DA2720", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x17000001")]
	public AnimationState this[string name]
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x4DA1B30", Offset = "0x4DA1B30", VA = "0x4DA1B30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000002")]
	public AnimationCullingType cullingType
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x4DA24D0", Offset = "0x4DA24D0", VA = "0x4DA24D0")]
		set
		{
		}
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x4DA1800", Offset = "0x4DA1800", VA = "0x4DA1800")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x4DA18D0", Offset = "0x4DA18D0", VA = "0x4DA18D0")]
	public void Stop(string name)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4DA1970", Offset = "0x4DA1970", VA = "0x4DA1970")]
	[UnityEngine.Bindings.NativeName("Stop")]
	private void StopNamed(string name)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4DA1A50", Offset = "0x4DA1A50", VA = "0x4DA1A50")]
	public bool IsPlaying(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4DA1C70", Offset = "0x4DA1C70", VA = "0x4DA1C70")]
	[ExcludeFromDocs]
	public bool Play(string animation)
	{
		return default(bool);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4DA1D10", Offset = "0x4DA1D10", VA = "0x4DA1D10")]
	public bool Play(string animation, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4DA1E00", Offset = "0x4DA1E00", VA = "0x4DA1E00")]
	[ExcludeFromDocs]
	public void CrossFade(string animation, float fadeLength)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4DA1EC0", Offset = "0x4DA1EC0", VA = "0x4DA1EC0")]
	public void CrossFade(string animation, [DefaultValue("0.3F")] float fadeLength, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4DA1FD0", Offset = "0x4DA1FD0", VA = "0x4DA1FD0")]
	[ExcludeFromDocs]
	public AnimationState PlayQueued(string animation)
	{
		return null;
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4DA2080", Offset = "0x4DA2080", VA = "0x4DA2080")]
	[ExcludeFromDocs]
	public AnimationState PlayQueued(string animation, QueueMode queue)
	{
		return null;
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4DA2130", Offset = "0x4DA2130", VA = "0x4DA2130")]
	[UnityEngine.Bindings.FreeFunction("AnimationBindings::PlayQueuedImpl", HasExplicitThis = true)]
	public AnimationState PlayQueued(string animation, [DefaultValue("QueueMode.CompleteOthers")] QueueMode queue, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode)
	{
		return null;
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4DA2230", Offset = "0x4DA2230", VA = "0x4DA2230", Slot = "4")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4DA1BD0", Offset = "0x4DA1BD0", VA = "0x4DA1BD0")]
	[UnityEngine.Bindings.FreeFunction("AnimationBindings::GetState", HasExplicitThis = true)]
	internal AnimationState GetState(string name)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4DA2320", Offset = "0x4DA2320", VA = "0x4DA2320")]
	[UnityEngine.Bindings.FreeFunction("AnimationBindings::GetStateAtIndex", HasExplicitThis = true, ThrowsException = true)]
	internal AnimationState GetStateAtIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4DA2400", Offset = "0x4DA2400", VA = "0x4DA2400")]
	[UnityEngine.Bindings.NativeName("GetAnimationStateCount")]
	internal int GetStateCount()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4DA18A0", Offset = "0x4DA18A0", VA = "0x4DA18A0")]
	private static extern void Stop_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4DA1A10", Offset = "0x4DA1A10", VA = "0x4DA1A10")]
	private static extern void StopNamed_Injected(IntPtr _unity_self, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4DA1AF0", Offset = "0x4DA1AF0", VA = "0x4DA1AF0")]
	private static extern bool IsPlaying_Injected(IntPtr _unity_self, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4DA1DC0", Offset = "0x4DA1DC0", VA = "0x4DA1DC0")]
	private static extern bool Play_Injected(IntPtr _unity_self, string animation, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4DA1F80", Offset = "0x4DA1F80", VA = "0x4DA1F80")]
	private static extern void CrossFade_Injected(IntPtr _unity_self, string animation, [DefaultValue("0.3F")] float fadeLength, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4DA21E0", Offset = "0x4DA21E0", VA = "0x4DA21E0")]
	private static extern AnimationState PlayQueued_Injected(IntPtr _unity_self, string animation, [DefaultValue("QueueMode.CompleteOthers")] QueueMode queue, [DefaultValue("PlayMode.StopSameLayer")] PlayMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4DA22E0", Offset = "0x4DA22E0", VA = "0x4DA22E0")]
	private static extern AnimationState GetState_Injected(IntPtr _unity_self, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4DA23C0", Offset = "0x4DA23C0", VA = "0x4DA23C0")]
	private static extern AnimationState GetStateAtIndex_Injected(IntPtr _unity_self, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4DA24A0", Offset = "0x4DA24A0", VA = "0x4DA24A0")]
	private static extern int GetStateCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4DA2570", Offset = "0x4DA2570", VA = "0x4DA2570")]
	private static extern void set_cullingType_Injected(IntPtr _unity_self, AnimationCullingType value);
}
