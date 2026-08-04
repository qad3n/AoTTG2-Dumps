// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.CallSite
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Linq.Expressions;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x200024C")]
public class CallSite
{
	[Token(Token = "0x4000432")]
	[FieldOffset(Offset = "0x10")]
	internal readonly CallSiteBinder _binder;

	[Token(Token = "0x4000433")]
	[FieldOffset(Offset = "0x18")]
	internal bool _match;

	[Token(Token = "0x1700024D")]
	public CallSiteBinder Binder
	{
		[Token(Token = "0x6000B49")]
		[Address(RVA = "0x4508020", Offset = "0x4508020", VA = "0x4508020")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x4507FF0", Offset = "0x4507FF0", VA = "0x4507FF0")]
	internal CallSite(CallSiteBinder binder)
	{
	}
}
[Token(Token = "0x200024D")]
public class CallSite<T> : CallSite where T : class
{
	[Token(Token = "0x4000434")]
	[FieldOffset(Offset = "0x0")]
	public T Target;

	[Token(Token = "0x4000435")]
	[FieldOffset(Offset = "0x0")]
	internal T[] Rules;

	[Token(Token = "0x4000436")]
	[FieldOffset(Offset = "0x0")]
	private static T s_cachedUpdate;

	[Token(Token = "0x4000437")]
	[FieldOffset(Offset = "0x0")]
	private static T s_cachedNoMatch;

	[Token(Token = "0x1700024E")]
	public T Update
	{
		[Token(Token = "0x6000B4A")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B4B")]
	private CallSite(CallSiteBinder binder)
	{
	}

	[Token(Token = "0x6000B4C")]
	private CallSite()
	{
	}

	[Token(Token = "0x6000B4D")]
	internal CallSite<T> CreateMatchMaker()
	{
		return null;
	}

	[Token(Token = "0x6000B4E")]
	public static CallSite<T> Create(CallSiteBinder binder)
	{
		return null;
	}

	[Token(Token = "0x6000B4F")]
	private T GetUpdateDelegate()
	{
		return null;
	}

	[Token(Token = "0x6000B50")]
	private T GetUpdateDelegate(ref T addr)
	{
		return null;
	}

	[Token(Token = "0x6000B51")]
	internal void AddRule(T newRule)
	{
	}

	[Token(Token = "0x6000B52")]
	internal void MoveRule(int i)
	{
	}

	[Token(Token = "0x6000B53")]
	internal T MakeUpdateDelegate()
	{
		return null;
	}

	[Token(Token = "0x6000B54")]
	private T CreateCustomUpdateDelegate(MethodInfo invoke)
	{
		return null;
	}

	[Token(Token = "0x6000B55")]
	private T CreateCustomNoMatchDelegate(MethodInfo invoke)
	{
		return null;
	}

	[Token(Token = "0x6000B56")]
	private static Expression Convert(Expression arg, Type type)
	{
		return null;
	}
}
