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

[Token(Token = "0x20004AD")]
[CompilerGenerated]
internal class CustomLogicVideoPlayerBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x20004AE")]
	public static class Factory
	{
		[Token(Token = "0x6002089")]
		[Address(RVA = "0x5909CE0", Offset = "0x5908CE0", VA = "0x5909CE0")]
		public static CustomLogicVideoPlayerBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20004AF")]
	public static class Bindings
	{
		[Token(Token = "0x40016D3")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600208A")]
		[Address(RVA = "0x5909DD0", Offset = "0x5908DD0", VA = "0x5909DD0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600208B")]
		[Address(RVA = "0x590A3F0", Offset = "0x59093F0", VA = "0x590A3F0")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__Frame()
		{
			return null;
		}

		[Token(Token = "0x600208C")]
		[Address(RVA = "0x590A4D0", Offset = "0x59094D0", VA = "0x590A4D0")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__FrameCount()
		{
			return null;
		}

		[Token(Token = "0x600208D")]
		[Address(RVA = "0x590A570", Offset = "0x5909570", VA = "0x590A570")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__FrameRate()
		{
			return null;
		}

		[Token(Token = "0x600208E")]
		[Address(RVA = "0x590A610", Offset = "0x5909610", VA = "0x590A610")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__IsLooping()
		{
			return null;
		}

		[Token(Token = "0x600208F")]
		[Address(RVA = "0x590A6F0", Offset = "0x59096F0", VA = "0x590A6F0")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__IsPaused()
		{
			return null;
		}

		[Token(Token = "0x6002090")]
		[Address(RVA = "0x590A790", Offset = "0x5909790", VA = "0x590A790")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__IsPlaying()
		{
			return null;
		}

		[Token(Token = "0x6002091")]
		[Address(RVA = "0x590A830", Offset = "0x5909830", VA = "0x590A830")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__IsPrepared()
		{
			return null;
		}

		[Token(Token = "0x6002092")]
		[Address(RVA = "0x590A8D0", Offset = "0x59098D0", VA = "0x590A8D0")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__Length()
		{
			return null;
		}

		[Token(Token = "0x6002093")]
		[Address(RVA = "0x590A970", Offset = "0x5909970", VA = "0x590A970")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__PlaybackSpeed()
		{
			return null;
		}

		[Token(Token = "0x6002094")]
		[Address(RVA = "0x590AA50", Offset = "0x5909A50", VA = "0x590AA50")]
		public static CLPropertyBinding<CustomLogicVideoPlayerBuiltin> __CreatePropertyBinding__Time()
		{
			return null;
		}

		[Token(Token = "0x6002095")]
		[Address(RVA = "0x590AB30", Offset = "0x5909B30", VA = "0x590AB30")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__Pause()
		{
			return null;
		}

		[Token(Token = "0x6002096")]
		[Address(RVA = "0x590AC70", Offset = "0x5909C70", VA = "0x590AC70")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__Play()
		{
			return null;
		}

		[Token(Token = "0x6002097")]
		[Address(RVA = "0x590ADB0", Offset = "0x5909DB0", VA = "0x590ADB0")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__Prepare()
		{
			return null;
		}

		[Token(Token = "0x6002098")]
		[Address(RVA = "0x590AEF0", Offset = "0x5909EF0", VA = "0x590AEF0")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__StepForward()
		{
			return null;
		}

		[Token(Token = "0x6002099")]
		[Address(RVA = "0x590B030", Offset = "0x590A030", VA = "0x590B030")]
		public static CLMethodBinding<CustomLogicVideoPlayerBuiltin> __CreateMethodBinding__Stop()
		{
			return null;
		}
	}

	[Token(Token = "0x40016D1")]
	[FieldOffset(Offset = "0x38")]
	public VideoPlayer Value;

	[Token(Token = "0x40016D2")]
	[FieldOffset(Offset = "0x40")]
	public BuiltinClassInstance OwnerBuiltin;

	[Token(Token = "0x170003CA")]
	public int Frame
	{
		[Token(Token = "0x6002073")]
		[Address(RVA = "0x5909A40", Offset = "0x5908A40", VA = "0x5909A40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002072")]
		[Address(RVA = "0x5909A20", Offset = "0x5908A20", VA = "0x5909A20")]
		set
		{
		}
	}

	[Token(Token = "0x170003CB")]
	public ulong FrameCount
	{
		[Token(Token = "0x6002074")]
		[Address(RVA = "0x5909A60", Offset = "0x5908A60", VA = "0x5909A60")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x170003CC")]
	public float FrameRate
	{
		[Token(Token = "0x6002075")]
		[Address(RVA = "0x5909A80", Offset = "0x5908A80", VA = "0x5909A80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170003CD")]
	public bool IsLooping
	{
		[Token(Token = "0x6002077")]
		[Address(RVA = "0x5909AC0", Offset = "0x5908AC0", VA = "0x5909AC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002076")]
		[Address(RVA = "0x5909AA0", Offset = "0x5908AA0", VA = "0x5909AA0")]
		set
		{
		}
	}

	[Token(Token = "0x170003CE")]
	public bool IsPaused
	{
		[Token(Token = "0x6002078")]
		[Address(RVA = "0x5909AE0", Offset = "0x5908AE0", VA = "0x5909AE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003CF")]
	public bool IsPlaying
	{
		[Token(Token = "0x6002079")]
		[Address(RVA = "0x5909B00", Offset = "0x5908B00", VA = "0x5909B00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003D0")]
	public bool IsPrepared
	{
		[Token(Token = "0x600207A")]
		[Address(RVA = "0x5909B20", Offset = "0x5908B20", VA = "0x5909B20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003D1")]
	public double Length
	{
		[Token(Token = "0x600207B")]
		[Address(RVA = "0x5909B40", Offset = "0x5908B40", VA = "0x5909B40")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170003D2")]
	public float PlaybackSpeed
	{
		[Token(Token = "0x600207D")]
		[Address(RVA = "0x5909B80", Offset = "0x5908B80", VA = "0x5909B80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600207C")]
		[Address(RVA = "0x5909B60", Offset = "0x5908B60", VA = "0x5909B60")]
		set
		{
		}
	}

	[Token(Token = "0x170003D3")]
	public float Time
	{
		[Token(Token = "0x600207F")]
		[Address(RVA = "0x5909BC0", Offset = "0x5908BC0", VA = "0x5909BC0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600207E")]
		[Address(RVA = "0x5909BA0", Offset = "0x5908BA0", VA = "0x5909BA0")]
		set
		{
		}
	}

	[Token(Token = "0x170003D4")]
	public override string ClassName
	{
		[Token(Token = "0x6002085")]
		[Address(RVA = "0x5909C80", Offset = "0x5908C80", VA = "0x5909C80", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003D5")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002086")]
		[Address(RVA = "0x5909CB0", Offset = "0x5908CB0", VA = "0x5909CB0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003D6")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002087")]
		[Address(RVA = "0x5909CC0", Offset = "0x5908CC0", VA = "0x5909CC0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003D7")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002088")]
		[Address(RVA = "0x5909CD0", Offset = "0x5908CD0", VA = "0x5909CD0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002070")]
	[Address(RVA = "0x5909980", Offset = "0x5908980", VA = "0x5909980")]
	public CustomLogicVideoPlayerBuiltin()
	{
	}

	[Token(Token = "0x6002071")]
	[Address(RVA = "0x5909990", Offset = "0x5908990", VA = "0x5909990")]
	public CustomLogicVideoPlayerBuiltin(BuiltinClassInstance owner, VideoPlayer videoPlayer)
	{
	}

	[Token(Token = "0x6002080")]
	[Address(RVA = "0x5909BE0", Offset = "0x5908BE0", VA = "0x5909BE0")]
	public void Pause()
	{
	}

	[Token(Token = "0x6002081")]
	[Address(RVA = "0x5909C00", Offset = "0x5908C00", VA = "0x5909C00")]
	public void Play()
	{
	}

	[Token(Token = "0x6002082")]
	[Address(RVA = "0x5909C20", Offset = "0x5908C20", VA = "0x5909C20")]
	public void Prepare()
	{
	}

	[Token(Token = "0x6002083")]
	[Address(RVA = "0x5909C40", Offset = "0x5908C40", VA = "0x5909C40")]
	public void StepForward()
	{
	}

	[Token(Token = "0x6002084")]
	[Address(RVA = "0x5909C60", Offset = "0x5908C60", VA = "0x5909C60")]
	public void Stop()
	{
	}
}
