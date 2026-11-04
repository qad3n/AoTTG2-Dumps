// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.PastebinLoader
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/PastebinLoader.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/PastebinLoader.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x200091B")]
public class PastebinLoader : MonoBehaviour
{
	[Token(Token = "0x200091C")]
	[CompilerGenerated]
	private sealed class _003CLoadPastebinCoroutine_003Ed__7 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002D67")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002D68")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002D69")]
		[FieldOffset(Offset = "0x20")]
		private string[] _003Curls_003E5__2;

		[Token(Token = "0x4002D6A")]
		[FieldOffset(Offset = "0x28")]
		private JSONNode[] _003Cnodes_003E5__3;

		[Token(Token = "0x4002D6B")]
		[FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__4;

		[Token(Token = "0x4002D6C")]
		[FieldOffset(Offset = "0x38")]
		private WWW _003Cwww_003E5__5;

		[Token(Token = "0x17000F6E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60055A9")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F6F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60055AB")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60055A5")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CLoadPastebinCoroutine_003Ed__7(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60055A6")]
		[Address(RVA = "0x235B320", Offset = "0x2359920", VA = "0x18235B320", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60055A7")]
		[Address(RVA = "0x235AC10", Offset = "0x2359210", VA = "0x18235AC10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60055A8")]
		[Address(RVA = "0x235B3B0", Offset = "0x23599B0", VA = "0x18235B3B0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60055AA")]
		[Address(RVA = "0x235B2E0", Offset = "0x23598E0", VA = "0x18235B2E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002D62")]
	[FieldOffset(Offset = "0x0")]
	public static JSONNode Leaderboard;

	[Token(Token = "0x4002D63")]
	[FieldOffset(Offset = "0x8")]
	public static PastebinStatus Status;

	[Token(Token = "0x4002D64")]
	[FieldOffset(Offset = "0x10")]
	private static PastebinLoader _instance;

	[Token(Token = "0x4002D65")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string LeaderboardURL;

	[Token(Token = "0x4002D66")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string PlatformURL;

	[Token(Token = "0x60055A0")]
	[Address(RVA = "0x23551A0", Offset = "0x23537A0", VA = "0x1823551A0")]
	public static void Init()
	{
	}

	[Token(Token = "0x60055A1")]
	[Address(RVA = "0x2355280", Offset = "0x2353880", VA = "0x182355280")]
	public static void LoadPastebin()
	{
	}

	[Token(Token = "0x60055A2")]
	[Address(RVA = "0x2355230", Offset = "0x2353830", VA = "0x182355230")]
	[IteratorStateMachine(typeof(_003CLoadPastebinCoroutine_003Ed__7))]
	private IEnumerator LoadPastebinCoroutine()
	{
		return null;
	}

	[Token(Token = "0x60055A3")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public PastebinLoader()
	{
	}
}
