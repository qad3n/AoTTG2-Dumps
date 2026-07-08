using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000741")]
public class PastebinLoader : MonoBehaviour
{
	[Token(Token = "0x2000742")]
	[CompilerGenerated]
	private sealed class _003CLoadPastebinCoroutine_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002339")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400233A")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400233B")]
		[FieldOffset(Offset = "0x20")]
		private string[] _003Curls_003E5__2;

		[Token(Token = "0x400233C")]
		[FieldOffset(Offset = "0x28")]
		private string _003Cchangelog_003E5__3;

		[Token(Token = "0x400233D")]
		[FieldOffset(Offset = "0x30")]
		private JSONNode[] _003Cnodes_003E5__4;

		[Token(Token = "0x400233E")]
		[FieldOffset(Offset = "0x38")]
		private int _003Ci_003E5__5;

		[Token(Token = "0x400233F")]
		[FieldOffset(Offset = "0x40")]
		private WWW _003Cwww_003E5__6;

		[Token(Token = "0x17000D8F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60046C2")]
			[Address(RVA = "0x40A5C60", Offset = "0x40A5C60", VA = "0x40A5C60", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D90")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60046C4")]
			[Address(RVA = "0x40A5CB0", Offset = "0x40A5CB0", VA = "0x40A5CB0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60046BE")]
		[Address(RVA = "0x40A4FA0", Offset = "0x40A4FA0", VA = "0x40A4FA0")]
		[DebuggerHidden]
		public _003CLoadPastebinCoroutine_003Ed__11(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60046BF")]
		[Address(RVA = "0x40A50B0", Offset = "0x40A50B0", VA = "0x40A50B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60046C0")]
		[Address(RVA = "0x40A5160", Offset = "0x40A5160", VA = "0x40A5160", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60046C1")]
		[Address(RVA = "0x40A5BC0", Offset = "0x40A5BC0", VA = "0x40A5BC0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60046C3")]
		[Address(RVA = "0x40A5C70", Offset = "0x40A5C70", VA = "0x40A5C70", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002330")]
	[FieldOffset(Offset = "0x0")]
	public static JSONNode Leaderboard;

	[Token(Token = "0x4002331")]
	[FieldOffset(Offset = "0x8")]
	public static string Changelog;

	[Token(Token = "0x4002332")]
	[FieldOffset(Offset = "0x10")]
	public static JSONNode Version;

	[Token(Token = "0x4002333")]
	[FieldOffset(Offset = "0x18")]
	public static PastebinStatus Status;

	[Token(Token = "0x4002334")]
	[FieldOffset(Offset = "0x20")]
	private static PastebinLoader _instance;

	[Token(Token = "0x4002335")]
	[FieldOffset(Offset = "0x28")]
	private static readonly string VersionURL;

	[Token(Token = "0x4002336")]
	[FieldOffset(Offset = "0x30")]
	private static readonly string LeaderboardURL;

	[Token(Token = "0x4002337")]
	[FieldOffset(Offset = "0x38")]
	private static readonly string ChangelogURL;

	[Token(Token = "0x4002338")]
	[FieldOffset(Offset = "0x40")]
	private static readonly string PlatformURL;

	[Token(Token = "0x60046B9")]
	[Address(RVA = "0x40A4DF0", Offset = "0x40A4DF0", VA = "0x40A4DF0")]
	public static void Init()
	{
	}

	[Token(Token = "0x60046BA")]
	[Address(RVA = "0x40A4E70", Offset = "0x40A4E70", VA = "0x40A4E70")]
	public static void LoadPastebin()
	{
	}

	[Token(Token = "0x60046BB")]
	[Address(RVA = "0x40A4F50", Offset = "0x40A4F50", VA = "0x40A4F50")]
	[IteratorStateMachine(typeof(_003CLoadPastebinCoroutine_003Ed__11))]
	private IEnumerator LoadPastebinCoroutine()
	{
		return null;
	}

	[Token(Token = "0x60046BC")]
	[Address(RVA = "0x40A4FC0", Offset = "0x40A4FC0", VA = "0x40A4FC0")]
	public PastebinLoader()
	{
	}
}
