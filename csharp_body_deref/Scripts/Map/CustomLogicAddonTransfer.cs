// ==================== AoTTG2 cross-reference ====================
// Type: Map.CustomLogicAddonTransfer
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20003DB")]
internal class CustomLogicAddonTransfer : MonoBehaviour
{
	[Token(Token = "0x20003DD")]
	[CompilerGenerated]
	private sealed class _003CTransferAddonData_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40013AB")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40013AC")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40013AD")]
		[FieldOffset(Offset = "0x20")]
		public Player player;

		[Token(Token = "0x40013AE")]
		[FieldOffset(Offset = "0x28")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x170002A3")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001885")]
			[Address(RVA = "0x586B2A0", Offset = "0x586A2A0", VA = "0x586B2A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170002A4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001887")]
			[Address(RVA = "0x586B2F0", Offset = "0x586A2F0", VA = "0x586B2F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001882")]
		[Address(RVA = "0x586AB70", Offset = "0x5869B70", VA = "0x586AB70")]
		[DebuggerHidden]
		public _003CTransferAddonData_003Ed__12(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001883")]
		[Address(RVA = "0x586AE30", Offset = "0x5869E30", VA = "0x586AE30", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001884")]
		[Address(RVA = "0x586AE40", Offset = "0x5869E40", VA = "0x586AE40", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001886")]
		[Address(RVA = "0x586B2B0", Offset = "0x586A2B0", VA = "0x586B2B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40013A4")]
	[FieldOffset(Offset = "0x0")]
	public static bool AddonTransferReady;

	[Token(Token = "0x40013A5")]
	[FieldOffset(Offset = "0x8")]
	public static string AddonBundleHash;

	[Token(Token = "0x40013A6")]
	[FieldOffset(Offset = "0x10")]
	private static CustomLogicAddonTransfer _instance;

	[Token(Token = "0x40013A7")]
	[FieldOffset(Offset = "0x18")]
	private static readonly CustomLogicTransferData _transferData;

	[Token(Token = "0x40013A8")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ContentTransferChangeTracker _changeTracker;

	[Token(Token = "0x6001875")]
	[Address(RVA = "0x5869570", Offset = "0x5868570", VA = "0x5869570")]
	public static void Init()
	{
	}

	[Token(Token = "0x6001876")]
	[Address(RVA = "0x5869640", Offset = "0x5868640", VA = "0x5869640")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6001877")]
	[Address(RVA = "0x58697B0", Offset = "0x58687B0", VA = "0x58697B0")]
	public static void Start()
	{
	}

	[Token(Token = "0x6001878")]
	[Address(RVA = "0x586A5E0", Offset = "0x58695E0", VA = "0x586A5E0")]
	public static void Transfer(Player player)
	{
	}

	[Token(Token = "0x6001879")]
	[Address(RVA = "0x5869B30", Offset = "0x5868B30", VA = "0x5869B30")]
	private static string BuildBundleJson()
	{
		return null;
	}

	[Token(Token = "0x600187A")]
	[Address(RVA = "0x5859430", Offset = "0x5858430", VA = "0x5859430")]
	public static void OnTransferAddonBundleRPC(byte[][] byteArr, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600187B")]
	[Address(RVA = "0x5859610", Offset = "0x5858610", VA = "0x5859610")]
	public static void OnLoadCachedAddonBundleRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600187C")]
	[Address(RVA = "0x586A6D0", Offset = "0x58696D0", VA = "0x586A6D0")]
	[IteratorStateMachine(typeof(_003CTransferAddonData_003Ed__12))]
	private IEnumerator TransferAddonData(Player player)
	{
		return null;
	}

	[Token(Token = "0x600187D")]
	[Address(RVA = "0x586AB90", Offset = "0x5869B90", VA = "0x586AB90")]
	public CustomLogicAddonTransfer()
	{
	}
}
