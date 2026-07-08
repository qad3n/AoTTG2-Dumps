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
		[Address(RVA = "0x3B31830", Offset = "0x3B31830", VA = "0x3B31830")]
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
			[Address(RVA = "0x3B32B30", Offset = "0x3B32B30", VA = "0x3B32B30", Slot = "6")]
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
			[Address(RVA = "0x3B32B80", Offset = "0x3B32B80", VA = "0x3B32B80", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D4B")]
		[Address(RVA = "0x3B28220", Offset = "0x3B28220", VA = "0x3B28220")]
		[DebuggerHidden]
		public _003CAfterSelf_003Ed__49(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D4C")]
		[Address(RVA = "0x3B32A60", Offset = "0x3B32A60", VA = "0x3B32A60", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D4D")]
		[Address(RVA = "0x3B32A70", Offset = "0x3B32A70", VA = "0x3B32A70", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D4F")]
		[Address(RVA = "0x3B32B40", Offset = "0x3B32B40", VA = "0x3B32B40", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000D51")]
		[Address(RVA = "0x3B32B90", Offset = "0x3B32B90", VA = "0x3B32B90", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000D52")]
		[Address(RVA = "0x3B32C30", Offset = "0x3B32C30", VA = "0x3B32C30", Slot = "5")]
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
			[Address(RVA = "0x3B32E70", Offset = "0x3B32E70", VA = "0x3B32E70", Slot = "6")]
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
			[Address(RVA = "0x3B32EC0", Offset = "0x3B32EC0", VA = "0x3B32EC0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D5B")]
		[Address(RVA = "0x3B324D0", Offset = "0x3B324D0", VA = "0x3B324D0")]
		[DebuggerHidden]
		public _003CAnnotations_003Ed__186(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D5C")]
		[Address(RVA = "0x3B32C40", Offset = "0x3B32C40", VA = "0x3B32C40", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D5D")]
		[Address(RVA = "0x3B32C50", Offset = "0x3B32C50", VA = "0x3B32C50", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D5F")]
		[Address(RVA = "0x3B32E80", Offset = "0x3B32E80", VA = "0x3B32E80", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000D61")]
		[Address(RVA = "0x3B32ED0", Offset = "0x3B32ED0", VA = "0x3B32ED0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<object> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EObject_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000D62")]
		[Address(RVA = "0x3B32F80", Offset = "0x3B32F80", VA = "0x3B32F80", Slot = "5")]
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
			[Address(RVA = "0x3B33070", Offset = "0x3B33070", VA = "0x3B33070", Slot = "6")]
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
			[Address(RVA = "0x3B330C0", Offset = "0x3B330C0", VA = "0x3B330C0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D63")]
		[Address(RVA = "0x3B282D0", Offset = "0x3B282D0", VA = "0x3B282D0")]
		[DebuggerHidden]
		public _003CBeforeSelf_003Ed__50(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D64")]
		[Address(RVA = "0x3B32F90", Offset = "0x3B32F90", VA = "0x3B32F90", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D65")]
		[Address(RVA = "0x3B32FA0", Offset = "0x3B32FA0", VA = "0x3B32FA0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D67")]
		[Address(RVA = "0x3B33080", Offset = "0x3B33080", VA = "0x3B33080", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000D69")]
		[Address(RVA = "0x3B330D0", Offset = "0x3B330D0", VA = "0x3B330D0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000D6A")]
		[Address(RVA = "0x3B33170", Offset = "0x3B33170", VA = "0x3B33170", Slot = "5")]
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
			[Address(RVA = "0x3B33250", Offset = "0x3B33250", VA = "0x3B33250", Slot = "6")]
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
			[Address(RVA = "0x3B332A0", Offset = "0x3B332A0", VA = "0x3B332A0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D6B")]
		[Address(RVA = "0x3B28170", Offset = "0x3B28170", VA = "0x3B28170")]
		[DebuggerHidden]
		public _003CGetAncestors_003Ed__48(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D6C")]
		[Address(RVA = "0x3B33180", Offset = "0x3B33180", VA = "0x3B33180", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D6D")]
		[Address(RVA = "0x3B33190", Offset = "0x3B33190", VA = "0x3B33190", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D6F")]
		[Address(RVA = "0x3B33260", Offset = "0x3B33260", VA = "0x3B33260", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000D71")]
		[Address(RVA = "0x3B332B0", Offset = "0x3B332B0", VA = "0x3B332B0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000D72")]
		[Address(RVA = "0x3B33360", Offset = "0x3B33360", VA = "0x3B33360", Slot = "5")]
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
		[Address(RVA = "0x3B33370", Offset = "0x3B33370", VA = "0x3B33370", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D74")]
		[Address(RVA = "0x3B34380", Offset = "0x3B34380", VA = "0x3B34380", Slot = "5")]
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
		[Address(RVA = "0x3B1B6C0", Offset = "0x3B1B6C0", VA = "0x3B1B6C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000214")]
	public JContainer? Parent
	{
		[Token(Token = "0x6000CB0")]
		[Address(RVA = "0x3B279C0", Offset = "0x3B279C0", VA = "0x3B279C0")]
		[DebuggerStepThrough]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CB1")]
		[Address(RVA = "0x3B279D0", Offset = "0x3B279D0", VA = "0x3B279D0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000215")]
	public JToken Root
	{
		[Token(Token = "0x6000CB2")]
		[Address(RVA = "0x3B17EC0", Offset = "0x3B17EC0", VA = "0x3B17EC0")]
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
		[Address(RVA = "0x3B27A10", Offset = "0x3B27A10", VA = "0x3B27A10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CB9")]
		[Address(RVA = "0x3B27A20", Offset = "0x3B27A20", VA = "0x3B27A20")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000219")]
	public JToken? Previous
	{
		[Token(Token = "0x6000CBA")]
		[Address(RVA = "0x3B27A30", Offset = "0x3B27A30", VA = "0x3B27A30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CBB")]
		[Address(RVA = "0x3B27A40", Offset = "0x3B27A40", VA = "0x3B27A40")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700021A")]
	public string Path
	{
		[Token(Token = "0x6000CBC")]
		[Address(RVA = "0x3B27A50", Offset = "0x3B27A50", VA = "0x3B27A50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021B")]
	public virtual JToken? this[object key]
	{
		[Token(Token = "0x6000CC5")]
		[Address(RVA = "0x3B28300", Offset = "0x3B28300", VA = "0x3B28300", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CC6")]
		[Address(RVA = "0x3B28390", Offset = "0x3B28390", VA = "0x3B28390", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x1700021C")]
	public virtual JToken? First
	{
		[Token(Token = "0x6000CC8")]
		[Address(RVA = "0x3B28420", Offset = "0x3B28420", VA = "0x3B28420", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021D")]
	public virtual JToken? Last
	{
		[Token(Token = "0x6000CC9")]
		[Address(RVA = "0x3B284B0", Offset = "0x3B284B0", VA = "0x3B284B0", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021E")]
	private IJEnumerable<JToken> Newtonsoft_002EJson_002ELinq_002EIJEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EItem
	{
		[Token(Token = "0x6000D22")]
		[Address(RVA = "0x3B30020", Offset = "0x3B30020", VA = "0x3B30020", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021F")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELineNumber
	{
		[Token(Token = "0x6000D34")]
		[Address(RVA = "0x3B31B10", Offset = "0x3B31B10", VA = "0x3B31B10", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000220")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELinePosition
	{
		[Token(Token = "0x6000D35")]
		[Address(RVA = "0x3B31B50", Offset = "0x3B31B50", VA = "0x3B31B50", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x3B276A0", Offset = "0x3B276A0", VA = "0x3B276A0", Slot = "12")]
	public virtual Task WriteToAsync(JsonWriter writer, CancellationToken cancellationToken, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x3B276E0", Offset = "0x3B276E0", VA = "0x3B276E0")]
	public Task WriteToAsync(JsonWriter writer, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000CAB")]
	[Address(RVA = "0x3B27700", Offset = "0x3B27700", VA = "0x3B27700")]
	public static Task<JToken> ReadFromAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000CAC")]
	[Address(RVA = "0x3B27750", Offset = "0x3B27750", VA = "0x3B27750")]
	[AsyncStateMachine(typeof(_003CReadFromAsync_003Ed__3))]
	public static Task<JToken> ReadFromAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x3B278B0", Offset = "0x3B278B0", VA = "0x3B278B0")]
	public static Task<JToken> LoadAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x3B27960", Offset = "0x3B27960", VA = "0x3B27960")]
	public static Task<JToken> LoadAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000CB3")]
	internal abstract JToken CloneToken(JsonCloneSettings? settings);

	[Token(Token = "0x6000CB4")]
	internal abstract bool DeepEquals(JToken node);

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x3B279E0", Offset = "0x3B279E0", VA = "0x3B279E0")]
	public static bool DeepEquals(JToken? t1, JToken? t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x3B17020", Offset = "0x3B17020", VA = "0x3B17020")]
	internal JToken()
	{
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x3B27EB0", Offset = "0x3B27EB0", VA = "0x3B27EB0")]
	public void AddAfterSelf(object? content)
	{
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x3B27F50", Offset = "0x3B27F50", VA = "0x3B27F50")]
	public void AddBeforeSelf(object? content)
	{
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x3B27FF0", Offset = "0x3B27FF0", VA = "0x3B27FF0")]
	public IEnumerable<JToken> Ancestors()
	{
		return null;
	}

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x3B280F0", Offset = "0x3B280F0", VA = "0x3B280F0")]
	public IEnumerable<JToken> AncestorsAndSelf()
	{
		return null;
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x3B28070", Offset = "0x3B28070", VA = "0x3B28070")]
	[IteratorStateMachine(typeof(_003CGetAncestors_003Ed__48))]
	internal IEnumerable<JToken> GetAncestors(bool self)
	{
		return null;
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x3B281A0", Offset = "0x3B281A0", VA = "0x3B281A0")]
	[IteratorStateMachine(typeof(_003CAfterSelf_003Ed__49))]
	public IEnumerable<JToken> AfterSelf()
	{
		return null;
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x3B28250", Offset = "0x3B28250", VA = "0x3B28250")]
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
	[Address(RVA = "0x3B28540", Offset = "0x3B28540", VA = "0x3B28540", Slot = "22")]
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
	[Address(RVA = "0x3B20910", Offset = "0x3B20910", VA = "0x3B20910")]
	public void Remove()
	{
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x3B1AC60", Offset = "0x3B1AC60", VA = "0x3B1AC60")]
	public void Replace(JToken value)
	{
	}

	[Token(Token = "0x6000CCF")]
	public abstract void WriteTo(JsonWriter writer, params JsonConverter[] converters);

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x3B285B0", Offset = "0x3B285B0", VA = "0x3B285B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x3B28680", Offset = "0x3B28680", VA = "0x3B28680")]
	public string ToString(Formatting formatting, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x3B28900", Offset = "0x3B28900", VA = "0x3B28900")]
	private static JValue EnsureValue(JToken value)
	{
		return null;
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x3B28A00", Offset = "0x3B28A00", VA = "0x3B28A00")]
	private static string GetType(JToken token)
	{
		return null;
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x3B28AE0", Offset = "0x3B28AE0", VA = "0x3B28AE0")]
	private static bool ValidateToken(JToken o, JTokenType[] validTypes, bool nullable)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x3B28B90", Offset = "0x3B28B90", VA = "0x3B28B90")]
	public static explicit operator bool(JToken value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x3B28E20", Offset = "0x3B28E20", VA = "0x3B28E20")]
	public static explicit operator DateTimeOffset(JToken value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x3B290F0", Offset = "0x3B290F0", VA = "0x3B290F0")]
	public static explicit operator bool?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x3B293C0", Offset = "0x3B293C0", VA = "0x3B293C0")]
	public static explicit operator long(JToken value)
	{
		return default(long);
	}

	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x3B29620", Offset = "0x3B29620", VA = "0x3B29620")]
	public static explicit operator DateTime?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x3B298E0", Offset = "0x3B298E0", VA = "0x3B298E0")]
	public static explicit operator DateTimeOffset?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CDB")]
	[Address(RVA = "0x3B29C30", Offset = "0x3B29C30", VA = "0x3B29C30")]
	public static explicit operator decimal?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x3B29EF0", Offset = "0x3B29EF0", VA = "0x3B29EF0")]
	public static explicit operator double?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x3B2A1A0", Offset = "0x3B2A1A0", VA = "0x3B2A1A0")]
	public static explicit operator char?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x3B2A450", Offset = "0x3B2A450", VA = "0x3B2A450")]
	public static explicit operator int(JToken value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x3B2A6B0", Offset = "0x3B2A6B0", VA = "0x3B2A6B0")]
	public static explicit operator short(JToken value)
	{
		return default(short);
	}

	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x3B2A910", Offset = "0x3B2A910", VA = "0x3B2A910")]
	[CLSCompliant(false)]
	public static explicit operator ushort(JToken value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x3B2AB70", Offset = "0x3B2AB70", VA = "0x3B2AB70")]
	[CLSCompliant(false)]
	public static explicit operator char(JToken value)
	{
		return default(char);
	}

	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x3B2ADD0", Offset = "0x3B2ADD0", VA = "0x3B2ADD0")]
	public static explicit operator byte(JToken value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000CE3")]
	[Address(RVA = "0x3B2B030", Offset = "0x3B2B030", VA = "0x3B2B030")]
	[CLSCompliant(false)]
	public static explicit operator sbyte(JToken value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000CE4")]
	[Address(RVA = "0x3B2B290", Offset = "0x3B2B290", VA = "0x3B2B290")]
	public static explicit operator int?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CE5")]
	[Address(RVA = "0x3B2B540", Offset = "0x3B2B540", VA = "0x3B2B540")]
	public static explicit operator short?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CE6")]
	[Address(RVA = "0x3B2B7F0", Offset = "0x3B2B7F0", VA = "0x3B2B7F0")]
	[CLSCompliant(false)]
	public static explicit operator ushort?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CE7")]
	[Address(RVA = "0x3B2BAA0", Offset = "0x3B2BAA0", VA = "0x3B2BAA0")]
	public static explicit operator byte?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CE8")]
	[Address(RVA = "0x3B2BD50", Offset = "0x3B2BD50", VA = "0x3B2BD50")]
	[CLSCompliant(false)]
	public static explicit operator sbyte?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x3B2C000", Offset = "0x3B2C000", VA = "0x3B2C000")]
	public static explicit operator DateTime(JToken value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000CEA")]
	[Address(RVA = "0x3B2C240", Offset = "0x3B2C240", VA = "0x3B2C240")]
	public static explicit operator long?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CEB")]
	[Address(RVA = "0x3B2C4F0", Offset = "0x3B2C4F0", VA = "0x3B2C4F0")]
	public static explicit operator float?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CEC")]
	[Address(RVA = "0x3B2C7A0", Offset = "0x3B2C7A0", VA = "0x3B2C7A0")]
	public static explicit operator decimal(JToken value)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000CED")]
	[Address(RVA = "0x3B2CA00", Offset = "0x3B2CA00", VA = "0x3B2CA00")]
	[CLSCompliant(false)]
	public static explicit operator uint?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x3B2CCB0", Offset = "0x3B2CCB0", VA = "0x3B2CCB0")]
	[CLSCompliant(false)]
	public static explicit operator ulong?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x3B2CF60", Offset = "0x3B2CF60", VA = "0x3B2CF60")]
	public static explicit operator double(JToken value)
	{
		return default(double);
	}

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x3B2D1C0", Offset = "0x3B2D1C0", VA = "0x3B2D1C0")]
	public static explicit operator float(JToken value)
	{
		return default(float);
	}

	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x3B2D420", Offset = "0x3B2D420", VA = "0x3B2D420")]
	public static explicit operator string?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x3B2D710", Offset = "0x3B2D710", VA = "0x3B2D710")]
	[CLSCompliant(false)]
	public static explicit operator uint(JToken value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x3B2D970", Offset = "0x3B2D970", VA = "0x3B2D970")]
	[CLSCompliant(false)]
	public static explicit operator ulong(JToken value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x3B2DBD0", Offset = "0x3B2DBD0", VA = "0x3B2DBD0")]
	public static explicit operator byte[]?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x3B2DE60", Offset = "0x3B2DE60", VA = "0x3B2DE60")]
	public static explicit operator Guid(JToken value)
	{
		return default(Guid);
	}

	[Token(Token = "0x6000CF6")]
	[Address(RVA = "0x3B2E110", Offset = "0x3B2E110", VA = "0x3B2E110")]
	public static explicit operator Guid?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CF7")]
	[Address(RVA = "0x3B2E430", Offset = "0x3B2E430", VA = "0x3B2E430")]
	public static explicit operator TimeSpan(JToken value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x3B2E6B0", Offset = "0x3B2E6B0", VA = "0x3B2E6B0")]
	public static explicit operator TimeSpan?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x3B2E970", Offset = "0x3B2E970", VA = "0x3B2E970")]
	public static explicit operator Uri?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x3B2EBF0", Offset = "0x3B2EBF0", VA = "0x3B2EBF0")]
	private static BigInteger ToBigInteger(JToken value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x3B2EDD0", Offset = "0x3B2EDD0", VA = "0x3B2EDD0")]
	private static BigInteger? ToBigIntegerNullable(JToken value)
	{
		return null;
	}

	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x3B2F040", Offset = "0x3B2F040", VA = "0x3B2F040")]
	public static implicit operator JToken(bool value)
	{
		return null;
	}

	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x3B2F090", Offset = "0x3B2F090", VA = "0x3B2F090")]
	public static implicit operator JToken(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x6000CFE")]
	[Address(RVA = "0x3B2F0E0", Offset = "0x3B2F0E0", VA = "0x3B2F0E0")]
	public static implicit operator JToken(byte value)
	{
		return null;
	}

	[Token(Token = "0x6000CFF")]
	[Address(RVA = "0x3B2F130", Offset = "0x3B2F130", VA = "0x3B2F130")]
	public static implicit operator JToken(byte? value)
	{
		return null;
	}

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x3B2F1B0", Offset = "0x3B2F1B0", VA = "0x3B2F1B0")]
	[CLSCompliant(false)]
	public static implicit operator JToken(sbyte value)
	{
		return null;
	}

	[Token(Token = "0x6000D01")]
	[Address(RVA = "0x3B2F200", Offset = "0x3B2F200", VA = "0x3B2F200")]
	[CLSCompliant(false)]
	public static implicit operator JToken(sbyte? value)
	{
		return null;
	}

	[Token(Token = "0x6000D02")]
	[Address(RVA = "0x3B2F280", Offset = "0x3B2F280", VA = "0x3B2F280")]
	public static implicit operator JToken(bool? value)
	{
		return null;
	}

	[Token(Token = "0x6000D03")]
	[Address(RVA = "0x3B2F300", Offset = "0x3B2F300", VA = "0x3B2F300")]
	public static implicit operator JToken(long value)
	{
		return null;
	}

	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x3B2F350", Offset = "0x3B2F350", VA = "0x3B2F350")]
	public static implicit operator JToken(DateTime? value)
	{
		return null;
	}

	[Token(Token = "0x6000D05")]
	[Address(RVA = "0x3B2F3E0", Offset = "0x3B2F3E0", VA = "0x3B2F3E0")]
	public static implicit operator JToken(DateTimeOffset? value)
	{
		return null;
	}

	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x3B2F470", Offset = "0x3B2F470", VA = "0x3B2F470")]
	public static implicit operator JToken(decimal? value)
	{
		return null;
	}

	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x3B2F500", Offset = "0x3B2F500", VA = "0x3B2F500")]
	public static implicit operator JToken(double? value)
	{
		return null;
	}

	[Token(Token = "0x6000D08")]
	[Address(RVA = "0x3B2F5A0", Offset = "0x3B2F5A0", VA = "0x3B2F5A0")]
	[CLSCompliant(false)]
	public static implicit operator JToken(short value)
	{
		return null;
	}

	[Token(Token = "0x6000D09")]
	[Address(RVA = "0x3B2F5F0", Offset = "0x3B2F5F0", VA = "0x3B2F5F0")]
	[CLSCompliant(false)]
	public static implicit operator JToken(ushort value)
	{
		return null;
	}

	[Token(Token = "0x6000D0A")]
	[Address(RVA = "0x3B2F640", Offset = "0x3B2F640", VA = "0x3B2F640")]
	public static implicit operator JToken(int value)
	{
		return null;
	}

	[Token(Token = "0x6000D0B")]
	[Address(RVA = "0x3B2F690", Offset = "0x3B2F690", VA = "0x3B2F690")]
	public static implicit operator JToken(int? value)
	{
		return null;
	}

	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x3B2F710", Offset = "0x3B2F710", VA = "0x3B2F710")]
	public static implicit operator JToken(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x3B2F760", Offset = "0x3B2F760", VA = "0x3B2F760")]
	public static implicit operator JToken(long? value)
	{
		return null;
	}

	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x3B2F7F0", Offset = "0x3B2F7F0", VA = "0x3B2F7F0")]
	public static implicit operator JToken(float? value)
	{
		return null;
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x3B2F870", Offset = "0x3B2F870", VA = "0x3B2F870")]
	public static implicit operator JToken(decimal value)
	{
		return null;
	}

	[Token(Token = "0x6000D10")]
	[Address(RVA = "0x3B2F8D0", Offset = "0x3B2F8D0", VA = "0x3B2F8D0")]
	[CLSCompliant(false)]
	public static implicit operator JToken(short? value)
	{
		return null;
	}

	[Token(Token = "0x6000D11")]
	[Address(RVA = "0x3B2F950", Offset = "0x3B2F950", VA = "0x3B2F950")]
	[CLSCompliant(false)]
	public static implicit operator JToken(ushort? value)
	{
		return null;
	}

	[Token(Token = "0x6000D12")]
	[Address(RVA = "0x3B2F9D0", Offset = "0x3B2F9D0", VA = "0x3B2F9D0")]
	[CLSCompliant(false)]
	public static implicit operator JToken(uint? value)
	{
		return null;
	}

	[Token(Token = "0x6000D13")]
	[Address(RVA = "0x3B2FA50", Offset = "0x3B2FA50", VA = "0x3B2FA50")]
	[CLSCompliant(false)]
	public static implicit operator JToken(ulong? value)
	{
		return null;
	}

	[Token(Token = "0x6000D14")]
	[Address(RVA = "0x3B2FAE0", Offset = "0x3B2FAE0", VA = "0x3B2FAE0")]
	public static implicit operator JToken(double value)
	{
		return null;
	}

	[Token(Token = "0x6000D15")]
	[Address(RVA = "0x3B2FB40", Offset = "0x3B2FB40", VA = "0x3B2FB40")]
	public static implicit operator JToken(float value)
	{
		return null;
	}

	[Token(Token = "0x6000D16")]
	[Address(RVA = "0x3B2FBA0", Offset = "0x3B2FBA0", VA = "0x3B2FBA0")]
	public static implicit operator JToken(string? value)
	{
		return null;
	}

	[Token(Token = "0x6000D17")]
	[Address(RVA = "0x3B2FBF0", Offset = "0x3B2FBF0", VA = "0x3B2FBF0")]
	[CLSCompliant(false)]
	public static implicit operator JToken(uint value)
	{
		return null;
	}

	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x3B2FC40", Offset = "0x3B2FC40", VA = "0x3B2FC40")]
	[CLSCompliant(false)]
	public static implicit operator JToken(ulong value)
	{
		return null;
	}

	[Token(Token = "0x6000D19")]
	[Address(RVA = "0x3B2FC90", Offset = "0x3B2FC90", VA = "0x3B2FC90")]
	public static implicit operator JToken(byte[] value)
	{
		return null;
	}

	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x3B2FCE0", Offset = "0x3B2FCE0", VA = "0x3B2FCE0")]
	public static implicit operator JToken(Uri? value)
	{
		return null;
	}

	[Token(Token = "0x6000D1B")]
	[Address(RVA = "0x3B2FD30", Offset = "0x3B2FD30", VA = "0x3B2FD30")]
	public static implicit operator JToken(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x6000D1C")]
	[Address(RVA = "0x3B2FD80", Offset = "0x3B2FD80", VA = "0x3B2FD80")]
	public static implicit operator JToken(TimeSpan? value)
	{
		return null;
	}

	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x3B2FE10", Offset = "0x3B2FE10", VA = "0x3B2FE10")]
	public static implicit operator JToken(Guid value)
	{
		return null;
	}

	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x3B2FE70", Offset = "0x3B2FE70", VA = "0x3B2FE70")]
	public static implicit operator JToken(Guid? value)
	{
		return null;
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x3B2FF00", Offset = "0x3B2FF00", VA = "0x3B2FF00", Slot = "6")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x3B2FF90", Offset = "0x3B2FF90", VA = "0x3B2FF90", Slot = "5")]
	private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000D21")]
	internal abstract int GetDeepHashCode();

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x3B30040", Offset = "0x3B30040", VA = "0x3B30040")]
	public JsonReader CreateReader()
	{
		return null;
	}

	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x3B20110", Offset = "0x3B20110", VA = "0x3B20110")]
	internal static JToken FromObjectInternal(object o, JsonSerializer jsonSerializer)
	{
		return null;
	}

	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x3B30090", Offset = "0x3B30090", VA = "0x3B30090")]
	public static JToken FromObject(object o)
	{
		return null;
	}

	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x3B300F0", Offset = "0x3B300F0", VA = "0x3B300F0")]
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
	[Address(RVA = "0x3B30140", Offset = "0x3B30140", VA = "0x3B30140")]
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
	[Address(RVA = "0x3B30DE0", Offset = "0x3B30DE0", VA = "0x3B30DE0")]
	public object? ToObject(Type? objectType, JsonSerializer jsonSerializer)
	{
		return null;
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x3B310A0", Offset = "0x3B310A0", VA = "0x3B310A0")]
	public static JToken ReadFrom(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x3B31100", Offset = "0x3B31100", VA = "0x3B31100")]
	public static JToken ReadFrom(JsonReader reader, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x3B31400", Offset = "0x3B31400", VA = "0x3B31400")]
	public static JToken Parse(string json)
	{
		return null;
	}

	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x3B31460", Offset = "0x3B31460", VA = "0x3B31460")]
	public static JToken Parse(string json, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x3B316D0", Offset = "0x3B316D0", VA = "0x3B316D0")]
	public static JToken Load(JsonReader reader, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000D30")]
	[Address(RVA = "0x3B31720", Offset = "0x3B31720", VA = "0x3B31720")]
	public static JToken Load(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x3B15820", Offset = "0x3B15820", VA = "0x3B15820")]
	internal void SetLineInfo(IJsonLineInfo? lineInfo, JsonLoadSettings? settings)
	{
	}

	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x3B317D0", Offset = "0x3B317D0", VA = "0x3B317D0")]
	internal void SetLineInfo(int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000D33")]
	[Address(RVA = "0x3B31AD0", Offset = "0x3B31AD0", VA = "0x3B31AD0", Slot = "7")]
	private bool Newtonsoft_002EJson_002EIJsonLineInfo_002EHasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D36")]
	[Address(RVA = "0x3B31B90", Offset = "0x3B31B90", VA = "0x3B31B90")]
	public JToken SelectToken(string path)
	{
		return null;
	}

	[Token(Token = "0x6000D37")]
	[Address(RVA = "0x3B31F70", Offset = "0x3B31F70", VA = "0x3B31F70")]
	public JToken SelectToken(string path, bool errorWhenNoMatch)
	{
		return null;
	}

	[Token(Token = "0x6000D38")]
	[Address(RVA = "0x3B31BA0", Offset = "0x3B31BA0", VA = "0x3B31BA0")]
	public JToken? SelectToken(string path, JsonSelectSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000D39")]
	[Address(RVA = "0x3B31FE0", Offset = "0x3B31FE0", VA = "0x3B31FE0")]
	public IEnumerable<JToken> SelectTokens(string path)
	{
		return null;
	}

	[Token(Token = "0x6000D3A")]
	[Address(RVA = "0x3B320D0", Offset = "0x3B320D0", VA = "0x3B320D0")]
	public IEnumerable<JToken> SelectTokens(string path, bool errorWhenNoMatch)
	{
		return null;
	}

	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x3B32050", Offset = "0x3B32050", VA = "0x3B32050")]
	public IEnumerable<JToken> SelectTokens(string path, JsonSelectSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x3B321A0", Offset = "0x3B321A0", VA = "0x3B321A0", Slot = "26")]
	protected virtual DynamicMetaObject GetMetaObject(Expression parameter)
	{
		return null;
	}

	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x3B32250", Offset = "0x3B32250", VA = "0x3B32250", Slot = "11")]
	private DynamicMetaObject System_002EDynamic_002EIDynamicMetaObjectProvider_002EGetMetaObject(Expression parameter)
	{
		return null;
	}

	[Token(Token = "0x6000D3E")]
	[Address(RVA = "0x3B32270", Offset = "0x3B32270", VA = "0x3B32270", Slot = "10")]
	private object System_002EICloneable_002EClone()
	{
		return null;
	}

	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x3B32290", Offset = "0x3B32290", VA = "0x3B32290")]
	public JToken DeepClone()
	{
		return null;
	}

	[Token(Token = "0x6000D40")]
	[Address(RVA = "0x3B322B0", Offset = "0x3B322B0", VA = "0x3B322B0")]
	public JToken DeepClone(JsonCloneSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6000D41")]
	[Address(RVA = "0x3B31850", Offset = "0x3B31850", VA = "0x3B31850")]
	public void AddAnnotation(object annotation)
	{
	}

	[Token(Token = "0x6000D42")]
	public T Annotation<T>() where T : class
	{
		return null;
	}

	[Token(Token = "0x6000D43")]
	[Address(RVA = "0x3B322D0", Offset = "0x3B322D0", VA = "0x3B322D0")]
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
	[Address(RVA = "0x3B32430", Offset = "0x3B32430", VA = "0x3B32430")]
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
	[Address(RVA = "0x3B32500", Offset = "0x3B32500", VA = "0x3B32500")]
	public void RemoveAnnotations(Type type)
	{
	}

	[Token(Token = "0x6000D48")]
	[Address(RVA = "0x3B17030", Offset = "0x3B17030", VA = "0x3B17030")]
	internal void CopyAnnotations(JToken target, JToken source)
	{
	}
}
