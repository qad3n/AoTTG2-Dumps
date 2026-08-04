// ==================== AoTTG2 cross-reference ====================
// Type: Map.CustomLogicTransfer
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000261")]
internal class CustomLogicTransfer : MonoBehaviour
{
	[Token(Token = "0x2000262")]
	[CompilerGenerated]
	private sealed class _003CTransferLogicData_003Ed__14 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000CE6")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000CE7")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000CE8")]
		[FieldOffset(Offset = "0x20")]
		public Player player;

		[Token(Token = "0x4000CE9")]
		[FieldOffset(Offset = "0x28")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x170001CC")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000EAE")]
			[Address(RVA = "0x3F9A9D0", Offset = "0x3F9A9D0", VA = "0x3F9A9D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001CD")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000EB0")]
			[Address(RVA = "0x3F9AA20", Offset = "0x3F9AA20", VA = "0x3F9AA20", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000EAB")]
		[Address(RVA = "0x3F9A630", Offset = "0x3F9A630", VA = "0x3F9A630")]
		[DebuggerHidden]
		public _003CTransferLogicData_003Ed__14(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000EAC")]
		[Address(RVA = "0x3F9A6A0", Offset = "0x3F9A6A0", VA = "0x3F9A6A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000EAD")]
		[Address(RVA = "0x3F9A6B0", Offset = "0x3F9A6B0", VA = "0x3F9A6B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000EAF")]
		[Address(RVA = "0x3F9A9E0", Offset = "0x3F9A9E0", VA = "0x3F9A9E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000CDE")]
	[FieldOffset(Offset = "0x0")]
	public static bool LogicTransferReady;

	[Token(Token = "0x4000CDF")]
	[FieldOffset(Offset = "0x8")]
	public static string LogicHash;

	[Token(Token = "0x4000CE0")]
	[FieldOffset(Offset = "0x10")]
	private static CustomLogicTransfer _instance;

	[Token(Token = "0x4000CE1")]
	[FieldOffset(Offset = "0x18")]
	private static readonly byte MsgLogicStart;

	[Token(Token = "0x4000CE2")]
	[FieldOffset(Offset = "0x19")]
	private static readonly byte MsgLogicBody;

	[Token(Token = "0x4000CE3")]
	[FieldOffset(Offset = "0x1A")]
	private static readonly byte MsgLogicEnd;

	[Token(Token = "0x4000CE4")]
	[FieldOffset(Offset = "0x20")]
	private static List<byte> _logicScriptCompressed;

	[Token(Token = "0x4000CE5")]
	[FieldOffset(Offset = "0x28")]
	private static List<byte[][]> _logicTransferData;

	[Token(Token = "0x6000EA2")]
	[Address(RVA = "0x3F99440", Offset = "0x3F99440", VA = "0x3F99440")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000EA3")]
	[Address(RVA = "0x3F99510", Offset = "0x3F99510", VA = "0x3F99510")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6000EA4")]
	[Address(RVA = "0x3F995A0", Offset = "0x3F995A0", VA = "0x3F995A0")]
	public static void Start()
	{
	}

	[Token(Token = "0x6000EA5")]
	[Address(RVA = "0x3F9A120", Offset = "0x3F9A120", VA = "0x3F9A120")]
	public static void Transfer(Player player)
	{
	}

	[Token(Token = "0x6000EA6")]
	[Address(RVA = "0x3F997C0", Offset = "0x3F997C0", VA = "0x3F997C0")]
	private static void CreateTransferData()
	{
	}

	[Token(Token = "0x6000EA7")]
	[Address(RVA = "0x3F9A290", Offset = "0x3F9A290", VA = "0x3F9A290")]
	public static void OnTransferLogicRPC(byte[][] byteArr, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000EA8")]
	[Address(RVA = "0x3F9A220", Offset = "0x3F9A220", VA = "0x3F9A220")]
	[IteratorStateMachine(typeof(_003CTransferLogicData_003Ed__14))]
	private IEnumerator TransferLogicData(Player player)
	{
		return null;
	}

	[Token(Token = "0x6000EA9")]
	[Address(RVA = "0x3F9A650", Offset = "0x3F9A650", VA = "0x3F9A650")]
	public CustomLogicTransfer()
	{
	}
}
