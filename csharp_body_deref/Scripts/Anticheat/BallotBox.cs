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

[Token(Token = "0x20007D9")]
internal class BallotBox
{
	[Token(Token = "0x20007DA")]
	public readonly struct Result
	{
		[Token(Token = "0x20007DB")]
		public enum Type
		{
			[Token(Token = "0x40025AB")]
			Success,
			[Token(Token = "0x40025AC")]
			InsufficientVotes,
			[Token(Token = "0x40025AD")]
			ExceededConcurrentVotesLimit,
			[Token(Token = "0x40025AE")]
			UnderCooldown,
			[Token(Token = "0x40025AF")]
			MissingAuthority,
			[Token(Token = "0x40025B0")]
			InvalidTarget
		}

		[Token(Token = "0x40025A6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly Type type;

		[Token(Token = "0x40025A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		private readonly (int cast, int required) progress;

		[Token(Token = "0x40025A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly Player target;

		[Token(Token = "0x40025A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private readonly TimeSpan cooldown;

		[Token(Token = "0x17000E63")]
		public bool IsSuccess
		{
			[Token(Token = "0x6004AEF")]
			[Address(RVA = "0x43D11C0", Offset = "0x43D11C0", VA = "0x43D11C0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6004AE8")]
		[Address(RVA = "0x43D20E0", Offset = "0x43D20E0", VA = "0x43D20E0")]
		private Result(Type type, (int, int) progress, Player target, [Optional] TimeSpan cooldown)
		{
		}

		[Token(Token = "0x6004AE9")]
		[Address(RVA = "0x43D1F00", Offset = "0x43D1F00", VA = "0x43D1F00")]
		public static Result Success(int required, Player target)
		{
			return default(Result);
		}

		[Token(Token = "0x6004AEA")]
		[Address(RVA = "0x43D1F90", Offset = "0x43D1F90", VA = "0x43D1F90")]
		public static Result InsufficientVotes((int cast, int required) progress, Player target)
		{
			return default(Result);
		}

		[Token(Token = "0x6004AEB")]
		[Address(RVA = "0x43D1E50", Offset = "0x43D1E50", VA = "0x43D1E50")]
		public static Result ExceededConcurrentVotesLimit((int cast, int required) progress)
		{
			return default(Result);
		}

		[Token(Token = "0x6004AEC")]
		[Address(RVA = "0x43D1C00", Offset = "0x43D1C00", VA = "0x43D1C00")]
		public static Result UnderCooldown((int cast, int required) progress, TimeSpan cooldown)
		{
			return default(Result);
		}

		[Token(Token = "0x6004AED")]
		[Address(RVA = "0x43D1A90", Offset = "0x43D1A90", VA = "0x43D1A90")]
		public static Result MissingAuthority((int cast, int required) progress, Player target)
		{
			return default(Result);
		}

		[Token(Token = "0x6004AEE")]
		[Address(RVA = "0x43D1AD0", Offset = "0x43D1AD0", VA = "0x43D1AD0")]
		public static Result InvalidTarget((int cast, int required) progress, Player target)
		{
			return default(Result);
		}

		[Token(Token = "0x6004AF0")]
		[Address(RVA = "0x43D2110", Offset = "0x43D2110", VA = "0x43D2110", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x20007DC")]
	private readonly struct Ballot
	{
		[Token(Token = "0x40025B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly Player Voter;

		[Token(Token = "0x40025B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly DateTime Timestamp;

		[Token(Token = "0x6004AF1")]
		[Address(RVA = "0x43D24D0", Offset = "0x43D24D0", VA = "0x43D24D0")]
		public Ballot(Player player)
		{
		}

		[Token(Token = "0x6004AF2")]
		[Address(RVA = "0x43D2530", Offset = "0x43D2530", VA = "0x43D2530", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6004AF3")]
		[Address(RVA = "0x43D2560", Offset = "0x43D2560", VA = "0x43D2560", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6004AF4")]
		[Address(RVA = "0x43D25E0", Offset = "0x43D25E0", VA = "0x43D25E0", Slot = "3")]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x6004AF5")]
		[Address(RVA = "0x43D1E90", Offset = "0x43D1E90", VA = "0x43D1E90")]
		public static implicit operator Ballot(Player voter)
		{
			return default(Ballot);
		}
	}

	[Token(Token = "0x40025A0")]
	private const int ConcurrentVoteLimit = 1;

	[Token(Token = "0x40025A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly List<Player> removals;

	[Token(Token = "0x40025A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Dictionary<Player, HashSet<Ballot>> BallotsByTargetPlayer;

	[Token(Token = "0x40025A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly Dictionary<Player, DateTime> LastBallotCastTimestampByPlayer;

	[Token(Token = "0x40025A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly TimeSpan BallotTimeout;

	[Token(Token = "0x40025A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly TimeSpan BallotCooldown;

	[Token(Token = "0x6004AE0")]
	[Address(RVA = "0x43D0B90", Offset = "0x43D0B90", VA = "0x43D0B90")]
	public Result TryCastBallot(Player voter, Player target)
	{
		return default(Result);
	}

	[Token(Token = "0x6004AE1")]
	[Address(RVA = "0x43D1260", Offset = "0x43D1260", VA = "0x43D1260")]
	public void ResetBallots(Player player)
	{
	}

	[Token(Token = "0x6004AE2")]
	[Address(RVA = "0x43D1590", Offset = "0x43D1590", VA = "0x43D1590")]
	private void RemoveOldBallots()
	{
	}

	[Token(Token = "0x6004AE3")]
	[Address(RVA = "0x43D1C40", Offset = "0x43D1C40", VA = "0x43D1C40")]
	private int CountBallotsCast(Player player)
	{
		return default(int);
	}

	[Token(Token = "0x6004AE4")]
	[Address(RVA = "0x43D1B10", Offset = "0x43D1B10", VA = "0x43D1B10")]
	private bool HasCooldown(Player voter)
	{
		return default(bool);
	}

	[Token(Token = "0x6004AE5")]
	[Address(RVA = "0x43D02B0", Offset = "0x43D02B0", VA = "0x43D02B0")]
	public BallotBox()
	{
	}
}
