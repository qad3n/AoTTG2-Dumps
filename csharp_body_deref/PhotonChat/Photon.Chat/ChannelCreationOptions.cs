// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Chat.ChannelCreationOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonChat/Code/ChannelCreationOptions.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Chat;

[Token(Token = "0x2000002")]
public class ChannelCreationOptions
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	public static ChannelCreationOptions Default;

	[Token(Token = "0x17000001")]
	public bool PublishSubscribers
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public int MaxSubscribers
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000004")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ChannelCreationOptions()
	{
	}
}
