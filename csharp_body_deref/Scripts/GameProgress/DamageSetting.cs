// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.DamageSetting
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20001F1")]
internal class DamageSetting : BaseSetting
{
	[Token(Token = "0x20001F4")]
	[CompilerGenerated]
	private sealed class _003CGetStatLabels_003Ed__17 : IEnumerable<(string, string)>, IEnumerable, IEnumerator<(string, string)>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000A76")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000A77")]
		[FieldOffset(Offset = "0x18")]
		private (string title, string value) _003C_003E2__current;

		[Token(Token = "0x4000A78")]
		[FieldOffset(Offset = "0x28")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000A79")]
		[FieldOffset(Offset = "0x30")]
		public DamageSetting _003C_003E4__this;

		[Token(Token = "0x4000A7A")]
		[FieldOffset(Offset = "0x38")]
		private List<KeyValuePair<string, JSONNode>> _003CrootPairs_003E5__2;

		[Token(Token = "0x4000A7B")]
		[FieldOffset(Offset = "0x40")]
		private List<KeyValuePair<string, JSONNode>>.Enumerator _003C_003E7__wrap2;

		[Token(Token = "0x4000A7C")]
		[FieldOffset(Offset = "0x60")]
		private string _003Cweapon_003E5__4;

		[Token(Token = "0x4000A7D")]
		[FieldOffset(Offset = "0x68")]
		private JSONNode.Enumerator _003C_003E7__wrap4;

		[Token(Token = "0x17000173")]
		private (string, string) System_002ECollections_002EGeneric_002EIEnumerator_003C_0028System_002EStringtitle_002CSystem_002EStringvalue_0029_003E_002ECurrent
		{
			[Token(Token = "0x6000BA3")]
			[Address(RVA = "0x443CF50", Offset = "0x443CF50", VA = "0x443CF50", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default((string, string));
			}
		}

		[Token(Token = "0x17000174")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000BA5")]
			[Address(RVA = "0x443CFA0", Offset = "0x443CFA0", VA = "0x443CFA0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000B9E")]
		[Address(RVA = "0x443BAB0", Offset = "0x443BAB0", VA = "0x443BAB0")]
		[DebuggerHidden]
		public _003CGetStatLabels_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000B9F")]
		[Address(RVA = "0x443BD20", Offset = "0x443BD20", VA = "0x443BD20", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000BA0")]
		[Address(RVA = "0x443BDA0", Offset = "0x443BDA0", VA = "0x443BDA0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000BA1")]
		[Address(RVA = "0x443CED0", Offset = "0x443CED0", VA = "0x443CED0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000BA2")]
		[Address(RVA = "0x443CF10", Offset = "0x443CF10", VA = "0x443CF10")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000BA4")]
		[Address(RVA = "0x443CF60", Offset = "0x443CF60", VA = "0x443CF60", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000BA6")]
		[Address(RVA = "0x443CFF0", Offset = "0x443CFF0", VA = "0x443CFF0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<(string, string)> System_002ECollections_002EGeneric_002EIEnumerable_003C_0028System_002EStringtitle_002CSystem_002EStringvalue_0029_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000BA7")]
		[Address(RVA = "0x443D090", Offset = "0x443D090", VA = "0x443D090", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000A6D")]
	private const string OverallKey = "Overall";

	[Token(Token = "0x4000A6E")]
	private const string HighestKey = "Highest";

	[Token(Token = "0x4000A6F")]
	private const string TotalKey = "Total";

	[Token(Token = "0x4000A70")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Comparison<KeyValuePair<string, JSONNode>> Comparison;

	[Token(Token = "0x4000A71")]
	[FieldOffset(Offset = "0x10")]
	private JSONNode root;

	[Token(Token = "0x17000171")]
	private (ulong highest, ulong total) this[KillMethod method]
	{
		[Token(Token = "0x6000B8C")]
		[Address(RVA = "0x443AD20", Offset = "0x443AD20", VA = "0x443AD20")]
		get
		{
			return default((ulong, ulong));
		}
		[Token(Token = "0x6000B8D")]
		[Address(RVA = "0x443B120", Offset = "0x443B120", VA = "0x443B120")]
		set
		{
		}
	}

	[Token(Token = "0x17000172")]
	private (ulong highest, ulong total) Overall
	{
		[Token(Token = "0x6000B8E")]
		[Address(RVA = "0x443B580", Offset = "0x443B580", VA = "0x443B580")]
		get
		{
			return default((ulong, ulong));
		}
		[Token(Token = "0x6000B8F")]
		[Address(RVA = "0x443B730", Offset = "0x443B730", VA = "0x443B730")]
		set
		{
		}
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x443A960", Offset = "0x443A960", VA = "0x443A960")]
	static DamageSetting()
	{
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x443B8B0", Offset = "0x443B8B0", VA = "0x443B8B0")]
	public DamageSetting()
	{
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x443B8E0", Offset = "0x443B8E0", VA = "0x443B8E0", Slot = "4")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x443B940", Offset = "0x443B940", VA = "0x443B940", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x443B950", Offset = "0x443B950", VA = "0x443B950", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x443B960", Offset = "0x443B960", VA = "0x443B960")]
	public void Register(KillMethod method, ulong damage)
	{
	}

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x443BA30", Offset = "0x443BA30", VA = "0x443BA30")]
	[IteratorStateMachine(typeof(_003CGetStatLabels_003Ed__17))]
	public IEnumerable<(string, string)> GetStatLabels()
	{
		return null;
	}
}
