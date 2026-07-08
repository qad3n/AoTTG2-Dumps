using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x20002A4")]
[CompilerGenerated]
internal class CustomLogicAudioSourceBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x20002A5")]
	public static class Factory
	{
		[Token(Token = "0x600115D")]
		[Address(RVA = "0x3CDF120", Offset = "0x3CDF120", VA = "0x3CDF120")]
		public static CustomLogicAudioSourceBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20002A6")]
	public static class Bindings
	{
		[Token(Token = "0x4000DDF")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600115E")]
		[Address(RVA = "0x3CDF210", Offset = "0x3CDF210", VA = "0x3CDF210")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600115F")]
		[Address(RVA = "0x3CDF670", Offset = "0x3CDF670", VA = "0x3CDF670")]
		public static CLPropertyBinding<CustomLogicAudioSourceBuiltin> __CreatePropertyBinding__Volume()
		{
			return null;
		}

		[Token(Token = "0x6001160")]
		[Address(RVA = "0x3CDF750", Offset = "0x3CDF750", VA = "0x3CDF750")]
		public static CLPropertyBinding<CustomLogicAudioSourceBuiltin> __CreatePropertyBinding__Time()
		{
			return null;
		}

		[Token(Token = "0x6001161")]
		[Address(RVA = "0x3CDF830", Offset = "0x3CDF830", VA = "0x3CDF830")]
		public static CLPropertyBinding<CustomLogicAudioSourceBuiltin> __CreatePropertyBinding__Pitch()
		{
			return null;
		}

		[Token(Token = "0x6001162")]
		[Address(RVA = "0x3CDF910", Offset = "0x3CDF910", VA = "0x3CDF910")]
		public static CLPropertyBinding<CustomLogicAudioSourceBuiltin> __CreatePropertyBinding__IsPlaying()
		{
			return null;
		}

		[Token(Token = "0x6001163")]
		[Address(RVA = "0x3CDF9B0", Offset = "0x3CDF9B0", VA = "0x3CDF9B0")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__Play()
		{
			return null;
		}

		[Token(Token = "0x6001164")]
		[Address(RVA = "0x3CDFB00", Offset = "0x3CDFB00", VA = "0x3CDFB00")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__PlayDelayed()
		{
			return null;
		}

		[Token(Token = "0x6001165")]
		[Address(RVA = "0x3CDFC50", Offset = "0x3CDFC50", VA = "0x3CDFC50")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__Stop()
		{
			return null;
		}

		[Token(Token = "0x6001166")]
		[Address(RVA = "0x3CDFDA0", Offset = "0x3CDFDA0", VA = "0x3CDFDA0")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__Pause()
		{
			return null;
		}

		[Token(Token = "0x6001167")]
		[Address(RVA = "0x3CDFEF0", Offset = "0x3CDFEF0", VA = "0x3CDFEF0")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__Unpause()
		{
			return null;
		}
	}

	[Token(Token = "0x4000DDD")]
	[FieldOffset(Offset = "0x38")]
	public AudioSource Value;

	[Token(Token = "0x4000DDE")]
	[FieldOffset(Offset = "0x40")]
	public BuiltinClassInstance OwnerBuiltin;

	[Token(Token = "0x170001F2")]
	public float Volume
	{
		[Token(Token = "0x600114D")]
		[Address(RVA = "0x3CDEF40", Offset = "0x3CDEF40", VA = "0x3CDEF40")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600114E")]
		[Address(RVA = "0x3CDEF60", Offset = "0x3CDEF60", VA = "0x3CDEF60")]
		set
		{
		}
	}

	[Token(Token = "0x170001F3")]
	public float Time
	{
		[Token(Token = "0x600114F")]
		[Address(RVA = "0x3CDEF80", Offset = "0x3CDEF80", VA = "0x3CDEF80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001150")]
		[Address(RVA = "0x3CDEFA0", Offset = "0x3CDEFA0", VA = "0x3CDEFA0")]
		set
		{
		}
	}

	[Token(Token = "0x170001F4")]
	public float Pitch
	{
		[Token(Token = "0x6001151")]
		[Address(RVA = "0x3CDEFC0", Offset = "0x3CDEFC0", VA = "0x3CDEFC0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001152")]
		[Address(RVA = "0x3CDEFE0", Offset = "0x3CDEFE0", VA = "0x3CDEFE0")]
		set
		{
		}
	}

	[Token(Token = "0x170001F5")]
	public bool IsPlaying
	{
		[Token(Token = "0x6001153")]
		[Address(RVA = "0x3CDF000", Offset = "0x3CDF000", VA = "0x3CDF000")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F6")]
	public override string ClassName
	{
		[Token(Token = "0x6001159")]
		[Address(RVA = "0x3CDF0C0", Offset = "0x3CDF0C0", VA = "0x3CDF0C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F7")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600115A")]
		[Address(RVA = "0x3CDF0F0", Offset = "0x3CDF0F0", VA = "0x3CDF0F0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F8")]
	public override bool IsStatic
	{
		[Token(Token = "0x600115B")]
		[Address(RVA = "0x3CDF100", Offset = "0x3CDF100", VA = "0x3CDF100", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F9")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600115C")]
		[Address(RVA = "0x3CDF110", Offset = "0x3CDF110", VA = "0x3CDF110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600114B")]
	[Address(RVA = "0x3CDEEA0", Offset = "0x3CDEEA0", VA = "0x3CDEEA0")]
	public CustomLogicAudioSourceBuiltin()
	{
	}

	[Token(Token = "0x600114C")]
	[Address(RVA = "0x3CDEEB0", Offset = "0x3CDEEB0", VA = "0x3CDEEB0")]
	public CustomLogicAudioSourceBuiltin(BuiltinClassInstance owner, AudioSource audioSource)
	{
	}

	[Token(Token = "0x6001154")]
	[Address(RVA = "0x3CDF020", Offset = "0x3CDF020", VA = "0x3CDF020")]
	public void Play()
	{
	}

	[Token(Token = "0x6001155")]
	[Address(RVA = "0x3CDF040", Offset = "0x3CDF040", VA = "0x3CDF040")]
	public void PlayDelayed(float seconds)
	{
	}

	[Token(Token = "0x6001156")]
	[Address(RVA = "0x3CDF060", Offset = "0x3CDF060", VA = "0x3CDF060")]
	public void Stop()
	{
	}

	[Token(Token = "0x6001157")]
	[Address(RVA = "0x3CDF080", Offset = "0x3CDF080", VA = "0x3CDF080")]
	public void Pause()
	{
	}

	[Token(Token = "0x6001158")]
	[Address(RVA = "0x3CDF0A0", Offset = "0x3CDF0A0", VA = "0x3CDF0A0")]
	public void Unpause()
	{
	}
}
