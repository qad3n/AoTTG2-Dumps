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

[Token(Token = "0x2000086")]
public struct Flip
{
	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0x0")]
	public static Flip None;

	[Token(Token = "0x4000211")]
	[FieldOffset(Offset = "0x2")]
	public static Flip Vertical;

	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0x4")]
	public static Flip Horizontal;

	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x6")]
	public static Flip Both;

	[Token(Token = "0x170000C1")]
	public bool IsVertical
	{
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x3F2F4C0", Offset = "0x3F2F4C0", VA = "0x3F2F4C0")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x3F2F4D0", Offset = "0x3F2F4D0", VA = "0x3F2F4D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000C2")]
	public bool IsHorizontal
	{
		[Token(Token = "0x60002CD")]
		[Address(RVA = "0x3F2F4E0", Offset = "0x3F2F4E0", VA = "0x3F2F4E0")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x60002CE")]
		[Address(RVA = "0x3F2F4F0", Offset = "0x3F2F4F0", VA = "0x3F2F4F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x3F2F500", Offset = "0x3F2F500", VA = "0x3F2F500")]
	public static bool operator ==(Flip f1, Flip f2)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x3F2F580", Offset = "0x3F2F580", VA = "0x3F2F580")]
	public static bool operator !=(Flip f1, Flip f2)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x3F2F600", Offset = "0x3F2F600", VA = "0x3F2F600", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x3F2F660", Offset = "0x3F2F660", VA = "0x3F2F660", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x3F2F6B0", Offset = "0x3F2F6B0", VA = "0x3F2F6B0")]
	public static Flip operator *(Flip f1, Flip f2)
	{
		return default(Flip);
	}
}
