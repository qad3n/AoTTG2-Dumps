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
		[Address(RVA = "0x569E7B0", Offset = "0x569D7B0", VA = "0x569E7B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x569E7C0", Offset = "0x569D7C0", VA = "0x569E7C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public int MaxSubscribers
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x569E7D0", Offset = "0x569D7D0", VA = "0x569E7D0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x569E7E0", Offset = "0x569D7E0", VA = "0x569E7E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x569E7F0", Offset = "0x569D7F0", VA = "0x569E7F0")]
	public ChannelCreationOptions()
	{
	}
}
