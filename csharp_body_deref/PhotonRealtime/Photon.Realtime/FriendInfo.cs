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

[Token(Token = "0x200000A")]
public class FriendInfo
{
	[Token(Token = "0x17000008")]
	[Obsolete("Use UserId.")]
	public string Name
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x3EBDF70", Offset = "0x3EBDF70", VA = "0x3EBDF70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000009")]
	public string UserId
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x3EBDF80", Offset = "0x3EBDF80", VA = "0x3EBDF80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x3EBDF90", Offset = "0x3EBDF90", VA = "0x3EBDF90")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public bool IsOnline
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x3EBDFA0", Offset = "0x3EBDFA0", VA = "0x3EBDFA0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x3EBDFB0", Offset = "0x3EBDFB0", VA = "0x3EBDFB0")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public string Room
	{
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x3EBDFC0", Offset = "0x3EBDFC0", VA = "0x3EBDFC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x3EBDFD0", Offset = "0x3EBDFD0", VA = "0x3EBDFD0")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public bool IsInRoom
	{
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x3EBDFE0", Offset = "0x3EBDFE0", VA = "0x3EBDFE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x3EBE000", Offset = "0x3EBE000", VA = "0x3EBE000", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x3EBE0A0", Offset = "0x3EBE0A0", VA = "0x3EBE0A0")]
	public FriendInfo()
	{
	}
}
