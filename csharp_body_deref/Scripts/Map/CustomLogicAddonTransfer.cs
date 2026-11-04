// ==================== AoTTG2 cross-reference ====================
// Type: Map.CustomLogicAddonTransfer
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Map/CustomLogicAddonTransfer.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ApplicationManagers;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;

namespace Map;

[Token(Token = "0x2000380")]
internal class CustomLogicAddonTransfer : MonoBehaviour
{
	[Token(Token = "0x2000382")]
	[CompilerGenerated]
	private sealed class _003CTransferAddonData_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400121A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400121B")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400121C")]
		[FieldOffset(Offset = "0x20")]
		public Player player;

		[Token(Token = "0x400121D")]
		[FieldOffset(Offset = "0x28")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000262")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001622")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000263")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001624")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600161F")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CTransferAddonData_003Ed__12(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001620")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001621")]
		[Address(RVA = "0x1E99D60", Offset = "0x1E98360", VA = "0x181E99D60", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001623")]
		[Address(RVA = "0x1E9A0C0", Offset = "0x1E986C0", VA = "0x181E9A0C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001213")]
	[FieldOffset(Offset = "0x0")]
	public static bool AddonTransferReady;

	[Token(Token = "0x4001214")]
	[FieldOffset(Offset = "0x8")]
	public static string AddonBundleHash;

	[Token(Token = "0x4001215")]
	[FieldOffset(Offset = "0x10")]
	private static CustomLogicAddonTransfer _instance;

	[Token(Token = "0x4001216")]
	[FieldOffset(Offset = "0x18")]
	private static readonly CustomLogicTransferData _transferData;

	[Token(Token = "0x4001217")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ContentTransferChangeTracker _changeTracker;

	[Token(Token = "0x6001612")]
	[Address(RVA = "0x1E86CD0", Offset = "0x1E852D0", VA = "0x181E86CD0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6001613")]
	[Address(RVA = "0x1E86E20", Offset = "0x1E85420", VA = "0x181E86E20")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6001614")]
	[Address(RVA = "0x1E87010", Offset = "0x1E85610", VA = "0x181E87010")]
	public static void Start()
	{
	}

	[Token(Token = "0x6001615")]
	[Address(RVA = "0x1E873C0", Offset = "0x1E859C0", VA = "0x181E873C0")]
	public static void Transfer(Player player)
	{
	}

	[Token(Token = "0x6001616")]
	[Address(RVA = "0x1E86960", Offset = "0x1E84F60", VA = "0x181E86960")]
	private static string BuildBundleJson()
	{
		return null;
	}

	[Token(Token = "0x6001617")]
	[Address(RVA = "0x1E86EB0", Offset = "0x1E854B0", VA = "0x181E86EB0")]
	public static void OnTransferAddonBundleRPC(byte[][] byteArr, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001618")]
	[Address(RVA = "0x1E86DB0", Offset = "0x1E853B0", VA = "0x181E86DB0")]
	public static void OnLoadCachedAddonBundleRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001619")]
	[Address(RVA = "0x1E87350", Offset = "0x1E85950", VA = "0x181E87350")]
	[IteratorStateMachine(typeof(_003CTransferAddonData_003Ed__12))]
	private IEnumerator TransferAddonData(Player player)
	{
		return null;
	}

	[Token(Token = "0x600161A")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public CustomLogicAddonTransfer()
	{
	}
}
