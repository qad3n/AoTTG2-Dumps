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

[Token(Token = "0x2000363")]
internal class DamageSetting : BaseSetting
{
	[Token(Token = "0x2000366")]
	[CompilerGenerated]
	private sealed class _003CGetStatLabels_003Ed__19 : IEnumerable<(string, string)>, IEnumerable, IEnumerator<(string, string)>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40010EF")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40010F0")]
		[FieldOffset(Offset = "0x18")]
		private (string title, string value) _003C_003E2__current;

		[Token(Token = "0x40010F1")]
		[FieldOffset(Offset = "0x28")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40010F2")]
		[FieldOffset(Offset = "0x30")]
		public DamageSetting _003C_003E4__this;

		[Token(Token = "0x40010F3")]
		[FieldOffset(Offset = "0x38")]
		private List<KeyValuePair<string, JSONNode>> _003CrootPairs_003E5__2;

		[Token(Token = "0x40010F4")]
		[FieldOffset(Offset = "0x40")]
		private string _003Coverall_003E5__3;

		[Token(Token = "0x40010F5")]
		[FieldOffset(Offset = "0x48")]
		private List<KeyValuePair<string, JSONNode>>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x40010F6")]
		[FieldOffset(Offset = "0x68")]
		private KeyValuePair<string, JSONNode> _003Cokvp_003E5__5;

		[Token(Token = "0x40010F7")]
		[FieldOffset(Offset = "0x78")]
		private JSONNode.Enumerator _003C_003E7__wrap5;

		[Token(Token = "0x1700024E")]
		private (string, string) System_002ECollections_002EGeneric_002EIEnumerator_003C_0028System_002EStringtitle_002CSystem_002EStringvalue_0029_003E_002ECurrent
		{
			[Token(Token = "0x6001523")]
			[Address(RVA = "0x581F080", Offset = "0x581E080", VA = "0x581F080", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default((string, string));
			}
		}

		[Token(Token = "0x1700024F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001525")]
			[Address(RVA = "0x581F0D0", Offset = "0x581E0D0", VA = "0x581F0D0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600151E")]
		[Address(RVA = "0x581DCD0", Offset = "0x581CCD0", VA = "0x581DCD0")]
		[DebuggerHidden]
		public _003CGetStatLabels_003Ed__19(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600151F")]
		[Address(RVA = "0x581E440", Offset = "0x581D440", VA = "0x581E440", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001520")]
		[Address(RVA = "0x581E4D0", Offset = "0x581D4D0", VA = "0x581E4D0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001521")]
		[Address(RVA = "0x581F000", Offset = "0x581E000", VA = "0x581F000")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6001522")]
		[Address(RVA = "0x581F040", Offset = "0x581E040", VA = "0x581F040")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6001524")]
		[Address(RVA = "0x581F090", Offset = "0x581E090", VA = "0x581F090", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6001526")]
		[Address(RVA = "0x581F120", Offset = "0x581E120", VA = "0x581F120", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<(string, string)> System_002ECollections_002EGeneric_002EIEnumerable_003C_0028System_002EStringtitle_002CSystem_002EStringvalue_0029_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6001527")]
		[Address(RVA = "0x581F1C0", Offset = "0x581E1C0", VA = "0x581F1C0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40010E6")]
	private const string OverallKey = "Overall";

	[Token(Token = "0x40010E7")]
	private const string HighestKey = "Highest";

	[Token(Token = "0x40010E8")]
	private const string TotalKey = "Total";

	[Token(Token = "0x40010E9")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Comparison<KeyValuePair<string, JSONNode>> Comparison;

	[Token(Token = "0x40010EA")]
	[FieldOffset(Offset = "0x18")]
	private JSONNode root;

	[Token(Token = "0x1700024C")]
	private (ulong highest, ulong total) this[KillMethod method]
	{
		[Token(Token = "0x6001506")]
		[Address(RVA = "0x581CAB0", Offset = "0x581BAB0", VA = "0x581CAB0")]
		get
		{
			return default((ulong, ulong));
		}
		[Token(Token = "0x6001507")]
		[Address(RVA = "0x581CEB0", Offset = "0x581BEB0", VA = "0x581CEB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700024D")]
	private (ulong highest, ulong total) Overall
	{
		[Token(Token = "0x6001508")]
		[Address(RVA = "0x581D330", Offset = "0x581C330", VA = "0x581D330")]
		get
		{
			return default((ulong, ulong));
		}
		[Token(Token = "0x6001509")]
		[Address(RVA = "0x581D4E0", Offset = "0x581C4E0", VA = "0x581D4E0")]
		set
		{
		}
	}

	[Token(Token = "0x6001505")]
	[Address(RVA = "0x581C6F0", Offset = "0x581B6F0", VA = "0x581C6F0")]
	static DamageSetting()
	{
	}

	[Token(Token = "0x600150A")]
	[Address(RVA = "0x581D660", Offset = "0x581C660", VA = "0x581D660")]
	public DamageSetting()
	{
	}

	[Token(Token = "0x600150B")]
	[Address(RVA = "0x581D690", Offset = "0x581C690", VA = "0x581D690", Slot = "4")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x600150C")]
	[Address(RVA = "0x581D6F0", Offset = "0x581C6F0", VA = "0x581D6F0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x600150D")]
	[Address(RVA = "0x581D700", Offset = "0x581C700", VA = "0x581D700", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x600150E")]
	[Address(RVA = "0x581D710", Offset = "0x581C710", VA = "0x581D710")]
	public void ClearRecords()
	{
	}

	[Token(Token = "0x600150F")]
	[Address(RVA = "0x581DAE0", Offset = "0x581CAE0", VA = "0x581DAE0")]
	private static void ClearRecord(JSONNode record)
	{
	}

	[Token(Token = "0x6001510")]
	[Address(RVA = "0x581DB90", Offset = "0x581CB90", VA = "0x581DB90")]
	public void Register(KillMethod method, ulong damage)
	{
	}

	[Token(Token = "0x6001511")]
	[Address(RVA = "0x581DC60", Offset = "0x581CC60", VA = "0x581DC60")]
	[IteratorStateMachine(typeof(_003CGetStatLabels_003Ed__19))]
	public IEnumerable<(string, string)> GetStatLabels()
	{
		return null;
	}

	[Token(Token = "0x6001512")]
	[Address(RVA = "0x581DD00", Offset = "0x581CD00", VA = "0x581DD00")]
	private static string StatLocale(string item, string defaultValue = "")
	{
		return null;
	}

	[Token(Token = "0x6001513")]
	[Address(RVA = "0x581DDA0", Offset = "0x581CDA0", VA = "0x581DDA0")]
	private static string StatLabel(string recordKey, string method)
	{
		return null;
	}

	[Token(Token = "0x6001514")]
	[Address(RVA = "0x581DEF0", Offset = "0x581CEF0", VA = "0x581DEF0")]
	private static string MethodLabel(string weapon, string special)
	{
		return null;
	}

	[Token(Token = "0x6001515")]
	[Address(RVA = "0x581DFB0", Offset = "0x581CFB0", VA = "0x581DFB0")]
	private static string WeaponLabel(string weapon)
	{
		return null;
	}
}
