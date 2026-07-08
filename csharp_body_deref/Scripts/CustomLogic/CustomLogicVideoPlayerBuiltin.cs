using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Video;

namespace CustomLogic;

[Token(Token = "0x20002C9")]
[CompilerGenerated]
internal class CustomLogicVideoPlayerBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x20002CA")]
	public static class Factory
	{
		[Token(Token = "0x60013DB")]
		[Address(RVA = "0x3CF70C0", Offset = "0x3CF70C0", VA = "0x3CF70C0")]
		public static CustomLogicVideoPlayerBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20002CB")]
	public static class Bindings
	{
		[Token(Token = "0x4000E29")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60013DC")]
		[Address(RVA = "0x3CF71B0", Offset = "0x3CF71B0", VA = "0x3CF71B0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60013DD")]
		[Address(RVA = "0x3CF77D0", Offset = "0x3CF77D0", VA = "0x3CF77D0")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__Frame()
		{
			return null;
		}

		[Token(Token = "0x60013DE")]
		[Address(RVA = "0x3CF78B0", Offset = "0x3CF78B0", VA = "0x3CF78B0")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__FrameCount()
		{
			return null;
		}

		[Token(Token = "0x60013DF")]
		[Address(RVA = "0x3CF7950", Offset = "0x3CF7950", VA = "0x3CF7950")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__FrameRate()
		{
			return null;
		}

		[Token(Token = "0x60013E0")]
		[Address(RVA = "0x3CF79F0", Offset = "0x3CF79F0", VA = "0x3CF79F0")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__IsLooping()
		{
			return null;
		}

		[Token(Token = "0x60013E1")]
		[Address(RVA = "0x3CF7AD0", Offset = "0x3CF7AD0", VA = "0x3CF7AD0")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__IsPaused()
		{
			return null;
		}

		[Token(Token = "0x60013E2")]
		[Address(RVA = "0x3CF7B70", Offset = "0x3CF7B70", VA = "0x3CF7B70")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__IsPlaying()
		{
			return null;
		}

		[Token(Token = "0x60013E3")]
		[Address(RVA = "0x3CF7C10", Offset = "0x3CF7C10", VA = "0x3CF7C10")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__IsPrepared()
		{
			return null;
		}

		[Token(Token = "0x60013E4")]
		[Address(RVA = "0x3CF7CB0", Offset = "0x3CF7CB0", VA = "0x3CF7CB0")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__Length()
		{
			return null;
		}

		[Token(Token = "0x60013E5")]
		[Address(RVA = "0x3CF7D50", Offset = "0x3CF7D50", VA = "0x3CF7D50")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__PlaybackSpeed()
		{
			return null;
		}

		[Token(Token = "0x60013E6")]
		[Address(RVA = "0x3CF7E30", Offset = "0x3CF7E30", VA = "0x3CF7E30")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__Time()
		{
			return null;
		}

		[Token(Token = "0x60013E7")]
		[Address(RVA = "0x3CF7F10", Offset = "0x3CF7F10", VA = "0x3CF7F10")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__Pause()
		{
			return null;
		}

		[Token(Token = "0x60013E8")]
		[Address(RVA = "0x3CF8060", Offset = "0x3CF8060", VA = "0x3CF8060")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__Play()
		{
			return null;
		}

		[Token(Token = "0x60013E9")]
		[Address(RVA = "0x3CF81B0", Offset = "0x3CF81B0", VA = "0x3CF81B0")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__Prepare()
		{
			return null;
		}

		[Token(Token = "0x60013EA")]
		[Address(RVA = "0x3CF8300", Offset = "0x3CF8300", VA = "0x3CF8300")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__StepForward()
		{
			return null;
		}

		[Token(Token = "0x60013EB")]
		[Address(RVA = "0x3CF8450", Offset = "0x3CF8450", VA = "0x3CF8450")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__Stop()
		{
			return null;
		}
	}

	[Token(Token = "0x4000E27")]
	[FieldOffset(Offset = "0x38")]
	public VideoPlayer Value;

	[Token(Token = "0x4000E28")]
	[FieldOffset(Offset = "0x40")]
	public BuiltinClassInstance OwnerBuiltin;

	[Token(Token = "0x1700027A")]
	public int Frame
	{
		[Token(Token = "0x60013C5")]
		[Address(RVA = "0x3CF6E20", Offset = "0x3CF6E20", VA = "0x3CF6E20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60013C4")]
		[Address(RVA = "0x3CF6E00", Offset = "0x3CF6E00", VA = "0x3CF6E00")]
		set
		{
		}
	}

	[Token(Token = "0x1700027B")]
	public ulong FrameCount
	{
		[Token(Token = "0x60013C6")]
		[Address(RVA = "0x3CF6E40", Offset = "0x3CF6E40", VA = "0x3CF6E40")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x1700027C")]
	public float FrameRate
	{
		[Token(Token = "0x60013C7")]
		[Address(RVA = "0x3CF6E60", Offset = "0x3CF6E60", VA = "0x3CF6E60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700027D")]
	public bool IsLooping
	{
		[Token(Token = "0x60013C9")]
		[Address(RVA = "0x3CF6EA0", Offset = "0x3CF6EA0", VA = "0x3CF6EA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60013C8")]
		[Address(RVA = "0x3CF6E80", Offset = "0x3CF6E80", VA = "0x3CF6E80")]
		set
		{
		}
	}

	[Token(Token = "0x1700027E")]
	public bool IsPaused
	{
		[Token(Token = "0x60013CA")]
		[Address(RVA = "0x3CF6EC0", Offset = "0x3CF6EC0", VA = "0x3CF6EC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700027F")]
	public bool IsPlaying
	{
		[Token(Token = "0x60013CB")]
		[Address(RVA = "0x3CF6EE0", Offset = "0x3CF6EE0", VA = "0x3CF6EE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000280")]
	public bool IsPrepared
	{
		[Token(Token = "0x60013CC")]
		[Address(RVA = "0x3CF6F00", Offset = "0x3CF6F00", VA = "0x3CF6F00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000281")]
	public double Length
	{
		[Token(Token = "0x60013CD")]
		[Address(RVA = "0x3CF6F20", Offset = "0x3CF6F20", VA = "0x3CF6F20")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x17000282")]
	public float PlaybackSpeed
	{
		[Token(Token = "0x60013CF")]
		[Address(RVA = "0x3CF6F60", Offset = "0x3CF6F60", VA = "0x3CF6F60")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60013CE")]
		[Address(RVA = "0x3CF6F40", Offset = "0x3CF6F40", VA = "0x3CF6F40")]
		set
		{
		}
	}

	[Token(Token = "0x17000283")]
	public float Time
	{
		[Token(Token = "0x60013D1")]
		[Address(RVA = "0x3CF6FA0", Offset = "0x3CF6FA0", VA = "0x3CF6FA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60013D0")]
		[Address(RVA = "0x3CF6F80", Offset = "0x3CF6F80", VA = "0x3CF6F80")]
		set
		{
		}
	}

	[Token(Token = "0x17000284")]
	public override string ClassName
	{
		[Token(Token = "0x60013D7")]
		[Address(RVA = "0x3CF7060", Offset = "0x3CF7060", VA = "0x3CF7060", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000285")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60013D8")]
		[Address(RVA = "0x3CF7090", Offset = "0x3CF7090", VA = "0x3CF7090", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000286")]
	public override bool IsStatic
	{
		[Token(Token = "0x60013D9")]
		[Address(RVA = "0x3CF70A0", Offset = "0x3CF70A0", VA = "0x3CF70A0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000287")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60013DA")]
		[Address(RVA = "0x3CF70B0", Offset = "0x3CF70B0", VA = "0x3CF70B0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60013C2")]
	[Address(RVA = "0x3CF6D60", Offset = "0x3CF6D60", VA = "0x3CF6D60")]
	public CustomLogicVideoPlayerBuiltin()
	{
	}

	[Token(Token = "0x60013C3")]
	[Address(RVA = "0x3CF6D70", Offset = "0x3CF6D70", VA = "0x3CF6D70")]
	public CustomLogicVideoPlayerBuiltin(BuiltinClassInstance owner, VideoPlayer videoPlayer)
	{
	}

	[Token(Token = "0x60013D2")]
	[Address(RVA = "0x3CF6FC0", Offset = "0x3CF6FC0", VA = "0x3CF6FC0")]
	public void Pause()
	{
	}

	[Token(Token = "0x60013D3")]
	[Address(RVA = "0x3CF6FE0", Offset = "0x3CF6FE0", VA = "0x3CF6FE0")]
	public void Play()
	{
	}

	[Token(Token = "0x60013D4")]
	[Address(RVA = "0x3CF7000", Offset = "0x3CF7000", VA = "0x3CF7000")]
	public void Prepare()
	{
	}

	[Token(Token = "0x60013D5")]
	[Address(RVA = "0x3CF7020", Offset = "0x3CF7020", VA = "0x3CF7020")]
	public void StepForward()
	{
	}

	[Token(Token = "0x60013D6")]
	[Address(RVA = "0x3CF7040", Offset = "0x3CF7040", VA = "0x3CF7040")]
	public void Stop()
	{
	}
}
