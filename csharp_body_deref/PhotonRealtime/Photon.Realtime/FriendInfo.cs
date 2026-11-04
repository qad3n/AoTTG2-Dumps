// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.FriendInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/FriendInfo.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000008")]
public class FriendInfo
{
	[Token(Token = "0x17000008")]
	[Obsolete("Use UserId.")]
	public string Name
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000009")]
	public string UserId
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600003B")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public bool IsOnline
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x111C9F0", Offset = "0x111AFF0", VA = "0x18111C9F0")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public string Room
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600003F")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public bool IsInRoom
	{
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x1D15B10", Offset = "0x1D14110", VA = "0x181D15B10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x1D15A60", Offset = "0x1D14060", VA = "0x181D15A60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public FriendInfo()
	{
	}
}
