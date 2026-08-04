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

[Token(Token = "0x20002DD")]
[CompilerGenerated]
internal class CustomLogicAudioSourceBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x20002DE")]
	public static class Factory
	{
		[Token(Token = "0x6001307")]
		[Address(RVA = "0x3FE4AA0", Offset = "0x3FE4AA0", VA = "0x3FE4AA0")]
		public static CustomLogicAudioSourceBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20002DF")]
	public static class Bindings
	{
		[Token(Token = "0x4000EC5")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001308")]
		[Address(RVA = "0x3FE4B90", Offset = "0x3FE4B90", VA = "0x3FE4B90")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001309")]
		[Address(RVA = "0x3FE4FF0", Offset = "0x3FE4FF0", VA = "0x3FE4FF0")]
		public static CLPropertyBinding<CustomLogicAudioSourceBuiltin> __CreatePropertyBinding__Volume()
		{
			return null;
		}

		[Token(Token = "0x600130A")]
		[Address(RVA = "0x3FE50D0", Offset = "0x3FE50D0", VA = "0x3FE50D0")]
		public static CLPropertyBinding<CustomLogicAudioSourceBuiltin> __CreatePropertyBinding__Time()
		{
			return null;
		}

		[Token(Token = "0x600130B")]
		[Address(RVA = "0x3FE51B0", Offset = "0x3FE51B0", VA = "0x3FE51B0")]
		public static CLPropertyBinding<CustomLogicAudioSourceBuiltin> __CreatePropertyBinding__Pitch()
		{
			return null;
		}

		[Token(Token = "0x600130C")]
		[Address(RVA = "0x3FE5290", Offset = "0x3FE5290", VA = "0x3FE5290")]
		public static CLPropertyBinding<CustomLogicAudioSourceBuiltin> __CreatePropertyBinding__IsPlaying()
		{
			return null;
		}

		[Token(Token = "0x600130D")]
		[Address(RVA = "0x3FE5330", Offset = "0x3FE5330", VA = "0x3FE5330")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__Play()
		{
			return null;
		}

		[Token(Token = "0x600130E")]
		[Address(RVA = "0x3FE5480", Offset = "0x3FE5480", VA = "0x3FE5480")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__PlayDelayed()
		{
			return null;
		}

		[Token(Token = "0x600130F")]
		[Address(RVA = "0x3FE55D0", Offset = "0x3FE55D0", VA = "0x3FE55D0")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__Stop()
		{
			return null;
		}

		[Token(Token = "0x6001310")]
		[Address(RVA = "0x3FE5720", Offset = "0x3FE5720", VA = "0x3FE5720")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__Pause()
		{
			return null;
		}

		[Token(Token = "0x6001311")]
		[Address(RVA = "0x3FE5870", Offset = "0x3FE5870", VA = "0x3FE5870")]
		public static CLMethodBinding<CustomLogicAudioSourceBuiltin> __CreateMethodBinding__Unpause()
		{
			return null;
		}
	}

	[Token(Token = "0x4000EC3")]
	[FieldOffset(Offset = "0x38")]
	public AudioSource Value;

	[Token(Token = "0x4000EC4")]
	[FieldOffset(Offset = "0x40")]
	public BuiltinClassInstance OwnerBuiltin;

	[Token(Token = "0x1700024B")]
	public float Volume
	{
		[Token(Token = "0x60012F7")]
		[Address(RVA = "0x3FE48C0", Offset = "0x3FE48C0", VA = "0x3FE48C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60012F8")]
		[Address(RVA = "0x3FE48E0", Offset = "0x3FE48E0", VA = "0x3FE48E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700024C")]
	public float Time
	{
		[Token(Token = "0x60012F9")]
		[Address(RVA = "0x3FE4900", Offset = "0x3FE4900", VA = "0x3FE4900")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60012FA")]
		[Address(RVA = "0x3FE4920", Offset = "0x3FE4920", VA = "0x3FE4920")]
		set
		{
		}
	}

	[Token(Token = "0x1700024D")]
	public float Pitch
	{
		[Token(Token = "0x60012FB")]
		[Address(RVA = "0x3FE4940", Offset = "0x3FE4940", VA = "0x3FE4940")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60012FC")]
		[Address(RVA = "0x3FE4960", Offset = "0x3FE4960", VA = "0x3FE4960")]
		set
		{
		}
	}

	[Token(Token = "0x1700024E")]
	public bool IsPlaying
	{
		[Token(Token = "0x60012FD")]
		[Address(RVA = "0x3FE4980", Offset = "0x3FE4980", VA = "0x3FE4980")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700024F")]
	public override string ClassName
	{
		[Token(Token = "0x6001303")]
		[Address(RVA = "0x3FE4A40", Offset = "0x3FE4A40", VA = "0x3FE4A40", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000250")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001304")]
		[Address(RVA = "0x3FE4A70", Offset = "0x3FE4A70", VA = "0x3FE4A70", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000251")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001305")]
		[Address(RVA = "0x3FE4A80", Offset = "0x3FE4A80", VA = "0x3FE4A80", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000252")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001306")]
		[Address(RVA = "0x3FE4A90", Offset = "0x3FE4A90", VA = "0x3FE4A90", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60012F5")]
	[Address(RVA = "0x3FE4820", Offset = "0x3FE4820", VA = "0x3FE4820")]
	public CustomLogicAudioSourceBuiltin()
	{
	}

	[Token(Token = "0x60012F6")]
	[Address(RVA = "0x3FE4830", Offset = "0x3FE4830", VA = "0x3FE4830")]
	public CustomLogicAudioSourceBuiltin(BuiltinClassInstance owner, AudioSource audioSource)
	{
	}

	[Token(Token = "0x60012FE")]
	[Address(RVA = "0x3FE49A0", Offset = "0x3FE49A0", VA = "0x3FE49A0")]
	public void Play()
	{
	}

	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x3FE49C0", Offset = "0x3FE49C0", VA = "0x3FE49C0")]
	public void PlayDelayed(float seconds)
	{
	}

	[Token(Token = "0x6001300")]
	[Address(RVA = "0x3FE49E0", Offset = "0x3FE49E0", VA = "0x3FE49E0")]
	public void Stop()
	{
	}

	[Token(Token = "0x6001301")]
	[Address(RVA = "0x3FE4A00", Offset = "0x3FE4A00", VA = "0x3FE4A00")]
	public void Pause()
	{
	}

	[Token(Token = "0x6001302")]
	[Address(RVA = "0x3FE4A20", Offset = "0x3FE4A20", VA = "0x3FE4A20")]
	public void Unpause()
	{
	}
}
