// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicAudioSourceBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicAudioSourceBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x2000428")]
[CompilerGenerated]
internal class CustomLogicAudioSourceBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x2000429")]
	public static class Factory
	{
		[Token(Token = "0x6001B89")]
		[Address(RVA = "0x1F07950", Offset = "0x1F05F50", VA = "0x181F07950")]
		public static CustomLogicAudioSourceBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x200042A")]
	public static class Bindings
	{
		[Token(Token = "0x40014E5")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001B8A")]
		[Address(RVA = "0x1EEBBD0", Offset = "0x1EEA1D0", VA = "0x181EEBBD0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001B8B")]
		[Address(RVA = "0x1EFEA40", Offset = "0x1EFD040", VA = "0x181EFEA40")]
		public static CLPropertyBinding<CustomLogicAudioSourceBuiltin> __CreatePropertyBinding__Volume()
		{
			return null;
		}

		[Token(Token = "0x6001B8C")]
		[Address(RVA = "0x1EFE630", Offset = "0x1EFCC30", VA = "0x181EFE630")]
		public static CLPropertyBinding<CustomLogicAudioSourceBuiltin> __CreatePropertyBinding__Time()
		{
			return null;
		}

		[Token(Token = "0x6001B8D")]
		[Address(RVA = "0x1EFD050", Offset = "0x1EFB650", VA = "0x181EFD050")]
		public static CLPropertyBinding<CustomLogicAudioSourceBuiltin> __CreatePropertyBinding__Pitch()
		{
			return null;
		}

		[Token(Token = "0x6001B8E")]
		[Address(RVA = "0x1EFC4C0", Offset = "0x1EFAAC0", VA = "0x181EFC4C0")]
		public static CLPropertyBinding<CustomLogicAudioSourceBuiltin> __CreatePropertyBinding__IsPlaying()
		{
			return null;
		}

		[Token(Token = "0x6001B8F")]
		[Address(RVA = "0x1EF79F0", Offset = "0x1EF5FF0", VA = "0x181EF79F0")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__Play()
		{
			return null;
		}

		[Token(Token = "0x6001B90")]
		[Address(RVA = "0x1EF78D0", Offset = "0x1EF5ED0", VA = "0x181EF78D0")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__PlayDelayed()
		{
			return null;
		}

		[Token(Token = "0x6001B91")]
		[Address(RVA = "0x1EF96C0", Offset = "0x1EF7CC0", VA = "0x181EF96C0")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__Stop()
		{
			return null;
		}

		[Token(Token = "0x6001B92")]
		[Address(RVA = "0x1EF7210", Offset = "0x1EF5810", VA = "0x181EF7210")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__Pause()
		{
			return null;
		}

		[Token(Token = "0x6001B93")]
		[Address(RVA = "0x1EF97E0", Offset = "0x1EF7DE0", VA = "0x181EF97E0")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__Unpause()
		{
			return null;
		}
	}

	[Token(Token = "0x40014E3")]
	[FieldOffset(Offset = "0x38")]
	public AudioSource Value;

	[Token(Token = "0x40014E4")]
	[FieldOffset(Offset = "0x40")]
	public BuiltinClassInstance OwnerBuiltin;

	[Token(Token = "0x17000300")]
	public float Volume
	{
		[Token(Token = "0x6001B79")]
		[Address(RVA = "0x1F01FF0", Offset = "0x1F005F0", VA = "0x181F01FF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001B7A")]
		[Address(RVA = "0x1F02050", Offset = "0x1F00650", VA = "0x181F02050")]
		set
		{
		}
	}

	[Token(Token = "0x17000301")]
	public float Time
	{
		[Token(Token = "0x6001B7B")]
		[Address(RVA = "0x1F01FD0", Offset = "0x1F005D0", VA = "0x181F01FD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001B7C")]
		[Address(RVA = "0x1F02030", Offset = "0x1F00630", VA = "0x181F02030")]
		set
		{
		}
	}

	[Token(Token = "0x17000302")]
	public float Pitch
	{
		[Token(Token = "0x6001B7D")]
		[Address(RVA = "0x1F01FB0", Offset = "0x1F005B0", VA = "0x181F01FB0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001B7E")]
		[Address(RVA = "0x1F02010", Offset = "0x1F00610", VA = "0x181F02010")]
		set
		{
		}
	}

	[Token(Token = "0x17000303")]
	public bool IsPlaying
	{
		[Token(Token = "0x6001B7F")]
		[Address(RVA = "0x1F01F90", Offset = "0x1F00590", VA = "0x181F01F90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000304")]
	public override string ClassName
	{
		[Token(Token = "0x6001B85")]
		[Address(RVA = "0x1F01F60", Offset = "0x1F00560", VA = "0x181F01F60", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000305")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001B86")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000306")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001B87")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000307")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001B88")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001B77")]
	[Address(RVA = "0x1F01510", Offset = "0x1EFFB10", VA = "0x181F01510")]
	public CustomLogicAudioSourceBuiltin()
	{
	}

	[Token(Token = "0x6001B78")]
	[Address(RVA = "0x1F01EA0", Offset = "0x1F004A0", VA = "0x181F01EA0")]
	public CustomLogicAudioSourceBuiltin(BuiltinClassInstance owner, AudioSource audioSource)
	{
	}

	[Token(Token = "0x6001B80")]
	[Address(RVA = "0x1F01E40", Offset = "0x1F00440", VA = "0x181F01E40")]
	public void Play()
	{
	}

	[Token(Token = "0x6001B81")]
	[Address(RVA = "0x1F01E20", Offset = "0x1F00420", VA = "0x181F01E20")]
	public void PlayDelayed(float seconds)
	{
	}

	[Token(Token = "0x6001B82")]
	[Address(RVA = "0x1F01E60", Offset = "0x1F00460", VA = "0x181F01E60")]
	public void Stop()
	{
	}

	[Token(Token = "0x6001B83")]
	[Address(RVA = "0x1F01E00", Offset = "0x1F00400", VA = "0x181F01E00")]
	public void Pause()
	{
	}

	[Token(Token = "0x6001B84")]
	[Address(RVA = "0x1F01E80", Offset = "0x1F00480", VA = "0x181F01E80")]
	public void Unpause()
	{
	}
}
