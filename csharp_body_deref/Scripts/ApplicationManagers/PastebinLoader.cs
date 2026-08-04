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

[Token(Token = "0x2000790")]
public class PastebinLoader : MonoBehaviour
{
	[Token(Token = "0x2000791")]
	[CompilerGenerated]
	private sealed class _003CLoadPastebinCoroutine_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002499")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400249A")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400249B")]
		[FieldOffset(Offset = "0x20")]
		private string[] _003Curls_003E5__2;

		[Token(Token = "0x400249C")]
		[FieldOffset(Offset = "0x28")]
		private JSONNode[] _003Cnodes_003E5__3;

		[Token(Token = "0x400249D")]
		[FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__4;

		[Token(Token = "0x400249E")]
		[FieldOffset(Offset = "0x38")]
		private WWW _003Cwww_003E5__5;

		[Token(Token = "0x17000E0B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004931")]
			[Address(RVA = "0x43BEC20", Offset = "0x43BEC20", VA = "0x43BEC20", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000E0C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004933")]
			[Address(RVA = "0x43BEC70", Offset = "0x43BEC70", VA = "0x43BEC70", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600492D")]
		[Address(RVA = "0x43BE120", Offset = "0x43BE120", VA = "0x43BE120")]
		[DebuggerHidden]
		public _003CLoadPastebinCoroutine_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600492E")]
		[Address(RVA = "0x43BE210", Offset = "0x43BE210", VA = "0x43BE210", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600492F")]
		[Address(RVA = "0x43BE2C0", Offset = "0x43BE2C0", VA = "0x43BE2C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004930")]
		[Address(RVA = "0x43BEB80", Offset = "0x43BEB80", VA = "0x43BEB80")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6004932")]
		[Address(RVA = "0x43BEC30", Offset = "0x43BEC30", VA = "0x43BEC30", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002492")]
	[FieldOffset(Offset = "0x0")]
	public static JSONNode Leaderboard;

	[Token(Token = "0x4002493")]
	[FieldOffset(Offset = "0x8")]
	public static JSONNode Version;

	[Token(Token = "0x4002494")]
	[FieldOffset(Offset = "0x10")]
	public static PastebinStatus Status;

	[Token(Token = "0x4002495")]
	[FieldOffset(Offset = "0x18")]
	private static PastebinLoader _instance;

	[Token(Token = "0x4002496")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string VersionURL;

	[Token(Token = "0x4002497")]
	[FieldOffset(Offset = "0x28")]
	private static readonly string LeaderboardURL;

	[Token(Token = "0x4002498")]
	[FieldOffset(Offset = "0x30")]
	private static readonly string PlatformURL;

	[Token(Token = "0x6004928")]
	[Address(RVA = "0x43BDF70", Offset = "0x43BDF70", VA = "0x43BDF70")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004929")]
	[Address(RVA = "0x43BDFF0", Offset = "0x43BDFF0", VA = "0x43BDFF0")]
	public static void LoadPastebin()
	{
	}

	[Token(Token = "0x600492A")]
	[Address(RVA = "0x43BE0D0", Offset = "0x43BE0D0", VA = "0x43BE0D0")]
	[IteratorStateMachine(typeof(_003CLoadPastebinCoroutine_003Ed__9))]
	private IEnumerator LoadPastebinCoroutine()
	{
		return null;
	}

	[Token(Token = "0x600492B")]
	[Address(RVA = "0x43BE140", Offset = "0x43BE140", VA = "0x43BE140")]
	public PastebinLoader()
	{
	}
}
