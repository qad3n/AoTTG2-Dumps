// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.DamageSetting
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/GameProgress/DamageSetting.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/DamageSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Settings;
using SimpleJSONFixed;

namespace GameProgress;

[Token(Token = "0x2000302")]
internal class DamageSetting : BaseSetting
{
	[Token(Token = "0x2000305")]
	[CompilerGenerated]
	private sealed class _003CGetStatLabels_003Ed__19 : IEnumerable<(string, string)>, IEnumerable, IEnumerator<(string, string)>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000F51")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000F52")]
		[FieldOffset(Offset = "0x18")]
		private (string title, string value) _003C_003E2__current;

		[Token(Token = "0x4000F53")]
		[FieldOffset(Offset = "0x28")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000F54")]
		[FieldOffset(Offset = "0x30")]
		public DamageSetting _003C_003E4__this;

		[Token(Token = "0x4000F55")]
		[FieldOffset(Offset = "0x38")]
		private List<KeyValuePair<string, JSONNode>> _003CrootPairs_003E5__2;

		[Token(Token = "0x4000F56")]
		[FieldOffset(Offset = "0x40")]
		private List<KeyValuePair<string, JSONNode>>.Enumerator _003C_003E7__wrap2;

		[Token(Token = "0x4000F57")]
		[FieldOffset(Offset = "0x60")]
		private string _003Cweapon_003E5__4;

		[Token(Token = "0x4000F58")]
		[FieldOffset(Offset = "0x68")]
		private JSONNode.Enumerator _003C_003E7__wrap4;

		[Token(Token = "0x17000207")]
		private (string, string) System_002ECollections_002EGeneric_002EIEnumerator_003C_0028System_002EStringtitle_002CSystem_002EStringvalue_0029_003E_002ECurrent
		{
			[Token(Token = "0x60012B1")]
			[Address(RVA = "0x8E7990", Offset = "0x8E5F90", VA = "0x1808E7990", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default((string, string));
			}
		}

		[Token(Token = "0x17000208")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60012B3")]
			[Address(RVA = "0x1E3CF60", Offset = "0x1E3B560", VA = "0x181E3CF60", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60012AC")]
		[Address(RVA = "0x8E81C0", Offset = "0x8E67C0", VA = "0x1808E81C0")]
		[DebuggerHidden]
		public _003CGetStatLabels_003Ed__19(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60012AD")]
		[Address(RVA = "0x1E3CFB0", Offset = "0x1E3B5B0", VA = "0x181E3CFB0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60012AE")]
		[Address(RVA = "0x1E3C240", Offset = "0x1E3A840", VA = "0x181E3C240", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60012AF")]
		[Address(RVA = "0x1E3D0C0", Offset = "0x1E3B6C0", VA = "0x181E3D0C0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60012B0")]
		[Address(RVA = "0x1E3D110", Offset = "0x1E3B710", VA = "0x181E3D110")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x60012B2")]
		[Address(RVA = "0x1E3CF20", Offset = "0x1E3B520", VA = "0x181E3CF20", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60012B4")]
		[Address(RVA = "0x1E3CE80", Offset = "0x1E3B480", VA = "0x181E3CE80", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<(string, string)> System_002ECollections_002EGeneric_002EIEnumerable_003C_0028System_002EStringtitle_002CSystem_002EStringvalue_0029_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60012B5")]
		[Address(RVA = "0x1E3CE80", Offset = "0x1E3B480", VA = "0x181E3CE80", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000F48")]
	private const string OverallKey = "Overall";

	[Token(Token = "0x4000F49")]
	private const string HighestKey = "Highest";

	[Token(Token = "0x4000F4A")]
	private const string TotalKey = "Total";

	[Token(Token = "0x4000F4B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Comparison<KeyValuePair<string, JSONNode>> Comparison;

	[Token(Token = "0x4000F4C")]
	[FieldOffset(Offset = "0x18")]
	private JSONNode root;

	[Token(Token = "0x17000205")]
	private (ulong highest, ulong total) this[KillMethod method]
	{
		[Token(Token = "0x6001298")]
		[Address(RVA = "0x1E33CB0", Offset = "0x1E322B0", VA = "0x181E33CB0")]
		get
		{
			return default((ulong, ulong));
		}
		[Token(Token = "0x6001299")]
		[Address(RVA = "0x1E341A0", Offset = "0x1E327A0", VA = "0x181E341A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000206")]
	private (ulong highest, ulong total) Overall
	{
		[Token(Token = "0x600129A")]
		[Address(RVA = "0x1E33FF0", Offset = "0x1E325F0", VA = "0x181E33FF0")]
		get
		{
			return default((ulong, ulong));
		}
		[Token(Token = "0x600129B")]
		[Address(RVA = "0x1E345E0", Offset = "0x1E32BE0", VA = "0x181E345E0")]
		set
		{
		}
	}

	[Token(Token = "0x6001297")]
	[Address(RVA = "0x1E338F0", Offset = "0x1E31EF0", VA = "0x181E338F0")]
	static DamageSetting()
	{
	}

	[Token(Token = "0x600129C")]
	[Address(RVA = "0x1E33C80", Offset = "0x1E32280", VA = "0x181E33C80")]
	public DamageSetting()
	{
	}

	[Token(Token = "0x600129D")]
	[Address(RVA = "0x1E33890", Offset = "0x1E31E90", VA = "0x181E33890", Slot = "4")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x600129E")]
	[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x600129F")]
	[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x60012A0")]
	[Address(RVA = "0x1E332E0", Offset = "0x1E318E0", VA = "0x181E332E0")]
	public void ClearRecords()
	{
	}

	[Token(Token = "0x60012A1")]
	[Address(RVA = "0x1E33230", Offset = "0x1E31830", VA = "0x181E33230")]
	private static void ClearRecord(JSONNode record)
	{
	}

	[Token(Token = "0x60012A2")]
	[Address(RVA = "0x1E33620", Offset = "0x1E31C20", VA = "0x181E33620")]
	public void Register(KillMethod method, ulong damage)
	{
	}

	[Token(Token = "0x60012A3")]
	[Address(RVA = "0x1E335A0", Offset = "0x1E31BA0", VA = "0x181E335A0")]
	[IteratorStateMachine(typeof(_003CGetStatLabels_003Ed__19))]
	public IEnumerable<(string, string)> GetStatLabels()
	{
		return null;
	}
}
