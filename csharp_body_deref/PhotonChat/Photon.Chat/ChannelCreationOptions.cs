using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Chat;

[Token(Token = "0x2000004")]
public class ChannelCreationOptions
{
	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x0")]
	public static ChannelCreationOptions Default;

	[Token(Token = "0x17000001")]
	public bool PublishSubscribers
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x3BBBCF0", Offset = "0x3BBBCF0", VA = "0x3BBBCF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x3BBBD00", Offset = "0x3BBBD00", VA = "0x3BBBD00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public int MaxSubscribers
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x3BBBD10", Offset = "0x3BBBD10", VA = "0x3BBBD10")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x3BBBD20", Offset = "0x3BBBD20", VA = "0x3BBBD20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x3BBBD30", Offset = "0x3BBBD30", VA = "0x3BBBD30")]
	public ChannelCreationOptions()
	{
	}
}
