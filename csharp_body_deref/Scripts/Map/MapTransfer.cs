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

[Token(Token = "0x200024B")]
internal class MapTransfer : MonoBehaviour
{
	[Token(Token = "0x200024C")]
	[CompilerGenerated]
	private sealed class _003CTransferMapData_003Ed__19 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000CC3")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000CC4")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000CC5")]
		[FieldOffset(Offset = "0x20")]
		public Player player;

		[Token(Token = "0x4000CC6")]
		[FieldOffset(Offset = "0x28")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x1700017C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000DC1")]
			[Address(RVA = "0x3CB1FF0", Offset = "0x3CB1FF0", VA = "0x3CB1FF0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700017D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000DC3")]
			[Address(RVA = "0x3CB2040", Offset = "0x3CB2040", VA = "0x3CB2040", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000DBE")]
		[Address(RVA = "0x3CB1C50", Offset = "0x3CB1C50", VA = "0x3CB1C50")]
		[DebuggerHidden]
		public _003CTransferMapData_003Ed__19(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000DBF")]
		[Address(RVA = "0x3CB1CC0", Offset = "0x3CB1CC0", VA = "0x3CB1CC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000DC0")]
		[Address(RVA = "0x3CB1CD0", Offset = "0x3CB1CD0", VA = "0x3CB1CD0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000DC2")]
		[Address(RVA = "0x3CB2000", Offset = "0x3CB2000", VA = "0x3CB2000", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000CB6")]
	[FieldOffset(Offset = "0x0")]
	public static bool MapTransferReady;

	[Token(Token = "0x4000CB7")]
	[FieldOffset(Offset = "0x8")]
	public static string MapHash;

	[Token(Token = "0x4000CB8")]
	[FieldOffset(Offset = "0x10")]
	public static string MapName;

	[Token(Token = "0x4000CB9")]
	[FieldOffset(Offset = "0x18")]
	private static MapTransfer _instance;

	[Token(Token = "0x4000CBA")]
	[FieldOffset(Offset = "0x20")]
	private static readonly byte MsgMapStart;

	[Token(Token = "0x4000CBB")]
	[FieldOffset(Offset = "0x21")]
	private static readonly byte MsgMapBody;

	[Token(Token = "0x4000CBC")]
	[FieldOffset(Offset = "0x22")]
	private static readonly byte MsgLogicBody;

	[Token(Token = "0x4000CBD")]
	[FieldOffset(Offset = "0x23")]
	private static readonly byte MsgMapEnd;

	[Token(Token = "0x4000CBE")]
	[FieldOffset(Offset = "0x24")]
	private static int CompressDeltaRows;

	[Token(Token = "0x4000CBF")]
	[FieldOffset(Offset = "0x28")]
	private static JSONNode _mapScriptSymbolTable;

	[Token(Token = "0x4000CC0")]
	[FieldOffset(Offset = "0x30")]
	public static List<byte> _mapScriptCompressed;

	[Token(Token = "0x4000CC1")]
	[FieldOffset(Offset = "0x38")]
	private static List<byte[][]> _mapTransferData;

	[Token(Token = "0x4000CC2")]
	[FieldOffset(Offset = "0x40")]
	public static List<byte> _logicScriptCompressed;

	[Token(Token = "0x6000DB5")]
	[Address(RVA = "0x3CAC850", Offset = "0x3CAC850", VA = "0x3CAC850")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x3CB03A0", Offset = "0x3CB03A0", VA = "0x3CB03A0")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6000DB7")]
	[Address(RVA = "0x3CADC40", Offset = "0x3CADC40", VA = "0x3CADC40")]
	public static void Start()
	{
	}

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x3CAEA70", Offset = "0x3CAEA70", VA = "0x3CAEA70")]
	public static void Transfer(Player player)
	{
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x3CB0430", Offset = "0x3CB0430", VA = "0x3CB0430")]
	private static void CreateTransferData()
	{
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x3CB1480", Offset = "0x3CB1480", VA = "0x3CB1480")]
	public static void OnTransferMapRPC(byte[][] byteArr, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x3CB1410", Offset = "0x3CB1410", VA = "0x3CB1410")]
	[IteratorStateMachine(typeof(_003CTransferMapData_003Ed__19))]
	private IEnumerator TransferMapData(Player player)
	{
		return null;
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x3CB1C70", Offset = "0x3CB1C70", VA = "0x3CB1C70")]
	public MapTransfer()
	{
	}
}
