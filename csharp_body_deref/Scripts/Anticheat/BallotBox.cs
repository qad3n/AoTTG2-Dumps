// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.BallotBox
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/BallotBox.c
// Prior real C# source (older reference): Assets/Scripts/Anticheat/AnticheatManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Realtime;

namespace Anticheat;

[Token(Token = "0x20009CD")]
internal class BallotBox
{
	[Token(Token = "0x20009CE")]
	public readonly struct Result
	{
		[Token(Token = "0x20009CF")]
		public enum Type
		{
			[Token(Token = "0x400312B")]
			Success,
			[Token(Token = "0x400312C")]
			InsufficientVotes,
			[Token(Token = "0x400312D")]
			ExceededConcurrentVotesLimit,
			[Token(Token = "0x400312E")]
			UnderCooldown,
			[Token(Token = "0x400312F")]
			MissingAuthority,
			[Token(Token = "0x4003130")]
			InvalidTarget
		}

		[Token(Token = "0x4003126")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly Type type;

		[Token(Token = "0x4003127")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		private readonly (int cast, int required) progress;

		[Token(Token = "0x4003128")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly Player target;

		[Token(Token = "0x4003129")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private readonly TimeSpan cooldown;

		[Token(Token = "0x17000FA5")]
		public bool IsSuccess
		{
			[Token(Token = "0x6005AC0")]
			[Address(RVA = "0x5D2CF30", Offset = "0x5D2BF30", VA = "0x5D2CF30")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6005AB9")]
		[Address(RVA = "0x5D2DD90", Offset = "0x5D2CD90", VA = "0x5D2DD90")]
		private Result(Type type, (int, int) progress, Player target, [Optional] TimeSpan cooldown)
		{
		}

		[Token(Token = "0x6005ABA")]
		[Address(RVA = "0x5D2DBB0", Offset = "0x5D2CBB0", VA = "0x5D2DBB0")]
		public static Result Success(int required, Player target)
		{
			return default(Result);
		}

		[Token(Token = "0x6005ABB")]
		[Address(RVA = "0x5D2DC40", Offset = "0x5D2CC40", VA = "0x5D2DC40")]
		public static Result InsufficientVotes((int cast, int required) progress, Player target)
		{
			return default(Result);
		}

		[Token(Token = "0x6005ABC")]
		[Address(RVA = "0x5D2DB00", Offset = "0x5D2CB00", VA = "0x5D2DB00")]
		public static Result ExceededConcurrentVotesLimit((int cast, int required) progress)
		{
			return default(Result);
		}

		[Token(Token = "0x6005ABD")]
		[Address(RVA = "0x5D2D8C0", Offset = "0x5D2C8C0", VA = "0x5D2D8C0")]
		public static Result UnderCooldown((int cast, int required) progress, TimeSpan cooldown)
		{
			return default(Result);
		}

		[Token(Token = "0x6005ABE")]
		[Address(RVA = "0x5D2D750", Offset = "0x5D2C750", VA = "0x5D2D750")]
		public static Result MissingAuthority((int cast, int required) progress, Player target)
		{
			return default(Result);
		}

		[Token(Token = "0x6005ABF")]
		[Address(RVA = "0x5D2D790", Offset = "0x5D2C790", VA = "0x5D2D790")]
		public static Result InvalidTarget((int cast, int required) progress, Player target)
		{
			return default(Result);
		}

		[Token(Token = "0x6005AC1")]
		[Address(RVA = "0x5D2DDC0", Offset = "0x5D2CDC0", VA = "0x5D2DDC0", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x20009D0")]
	private readonly struct Ballot
	{
		[Token(Token = "0x4003131")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly Player Voter;

		[Token(Token = "0x4003132")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly DateTime Timestamp;

		[Token(Token = "0x6005AC2")]
		[Address(RVA = "0x5D2E180", Offset = "0x5D2D180", VA = "0x5D2E180")]
		public Ballot(Player player)
		{
		}

		[Token(Token = "0x6005AC3")]
		[Address(RVA = "0x5D2E1E0", Offset = "0x5D2D1E0", VA = "0x5D2E1E0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6005AC4")]
		[Address(RVA = "0x5D2E210", Offset = "0x5D2D210", VA = "0x5D2E210", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6005AC5")]
		[Address(RVA = "0x5D2E290", Offset = "0x5D2D290", VA = "0x5D2E290", Slot = "3")]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x6005AC6")]
		[Address(RVA = "0x5D2DB40", Offset = "0x5D2CB40", VA = "0x5D2DB40")]
		public static implicit operator Ballot(Player voter)
		{
			return default(Ballot);
		}
	}

	[Token(Token = "0x4003120")]
	private const int ConcurrentVoteLimit = 1;

	[Token(Token = "0x4003121")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly List<Player> removals;

	[Token(Token = "0x4003122")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Dictionary<Player, HashSet<Ballot>> BallotsByTargetPlayer;

	[Token(Token = "0x4003123")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly Dictionary<Player, DateTime> LastBallotCastTimestampByPlayer;

	[Token(Token = "0x4003124")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly TimeSpan BallotTimeout;

	[Token(Token = "0x4003125")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly TimeSpan BallotCooldown;

	[Token(Token = "0x6005AB1")]
	[Address(RVA = "0x5D2C8F0", Offset = "0x5D2B8F0", VA = "0x5D2C8F0")]
	public Result TryCastBallot(Player voter, Player target)
	{
		return default(Result);
	}

	[Token(Token = "0x6005AB2")]
	[Address(RVA = "0x5D2CFD0", Offset = "0x5D2BFD0", VA = "0x5D2CFD0")]
	public void ResetBallots(Player player)
	{
	}

	[Token(Token = "0x6005AB3")]
	[Address(RVA = "0x5D2D2F0", Offset = "0x5D2C2F0", VA = "0x5D2D2F0")]
	private void RemoveOldBallots()
	{
	}

	[Token(Token = "0x6005AB4")]
	[Address(RVA = "0x5D2D900", Offset = "0x5D2C900", VA = "0x5D2D900")]
	private int CountBallotsCast(Player player)
	{
		return default(int);
	}

	[Token(Token = "0x6005AB5")]
	[Address(RVA = "0x5D2D7D0", Offset = "0x5D2C7D0", VA = "0x5D2D7D0")]
	private bool HasCooldown(Player voter)
	{
		return default(bool);
	}

	[Token(Token = "0x6005AB6")]
	[Address(RVA = "0x5D2BFD0", Offset = "0x5D2AFD0", VA = "0x5D2BFD0")]
	public BallotBox()
	{
	}
}
