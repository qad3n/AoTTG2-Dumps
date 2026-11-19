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
		[Address(RVA = "0x56AAA00", Offset = "0x56A9A00", VA = "0x56AAA00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000009")]
	public string UserId
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x56AAA10", Offset = "0x56A9A10", VA = "0x56AAA10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x56AAA20", Offset = "0x56A9A20", VA = "0x56AAA20")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public bool IsOnline
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x56AAA30", Offset = "0x56A9A30", VA = "0x56AAA30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x56AAA40", Offset = "0x56A9A40", VA = "0x56AAA40")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public string Room
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x56AAA50", Offset = "0x56A9A50", VA = "0x56AAA50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x56AAA60", Offset = "0x56A9A60", VA = "0x56AAA60")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public bool IsInRoom
	{
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x56AAA70", Offset = "0x56A9A70", VA = "0x56AAA70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x56AAA90", Offset = "0x56A9A90", VA = "0x56AAA90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x56AAB30", Offset = "0x56A9B30", VA = "0x56AAB30")]
	public FriendInfo()
	{
	}
}
