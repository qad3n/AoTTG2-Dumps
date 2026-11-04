// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapTransfer
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Map/MapTransfer.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapTransfer.cs
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
using SimpleJSONFixed;
using UnityEngine;

namespace Map;

[Token(Token = "0x20003CC")]
internal class MapTransfer : MonoBehaviour
{
	[Token(Token = "0x20003CE")]
	[CompilerGenerated]
	private sealed class _003CTransferMapData_003Ed__26 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40013C4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40013C5")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40013C6")]
		[FieldOffset(Offset = "0x20")]
		public Player player;

		[Token(Token = "0x40013C7")]
		[FieldOffset(Offset = "0x28")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000288")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60017E9")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000289")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60017EB")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017E6")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CTransferMapData_003Ed__26(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60017E7")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60017E8")]
		[Address(RVA = "0x1EDE320", Offset = "0x1EDC920", VA = "0x181EDE320", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60017EA")]
		[Address(RVA = "0x1EDE640", Offset = "0x1EDCC40", VA = "0x181EDE640", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40013B3")]
	[FieldOffset(Offset = "0x0")]
	public static bool MapTransferReady;

	[Token(Token = "0x40013B4")]
	[FieldOffset(Offset = "0x8")]
	public static string MapHash;

	[Token(Token = "0x40013B5")]
	[FieldOffset(Offset = "0x10")]
	public static string MapName;

	[Token(Token = "0x40013B6")]
	[FieldOffset(Offset = "0x18")]
	private static MapTransfer _instance;

	[Token(Token = "0x40013B7")]
	[FieldOffset(Offset = "0x20")]
	private static readonly byte MsgMapStart;

	[Token(Token = "0x40013B8")]
	[FieldOffset(Offset = "0x21")]
	private static readonly byte MsgMapBody;

	[Token(Token = "0x40013B9")]
	[FieldOffset(Offset = "0x22")]
	private static readonly byte MsgLogicBody;

	[Token(Token = "0x40013BA")]
	[FieldOffset(Offset = "0x23")]
	private static readonly byte MsgMapEnd;

	[Token(Token = "0x40013BB")]
	[FieldOffset(Offset = "0x24")]
	private static int CompressDeltaRows;

	[Token(Token = "0x40013BC")]
	[FieldOffset(Offset = "0x28")]
	private static JSONNode _mapScriptSymbolTable;

	[Token(Token = "0x40013BD")]
	[FieldOffset(Offset = "0x30")]
	public static List<byte> _mapScriptCompressed;

	[Token(Token = "0x40013BE")]
	[FieldOffset(Offset = "0x38")]
	private static List<byte[][]> _mapTransferData;

	[Token(Token = "0x40013BF")]
	[FieldOffset(Offset = "0x40")]
	public static List<byte> _logicScriptCompressed;

	[Token(Token = "0x40013C0")]
	[FieldOffset(Offset = "0x48")]
	private static readonly ContentTransferChangeTracker _changeTracker;

	[Token(Token = "0x40013C1")]
	[FieldOffset(Offset = "0x50")]
	private static readonly OrderedTransferReceiver _receiver;

	[Token(Token = "0x40013C2")]
	[FieldOffset(Offset = "0x58")]
	private static bool _receivingLogic;

	[Token(Token = "0x60017D7")]
	[Address(RVA = "0x1EDB8B0", Offset = "0x1ED9EB0", VA = "0x181EDB8B0")]
	public static void Init()
	{
	}

	[Token(Token = "0x60017D8")]
	[Address(RVA = "0x1EDB990", Offset = "0x1ED9F90", VA = "0x181EDB990")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x60017D9")]
	[Address(RVA = "0x1EDC7E0", Offset = "0x1EDADE0", VA = "0x181EDC7E0")]
	public static void Start(string mapName)
	{
	}

	[Token(Token = "0x60017DA")]
	[Address(RVA = "0x1EDCBE0", Offset = "0x1EDB1E0", VA = "0x181EDCBE0")]
	public static void UseBuiltin(string category, string mapName)
	{
	}

	[Token(Token = "0x60017DB")]
	[Address(RVA = "0x1EDCB10", Offset = "0x1EDB110", VA = "0x181EDCB10")]
	public static void Transfer(Player player)
	{
	}

	[Token(Token = "0x60017DC")]
	[Address(RVA = "0x1EDAB50", Offset = "0x1ED9150", VA = "0x181EDAB50")]
	private static void CreateTransferData()
	{
	}

	[Token(Token = "0x60017DD")]
	[Address(RVA = "0x1EDBB60", Offset = "0x1EDA160", VA = "0x181EDBB60")]
	public static void OnTransferMapRPC(byte[][] byteArr, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60017DE")]
	[Address(RVA = "0x1EDCCD0", Offset = "0x1EDB2D0", VA = "0x181EDCCD0")]
	private static bool ValidateMessage(byte[][] message, int messageIndex, int messageTotal)
	{
		return default(bool);
	}

	[Token(Token = "0x60017DF")]
	[Address(RVA = "0x1EDBD30", Offset = "0x1EDA330", VA = "0x181EDBD30")]
	private static void ProcessMessage(byte[][] message, int messageIndex, int messageTotal)
	{
	}

	[Token(Token = "0x60017E0")]
	[Address(RVA = "0x1EDC6B0", Offset = "0x1EDACB0", VA = "0x181EDC6B0")]
	private static void ResetReceiveState()
	{
	}

	[Token(Token = "0x60017E1")]
	[Address(RVA = "0x1EDCAA0", Offset = "0x1EDB0A0", VA = "0x181EDCAA0")]
	[IteratorStateMachine(typeof(_003CTransferMapData_003Ed__26))]
	private IEnumerator TransferMapData(Player player)
	{
		return null;
	}

	[Token(Token = "0x60017E2")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public MapTransfer()
	{
	}
}
