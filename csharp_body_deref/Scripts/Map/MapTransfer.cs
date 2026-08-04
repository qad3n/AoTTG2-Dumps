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

[Token(Token = "0x2000284")]
internal class MapTransfer : MonoBehaviour
{
	[Token(Token = "0x2000285")]
	[CompilerGenerated]
	private sealed class _003CTransferMapData_003Ed__19 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000DA9")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000DAA")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000DAB")]
		[FieldOffset(Offset = "0x20")]
		public Player player;

		[Token(Token = "0x4000DAC")]
		[FieldOffset(Offset = "0x28")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x170001D5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000F6B")]
			[Address(RVA = "0x3FB8330", Offset = "0x3FB8330", VA = "0x3FB8330", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001D6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000F6D")]
			[Address(RVA = "0x3FB8380", Offset = "0x3FB8380", VA = "0x3FB8380", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000F68")]
		[Address(RVA = "0x3FB7F90", Offset = "0x3FB7F90", VA = "0x3FB7F90")]
		[DebuggerHidden]
		public _003CTransferMapData_003Ed__19(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000F69")]
		[Address(RVA = "0x3FB8000", Offset = "0x3FB8000", VA = "0x3FB8000", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000F6A")]
		[Address(RVA = "0x3FB8010", Offset = "0x3FB8010", VA = "0x3FB8010", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000F6C")]
		[Address(RVA = "0x3FB8340", Offset = "0x3FB8340", VA = "0x3FB8340", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000D9C")]
	[FieldOffset(Offset = "0x0")]
	public static bool MapTransferReady;

	[Token(Token = "0x4000D9D")]
	[FieldOffset(Offset = "0x8")]
	public static string MapHash;

	[Token(Token = "0x4000D9E")]
	[FieldOffset(Offset = "0x10")]
	public static string MapName;

	[Token(Token = "0x4000D9F")]
	[FieldOffset(Offset = "0x18")]
	private static MapTransfer _instance;

	[Token(Token = "0x4000DA0")]
	[FieldOffset(Offset = "0x20")]
	private static readonly byte MsgMapStart;

	[Token(Token = "0x4000DA1")]
	[FieldOffset(Offset = "0x21")]
	private static readonly byte MsgMapBody;

	[Token(Token = "0x4000DA2")]
	[FieldOffset(Offset = "0x22")]
	private static readonly byte MsgLogicBody;

	[Token(Token = "0x4000DA3")]
	[FieldOffset(Offset = "0x23")]
	private static readonly byte MsgMapEnd;

	[Token(Token = "0x4000DA4")]
	[FieldOffset(Offset = "0x24")]
	private static int CompressDeltaRows;

	[Token(Token = "0x4000DA5")]
	[FieldOffset(Offset = "0x28")]
	private static JSONNode _mapScriptSymbolTable;

	[Token(Token = "0x4000DA6")]
	[FieldOffset(Offset = "0x30")]
	public static List<byte> _mapScriptCompressed;

	[Token(Token = "0x4000DA7")]
	[FieldOffset(Offset = "0x38")]
	private static List<byte[][]> _mapTransferData;

	[Token(Token = "0x4000DA8")]
	[FieldOffset(Offset = "0x40")]
	public static List<byte> _logicScriptCompressed;

	[Token(Token = "0x6000F5F")]
	[Address(RVA = "0x3FB2000", Offset = "0x3FB2000", VA = "0x3FB2000")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000F60")]
	[Address(RVA = "0x3FB66E0", Offset = "0x3FB66E0", VA = "0x3FB66E0")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x3FB36A0", Offset = "0x3FB36A0", VA = "0x3FB36A0")]
	public static void Start()
	{
	}

	[Token(Token = "0x6000F62")]
	[Address(RVA = "0x3FB44D0", Offset = "0x3FB44D0", VA = "0x3FB44D0")]
	public static void Transfer(Player player)
	{
	}

	[Token(Token = "0x6000F63")]
	[Address(RVA = "0x3FB6770", Offset = "0x3FB6770", VA = "0x3FB6770")]
	private static void CreateTransferData()
	{
	}

	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x3FB77C0", Offset = "0x3FB77C0", VA = "0x3FB77C0")]
	public static void OnTransferMapRPC(byte[][] byteArr, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x3FB7750", Offset = "0x3FB7750", VA = "0x3FB7750")]
	[IteratorStateMachine(typeof(_003CTransferMapData_003Ed__19))]
	private IEnumerator TransferMapData(Player player)
	{
		return null;
	}

	[Token(Token = "0x6000F66")]
	[Address(RVA = "0x3FB7FB0", Offset = "0x3FB7FB0", VA = "0x3FB7FB0")]
	public MapTransfer()
	{
	}
}
