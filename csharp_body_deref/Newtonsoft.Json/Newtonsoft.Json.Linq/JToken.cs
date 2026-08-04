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
		[Address(RVA = "0x3E27180", Offset = "0x3E27180", VA = "0x3E27180")]
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
			[Address(RVA = "0x3E28480", Offset = "0x3E28480", VA = "0x3E28480", Slot = "6")]
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
			[Address(RVA = "0x3E284D0", Offset = "0x3E284D0", VA = "0x3E284D0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D4B")]
		[Address(RVA = "0x3E1DB70", Offset = "0x3E1DB70", VA = "0x3E1DB70")]
		[DebuggerHidden]
		public _003CAfterSelf_003Ed__49(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D4C")]
		[Address(RVA = "0x3E283B0", Offset = "0x3E283B0", VA = "0x3E283B0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D4D")]
		[Address(RVA = "0x3E283C0", Offset = "0x3E283C0", VA = "0x3E283C0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D4F")]
		[Address(RVA = "0x3E28490", Offset = "0x3E28490", VA = "0x3E28490", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000D51")]
		[Address(RVA = "0x3E284E0", Offset = "0x3E284E0", VA = "0x3E284E0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000D52")]
		[Address(RVA = "0x3E28580", Offset = "0x3E28580", VA = "0x3E28580", Slot = "5")]
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
			[Address(RVA = "0x3E287C0", Offset = "0x3E287C0", VA = "0x3E287C0", Slot = "6")]
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
			[Address(RVA = "0x3E28810", Offset = "0x3E28810", VA = "0x3E28810", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D5B")]
		[Address(RVA = "0x3E27E20", Offset = "0x3E27E20", VA = "0x3E27E20")]
		[DebuggerHidden]
		public _003CAnnotations_003Ed__186(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D5C")]
		[Address(RVA = "0x3E28590", Offset = "0x3E28590", VA = "0x3E28590", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D5D")]
		[Address(RVA = "0x3E285A0", Offset = "0x3E285A0", VA = "0x3E285A0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D5F")]
		[Address(RVA = "0x3E287D0", Offset = "0x3E287D0", VA = "0x3E287D0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000D61")]
		[Address(RVA = "0x3E28820", Offset = "0x3E28820", VA = "0x3E28820", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<object> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EObject_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000D62")]
		[Address(RVA = "0x3E288D0", Offset = "0x3E288D0", VA = "0x3E288D0", Slot = "5")]
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
			[Address(RVA = "0x3E289C0", Offset = "0x3E289C0", VA = "0x3E289C0", Slot = "6")]
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
			[Address(RVA = "0x3E28A10", Offset = "0x3E28A10", VA = "0x3E28A10", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D63")]
		[Address(RVA = "0x3E1DC20", Offset = "0x3E1DC20", VA = "0x3E1DC20")]
		[DebuggerHidden]
		public _003CBeforeSelf_003Ed__50(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D64")]
		[Address(RVA = "0x3E288E0", Offset = "0x3E288E0", VA = "0x3E288E0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D65")]
		[Address(RVA = "0x3E288F0", Offset = "0x3E288F0", VA = "0x3E288F0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D67")]
		[Address(RVA = "0x3E289D0", Offset = "0x3E289D0", VA = "0x3E289D0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000D69")]
		[Address(RVA = "0x3E28A20", Offset = "0x3E28A20", VA = "0x3E28A20", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000D6A")]
		[Address(RVA = "0x3E28AC0", Offset = "0x3E28AC0", VA = "0x3E28AC0", Slot = "5")]
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
			[Address(RVA = "0x3E28BA0", Offset = "0x3E28BA0", VA = "0x3E28BA0", Slot = "6")]
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
			[Address(RVA = "0x3E28BF0", Offset = "0x3E28BF0", VA = "0x3E28BF0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D6B")]
		[Address(RVA = "0x3E1DAC0", Offset = "0x3E1DAC0", VA = "0x3E1DAC0")]
		[DebuggerHidden]
		public _003CGetAncestors_003Ed__48(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D6C")]
		[Address(RVA = "0x3E28AD0", Offset = "0x3E28AD0", VA = "0x3E28AD0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D6D")]
		[Address(RVA = "0x3E28AE0", Offset = "0x3E28AE0", VA = "0x3E28AE0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D6F")]
		[Address(RVA = "0x3E28BB0", Offset = "0x3E28BB0", VA = "0x3E28BB0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000D71")]
		[Address(RVA = "0x3E28C00", Offset = "0x3E28C00", VA = "0x3E28C00", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000D72")]
		[Address(RVA = "0x3E28CB0", Offset = "0x3E28CB0", VA = "0x3E28CB0", Slot = "5")]
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
		[Address(RVA = "0x3E28CC0", Offset = "0x3E28CC0", VA = "0x3E28CC0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000D74")]
		[Address(RVA = "0x3E29CD0", Offset = "0x3E29CD0", VA = "0x3E29CD0", Slot = "5")]
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
		[Address(RVA = "0x3E11010", Offset = "0x3E11010", VA = "0x3E11010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000214")]
	public JContainer? Parent
	{
		[Token(Token = "0x6000CB0")]
		[Address(RVA = "0x3E1D310", Offset = "0x3E1D310", VA = "0x3E1D310")]
		[DebuggerStepThrough]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CB1")]
		[Address(RVA = "0x3E1D320", Offset = "0x3E1D320", VA = "0x3E1D320")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000215")]
	public JToken Root
	{
		[Token(Token = "0x6000CB2")]
		[Address(RVA = "0x3E0D810", Offset = "0x3E0D810", VA = "0x3E0D810")]
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
		[Address(RVA = "0x3E1D360", Offset = "0x3E1D360", VA = "0x3E1D360")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CB9")]
		[Address(RVA = "0x3E1D370", Offset = "0x3E1D370", VA = "0x3E1D370")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000219")]
	public JToken? Previous
	{
		[Token(Token = "0x6000CBA")]
		[Address(RVA = "0x3E1D380", Offset = "0x3E1D380", VA = "0x3E1D380")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CBB")]
		[Address(RVA = "0x3E1D390", Offset = "0x3E1D390", VA = "0x3E1D390")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700021A")]
	public string Path
	{
		[Token(Token = "0x6000CBC")]
		[Address(RVA = "0x3E1D3A0", Offset = "0x3E1D3A0", VA = "0x3E1D3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021B")]
	public virtual JToken? this[object key]
	{
		[Token(Token = "0x6000CC5")]
		[Address(RVA = "0x3E1DC50", Offset = "0x3E1DC50", VA = "0x3E1DC50", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CC6")]
		[Address(RVA = "0x3E1DCE0", Offset = "0x3E1DCE0", VA = "0x3E1DCE0", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x1700021C")]
	public virtual JToken? First
	{
		[Token(Token = "0x6000CC8")]
		[Address(RVA = "0x3E1DD70", Offset = "0x3E1DD70", VA = "0x3E1DD70", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021D")]
	public virtual JToken? Last
	{
		[Token(Token = "0x6000CC9")]
		[Address(RVA = "0x3E1DE00", Offset = "0x3E1DE00", VA = "0x3E1DE00", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021E")]
	private IJEnumerable<JToken> Newtonsoft_002EJson_002ELinq_002EIJEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EItem
	{
		[Token(Token = "0x6000D22")]
		[Address(RVA = "0x3E25970", Offset = "0x3E25970", VA = "0x3E25970", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021F")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELineNumber
	{
		[Token(Token = "0x6000D34")]
		[Address(RVA = "0x3E27460", Offset = "0x3E27460", VA = "0x3E27460", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000220")]
	private int Newtonsoft_002EJson_002EIJsonLineInfo_002ELinePosition
	{
		[Token(Token = "0x6000D35")]
		[Address(RVA = "0x3E274A0", Offset = "0x3E274A0", VA = "0x3E274A0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x3E1CFF0", Offset = "0x3E1CFF0", VA = "0x3E1CFF0", Slot = "12")]
	public virtual Task WriteToAsync(JsonWriter writer, CancellationToken cancellationToken, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x3E1D030", Offset = "0x3E1D030", VA = "0x3E1D030")]
	public Task WriteToAsync(JsonWriter writer, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000CAB")]
	[Address(RVA = "0x3E1D050", Offset = "0x3E1D050", VA = "0x3E1D050")]
	public static Task<JToken> ReadFromAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000CAC")]
	[Address(RVA = "0x3E1D0A0", Offset = "0x3E1D0A0", VA = "0x3E1D0A0")]
	[AsyncStateMachine(typeof(_003CReadFromAsync_003Ed__3))]
	public static Task<JToken> ReadFromAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x3E1D200", Offset = "0x3E1D200", VA = "0x3E1D200")]
	public static Task<JToken> LoadAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x3E1D2B0", Offset = "0x3E1D2B0", VA = "0x3E1D2B0")]
	public static Task<JToken> LoadAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000CB3")]
	internal abstract JToken CloneToken(JsonCloneSettings? settings);

	[Token(Token = "0x6000CB4")]
	internal abstract bool DeepEquals(JToken node);

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x3E1D330", Offset = "0x3E1D330", VA = "0x3E1D330")]
	public static bool DeepEquals(JToken? t1, JToken? t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x3E0C970", Offset = "0x3E0C970", VA = "0x3E0C970")]
	internal JToken()
	{
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x3E1D800", Offset = "0x3E1D800", VA = "0x3E1D800")]
	public void AddAfterSelf(object? content)
	{
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x3E1D8A0", Offset = "0x3E1D8A0", VA = "0x3E1D8A0")]
	public void AddBeforeSelf(object? content)
	{
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x3E1D940", Offset = "0x3E1D940", VA = "0x3E1D940")]
	public IEnumerable<JToken> Ancestors()
	{
		return null;
	}

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x3E1DA40", Offset = "0x3E1DA40", VA = "0x3E1DA40")]
	public IEnumerable<JToken> AncestorsAndSelf()
	{
		return null;
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x3E1D9C0", Offset = "0x3E1D9C0", VA = "0x3E1D9C0")]
	[IteratorStateMachine(typeof(_003CGetAncestors_003Ed__48))]
	internal IEnumerable<JToken> GetAncestors(bool self)
	{
		return null;
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x3E1DAF0", Offset = "0x3E1DAF0", VA = "0x3E1DAF0")]
	[IteratorStateMachine(typeof(_003CAfterSelf_003Ed__49))]
	public IEnumerable<JToken> AfterSelf()
	{
		return null;
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x3E1DBA0", Offset = "0x3E1DBA0", VA = "0x3E1DBA0")]
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
	[Address(RVA = "0x3E1DE90", Offset = "0x3E1DE90", VA = "0x3E1DE90", Slot = "22")]
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
	[Address(RVA = "0x3E16260", Offset = "0x3E16260", VA = "0x3E16260")]
	public void Remove()
	{
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x3E105B0", Offset = "0x3E105B0", VA = "0x3E105B0")]
	public void Replace(JToken value)
	{
	}

	[Token(Token = "0x6000CCF")]
	public abstract void WriteTo(JsonWriter writer, params JsonConverter[] converters);

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x3E1DF00", Offset = "0x3E1DF00", VA = "0x3E1DF00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x3E1DFD0", Offset = "0x3E1DFD0", VA = "0x3E1DFD0")]
	public string ToString(Formatting formatting, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x3E1E250", Offset = "0x3E1E250", VA = "0x3E1E250")]
	private static JValue EnsureValue(JToken value)
	{
		return null;
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x3E1E350", Offset = "0x3E1E350", VA = "0x3E1E350")]
	private static string GetType(JToken token)
	{
		return null;
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x3E1E430", Offset = "0x3E1E430", VA = "0x3E1E430")]
	private static bool ValidateToken(JToken o, JTokenType[] validTypes, bool nullable)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x3E1E4E0", Offset = "0x3E1E4E0", VA = "0x3E1E4E0")]
	public static explicit operator bool(JToken value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x3E1E770", Offset = "0x3E1E770", VA = "0x3E1E770")]
	public static explicit operator DateTimeOffset(JToken value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x3E1EA40", Offset = "0x3E1EA40", VA = "0x3E1EA40")]
	public static explicit operator bool?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x3E1ED10", Offset = "0x3E1ED10", VA = "0x3E1ED10")]
	public static explicit operator long(JToken value)
	{
		return default(long);
	}

	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x3E1EF70", Offset = "0x3E1EF70", VA = "0x3E1EF70")]
	public static explicit operator DateTime?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x3E1F230", Offset = "0x3E1F230", VA = "0x3E1F230")]
	public static explicit operator DateTimeOffset?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CDB")]
	[Address(RVA = "0x3E1F580", Offset = "0x3E1F580", VA = "0x3E1F580")]
	public static explicit operator decimal?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x3E1F840", Offset = "0x3E1F840", VA = "0x3E1F840")]
	public static explicit operator double?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x3E1FAF0", Offset = "0x3E1FAF0", VA = "0x3E1FAF0")]
	public static explicit operator char?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x3E1FDA0", Offset = "0x3E1FDA0", VA = "0x3E1FDA0")]
	public static explicit operator int(JToken value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x3E20000", Offset = "0x3E20000", VA = "0x3E20000")]
	public static explicit operator short(JToken value)
	{
		return default(short);
	}

	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x3E20260", Offset = "0x3E20260", VA = "0x3E20260")]
	[CLSCompliant(false)]
	public static explicit operator ushort(JToken value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x3E204C0", Offset = "0x3E204C0", VA = "0x3E204C0")]
	[CLSCompliant(false)]
	public static explicit operator char(JToken value)
	{
		return default(char);
	}

	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x3E20720", Offset = "0x3E20720", VA = "0x3E20720")]
	public static explicit operator byte(JToken value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000CE3")]
	[Address(RVA = "0x3E20980", Offset = "0x3E20980", VA = "0x3E20980")]
	[CLSCompliant(false)]
	public static explicit operator sbyte(JToken value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000CE4")]
	[Address(RVA = "0x3E20BE0", Offset = "0x3E20BE0", VA = "0x3E20BE0")]
	public static explicit operator int?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CE5")]
	[Address(RVA = "0x3E20E90", Offset = "0x3E20E90", VA = "0x3E20E90")]
	public static explicit operator short?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CE6")]
	[Address(RVA = "0x3E21140", Offset = "0x3E21140", VA = "0x3E21140")]
	[CLSCompliant(false)]
	public static explicit operator ushort?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CE7")]
	[Address(RVA = "0x3E213F0", Offset = "0x3E213F0", VA = "0x3E213F0")]
	public static explicit operator byte?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CE8")]
	[Address(RVA = "0x3E216A0", Offset = "0x3E216A0", VA = "0x3E216A0")]
	[CLSCompliant(false)]
	public static explicit operator sbyte?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x3E21950", Offset = "0x3E21950", VA = "0x3E21950")]
	public static explicit operator DateTime(JToken value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000CEA")]
	[Address(RVA = "0x3E21B90", Offset = "0x3E21B90", VA = "0x3E21B90")]
	public static explicit operator long?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CEB")]
	[Address(RVA = "0x3E21E40", Offset = "0x3E21E40", VA = "0x3E21E40")]
	public static explicit operator float?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CEC")]
	[Address(RVA = "0x3E220F0", Offset = "0x3E220F0", VA = "0x3E220F0")]
	public static explicit operator decimal(JToken value)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000CED")]
	[Address(RVA = "0x3E22350", Offset = "0x3E22350", VA = "0x3E22350")]
	[CLSCompliant(false)]
	public static explicit operator uint?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x3E22600", Offset = "0x3E22600", VA = "0x3E22600")]
	[CLSCompliant(false)]
	public static explicit operator ulong?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x3E228B0", Offset = "0x3E228B0", VA = "0x3E228B0")]
	public static explicit operator double(JToken value)
	{
		return default(double);
	}

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x3E22B10", Offset = "0x3E22B10", VA = "0x3E22B10")]
	public static explicit operator float(JToken value)
	{
		return default(float);
	}

	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x3E22D70", Offset = "0x3E22D70", VA = "0x3E22D70")]
	public static explicit operator string?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x3E23060", Offset = "0x3E23060", VA = "0x3E23060")]
	[CLSCompliant(false)]
	public static explicit operator uint(JToken value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x3E232C0", Offset = "0x3E232C0", VA = "0x3E232C0")]
	[CLSCompliant(false)]
	public static explicit operator ulong(JToken value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x3E23520", Offset = "0x3E23520", VA = "0x3E23520")]
	public static explicit operator byte[]?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x3E237B0", Offset = "0x3E237B0", VA = "0x3E237B0")]
	public static explicit operator Guid(JToken value)
	{
		return default(Guid);
	}

	[Token(Token = "0x6000CF6")]
	[Address(RVA = "0x3E23A60", Offset = "0x3E23A60", VA = "0x3E23A60")]
	public static explicit operator Guid?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CF7")]
	[Address(RVA = "0x3E23D80", Offset = "0x3E23D80", VA = "0x3E23D80")]
	public static explicit operator TimeSpan(JToken value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x3E24000", Offset = "0x3E24000", VA = "0x3E24000")]
	public static explicit operator TimeSpan?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x3E242C0", Offset = "0x3E242C0", VA = "0x3E242C0")]
	public static explicit operator Uri?(JToken? value)
	{
		return null;
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x3E24540", Offset = "0x3E24540", VA = "0x3E24540")]
	private static BigInteger ToBigInteger(JToken value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x3E24720", Offset = "0x3E24720", VA = "0x3E24720")]
	private static BigInteger? ToBigIntegerNullable(JToken value)
	{
		return null;
	}

	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x3E24990", Offset = "0x3E24990", VA = "0x3E24990")]
	public static implicit operator JToken(bool value)
	{
		return null;
	}

	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x3E249E0", Offset = "0x3E249E0", VA = "0x3E249E0")]
	public static implicit operator JToken(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x6000CFE")]
	[Address(RVA = "0x3E24A30", Offset = "0x3E24A30", VA = "0x3E24A30")]
	public static implicit operator JToken(byte value)
	{
		return null;
	}

	[Token(Token = "0x6000CFF")]
	[Address(RVA = "0x3E24A80", Offset = "0x3E24A80", VA = "0x3E24A80")]
	public static implicit operator JToken(byte? value)
	{
		return null;
	}

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x3E24B00", Offset = "0x3E24B00", VA = "0x3E24B00")]
	[CLSCompliant(false)]
	public static implicit operator JToken(sbyte value)
	{
		return null;
	}

	[Token(Token = "0x6000D01")]
	[Address(RVA = "0x3E24B50", Offset = "0x3E24B50", VA = "0x3E24B50")]
	[CLSCompliant(false)]
	public static implicit operator JToken(sbyte? value)
	{
		return null;
	}

	[Token(Token = "0x6000D02")]
	[Address(RVA = "0x3E24BD0", Offset = "0x3E24BD0", VA = "0x3E24BD0")]
	public static implicit operator JToken(bool? value)
	{
		return null;
	}

	[Token(Token = "0x6000D03")]
	[Address(RVA = "0x3E24C50", Offset = "0x3E24C50", VA = "0x3E24C50")]
	public static implicit operator JToken(long value)
	{
		return null;
	}

	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x3E24CA0", Offset = "0x3E24CA0", VA = "0x3E24CA0")]
	public static implicit operator JToken(DateTime? value)
	{
		return null;
	}

	[Token(Token = "0x6000D05")]
	[Address(RVA = "0x3E24D30", Offset = "0x3E24D30", VA = "0x3E24D30")]
	public static implicit operator JToken(DateTimeOffset? value)
	{
		return null;
	}

	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x3E24DC0", Offset = "0x3E24DC0", VA = "0x3E24DC0")]
	public static implicit operator JToken(decimal? value)
	{
		return null;
	}

	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x3E24E50", Offset = "0x3E24E50", VA = "0x3E24E50")]
	public static implicit operator JToken(double? value)
	{
		return null;
	}

	[Token(Token = "0x6000D08")]
	[Address(RVA = "0x3E24EF0", Offset = "0x3E24EF0", VA = "0x3E24EF0")]
	[CLSCompliant(false)]
	public static implicit operator JToken(short value)
	{
		return null;
	}

	[Token(Token = "0x6000D09")]
	[Address(RVA = "0x3E24F40", Offset = "0x3E24F40", VA = "0x3E24F40")]
	[CLSCompliant(false)]
	public static implicit operator JToken(ushort value)
	{
		return null;
	}

	[Token(Token = "0x6000D0A")]
	[Address(RVA = "0x3E24F90", Offset = "0x3E24F90", VA = "0x3E24F90")]
	public static implicit operator JToken(int value)
	{
		return null;
	}

	[Token(Token = "0x6000D0B")]
	[Address(RVA = "0x3E24FE0", Offset = "0x3E24FE0", VA = "0x3E24FE0")]
	public static implicit operator JToken(int? value)
	{
		return null;
	}

	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x3E25060", Offset = "0x3E25060", VA = "0x3E25060")]
	public static implicit operator JToken(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x3E250B0", Offset = "0x3E250B0", VA = "0x3E250B0")]
	public static implicit operator JToken(long? value)
	{
		return null;
	}

	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x3E25140", Offset = "0x3E25140", VA = "0x3E25140")]
	public static implicit operator JToken(float? value)
	{
		return null;
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x3E251C0", Offset = "0x3E251C0", VA = "0x3E251C0")]
	public static implicit operator JToken(decimal value)
	{
		return null;
	}

	[Token(Token = "0x6000D10")]
	[Address(RVA = "0x3E25220", Offset = "0x3E25220", VA = "0x3E25220")]
	[CLSCompliant(false)]
	public static implicit operator JToken(short? value)
	{
		return null;
	}

	[Token(Token = "0x6000D11")]
	[Address(RVA = "0x3E252A0", Offset = "0x3E252A0", VA = "0x3E252A0")]
	[CLSCompliant(false)]
	public static implicit operator JToken(ushort? value)
	{
		return null;
	}

	[Token(Token = "0x6000D12")]
	[Address(RVA = "0x3E25320", Offset = "0x3E25320", VA = "0x3E25320")]
	[CLSCompliant(false)]
	public static implicit operator JToken(uint? value)
	{
		return null;
	}

	[Token(Token = "0x6000D13")]
	[Address(RVA = "0x3E253A0", Offset = "0x3E253A0", VA = "0x3E253A0")]
	[CLSCompliant(false)]
	public static implicit operator JToken(ulong? value)
	{
		return null;
	}

	[Token(Token = "0x6000D14")]
	[Address(RVA = "0x3E25430", Offset = "0x3E25430", VA = "0x3E25430")]
	public static implicit operator JToken(double value)
	{
		return null;
	}

	[Token(Token = "0x6000D15")]
	[Address(RVA = "0x3E25490", Offset = "0x3E25490", VA = "0x3E25490")]
	public static implicit operator JToken(float value)
	{
		return null;
	}

	[Token(Token = "0x6000D16")]
	[Address(RVA = "0x3E254F0", Offset = "0x3E254F0", VA = "0x3E254F0")]
	public static implicit operator JToken(string? value)
	{
		return null;
	}

	[Token(Token = "0x6000D17")]
	[Address(RVA = "0x3E25540", Offset = "0x3E25540", VA = "0x3E25540")]
	[CLSCompliant(false)]
	public static implicit operator JToken(uint value)
	{
		return null;
	}

	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x3E25590", Offset = "0x3E25590", VA = "0x3E25590")]
	[CLSCompliant(false)]
	public static implicit operator JToken(ulong value)
	{
		return null;
	}

	[Token(Token = "0x6000D19")]
	[Address(RVA = "0x3E255E0", Offset = "0x3E255E0", VA = "0x3E255E0")]
	public static implicit operator JToken(byte[] value)
	{
		return null;
	}

	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x3E25630", Offset = "0x3E25630", VA = "0x3E25630")]
	public static implicit operator JToken(Uri? value)
	{
		return null;
	}

	[Token(Token = "0x6000D1B")]
	[Address(RVA = "0x3E25680", Offset = "0x3E25680", VA = "0x3E25680")]
	public static implicit operator JToken(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x6000D1C")]
	[Address(RVA = "0x3E256D0", Offset = "0x3E256D0", VA = "0x3E256D0")]
	public static implicit operator JToken(TimeSpan? value)
	{
		return null;
	}

	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x3E25760", Offset = "0x3E25760", VA = "0x3E25760")]
	public static implicit operator JToken(Guid value)
	{
		return null;
	}

	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x3E257C0", Offset = "0x3E257C0", VA = "0x3E257C0")]
	public static implicit operator JToken(Guid? value)
	{
		return null;
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x3E25850", Offset = "0x3E25850", VA = "0x3E25850", Slot = "6")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x3E258E0", Offset = "0x3E258E0", VA = "0x3E258E0", Slot = "5")]
	private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000D21")]
	internal abstract int GetDeepHashCode();

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x3E25990", Offset = "0x3E25990", VA = "0x3E25990")]
	public JsonReader CreateReader()
	{
		return null;
	}

	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x3E15A60", Offset = "0x3E15A60", VA = "0x3E15A60")]
	internal static JToken FromObjectInternal(object o, JsonSerializer jsonSerializer)
	{
		return null;
	}

	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x3E259E0", Offset = "0x3E259E0", VA = "0x3E259E0")]
	public static JToken FromObject(object o)
	{
		return null;
	}

	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x3E25A40", Offset = "0x3E25A40", VA = "0x3E25A40")]
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
	[Address(RVA = "0x3E25A90", Offset = "0x3E25A90", VA = "0x3E25A90")]
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
	[Address(RVA = "0x3E26730", Offset = "0x3E26730", VA = "0x3E26730")]
	public object? ToObject(Type? objectType, JsonSerializer jsonSerializer)
	{
		return null;
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x3E269F0", Offset = "0x3E269F0", VA = "0x3E269F0")]
	public static JToken ReadFrom(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x3E26A50", Offset = "0x3E26A50", VA = "0x3E26A50")]
	public static JToken ReadFrom(JsonReader reader, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x3E26D50", Offset = "0x3E26D50", VA = "0x3E26D50")]
	public static JToken Parse(string json)
	{
		return null;
	}

	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x3E26DB0", Offset = "0x3E26DB0", VA = "0x3E26DB0")]
	public static JToken Parse(string json, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x3E27020", Offset = "0x3E27020", VA = "0x3E27020")]
	public static JToken Load(JsonReader reader, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000D30")]
	[Address(RVA = "0x3E27070", Offset = "0x3E27070", VA = "0x3E27070")]
	public static JToken Load(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x3E0B170", Offset = "0x3E0B170", VA = "0x3E0B170")]
	internal void SetLineInfo(IJsonLineInfo? lineInfo, JsonLoadSettings? settings)
	{
	}

	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x3E27120", Offset = "0x3E27120", VA = "0x3E27120")]
	internal void SetLineInfo(int lineNumber, int linePosition)
	{
	}

	[Token(Token = "0x6000D33")]
	[Address(RVA = "0x3E27420", Offset = "0x3E27420", VA = "0x3E27420", Slot = "7")]
	private bool Newtonsoft_002EJson_002EIJsonLineInfo_002EHasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D36")]
	[Address(RVA = "0x3E274E0", Offset = "0x3E274E0", VA = "0x3E274E0")]
	public JToken SelectToken(string path)
	{
		return null;
	}

	[Token(Token = "0x6000D37")]
	[Address(RVA = "0x3E278C0", Offset = "0x3E278C0", VA = "0x3E278C0")]
	public JToken SelectToken(string path, bool errorWhenNoMatch)
	{
		return null;
	}

	[Token(Token = "0x6000D38")]
	[Address(RVA = "0x3E274F0", Offset = "0x3E274F0", VA = "0x3E274F0")]
	public JToken? SelectToken(string path, JsonSelectSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000D39")]
	[Address(RVA = "0x3E27930", Offset = "0x3E27930", VA = "0x3E27930")]
	public IEnumerable<JToken> SelectTokens(string path)
	{
		return null;
	}

	[Token(Token = "0x6000D3A")]
	[Address(RVA = "0x3E27A20", Offset = "0x3E27A20", VA = "0x3E27A20")]
	public IEnumerable<JToken> SelectTokens(string path, bool errorWhenNoMatch)
	{
		return null;
	}

	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x3E279A0", Offset = "0x3E279A0", VA = "0x3E279A0")]
	public IEnumerable<JToken> SelectTokens(string path, JsonSelectSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x3E27AF0", Offset = "0x3E27AF0", VA = "0x3E27AF0", Slot = "26")]
	protected virtual DynamicMetaObject GetMetaObject(Expression parameter)
	{
		return null;
	}

	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x3E27BA0", Offset = "0x3E27BA0", VA = "0x3E27BA0", Slot = "11")]
	private DynamicMetaObject System_002EDynamic_002EIDynamicMetaObjectProvider_002EGetMetaObject(Expression parameter)
	{
		return null;
	}

	[Token(Token = "0x6000D3E")]
	[Address(RVA = "0x3E27BC0", Offset = "0x3E27BC0", VA = "0x3E27BC0", Slot = "10")]
	private object System_002EICloneable_002EClone()
	{
		return null;
	}

	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x3E27BE0", Offset = "0x3E27BE0", VA = "0x3E27BE0")]
	public JToken DeepClone()
	{
		return null;
	}

	[Token(Token = "0x6000D40")]
	[Address(RVA = "0x3E27C00", Offset = "0x3E27C00", VA = "0x3E27C00")]
	public JToken DeepClone(JsonCloneSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6000D41")]
	[Address(RVA = "0x3E271A0", Offset = "0x3E271A0", VA = "0x3E271A0")]
	public void AddAnnotation(object annotation)
	{
	}

	[Token(Token = "0x6000D42")]
	public T Annotation<T>() where T : class
	{
		return null;
	}

	[Token(Token = "0x6000D43")]
	[Address(RVA = "0x3E27C20", Offset = "0x3E27C20", VA = "0x3E27C20")]
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
	[Address(RVA = "0x3E27D80", Offset = "0x3E27D80", VA = "0x3E27D80")]
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
	[Address(RVA = "0x3E27E50", Offset = "0x3E27E50", VA = "0x3E27E50")]
	public void RemoveAnnotations(Type type)
	{
	}

	[Token(Token = "0x6000D48")]
	[Address(RVA = "0x3E0C980", Offset = "0x3E0C980", VA = "0x3E0C980")]
	internal void CopyAnnotations(JToken target, JToken source)
	{
	}
}
