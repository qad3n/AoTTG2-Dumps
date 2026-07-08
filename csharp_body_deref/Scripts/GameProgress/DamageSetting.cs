using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Settings;
using SimpleJSONFixed;

namespace GameProgress;

[Token(Token = "0x20001BE")]
internal class DamageSetting : BaseSetting
{
	[Token(Token = "0x20001C1")]
	[CompilerGenerated]
	private sealed class _003CGetStatLabels_003Ed__17 : IEnumerable<(string, string)>, IEnumerable, IEnumerator<(string, string)>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40009B0")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40009B1")]
		[FieldOffset(Offset = "0x18")]
		private (string title, string value) _003C_003E2__current;

		[Token(Token = "0x40009B2")]
		[FieldOffset(Offset = "0x28")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40009B3")]
		[FieldOffset(Offset = "0x30")]
		public DamageSetting _003C_003E4__this;

		[Token(Token = "0x40009B4")]
		[FieldOffset(Offset = "0x38")]
		private List<KeyValuePair<string, JSONNode>> _003CrootPairs_003E5__2;

		[Token(Token = "0x40009B5")]
		[FieldOffset(Offset = "0x40")]
		private List<KeyValuePair<string, JSONNode>>.Enumerator _003C_003E7__wrap2;

		[Token(Token = "0x40009B6")]
		[FieldOffset(Offset = "0x60")]
		private string _003Cweapon_003E5__4;

		[Token(Token = "0x40009B7")]
		[FieldOffset(Offset = "0x68")]
		private JSONNode.Enumerator _003C_003E7__wrap4;

		[Token(Token = "0x1700011D")]
		private (string, string) System_002ECollections_002EGeneric_002EIEnumerator_003C_0028System_002EStringtitle_002CSystem_002EStringvalue_0029_003E_002ECurrent
		{
			[Token(Token = "0x6000A26")]
			[Address(RVA = "0x410A900", Offset = "0x410A900", VA = "0x410A900", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default((string, string));
			}
		}

		[Token(Token = "0x1700011E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000A28")]
			[Address(RVA = "0x410A950", Offset = "0x410A950", VA = "0x410A950", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A21")]
		[Address(RVA = "0x4109460", Offset = "0x4109460", VA = "0x4109460")]
		[DebuggerHidden]
		public _003CGetStatLabels_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000A22")]
		[Address(RVA = "0x41096D0", Offset = "0x41096D0", VA = "0x41096D0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000A23")]
		[Address(RVA = "0x4109750", Offset = "0x4109750", VA = "0x4109750", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A24")]
		[Address(RVA = "0x410A880", Offset = "0x410A880", VA = "0x410A880")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000A25")]
		[Address(RVA = "0x410A8C0", Offset = "0x410A8C0", VA = "0x410A8C0")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000A27")]
		[Address(RVA = "0x410A910", Offset = "0x410A910", VA = "0x410A910", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000A29")]
		[Address(RVA = "0x410A9A0", Offset = "0x410A9A0", VA = "0x410A9A0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<(string, string)> System_002ECollections_002EGeneric_002EIEnumerable_003C_0028System_002EStringtitle_002CSystem_002EStringvalue_0029_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000A2A")]
		[Address(RVA = "0x410AA40", Offset = "0x410AA40", VA = "0x410AA40", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40009A7")]
	private const string OverallKey = "Overall";

	[Token(Token = "0x40009A8")]
	private const string HighestKey = "Highest";

	[Token(Token = "0x40009A9")]
	private const string TotalKey = "Total";

	[Token(Token = "0x40009AA")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Comparison<KeyValuePair<string, JSONNode>> Comparison;

	[Token(Token = "0x40009AB")]
	[FieldOffset(Offset = "0x10")]
	private JSONNode root;

	[Token(Token = "0x1700011B")]
	private (ulong highest, ulong total) this[KillMethod method]
	{
		[Token(Token = "0x6000A0F")]
		[Address(RVA = "0x4108750", Offset = "0x4108750", VA = "0x4108750")]
		get
		{
			return default((ulong, ulong));
		}
		[Token(Token = "0x6000A10")]
		[Address(RVA = "0x4108B50", Offset = "0x4108B50", VA = "0x4108B50")]
		set
		{
		}
	}

	[Token(Token = "0x1700011C")]
	private (ulong highest, ulong total) Overall
	{
		[Token(Token = "0x6000A11")]
		[Address(RVA = "0x4108FB0", Offset = "0x4108FB0", VA = "0x4108FB0")]
		get
		{
			return default((ulong, ulong));
		}
		[Token(Token = "0x6000A12")]
		[Address(RVA = "0x4109160", Offset = "0x4109160", VA = "0x4109160")]
		set
		{
		}
	}

	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x4108390", Offset = "0x4108390", VA = "0x4108390")]
	static DamageSetting()
	{
	}

	[Token(Token = "0x6000A13")]
	[Address(RVA = "0x41092E0", Offset = "0x41092E0", VA = "0x41092E0")]
	public DamageSetting()
	{
	}

	[Token(Token = "0x6000A14")]
	[Address(RVA = "0x4109310", Offset = "0x4109310", VA = "0x4109310", Slot = "4")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x6000A15")]
	[Address(RVA = "0x4109370", Offset = "0x4109370", VA = "0x4109370", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x4109380", Offset = "0x4109380", VA = "0x4109380", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x4109390", Offset = "0x4109390", VA = "0x4109390")]
	public void Register(KillMethod method, ulong damage)
	{
	}

	[Token(Token = "0x6000A18")]
	[Address(RVA = "0x40FCE40", Offset = "0x40FCE40", VA = "0x40FCE40")]
	[IteratorStateMachine(typeof(_003CGetStatLabels_003Ed__17))]
	public IEnumerable<(string, string)> GetStatLabels()
	{
		return null;
	}
}
