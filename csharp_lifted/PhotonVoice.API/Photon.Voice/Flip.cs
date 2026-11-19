// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Flip
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceCodec.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000084")]
public struct Flip
{
	[Token(Token = "0x400020B")]
	[FieldOffset(Offset = "0x0")]
	public static Flip None;

	[Token(Token = "0x400020C")]
	[FieldOffset(Offset = "0x2")]
	public static Flip Vertical;

	[Token(Token = "0x400020D")]
	[FieldOffset(Offset = "0x4")]
	public static Flip Horizontal;

	[Token(Token = "0x400020E")]
	[FieldOffset(Offset = "0x6")]
	public static Flip Both;

	[Token(Token = "0x170000C1")]
	public bool IsVertical
	{
		[Token(Token = "0x60002C9")]
		[Address(RVA = "0x5719850", Offset = "0x5718850", VA = "0x5719850")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x5719860", Offset = "0x5718860", VA = "0x5719860")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000C2")]
	public bool IsHorizontal
	{
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x5719870", Offset = "0x5718870", VA = "0x5719870")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x5719880", Offset = "0x5718880", VA = "0x5719880")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x5719890", Offset = "0x5718890", VA = "0x5719890")]
	public static bool operator ==(Flip f1, Flip f2)
	{
		return default(bool);
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x5719910", Offset = "0x5718910", VA = "0x5719910")]
	public static bool operator !=(Flip f1, Flip f2)
	{
		return default(bool);
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x5719990", Offset = "0x5718990", VA = "0x5719990", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x57199F0", Offset = "0x57189F0", VA = "0x57199F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x5719A40", Offset = "0x5718A40", VA = "0x5719A40")]
	public static Flip operator *(Flip f1, Flip f2)
	{
		return default(Flip);
	}
}
