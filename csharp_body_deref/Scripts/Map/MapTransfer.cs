// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapTransfer
// Update status: unchanged since the previous dump
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

[Token(Token = "0x200042B")]
internal class MapTransfer : MonoBehaviour
{
	[Token(Token = "0x200042D")]
	[CompilerGenerated]
	private sealed class _003CTransferMapData_003Ed__26 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001564")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001565")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001566")]
		[FieldOffset(Offset = "0x20")]
		public Player player;

		[Token(Token = "0x4001567")]
		[FieldOffset(Offset = "0x28")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x170002C9")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001A60")]
			[Address(RVA = "0x58A87B0", Offset = "0x58A77B0", VA = "0x58A87B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170002CA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001A62")]
			[Address(RVA = "0x58A8800", Offset = "0x58A7800", VA = "0x58A8800", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001A5D")]
		[Address(RVA = "0x58A8330", Offset = "0x58A7330", VA = "0x58A8330")]
		[DebuggerHidden]
		public _003CTransferMapData_003Ed__26(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001A5E")]
		[Address(RVA = "0x58A8490", Offset = "0x58A7490", VA = "0x58A8490", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001A5F")]
		[Address(RVA = "0x58A84A0", Offset = "0x58A74A0", VA = "0x58A84A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001A61")]
		[Address(RVA = "0x58A87C0", Offset = "0x58A77C0", VA = "0x58A87C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001553")]
	[FieldOffset(Offset = "0x0")]
	public static bool MapTransferReady;

	[Token(Token = "0x4001554")]
	[FieldOffset(Offset = "0x8")]
	public static string MapHash;

	[Token(Token = "0x4001555")]
	[FieldOffset(Offset = "0x10")]
	public static string MapName;

	[Token(Token = "0x4001556")]
	[FieldOffset(Offset = "0x18")]
	private static MapTransfer _instance;

	[Token(Token = "0x4001557")]
	[FieldOffset(Offset = "0x20")]
	private static readonly byte MsgMapStart;

	[Token(Token = "0x4001558")]
	[FieldOffset(Offset = "0x21")]
	private static readonly byte MsgMapBody;

	[Token(Token = "0x4001559")]
	[FieldOffset(Offset = "0x22")]
	private static readonly byte MsgLogicBody;

	[Token(Token = "0x400155A")]
	[FieldOffset(Offset = "0x23")]
	private static readonly byte MsgMapEnd;

	[Token(Token = "0x400155B")]
	[FieldOffset(Offset = "0x24")]
	private static int CompressDeltaRows;

	[Token(Token = "0x400155C")]
	[FieldOffset(Offset = "0x28")]
	private static JSONNode _mapScriptSymbolTable;

	[Token(Token = "0x400155D")]
	[FieldOffset(Offset = "0x30")]
	public static List<byte> _mapScriptCompressed;

	[Token(Token = "0x400155E")]
	[FieldOffset(Offset = "0x38")]
	private static List<byte[][]> _mapTransferData;

	[Token(Token = "0x400155F")]
	[FieldOffset(Offset = "0x40")]
	public static List<byte> _logicScriptCompressed;

	[Token(Token = "0x4001560")]
	[FieldOffset(Offset = "0x48")]
	private static readonly ContentTransferChangeTracker _changeTracker;

	[Token(Token = "0x4001561")]
	[FieldOffset(Offset = "0x50")]
	private static readonly OrderedTransferReceiver _receiver;

	[Token(Token = "0x4001562")]
	[FieldOffset(Offset = "0x58")]
	private static bool _receivingLogic;

	[Token(Token = "0x6001A4E")]
	[Address(RVA = "0x589F140", Offset = "0x589E140", VA = "0x589F140")]
	public static void Init()
	{
	}

	[Token(Token = "0x6001A4F")]
	[Address(RVA = "0x58A65F0", Offset = "0x58A55F0", VA = "0x58A65F0")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6001A50")]
	[Address(RVA = "0x58A0810", Offset = "0x589F810", VA = "0x58A0810")]
	public static void Start(string mapName)
	{
	}

	[Token(Token = "0x6001A51")]
	[Address(RVA = "0x58A0CD0", Offset = "0x589FCD0", VA = "0x58A0CD0")]
	public static void UseBuiltin(string category, string mapName)
	{
	}

	[Token(Token = "0x6001A52")]
	[Address(RVA = "0x58A1850", Offset = "0x58A0850", VA = "0x58A1850")]
	public static void Transfer(Player player)
	{
	}

	[Token(Token = "0x6001A53")]
	[Address(RVA = "0x58A67A0", Offset = "0x58A57A0", VA = "0x58A67A0")]
	private static void CreateTransferData()
	{
	}

	[Token(Token = "0x6001A54")]
	[Address(RVA = "0x58A76C0", Offset = "0x58A66C0", VA = "0x58A76C0")]
	public static void OnTransferMapRPC(byte[][] byteArr, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001A55")]
	[Address(RVA = "0x58A7880", Offset = "0x58A6880", VA = "0x58A7880")]
	private static bool ValidateMessage(byte[][] message, int messageIndex, int messageTotal)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A56")]
	[Address(RVA = "0x58A7A00", Offset = "0x58A6A00", VA = "0x58A7A00")]
	private static void ProcessMessage(byte[][] message, int messageIndex, int messageTotal)
	{
	}

	[Token(Token = "0x6001A57")]
	[Address(RVA = "0x58A66A0", Offset = "0x58A56A0", VA = "0x58A66A0")]
	private static void ResetReceiveState()
	{
	}

	[Token(Token = "0x6001A58")]
	[Address(RVA = "0x58A7650", Offset = "0x58A6650", VA = "0x58A7650")]
	[IteratorStateMachine(typeof(_003CTransferMapData_003Ed__26))]
	private IEnumerator TransferMapData(Player player)
	{
		return null;
	}

	[Token(Token = "0x6001A59")]
	[Address(RVA = "0x58A8350", Offset = "0x58A7350", VA = "0x58A8350")]
	public MapTransfer()
	{
	}
}
