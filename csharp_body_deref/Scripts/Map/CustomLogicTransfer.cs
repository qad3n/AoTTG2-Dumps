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

[Token(Token = "0x2000228")]
internal class CustomLogicTransfer : MonoBehaviour
{
	[Token(Token = "0x2000229")]
	[CompilerGenerated]
	private sealed class _003CTransferLogicData_003Ed__14 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000BFF")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000C00")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000C01")]
		[FieldOffset(Offset = "0x20")]
		public Player player;

		[Token(Token = "0x4000C02")]
		[FieldOffset(Offset = "0x28")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000173")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000D01")]
			[Address(RVA = "0x414B700", Offset = "0x414B700", VA = "0x414B700", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000174")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D03")]
			[Address(RVA = "0x414B750", Offset = "0x414B750", VA = "0x414B750", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000CFE")]
		[Address(RVA = "0x414B360", Offset = "0x414B360", VA = "0x414B360")]
		[DebuggerHidden]
		public _003CTransferLogicData_003Ed__14(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000CFF")]
		[Address(RVA = "0x414B3D0", Offset = "0x414B3D0", VA = "0x414B3D0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D00")]
		[Address(RVA = "0x414B3E0", Offset = "0x414B3E0", VA = "0x414B3E0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D02")]
		[Address(RVA = "0x414B710", Offset = "0x414B710", VA = "0x414B710", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000BF7")]
	[FieldOffset(Offset = "0x0")]
	public static bool LogicTransferReady;

	[Token(Token = "0x4000BF8")]
	[FieldOffset(Offset = "0x8")]
	public static string LogicHash;

	[Token(Token = "0x4000BF9")]
	[FieldOffset(Offset = "0x10")]
	private static CustomLogicTransfer _instance;

	[Token(Token = "0x4000BFA")]
	[FieldOffset(Offset = "0x18")]
	private static readonly byte MsgLogicStart;

	[Token(Token = "0x4000BFB")]
	[FieldOffset(Offset = "0x19")]
	private static readonly byte MsgLogicBody;

	[Token(Token = "0x4000BFC")]
	[FieldOffset(Offset = "0x1A")]
	private static readonly byte MsgLogicEnd;

	[Token(Token = "0x4000BFD")]
	[FieldOffset(Offset = "0x20")]
	private static List<byte> _logicScriptCompressed;

	[Token(Token = "0x4000BFE")]
	[FieldOffset(Offset = "0x28")]
	private static List<byte[][]> _logicTransferData;

	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x414A510", Offset = "0x414A510", VA = "0x414A510")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000CF6")]
	[Address(RVA = "0x414A5E0", Offset = "0x414A5E0", VA = "0x414A5E0")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6000CF7")]
	[Address(RVA = "0x414A670", Offset = "0x414A670", VA = "0x414A670")]
	public static void Start()
	{
	}

	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x414B1F0", Offset = "0x414B1F0", VA = "0x414B1F0")]
	public static void Transfer(Player player)
	{
	}

	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x414A890", Offset = "0x414A890", VA = "0x414A890")]
	private static void CreateTransferData()
	{
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x413BB80", Offset = "0x413BB80", VA = "0x413BB80")]
	public static void OnTransferLogicRPC(byte[][] byteArr, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x414B2F0", Offset = "0x414B2F0", VA = "0x414B2F0")]
	[IteratorStateMachine(typeof(_003CTransferLogicData_003Ed__14))]
	private IEnumerator TransferLogicData(Player player)
	{
		return null;
	}

	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x414B380", Offset = "0x414B380", VA = "0x414B380")]
	public CustomLogicTransfer()
	{
	}
}
