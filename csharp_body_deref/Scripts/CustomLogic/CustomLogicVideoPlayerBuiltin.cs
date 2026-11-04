// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicVideoPlayerBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicVideoPlayerBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Video;

namespace CustomLogic;

[Token(Token = "0x200044E")]
[CompilerGenerated]
internal class CustomLogicVideoPlayerBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x200044F")]
	public static class Factory
	{
		[Token(Token = "0x6001E12")]
		[Address(RVA = "0x1F56B00", Offset = "0x1F55100", VA = "0x181F56B00")]
		public static CustomLogicVideoPlayerBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000450")]
	public static class Bindings
	{
		[Token(Token = "0x4001533")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001E13")]
		[Address(RVA = "0x1F2CA60", Offset = "0x1F2B060", VA = "0x181F2CA60")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001E14")]
		[Address(RVA = "0x1F47C00", Offset = "0x1F46200", VA = "0x181F47C00")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__Frame()
		{
			return null;
		}

		[Token(Token = "0x6001E15")]
		[Address(RVA = "0x1F47AC0", Offset = "0x1F460C0", VA = "0x181F47AC0")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__FrameCount()
		{
			return null;
		}

		[Token(Token = "0x6001E16")]
		[Address(RVA = "0x1F47B60", Offset = "0x1F46160", VA = "0x181F47B60")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__FrameRate()
		{
			return null;
		}

		[Token(Token = "0x6001E17")]
		[Address(RVA = "0x1F49500", Offset = "0x1F47B00", VA = "0x181F49500")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__IsLooping()
		{
			return null;
		}

		[Token(Token = "0x6001E18")]
		[Address(RVA = "0x1F497D0", Offset = "0x1F47DD0", VA = "0x181F497D0")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__IsPaused()
		{
			return null;
		}

		[Token(Token = "0x6001E19")]
		[Address(RVA = "0x1F49870", Offset = "0x1F47E70", VA = "0x181F49870")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__IsPlaying()
		{
			return null;
		}

		[Token(Token = "0x6001E1A")]
		[Address(RVA = "0x1F49910", Offset = "0x1F47F10", VA = "0x181F49910")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__IsPrepared()
		{
			return null;
		}

		[Token(Token = "0x6001E1B")]
		[Address(RVA = "0x1F49CD0", Offset = "0x1F482D0", VA = "0x181F49CD0")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__Length()
		{
			return null;
		}

		[Token(Token = "0x6001E1C")]
		[Address(RVA = "0x1F4A8B0", Offset = "0x1F48EB0", VA = "0x181F4A8B0")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__PlaybackSpeed()
		{
			return null;
		}

		[Token(Token = "0x6001E1D")]
		[Address(RVA = "0x1F4BDF0", Offset = "0x1F4A3F0", VA = "0x181F4BDF0")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__Time()
		{
			return null;
		}

		[Token(Token = "0x6001E1E")]
		[Address(RVA = "0x1F43A70", Offset = "0x1F42070", VA = "0x181F43A70")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__Pause()
		{
			return null;
		}

		[Token(Token = "0x6001E1F")]
		[Address(RVA = "0x1F43F00", Offset = "0x1F42500", VA = "0x181F43F00")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__Play()
		{
			return null;
		}

		[Token(Token = "0x6001E20")]
		[Address(RVA = "0x1F44020", Offset = "0x1F42620", VA = "0x181F44020")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__Prepare()
		{
			return null;
		}

		[Token(Token = "0x6001E21")]
		[Address(RVA = "0x1F45860", Offset = "0x1F43E60", VA = "0x181F45860")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__StepForward()
		{
			return null;
		}

		[Token(Token = "0x6001E22")]
		[Address(RVA = "0x1F45AB0", Offset = "0x1F440B0", VA = "0x181F45AB0")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__Stop()
		{
			return null;
		}
	}

	[Token(Token = "0x4001531")]
	[FieldOffset(Offset = "0x38")]
	public VideoPlayer Value;

	[Token(Token = "0x4001532")]
	[FieldOffset(Offset = "0x40")]
	public BuiltinClassInstance OwnerBuiltin;

	[Token(Token = "0x17000389")]
	public int Frame
	{
		[Token(Token = "0x6001DFC")]
		[Address(RVA = "0x1F56950", Offset = "0x1F54F50", VA = "0x181F56950")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001DFB")]
		[Address(RVA = "0x1F56A60", Offset = "0x1F55060", VA = "0x181F56A60")]
		set
		{
		}
	}

	[Token(Token = "0x1700038A")]
	public ulong FrameCount
	{
		[Token(Token = "0x6001DFD")]
		[Address(RVA = "0x1F56910", Offset = "0x1F54F10", VA = "0x181F56910")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x1700038B")]
	public float FrameRate
	{
		[Token(Token = "0x6001DFE")]
		[Address(RVA = "0x1F56930", Offset = "0x1F54F30", VA = "0x181F56930")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700038C")]
	public bool IsLooping
	{
		[Token(Token = "0x6001E00")]
		[Address(RVA = "0x1F56970", Offset = "0x1F54F70", VA = "0x181F56970")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001DFF")]
		[Address(RVA = "0x1F56A90", Offset = "0x1F55090", VA = "0x181F56A90")]
		set
		{
		}
	}

	[Token(Token = "0x1700038D")]
	public bool IsPaused
	{
		[Token(Token = "0x6001E01")]
		[Address(RVA = "0x1F56990", Offset = "0x1F54F90", VA = "0x181F56990")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700038E")]
	public bool IsPlaying
	{
		[Token(Token = "0x6001E02")]
		[Address(RVA = "0x1F569B0", Offset = "0x1F54FB0", VA = "0x181F569B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700038F")]
	public bool IsPrepared
	{
		[Token(Token = "0x6001E03")]
		[Address(RVA = "0x1F569D0", Offset = "0x1F54FD0", VA = "0x181F569D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000390")]
	public double Length
	{
		[Token(Token = "0x6001E04")]
		[Address(RVA = "0x1F569F0", Offset = "0x1F54FF0", VA = "0x181F569F0")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x17000391")]
	public float PlaybackSpeed
	{
		[Token(Token = "0x6001E06")]
		[Address(RVA = "0x1F56A10", Offset = "0x1F55010", VA = "0x181F56A10")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001E05")]
		[Address(RVA = "0x1F56AB0", Offset = "0x1F550B0", VA = "0x181F56AB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000392")]
	public float Time
	{
		[Token(Token = "0x6001E08")]
		[Address(RVA = "0x1F56A30", Offset = "0x1F55030", VA = "0x181F56A30")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001E07")]
		[Address(RVA = "0x1F56AD0", Offset = "0x1F550D0", VA = "0x181F56AD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000393")]
	public override string ClassName
	{
		[Token(Token = "0x6001E0E")]
		[Address(RVA = "0x1F568E0", Offset = "0x1F54EE0", VA = "0x181F568E0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000394")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001E0F")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000395")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001E10")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000396")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001E11")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001DF9")]
	[Address(RVA = "0x1F01510", Offset = "0x1EFFB10", VA = "0x181F01510")]
	public CustomLogicVideoPlayerBuiltin()
	{
	}

	[Token(Token = "0x6001DFA")]
	[Address(RVA = "0x1F56820", Offset = "0x1F54E20", VA = "0x181F56820")]
	public CustomLogicVideoPlayerBuiltin(BuiltinClassInstance owner, VideoPlayer videoPlayer)
	{
	}

	[Token(Token = "0x6001E09")]
	[Address(RVA = "0x1F56780", Offset = "0x1F54D80", VA = "0x181F56780")]
	public void Pause()
	{
	}

	[Token(Token = "0x6001E0A")]
	[Address(RVA = "0x1F567A0", Offset = "0x1F54DA0", VA = "0x181F567A0")]
	public void Play()
	{
	}

	[Token(Token = "0x6001E0B")]
	[Address(RVA = "0x1F567C0", Offset = "0x1F54DC0", VA = "0x181F567C0")]
	public void Prepare()
	{
	}

	[Token(Token = "0x6001E0C")]
	[Address(RVA = "0x1F567E0", Offset = "0x1F54DE0", VA = "0x181F567E0")]
	public void StepForward()
	{
	}

	[Token(Token = "0x6001E0D")]
	[Address(RVA = "0x1F56800", Offset = "0x1F54E00", VA = "0x181F56800")]
	public void Stop()
	{
	}
}
