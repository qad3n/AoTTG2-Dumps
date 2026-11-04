// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LightLambda
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Dynamic.Utils;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200019E")]
internal class LightLambda
{
	[Token(Token = "0x200019F")]
	private class DebugViewPrinter
	{
		[Token(Token = "0x4000383")]
		[FieldOffset(Offset = "0x10")]
		private readonly Interpreter _interpreter;

		[Token(Token = "0x4000384")]
		[FieldOffset(Offset = "0x18")]
		private readonly Dictionary<int, int> _tryStart;

		[Token(Token = "0x4000385")]
		[FieldOffset(Offset = "0x20")]
		private readonly Dictionary<int, string> _handlerEnter;

		[Token(Token = "0x4000386")]
		[FieldOffset(Offset = "0x28")]
		private readonly Dictionary<int, int> _handlerExit;

		[Token(Token = "0x4000387")]
		[FieldOffset(Offset = "0x30")]
		private string _indent;

		[Token(Token = "0x600093F")]
		[Address(RVA = "0x246A380", Offset = "0x2468980", VA = "0x18246A380")]
		public DebugViewPrinter(Interpreter interpreter)
		{
		}

		[Token(Token = "0x6000940")]
		[Address(RVA = "0x2469930", Offset = "0x2467F30", VA = "0x182469930")]
		private void Analyze()
		{
		}

		[Token(Token = "0x6000941")]
		[Address(RVA = "0x2469870", Offset = "0x2467E70", VA = "0x182469870")]
		private void AddTryStart(int index)
		{
		}

		[Token(Token = "0x6000942")]
		[Address(RVA = "0x24697D0", Offset = "0x2467DD0", VA = "0x1824697D0")]
		private void AddHandlerExit(int index)
		{
		}

		[Token(Token = "0x6000943")]
		[Address(RVA = "0x2469D60", Offset = "0x2468360", VA = "0x182469D60")]
		private void Indent()
		{
		}

		[Token(Token = "0x6000944")]
		[Address(RVA = "0x2469C10", Offset = "0x2468210", VA = "0x182469C10")]
		private void Dedent()
		{
		}

		[Token(Token = "0x6000945")]
		[Address(RVA = "0x2469DB0", Offset = "0x24683B0", VA = "0x182469DB0", Slot = "3")]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x6000946")]
		[Address(RVA = "0x2469C60", Offset = "0x2468260", VA = "0x182469C60")]
		private void EmitExits(StringBuilder sb, int index)
		{
		}
	}

	[Token(Token = "0x400037F")]
	[FieldOffset(Offset = "0x10")]
	private readonly IStrongBox[] _closure;

	[Token(Token = "0x4000380")]
	[FieldOffset(Offset = "0x18")]
	private readonly Interpreter _interpreter;

	[Token(Token = "0x4000381")]
	[FieldOffset(Offset = "0x0")]
	private static readonly CacheDict<Type, Func<LightLambda, Delegate>> _runCache;

	[Token(Token = "0x4000382")]
	[FieldOffset(Offset = "0x20")]
	private readonly LightDelegateCreator _delegateCreator;

