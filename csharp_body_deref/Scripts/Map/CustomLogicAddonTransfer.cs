// ==================== AoTTG2 cross-reference ====================
// Type: Map.CustomLogicAddonTransfer
// Update status: NEW in this game update
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

[Token(Token = "0x200025E")]
internal class CustomLogicAddonTransfer : MonoBehaviour
{
	[Token(Token = "0x2000260")]
	[CompilerGenerated]
	private sealed class _003CTransferAddonData_003Ed__16 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000CDA")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000CDB")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000CDC")]
		[FieldOffset(Offset = "0x20")]
		public Player player;

		[Token(Token = "0x4000CDD")]
		[FieldOffset(Offset = "0x28")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x170001CA")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000E9F")]
			[Address(RVA = "0x3F993E0", Offset = "0x3F993E0", VA = "0x3F993E0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001CB")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000EA1")]
			[Address(RVA = "0x3F99430", Offset = "0x3F99430", VA = "0x3F99430", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E9C")]
		[Address(RVA = "0x3F98F60", Offset = "0x3F98F60", VA = "0x3F98F60")]
		[DebuggerHidden]
		public _003CTransferAddonData_003Ed__16(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E9D")]
		[Address(RVA = "0x3F990B0", Offset = "0x3F990B0", VA = "0x3F990B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E9E")]
		[Address(RVA = "0x3F990C0", Offset = "0x3F990C0", VA = "0x3F990C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000EA0")]
		[Address(RVA = "0x3F993F0", Offset = "0x3F993F0", VA = "0x3F993F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000CD0")]
	[FieldOffset(Offset = "0x0")]
	public static bool AddonTransferReady;

	[Token(Token = "0x4000CD1")]
	[FieldOffset(Offset = "0x8")]
	public static string AddonBundleHash;

	[Token(Token = "0x4000CD2")]
	[FieldOffset(Offset = "0x10")]
	private static CustomLogicAddonTransfer _instance;

	[Token(Token = "0x4000CD3")]
	[FieldOffset(Offset = "0x18")]
	private static readonly byte MsgAddonStart;

	[Token(Token = "0x4000CD4")]
	[FieldOffset(Offset = "0x19")]
	private static readonly byte MsgAddonBody;

	[Token(Token = "0x4000CD5")]
	[FieldOffset(Offset = "0x1A")]
	private static readonly byte MsgAddonEnd;

	[Token(Token = "0x4000CD6")]
	[FieldOffset(Offset = "0x20")]
	private static List<byte> _addonBundleCompressed;

	[Token(Token = "0x4000CD7")]
	[FieldOffset(Offset = "0x28")]
	private static List<byte[][]> _addonTransferData;

	[Token(Token = "0x6000E8E")]
	[Address(RVA = "0x3F975E0", Offset = "0x3F975E0", VA = "0x3F975E0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000E8F")]
	[Address(RVA = "0x3F976B0", Offset = "0x3F976B0", VA = "0x3F976B0")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6000E90")]
	[Address(RVA = "0x3F97760", Offset = "0x3F97760", VA = "0x3F97760")]
	public static void Start()
	{
	}

	[Token(Token = "0x6000E91")]
	[Address(RVA = "0x3F98830", Offset = "0x3F98830", VA = "0x3F98830")]
	public static void Transfer(Player player)
	{
	}

	[Token(Token = "0x6000E92")]
	[Address(RVA = "0x3F97A10", Offset = "0x3F97A10", VA = "0x3F97A10")]
	private static string BuildBundleJson()
	{
		return null;
	}

	[Token(Token = "0x6000E93")]
	[Address(RVA = "0x3F97F30", Offset = "0x3F97F30", VA = "0x3F97F30")]
	private static void CreateTransferData(string bundle)
	{
	}

	[Token(Token = "0x6000E94")]
	[Address(RVA = "0x3F98BE0", Offset = "0x3F98BE0", VA = "0x3F98BE0")]
	public static void OnTransferAddonBundleRPC(byte[][] byteArr, int msgNumber, int msgTotal, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000E95")]
	[Address(RVA = "0x3F98F00", Offset = "0x3F98F00", VA = "0x3F98F00")]
	public static void OnLoadCachedAddonBundleRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000E96")]
	[Address(RVA = "0x3F98930", Offset = "0x3F98930", VA = "0x3F98930")]
	[IteratorStateMachine(typeof(_003CTransferAddonData_003Ed__16))]
	private IEnumerator TransferAddonData(Player player)
	{
		return null;
	}

	[Token(Token = "0x6000E97")]
	[Address(RVA = "0x3F98F80", Offset = "0x3F98F80", VA = "0x3F98F80")]
	public CustomLogicAddonTransfer()
	{
	}
}
