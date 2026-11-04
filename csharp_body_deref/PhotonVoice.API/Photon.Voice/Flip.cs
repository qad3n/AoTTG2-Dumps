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
		[Address(RVA = "0xAE2930", Offset = "0xAE0F30", VA = "0x180AE2930")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x60002CA")]
		[Address(RVA = "0xFA0680", Offset = "0xF9EC80", VA = "0x180FA0680")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000C2")]
	public bool IsHorizontal
	{
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0xADC3E0", Offset = "0xADA9E0", VA = "0x180ADC3E0")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x1D69F20", Offset = "0x1D68520", VA = "0x181D69F20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x1D69D80", Offset = "0x1D68380", VA = "0x181D69D80")]
	public static bool operator ==(Flip f1, Flip f2)
	{
		return default(bool);
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x1D69E10", Offset = "0x1D68410", VA = "0x181D69E10")]
	public static bool operator !=(Flip f1, Flip f2)
	{
		return default(bool);
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x1D69BD0", Offset = "0x1D681D0", VA = "0x181D69BD0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x1D69C30", Offset = "0x1D68230", VA = "0x181D69C30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x1D69EA0", Offset = "0x1D684A0", VA = "0x181D69EA0")]
	public static Flip operator *(Flip f1, Flip f2)
	{
		return default(Flip);
	}
}
