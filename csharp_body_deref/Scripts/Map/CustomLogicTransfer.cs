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

[Token(Token = "0x20003DE")]
internal class CustomLogicTransfer : MonoBehaviour
{
	[Token(Token = "0x20003DF")]
	[CompilerGenerated]
	private sealed class _003CTransferLogicData_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40013B4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40013B5")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40013B6")]
		[FieldOffset(Offset = "0x20")]
		public Player player;

		[Token(Token = "0x40013B7")]
		[FieldOffset(Offset = "0x28")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x170002A5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001894")]
			[Address(RVA = "0x586BFC0", Offset = "0x586AFC0", VA = "0x586BFC0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170002A6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001896")]
			[Address(RVA = "0x586C010", Offset = "0x586B010", VA = "0x586C010", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001891")]
		[Address(RVA = "0x586BA70", Offset = "0x586AA70", VA = "0x586BA70")]
		[DebuggerHidden]
		public _003CTransferLogicData_003Ed__11(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001892")]
		[Address(RVA = "0x586BB50", Offset = "0x586AB50", VA = "0x586BB50", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001893")]
		[Address(RVA = "0x586BB60", Offset = "0x586AB60", VA = "0x586BB60", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001895")]
		[Address(RVA = "0x586BFD0", Offset = "0x586AFD0", VA = "0x586BFD0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40013AF")]
	[FieldOffset(Offset = "0x0")]
	public static bool LogicTransferReady;

	[Token(Token = "0x40013B0")]
	[FieldOffset(Offset = "0x8")]
	public static string LogicHash;

	[Token(Token = "0x40013B1")]
	[FieldOffset(Offset = "0x10")]
	private static CustomLogicTransfer _instance;

	[Token(Token = "0x40013B2")]
	[FieldOffset(Offset = "0x18")]
	private static readonly CustomLogicTransferData _transferData;

	[Token(Token = "0x40013B3")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ContentTransferChangeTracker _changeTracker;

	[Token(Token = "0x6001888")]
	[Address(RVA = "0x586B300", Offset = "0x586A300", VA = "0x586B300")]
	public static void Init()
	{
	}

	[Token(Token = "0x6001889")]
	[Address(RVA = "0x586B3D0", Offset = "0x586A3D0", VA = "0x586B3D0")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x600188A")]
	[Address(RVA = "0x586B470", Offset = "0x586A470", VA = "0x586B470")]
	public static void Start(string modeName)
	{
	}

	[Token(Token = "0x600188B")]
	[Address(RVA = "0x586B8D0", Offset = "0x586A8D0", VA = "0x586B8D0")]
	public static void UseBuiltin(string modeName)
	{
	}

	[Token(Token = "0x600188C")]
	[Address(RVA = "0x586B7E0", Offset = "0x586A7E0", VA = "0x586B7E0")]
	public static void Transfer(Player player)
	{
	}

	[Token(Token = "0x600188D")]
	[Address(RVA = "0x5859190", Offset = "0x5858190", VA = "0x5859190")]
	public static void OnTransferLogicRPC(byte[][] byteArr, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600188E")]
	[Address(RVA = "0x586BA00", Offset = "0x586AA00", VA = "0x586BA00")]
	[IteratorStateMachine(typeof(_003CTransferLogicData_003Ed__11))]
	private IEnumerator TransferLogicData(Player player)
	{
		return null;
	}

	[Token(Token = "0x600188F")]
	[Address(RVA = "0x586BA90", Offset = "0x586AA90", VA = "0x586BA90")]
	public CustomLogicTransfer()
	{
	}
}
