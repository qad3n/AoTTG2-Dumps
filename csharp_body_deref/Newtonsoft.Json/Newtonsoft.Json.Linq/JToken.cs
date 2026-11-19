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
		[Address(RVA = "0x561AE20", Offset = "0x5619E20", VA = "0x561AE20")]
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
			[Address(RVA = "0x561C0B0", Offset = "0x561B0B0", VA = "0x561C0B0", Slot = "6")]
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
			[Address(RVA = "0x561C100", Offset = "0x561B100", VA = "0x561C100", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D4B")]
		[Address(RVA = "0x5611B10", Offset = "0x5610B10", VA = "0x5611B10")]
		[DebuggerHidden]
		public _003CAfterSelf_003Ed__49(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D4C")]
		[Address(RVA = "0x561BFE0", Offset = "0x561AFE0", VA = "0x561BFE0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D4D")]
		[Address(RVA = "0x561BFF0", Offset = "0x561AFF0", VA = "0x561BFF0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D4F")]
		[Address(RVA = "0x561C0C0", Offset = "0x561B0C0", VA = "0x561C0C0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000D51")]
		[Address(RVA = "0x561C110", Offset = "0x561B110", VA = "0x561C110", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000D52")]
		[Address(RVA = "0x561C1B0", Offset = "0x561B1B0", VA = "0x561C1B0", Slot = "5")]
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
			[Address(RVA = "0x561C3E0", Offset = "0x561B3E0", VA = "0x561C3E0", Slot = "6")]
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
			[Address(RVA = "0x561C430", Offset = "0x561B430", VA = "0x561C430", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D5B")]
		[Address(RVA = "0x561BA60", Offset = "0x561AA60", VA = "0x561BA60")]
		[DebuggerHidden]
		public _003CAnnotations_003Ed__186(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D5C")]
		[Address(RVA = "0x561C1C0", Offset = "0x561B1C0", VA = "0x561C1C0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D5D")]
		[Address(RVA = "0x561C1D0", Offset = "0x561B1D0", VA = "0x561C1D0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D5F")]
		[Address(RVA = "0x561C3F0", Offset = "0x561B3F0", VA = "0x561C3F0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000D61")]
		[Address(RVA = "0x561C440", Offset = "0x561B440", VA = "0x561C440", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<object> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EObject_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000D62")]
		[Address(RVA = "0x561C4F0", Offset = "0x561B4F0", VA = "0x561C4F0", Slot = "5")]
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
			[Address(RVA = "0x561C5E0", Offset = "0x561B5E0", VA = "0x561C5E0", Slot = "6")]
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
			[Address(RVA = "0x561C630", Offset = "0x561B630", VA = "0x561C630", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D63")]
		[Address(RVA = "0x5611BB0", Offset = "0x5610BB0", VA = "0x5611BB0")]
		[DebuggerHidden]
		public _003CBeforeSelf_003Ed__50(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D64")]
		[Address(RVA = "0x561C500", Offset = "0x561B500", VA = "0x561C500", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D65")]
		[Address(RVA = "0x561C510", Offset = "0x561B510", VA = "0x561C510", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D67")]
		[Address(RVA = "0x561C5F0", Offset = "0x561B5F0", VA = "0x561C5F0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000D69")]
		[Address(RVA = "0x561C640", Offset = "0x561B640", VA = "0x561C640", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000D6A")]
		[Address(RVA = "0x561C6E0", Offset = "0x561B6E0", VA = "0x561C6E0", Slot = "5")]
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
			[Address(RVA = "0x561C7C0", Offset = "0x561B7C0", VA = "0x561C7C0", Slot = "6")]
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
			[Address(RVA = "0x561C810", Offset = "0x561B810", VA = "0x561C810", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D6B")]
		[Address(RVA = "0x5611A70", Offset = "0x5610A70", VA = "0x5611A70")]
		[DebuggerHidden]
		public _003CGetAncestors_003Ed__48(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D6C")]
		[Address(RVA = "0x561C6F0", Offset = "0x561B6F0", VA = "0x561C6F0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D6D")]
		[Address(RVA = "0x561C700", Offset = "0x561B700", VA = "0x561C700", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D6F")]
		[Address(RVA = "0x561C7D0", Offset = "0x561B7D0", VA = "0x561C7D0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000D71")]
		[Address(RVA = "0x561C820", Offset = "0x561B820", VA = "0x561C820", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000D72")]
		[Address(RVA = "0x561C8C0", Offset = "0x561B8C0", VA = "0x561C8C0", Slot = "5")]
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
		[Address(RVA = "0x561C8D0", Offset = "0x561B8D0", VA = "0x561C8D0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D74")]
		[Address(RVA = "0x561D350", Offset = "0x561C350", VA = "0x561D350", Slot = "5")]
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
		[Address(RVA = "0x5606170", Offset = "0x5605170", VA = "0x5606170")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000214")]
	public JContainer? Parent
	{
		[Token(Token = "0x6000CB0")]
		[Address(RVA = "0x56113C0", Offset = "0x56103C0", VA = "0x56113C0")]
		[DebuggerStepThrough]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CB1")]
		[Address(RVA = "0x56113D0", Offset = "0x56103D0", VA = "0x56113D0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000215")]
	public JToken Root
	{
		[Token(Token = "0x6000CB2")]
		[Address(RVA = "0x5602A70", Offset = "0x5601A70", VA = "0x5602A70")]
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
		[Address(RVA = "0x5611410", Offset = "0x5610410", VA = "0x5611410")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CB9")]
		[Address(RVA = "0x5611420", Offset = "0x5610420", VA = "0x5611420")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000219")]
	public JToken? Previous
	{
		[Token(Token = "0x6000CBA")]
		[Address(RVA = "0x5611430", Offset = "0x5610430", VA = "0x5611430")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CBB")]
		[Address(RVA = "0x5611440", Offset = "0x5610440", VA = "0x5611440")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700021A")]
	public string Path
	{
		[Token(Token = "0x6000CBC")]
		[Address(RVA = "0x5611450", Offset = "0x5610450", VA = "0x5611450")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021B")]
	public virtual JToken? this[object key]
	{
		[Token(Token = "0x6000CC5")]
		[Address(RVA = "0x5611BE0", Offset = "0x5610BE0", VA = "0x5611BE0", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CC6")]
		[Address(RVA = "0x5611C70", Offset = "0x5610C70", VA = "0x5611C70", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x1700021C")]
	public virtual JToken? First
	{
		[Token(Token = "0x6000CC8")]
		[Address(RVA = "0x5611D00", Offset = "0x5610D00", VA = "0x5611D00", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021D")]
	public virtual JToken? Last
	{
		[Token(Token = "0x6000CC9")]
		[Address(RVA = "0x5611D90", Offset = "0x5610D90", VA = "0x5611D90", Slot = "21")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'Newtonsoft.Json.Linq.IJEnumerable<Newtonsoft.Json.Linq.JToken>.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x1700021E")]
	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x5619720", Offset = "0x5618720", VA = "0x5619720", Slot = "4")]
	private IJEnumerable<JToken> Newtonsoft_002EJson_002ELinq_002EIJEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002Eget_Item(object key)
	{
		return null;
	}

	[Token(Token = "0x1700021F")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELineNumber
	{
		[Token(Token = "0x6000D34")]
		[Address(RVA = "0x561B100", Offset = "0x561A100", VA = "0x561B100", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000220")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELinePosition
	{
		[Token(Token = "0x6000D35")]
		[Address(RVA = "0x561B140", Offset = "0x561A140", VA = "0x561B140", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x5611090", Offset = "0x5610090", VA = "0x5611090", Slot = "12")]
	public virtual Task WriteToAsync(JsonWriter writer, CancellationToken cancellationToken, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x56110D0", Offset = "0x56100D0", VA = "0x56110D0")]
	public Task WriteToAsync(JsonWriter writer, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000CAB")]
	[Address(RVA = "0x56110F0", Offset = "0x56100F0", VA = "0x56110F0")]
	public static Task<JToken> ReadFromAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000CAC")]
	[Address(RVA = "0x5611150", Offset = "0x5610150", VA = "0x5611150")]
	[AsyncStateMachine(typeof(_003CReadFromAsync_003Ed__3))]
	public static Task<JToken> ReadFromAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x56112B0", Offset = "0x56102B0", VA = "0x56112B0")]
	public static Task<JToken> LoadAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x5611360", Offset = "0x5610360", VA = "0x5611360")]
	public static Task<JToken> LoadAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000CB3")]
	internal abstract JToken CloneToken(JsonCloneSettings? settings);

	[Token(Token = "0x6000CB4")]
	internal abstract bool DeepEquals(JToken node);

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x56113E0", Offset = "0x56103E0", VA = "0x56113E0")]
	public static bool DeepEquals(JToken? t1, JToken? t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x5601CA0", Offset = "0x5600CA0", VA = "0x5601CA0")]
	internal JToken()
	{
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x56117E0", Offset = "0x56107E0", VA = "0x56117E0")]
	public void AddAfterSelf(object? content)
	{
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x5611880", Offset = "0x5610880", VA = "0x5611880")]
	public void AddBeforeSelf(object? content)
	{
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x5611920", Offset = "0x5610920", VA = "0x5611920")]
	public IEnumerable<JToken> Ancestors()
	{
		return null;
	}

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x5611A00", Offset = "0x5610A00", VA = "0x5611A00")]
	public IEnumerable<JToken> AncestorsAndSelf()
	{
		return null;
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x5611990", Offset = "0x5610990", VA = "0x5611990")]
	[IteratorStateMachine(typeof(_003CGetAncestors_003Ed__48))]
	internal IEnumerable<JToken> GetAncestors(bool self)
	{
		return null;
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x5611AA0", Offset = "0x5610AA0", VA = "0x5611AA0")]
	[IteratorStateMachine(typeof(_003CAfterSelf_003Ed__49))]
	public IEnumerable<JToken> AfterSelf()
	{
		return null;
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x5611B40", Offset = "0x5610B40", VA = "0x5611B40")]
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
	[Address(RVA = "0x5611E20", Offset = "0x5610E20", VA = "0x5611E20", Slot = "22")]
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
	[Address(RVA = "0x560AB80", Offset = "0x5609B80", VA = "0x560AB80")]
	public void Remove()
	{
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x5605720", Offset = "0x5604720", VA = "0x5605720")]
	public void Replace(JToken value)
	{
	}

	[Token(Token = "0x6000CCF")]
	public abstract void WriteTo(JsonWriter writer, params JsonConverter[] converters);

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x5611E90", Offset = "0x5610E90", VA = "0x5611E90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x5611F60", Offset = "0x5610F60", VA = "0x5611F60")]
	public string ToString(Formatting formatting, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x5612180", Offset = "0x5611180", VA = "0x5612180")]
	private static JValue EnsureValue(JToken value)
	{
		return null;
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x5612280", Offset = "0x5611280", VA = "0x5612280")]
	private static string GetType(JToken token)
	{
		return null;
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x5612360", Offset = "0x5611360", VA = "0x5612360")]
	private static bool ValidateToken(JToken o, JTokenType[] validTypes, bool nullable)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x5612410", Offset = "0x5611410", VA = "0x5612410")]
	public static explicit operator bool(JToken value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x5612690", Offset = "0x5611690", VA = "0x5612690")]
	public static explicit operator DateTimeOffset(JToken value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x5612950", Offset = "0x5611950", VA = "0x5612950")]
	public static explicit operator bool?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x5612C20", Offset = "0x5611C20", VA = "0x5612C20")]
	public static explicit operator long(JToken value)
	{
		return default(long);
	}

	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x5612E70", Offset = "0x5611E70", VA = "0x5612E70")]
	public static explicit operator DateTime?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x5613120", Offset = "0x5612120", VA = "0x5613120")]
	public static explicit operator DateTimeOffset?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CDB")]
	[Address(RVA = "0x5613470", Offset = "0x5612470", VA = "0x5613470")]
	public static explicit operator decimal?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x5613730", Offset = "0x5612730", VA = "0x5613730")]
	public static explicit operator double?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x56139E0", Offset = "0x56129E0", VA = "0x56139E0")]
	public static explicit operator char?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x5613C90", Offset = "0x5612C90", VA = "0x5613C90")]
	public static explicit operator int(JToken value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x5613EE0", Offset = "0x5612EE0", VA = "0x5613EE0")]
	public static explicit operator short(JToken value)
	{
		return default(short);
	}

	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x5614130", Offset = "0x5613130", VA = "0x5614130")]
	[CLSCompliant(false)]
	public static explicit operator ushort(JToken value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x5614380", Offset = "0x5613380", VA = "0x5614380")]
	[CLSCompliant(false)]
	public static explicit operator char(JToken value)
	{
		return default(char);
	}

	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x56145D0", Offset = "0x56135D0", VA = "0x56145D0")]
	public static explicit operator byte(JToken value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000CE3")]
	[Address(RVA = "0x5614820", Offset = "0x5613820", VA = "0x5614820")]
	[CLSCompliant(false)]
	public static explicit operator sbyte(JToken value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000CE4")]
	[Address(RVA = "0x5614A70", Offset = "0x5613A70", VA = "0x5614A70")]
	public static explicit operator int?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CE5")]
	[Address(RVA = "0x5614D20", Offset = "0x5613D20", VA = "0x5614D20")]
	public static explicit operator short?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CE6")]
	[Address(RVA = "0x5614FD0", Offset = "0x5613FD0", VA = "0x5614FD0")]
	[CLSCompliant(false)]
	public static explicit operator ushort?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CE7")]
	[Address(RVA = "0x5615280", Offset = "0x5614280", VA = "0x5615280")]
	public static explicit operator byte?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CE8")]
	[Address(RVA = "0x5615530", Offset = "0x5614530", VA = "0x5615530")]
	[CLSCompliant(false)]
	public static explicit operator sbyte?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x56157E0", Offset = "0x56147E0", VA = "0x56157E0")]
	public static explicit operator DateTime(JToken value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000CEA")]
	[Address(RVA = "0x5615A40", Offset = "0x5614A40", VA = "0x5615A40")]
	public static explicit operator long?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CEB")]
	[Address(RVA = "0x5615CF0", Offset = "0x5614CF0", VA = "0x5615CF0")]
	public static explicit operator float?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CEC")]
	[Address(RVA = "0x5615FA0", Offset = "0x5614FA0", VA = "0x5615FA0")]
	public static explicit operator decimal(JToken value)
	{
		return 0m;
	}

	[Token(Token = "0x6000CED")]
	[Address(RVA = "0x56161F0", Offset = "0x56151F0", VA = "0x56161F0")]
	[CLSCompliant(false)]
	public static explicit operator uint?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x56164A0", Offset = "0x56154A0", VA = "0x56164A0")]
	[CLSCompliant(false)]
	public static explicit operator ulong?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x5616750", Offset = "0x5615750", VA = "0x5616750")]
	public static explicit operator double(JToken value)
	{
		return default(double);
	}

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x56169A0", Offset = "0x56159A0", VA = "0x56169A0")]
	public static explicit operator float(JToken value)
	{
		return default(float);
	}

	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x5616BF0", Offset = "0x5615BF0", VA = "0x5616BF0")]
	public static explicit operator string?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x5616EF0", Offset = "0x5615EF0", VA = "0x5616EF0")]
	[CLSCompliant(false)]
	public static explicit operator uint(JToken value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x5617140", Offset = "0x5616140", VA = "0x5617140")]
	[CLSCompliant(false)]
	public static explicit operator ulong(JToken value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x5617390", Offset = "0x5616390", VA = "0x5617390")]
	public static explicit operator byte[]?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x5617620", Offset = "0x5616620", VA = "0x5617620")]
	public static explicit operator Guid(JToken value)
	{
		return default(Guid);
	}

	[Token(Token = "0x6000CF6")]
	[Address(RVA = "0x56178C0", Offset = "0x56168C0", VA = "0x56178C0")]
	public static explicit operator Guid?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CF7")]
	[Address(RVA = "0x5617BE0", Offset = "0x5616BE0", VA = "0x5617BE0")]
	public static explicit operator TimeSpan(JToken value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x5617E50", Offset = "0x5616E50", VA = "0x5617E50")]
	public static explicit operator TimeSpan?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x5618110", Offset = "0x5617110", VA = "0x5618110")]
	public static explicit operator Uri?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x5618390", Offset = "0x5617390", VA = "0x5618390")]
	private static BigInteger ToBigInteger(JToken value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x5618560", Offset = "0x5617560", VA = "0x5618560")]
	private static BigInteger? ToBigIntegerNullable(JToken value)
	{
		return null;
	}

	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x56187C0", Offset = "0x56177C0", VA = "0x56187C0")]
	public static implicit operator JToken(bool value)
	{
		return null;
	}

	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x5618810", Offset = "0x5617810", VA = "0x5618810")]
	public static implicit operator JToken(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x6000CFE")]
	[Address(RVA = "0x5618860", Offset = "0x5617860", VA = "0x5618860")]
	public static implicit operator JToken(byte value)
	{
		return null;
	}

	[Token(Token = "0x6000CFF")]
	[Address(RVA = "0x56188B0", Offset = "0x56178B0", VA = "0x56188B0")]
	public static implicit operator JToken(byte? value)
	{
		return null;
	}

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x5618930", Offset = "0x5617930", VA = "0x5618930")]
	[CLSCompliant(false)]
	public static implicit operator JToken(sbyte value)
	{
		return null;
	}

	[Token(Token = "0x6000D01")]
	[Address(RVA = "0x5618980", Offset = "0x5617980", VA = "0x5618980")]
	[CLSCompliant(false)]
	public static implicit operator JToken(sbyte? value)
	{
		return null;
	}

	[Token(Token = "0x6000D02")]
	[Address(RVA = "0x5618A00", Offset = "0x5617A00", VA = "0x5618A00")]
	public static implicit operator JToken(bool? value)
	{
		return null;
	}

	[Token(Token = "0x6000D03")]
	[Address(RVA = "0x5618A80", Offset = "0x5617A80", VA = "0x5618A80")]
	public static implicit operator JToken(long value)
	{
		return null;
	}

	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x5618AD0", Offset = "0x5617AD0", VA = "0x5618AD0")]
	public static implicit operator JToken(DateTime? value)
	{
		return null;
	}

	[Token(Token = "0x6000D05")]
	[Address(RVA = "0x5618B50", Offset = "0x5617B50", VA = "0x5618B50")]
	public static implicit operator JToken(DateTimeOffset? value)
	{
		return null;
	}

	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x5618BE0", Offset = "0x5617BE0", VA = "0x5618BE0")]
	public static implicit operator JToken(decimal? value)
	{
		return null;
	}

	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x5618C70", Offset = "0x5617C70", VA = "0x5618C70")]
	public static implicit operator JToken(double? value)
	{
		return null;
	}

	[Token(Token = "0x6000D08")]
	[Address(RVA = "0x5618D00", Offset = "0x5617D00", VA = "0x5618D00")]
	[CLSCompliant(false)]
	public static implicit operator JToken(short value)
	{
		return null;
	}

	[Token(Token = "0x6000D09")]
	[Address(RVA = "0x5618D50", Offset = "0x5617D50", VA = "0x5618D50")]
	[CLSCompliant(false)]
	public static implicit operator JToken(ushort value)
	{
		return null;
	}

	[Token(Token = "0x6000D0A")]
	[Address(RVA = "0x5618DA0", Offset = "0x5617DA0", VA = "0x5618DA0")]
	public static implicit operator JToken(int value)
	{
		return null;
	}

	[Token(Token = "0x6000D0B")]
	[Address(RVA = "0x5618DF0", Offset = "0x5617DF0", VA = "0x5618DF0")]
	public static implicit operator JToken(int? value)
	{
		return null;
	}

	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x5618E70", Offset = "0x5617E70", VA = "0x5618E70")]
	public static implicit operator JToken(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x5618EC0", Offset = "0x5617EC0", VA = "0x5618EC0")]
	public static implicit operator JToken(long? value)
	{
		return null;
	}

	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x5618F40", Offset = "0x5617F40", VA = "0x5618F40")]
	public static implicit operator JToken(float? value)
	{
		return null;
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x5618FC0", Offset = "0x5617FC0", VA = "0x5618FC0")]
	public static implicit operator JToken(decimal value)
	{
		return null;
	}

	[Token(Token = "0x6000D10")]
	[Address(RVA = "0x5619020", Offset = "0x5618020", VA = "0x5619020")]
	[CLSCompliant(false)]
	public static implicit operator JToken(short? value)
	{
		return null;
	}

	[Token(Token = "0x6000D11")]
	[Address(RVA = "0x5619090", Offset = "0x5618090", VA = "0x5619090")]
	[CLSCompliant(false)]
	public static implicit operator JToken(ushort? value)
	{
		return null;
	}

	[Token(Token = "0x6000D12")]
	[Address(RVA = "0x5619100", Offset = "0x5618100", VA = "0x5619100")]
	[CLSCompliant(false)]
	public static implicit operator JToken(uint? value)
	{
		return null;
	}

	[Token(Token = "0x6000D13")]
	[Address(RVA = "0x5619180", Offset = "0x5618180", VA = "0x5619180")]
	[CLSCompliant(false)]
	public static implicit operator JToken(ulong? value)
	{
		return null;
	}

	[Token(Token = "0x6000D14")]
	[Address(RVA = "0x5619200", Offset = "0x5618200", VA = "0x5619200")]
	public static implicit operator JToken(double value)
	{
		return null;
	}

	[Token(Token = "0x6000D15")]
	[Address(RVA = "0x5619260", Offset = "0x5618260", VA = "0x5619260")]
	public static implicit operator JToken(float value)
	{
		return null;
	}

	[Token(Token = "0x6000D16")]
	[Address(RVA = "0x56192C0", Offset = "0x56182C0", VA = "0x56192C0")]
	public static implicit operator JToken(string? value)
	{
		return null;
	}

	[Token(Token = "0x6000D17")]
	[Address(RVA = "0x5619310", Offset = "0x5618310", VA = "0x5619310")]
	[CLSCompliant(false)]
	public static implicit operator JToken(uint value)
	{
		return null;
	}

	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x5619360", Offset = "0x5618360", VA = "0x5619360")]
	[CLSCompliant(false)]
	public static implicit operator JToken(ulong value)
	{
		return null;
	}

	[Token(Token = "0x6000D19")]
	[Address(RVA = "0x56193B0", Offset = "0x56183B0", VA = "0x56193B0")]
	public static implicit operator JToken(byte[] value)
	{
		return null;
	}

	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x5619400", Offset = "0x5618400", VA = "0x5619400")]
	public static implicit operator JToken(Uri? value)
	{
		return null;
	}

	[Token(Token = "0x6000D1B")]
	[Address(RVA = "0x5619450", Offset = "0x5618450", VA = "0x5619450")]
	public static implicit operator JToken(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x6000D1C")]
	[Address(RVA = "0x56194A0", Offset = "0x56184A0", VA = "0x56194A0")]
	public static implicit operator JToken(TimeSpan? value)
	{
		return null;
	}

	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x5619520", Offset = "0x5618520", VA = "0x5619520")]
	public static implicit operator JToken(Guid value)
	{
		return null;
	}

	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x5619580", Offset = "0x5618580", VA = "0x5619580")]
	public static implicit operator JToken(Guid? value)
	{
		return null;
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x5619610", Offset = "0x5618610", VA = "0x5619610", Slot = "6")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x56196A0", Offset = "0x56186A0", VA = "0x56196A0", Slot = "5")]
	private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000D21")]
	internal abstract int GetDeepHashCode();

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x5619740", Offset = "0x5618740", VA = "0x5619740")]
	public JsonReader CreateReader()
	{
		return null;
	}

	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x560A400", Offset = "0x5609400", VA = "0x560A400")]
	internal static JToken FromObjectInternal(object o, JsonSerializer jsonSerializer)
	{
		return null;
	}

	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x5619790", Offset = "0x5618790", VA = "0x5619790")]
	public static JToken FromObject(object o)
	{
		return null;
	}

	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x56197F0", Offset = "0x56187F0", VA = "0x56197F0")]
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
	[Address(RVA = "0x5619840", Offset = "0x5618840", VA = "0x5619840")]
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
	[Address(RVA = "0x561A490", Offset = "0x5619490", VA = "0x561A490")]
	public object? ToObject(Type? objectType, JsonSerializer jsonSerializer)
	{
		return null;
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x561A6E0", Offset = "0x56196E0", VA = "0x561A6E0")]
	public static JToken ReadFrom(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x561A750", Offset = "0x5619750", VA = "0x561A750")]
	public static JToken ReadFrom(JsonReader reader, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x561AA30", Offset = "0x5619A30", VA = "0x561AA30")]
	public static JToken Parse(string json)
	{
		return null;
	}

	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x561AAA0", Offset = "0x5619AA0", VA = "0x561AAA0")]
	public static JToken Parse(string json, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x561ACB0", Offset = "0x5619CB0", VA = "0x561ACB0")]
	public static JToken Load(JsonReader reader, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000D30")]
	[Address(RVA = "0x561AD00", Offset = "0x5619D00", VA = "0x561AD00")]
	public static JToken Load(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x56007B0", Offset = "0x55FF7B0", VA = "0x56007B0")]
	internal void SetLineInfo(IJsonLineInfo? lineInfo, JsonLoadSettings? settings)
	{
	}

	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x561ADB0", Offset = "0x5619DB0", VA = "0x561ADB0")]
	internal void SetLineInfo(int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000D33")]
	[Address(RVA = "0x561B0C0", Offset = "0x561A0C0", VA = "0x561B0C0", Slot = "7")]
	private bool Newtonsoft_002EJson_002EIJsonLineInfo_002EHasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D36")]
	[Address(RVA = "0x561B180", Offset = "0x561A180", VA = "0x561B180")]
	public JToken SelectToken(string path)
	{
		return null;
	}

	[Token(Token = "0x6000D37")]
	[Address(RVA = "0x561B520", Offset = "0x561A520", VA = "0x561B520")]
	public JToken SelectToken(string path, bool errorWhenNoMatch)
	{
		return null;
	}

	[Token(Token = "0x6000D38")]
	[Address(RVA = "0x561B190", Offset = "0x561A190", VA = "0x561B190")]
	public JToken? SelectToken(string path, JsonSelectSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000D39")]
	[Address(RVA = "0x561B590", Offset = "0x561A590", VA = "0x561B590")]
	public IEnumerable<JToken> SelectTokens(string path)
	{
		return null;
	}

	[Token(Token = "0x6000D3A")]
	[Address(RVA = "0x561B680", Offset = "0x561A680", VA = "0x561B680")]
	public IEnumerable<JToken> SelectTokens(string path, bool errorWhenNoMatch)
	{
		return null;
	}

	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x561B600", Offset = "0x561A600", VA = "0x561B600")]
	public IEnumerable<JToken> SelectTokens(string path, JsonSelectSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x561B750", Offset = "0x561A750", VA = "0x561B750", Slot = "26")]
	protected virtual DynamicMetaObject GetMetaObject(Expression parameter)
	{
		return null;
	}

	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x561B800", Offset = "0x561A800", VA = "0x561B800", Slot = "11")]
	private DynamicMetaObject System_002EDynamic_002EIDynamicMetaObjectProvider_002EGetMetaObject(Expression parameter)
	{
		return null;
	}

	[Token(Token = "0x6000D3E")]
	[Address(RVA = "0x561B820", Offset = "0x561A820", VA = "0x561B820", Slot = "10")]
	private object System_002EICloneable_002EClone()
	{
		return null;
	}

	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x561B840", Offset = "0x561A840", VA = "0x561B840")]
	public JToken DeepClone()
	{
		return null;
	}

	[Token(Token = "0x6000D40")]
	[Address(RVA = "0x561B860", Offset = "0x561A860", VA = "0x561B860")]
	public JToken DeepClone(JsonCloneSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6000D41")]
	[Address(RVA = "0x561AE40", Offset = "0x5619E40", VA = "0x561AE40")]
	public void AddAnnotation(object annotation)
	{
	}

	[Token(Token = "0x6000D42")]
	public T Annotation<T>() where T : class
	{
		return null;
	}

	[Token(Token = "0x6000D43")]
	[Address(RVA = "0x561B880", Offset = "0x561A880", VA = "0x561B880")]
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
	[Address(RVA = "0x561B9E0", Offset = "0x561A9E0", VA = "0x561B9E0")]
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
	[Address(RVA = "0x561BA90", Offset = "0x561AA90", VA = "0x561BA90")]
	public void RemoveAnnotations(Type type)
	{
	}

	[Token(Token = "0x6000D48")]
	[Address(RVA = "0x5601CB0", Offset = "0x5600CB0", VA = "0x5601CB0")]
	internal void CopyAnnotations(JToken target, JToken source)
	{
	}
}
