// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.BallotBox
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/BallotBox.c
// Prior real C# source (older reference): Assets/Scripts/Anticheat/AnticheatManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
				// Lifted from source/cpp/Anticheat/BallotBox.c (Anticheat.BallotBox.Result$$get_IsSuccess): clean
				return this.type == 0;
			}
		}

		[Token(Token = "0x6005AB9")]
		[Address(RVA = "0x5D2DD90", Offset = "0x5D2CD90", VA = "0x5D2DD90")]
		private Result(Type type, (int, int) progress, Player target, [Optional] TimeSpan cooldown)
		{
			// Lifted from source/cpp/Anticheat/BallotBox.c (Anticheat.BallotBox.Result$$.ctor): clean
			this.type = type;
			this.progress = progress;
			this.target = target;
			this.cooldown._ticks = (int64_t)cooldown._ticks;
			return;
		}

		[Token(Token = "0x6005ABA")]
		[Address(RVA = "0x5D2DBB0", Offset = "0x5D2CBB0", VA = "0x5D2DBB0")]
		public static Result Success(int required, Player target)
		{
			// Lifted from source/cpp/Anticheat/BallotBox.c (Anticheat.BallotBox.Result$$Success): 1 lines keep C-only constructs
			System_ValueTuple_int__int__Fields SStack_20;

			SStack_20.Item1 = 0;
			SStack_20.Item2 = 0;
			SStack_20 = new ValueTuple<int, int>(required, required);
			*(ulong)&__return_storage_ptr__.progress.Item2 = 0;
			__return_storage_ptr__.target = null;
			__return_storage_ptr__.cooldown._ticks = 0;
			__return_storage_ptr__.type = 0;
			__return_storage_ptr__.progress = SStack_20;
			__return_storage_ptr__.target = target;
			__return_storage_ptr__.cooldown._ticks = 0;
			return __return_storage_ptr__;
		}

		[Token(Token = "0x6005ABB")]
		[Address(RVA = "0x5D2DC40", Offset = "0x5D2CC40", VA = "0x5D2DC40")]
		public static Result InsufficientVotes((int cast, int required) progress, Player target)
		{
			// Lifted from source/cpp/Anticheat/BallotBox.c (Anticheat.BallotBox.Result$$InsufficientVotes): 1 lines keep C-only constructs
			*(ulong)&__return_storage_ptr__.progress.Item2 = 0;
			__return_storage_ptr__.target = null;
			__return_storage_ptr__.cooldown._ticks = 0;
			__return_storage_ptr__.type = 1;
			__return_storage_ptr__.progress = progress;
			__return_storage_ptr__.target = target;
			__return_storage_ptr__.cooldown._ticks = 0;
			return __return_storage_ptr__;
		}

		[Token(Token = "0x6005ABC")]
		[Address(RVA = "0x5D2DB00", Offset = "0x5D2CB00", VA = "0x5D2DB00")]
		public static Result ExceededConcurrentVotesLimit((int cast, int required) progress)
		{
			// Lifted from source/cpp/Anticheat/BallotBox.c (Anticheat.BallotBox.Result$$ExceededConcurrentVotesLimit): 1 lines keep C-only constructs
			*(ulong)&__return_storage_ptr__.progress.Item2 = 0;
			__return_storage_ptr__.target = null;
			__return_storage_ptr__.cooldown._ticks = 0;
			__return_storage_ptr__.type = 2;
			__return_storage_ptr__.progress = progress;
			__return_storage_ptr__.cooldown._ticks = 0;
			return __return_storage_ptr__;
		}

		[Token(Token = "0x6005ABD")]
		[Address(RVA = "0x5D2D8C0", Offset = "0x5D2C8C0", VA = "0x5D2D8C0")]
		public static Result UnderCooldown((int cast, int required) progress, TimeSpan cooldown)
		{
			// Lifted from source/cpp/Anticheat/BallotBox.c (Anticheat.BallotBox.Result$$UnderCooldown): 1 lines keep C-only constructs
			*(ulong)&__return_storage_ptr__.progress.Item2 = 0;
			__return_storage_ptr__.target = null;
			__return_storage_ptr__.cooldown._ticks = 0;
			__return_storage_ptr__.type = 3;
			__return_storage_ptr__.progress = progress;
			__return_storage_ptr__.cooldown._ticks = (int64_t)cooldown._ticks;
			return __return_storage_ptr__;
		}

		[Token(Token = "0x6005ABE")]
		[Address(RVA = "0x5D2D750", Offset = "0x5D2C750", VA = "0x5D2D750")]
		public static Result MissingAuthority((int cast, int required) progress, Player target)
		{
			// Lifted from source/cpp/Anticheat/BallotBox.c (Anticheat.BallotBox.Result$$MissingAuthority): 1 lines keep C-only constructs
			*(ulong)&__return_storage_ptr__.progress.Item2 = 0;
			__return_storage_ptr__.target = null;
			__return_storage_ptr__.cooldown._ticks = 0;
			__return_storage_ptr__.type = 4;
			__return_storage_ptr__.progress = progress;
			__return_storage_ptr__.target = target;
			__return_storage_ptr__.cooldown._ticks = 0;
			return __return_storage_ptr__;
		}

		[Token(Token = "0x6005ABF")]
		[Address(RVA = "0x5D2D790", Offset = "0x5D2C790", VA = "0x5D2D790")]
		public static Result InvalidTarget((int cast, int required) progress, Player target)
		{
			// Lifted from source/cpp/Anticheat/BallotBox.c (Anticheat.BallotBox.Result$$InvalidTarget): 1 lines keep C-only constructs
			*(ulong)&__return_storage_ptr__.progress.Item2 = 0;
			__return_storage_ptr__.target = null;
			__return_storage_ptr__.cooldown._ticks = 0;
			__return_storage_ptr__.type = 5;
			__return_storage_ptr__.progress = progress;
			__return_storage_ptr__.target = target;
			__return_storage_ptr__.cooldown._ticks = 0;
			return __return_storage_ptr__;
		}

		[Token(Token = "0x6005AC1")]
		[Address(RVA = "0x5D2DDC0", Offset = "0x5D2CDC0", VA = "0x5D2DDC0", Slot = "3")]
		public override string ToString()
		{
			// Lifted from source/cpp/Anticheat/BallotBox.c (Anticheat.BallotBox.Result$$ToString): 5 lines keep C-only constructs
			Player pPVar1;
			object pIVar2;
			object pIVar3;
			object arg2;
			String str1;
			String pSVar4;
			String* ppSVar5;
			int color;
			int local_34;
			double local_30;
			int local_24;

			switch(this.type) {
			case 0:
			case 1:
				pPVar1 = this.target;
				pSVar4 = PhotonExtensions.GetStringProperty(pPVar1, PlayerProperty.Name, "");
				local_30 = (double)CONCAT44(local_30._4_4_, this.progress.Item1);
				pIVar2 = (object)local_30;
				local_34 = this.progress.Item2;
				pIVar3 = (object)local_34;
				pSVar4 = String.Format("Voted to kick {0} ({1}/{2}).", (object)pSVar4, pIVar2, pIVar3);
				color = 3;
				goto label_05e2e07c;
			case 2:
				local_30 = (double)CONCAT44(local_30._4_4_, 1);
				pIVar2 = (object)local_30;
				local_34 = this.progress.Item1;
				pIVar3 = (object)local_34;
				local_24 = this.progress.Item2;
				arg2 = (object)local_24;
				ppSVar5 = &"Cannot vote for more than {0} players at a time ({1}/{2}).";
				break;
			case 3:
				local_30 = (this.cooldown).TotalMinutes;
				pIVar2 = (object)local_30;
				local_34 = this.progress.Item1;
				pIVar3 = (object)local_34;
				local_24 = this.progress.Item2;
				arg2 = (object)local_24;
				ppSVar5 = &"Voting is limited to once every {0:N1} minutes ({1}/{2}).";
				break;
			case 4:
				pPVar1 = this.target;
				str1 = PhotonExtensions.GetStringProperty(pPVar1, PlayerProperty.Name, "");
				ppSVar5 = &": missing authority.";
				pSVar4 = "Cannot ";
				goto label_05e2e12f;
			case 5:
				pPVar1 = this.target;
				str1 = PhotonExtensions.GetStringProperty(pPVar1, PlayerProperty.Name, "");
				ppSVar5 = &": invalid target.";
				pSVar4 = "Cannot kick ";
		label_05e2e12f: ;
				pSVar4 = String.Concat(pSVar4, str1, *ppSVar5);
		label_05e2e15a: ;
				pSVar4 = ChatManager.GetColorString(pSVar4, 4, false);
				return pSVar4;
			default: ;
				pSVar4 = "Unknown error.";
				goto label_05e2e15a;
			}
			pSVar4 = String.Format(*ppSVar5, pIVar2, pIVar3, arg2);
			color = 4;
		label_05e2e07c: ;
			pSVar4 = ChatManager.GetColorString(pSVar4, color, false);
			return pSVar4;
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
			// Lifted from source/cpp/Anticheat/BallotBox.c (Anticheat.BallotBox.Ballot$$.ctor): clean
			DateTime SVar1;

			this.Voter = player;
			SVar1 = DateTime.UtcNow;
			this.Timestamp._dateData = (uint64_t)SVar1._dateData;
			return;
		}

		[Token(Token = "0x6005AC3")]
		[Address(RVA = "0x5D2E1E0", Offset = "0x5D2D1E0", VA = "0x5D2E1E0", Slot = "2")]
		public override int GetHashCode()
		{
			// Lifted from source/cpp/Anticheat/BallotBox.c (Anticheat.BallotBox.Ballot$$GetHashCode): clean
			Player pPVar1;
			int iVar2;

			pPVar1 = this.Voter;
			if (pPVar1 == null) {
				throw new NullReferenceException();
			}
			return iVar2;
		}

		[Token(Token = "0x6005AC4")]
		[Address(RVA = "0x5D2E210", Offset = "0x5D2D210", VA = "0x5D2E210", Slot = "0")]
		public override bool Equals(object obj)
		{
			// Lifted from source/cpp/Anticheat/BallotBox.c (Anticheat.BallotBox.Ballot$$Equals): 2 lines keep C-only constructs
			Player pPVar1;
			bool bVar2;
			ulong puVar3;

			if ((obj == null) || (obj.klass != typeof(BallotBox.Ballot))) {
				return false;
			}
			puVar3 = il2cpp_vm_Object_Unbox(obj);
			pPVar1 = this.Voter;
			if (pPVar1 == null) {
				throw new NullReferenceException();
			}
			bVar2 = pPVar1.Equals((object)*puVar3);
			return bVar2;
		}

		[Token(Token = "0x6005AC5")]
		[Address(RVA = "0x5D2E290", Offset = "0x5D2D290", VA = "0x5D2E290", Slot = "3")]
		public override string ToString()
		{
			// Lifted from source/cpp/Anticheat/BallotBox.c (Anticheat.BallotBox.Ballot$$ToString): clean
			Player arg0;
			object arg1;
			String pSVar1;
			DateTime SStack_18;

			arg0 = this.Voter;
			SStack_18._dateData = this.Timestamp._dateData;
			arg1 = (object)SStack_18;
			pSVar1 = String.Format("{0} ({1})", (object)arg0, arg1);
			return pSVar1;
		}

		[Token(Token = "0x6005AC6")]
		[Address(RVA = "0x5D2DB40", Offset = "0x5D2CB40", VA = "0x5D2DB40")]
		public static implicit operator Ballot(Player voter)
		{
			// Lifted from source/cpp/Anticheat/BallotBox.c (Anticheat.BallotBox.Ballot$$op_Implicit): clean
			DateTime SVar1;
			BallotBox.Ballot AVar2;
			Player local_18;

			local_18 = voter;
			SVar1 = DateTime.UtcNow;
			AVar2.Timestamp._dateData = SVar1._dateData;
			AVar2.Voter = local_18;
			return (BallotBox.Ballot)AVar2;
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
		// Lifted from source/cpp/Anticheat/BallotBox.c (Anticheat.BallotBox$$TryCastBallot): 7 lines keep C-only constructs
		int iVar1;
		Dictionary<object, object> pSVar2;
		long iVar3;
		Dictionary<Player, DateTime> __this_00;
		BallotBox.Result pAVar4;
		Player player;
		bool bVar5;
		bool bVar6;
		int iVar7;
		int iVar8;
		Room __this_01;
		Player pPVar9;
		DateTime SVar10;
		HashSet<BallotBox.Ballot> pSVar11;
		int iVar12;
		Player key;
		BallotBox.Ballot item;
		BallotBox.Ballot item_00;
		System_ValueTuple_int__int__Fields local_80;
		uint local_78;
		int iStack_74;
		int iStack_70;
		uint uStack_6c;
		Player pPStack_68;
		long local_60;
		int local_54;
		BallotBox.Result local_50;
		HashSet<BallotBox.Ballot> local_48;
		Player local_40;
		Player local_38;

		local_38 = voter;
		local_48 = null;
		this.RemoveOldBallots();
		__this_01 = PhotonNetwork.CurrentRoom;
		if (__this_01 == null) {
	label_05e2cf1c: ;
			throw new NullReferenceException();
		}
		iVar12 = 0;
		local_50 = __return_storage_ptr__;
		iVar7 = __this_01.PlayerCount;
		pSVar2 = (Dictionary<object, object>)this.BallotsByTargetPlayer;
		if (pSVar2 == null) goto label_05e2cf1c;
		local_40 = target;
		bVar5 = pSVar2.TryGetValue((object)target, (object*)&local_48);
		if (local_48 != null) {
			iVar12 = local_48._count;
		}
		iVar1 = iVar7 / 2 + 1;
		bVar6 = PhotonNetwork.IsMasterClient;
		if (bVar6) {
			local_54 = iVar1;
			pPVar9 = PhotonNetwork.LocalPlayer;
			player = local_38;
			key = local_40;
			if ((local_40 == local_38) || (pPVar9 == local_40)) {
				local_80.Item1 = 0;
				local_80.Item2 = 0;
				local_80 = new ValueTuple<int, int>(iVar12, local_54);
				local_78 = 5;
			}
			else {
				bVar6 = this.HasCooldown(local_38);
				if (bVar6) {
					local_80.Item1 = 0;
					local_80.Item2 = 0;
					local_80 = new ValueTuple<int, int>(iVar12, local_54);
					iVar3 = this.BallotCooldown._ticks;
					uStack_6c = 0;
					pPStack_68 = null;
					local_60 = 0;
					local_78 = 3;
					iStack_74 = local_80.Item1;
					iStack_70 = local_80.Item2;
					local_60 = iVar3;
					goto label_05e2cc25;
				}
				iVar8 = this.CountBallotsCast(player);
				pSVar11 = local_48;
				if (0 < iVar8) {
					local_80.Item1 = 0;
					local_80.Item2 = 0;
					local_80 = new ValueTuple<int, int>(iVar12, local_54);
					pPStack_68 = null;
					local_78 = 2;
					iStack_74 = local_80.Item1;
					iStack_70 = local_80.Item2;
					goto label_05e2cc17;
				}
				local_78 = SUB84(player, 0);
				iStack_74 = (int32_t)((ulong)player >> 0x20);
				if (bVar5) {
					iStack_70 = 0;
					uStack_6c = 0;
					key = local_40;
					SVar10 = DateTime.UtcNow;
					if (pSVar11 == null) goto label_05e2cf1c;
					item.Voter._4_4_ = iStack_74;
					item.Voter._0_4_ = local_78;
					item.Timestamp._dateData = SVar10._dateData;
					pSVar11.Add(item);
				}
				else {
					pSVar2 = (Dictionary<object, object>)this.BallotsByTargetPlayer;
					pSVar11 = new HashSet<BallotBox.Ballot>();
					iStack_70 = 0;
					uStack_6c = 0;
					SVar10 = DateTime.UtcNow;
					if ((pSVar11 == null) ||(item_00.Voter._4_4_ = iStack_74, item_00.Voter._0_4_ = local_78, item_00.Timestamp._dateData = SVar10._dateData, pSVar11.Add(item_00), key = local_40, local_48 = pSVar11, pSVar2 == null)) goto label_05e2cf1c;
					pSVar2.Add((object)local_40, (object)pSVar11);
				}
				__this_00 = this.LastBallotCastTimestampByPlayer;
				SVar10 = DateTime.UtcNow;
				if ((__this_00 == null) ||(__this_00.TryAdd((object)player, SVar10), pAVar4 = local_50, local_48 == null)) goto label_05e2cf1c;
				iVar12 = local_48._count;
				if (iVar7 / 2 < iVar12) {
					pSVar2 = (Dictionary<object, object>)this.BallotsByTargetPlayer;
					if (pSVar2 != null) {
						pSVar2.Remove((object)key);
						iVar1 = local_54;
						local_80.Item1 = 0;
						local_80.Item2 = 0;
						local_80 = new ValueTuple<int, int>(iVar1, iVar1);
						uStack_6c = 0;
						local_60 = 0;
						local_78 = 0;
						iStack_74 = local_80.Item1;
						iStack_70 = local_80.Item2;
						pPStack_68 = key;
						pAVar4.target = pPStack_68;
						pAVar4.cooldown._ticks = 0;
						pAVar4.type = local_78;
						pAVar4.progress.Item1 = iStack_74;
						*(ulong)&pAVar4.progress.Item2 = CONCAT44(uStack_6c, iStack_70);
						return pAVar4;
					}
					goto label_05e2cf1c;
				}
				local_80.Item1 = 0;
				local_80.Item2 = 0;
				local_80 = new ValueTuple<int, int>(iVar12, local_54);
				local_78 = 1;
			}
			iStack_74 = local_80.Item1;
			iStack_70 = local_80.Item2;
			pPStack_68 = key;
		}
		else {
			local_80.Item1 = 0;
			local_80.Item2 = 0;
			local_80 = new ValueTuple<int, int>(iVar12, iVar1);
			local_78 = 4;
			iStack_74 = local_80.Item1;
			iStack_70 = local_80.Item2;
			pPStack_68 = local_40;
		}
	label_05e2cc17: ;
		uStack_6c = 0;
		local_60 = 0;
		local_60 = 0;
	label_05e2cc25: ;
		local_50.type = local_78;
		local_50.progress.Item1 = iStack_74;
		*(ulong)&local_50.progress.Item2 = CONCAT44(uStack_6c, iStack_70);
		local_50.target = pPStack_68;
		local_50.cooldown._ticks = local_60;
		return local_50;
	}

	[Token(Token = "0x6005AB2")]
	[Address(RVA = "0x5D2CFD0", Offset = "0x5D2BFD0", VA = "0x5D2CFD0")]
	public void ResetBallots(Player player)
	{
		// Lifted from source/cpp/Anticheat/BallotBox.c (Anticheat.BallotBox$$ResetBallots): 3 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		object __this_01;
		bool bVar1;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_02;
		DateTime SVar2;
		BallotBox.Ballot item;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o SStack_68;
		byte puStack_48;
		Player pPStack_40;

		SStack_68._dictionary = null;
		SStack_68._index = 0;
		SStack_68._version = 0;
		SStack_68._currentValue = null;
		__this_00 = (Dictionary<object, object>)this.BallotsByTargetPlayer;
		if (__this_00 != null) {
			__this_02 = __this_00.Values;
			if (__this_02 != null) {
				SStack_68 = __this_02.GetEnumerator();
				puStack_48 = (byte)&SStack_68;
				while(true) {
					bVar1 = SStack_68.MoveNext();
					__this_01 = SStack_68._currentValue;
					if (!bVar1) {
						SStack_68.Dispose();
						return;
					}
					pPStack_40 = player;
					SVar2 = DateTime.UtcNow;
					if ((HashSet<BallotBox.Ballot>)__this_01 ==null) break;
					item.Timestamp._dateData = SVar2._dateData;
					item.Voter = pPStack_40;
					__this_01.Remove(item);
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005AB3")]
	[Address(RVA = "0x5D2D2F0", Offset = "0x5D2C2F0", VA = "0x5D2D2F0")]
	private void RemoveOldBallots()
	{
		// Lifted from source/cpp/Anticheat/BallotBox.c (Anticheat.BallotBox$$RemoveOldBallots): 15 lines keep C-only constructs
		int piVar1;
		int length;
		uint uVar2;
		List<Player> pSVar3;
		Dictionary<object, object> pSVar4;
		Player[] pPVar5;
		Player item;
		HashSet<BallotBox.Ballot> __this_00;
		bool bVar7;
		Predicate<T> match;
		byte[] local_a0 = new byte[16];
		Player local_90;
		HashSet<BallotBox.Ballot> pSStack_88;
		int local_80;
		uint uStack_7c;
		byte[] local_78 = new byte[8];
		Player local_68;
		HashSet<BallotBox.Ballot> pSStack_60;
		ulong local_58;
		System_Collections_Generic_List_Enumerator_T__o local_48;

		local_68 = null;
		pSStack_60 = null;
		local_78 = (byte[])0x0;
		local_58._0_4_ = 0;
		local_58._4_4_ = 0;
		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		pSVar3 = BallotBox.removals;
		if (pSVar3 != null) {
			piVar1 = &pSVar3._version;
			*piVar1 = *piVar1 + 1;
			length = pSVar3._size;
			pSVar3._size = 0;
			if (0 < length) {
				Array.Clear((Array)pSVar3._items, 0, length);
			}
			pSVar4 = (Dictionary<object, object>)this.BallotsByTargetPlayer ;
			if (pSVar4 != null) {
				local_a0.GetEnumerator(pSVar4);
				local_58._0_4_ = local_80;
				local_58._4_4_ = uStack_7c;
				local_68 = local_90;
				pSStack_60 = pSStack_88;
				local_78 = (byte[])local_a0._0_8_;
				local_a0._0_8_ = null;
				local_a0._8_8_ = (Dictionary.Enumerator<object, object>)local_78;
	label_05e2d4d0: ;
				bVar7 = local_78.MoveNext();
				__this_00 = pSStack_60;
				item = local_68;
				if (bVar7) {
					match = new Predicate<BallotBox.Ballot>((object)this, (intptr_t)MethodInfo_Anticheat_BallotBox_RemoveOldBallots_b__8_0) ;
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					__this_00.RemoveWhere(match);
					if (__this_00._count == 0) {
						pSVar3 = BallotBox.removals;
						if (pSVar3 != null) {
							piVar1 = &pSVar3._version;
							*piVar1 = *piVar1 + 1;
							pPVar5 = pSVar3._items;
							if (pPVar5 != null) {
								uVar2 = pSVar3._size;
								if (uVar2 < (uint)pPVar5.Length) {
									pSVar3._size = uVar2 + 1;
									pPVar5[(int)uVar2] = item;
								}
								else {
									pSVar3.AddWithResize((object)item);
								}
								goto label_05e2d4d0;
							}
						}
						throw new NullReferenceException();
					}
					goto label_05e2d4d0;
				}
				local_78.Dispose();
				pSVar3 = BallotBox.removals;
				if (pSVar3 != null) {
					local_48 = pSVar3.GetEnumerator();
					local_a0._0_8_ = null;
					local_a0._8_8_ = &local_48;
					while(true) {
						bVar7 = local_48.MoveNext();
						if (!bVar7) {
							local_48.Dispose();
							return;
						}
						pSVar4 = (Dictionary<object, object>)this.BallotsByTargetPlayer;
						if (pSVar4 == null) break;
						pSVar4.Remove(local_48._current);
					}
					throw new NullReferenceException();
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005AB4")]
	[Address(RVA = "0x5D2D900", Offset = "0x5D2C900", VA = "0x5D2D900")]
	private int CountBallotsCast(Player player)
	{
		// Lifted from source/cpp/Anticheat/BallotBox.c (Anticheat.BallotBox$$CountBallotsCast): 3 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		object __this_01;
		bool bVar1;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_02;
		DateTime SVar2;
		int iVar3;
		BallotBox.Ballot item;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_68;
		byte local_48;
		Player local_40;

		local_68._dictionary = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._currentValue = null;
		__this_00 = (Dictionary<object, object>)this.BallotsByTargetPlayer;
		if (__this_00 != null) {
			__this_02 = __this_00.Values;
			if (__this_02 != null) {
				local_68 = __this_02.GetEnumerator();
				iVar3 = 0;
				local_48 = (byte)&local_68;
				while(true) {
					bVar1 = local_68.MoveNext();
					__this_01 = local_68._currentValue;
					if (!bVar1) {
						local_68.Dispose();
						return iVar3;
					}
					local_40 = player;
					SVar2 = DateTime.UtcNow;
					if ((HashSet<BallotBox.Ballot>)__this_01 ==null) break;
					item.Timestamp._dateData = SVar2._dateData;
					item.Voter = local_40;
					bVar1 = __this_01.Contains(item);
					iVar3 = iVar3 + (uint)bVar1;
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005AB5")]
	[Address(RVA = "0x5D2D7D0", Offset = "0x5D2C7D0", VA = "0x5D2D7D0")]
	private bool HasCooldown(Player voter)
	{
		// Lifted from source/cpp/Anticheat/BallotBox.c (Anticheat.BallotBox$$HasCooldown): clean
		Dictionary<Player, DateTime> __this_00;
		TimeSpan t2;
		bool bVar1;
		DateTime d1;
		TimeSpan t1;
		DateTime local_20;

		local_20._dateData = (DateTime)0;
		__this_00 = this.LastBallotCastTimestampByPlayer;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.TryGetValue((object)voter, ref local_20);
		if (bVar1) {
			d1 = DateTime.UtcNow;
			t1 = (d1 - local_20);
			t2._ticks = (TimeSpan)this.BallotCooldown._ticks;
			bVar1 = (t1 < t2);
		}
		else {
			bVar1 = false;
		}
		return bVar1;
	}

	[Token(Token = "0x6005AB6")]
	[Address(RVA = "0x5D2BFD0", Offset = "0x5D2AFD0", VA = "0x5D2BFD0")]
	public BallotBox()
	{
		// Lifted from source/cpp/Anticheat/BallotBox.c (Anticheat.BallotBox$$.ctor): 1 lines keep C-only constructs
		Dictionary<Player, HashSet<BallotBox.Ballot>> __this_00;
		Dictionary<Player, DateTime> __this_01;
		TimeSpan SVar1;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<Player, HashSet<BallotBox.Ballot>>));
		__this_00 = new Dictionary<object, object>();
		this.BallotsByTargetPlayer = __this_00;
		__this_01 = new Dictionary<Player, DateTime>();
		this.LastBallotCastTimestampByPlayer = __this_01;
		SVar1 = TimeSpan.FromMinutes(5.0);
		this.BallotTimeout._ticks = (int64_t)SVar1._ticks;
		SVar1 = TimeSpan.FromMinutes(1.0);
		this.BallotCooldown._ticks = (int64_t)SVar1._ticks;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Anticheat/BallotBox.c.

	// Anticheat.BallotBox$$.cctor: clean
	static BallotBox()
	{
		List<Player> __this;

		__this = new List<Player>();
		BallotBox.removals = __this;
		return;
	}

	// Anticheat.BallotBox$$<RemoveOldBallots>b__8_0: clean
	private bool RemoveOldBallots_b__8_0(BallotBox.Ballot ballot)
	{
		TimeSpan t2;
		bool bVar1;
		DateTime d1;
		TimeSpan t1;

		d1 = DateTime.UtcNow;
		t1 = (d1 - ballot.Timestamp._dateData);
		t2._ticks = (TimeSpan)this.BallotTimeout._ticks;
		bVar1 = (t1 > t2);
		return bVar1;
	}
}
