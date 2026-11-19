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

[Token(Token = "0x2000487")]
[CompilerGenerated]
internal class CustomLogicAudioSourceBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x2000488")]
	public static class Factory
	{
		[Token(Token = "0x6001E00")]
		[Address(RVA = "0x58F0D30", Offset = "0x58EFD30", VA = "0x58F0D30")]
		public static CustomLogicAudioSourceBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000489")]
	public static class Bindings
	{
		[Token(Token = "0x4001685")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001E01")]
		[Address(RVA = "0x58F0E20", Offset = "0x58EFE20", VA = "0x58F0E20")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001E02")]
		[Address(RVA = "0x58F1280", Offset = "0x58F0280", VA = "0x58F1280")]
		public static CLPropertyBinding<CustomLogicAudioSourceBuiltin> __CreatePropertyBinding__Volume()
		{
			return null;
		}

		[Token(Token = "0x6001E03")]
		[Address(RVA = "0x58F1360", Offset = "0x58F0360", VA = "0x58F1360")]
		public static CLPropertyBinding<CustomLogicAudioSourceBuiltin> __CreatePropertyBinding__Time()
		{
			return null;
		}

		[Token(Token = "0x6001E04")]
		[Address(RVA = "0x58F1440", Offset = "0x58F0440", VA = "0x58F1440")]
		public static CLPropertyBinding<CustomLogicAudioSourceBuiltin> __CreatePropertyBinding__Pitch()
		{
			return null;
		}

		[Token(Token = "0x6001E05")]
		[Address(RVA = "0x58F1520", Offset = "0x58F0520", VA = "0x58F1520")]
		public static CLPropertyBinding<CustomLogicAudioSourceBuiltin> __CreatePropertyBinding__IsPlaying()
		{
			return null;
		}

		[Token(Token = "0x6001E06")]
		[Address(RVA = "0x58F15C0", Offset = "0x58F05C0", VA = "0x58F15C0")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__Play()
		{
			return null;
		}

		[Token(Token = "0x6001E07")]
		[Address(RVA = "0x58F1700", Offset = "0x58F0700", VA = "0x58F1700")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__PlayDelayed()
		{
			return null;
		}

		[Token(Token = "0x6001E08")]
		[Address(RVA = "0x58F1840", Offset = "0x58F0840", VA = "0x58F1840")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__Stop()
		{
			return null;
		}

		[Token(Token = "0x6001E09")]
		[Address(RVA = "0x58F1980", Offset = "0x58F0980", VA = "0x58F1980")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__Pause()
		{
			return null;
		}

		[Token(Token = "0x6001E0A")]
		[Address(RVA = "0x58F1AC0", Offset = "0x58F0AC0", VA = "0x58F1AC0")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__Unpause()
		{
			return null;
		}
	}

	[Token(Token = "0x4001683")]
	[FieldOffset(Offset = "0x38")]
	public AudioSource Value;

	[Token(Token = "0x4001684")]
	[FieldOffset(Offset = "0x40")]
	public BuiltinClassInstance OwnerBuiltin;

	[Token(Token = "0x17000341")]
	public float Volume
	{
		[Token(Token = "0x6001DF0")]
		[Address(RVA = "0x58F0B50", Offset = "0x58EFB50", VA = "0x58F0B50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001DF1")]
		[Address(RVA = "0x58F0B70", Offset = "0x58EFB70", VA = "0x58F0B70")]
		set
		{
		}
	}

	[Token(Token = "0x17000342")]
	public float Time
	{
		[Token(Token = "0x6001DF2")]
		[Address(RVA = "0x58F0B90", Offset = "0x58EFB90", VA = "0x58F0B90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001DF3")]
		[Address(RVA = "0x58F0BB0", Offset = "0x58EFBB0", VA = "0x58F0BB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000343")]
	public float Pitch
	{
		[Token(Token = "0x6001DF4")]
		[Address(RVA = "0x58F0BD0", Offset = "0x58EFBD0", VA = "0x58F0BD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001DF5")]
		[Address(RVA = "0x58F0BF0", Offset = "0x58EFBF0", VA = "0x58F0BF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000344")]
	public bool IsPlaying
	{
		[Token(Token = "0x6001DF6")]
		[Address(RVA = "0x58F0C10", Offset = "0x58EFC10", VA = "0x58F0C10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000345")]
	public override string ClassName
	{
		[Token(Token = "0x6001DFC")]
		[Address(RVA = "0x58F0CD0", Offset = "0x58EFCD0", VA = "0x58F0CD0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000346")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001DFD")]
		[Address(RVA = "0x58F0D00", Offset = "0x58EFD00", VA = "0x58F0D00", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000347")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001DFE")]
		[Address(RVA = "0x58F0D10", Offset = "0x58EFD10", VA = "0x58F0D10", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000348")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001DFF")]
		[Address(RVA = "0x58F0D20", Offset = "0x58EFD20", VA = "0x58F0D20", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001DEE")]
	[Address(RVA = "0x58F0AB0", Offset = "0x58EFAB0", VA = "0x58F0AB0")]
	public CustomLogicAudioSourceBuiltin()
	{
	}

	[Token(Token = "0x6001DEF")]
	[Address(RVA = "0x58F0AC0", Offset = "0x58EFAC0", VA = "0x58F0AC0")]
	public CustomLogicAudioSourceBuiltin(BuiltinClassInstance owner, AudioSource audioSource)
	{
	}

	[Token(Token = "0x6001DF7")]
	[Address(RVA = "0x58F0C30", Offset = "0x58EFC30", VA = "0x58F0C30")]
	public void Play()
	{
	}

	[Token(Token = "0x6001DF8")]
	[Address(RVA = "0x58F0C50", Offset = "0x58EFC50", VA = "0x58F0C50")]
	public void PlayDelayed(float seconds)
	{
	}

	[Token(Token = "0x6001DF9")]
	[Address(RVA = "0x58F0C70", Offset = "0x58EFC70", VA = "0x58F0C70")]
	public void Stop()
	{
	}

	[Token(Token = "0x6001DFA")]
	[Address(RVA = "0x58F0C90", Offset = "0x58EFC90", VA = "0x58F0C90")]
	public void Pause()
	{
	}

	[Token(Token = "0x6001DFB")]
	[Address(RVA = "0x58F0CB0", Offset = "0x58EFCB0", VA = "0x58F0CB0")]
	public void Unpause()
	{
	}
}
