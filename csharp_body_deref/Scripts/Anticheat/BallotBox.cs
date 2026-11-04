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

[Token(Token = "0x2000966")]
internal class BallotBox
{
	[Token(Token = "0x2000967")]
	public readonly struct Result
	{
		[Token(Token = "0x2000968")]
		public enum Type
		{
			[Token(Token = "0x4002E7D")]
			Success,
			[Token(Token = "0x4002E7E")]
			InsufficientVotes,
			[Token(Token = "0x4002E7F")]
			ExceededConcurrentVotesLimit,
			[Token(Token = "0x4002E80")]
			UnderCooldown,
			[Token(Token = "0x4002E81")]
			MissingAuthority,
			[Token(Token = "0x4002E82")]
			InvalidTarget
		}

		[Token(Token = "0x4002E78")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly Type type;

		[Token(Token = "0x4002E79")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		private readonly (int cast, int required) progress;

		[Token(Token = "0x4002E7A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly Player target;

		[Token(Token = "0x4002E7B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private readonly TimeSpan cooldown;

		[Token(Token = "0x17000FC6")]
		public bool IsSuccess
		{
			[Token(Token = "0x6005768")]
			[Address(RVA = "0x2372150", Offset = "0x2370750", VA = "0x182372150")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6005761")]
		[Address(RVA = "0x2372120", Offset = "0x2370720", VA = "0x182372120")]
		private Result(Type type, (int, int) progress, Player target, [Optional] TimeSpan cooldown)
		{
		}

		[Token(Token = "0x6005762")]
		[Address(RVA = "0x2371CA0", Offset = "0x23702A0", VA = "0x182371CA0")]
		public static Result Success(int required, Player target)
		{
			return default(Result);
		}

		[Token(Token = "0x6005763")]
		[Address(RVA = "0x2371BB0", Offset = "0x23701B0", VA = "0x182371BB0")]
		public static Result InsufficientVotes((int cast, int required) progress, Player target)
		{
			return default(Result);
		}

		[Token(Token = "0x6005764")]
		[Address(RVA = "0x2371B60", Offset = "0x2370160", VA = "0x182371B60")]
		public static Result ExceededConcurrentVotesLimit((int cast, int required) progress)
		{
			return default(Result);
		}

		[Token(Token = "0x6005765")]
		[Address(RVA = "0x23720D0", Offset = "0x23706D0", VA = "0x1823720D0")]
		public static Result UnderCooldown((int cast, int required) progress, TimeSpan cooldown)
		{
			return default(Result);
		}

		[Token(Token = "0x6005766")]
		[Address(RVA = "0x2371C50", Offset = "0x2370250", VA = "0x182371C50")]
		public static Result MissingAuthority((int cast, int required) progress, Player target)
		{
			return default(Result);
		}

		[Token(Token = "0x6005767")]
		[Address(RVA = "0x2371C00", Offset = "0x2370200", VA = "0x182371C00")]
		public static Result InvalidTarget((int cast, int required) progress, Player target)
		{
			return default(Result);
		}

		[Token(Token = "0x6005769")]
		[Address(RVA = "0x2371D20", Offset = "0x2370320", VA = "0x182371D20", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x2000969")]
	private readonly struct Ballot
	{
		[Token(Token = "0x4002E83")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly Player Voter;

		[Token(Token = "0x4002E84")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly DateTime Timestamp;

		[Token(Token = "0x600576A")]
		[Address(RVA = "0x236A0A0", Offset = "0x23686A0", VA = "0x18236A0A0")]
		public Ballot(Player player)
		{
		}

		[Token(Token = "0x600576B")]
		[Address(RVA = "0x2369FF0", Offset = "0x23685F0", VA = "0x182369FF0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x600576C")]
		[Address(RVA = "0x2369F50", Offset = "0x2368550", VA = "0x182369F50", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x600576D")]
		[Address(RVA = "0x236A020", Offset = "0x2368620", VA = "0x18236A020", Slot = "3")]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x600576E")]
		[Address(RVA = "0x236A110", Offset = "0x2368710", VA = "0x18236A110")]
		public static implicit operator Ballot(Player voter)
		{
			return default(Ballot);
		}
	}

	[Token(Token = "0x4002E72")]
	private const int ConcurrentVoteLimit = 1;

	[Token(Token = "0x4002E73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly List<Player> removals;

	[Token(Token = "0x4002E74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Dictionary<Player, HashSet<Ballot>> BallotsByTargetPlayer;

	[Token(Token = "0x4002E75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly Dictionary<Player, DateTime> LastBallotCastTimestampByPlayer;

	[Token(Token = "0x4002E76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly TimeSpan BallotTimeout;

	[Token(Token = "0x4002E77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly TimeSpan BallotCooldown;

	[Token(Token = "0x6005759")]
	[Address(RVA = "0x2369730", Offset = "0x2367D30", VA = "0x182369730")]
	public Result TryCastBallot(Player voter, Player target)
	{
		return default(Result);
	}

	[Token(Token = "0x600575A")]
	[Address(RVA = "0x2369560", Offset = "0x2367B60", VA = "0x182369560")]
	public void ResetBallots(Player player)
	{
	}

	[Token(Token = "0x600575B")]
	[Address(RVA = "0x23691A0", Offset = "0x23677A0", VA = "0x1823691A0")]
	private void RemoveOldBallots()
	{
	}

	[Token(Token = "0x600575C")]
	[Address(RVA = "0x2368EC0", Offset = "0x23674C0", VA = "0x182368EC0")]
	private int CountBallotsCast(Player player)
	{
		return default(int);
	}

	[Token(Token = "0x600575D")]
	[Address(RVA = "0x23690B0", Offset = "0x23676B0", VA = "0x1823690B0")]
	private bool HasCooldown(Player voter)
	{
		return default(bool);
	}

	[Token(Token = "0x600575E")]
	[Address(RVA = "0x2369E40", Offset = "0x2368440", VA = "0x182369E40")]
	public BallotBox()
	{
	}
}