	[Token(Token = "0x170001D4")]
	internal string DebugView
	{
		[Token(Token = "0x6000935")]
		[Address(RVA = "0x2472460", Offset = "0x2470A60", VA = "0x182472460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008F4")]
	internal TRet Run0<TRet>()
	{
		return (TRet)null;
	}

	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x2471E50", Offset = "0x2470450", VA = "0x182471E50")]
	internal void RunVoid0()
	{
	}

	[Token(Token = "0x60008F6")]
	internal static Delegate MakeRun0<TRet>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x2471DE0", Offset = "0x24703E0", VA = "0x182471DE0")]
	internal static Delegate MakeRunVoid0(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x60008F8")]
	internal TRet Run1<T0, TRet>(T0 arg0)
	{
		return (TRet)null;
	}

	[Token(Token = "0x60008F9")]
	internal void RunVoid1<T0>(T0 arg0)
	{
	}

	[Token(Token = "0x60008FA")]
	internal static Delegate MakeRun1<T0, TRet>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x60008FB")]
	internal static Delegate MakeRunVoid1<T0>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x60008FC")]
	internal TRet Run2<T0, T1, TRet>(T0 arg0, T1 arg1)
	{
		return (TRet)null;
	}

	[Token(Token = "0x60008FD")]
	internal void RunVoid2<T0, T1>(T0 arg0, T1 arg1)
	{
	}

	[Token(Token = "0x60008FE")]
	internal static Delegate MakeRun2<T0, T1, TRet>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x60008FF")]
	internal static Delegate MakeRunVoid2<T0, T1>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x6000900")]
	internal TRet Run3<T0, T1, T2, TRet>(T0 arg0, T1 arg1, T2 arg2)
	{
		return (TRet)null;
	}

	[Token(Token = "0x6000901")]
	internal void RunVoid3<T0, T1, T2>(T0 arg0, T1 arg1, T2 arg2)
	{
	}

	[Token(Token = "0x6000902")]
	internal static Delegate MakeRun3<T0, T1, T2, TRet>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x6000903")]
	internal static Delegate MakeRunVoid3<T0, T1, T2>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x6000904")]
	internal TRet Run4<T0, T1, T2, T3, TRet>(T0 arg0, T1 arg1, T2 arg2, T3 arg3)
	{
		return (TRet)null;
	}

	[Token(Token = "0x6000905")]
	internal void RunVoid4<T0, T1, T2, T3>(T0 arg0, T1 arg1, T2 arg2, T3 arg3)
	{
	}

	[Token(Token = "0x6000906")]
	internal static Delegate MakeRun4<T0, T1, T2, T3, TRet>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x6000907")]
	internal static Delegate MakeRunVoid4<T0, T1, T2, T3>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x6000908")]
	internal TRet Run5<T0, T1, T2, T3, T4, TRet>(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
	{
		return (TRet)null;
	}

	[Token(Token = "0x6000909")]
	internal void RunVoid5<T0, T1, T2, T3, T4>(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
	{
	}

	[Token(Token = "0x600090A")]
	internal static Delegate MakeRun5<T0, T1, T2, T3, T4, TRet>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x600090B")]
	internal static Delegate MakeRunVoid5<T0, T1, T2, T3, T4>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x600090C")]
	internal TRet Run6<T0, T1, T2, T3, T4, T5, TRet>(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
	{
		return (TRet)null;
	}

	[Token(Token = "0x600090D")]
	internal void RunVoid6<T0, T1, T2, T3, T4, T5>(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
	{
	}

	[Token(Token = "0x600090E")]
	internal static Delegate MakeRun6<T0, T1, T2, T3, T4, T5, TRet>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x600090F")]
	internal static Delegate MakeRunVoid6<T0, T1, T2, T3, T4, T5>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x6000910")]
	internal TRet Run7<T0, T1, T2, T3, T4, T5, T6, TRet>(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6)
	{
		return (TRet)null;
	}

	[Token(Token = "0x6000911")]
	internal void RunVoid7<T0, T1, T2, T3, T4, T5, T6>(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6)
	{
	}

	[Token(Token = "0x6000912")]
	internal static Delegate MakeRun7<T0, T1, T2, T3, T4, T5, T6, TRet>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x6000913")]
	internal static Delegate MakeRunVoid7<T0, T1, T2, T3, T4, T5, T6>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x6000914")]
	internal TRet Run8<T0, T1, T2, T3, T4, T5, T6, T7, TRet>(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7)
	{
		return (TRet)null;
	}

	[Token(Token = "0x6000915")]
	internal void RunVoid8<T0, T1, T2, T3, T4, T5, T6, T7>(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7)
	{
	}

	[Token(Token = "0x6000916")]
	internal static Delegate MakeRun8<T0, T1, T2, T3, T4, T5, T6, T7, TRet>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x6000917")]
	internal static Delegate MakeRunVoid8<T0, T1, T2, T3, T4, T5, T6, T7>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x6000918")]
	internal TRet Run9<T0, T1, T2, T3, T4, T5, T6, T7, T8, TRet>(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8)
	{
		return (TRet)null;
	}

	[Token(Token = "0x6000919")]
	internal void RunVoid9<T0, T1, T2, T3, T4, T5, T6, T7, T8>(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8)
	{
	}

	[Token(Token = "0x600091A")]
	internal static Delegate MakeRun9<T0, T1, T2, T3, T4, T5, T6, T7, T8, TRet>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x600091B")]
	internal static Delegate MakeRunVoid9<T0, T1, T2, T3, T4, T5, T6, T7, T8>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x600091C")]
	internal TRet Run10<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, TRet>(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9)
	{
		return (TRet)null;
	}

	[Token(Token = "0x600091D")]
	internal void RunVoid10<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9)
	{
	}

	[Token(Token = "0x600091E")]
	internal static Delegate MakeRun10<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, TRet>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x600091F")]
	internal static Delegate MakeRunVoid10<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x6000920")]
	internal TRet Run11<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, TRet>(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10)
	{
		return (TRet)null;
	}

	[Token(Token = "0x6000921")]
	internal void RunVoid11<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10)
	{
	}

	[Token(Token = "0x6000922")]
	internal static Delegate MakeRun11<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, TRet>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x6000923")]
	internal static Delegate MakeRunVoid11<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x6000924")]
	internal TRet Run12<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, TRet>(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11)
	{
		return (TRet)null;
	}

	[Token(Token = "0x6000925")]
	internal void RunVoid12<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11)
	{
	}

	[Token(Token = "0x6000926")]
	internal static Delegate MakeRun12<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, TRet>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x6000927")]
	internal static Delegate MakeRunVoid12<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x6000928")]
	internal TRet Run13<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, TRet>(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12)
	{
		return (TRet)null;
	}

	[Token(Token = "0x6000929")]
	internal void RunVoid13<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12)
	{
	}

	[Token(Token = "0x600092A")]
	internal static Delegate MakeRun13<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, TRet>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x600092B")]
	internal static Delegate MakeRunVoid13<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x600092C")]
	internal TRet Run14<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, TRet>(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13)
	{
		return (TRet)null;
	}

	[Token(Token = "0x600092D")]
	internal void RunVoid14<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13)
	{
	}

	[Token(Token = "0x600092E")]
	internal static Delegate MakeRun14<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, TRet>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x600092F")]
	internal static Delegate MakeRunVoid14<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x6000930")]
	internal TRet Run15<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, TRet>(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14)
	{
		return (TRet)null;
	}

	[Token(Token = "0x6000931")]
	internal void RunVoid15<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14)
	{
	}

