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

[Token(Token = "0x200024D")]
public class CallSite
{
	[Token(Token = "0x400043B")]
	[FieldOffset(Offset = "0x10")]
	internal readonly CallSiteBinder _binder;

	[Token(Token = "0x400043C")]
	[FieldOffset(Offset = "0x18")]
	internal bool _match;

	[Token(Token = "0x1700024F")]
	public CallSiteBinder Binder
	{
		[Token(Token = "0x6000B53")]
		[Address(RVA = "0x5E1D0C0", Offset = "0x5E1C0C0", VA = "0x5E1D0C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x5E1D090", Offset = "0x5E1C090", VA = "0x5E1D090")]
	internal CallSite(CallSiteBinder binder)
	{
	}
}
[Token(Token = "0x200024E")]
public class CallSite<T> : CallSite where T : class
{
	[Token(Token = "0x400043D")]
	[FieldOffset(Offset = "0x0")]
	public T Target;

	[Token(Token = "0x400043E")]
	[FieldOffset(Offset = "0x0")]
	internal T[] Rules;

	[Token(Token = "0x400043F")]
	[FieldOffset(Offset = "0x0")]
	private static T s_cachedUpdate;

	[Token(Token = "0x4000440")]
	[FieldOffset(Offset = "0x0")]
	private static T s_cachedNoMatch;

	[Token(Token = "0x17000250")]
	public T Update
	{
		[Token(Token = "0x6000B54")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B55")]
	private CallSite(CallSiteBinder binder)
	{
	}

	[Token(Token = "0x6000B56")]
	private CallSite()
	{
	}

	[Token(Token = "0x6000B57")]
	internal CallSite<T> CreateMatchMaker()
	{
		return null;
	}

	[Token(Token = "0x6000B58")]
	public static CallSite<T> Create(CallSiteBinder binder)
	{
		return null;
	}

	[Token(Token = "0x6000B59")]
	private T GetUpdateDelegate()
	{
		return null;
	}

	[Token(Token = "0x6000B5A")]
	private T GetUpdateDelegate(ref T addr)
	{
		return null;
	}

	[Token(Token = "0x6000B5B")]
	internal void AddRule(T newRule)
	{
	}

	[Token(Token = "0x6000B5C")]
	internal void MoveRule(int i)
	{
	}

	[Token(Token = "0x6000B5D")]
	internal T MakeUpdateDelegate()
	{
		return null;
	}

	[Token(Token = "0x6000B5E")]
	private T CreateCustomUpdateDelegate(MethodInfo invoke)
	{
		return null;
	}

	[Token(Token = "0x6000B5F")]
	private T CreateCustomNoMatchDelegate(MethodInfo invoke)
	{
		return null;
	}

	[Token(Token = "0x6000B60")]
	private static Expression Convert(Expression arg, Type type)
	{
		return null;
	}
}
