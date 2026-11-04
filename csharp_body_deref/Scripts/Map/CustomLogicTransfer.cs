// ==================== AoTTG2 cross-reference ====================
// Type: Map.CustomLogicTransfer
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Map/CustomLogicTransfer.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicTransfer.cs
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

[Token(Token = "0x2000383")]
internal class CustomLogicTransfer : MonoBehaviour
{
	[Token(Token = "0x2000384")]
	[CompilerGenerated]
	private sealed class _003CTransferLogicData_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001223")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001224")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001225")]
		[FieldOffset(Offset = "0x20")]
		public Player player;

		[Token(Token = "0x4001226")]
		[FieldOffset(Offset = "0x28")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000264")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001631")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000265")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001633")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600162E")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CTransferLogicData_003Ed__11(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600162F")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001630")]
		[Address(RVA = "0x1E9A100", Offset = "0x1E98700", VA = "0x181E9A100", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001632")]
		[Address(RVA = "0x1E9A460", Offset = "0x1E98A60", VA = "0x181E9A460", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400121E")]
	[FieldOffset(Offset = "0x0")]
	public static bool LogicTransferReady;

	[Token(Token = "0x400121F")]
	[FieldOffset(Offset = "0x8")]
	public static string LogicHash;

	[Token(Token = "0x4001220")]
	[FieldOffset(Offset = "0x10")]
	private static CustomLogicTransfer _instance;

	[Token(Token = "0x4001221")]
	[FieldOffset(Offset = "0x18")]
	private static readonly CustomLogicTransferData _transferData;

	[Token(Token = "0x4001222")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ContentTransferChangeTracker _changeTracker;

	[Token(Token = "0x6001625")]
	[Address(RVA = "0x1E880E0", Offset = "0x1E866E0", VA = "0x181E880E0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6001626")]
	[Address(RVA = "0x1E881C0", Offset = "0x1E867C0", VA = "0x181E881C0")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6001627")]
	[Address(RVA = "0x1E88410", Offset = "0x1E86A10", VA = "0x181E88410")]
	public static void Start(string modeName)
	{
	}

	[Token(Token = "0x6001628")]
	[Address(RVA = "0x1E88890", Offset = "0x1E86E90", VA = "0x181E88890")]
	public static void UseBuiltin(string modeName)
	{
	}

	[Token(Token = "0x6001629")]
	[Address(RVA = "0x1E887C0", Offset = "0x1E86DC0", VA = "0x181E887C0")]
	public static void Transfer(Player player)
	{
	}

	[Token(Token = "0x600162A")]
	[Address(RVA = "0x1E88250", Offset = "0x1E86850", VA = "0x181E88250")]
	public static void OnTransferLogicRPC(byte[][] byteArr, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600162B")]
	[Address(RVA = "0x1E88750", Offset = "0x1E86D50", VA = "0x181E88750")]
	[IteratorStateMachine(typeof(_003CTransferLogicData_003Ed__11))]
	private IEnumerator TransferLogicData(Player player)
	{
		return null;
	}

	[Token(Token = "0x600162C")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public CustomLogicTransfer()
	{
	}
}
