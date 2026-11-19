// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.CallSiteBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq.Expressions;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x2000250")]
public abstract class CallSiteBinder
{
	[Token(Token = "0x2000251")]
	private sealed class LambdaSignature<T> where T : class
	{
		[Token(Token = "0x4000447")]
		[FieldOffset(Offset = "0x0")]
		private static LambdaSignature<T> s_instance;

		[Token(Token = "0x4000448")]
		[FieldOffset(Offset = "0x0")]
		internal readonly ReadOnlyCollection<ParameterExpression> Parameters;

		[Token(Token = "0x4000449")]
		[FieldOffset(Offset = "0x0")]
		internal readonly LabelTarget ReturnLabel;

		[Token(Token = "0x17000252")]
		internal static LambdaSignature<T> Instance
		{
			[Token(Token = "0x6000B6F")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000B70")]
		private LambdaSignature()
		{
		}
	}

	[Token(Token = "0x4000445")]
	[FieldOffset(Offset = "0x10")]
	internal Dictionary<Type, object> Cache;

	[Token(Token = "0x17000251")]
	public static LabelTarget UpdateLabel
	{
		[Token(Token = "0x6000B67")]
		[Address(RVA = "0x5E1D0E0", Offset = "0x5E1C0E0", VA = "0x5E1D0E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x5E1D0D0", Offset = "0x5E1C0D0", VA = "0x5E1D0D0")]
	protected CallSiteBinder()
	{
	}

	[Token(Token = "0x6000B68")]
	public abstract Expression Bind(object[] args, ReadOnlyCollection<ParameterExpression> parameters, LabelTarget returnLabel);

	[Token(Token = "0x6000B69")]
	public virtual T BindDelegate<T>(CallSite<T> site, object[] args) where T : class
	{
		return null;
	}

	[Token(Token = "0x6000B6A")]
	internal T BindCore<T>(CallSite<T> site, object[] args) where T : class
	{
		return null;
	}

	[Token(Token = "0x6000B6B")]
	protected void CacheTarget<T>(T target) where T : class
	{
	}

	[Token(Token = "0x6000B6C")]
	private static Expression<T> Stitch<T>(Expression binding, LambdaSignature<T> signature) where T : class
	{
		return null;
	}

	[Token(Token = "0x6000B6D")]
	internal RuleCache<T> GetRuleCache<T>() where T : class
	{
		return null;
	}
}
