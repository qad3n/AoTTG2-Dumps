// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JToken
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Dynamic;
using System.Linq.Expressions;
using System.Numerics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq;

[Token(Token = "0x2000180")]
public abstract class JToken : IJEnumerable<JToken>, IEnumerable<JToken>, IEnumerable, IJsonLineInfo, ICloneable, IDynamicMetaObjectProvider
{
	[Token(Token = "0x2000181")]
	private class LineInfoAnnotation
	{
		[Token(Token = "0x4000713")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal readonly int LineNumber;

		[Token(Token = "0x4000714")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		internal readonly int LinePosition;

		[Token(Token = "0x6000D4A")]
		[Address(RVA = "0x1C88650", Offset = "0x1C86C50", VA = "0x181C88650")]
		public LineInfoAnnotation(int lineNumber, int linePosition)
		{
		}
	}

	[Token(Token = "0x2000182")]
	[CompilerGenerated]
	private sealed class _003CAfterSelf_003Ed__49 : IEnumerable<JToken>, IEnumerable, IEnumerator<JToken>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000715")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000716")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private JToken _003C_003E2__current;

		[Token(Token = "0x4000717")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000718")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JToken _003C_003E4__this;

		[Token(Token = "0x4000719")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private JToken _003Co_003E5__2;

		[Token(Token = "0x17000221")]
		private JToken System_002ECollections_002EGeneric_002EIEnumerator_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ECurrent
		{
			[Token(Token = "0x6000D4E")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000222")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D50")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D4B")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CAfterSelf_003Ed__49(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D4C")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D4D")]
		[Address(RVA = "0x1C88690", Offset = "0x1C86C90", VA = "0x181C88690", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D4F")]
		[Address(RVA = "0x1C887D0", Offset = "0x1C86DD0", VA = "0x181C887D0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000D51")]
		[Address(RVA = "0x1C88730", Offset = "0x1C86D30", VA = "0x181C88730", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000D52")]
		[Address(RVA = "0x1C88730", Offset = "0x1C86D30", VA = "0x181C88730", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000183")]
	[CompilerGenerated]
	private sealed class _003CAnnotations_003Ed__185<T> : IEnumerable<T>, IEnumerable, IEnumerator<T>, IEnumerator, IDisposable where T : class
	{
		[Token(Token = "0x400071A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x400071B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _003C_003E2__current;

		[Token(Token = "0x400071C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400071D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public JToken _003C_003E4__this;

		[Token(Token = "0x400071E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private object[] _003Cannotations_003E5__2;

		[Token(Token = "0x400071F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x17000223")]
		private T System_002ECollections_002EGeneric_002EIEnumerator_003CT_003E_002ECurrent
		{
			[Token(Token = "0x6000D56")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000224")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D58")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D53")]
		[DebuggerHidden]
		public _003CAnnotations_003Ed__185(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D54")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D55")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D57")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000D59")]
		[DebuggerHidden]
		private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000D5A")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000184")]
	[CompilerGenerated]
	private sealed class _003CAnnotations_003Ed__186 : IEnumerable<object>, IEnumerable, IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000720")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000721")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000722")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000723")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private Type type;

		[Token(Token = "0x4000724")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Type _003C_003E3__type;

		[Token(Token = "0x4000725")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public JToken _003C_003E4__this;

		[Token(Token = "0x4000726")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private object[] _003Cannotations_003E5__2;

		[Token(Token = "0x4000727")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x17000225")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000D5E")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000226")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D60")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D5B")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CAnnotations_003Ed__186(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D5C")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D5D")]
		[Address(RVA = "0x1C88810", Offset = "0x1C86E10", VA = "0x181C88810", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D5F")]
		[Address(RVA = "0x1C88AF0", Offset = "0x1C870F0", VA = "0x181C88AF0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000D61")]
		[Address(RVA = "0x1C88A40", Offset = "0x1C87040", VA = "0x181C88A40", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<object> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EObject_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000D62")]
		[Address(RVA = "0x1C88A40", Offset = "0x1C87040", VA = "0x181C88A40", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000185")]
	[CompilerGenerated]
	private sealed class _003CBeforeSelf_003Ed__50 : IEnumerable<JToken>, IEnumerable, IEnumerator<JToken>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000728")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000729")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private JToken _003C_003E2__current;

		[Token(Token = "0x400072A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400072B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JToken _003C_003E4__this;

		[Token(Token = "0x400072C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private JToken _003Co_003E5__2;

		[Token(Token = "0x17000227")]
		private JToken System_002ECollections_002EGeneric_002EIEnumerator_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ECurrent
		{
			[Token(Token = "0x6000D66")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000228")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D68")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D63")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CBeforeSelf_003Ed__50(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D64")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D65")]
		[Address(RVA = "0x1C88B30", Offset = "0x1C87130", VA = "0x181C88B30", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D67")]
		[Address(RVA = "0x1C88CA0", Offset = "0x1C872A0", VA = "0x181C88CA0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000D69")]
		[Address(RVA = "0x1C88C00", Offset = "0x1C87200", VA = "0x181C88C00", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000D6A")]
		[Address(RVA = "0x1C88C00", Offset = "0x1C87200", VA = "0x181C88C00", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000186")]
	[CompilerGenerated]
	private sealed class _003CGetAncestors_003Ed__48 : IEnumerable<JToken>, IEnumerable, IEnumerator<JToken>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400072D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400072E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private JToken _003C_003E2__current;

		[Token(Token = "0x400072F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000730")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		private bool self;

		[Token(Token = "0x4000731")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x25")]
		public bool _003C_003E3__self;

		[Token(Token = "0x4000732")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JToken _003C_003E4__this;

		[Token(Token = "0x4000733")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private JToken _003Ccurrent_003E5__2;

		[Token(Token = "0x17000229")]
		private JToken System_002ECollections_002EGeneric_002EIEnumerator_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ECurrent
		{
			[Token(Token = "0x6000D6E")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700022A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D70")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D6B")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CGetAncestors_003Ed__48(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D6C")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D6D")]
		[Address(RVA = "0x1C89250", Offset = "0x1C87850", VA = "0x181C89250", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D6F")]
		[Address(RVA = "0x1C893A0", Offset = "0x1C879A0", VA = "0x181C893A0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000D71")]
		[Address(RVA = "0x1C892F0", Offset = "0x1C878F0", VA = "0x181C892F0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000D72")]
		[Address(RVA = "0x1C892F0", Offset = "0x1C878F0", VA = "0x181C892F0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000187")]
	[CompilerGenerated]
	private struct _003CReadFromAsync_003Ed__3 : IAsyncStateMachine
	{
		[Token(Token = "0x4000734")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000735")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<JToken> _003C_003Et__builder;

		[Token(Token = "0x4000736")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonReader reader;

		[Token(Token = "0x4000737")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JsonLoadSettings settings;

		[Token(Token = "0x4000738")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000739")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x400073A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<JObject>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x400073B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredTaskAwaitable<JArray>.ConfiguredTaskAwaiter _003C_003Eu__3;

		[Token(Token = "0x400073C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private ConfiguredTaskAwaitable<JConstructor>.ConfiguredTaskAwaiter _003C_003Eu__4;

		[Token(Token = "0x400073D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private ConfiguredTaskAwaitable<JProperty>.ConfiguredTaskAwaiter _003C_003Eu__5;

		[Token(Token = "0x6000D73")]
		[Address(RVA = "0x1C8BC50", Offset = "0x1C8A250", VA = "0x181C8BC50", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D74")]
		[Address(RVA = "0x1C8C640", Offset = "0x1C8AC40", VA = "0x181C8C640", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000704")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static JTokenEqualityComparer? _equalityComparer;

	[Token(Token = "0x4000705")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private JContainer? _parent;

	[Token(Token = "0x4000706")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private JToken? _previous;

	[Token(Token = "0x4000707")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private JToken? _next;

	[Token(Token = "0x4000708")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private object? _annotations;

	[Token(Token = "0x4000709")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly JTokenType[] BooleanTypes;

	[Token(Token = "0x400070A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly JTokenType[] NumberTypes;

	[Token(Token = "0x400070B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly JTokenType[] BigIntegerTypes;

	[Token(Token = "0x400070C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly JTokenType[] StringTypes;

	[Token(Token = "0x400070D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static readonly JTokenType[] GuidTypes;

	[Token(Token = "0x400070E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static readonly JTokenType[] TimeSpanTypes;

	[Token(Token = "0x400070F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static readonly JTokenType[] UriTypes;

	[Token(Token = "0x4000710")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static readonly JTokenType[] CharTypes;

	[Token(Token = "0x4000711")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static readonly JTokenType[] DateTimeTypes;

	[Token(Token = "0x4000712")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private static readonly JTokenType[] BytesTypes;

	[Token(Token = "0x17000213")]
	public static JTokenEqualityComparer EqualityComparer
	{
		[Token(Token = "0x6000CAF")]
		[Address(RVA = "0x1C806E0", Offset = "0x1C7ECE0", VA = "0x181C806E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000214")]
	public JContainer? Parent
	{
		[Token(Token = "0x6000CB0")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[DebuggerStepThrough]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CB1")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000215")]
	public JToken Root
	{
		[Token(Token = "0x6000CB2")]
		[Address(RVA = "0x1C80C80", Offset = "0x1C7F280", VA = "0x181C80C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000216")]
	public abstract JTokenType Type
	{
		[Token(Token = "0x6000CB5")]
		get;
	}

	[Token(Token = "0x17000217")]
	public abstract bool HasValues
	{
		[Token(Token = "0x6000CB6")]
		get;
	}

	[Token(Token = "0x17000218")]
	public JToken? Next
	{
		[Token(Token = "0x6000CB8")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CB9")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000219")]
	public JToken? Previous
	{
		[Token(Token = "0x6000CBA")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CBB")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700021A")]
	public string Path
	{
		[Token(Token = "0x6000CBC")]
		[Address(RVA = "0x1C809B0", Offset = "0x1C7EFB0", VA = "0x181C809B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021B")]
	public virtual JToken? this[object key]
	{
		[Token(Token = "0x6000CC5")]
		[Address(RVA = "0x1C80870", Offset = "0x1C7EE70", VA = "0x181C80870", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CC6")]
		[Address(RVA = "0x1C88230", Offset = "0x1C86830", VA = "0x181C88230", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x1700021C")]
	public virtual JToken? First
	{
		[Token(Token = "0x6000CC8")]
		[Address(RVA = "0x1C807D0", Offset = "0x1C7EDD0", VA = "0x181C807D0", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021D")]
	public virtual JToken? Last
	{
		[Token(Token = "0x6000CC9")]
		[Address(RVA = "0x1C80910", Offset = "0x1C7EF10", VA = "0x181C80910", Slot = "21")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'Newtonsoft.Json.Linq.IJEnumerable<Newtonsoft.Json.Linq.JToken>.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x1700021E")]
	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x1C7D720", Offset = "0x1C7BD20", VA = "0x181C7D720", Slot = "4")]
	private IJEnumerable<JToken> Newtonsoft_002EJson_002ELinq_002EIJEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002Eget_Item(object key)
	{
		return null;
	}

	[Token(Token = "0x1700021F")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELineNumber
	{
		[Token(Token = "0x6000D34")]
		[Address(RVA = "0x1C7D680", Offset = "0x1C7BC80", VA = "0x181C7D680", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000220")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELinePosition
	{
		[Token(Token = "0x6000D35")]
		[Address(RVA = "0x1C7D6D0", Offset = "0x1C7BCD0", VA = "0x181C7D6D0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x1C80290", Offset = "0x1C7E890", VA = "0x181C80290", Slot = "12")]
	public virtual Task WriteToAsync(JsonWriter writer, CancellationToken cancellationToken, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x1C802D0", Offset = "0x1C7E8D0", VA = "0x181C802D0")]
	public Task WriteToAsync(JsonWriter writer, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000CAB")]
	[Address(RVA = "0x1C7DA60", Offset = "0x1C7C060", VA = "0x181C7DA60")]
	public static Task<JToken> ReadFromAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000CAC")]
	[Address(RVA = "0x1C7D930", Offset = "0x1C7BF30", VA = "0x181C7D930")]
	[AsyncStateMachine(typeof(_003CReadFromAsync_003Ed__3))]
	public static Task<JToken> ReadFromAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x1C7D4D0", Offset = "0x1C7BAD0", VA = "0x181C7D4D0")]
	public static Task<JToken> LoadAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x1C7D460", Offset = "0x1C7BA60", VA = "0x181C7D460")]
	public static Task<JToken> LoadAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000CB3")]
	internal abstract JToken CloneToken(JsonCloneSettings? settings);

	[Token(Token = "0x6000CB4")]
	internal abstract bool DeepEquals(JToken node);

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x1C7CED0", Offset = "0x1C7B4D0", VA = "0x181C7CED0")]
	public static bool DeepEquals(JToken? t1, JToken? t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal JToken()
	{
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x1C7C5E0", Offset = "0x1C7ABE0", VA = "0x181C7C5E0")]
	public void AddAfterSelf(object? content)
	{
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x1C7C960", Offset = "0x1C7AF60", VA = "0x181C7C960")]
	public void AddBeforeSelf(object? content)
	{
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x1C7CAA0", Offset = "0x1C7B0A0", VA = "0x181C7CAA0")]
	public IEnumerable<JToken> Ancestors()
	{
		return null;
	}

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x1C7CA90", Offset = "0x1C7B090", VA = "0x181C7CA90")]
	public IEnumerable<JToken> AncestorsAndSelf()
	{
		return null;
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x1C7D240", Offset = "0x1C7B840", VA = "0x181C7D240")]
	[IteratorStateMachine(typeof(_003CGetAncestors_003Ed__48))]
	internal IEnumerable<JToken> GetAncestors(bool self)
	{
		return null;
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x1C7CA10", Offset = "0x1C7B010", VA = "0x181C7CA10")]
	[IteratorStateMachine(typeof(_003CAfterSelf_003Ed__49))]
	public IEnumerable<JToken> AfterSelf()
	{
		return null;
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x1C7CCB0", Offset = "0x1C7B2B0", VA = "0x181C7CCB0")]
	[IteratorStateMachine(typeof(_003CBeforeSelf_003Ed__50))]
	public IEnumerable<JToken> BeforeSelf()
	{
		return null;
	}

	[Token(Token = "0x6000CC7")]
	public virtual T? Value<T>(object key)
	{
		return (T?)null;
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x1C7CD30", Offset = "0x1C7B330", VA = "0x181C7CD30", Slot = "22")]
	public virtual JEnumerable<JToken> Children()
	{
		return default(JEnumerable<JToken>);
	}

	[Token(Token = "0x6000CCB")]
	public JEnumerable<T> Children<T>() where T : JToken
	{
		return default(JEnumerable<T>);
	}

	[Token(Token = "0x6000CCC")]
	public virtual IEnumerable<T?>? Values<T>()
	{
		return null;
	}

	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x1C7E080", Offset = "0x1C7C680", VA = "0x181C7E080")]
	public void Remove()
	{
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x1C7E100", Offset = "0x1C7C700", VA = "0x181C7E100")]
	public void Replace(JToken value)
	{
	}

	[Token(Token = "0x6000CCF")]
	public abstract void WriteTo(JsonWriter writer, params JsonConverter[] converters);

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x1C7FF60", Offset = "0x1C7E560", VA = "0x181C7FF60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x1C80010", Offset = "0x1C7E610", VA = "0x181C80010")]
	public string ToString(Formatting formatting, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x1C7CF00", Offset = "0x1C7B500", VA = "0x181C7CF00")]
	private static JValue EnsureValue(JToken value)
	{
		return null;
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x1C7D380", Offset = "0x1C7B980", VA = "0x181C7D380")]
	private static string GetType(JToken token)
	{
		return null;
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x1C801B0", Offset = "0x1C7E7B0", VA = "0x181C801B0")]
	private static bool ValidateToken(JToken o, JTokenType[] validTypes, bool nullable)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x1C839D0", Offset = "0x1C81FD0", VA = "0x181C839D0")]
	public static explicit operator bool(JToken value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x1C82280", Offset = "0x1C80880", VA = "0x181C82280")]
	public static explicit operator DateTimeOffset(JToken value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x1C855F0", Offset = "0x1C83BF0", VA = "0x181C855F0")]
	public static explicit operator bool?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x1C863A0", Offset = "0x1C849A0", VA = "0x181C863A0")]
	public static explicit operator long(JToken value)
	{
		return default(long);
	}

	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x1C84FF0", Offset = "0x1C835F0", VA = "0x181C84FF0")]
	public static explicit operator DateTime?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x1C81EF0", Offset = "0x1C804F0", VA = "0x181C81EF0")]
	public static explicit operator DateTimeOffset?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CDB")]
	[Address(RVA = "0x1C84990", Offset = "0x1C82F90", VA = "0x181C84990")]
	public static explicit operator decimal?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x1C86D90", Offset = "0x1C85390", VA = "0x181C86D90")]
	public static explicit operator double?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x1C827A0", Offset = "0x1C80DA0", VA = "0x181C827A0")]
	public static explicit operator char?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x1C83400", Offset = "0x1C81A00", VA = "0x181C83400")]
	public static explicit operator int(JToken value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x1C83EF0", Offset = "0x1C824F0", VA = "0x181C83EF0")]
	public static explicit operator short(JToken value)
	{
		return default(short);
	}

	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x1C858E0", Offset = "0x1C83EE0", VA = "0x181C858E0")]
	[CLSCompliant(false)]
	public static explicit operator ushort(JToken value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x1C85B40", Offset = "0x1C84140", VA = "0x181C85B40")]
	[CLSCompliant(false)]
	public static explicit operator char(JToken value)
	{
		return default(char);
	}

	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x1C87080", Offset = "0x1C85680", VA = "0x181C87080")]
	public static explicit operator byte(JToken value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000CE3")]
	[Address(RVA = "0x1C84440", Offset = "0x1C82A40", VA = "0x181C84440")]
	[CLSCompliant(false)]
	public static explicit operator sbyte(JToken value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000CE4")]
	[Address(RVA = "0x1C84CF0", Offset = "0x1C832F0", VA = "0x181C84CF0")]
	public static explicit operator int?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CE5")]
	[Address(RVA = "0x1C82E00", Offset = "0x1C81400", VA = "0x181C82E00")]
	public static explicit operator short?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CE6")]
	[Address(RVA = "0x1C85DA0", Offset = "0x1C843A0", VA = "0x181C85DA0")]
	[CLSCompliant(false)]
	public static explicit operator ushort?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CE7")]
	[Address(RVA = "0x1C81700", Offset = "0x1C7FD00", VA = "0x181C81700")]
	public static explicit operator byte?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CE8")]
	[Address(RVA = "0x1C860A0", Offset = "0x1C846A0", VA = "0x181C860A0")]
	[CLSCompliant(false)]
	public static explicit operator sbyte?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x1C81C90", Offset = "0x1C80290", VA = "0x181C81C90")]
	public static explicit operator DateTime(JToken value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000CEA")]
	[Address(RVA = "0x1C846A0", Offset = "0x1C82CA0", VA = "0x181C846A0")]
	public static explicit operator long?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CEB")]
	[Address(RVA = "0x1C811A0", Offset = "0x1C7F7A0", VA = "0x181C811A0")]
	public static explicit operator float?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CEC")]
	[Address(RVA = "0x1C80F10", Offset = "0x1C7F510", VA = "0x181C80F10")]
	public static explicit operator decimal(JToken value)
	{
		return 0m;
	}

	[Token(Token = "0x6000CED")]
	[Address(RVA = "0x1C83100", Offset = "0x1C81700", VA = "0x181C83100")]
	[CLSCompliant(false)]
	public static explicit operator uint?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x1C84150", Offset = "0x1C82750", VA = "0x181C84150")]
	[CLSCompliant(false)]
	public static explicit operator ulong?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x1C868D0", Offset = "0x1C84ED0", VA = "0x181C868D0")]
	public static explicit operator double(JToken value)
	{
		return default(double);
	}

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x1C82540", Offset = "0x1C80B40", VA = "0x181C82540")]
	public static explicit operator float(JToken value)
	{
		return default(float);
	}

	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x1C852C0", Offset = "0x1C838C0", VA = "0x181C852C0")]
	public static explicit operator string?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x1C814A0", Offset = "0x1C7FAA0", VA = "0x181C814A0")]
	[CLSCompliant(false)]
	public static explicit operator uint(JToken value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x1C80CB0", Offset = "0x1C7F2B0", VA = "0x181C80CB0")]
	[CLSCompliant(false)]
	public static explicit operator ulong(JToken value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x1C82AA0", Offset = "0x1C810A0", VA = "0x181C82AA0")]
	public static explicit operator byte[]?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x1C81A00", Offset = "0x1C80000", VA = "0x181C81A00")]
	public static explicit operator Guid(JToken value)
	{
		return default(Guid);
	}

	[Token(Token = "0x6000CF6")]
	[Address(RVA = "0x1C83660", Offset = "0x1C81C60", VA = "0x181C83660")]
	public static explicit operator Guid?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CF7")]
	[Address(RVA = "0x1C86B30", Offset = "0x1C85130", VA = "0x181C86B30")]
	public static explicit operator TimeSpan(JToken value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x1C86600", Offset = "0x1C84C00", VA = "0x181C86600")]
	public static explicit operator TimeSpan?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x1C83C60", Offset = "0x1C82260", VA = "0x181C83C60")]
	public static explicit operator Uri?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x1C7EA60", Offset = "0x1C7D060", VA = "0x181C7EA60")]
	private static BigInteger ToBigInteger(JToken value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x1C7E800", Offset = "0x1C7CE00", VA = "0x181C7E800")]
	private static BigInteger? ToBigIntegerNullable(JToken value)
	{
		return null;
	}

	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x1C87B20", Offset = "0x1C86120", VA = "0x181C87B20")]
	public static implicit operator JToken(bool value)
	{
		return null;
	}

	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x1C87440", Offset = "0x1C85A40", VA = "0x181C87440")]
	public static implicit operator JToken(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x6000CFE")]
	[Address(RVA = "0x1C87F30", Offset = "0x1C86530", VA = "0x181C87F30")]
	public static implicit operator JToken(byte value)
	{
		return null;
	}

	[Token(Token = "0x6000CFF")]
	[Address(RVA = "0x1C87F90", Offset = "0x1C86590", VA = "0x181C87F90")]
	public static implicit operator JToken(byte? value)
	{
		return null;
	}

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x1C875A0", Offset = "0x1C85BA0", VA = "0x181C875A0")]
	[CLSCompliant(false)]
	public static implicit operator JToken(sbyte value)
	{
		return null;
	}

	[Token(Token = "0x6000D01")]
	[Address(RVA = "0x1C87340", Offset = "0x1C85940", VA = "0x181C87340")]
	[CLSCompliant(false)]
	public static implicit operator JToken(sbyte? value)
	{
		return null;
	}

	[Token(Token = "0x6000D02")]
	[Address(RVA = "0x1C874A0", Offset = "0x1C85AA0", VA = "0x181C874A0")]
	public static implicit operator JToken(bool? value)
	{
		return null;
	}

	[Token(Token = "0x6000D03")]
	[Address(RVA = "0x1C87AC0", Offset = "0x1C860C0", VA = "0x181C87AC0")]
	public static implicit operator JToken(long value)
	{
		return null;
	}

	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x1C87930", Offset = "0x1C85F30", VA = "0x181C87930")]
	public static implicit operator JToken(DateTime? value)
	{
		return null;
	}

	[Token(Token = "0x6000D05")]
	[Address(RVA = "0x1C87E40", Offset = "0x1C86440", VA = "0x181C87E40")]
	public static implicit operator JToken(DateTimeOffset? value)
	{
		return null;
	}

	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x1C87600", Offset = "0x1C85C00", VA = "0x181C87600")]
	public static implicit operator JToken(decimal? value)
	{
		return null;
	}

	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x1C87D00", Offset = "0x1C86300", VA = "0x181C87D00")]
	public static implicit operator JToken(double? value)
	{
		return null;
	}

	[Token(Token = "0x6000D08")]
	[Address(RVA = "0x1C87CA0", Offset = "0x1C862A0", VA = "0x181C87CA0")]
	[CLSCompliant(false)]
	public static implicit operator JToken(short value)
	{
		return null;
	}

	[Token(Token = "0x6000D09")]
	[Address(RVA = "0x1C872E0", Offset = "0x1C858E0", VA = "0x181C872E0")]
	[CLSCompliant(false)]
	public static implicit operator JToken(ushort value)
	{
		return null;
	}

	[Token(Token = "0x6000D0A")]
	[Address(RVA = "0x1C87ED0", Offset = "0x1C864D0", VA = "0x181C87ED0")]
	public static implicit operator JToken(int value)
	{
		return null;
	}

	[Token(Token = "0x6000D0B")]
	[Address(RVA = "0x1C87770", Offset = "0x1C85D70", VA = "0x181C87770")]
	public static implicit operator JToken(int? value)
	{
		return null;
	}

	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x1C877F0", Offset = "0x1C85DF0", VA = "0x181C877F0")]
	public static implicit operator JToken(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x1C881B0", Offset = "0x1C867B0", VA = "0x181C881B0")]
	public static implicit operator JToken(long? value)
	{
		return null;
	}

	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x1C878B0", Offset = "0x1C85EB0", VA = "0x181C878B0")]
	public static implicit operator JToken(float? value)
	{
		return null;
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x1C88010", Offset = "0x1C86610", VA = "0x181C88010")]
	public static implicit operator JToken(decimal value)
	{
		return null;
	}

	[Token(Token = "0x6000D10")]
	[Address(RVA = "0x1C876F0", Offset = "0x1C85CF0", VA = "0x181C876F0")]
	[CLSCompliant(false)]
	public static implicit operator JToken(short? value)
	{
		return null;
	}

	[Token(Token = "0x6000D11")]
	[Address(RVA = "0x1C87520", Offset = "0x1C85B20", VA = "0x181C87520")]
	[CLSCompliant(false)]
	public static implicit operator JToken(ushort? value)
	{
		return null;
	}

	[Token(Token = "0x6000D12")]
	[Address(RVA = "0x1C873C0", Offset = "0x1C859C0", VA = "0x181C873C0")]
	[CLSCompliant(false)]
	public static implicit operator JToken(uint? value)
	{
		return null;
	}

	[Token(Token = "0x6000D13")]
	[Address(RVA = "0x1C87A40", Offset = "0x1C86040", VA = "0x181C87A40")]
	[CLSCompliant(false)]
	public static implicit operator JToken(ulong? value)
	{
		return null;
	}

	[Token(Token = "0x6000D14")]
	[Address(RVA = "0x1C87850", Offset = "0x1C85E50", VA = "0x181C87850")]
	public static implicit operator JToken(double value)
	{
		return null;
	}

	[Token(Token = "0x6000D15")]
	[Address(RVA = "0x1C87D80", Offset = "0x1C86380", VA = "0x181C87D80")]
	public static implicit operator JToken(float value)
	{
		return null;
	}

	[Token(Token = "0x6000D16")]
	[Address(RVA = "0x1C87C40", Offset = "0x1C86240", VA = "0x181C87C40")]
	public static implicit operator JToken(string? value)
	{
		return null;
	}

	[Token(Token = "0x6000D17")]
	[Address(RVA = "0x1C87BE0", Offset = "0x1C861E0", VA = "0x181C87BE0")]
	[CLSCompliant(false)]
	public static implicit operator JToken(uint value)
	{
		return null;
	}

	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x1C87DE0", Offset = "0x1C863E0", VA = "0x181C87DE0")]
	[CLSCompliant(false)]
	public static implicit operator JToken(ulong value)
	{
		return null;
	}

	[Token(Token = "0x6000D19")]
	[Address(RVA = "0x1C87690", Offset = "0x1C85C90", VA = "0x181C87690")]
	public static implicit operator JToken(byte[] value)
	{
		return null;
	}

	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x1C87B80", Offset = "0x1C86180", VA = "0x181C87B80")]
	public static implicit operator JToken(Uri? value)
	{
		return null;
	}

	[Token(Token = "0x6000D1B")]
	[Address(RVA = "0x1C88150", Offset = "0x1C86750", VA = "0x181C88150")]
	public static implicit operator JToken(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x6000D1C")]
	[Address(RVA = "0x1C880D0", Offset = "0x1C866D0", VA = "0x181C880D0")]
	public static implicit operator JToken(TimeSpan? value)
	{
		return null;
	}

	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x1C88070", Offset = "0x1C86670", VA = "0x181C88070")]
	public static implicit operator JToken(Guid value)
	{
		return null;
	}

	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x1C879B0", Offset = "0x1C85FB0", VA = "0x181C879B0")]
	public static implicit operator JToken(Guid? value)
	{
		return null;
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x1C7E7A0", Offset = "0x1C7CDA0", VA = "0x181C7E7A0", Slot = "6")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x1C7E720", Offset = "0x1C7CD20", VA = "0x181C7E720", Slot = "5")]
	private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000D21")]
	internal abstract int GetDeepHashCode();

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x1C7CE30", Offset = "0x1C7B430", VA = "0x181C7CE30")]
	public JsonReader CreateReader()
	{
		return null;
	}

	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x1C7D020", Offset = "0x1C7B620", VA = "0x181C7D020")]
	internal static JToken FromObjectInternal(object o, JsonSerializer jsonSerializer)
	{
		return null;
	}

	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x1C7D180", Offset = "0x1C7B780", VA = "0x181C7D180")]
	public static JToken FromObject(object o)
	{
		return null;
	}

	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x1C7D1E0", Offset = "0x1C7B7E0", VA = "0x181C7D1E0")]
	public static JToken FromObject(object o, JsonSerializer jsonSerializer)
	{
		return null;
	}

	[Token(Token = "0x6000D27")]
	public T? ToObject<T>()
	{
		return (T?)null;
	}

	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x1C7EE20", Offset = "0x1C7D420", VA = "0x181C7EE20")]
	public object ToObject(Type objectType)
	{
		return null;
	}

	[Token(Token = "0x6000D29")]
	public T? ToObject<T>(JsonSerializer jsonSerializer)
	{
		return (T?)null;
	}

	[Token(Token = "0x6000D2A")]
	[Address(RVA = "0x1C7EC20", Offset = "0x1C7D220", VA = "0x181C7EC20")]
	public object? ToObject(Type? objectType, JsonSerializer jsonSerializer)
	{
		return null;
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x1C7DE20", Offset = "0x1C7C420", VA = "0x181C7DE20")]
	public static JToken ReadFrom(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x1C7DAC0", Offset = "0x1C7C0C0", VA = "0x181C7DAC0")]
	public static JToken ReadFrom(JsonReader reader, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x1C7D8E0", Offset = "0x1C7BEE0", VA = "0x181C7D8E0")]
	public static JToken Parse(string json)
	{
		return null;
	}

	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x1C7D740", Offset = "0x1C7BD40", VA = "0x181C7D740")]
	public static JToken Parse(string json, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x1C7D5E0", Offset = "0x1C7BBE0", VA = "0x181C7D5E0")]
	public static JToken Load(JsonReader reader, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000D30")]
	[Address(RVA = "0x1C7D560", Offset = "0x1C7BB60", VA = "0x181C7D560")]
	public static JToken Load(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x1C7E630", Offset = "0x1C7CC30", VA = "0x181C7E630")]
	internal void SetLineInfo(IJsonLineInfo? lineInfo, JsonLoadSettings? settings)
	{
	}

	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x1C7E5C0", Offset = "0x1C7CBC0", VA = "0x181C7E5C0")]
	internal void SetLineInfo(int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000D33")]
	[Address(RVA = "0x1C7D640", Offset = "0x1C7BC40", VA = "0x181C7D640", Slot = "7")]
	private bool Newtonsoft_002EJson_002EIJsonLineInfo_002EHasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D36")]
	[Address(RVA = "0x1C7E380", Offset = "0x1C7C980", VA = "0x181C7E380")]
	public JToken SelectToken(string path)
	{
		return null;
	}

	[Token(Token = "0x6000D37")]
	[Address(RVA = "0x1C7E390", Offset = "0x1C7C990", VA = "0x181C7E390")]
	public JToken SelectToken(string path, bool errorWhenNoMatch)
	{
		return null;
	}

	[Token(Token = "0x6000D38")]
	[Address(RVA = "0x1C7E180", Offset = "0x1C7C780", VA = "0x181C7E180")]
	public JToken? SelectToken(string path, JsonSelectSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000D39")]
	[Address(RVA = "0x1C7E420", Offset = "0x1C7CA20", VA = "0x181C7E420")]
	public IEnumerable<JToken> SelectTokens(string path)
	{
		return null;
	}

	[Token(Token = "0x6000D3A")]
	[Address(RVA = "0x1C7E4B0", Offset = "0x1C7CAB0", VA = "0x181C7E4B0")]
	public IEnumerable<JToken> SelectTokens(string path, bool errorWhenNoMatch)
	{
		return null;
	}

	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x1C7E540", Offset = "0x1C7CB40", VA = "0x181C7E540")]
	public IEnumerable<JToken> SelectTokens(string path, JsonSelectSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x1C7D2D0", Offset = "0x1C7B8D0", VA = "0x181C7D2D0", Slot = "26")]
	protected virtual DynamicMetaObject GetMetaObject(Expression parameter)
	{
		return null;
	}

	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x1C7E7E0", Offset = "0x1C7CDE0", VA = "0x181C7E7E0", Slot = "11")]
	private DynamicMetaObject System_002EDynamic_002EIDynamicMetaObjectProvider_002EGetMetaObject(Expression parameter)
	{
		return null;
	}

	[Token(Token = "0x6000D3E")]
	[Address(RVA = "0x1C7CEB0", Offset = "0x1C7B4B0", VA = "0x181C7CEB0", Slot = "10")]
	private object System_002EICloneable_002EClone()
	{
		return null;
	}

	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x1C7CEB0", Offset = "0x1C7B4B0", VA = "0x181C7CEB0")]
	public JToken DeepClone()
	{
		return null;
	}

	[Token(Token = "0x6000D40")]
	[Address(RVA = "0x1C7CE90", Offset = "0x1C7B490", VA = "0x181C7CE90")]
	public JToken DeepClone(JsonCloneSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6000D41")]
	[Address(RVA = "0x1C7C690", Offset = "0x1C7AC90", VA = "0x181C7C690")]
	public void AddAnnotation(object annotation)
	{
	}

	[Token(Token = "0x6000D42")]
	public T Annotation<T>() where T : class
	{
		return null;
	}

	[Token(Token = "0x6000D43")]
	[Address(RVA = "0x1C7CAB0", Offset = "0x1C7B0B0", VA = "0x181C7CAB0")]
	public object Annotation(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D44")]
	[IteratorStateMachine(typeof(_003CAnnotations_003Ed__185<>))]
	public IEnumerable<T> Annotations<T>() where T : class
	{
		return null;
	}

	[Token(Token = "0x6000D45")]
	[Address(RVA = "0x1C7CC20", Offset = "0x1C7B220", VA = "0x181C7CC20")]
	[IteratorStateMachine(typeof(_003CAnnotations_003Ed__186))]
	public IEnumerable<object> Annotations(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D46")]
	public void RemoveAnnotations<T>() where T : class
	{
	}

	[Token(Token = "0x6000D47")]
	[Address(RVA = "0x1C7DE70", Offset = "0x1C7C470", VA = "0x181C7DE70")]
	public void RemoveAnnotations(Type type)
	{
	}

	[Token(Token = "0x6000D48")]
	[Address(RVA = "0x1C7CD80", Offset = "0x1C7B380", VA = "0x181C7CD80")]
	internal void CopyAnnotations(JToken target, JToken source)
	{
	}
}