	[Token(Token = "0x6000932")]
	internal static Delegate MakeRun15<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, TRet>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x6000933")]
	internal static Delegate MakeRunVoid15<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(LightLambda lambda)
	{
		return null;
	}

	[Token(Token = "0x6000934")]
	[Address(RVA = "0x24723F0", Offset = "0x24709F0", VA = "0x1824723F0")]
	internal LightLambda(LightDelegateCreator delegateCreator, IStrongBox[] closure)
	{
	}

	[Token(Token = "0x6000936")]
	[Address(RVA = "0x2471250", Offset = "0x246F850", VA = "0x182471250")]
	private static Func<LightLambda, Delegate> GetRunDelegateCtor(Type delegateType)
	{
		return null;
	}

	[Token(Token = "0x6000937")]
	[Address(RVA = "0x24714D0", Offset = "0x246FAD0", VA = "0x1824714D0")]
	private static Func<LightLambda, Delegate> MakeRunDelegateCtor(Type delegateType)
	{
		return null;
	}

	[Token(Token = "0x6000938")]
	[Address(RVA = "0x2470A90", Offset = "0x246F090", VA = "0x182470A90")]
	private Delegate CreateCustomDelegate(Type delegateType)
	{
		return null;
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x24713E0", Offset = "0x246F9E0", VA = "0x1824713E0")]
	internal Delegate MakeDelegate(Type delegateType)
	{
		return null;
	}

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x2471460", Offset = "0x246FA60", VA = "0x182471460")]
	private InterpretedFrame MakeFrame()
	{
		return null;
	}

	[Token(Token = "0x600093B")]
	internal void RunVoidRef2<T0, T1>(ref T0 arg0, ref T1 arg1)
	{
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x2472160", Offset = "0x2470760", VA = "0x182472160")]
	public object Run(params object[] arguments)
	{
		return null;
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x2471F70", Offset = "0x2470570", VA = "0x182471F70")]
	public object RunVoid(params object[] arguments)
	{
		return null;
	}
}
