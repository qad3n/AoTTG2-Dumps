using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Realtime;

namespace Anticheat;

[Token(Token = "0x2000777")]
internal class BallotBox
{
	[Token(Token = "0x2000778")]
	public readonly struct Result
	{
		[Token(Token = "0x2000779")]
		public enum Type
		{
			[Token(Token = "0x400240D")]
			Success,
			[Token(Token = "0x400240E")]
			InsufficientVotes,
			[Token(Token = "0x400240F")]
			ExceededConcurrentVotesLimit,
			[Token(Token = "0x4002410")]
			UnderCooldown,
			[Token(Token = "0x4002411")]
			MissingAuthority,
			[Token(Token = "0x4002412")]
			InvalidTarget
		}

		[Token(Token = "0x4002408")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly Type type;

		[Token(Token = "0x4002409")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		private readonly (int cast, int required) progress;

		[Token(Token = "0x400240A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly Player target;

		[Token(Token = "0x400240B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private readonly TimeSpan cooldown;

		[Token(Token = "0x17000DC7")]
		public bool IsSuccess
		{
			[Token(Token = "0x60047FC")]
			[Address(RVA = "0x40B3840", Offset = "0x40B3840", VA = "0x40B3840")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60047F5")]
		[Address(RVA = "0x40B4760", Offset = "0x40B4760", VA = "0x40B4760")]
		private Result(Type type, (int, int) progress, Player target, [Optional] TimeSpan cooldown)
		{
		}

		[Token(Token = "0x60047F6")]
		[Address(RVA = "0x40B4580", Offset = "0x40B4580", VA = "0x40B4580")]
		public static Result Success(int required, Player target)
		{
			return default(Result);
		}

		[Token(Token = "0x60047F7")]
		[Address(RVA = "0x40B4610", Offset = "0x40B4610", VA = "0x40B4610")]
		public static Result InsufficientVotes((int cast, int required) progress, Player target)
		{
			return default(Result);
		}

		[Token(Token = "0x60047F8")]
		[Address(RVA = "0x40B44D0", Offset = "0x40B44D0", VA = "0x40B44D0")]
		public static Result ExceededConcurrentVotesLimit((int cast, int required) progress)
		{
			return default(Result);
		}

		[Token(Token = "0x60047F9")]
		[Address(RVA = "0x40B4280", Offset = "0x40B4280", VA = "0x40B4280")]
		public static Result UnderCooldown((int cast, int required) progress, TimeSpan cooldown)
		{
			return default(Result);
		}

		[Token(Token = "0x60047FA")]
		[Address(RVA = "0x40B4110", Offset = "0x40B4110", VA = "0x40B4110")]
		public static Result MissingAuthority((int cast, int required) progress, Player target)
		{
			return default(Result);
		}

		[Token(Token = "0x60047FB")]
		[Address(RVA = "0x40B4150", Offset = "0x40B4150", VA = "0x40B4150")]
		public static Result InvalidTarget((int cast, int required) progress, Player target)
		{
			return default(Result);
		}

		[Token(Token = "0x60047FD")]
		[Address(RVA = "0x40B4790", Offset = "0x40B4790", VA = "0x40B4790", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x200077A")]
	private readonly struct Ballot
	{
		[Token(Token = "0x4002413")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly Player Voter;

		[Token(Token = "0x4002414")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly DateTime Timestamp;

		[Token(Token = "0x60047FE")]
		[Address(RVA = "0x40B4B50", Offset = "0x40B4B50", VA = "0x40B4B50")]
		public Ballot(Player player)
		{
		}

		[Token(Token = "0x60047FF")]
		[Address(RVA = "0x40B4BB0", Offset = "0x40B4BB0", VA = "0x40B4BB0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6004800")]
		[Address(RVA = "0x40B4BE0", Offset = "0x40B4BE0", VA = "0x40B4BE0", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6004801")]
		[Address(RVA = "0x40B4C60", Offset = "0x40B4C60", VA = "0x40B4C60", Slot = "3")]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x6004802")]
		[Address(RVA = "0x40B4510", Offset = "0x40B4510", VA = "0x40B4510")]
		public static implicit operator Ballot(Player voter)
		{
			return default(Ballot);
		}
	}

	[Token(Token = "0x4002402")]
	private const int ConcurrentVoteLimit = 1;

	[Token(Token = "0x4002403")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly List<Player> removals;

	[Token(Token = "0x4002404")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Dictionary<Player, HashSet<Ballot>> BallotsByTargetPlayer;

	[Token(Token = "0x4002405")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly Dictionary<Player, DateTime> LastBallotCastTimestampByPlayer;

	[Token(Token = "0x4002406")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly TimeSpan BallotTimeout;

	[Token(Token = "0x4002407")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly TimeSpan BallotCooldown;

	[Token(Token = "0x60047ED")]
	[Address(RVA = "0x40B3210", Offset = "0x40B3210", VA = "0x40B3210")]
	public Result TryCastBallot(Player voter, Player target)
	{
		return default(Result);
	}

	[Token(Token = "0x60047EE")]
	[Address(RVA = "0x40B38E0", Offset = "0x40B38E0", VA = "0x40B38E0")]
	public void ResetBallots(Player player)
	{
	}

	[Token(Token = "0x60047EF")]
	[Address(RVA = "0x40B3C10", Offset = "0x40B3C10", VA = "0x40B3C10")]
	private void RemoveOldBallots()
	{
	}

	[Token(Token = "0x60047F0")]
	[Address(RVA = "0x40B42C0", Offset = "0x40B42C0", VA = "0x40B42C0")]
	private int CountBallotsCast(Player player)
	{
		return default(int);
	}

	[Token(Token = "0x60047F1")]
	[Address(RVA = "0x40B4190", Offset = "0x40B4190", VA = "0x40B4190")]
	private bool HasCooldown(Player voter)
	{
		return default(bool);
	}

	[Token(Token = "0x60047F2")]
	[Address(RVA = "0x40B2930", Offset = "0x40B2930", VA = "0x40B2930")]
	public BallotBox()
	{
	}
}
