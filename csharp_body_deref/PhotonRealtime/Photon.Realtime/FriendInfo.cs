using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200000A")]
public class FriendInfo
{
	[Token(Token = "0x17000008")]
	[Obsolete("Use UserId.")]
	public string Name
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x3BC8620", Offset = "0x3BC8620", VA = "0x3BC8620")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000009")]
	public string UserId
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x3BC8630", Offset = "0x3BC8630", VA = "0x3BC8630")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x3BC8640", Offset = "0x3BC8640", VA = "0x3BC8640")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public bool IsOnline
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x3BC8650", Offset = "0x3BC8650", VA = "0x3BC8650")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x3BC8660", Offset = "0x3BC8660", VA = "0x3BC8660")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public string Room
	{
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x3BC8670", Offset = "0x3BC8670", VA = "0x3BC8670")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x3BC8680", Offset = "0x3BC8680", VA = "0x3BC8680")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public bool IsInRoom
	{
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x3BC8690", Offset = "0x3BC8690", VA = "0x3BC8690")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x3BC86B0", Offset = "0x3BC86B0", VA = "0x3BC86B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x3BC8750", Offset = "0x3BC8750", VA = "0x3BC8750")]
	public FriendInfo()
	{
	}
}
