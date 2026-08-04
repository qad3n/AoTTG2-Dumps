// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JsonPath.ArraySliceFilter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq.JsonPath;

[Token(Token = "0x2000195")]
internal class ArraySliceFilter : PathFilter
{
	[Token(Token = "0x2000196")]
	[CompilerGenerated]
	private sealed class _003CExecuteFilter_003Ed__12 : IEnumerable<JToken>, IEnumerable, IEnumerator<JToken>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000780")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000781")]
		[FieldOffset(Offset = "0x18")]
		private JToken _003C_003E2__current;

		[Token(Token = "0x4000782")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000783")]
		[FieldOffset(Offset = "0x28")]
		public ArraySliceFilter _003C_003E4__this;

		[Token(Token = "0x4000784")]
		[FieldOffset(Offset = "0x30")]
		private IEnumerable<JToken> current;

		[Token(Token = "0x4000785")]
		[FieldOffset(Offset = "0x38")]
		public IEnumerable<JToken> _003C_003E3__current;

		[Token(Token = "0x4000786")]
		[FieldOffset(Offset = "0x40")]
		private JsonSelectSettings settings;

		[Token(Token = "0x4000787")]
		[FieldOffset(Offset = "0x48")]
		public JsonSelectSettings _003C_003E3__settings;

		[Token(Token = "0x4000788")]
		[FieldOffset(Offset = "0x50")]
		private IEnumerator<JToken> _003C_003E7__wrap1;

		[Token(Token = "0x4000789")]
		[FieldOffset(Offset = "0x58")]
		private JArray _003Ca_003E5__3;

		[Token(Token = "0x400078A")]
		[FieldOffset(Offset = "0x60")]
		private int _003CstepCount_003E5__4;

		[Token(Token = "0x400078B")]
		[FieldOffset(Offset = "0x64")]
		private int _003CstopIndex_003E5__5;

		[Token(Token = "0x400078C")]
		[FieldOffset(Offset = "0x68")]
		private bool _003CpositiveStep_003E5__6;

		[Token(Token = "0x400078D")]
		[FieldOffset(Offset = "0x6C")]
		private int _003Ci_003E5__7;

		[Token(Token = "0x1700023C")]
		private JToken System_002ECollections_002EGeneric_002EIEnumerator_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ECurrent
		{
			[Token(Token = "0x6000E1A")]
			[Address(RVA = "0x3E33A60", Offset = "0x3E33A60", VA = "0x3E33A60", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700023D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000E1C")]
			[Address(RVA = "0x3E33AB0", Offset = "0x3E33AB0", VA = "0x3E33AB0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E16")]
		[Address(RVA = "0x3E32B90", Offset = "0x3E32B90", VA = "0x3E32B90")]
		[DebuggerHidden]
		public _003CExecuteFilter_003Ed__12(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E17")]
		[Address(RVA = "0x3E32BF0", Offset = "0x3E32BF0", VA = "0x3E32BF0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E18")]
		[Address(RVA = "0x3E32CA0", Offset = "0x3E32CA0", VA = "0x3E32CA0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E19")]
		[Address(RVA = "0x3E339C0", Offset = "0x3E339C0", VA = "0x3E339C0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000E1B")]
		[Address(RVA = "0x3E33A70", Offset = "0x3E33A70", VA = "0x3E33A70", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000E1D")]
		[Address(RVA = "0x3E33AC0", Offset = "0x3E33AC0", VA = "0x3E33AC0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000E1E")]
		[Address(RVA = "0x3E33B80", Offset = "0x3E33B80", VA = "0x3E33B80", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x17000239")]
	public int? Start
	{
		[Token(Token = "0x6000E0D")]
		[Address(RVA = "0x3E32A80", Offset = "0x3E32A80", VA = "0x3E32A80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E0E")]
		[Address(RVA = "0x3E32A90", Offset = "0x3E32A90", VA = "0x3E32A90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700023A")]
	public int? End
	{
		[Token(Token = "0x6000E0F")]
		[Address(RVA = "0x3E32AA0", Offset = "0x3E32AA0", VA = "0x3E32AA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E10")]
		[Address(RVA = "0x3E32AB0", Offset = "0x3E32AB0", VA = "0x3E32AB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700023B")]
	public int? Step
	{
		[Token(Token = "0x6000E11")]
		[Address(RVA = "0x3E32AC0", Offset = "0x3E32AC0", VA = "0x3E32AC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E12")]
		[Address(RVA = "0x3E32AD0", Offset = "0x3E32AD0", VA = "0x3E32AD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000E13")]
	[Address(RVA = "0x3E32AE0", Offset = "0x3E32AE0", VA = "0x3E32AE0", Slot = "4")]
	[IteratorStateMachine(typeof(_003CExecuteFilter_003Ed__12))]
	public override IEnumerable<JToken> ExecuteFilter(JToken root, IEnumerable<JToken> current, JsonSelectSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x3E32BC0", Offset = "0x3E32BC0", VA = "0x3E32BC0")]
	private bool IsValid(int index, int stopIndex, bool positiveStep)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E15")]
	[Address(RVA = "0x3E32BE0", Offset = "0x3E32BE0", VA = "0x3E32BE0")]
	public ArraySliceFilter()
	{
	}
}
