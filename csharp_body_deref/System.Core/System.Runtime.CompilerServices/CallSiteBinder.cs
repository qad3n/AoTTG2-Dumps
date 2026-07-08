using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq.Expressions;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x200024F")]
public abstract class CallSiteBinder
{
	[Token(Token = "0x2000250")]
	private sealed class LambdaSignature<T> where T : class
	{
		[Token(Token = "0x400043E")]
		[FieldOffset(Offset = "0x0")]
		private static LambdaSignature<T> s_instance;

		[Token(Token = "0x400043F")]
		[FieldOffset(Offset = "0x0")]
		internal readonly ReadOnlyCollection<ParameterExpression> Parameters;

		[Token(Token = "0x4000440")]
		[FieldOffset(Offset = "0x0")]
		internal readonly LabelTarget ReturnLabel;

		[Token(Token = "0x17000250")]
		internal static LambdaSignature<T> Instance
		{
			[Token(Token = "0x6000B65")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000B66")]
		private LambdaSignature()
		{
		}
	}

	[Token(Token = "0x400043C")]
	[FieldOffset(Offset = "0x10")]
	internal Dictionary<Type, object> Cache;

	[Token(Token = "0x1700024F")]
	public static LabelTarget UpdateLabel
	{
		[Token(Token = "0x6000B5D")]
		[Address(RVA = "0x41E2F40", Offset = "0x41E2F40", VA = "0x41E2F40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x41E2F30", Offset = "0x41E2F30", VA = "0x41E2F30")]
	protected CallSiteBinder()
	{
	}

	[Token(Token = "0x6000B5E")]
	public abstract Expression Bind(object[] args, ReadOnlyCollection<ParameterExpression> parameters, LabelTarget returnLabel);

	[Token(Token = "0x6000B5F")]
	public virtual T BindDelegate<T>(CallSite<T> site, object[] args) where T : class
	{
		return null;
	}

	[Token(Token = "0x6000B60")]
	internal T BindCore<T>(CallSite<T> site, object[] args) where T : class
	{
		return null;
	}

	[Token(Token = "0x6000B61")]
	protected void CacheTarget<T>(T target) where T : class
	{
	}

	[Token(Token = "0x6000B62")]
	private static Expression<T> Stitch<T>(Expression binding, LambdaSignature<T> signature) where T : class
	{
		return null;
	}

	[Token(Token = "0x6000B63")]
	internal RuleCache<T> GetRuleCache<T>() where T : class
	{
		return null;
	}
}
