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

[Token(Token = "0x2000302")]
[CompilerGenerated]
internal class CustomLogicVideoPlayerBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x2000303")]
	public static class Factory
	{
		[Token(Token = "0x6001585")]
		[Address(RVA = "0x3FFCE80", Offset = "0x3FFCE80", VA = "0x3FFCE80")]
		public static CustomLogicVideoPlayerBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000304")]
	public static class Bindings
	{
		[Token(Token = "0x4000F0F")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001586")]
		[Address(RVA = "0x3FFCF70", Offset = "0x3FFCF70", VA = "0x3FFCF70")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001587")]
		[Address(RVA = "0x3FFD590", Offset = "0x3FFD590", VA = "0x3FFD590")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__Frame()
		{
			return null;
		}

		[Token(Token = "0x6001588")]
		[Address(RVA = "0x3FFD670", Offset = "0x3FFD670", VA = "0x3FFD670")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__FrameCount()
		{
			return null;
		}

		[Token(Token = "0x6001589")]
		[Address(RVA = "0x3FFD710", Offset = "0x3FFD710", VA = "0x3FFD710")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__FrameRate()
		{
			return null;
		}

		[Token(Token = "0x600158A")]
		[Address(RVA = "0x3FFD7B0", Offset = "0x3FFD7B0", VA = "0x3FFD7B0")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__IsLooping()
		{
			return null;
		}

		[Token(Token = "0x600158B")]
		[Address(RVA = "0x3FFD890", Offset = "0x3FFD890", VA = "0x3FFD890")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__IsPaused()
		{
			return null;
		}

		[Token(Token = "0x600158C")]
		[Address(RVA = "0x3FFD930", Offset = "0x3FFD930", VA = "0x3FFD930")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__IsPlaying()
		{
			return null;
		}

		[Token(Token = "0x600158D")]
		[Address(RVA = "0x3FFD9D0", Offset = "0x3FFD9D0", VA = "0x3FFD9D0")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__IsPrepared()
		{
			return null;
		}

		[Token(Token = "0x600158E")]
		[Address(RVA = "0x3FFDA70", Offset = "0x3FFDA70", VA = "0x3FFDA70")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__Length()
		{
			return null;
		}

		[Token(Token = "0x600158F")]
		[Address(RVA = "0x3FFDB10", Offset = "0x3FFDB10", VA = "0x3FFDB10")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__PlaybackSpeed()
		{
			return null;
		}

		[Token(Token = "0x6001590")]
		[Address(RVA = "0x3FFDBF0", Offset = "0x3FFDBF0", VA = "0x3FFDBF0")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__Time()
		{
			return null;
		}

		[Token(Token = "0x6001591")]
		[Address(RVA = "0x3FFDCD0", Offset = "0x3FFDCD0", VA = "0x3FFDCD0")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__Pause()
		{
			return null;
		}

		[Token(Token = "0x6001592")]
		[Address(RVA = "0x3FFDE20", Offset = "0x3FFDE20", VA = "0x3FFDE20")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__Play()
		{
			return null;
		}

		[Token(Token = "0x6001593")]
		[Address(RVA = "0x3FFDF70", Offset = "0x3FFDF70", VA = "0x3FFDF70")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__Prepare()
		{
			return null;
		}

		[Token(Token = "0x6001594")]
		[Address(RVA = "0x3FFE0C0", Offset = "0x3FFE0C0", VA = "0x3FFE0C0")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__StepForward()
		{
			return null;
		}

		[Token(Token = "0x6001595")]
		[Address(RVA = "0x3FFE210", Offset = "0x3FFE210", VA = "0x3FFE210")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__Stop()
		{
			return null;
		}
	}

	[Token(Token = "0x4000F0D")]
	[FieldOffset(Offset = "0x38")]
	public VideoPlayer Value;

	[Token(Token = "0x4000F0E")]
	[FieldOffset(Offset = "0x40")]
	public BuiltinClassInstance OwnerBuiltin;

	[Token(Token = "0x170002D3")]
	public int Frame
	{
		[Token(Token = "0x600156F")]
		[Address(RVA = "0x3FFCBE0", Offset = "0x3FFCBE0", VA = "0x3FFCBE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600156E")]
		[Address(RVA = "0x3FFCBC0", Offset = "0x3FFCBC0", VA = "0x3FFCBC0")]
		set
		{
		}
	}

	[Token(Token = "0x170002D4")]
	public ulong FrameCount
	{
		[Token(Token = "0x6001570")]
		[Address(RVA = "0x3FFCC00", Offset = "0x3FFCC00", VA = "0x3FFCC00")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x170002D5")]
	public float FrameRate
	{
		[Token(Token = "0x6001571")]
		[Address(RVA = "0x3FFCC20", Offset = "0x3FFCC20", VA = "0x3FFCC20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170002D6")]
	public bool IsLooping
	{
		[Token(Token = "0x6001573")]
		[Address(RVA = "0x3FFCC60", Offset = "0x3FFCC60", VA = "0x3FFCC60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001572")]
		[Address(RVA = "0x3FFCC40", Offset = "0x3FFCC40", VA = "0x3FFCC40")]
		set
		{
		}
	}

	[Token(Token = "0x170002D7")]
	public bool IsPaused
	{
		[Token(Token = "0x6001574")]
		[Address(RVA = "0x3FFCC80", Offset = "0x3FFCC80", VA = "0x3FFCC80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D8")]
	public bool IsPlaying
	{
		[Token(Token = "0x6001575")]
		[Address(RVA = "0x3FFCCA0", Offset = "0x3FFCCA0", VA = "0x3FFCCA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D9")]
	public bool IsPrepared
	{
		[Token(Token = "0x6001576")]
		[Address(RVA = "0x3FFCCC0", Offset = "0x3FFCCC0", VA = "0x3FFCCC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002DA")]
	public double Length
	{
		[Token(Token = "0x6001577")]
		[Address(RVA = "0x3FFCCE0", Offset = "0x3FFCCE0", VA = "0x3FFCCE0")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170002DB")]
	public float PlaybackSpeed
	{
		[Token(Token = "0x6001579")]
		[Address(RVA = "0x3FFCD20", Offset = "0x3FFCD20", VA = "0x3FFCD20")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001578")]
		[Address(RVA = "0x3FFCD00", Offset = "0x3FFCD00", VA = "0x3FFCD00")]
		set
		{
		}
	}

	[Token(Token = "0x170002DC")]
	public float Time
	{
		[Token(Token = "0x600157B")]
		[Address(RVA = "0x3FFCD60", Offset = "0x3FFCD60", VA = "0x3FFCD60")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600157A")]
		[Address(RVA = "0x3FFCD40", Offset = "0x3FFCD40", VA = "0x3FFCD40")]
		set
		{
		}
	}

	[Token(Token = "0x170002DD")]
	public override string ClassName
	{
		[Token(Token = "0x6001581")]
		[Address(RVA = "0x3FFCE20", Offset = "0x3FFCE20", VA = "0x3FFCE20", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002DE")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001582")]
		[Address(RVA = "0x3FFCE50", Offset = "0x3FFCE50", VA = "0x3FFCE50", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002DF")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001583")]
		[Address(RVA = "0x3FFCE60", Offset = "0x3FFCE60", VA = "0x3FFCE60", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002E0")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001584")]
		[Address(RVA = "0x3FFCE70", Offset = "0x3FFCE70", VA = "0x3FFCE70", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600156C")]
	[Address(RVA = "0x3FFCB20", Offset = "0x3FFCB20", VA = "0x3FFCB20")]
	public CustomLogicVideoPlayerBuiltin()
	{
	}

	[Token(Token = "0x600156D")]
	[Address(RVA = "0x3FFCB30", Offset = "0x3FFCB30", VA = "0x3FFCB30")]
	public CustomLogicVideoPlayerBuiltin(BuiltinClassInstance owner, VideoPlayer videoPlayer)
	{
	}

	[Token(Token = "0x600157C")]
	[Address(RVA = "0x3FFCD80", Offset = "0x3FFCD80", VA = "0x3FFCD80")]
	public void Pause()
	{
	}

	[Token(Token = "0x600157D")]
	[Address(RVA = "0x3FFCDA0", Offset = "0x3FFCDA0", VA = "0x3FFCDA0")]
	public void Play()
	{
	}

	[Token(Token = "0x600157E")]
	[Address(RVA = "0x3FFCDC0", Offset = "0x3FFCDC0", VA = "0x3FFCDC0")]
	public void Prepare()
	{
	}

	[Token(Token = "0x600157F")]
	[Address(RVA = "0x3FFCDE0", Offset = "0x3FFCDE0", VA = "0x3FFCDE0")]
	public void StepForward()
	{
	}

	[Token(Token = "0x6001580")]
	[Address(RVA = "0x3FFCE00", Offset = "0x3FFCE00", VA = "0x3FFCE00")]
	public void Stop()
	{
	}
}
